#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8006AD84_46184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006AD84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8006AD88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8006AD8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006AD90: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8006AD94: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006AD98: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8006AD9C: lhu         $s1, 0x11C($s0)
    ctx->r17 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006ADA0: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x8006ADA4: beq         $v0, $zero, L_8006AF78
    if (ctx->r2 == 0) {
        // 0x8006ADA8: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8006AF78;
    }
    // 0x8006ADA8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8006ADAC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006ADB0: addu        $at, $at, $v0
    gpr jr_addend_8006ADB8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006ADB4: lw          $v0, 0x2828($at)
    ctx->r2 = ADD32(ctx->r1, 0X2828);
    // 0x8006ADB8: jr          $v0
    // 0x8006ADBC: nop

    switch (jr_addend_8006ADB8 >> 2) {
        case 0: goto L_8006ADC0; break;
        case 1: goto L_8006AE0C; break;
        case 2: goto L_8006AE90; break;
        case 3: goto L_8006AEF0; break;
        case 4: goto L_8006AF40; break;
        case 5: goto L_8006AF60; break;
        case 6: goto L_8006AF78; break;
        default: switch_error(__func__, 0x8006ADB8, 0x800D2828);
    }
    // 0x8006ADBC: nop

L_8006ADC0:
    // 0x8006ADC0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006ADC4: lhu         $v1, 0x148($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X148);
    // 0x8006ADC8: sb          $zero, 0x112($s0)
    MEM_B(0X112, ctx->r16) = 0;
    // 0x8006ADCC: sh          $zero, 0x116($s0)
    MEM_H(0X116, ctx->r16) = 0;
    // 0x8006ADD0: sh          $zero, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = 0;
    // 0x8006ADD4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006ADD8: and         $v1, $v1, $s1
    ctx->r3 = ctx->r3 & ctx->r17;
    // 0x8006ADDC: bne         $v1, $zero, L_8006ADE8
    if (ctx->r3 != 0) {
        // 0x8006ADE0: sb          $v0, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r2;
            goto L_8006ADE8;
    }
    // 0x8006ADE0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8006ADE4: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
L_8006ADE8:
    // 0x8006ADE8: jal         0x800700D8
    // 0x8006ADEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800700D8_4B4D8(rdram, ctx);
        goto after_0;
    // 0x8006ADEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8006ADF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006ADF4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8006ADF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006ADFC: jal         0x8006FB90
    // 0x8006AE00: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_1;
    // 0x8006AE00: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8006AE04: j           L_8006AF78
    // 0x8006AE08: nop

        goto L_8006AF78;
    // 0x8006AE08: nop

L_8006AE0C:
    // 0x8006AE0C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8006AE10: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8006AE14: bne         $v1, $v0, L_8006AF78
    if (ctx->r3 != ctx->r2) {
        // 0x8006AE18: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8006AF78;
    }
    // 0x8006AE18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006AE1C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8006AE20: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8006AE24: lbu         $a0, 0x16B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X16B);
    // 0x8006AE28: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x8006AE2C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8006AE30: andi        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 & 0X1;
    // 0x8006AE34: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8006AE38: beq         $a0, $zero, L_8006AE48
    if (ctx->r4 == 0) {
        // 0x8006AE3C: sb          $a1, 0xAD($s0)
        MEM_B(0XAD, ctx->r16) = ctx->r5;
            goto L_8006AE48;
    }
    // 0x8006AE3C: sb          $a1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r5;
    // 0x8006AE40: j           L_8006AE4C
    // 0x8006AE44: addiu       $v0, $zero, -0x320
    ctx->r2 = ADD32(0, -0X320);
        goto L_8006AE4C;
    // 0x8006AE44: addiu       $v0, $zero, -0x320
    ctx->r2 = ADD32(0, -0X320);
L_8006AE48:
    // 0x8006AE48: addiu       $v0, $zero, -0x1C0
    ctx->r2 = ADD32(0, -0X1C0);
L_8006AE4C:
    // 0x8006AE4C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8006AE50: jal         0x80070100
    // 0x8006AE54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070100_4B500(rdram, ctx);
        goto after_2;
    // 0x8006AE54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8006AE58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006AE5C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x8006AE60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006AE64: jal         0x8006FB90
    // 0x8006AE68: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_3;
    // 0x8006AE68: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x8006AE6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006AE70: jal         0x8006ABE0
    // 0x8006AE74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8006ABE0_45FE0(rdram, ctx);
        goto after_4;
    // 0x8006AE74: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_4:
    // 0x8006AE78: addiu       $a0, $zero, 0x92
    ctx->r4 = ADD32(0, 0X92);
    // 0x8006AE7C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8006AE80: jal         0x8002A2F8
    // 0x8006AE84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_5;
    // 0x8006AE84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8006AE88: j           L_8006AF78
    // 0x8006AE8C: nop

        goto L_8006AF78;
    // 0x8006AE8C: nop

L_8006AE90:
    // 0x8006AE90: lb          $a1, 0x112($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X112);
    // 0x8006AE94: jal         0x8006ABE0
    // 0x8006AE98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006ABE0_45FE0(rdram, ctx);
        goto after_6;
    // 0x8006AE98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8006AE9C: lhu         $v0, 0x138($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X138);
    // 0x8006AEA0: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006AEA4: beq         $v0, $zero, L_8006AEE0
    if (ctx->r2 == 0) {
        // 0x8006AEA8: nop
    
            goto L_8006AEE0;
    }
    // 0x8006AEA8: nop

    // 0x8006AEAC: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8006AEB0: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8006AEB4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8006AEB8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8006AEBC: bltz        $v0, L_8006AF78
    if (SIGNED(ctx->r2) < 0) {
        // 0x8006AEC0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006AF78;
    }
    // 0x8006AEC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006AEC4: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x8006AEC8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006AECC: jal         0x8006FB90
    // 0x8006AED0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_7;
    // 0x8006AED0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
    // 0x8006AED4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006AED8: j           L_8006AF38
    // 0x8006AEDC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_8006AF38;
    // 0x8006AEDC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8006AEE0:
    // 0x8006AEE0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006AEE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006AEE8: j           L_8006AF78
    // 0x8006AEEC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8006AF78;
    // 0x8006AEEC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006AEF0:
    // 0x8006AEF0: lb          $a1, 0x112($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X112);
    // 0x8006AEF4: jal         0x8006ABE0
    // 0x8006AEF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006ABE0_45FE0(rdram, ctx);
        goto after_8;
    // 0x8006AEF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8006AEFC: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x8006AF00: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8006AF04: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8006AF08: slti        $v0, $v0, 0x241
    ctx->r2 = SIGNED(ctx->r2) < 0X241 ? 1 : 0;
    // 0x8006AF0C: bnel        $v0, $zero, L_8006AF1C
    if (ctx->r2 != 0) {
        // 0x8006AF10: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006AF1C;
    }
    goto skip_0;
    // 0x8006AF10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x8006AF14: j           L_8006AF74
    // 0x8006AF18: addiu       $v0, $v1, 0x240
    ctx->r2 = ADD32(ctx->r3, 0X240);
        goto L_8006AF74;
    // 0x8006AF18: addiu       $v0, $v1, 0x240
    ctx->r2 = ADD32(ctx->r3, 0X240);
L_8006AF1C:
    // 0x8006AF1C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x8006AF20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006AF24: jal         0x8006FB90
    // 0x8006AF28: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_9;
    // 0x8006AF28: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_9:
    // 0x8006AF2C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006AF30: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8006AF34: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8006AF38:
    // 0x8006AF38: j           L_8006AF78
    // 0x8006AF3C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8006AF78;
    // 0x8006AF3C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006AF40:
    // 0x8006AF40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006AF44: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x8006AF48: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006AF4C: jal         0x8006FB90
    // 0x8006AF50: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_10;
    // 0x8006AF50: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x8006AF54: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006AF58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006AF5C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006AF60:
    // 0x8006AF60: lb          $a1, 0x112($s0)
    ctx->r5 = MEM_B(ctx->r16, 0X112);
    // 0x8006AF64: jal         0x8006ABE0
    // 0x8006AF68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006ABE0_45FE0(rdram, ctx);
        goto after_11;
    // 0x8006AF68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x8006AF6C: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8006AF70: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
L_8006AF74:
    // 0x8006AF74: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8006AF78:
    // 0x8006AF78: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8006AF7C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006AF80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8006AF84: jr          $ra
    // 0x8006AF88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8006AF88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008B0F8_664F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B0F8: beq         $a0, $zero, L_8008B114
    if (ctx->r4 == 0) {
        // 0x8008B0FC: nop
    
            goto L_8008B114;
    }
    // 0x8008B0FC: nop

    // 0x8008B100: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8008B104: bgez        $v0, L_8008B114
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8008B108: nop
    
            goto L_8008B114;
    }
    // 0x8008B108: nop

    // 0x8008B10C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008B110: sw          $a0, 0x4FAC($at)
    MEM_W(0X4FAC, ctx->r1) = ctx->r4;
L_8008B114:
    // 0x8008B114: jr          $ra
    // 0x8008B118: nop

    TRACE_RETURN()
    return;
    // 0x8008B118: nop

;}
RECOMP_FUNC void func_800597A8_34BA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800597A8: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x800597AC: lh          $a1, -0x3E36($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X3E36);
    // 0x800597B0: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x800597B4: lw          $t1, -0x3E18($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3E18);
    // 0x800597B8: mult        $t1, $a1
    result = S64(S32(ctx->r9)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800597BC: mflo        $t1
    ctx->r9 = lo;
    // 0x800597C0: lui         $t6, 0x801C
    ctx->r14 = S32(0X801C << 16);
    // 0x800597C4: lw          $t6, -0x3DFC($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X3DFC);
    // 0x800597C8: addiu       $t0, $zero, 0x10
    ctx->r8 = ADD32(0, 0X10);
    // 0x800597CC: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x800597D0: mult        $t6, $t0
    result = S64(S32(ctx->r14)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800597D4: mflo        $t6
    ctx->r14 = lo;
    // 0x800597D8: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x800597DC: lw          $a2, -0x3E14($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3E14);
    // 0x800597E0: mult        $a2, $a1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800597E4: mflo        $a2
    ctx->r6 = lo;
    // 0x800597E8: lui         $t4, 0x801C
    ctx->r12 = S32(0X801C << 16);
    // 0x800597EC: lw          $t4, -0x3DF8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3DF8);
    // 0x800597F0: mult        $t4, $t0
    result = S64(S32(ctx->r12)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800597F4: mflo        $t4
    ctx->r12 = lo;
    // 0x800597F8: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x800597FC: lw          $a3, -0x3E10($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X3E10);
    // 0x80059800: mult        $a3, $a1
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80059804: mflo        $a3
    ctx->r7 = lo;
    // 0x80059808: lui         $t5, 0x801C
    ctx->r13 = S32(0X801C << 16);
    // 0x8005980C: lw          $t5, -0x3DF4($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X3DF4);
    // 0x80059810: mult        $t5, $t0
    result = S64(S32(ctx->r13)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80059814: mflo        $t5
    ctx->r13 = lo;
    // 0x80059818: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8005981C: lw          $a0, -0x3E08($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3E08);
    // 0x80059820: mult        $a0, $a1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80059824: mflo        $a0
    ctx->r4 = lo;
    // 0x80059828: lui         $t3, 0x801C
    ctx->r11 = S32(0X801C << 16);
    // 0x8005982C: lw          $t3, -0x3DEC($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3DEC);
    // 0x80059830: mult        $t3, $t0
    result = S64(S32(ctx->r11)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80059834: mflo        $t3
    ctx->r11 = lo;
    // 0x80059838: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005983C: lw          $v1, -0x3E04($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3E04);
    // 0x80059840: mult        $v1, $a1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80059844: mflo        $v1
    ctx->r3 = lo;
    // 0x80059848: lui         $t2, 0x801C
    ctx->r10 = S32(0X801C << 16);
    // 0x8005984C: lw          $t2, -0x3DE8($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X3DE8);
    // 0x80059850: mult        $t2, $t0
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80059854: mflo        $t2
    ctx->r10 = lo;
    // 0x80059858: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005985C: lw          $v0, -0x3E00($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3E00);
    // 0x80059860: mult        $v0, $a1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80059864: mflo        $v0
    ctx->r2 = lo;
    // 0x80059868: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8005986C: lw          $a1, -0x3DE4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3DE4);
    // 0x80059870: mult        $a1, $t0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80059874: mflo        $a1
    ctx->r5 = lo;
    // 0x80059878: addu        $t1, $t1, $t6
    ctx->r9 = ADD32(ctx->r9, ctx->r14);
    // 0x8005987C: sra         $t1, $t1, 4
    ctx->r9 = S32(SIGNED(ctx->r9) >> 4);
    // 0x80059880: addu        $a2, $a2, $t4
    ctx->r6 = ADD32(ctx->r6, ctx->r12);
    // 0x80059884: sra         $a2, $a2, 4
    ctx->r6 = S32(SIGNED(ctx->r6) >> 4);
    // 0x80059888: addu        $a3, $a3, $t5
    ctx->r7 = ADD32(ctx->r7, ctx->r13);
    // 0x8005988C: sra         $a3, $a3, 4
    ctx->r7 = S32(SIGNED(ctx->r7) >> 4);
    // 0x80059890: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x80059894: sra         $a0, $a0, 4
    ctx->r4 = S32(SIGNED(ctx->r4) >> 4);
    // 0x80059898: addu        $v1, $v1, $t2
    ctx->r3 = ADD32(ctx->r3, ctx->r10);
    // 0x8005989C: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x800598A0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800598A4: sw          $t1, -0x3E34($at)
    MEM_W(-0X3E34, ctx->r1) = ctx->r9;
    // 0x800598A8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800598AC: sw          $a2, -0x3E30($at)
    MEM_W(-0X3E30, ctx->r1) = ctx->r6;
    // 0x800598B0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800598B4: sw          $a3, -0x3E2C($at)
    MEM_W(-0X3E2C, ctx->r1) = ctx->r7;
    // 0x800598B8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800598BC: sw          $a0, -0x3E24($at)
    MEM_W(-0X3E24, ctx->r1) = ctx->r4;
    // 0x800598C0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800598C4: sw          $v1, -0x3E20($at)
    MEM_W(-0X3E20, ctx->r1) = ctx->r3;
    // 0x800598C8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800598CC: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x800598D0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800598D4: jr          $ra
    // 0x800598D8: sw          $v0, -0x3E1C($at)
    MEM_W(-0X3E1C, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800598D8: sw          $v0, -0x3E1C($at)
    MEM_W(-0X3E1C, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_800859B0_60DB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800859B0: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x800859B4: sw          $s1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r17;
    // 0x800859B8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x800859BC: addiu       $a0, $zero, 0x50
    ctx->r4 = ADD32(0, 0X50);
    // 0x800859C0: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x800859C4: sw          $s4, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r20;
    // 0x800859C8: sw          $s3, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r19;
    // 0x800859CC: sw          $s2, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r18;
    // 0x800859D0: jal         0x800281C8
    // 0x800859D4: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    func_800281C8_35C8(rdram, ctx);
        goto after_0;
    // 0x800859D4: sw          $s0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r16;
    after_0:
    // 0x800859D8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x800859DC: beq         $s2, $zero, L_80085BA4
    if (ctx->r18 == 0) {
        // 0x800859E0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80085BA4;
    }
    // 0x800859E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800859E4: jal         0x80085BC4
    // 0x800859E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80085BC4_60FC4(rdram, ctx);
        goto after_1;
    // 0x800859E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x800859EC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x800859F0: lbu         $v0, 0x24($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X24);
    // 0x800859F4: lbu         $a1, 0xC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XC);
    // 0x800859F8: lbu         $v1, 0x25($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X25);
    // 0x800859FC: lbu         $a2, 0xD($s1)
    ctx->r6 = MEM_BU(ctx->r17, 0XD);
    // 0x80085A00: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80085A04: addiu       $s3, $v0, 0x1
    ctx->r19 = ADD32(ctx->r2, 0X1);
    // 0x80085A08: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x80085A0C: jal         0x8002C654
    // 0x80085A10: addiu       $s4, $v1, 0x1
    ctx->r20 = ADD32(ctx->r3, 0X1);
    func_8002C654_7A54(rdram, ctx);
        goto after_2;
    // 0x80085A10: addiu       $s4, $v1, 0x1
    ctx->r20 = ADD32(ctx->r3, 0X1);
    after_2:
    // 0x80085A14: lhu         $v0, 0x20($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X20);
    // 0x80085A18: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80085A1C: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80085A20: srl         $v0, $v0, 24
    ctx->r2 = S32(U32(ctx->r2) >> 24);
    // 0x80085A24: beq         $v0, $zero, L_80085A34
    if (ctx->r2 == 0) {
        // 0x80085A28: sll         $a0, $a0, 6
        ctx->r4 = S32(ctx->r4 << 6);
            goto L_80085A34;
    }
    // 0x80085A28: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    // 0x80085A2C: jal         0x80031BB4
    // 0x80085A30: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_3;
    // 0x80085A30: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_3:
L_80085A34:
    // 0x80085A34: lbu         $v0, 0x21($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X21);
    // 0x80085A38: beq         $v0, $zero, L_80085A64
    if (ctx->r2 == 0) {
        // 0x80085A3C: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_80085A64;
    }
    // 0x80085A3C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80085A40: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80085A44: lbu         $v1, 0xB61($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB61);
    // 0x80085A48: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x80085A4C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80085A50: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x80085A54: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x80085A58: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x80085A5C: jal         0x80031DA8
    // 0x80085A60: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_4;
    // 0x80085A60: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    after_4:
L_80085A64:
    // 0x80085A64: lw          $a0, 0x18($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X18);
    // 0x80085A68: xor         $v1, $a0, $s3
    ctx->r3 = ctx->r4 ^ ctx->r19;
    // 0x80085A6C: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x80085A70: xor         $v0, $a0, $s4
    ctx->r2 = ctx->r4 ^ ctx->r20;
    // 0x80085A74: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80085A78: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80085A7C: beq         $v1, $zero, L_80085AD4
    if (ctx->r3 == 0) {
        // 0x80085A80: sll         $v0, $a0, 12
        ctx->r2 = S32(ctx->r4 << 12);
            goto L_80085AD4;
    }
    // 0x80085A80: sll         $v0, $a0, 12
    ctx->r2 = S32(ctx->r4 << 12);
    // 0x80085A84: div         $zero, $v0, $s3
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r19))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r19)));
    // 0x80085A88: bne         $s3, $zero, L_80085A94
    if (ctx->r19 != 0) {
        // 0x80085A8C: nop
    
            goto L_80085A94;
    }
    // 0x80085A8C: nop

    // 0x80085A90: break       7
    do_break(2148031120);
L_80085A94:
    // 0x80085A94: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80085A98: bne         $s3, $at, L_80085AAC
    if (ctx->r19 != ctx->r1) {
        // 0x80085A9C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80085AAC;
    }
    // 0x80085A9C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80085AA0: bne         $v0, $at, L_80085AAC
    if (ctx->r2 != ctx->r1) {
        // 0x80085AA4: nop
    
            goto L_80085AAC;
    }
    // 0x80085AA4: nop

    // 0x80085AA8: break       6
    do_break(2148031144);
L_80085AAC:
    // 0x80085AAC: mflo        $v0
    ctx->r2 = lo;
    // 0x80085AB0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80085AB4: lbu         $v1, 0xB61($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB61);
    // 0x80085AB8: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80085ABC: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x80085AC0: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x80085AC4: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x80085AC8: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x80085ACC: jal         0x80031DA8
    // 0x80085AD0: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_5;
    // 0x80085AD0: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    after_5:
L_80085AD4:
    // 0x80085AD4: lh          $v0, 0x8($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X8);
    // 0x80085AD8: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80085ADC: lbu         $v1, 0xB61($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB61);
    // 0x80085AE0: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x80085AE4: sh          $v0, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r2;
    // 0x80085AE8: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x80085AEC: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x80085AF0: sh          $v0, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r2;
    // 0x80085AF4: lh          $v0, 0x10($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X10);
    // 0x80085AF8: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x80085AFC: addiu       $s0, $s0, 0x4760
    ctx->r16 = ADD32(ctx->r16, 0X4760);
    // 0x80085B00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80085B04: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x80085B08: jal         0x80031E5C
    // 0x80085B0C: sh          $v0, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r2;
    func_80031E5C_D25C(rdram, ctx);
        goto after_6;
    // 0x80085B0C: sh          $v0, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r2;
    after_6:
    // 0x80085B10: jal         0x80031E94
    // 0x80085B14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031E94_D294(rdram, ctx);
        goto after_7;
    // 0x80085B14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80085B18: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x80085B1C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80085B20: jal         0x80032068
    // 0x80085B24: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    func_80032068_D468(rdram, ctx);
        goto after_8;
    // 0x80085B24: addiu       $a2, $sp, 0x60
    ctx->r6 = ADD32(ctx->r29, 0X60);
    after_8:
    // 0x80085B28: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x80085B2C: bltz        $v0, L_80085BA0
    if (SIGNED(ctx->r2) < 0) {
        // 0x80085B30: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_80085BA0;
    }
    // 0x80085B30: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80085B34: lhu         $v0, 0xE($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XE);
    // 0x80085B38: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80085B3C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80085B40: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80085B44: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
    // 0x80085B48: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80085B4C: sw          $v0, 0x44($s2)
    MEM_W(0X44, ctx->r18) = ctx->r2;
    // 0x80085B50: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x80085B54: sb          $v0, 0x48($s2)
    MEM_B(0X48, ctx->r18) = ctx->r2;
    // 0x80085B58: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x80085B5C: sb          $s3, 0x4A($s2)
    MEM_B(0X4A, ctx->r18) = ctx->r19;
    // 0x80085B60: sb          $s4, 0x4B($s2)
    MEM_B(0X4B, ctx->r18) = ctx->r20;
    // 0x80085B64: sb          $v0, 0x49($s2)
    MEM_B(0X49, ctx->r18) = ctx->r2;
    // 0x80085B68: lhu         $v0, 0x26($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X26);
    // 0x80085B6C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80085B70: jal         0x8002C5A4
    // 0x80085B74: sb          $v0, 0x4C($s2)
    MEM_B(0X4C, ctx->r18) = ctx->r2;
    func_8002C5A4_79A4(rdram, ctx);
        goto after_9;
    // 0x80085B74: sb          $v0, 0x4C($s2)
    MEM_B(0X4C, ctx->r18) = ctx->r2;
    after_9:
    // 0x80085B78: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80085B7C: lhu         $v0, 0x36($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X36);
    // 0x80085B80: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80085B84: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x80085B88: addiu       $a2, $a2, 0x5404
    ctx->r6 = ADD32(ctx->r6, 0X5404);
    // 0x80085B8C: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x80085B90: jal         0x80028220
    // 0x80085B94: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80028220_3620(rdram, ctx);
        goto after_10;
    // 0x80085B94: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_10:
    // 0x80085B98: j           L_80085BA4
    // 0x80085B9C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
        goto L_80085BA4;
    // 0x80085B9C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_80085BA0:
    // 0x80085BA0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80085BA4:
    // 0x80085BA4: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x80085BA8: lw          $s4, 0x78($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X78);
    // 0x80085BAC: lw          $s3, 0x74($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X74);
    // 0x80085BB0: lw          $s2, 0x70($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X70);
    // 0x80085BB4: lw          $s1, 0x6C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X6C);
    // 0x80085BB8: lw          $s0, 0x68($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X68);
    // 0x80085BBC: jr          $ra
    // 0x80085BC0: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x80085BC0: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_8006F74C_4AB4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006F74C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006F750: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006F754: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006F758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006F75C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006F760: bne         $v0, $zero, L_8006F780
    if (ctx->r2 != 0) {
        // 0x8006F764: addiu       $a1, $zero, 0x36
        ctx->r5 = ADD32(0, 0X36);
            goto L_8006F780;
    }
    // 0x8006F764: addiu       $a1, $zero, 0x36
    ctx->r5 = ADD32(0, 0X36);
    // 0x8006F768: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006F76C: jal         0x8006FB90
    // 0x8006F770: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_0;
    // 0x8006F770: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8006F774: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006F778: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006F77C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006F780:
    // 0x8006F780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006F784: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006F788: jr          $ra
    // 0x8006F78C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006F78C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002C238_7638(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002C238: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x8002C23C: sdc1        $f24, 0x70($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X70, ctx->r29);
    // 0x8002C240: lwc1        $f24, 0x98($sp)
    ctx->f24.u32l = MEM_W(ctx->r29, 0X98);
    // 0x8002C244: sdc1        $f26, 0x78($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X78, ctx->r29);
    // 0x8002C248: lwc1        $f26, 0x9C($sp)
    ctx->f26.u32l = MEM_W(ctx->r29, 0X9C);
    // 0x8002C24C: sdc1        $f28, 0x80($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X80, ctx->r29);
    // 0x8002C250: lwc1        $f28, 0xA0($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0XA0);
    // 0x8002C254: sdc1        $f20, 0x60($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X60, ctx->r29);
    // 0x8002C258: mtc1        $a2, $f20
    ctx->f20.u32l = ctx->r6;
    // 0x8002C25C: sw          $s2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r18;
    // 0x8002C260: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8002C264: sw          $s1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r17;
    // 0x8002C268: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8002C26C: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x8002C270: addiu       $s0, $sp, 0x10
    ctx->r16 = ADD32(ctx->r29, 0X10);
    // 0x8002C274: sdc1        $f22, 0x68($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X68, ctx->r29);
    // 0x8002C278: mtc1        $a3, $f22
    ctx->f22.u32l = ctx->r7;
    // 0x8002C27C: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8002C280: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8002C284: swc1        $f24, 0xB18($at)
    MEM_W(0XB18, ctx->r1) = ctx->f24.u32l;
    // 0x8002C288: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8002C28C: swc1        $f26, -0x26D8($at)
    MEM_W(-0X26D8, ctx->r1) = ctx->f26.u32l;
    // 0x8002C290: jal         0x8009CCA0
    // 0x8002C294: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8009CCA0_780A0(rdram, ctx);
        goto after_0;
    // 0x8002C294: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8002C298: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8002C29C: ldc1        $f0, 0x1D30($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X1D30);
    // 0x8002C2A0: cvt.d.s     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.d = CVT_D_S(ctx->f20.fl);
    // 0x8002C2A4: mul.d       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.d); NAN_CHECK(ctx->f0.d); 
    ctx->f20.d = MUL_D(ctx->f20.d, ctx->f0.d);
    // 0x8002C2A8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8002C2AC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8002C2B0: cvt.s.d     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.d); 
    ctx->f20.fl = CVT_S_D(ctx->f20.d);
    // 0x8002C2B4: div.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8002C2B8: jal         0x80099C10
    // 0x8002C2BC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    __cosf_recomp(rdram, ctx);
        goto after_1;
    // 0x8002C2BC: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    after_1:
    // 0x8002C2C0: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x8002C2C4: jal         0x80099D90
    // 0x8002C2C8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    __sinf_recomp(rdram, ctx);
        goto after_2;
    // 0x8002C2C8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    after_2:
    // 0x8002C2CC: div.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x8002C2D0: add.s       $f2, $f24, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = ctx->f24.fl + ctx->f26.fl;
    // 0x8002C2D4: sub.s       $f4, $f24, $f26
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f4.fl = ctx->f24.fl - ctx->f26.fl;
    // 0x8002C2D8: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
    // 0x8002C2DC: div.s       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f2.fl = DIV_S(ctx->f2.fl, ctx->f4.fl);
    // 0x8002C2E0: add.s       $f0, $f24, $f24
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f0.fl = ctx->f24.fl + ctx->f24.fl;
    // 0x8002C2E4: mul.s       $f0, $f0, $f26
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f26.fl);
    // 0x8002C2E8: div.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f4.fl);
    // 0x8002C2EC: div.s       $f22, $f20, $f22
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f22.fl); 
    ctx->f22.fl = DIV_S(ctx->f20.fl, ctx->f22.fl);
    // 0x8002C2F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002C2F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002C2F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8002C2FC: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x8002C300: neg.s       $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f20.fl); 
    ctx->f20.fl = -ctx->f20.fl;
    // 0x8002C304: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x8002C308: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8002C30C: swc1        $f2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f2.u32l;
    // 0x8002C310: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x8002C314: swc1        $f22, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f22.u32l;
L_8002C318:
    // 0x8002C318: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8002C31C: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
L_8002C320:
    // 0x8002C320: lwc1        $f0, 0x0($v1)
    ctx->f0.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8002C324: mul.s       $f0, $f0, $f28
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 28);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f28.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f28.fl);
    // 0x8002C328: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8002C32C: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x8002C330: swc1        $f0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f0.u32l;
    // 0x8002C334: bne         $v0, $zero, L_8002C320
    if (ctx->r2 != 0) {
        // 0x8002C338: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_8002C320;
    }
    // 0x8002C338: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8002C33C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8002C340: slti        $v0, $a1, 0x4
    ctx->r2 = SIGNED(ctx->r5) < 0X4 ? 1 : 0;
    // 0x8002C344: bne         $v0, $zero, L_8002C318
    if (ctx->r2 != 0) {
        // 0x8002C348: addiu       $s0, $s0, 0x10
        ctx->r16 = ADD32(ctx->r16, 0X10);
            goto L_8002C318;
    }
    // 0x8002C348: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x8002C34C: beql        $s1, $zero, L_8002C3E4
    if (ctx->r17 == 0) {
        // 0x8002C350: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8002C3E4;
    }
    goto skip_0;
    // 0x8002C350: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    skip_0:
    // 0x8002C354: add.s       $f2, $f24, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f24.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = ctx->f24.fl + ctx->f26.fl;
    // 0x8002C358: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8002C35C: ldc1        $f0, 0x1D38($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X1D38);
    // 0x8002C360: cvt.d.s     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.d = CVT_D_S(ctx->f2.fl);
    // 0x8002C364: c.le.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d <= ctx->f0.d;
    // 0x8002C368: nop

    // 0x8002C36C: nop

    // 0x8002C370: bc1t        L_8002C3DC
    if (c1cs) {
        // 0x8002C374: ori         $v0, $zero, 0xFFFF
        ctx->r2 = 0 | 0XFFFF;
            goto L_8002C3DC;
    }
    // 0x8002C374: ori         $v0, $zero, 0xFFFF
    ctx->r2 = 0 | 0XFFFF;
    // 0x8002C378: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8002C37C: ldc1        $f0, 0x1D40($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X1D40);
    // 0x8002C380: div.d       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = DIV_D(ctx->f0.d, ctx->f2.d);
    // 0x8002C384: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8002C388: ldc1        $f0, 0x1D48($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X1D48);
    // 0x8002C38C: c.le.d      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.d <= ctx->f2.d;
    // 0x8002C390: nop

    // 0x8002C394: nop

    // 0x8002C398: bc1tl       L_8002C3B4
    if (c1cs) {
        // 0x8002C39C: sub.d       $f0, $f2, $f0
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d - ctx->f0.d;
            goto L_8002C3B4;
    }
    goto skip_1;
    // 0x8002C39C: sub.d       $f0, $f2, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f2.d - ctx->f0.d;
    skip_1:
    // 0x8002C3A0: trunc.w.d   $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.u32l = TRUNC_W_D(ctx->f2.d);
    // 0x8002C3A4: mfc1        $v1, $f0
    ctx->r3 = (int32_t)ctx->f0.u32l;
    // 0x8002C3A8: nop

    // 0x8002C3AC: j           L_8002C3C8
    // 0x8002C3B0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
        goto L_8002C3C8;
    // 0x8002C3B0: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_8002C3B4:
    // 0x8002C3B4: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x8002C3B8: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x8002C3BC: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x8002C3C0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002C3C4: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_8002C3C8:
    // 0x8002C3C8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8002C3CC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8002C3D0: bne         $v0, $zero, L_8002C3E4
    if (ctx->r2 != 0) {
        // 0x8002C3D4: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8002C3E4;
    }
    // 0x8002C3D4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8002C3D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002C3DC:
    // 0x8002C3DC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8002C3E0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_8002C3E4:
    // 0x8002C3E4: jal         0x8009CD00
    // 0x8002C3E8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8009CD00_78100(rdram, ctx);
        goto after_3;
    // 0x8002C3E8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8002C3EC: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8002C3F0: lw          $s2, 0x58($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X58);
    // 0x8002C3F4: lw          $s1, 0x54($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X54);
    // 0x8002C3F8: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x8002C3FC: ldc1        $f28, 0x80($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X80);
    // 0x8002C400: ldc1        $f26, 0x78($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X78);
    // 0x8002C404: ldc1        $f24, 0x70($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X70);
    // 0x8002C408: ldc1        $f22, 0x68($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X68);
    // 0x8002C40C: ldc1        $f20, 0x60($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X60);
    // 0x8002C410: jr          $ra
    // 0x8002C414: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    TRACE_RETURN()
    return;
    // 0x8002C414: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x8002C418: nop

    // 0x8002C41C: nop

;}
RECOMP_FUNC void _init_lpfilter(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80095A20: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80095A24: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x80095A28: addiu       $a2, $a0, 0xE
    ctx->r6 = ADD32(ctx->r4, 0XE);
    // 0x80095A2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80095A30: sw          $v0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r2;
    // 0x80095A34: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
    // 0x80095A38: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80095A3C: addu        $a3, $v1, $zero
    ctx->r7 = ADD32(ctx->r3, 0);
    // 0x80095A40: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80095A44: sh          $v0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r2;
L_80095A48:
    // 0x80095A48: sh          $zero, 0x8($a2)
    MEM_H(0X8, ctx->r6) = 0;
    // 0x80095A4C: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80095A50: bgez        $a1, L_80095A48
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80095A54: addiu       $a2, $a2, -0x2
        ctx->r6 = ADD32(ctx->r6, -0X2);
            goto L_80095A48;
    }
    // 0x80095A54: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
    // 0x80095A58: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x80095A5C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80095A60: ldc1        $f2, 0x2FC0($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X2FC0);
    // 0x80095A64: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80095A68: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x80095A6C: nop

    // 0x80095A70: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x80095A74: div.d       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = DIV_D(ctx->f0.d, ctx->f2.d);
    // 0x80095A78: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80095A7C: addiu       $a2, $a0, 0x12
    ctx->r6 = ADD32(ctx->r4, 0X12);
    // 0x80095A80: sh          $a3, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r7;
    // 0x80095A84: mov.d       $f8, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    ctx->f8.d = ctx->f2.d;
    // 0x80095A88: mov.d       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = ctx->f4.d;
L_80095A8C:
    // 0x80095A8C: nop

    // 0x80095A90: mul.d       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80095A94: nop

    // 0x80095A98: mul.d       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f8.d); 
    ctx->f0.d = MUL_D(ctx->f4.d, ctx->f8.d);
    // 0x80095A9C: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80095AA0: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x80095AA4: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x80095AA8: nop

    // 0x80095AAC: sh          $v0, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r2;
    // 0x80095AB0: slti        $v0, $a1, 0x10
    ctx->r2 = SIGNED(ctx->r5) < 0X10 ? 1 : 0;
    // 0x80095AB4: bne         $v0, $zero, L_80095A8C
    if (ctx->r2 != 0) {
        // 0x80095AB8: addiu       $a2, $a2, 0x2
        ctx->r6 = ADD32(ctx->r6, 0X2);
            goto L_80095A8C;
    }
    // 0x80095AB8: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80095ABC: jr          $ra
    // 0x80095AC0: nop

    TRACE_RETURN()
    return;
    // 0x80095AC0: nop

;}
RECOMP_FUNC void func_8006655C_4195C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006655C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80066560: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80066564: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80066568: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006656C: lhu         $v0, 0xC0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC0);
    // 0x80066570: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80066574: sh          $v1, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r3;
    // 0x80066578: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x8006657C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80066580: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80066584: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x80066588: sw          $v1, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r3;
    // 0x8006658C: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x80066590: lbu         $a0, 0x2($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X2);
    // 0x80066594: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80066598: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8006659C: jal         0x8006033C
    // 0x800665A0: or          $a0, $v0, $a0
    ctx->r4 = ctx->r2 | ctx->r4;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x800665A0: or          $a0, $v0, $a0
    ctx->r4 = ctx->r2 | ctx->r4;
    after_0:
    // 0x800665A4: beq         $v0, $zero, L_800665D8
    if (ctx->r2 == 0) {
        // 0x800665A8: nop
    
            goto L_800665D8;
    }
    // 0x800665A8: nop

    // 0x800665AC: lw          $v0, 0x6C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X6C);
    // 0x800665B0: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x800665B4: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x800665B8: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x800665BC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x800665C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800665C4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800665C8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800665CC: lw          $v0, 0x17C4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X17C4);
    // 0x800665D0: j           L_800665E4
    // 0x800665D4: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
        goto L_800665E4;
    // 0x800665D4: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
L_800665D8:
    // 0x800665D8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800665DC: lw          $v0, 0x2B78($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2B78);
    // 0x800665E0: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
L_800665E4:
    // 0x800665E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800665E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800665EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800665F0: jr          $ra
    // 0x800665F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800665F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8007168C_4CA8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007168C: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x80071690: sltiu       $v0, $a0, 0x800
    ctx->r2 = ctx->r4 < 0X800 ? 1 : 0;
    // 0x80071694: beq         $v0, $zero, L_80071714
    if (ctx->r2 == 0) {
        // 0x80071698: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_80071714;
    }
    // 0x80071698: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8007169C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800716A0: lhu         $a1, 0x355C($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X355C);
    // 0x800716A4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800716A8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800716AC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800716B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800716B4: lh          $v1, 0x5080($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X5080);
    // 0x800716B8: ori         $a2, $zero, 0x8000
    ctx->r6 = 0 | 0X8000;
    // 0x800716BC: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x800716C0: lbu         $a0, 0x6B40($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X6B40);
    // 0x800716C4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800716C8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800716CC: lh          $v0, 0x5084($at)
    ctx->r2 = MEM_H(ctx->r1, 0X5084);
    // 0x800716D0: addiu       $a3, $a1, 0x1
    ctx->r7 = ADD32(ctx->r5, 0X1);
    // 0x800716D4: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x800716D8: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x800716DC: sra         $v1, $v1, 9
    ctx->r3 = S32(SIGNED(ctx->r3) >> 9);
    // 0x800716E0: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x800716E4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x800716E8: lbu         $a0, -0x39A6($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X39A6);
    // 0x800716EC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x800716F0: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x800716F4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800716F8: sh          $a3, 0x355C($at)
    MEM_H(0X355C, ctx->r1) = ctx->r7;
    // 0x800716FC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80071700: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80071704: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80071708: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007170C: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x80071710: sh          $v1, -0x4820($at)
    MEM_H(-0X4820, ctx->r1) = ctx->r3;
L_80071714:
    // 0x80071714: jr          $ra
    // 0x80071718: nop

    TRACE_RETURN()
    return;
    // 0x80071718: nop

;}
RECOMP_FUNC void func_80077D74_53174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80077D74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80077D78: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80077D7C: jal         0x8004F5C4
    // 0x80077D80: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80077D80: nop

    after_0:
    // 0x80077D84: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80077D88: jr          $ra
    // 0x80077D8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80077D8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008D6F4_68AF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D6F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008D6F8: sb          $v0, 0xD7($a0)
    MEM_B(0XD7, ctx->r4) = ctx->r2;
    // 0x8008D6FC: jr          $ra
    // 0x8008D700: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    TRACE_RETURN()
    return;
    // 0x8008D700: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_8002A994_5D94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A994: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002A998: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8002A99C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8002A9A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002A9A4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8002A9A8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8002A9AC: lh          $v0, 0x2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2);
    // 0x8002A9B0: slti        $v0, $v0, 0x80
    ctx->r2 = SIGNED(ctx->r2) < 0X80 ? 1 : 0;
    // 0x8002A9B4: bne         $v0, $zero, L_8002AB74
    if (ctx->r2 != 0) {
        // 0x8002A9B8: nop
    
            goto L_8002AB74;
    }
    // 0x8002A9B8: nop

    // 0x8002A9BC: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8002A9C0: addiu       $a2, $a2, -0x3BC8
    ctx->r6 = ADD32(ctx->r6, -0X3BC8);
    // 0x8002A9C4: lb          $a0, 0x0($a2)
    ctx->r4 = MEM_B(ctx->r6, 0X0);
    // 0x8002A9C8: xori        $v1, $a0, 0x3
    ctx->r3 = ctx->r4 ^ 0X3;
    // 0x8002A9CC: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8002A9D0: xori        $v0, $a0, 0xC
    ctx->r2 = ctx->r4 ^ 0XC;
    // 0x8002A9D4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8002A9D8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8002A9DC: bne         $v1, $zero, L_8002AA2C
    if (ctx->r3 != 0) {
        // 0x8002A9E0: addu        $a1, $a0, $zero
        ctx->r5 = ADD32(ctx->r4, 0);
            goto L_8002AA2C;
    }
    // 0x8002A9E0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8002A9E4: addiu       $v0, $a1, -0x10
    ctx->r2 = ADD32(ctx->r5, -0X10);
    // 0x8002A9E8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8002A9EC: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8002A9F0: bne         $v0, $zero, L_8002AA2C
    if (ctx->r2 != 0) {
        // 0x8002A9F4: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_8002AA2C;
    }
    // 0x8002A9F4: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8002A9F8: beq         $a0, $v0, L_8002AA2C
    if (ctx->r4 == ctx->r2) {
        // 0x8002A9FC: lui         $v0, 0xFFFF
        ctx->r2 = S32(0XFFFF << 16);
            goto L_8002AA2C;
    }
    // 0x8002A9FC: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8002AA00: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8002AA04: lui         $a0, 0x1B00
    ctx->r4 = S32(0X1B00 << 16);
    // 0x8002AA08: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8002AA0C: lui         $v0, 0xA00
    ctx->r2 = S32(0XA00 << 16);
    // 0x8002AA10: xor         $v0, $v1, $v0
    ctx->r2 = ctx->r3 ^ ctx->r2;
    // 0x8002AA14: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8002AA18: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x8002AA1C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8002AA20: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8002AA24: beq         $v0, $zero, L_8002AA9C
    if (ctx->r2 == 0) {
        // 0x8002AA28: nop
    
            goto L_8002AA9C;
    }
    // 0x8002AA28: nop

L_8002AA2C:
    // 0x8002AA2C: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x8002AA30: addiu       $v0, $v0, -0x10A
    ctx->r2 = ADD32(ctx->r2, -0X10A);
    // 0x8002AA34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8002AA38: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002AA3C: sltiu       $v0, $v1, 0xE
    ctx->r2 = ctx->r3 < 0XE ? 1 : 0;
    // 0x8002AA40: beq         $v0, $zero, L_8002AA9C
    if (ctx->r2 == 0) {
        // 0x8002AA44: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8002AA9C;
    }
    // 0x8002AA44: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8002AA48: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8002AA4C: addu        $at, $at, $v0
    gpr jr_addend_8002AA54 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8002AA50: lw          $v0, 0x1C98($at)
    ctx->r2 = ADD32(ctx->r1, 0X1C98);
    // 0x8002AA54: jr          $v0
    // 0x8002AA58: nop

    switch (jr_addend_8002AA54 >> 2) {
        case 0: goto L_8002AA5C; break;
        case 1: goto L_8002AA64; break;
        case 2: goto L_8002AA6C; break;
        case 3: goto L_8002AA9C; break;
        case 4: goto L_8002AA9C; break;
        case 5: goto L_8002AA9C; break;
        case 6: goto L_8002AA74; break;
        case 7: goto L_8002AA7C; break;
        case 8: goto L_8002AA84; break;
        case 9: goto L_8002AA9C; break;
        case 10: goto L_8002AA9C; break;
        case 11: goto L_8002AA9C; break;
        case 12: goto L_8002AA8C; break;
        case 13: goto L_8002AA94; break;
        default: switch_error(__func__, 0x8002AA54, 0x800D1C98);
    }
    // 0x8002AA58: nop

L_8002AA5C:
    // 0x8002AA5C: j           L_8002AA98
    // 0x8002AA60: addiu       $v0, $zero, 0x213
    ctx->r2 = ADD32(0, 0X213);
        goto L_8002AA98;
    // 0x8002AA60: addiu       $v0, $zero, 0x213
    ctx->r2 = ADD32(0, 0X213);
L_8002AA64:
    // 0x8002AA64: j           L_8002AA98
    // 0x8002AA68: addiu       $v0, $zero, 0x214
    ctx->r2 = ADD32(0, 0X214);
        goto L_8002AA98;
    // 0x8002AA68: addiu       $v0, $zero, 0x214
    ctx->r2 = ADD32(0, 0X214);
L_8002AA6C:
    // 0x8002AA6C: j           L_8002AA98
    // 0x8002AA70: addiu       $v0, $zero, 0x215
    ctx->r2 = ADD32(0, 0X215);
        goto L_8002AA98;
    // 0x8002AA70: addiu       $v0, $zero, 0x215
    ctx->r2 = ADD32(0, 0X215);
L_8002AA74:
    // 0x8002AA74: j           L_8002AA98
    // 0x8002AA78: addiu       $v0, $zero, 0x216
    ctx->r2 = ADD32(0, 0X216);
        goto L_8002AA98;
    // 0x8002AA78: addiu       $v0, $zero, 0x216
    ctx->r2 = ADD32(0, 0X216);
L_8002AA7C:
    // 0x8002AA7C: j           L_8002AA98
    // 0x8002AA80: addiu       $v0, $zero, 0x217
    ctx->r2 = ADD32(0, 0X217);
        goto L_8002AA98;
    // 0x8002AA80: addiu       $v0, $zero, 0x217
    ctx->r2 = ADD32(0, 0X217);
L_8002AA84:
    // 0x8002AA84: j           L_8002AA98
    // 0x8002AA88: addiu       $v0, $zero, 0x218
    ctx->r2 = ADD32(0, 0X218);
        goto L_8002AA98;
    // 0x8002AA88: addiu       $v0, $zero, 0x218
    ctx->r2 = ADD32(0, 0X218);
L_8002AA8C:
    // 0x8002AA8C: j           L_8002AA98
    // 0x8002AA90: addiu       $v0, $zero, 0x219
    ctx->r2 = ADD32(0, 0X219);
        goto L_8002AA98;
    // 0x8002AA90: addiu       $v0, $zero, 0x219
    ctx->r2 = ADD32(0, 0X219);
L_8002AA94:
    // 0x8002AA94: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
L_8002AA98:
    // 0x8002AA98: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
L_8002AA9C:
    // 0x8002AA9C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8002AAA0: lb          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC8);
    // 0x8002AAA4: bne         $v0, $zero, L_8002AABC
    if (ctx->r2 != 0) {
        // 0x8002AAA8: addiu       $v0, $zero, 0x150
        ctx->r2 = ADD32(0, 0X150);
            goto L_8002AABC;
    }
    // 0x8002AAA8: addiu       $v0, $zero, 0x150
    ctx->r2 = ADD32(0, 0X150);
    // 0x8002AAAC: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x8002AAB0: bne         $v1, $v0, L_8002AABC
    if (ctx->r3 != ctx->r2) {
        // 0x8002AAB4: addiu       $v0, $zero, 0x21B
        ctx->r2 = ADD32(0, 0X21B);
            goto L_8002AABC;
    }
    // 0x8002AAB4: addiu       $v0, $zero, 0x21B
    ctx->r2 = ADD32(0, 0X21B);
    // 0x8002AAB8: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
L_8002AABC:
    // 0x8002AABC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8002AAC0: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8002AAC4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8002AAC8: bne         $v1, $v0, L_8002AAF4
    if (ctx->r3 != ctx->r2) {
        // 0x8002AACC: addiu       $v0, $zero, 0x11A
        ctx->r2 = ADD32(0, 0X11A);
            goto L_8002AAF4;
    }
    // 0x8002AACC: addiu       $v0, $zero, 0x11A
    ctx->r2 = ADD32(0, 0X11A);
    // 0x8002AAD0: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x8002AAD4: beq         $v1, $v0, L_8002AAEC
    if (ctx->r3 == ctx->r2) {
        // 0x8002AAD8: addiu       $v0, $zero, 0x11B
        ctx->r2 = ADD32(0, 0X11B);
            goto L_8002AAEC;
    }
    // 0x8002AAD8: addiu       $v0, $zero, 0x11B
    ctx->r2 = ADD32(0, 0X11B);
    // 0x8002AADC: beq         $v1, $v0, L_8002AAF0
    if (ctx->r3 == ctx->r2) {
        // 0x8002AAE0: addiu       $v0, $zero, 0x21D
        ctx->r2 = ADD32(0, 0X21D);
            goto L_8002AAF0;
    }
    // 0x8002AAE0: addiu       $v0, $zero, 0x21D
    ctx->r2 = ADD32(0, 0X21D);
    // 0x8002AAE4: j           L_8002AAFC
    // 0x8002AAE8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
        goto L_8002AAFC;
    // 0x8002AAE8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
L_8002AAEC:
    // 0x8002AAEC: addiu       $v0, $zero, 0x21C
    ctx->r2 = ADD32(0, 0X21C);
L_8002AAF0:
    // 0x8002AAF0: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
L_8002AAF4:
    // 0x8002AAF4: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x8002AAF8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
L_8002AAFC:
    // 0x8002AAFC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8002AB00: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8002AB04: lui         $v1, 0x800A
    ctx->r3 = S32(0X800A << 16);
    // 0x8002AB08: addiu       $v1, $v1, 0x6E70
    ctx->r3 = ADD32(ctx->r3, 0X6E70);
    // 0x8002AB0C: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x8002AB10: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8002AB14: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8002AB18: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8002AB1C: sltiu       $v0, $v0, 0x183
    ctx->r2 = ctx->r2 < 0X183 ? 1 : 0;
    // 0x8002AB20: beq         $v0, $zero, L_8002AB74
    if (ctx->r2 == 0) {
        // 0x8002AB24: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8002AB74;
    }
    // 0x8002AB24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8002AB28: lbu         $s2, 0x3($s1)
    ctx->r18 = MEM_BU(ctx->r17, 0X3);
    // 0x8002AB2C: jal         0x8002AC34
    // 0x8002AB30: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002AC34_6034(rdram, ctx);
        goto after_0;
    // 0x8002AB30: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8002AB34: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8002AB38: beq         $v1, $zero, L_8002AB74
    if (ctx->r3 == 0) {
        // 0x8002AB3C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8002AB74;
    }
    // 0x8002AB3C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8002AB40: bne         $v1, $v0, L_8002AB5C
    if (ctx->r3 != ctx->r2) {
        // 0x8002AB44: sll         $v0, $s2, 2
        ctx->r2 = S32(ctx->r18 << 2);
            goto L_8002AB5C;
    }
    // 0x8002AB44: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
    // 0x8002AB48: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002AB4C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8002AB50: lw          $a0, 0x2270($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2270);
    // 0x8002AB54: jal         0x8008AD34
    // 0x8002AB58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008AD34_66134(rdram, ctx);
        goto after_1;
    // 0x8002AB58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_8002AB5C:
    // 0x8002AB5C: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x8002AB60: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8002AB64: beq         $v1, $v0, L_8002AB74
    if (ctx->r3 == ctx->r2) {
        // 0x8002AB68: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8002AB74;
    }
    // 0x8002AB68: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8002AB6C: jal         0x8002AB8C
    // 0x8002AB70: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002AB8C_5F8C(rdram, ctx);
        goto after_2;
    // 0x8002AB70: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_8002AB74:
    // 0x8002AB74: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8002AB78: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8002AB7C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8002AB80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8002AB84: jr          $ra
    // 0x8002AB88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8002AB88: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800640FC_3F4FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800640FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80064100: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80064104: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80064108: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006410C: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    // 0x80064110: beql        $a1, $zero, L_80064144
    if (ctx->r5 == 0) {
        // 0x80064114: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_80064144;
    }
    goto skip_0;
    // 0x80064114: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    skip_0:
    // 0x80064118: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x8006411C: lb          $v0, 0x71($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X71);
    // 0x80064120: lbu         $a2, 0x2($v1)
    ctx->r6 = MEM_BU(ctx->r3, 0X2);
    // 0x80064124: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80064128: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006412C: lbu         $v0, 0x4E00($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X4E00);
    // 0x80064130: lbu         $a0, 0x1($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X1);
    // 0x80064134: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x80064138: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
    // 0x8006413C: j           L_80064174
    // 0x80064140: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
        goto L_80064174;
    // 0x80064140: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
L_80064144:
    // 0x80064144: lw          $a0, 0x14($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X14);
    // 0x80064148: lb          $v1, 0x71($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X71);
    // 0x8006414C: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x80064150: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80064154: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80064158: lbu         $v1, 0x4E00($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X4E00);
    // 0x8006415C: lbu         $a0, 0x1($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X1);
    // 0x80064160: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80064164: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80064168: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006416C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80064170: lw          $a1, 0x27E8($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X27E8);
L_80064174:
    // 0x80064174: jal         0x80061510
    // 0x80064178: nop

    func_80061510_3C910(rdram, ctx);
        goto after_0;
    // 0x80064178: nop

    after_0:
    // 0x8006417C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80064180: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80064184: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x80064188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006418C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80064190: jr          $ra
    // 0x80064194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80064194: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80029C04_5004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80029C04: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80029C08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80029C0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80029C10: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80029C14: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80029C18: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80029C1C: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x80029C20: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80029C24: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x80029C28: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80029C2C: jal         0x800281C8
    // 0x80029C30: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800281C8_35C8(rdram, ctx);
        goto after_0;
    // 0x80029C30: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x80029C34: beq         $v0, $zero, L_80029C60
    if (ctx->r2 == 0) {
        // 0x80029C38: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80029C60;
    }
    // 0x80029C38: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80029C3C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x80029C40: lui         $a2, 0x8003
    ctx->r6 = S32(0X8003 << 16);
    // 0x80029C44: addiu       $a2, $a2, -0x6AAC
    ctx->r6 = ADD32(ctx->r6, -0X6AAC);
    // 0x80029C48: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80029C4C: sh          $s0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r16;
    // 0x80029C50: sh          $s1, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r17;
    // 0x80029C54: sb          $s2, 0x5($v0)
    MEM_B(0X5, ctx->r2) = ctx->r18;
    // 0x80029C58: jal         0x800283A8
    // 0x80029C5C: sb          $s3, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r19;
    func_800283A8_37A8(rdram, ctx);
        goto after_1;
    // 0x80029C5C: sb          $s3, 0x4($v0)
    MEM_B(0X4, ctx->r2) = ctx->r19;
    after_1:
L_80029C60:
    // 0x80029C60: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80029C64: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80029C68: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80029C6C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80029C70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80029C74: jr          $ra
    // 0x80029C78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80029C78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8009340C_6E80C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009340C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80093410: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80093414: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x80093418: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8009341C: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    // 0x80093420: lw          $a2, 0x8($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X8);
    // 0x80093424: jal         0x8009E010
    // 0x80093428: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    osPfsNumFiles_recomp(rdram, ctx);
        goto after_0;
    // 0x80093428: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    after_0:
    // 0x8009342C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80093430: jr          $ra
    // 0x80093434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80093434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80034904_FD04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034904: blez        $a0, L_80034914
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80034908: nop
    
            goto L_80034914;
    }
    // 0x80034908: nop

    // 0x8003490C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034910: sb          $a0, 0x434F($at)
    MEM_B(0X434F, ctx->r1) = ctx->r4;
L_80034914:
    // 0x80034914: jr          $ra
    // 0x80034918: nop

    TRACE_RETURN()
    return;
    // 0x80034918: nop

;}
RECOMP_FUNC void func_800652D8_406D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800652D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800652DC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800652E0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x800652E4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x800652E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800652EC: lw          $v0, 0x6C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X6C);
    // 0x800652F0: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x800652F4: bne         $v0, $zero, L_80065338
    if (ctx->r2 != 0) {
        // 0x800652F8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80065338;
    }
    // 0x800652F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800652FC: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x80065300: addiu       $s0, $s0, -0x3B9B
    ctx->r16 = ADD32(ctx->r16, -0X3B9B);
    // 0x80065304: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80065308: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8006530C: lbu         $v1, -0x3B9C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3B9C);
    // 0x80065310: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80065314: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80065318: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x8006531C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80065320: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x80065324: jal         0x80070E98
    // 0x80065328: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    func_80070E98_4C298(rdram, ctx);
        goto after_0;
    // 0x80065328: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    after_0:
    // 0x8006532C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80065330: j           L_80065354
    // 0x80065334: nop

        goto L_80065354;
    // 0x80065334: nop

L_80065338:
    // 0x80065338: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8006533C: lw          $a0, -0x3BFC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3BFC);
    // 0x80065340: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80065344: jal         0x80070E98
    // 0x80065348: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    func_80070E98_4C298(rdram, ctx);
        goto after_1;
    // 0x80065348: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    after_1:
    // 0x8006534C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80065350: lbu         $v0, -0x3B9B($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3B9B);
L_80065354:
    // 0x80065354: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80065358: sb          $v0, -0x3B9C($at)
    MEM_B(-0X3B9C, ctx->r1) = ctx->r2;
    // 0x8006535C: lw          $v0, 0x6C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X6C);
    // 0x80065360: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80065364: sw          $v0, 0x6C($s1)
    MEM_W(0X6C, ctx->r17) = ctx->r2;
    // 0x80065368: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006536C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80065370: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80065374: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80065378: jr          $ra
    // 0x8006537C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8006537C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8004F4F8_2A8F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004F4F8: lui         $v1, 0xEA0
    ctx->r3 = S32(0XEA0 << 16);
    // 0x8004F4FC: ori         $v1, $v1, 0xEA0F
    ctx->r3 = ctx->r3 | 0XEA0F;
    // 0x8004F500: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8004F504: addiu       $v0, $v0, -0x2100
    ctx->r2 = ADD32(ctx->r2, -0X2100);
    // 0x8004F508: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x8004F50C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x8004F510: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004F514: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004F518: lw          $v0, 0x5708($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5708);
    // 0x8004F51C: lui         $a2, 0x801E
    ctx->r6 = S32(0X801E << 16);
    // 0x8004F520: lw          $a2, -0x781C($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X781C);
    // 0x8004F524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004F528: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x8004F52C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8004F530: mfhi        $a3
    ctx->r7 = hi;
    // 0x8004F534: srl         $a1, $a3, 1
    ctx->r5 = S32(U32(ctx->r7) >> 1);
    // 0x8004F538: srlv        $v1, $v1, $a1
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r5 & 31));
    // 0x8004F53C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8004F540: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004F544: sw          $v0, 0x5708($at)
    MEM_W(0X5708, ctx->r1) = ctx->r2;
    // 0x8004F548: and         $v0, $v0, $a2
    ctx->r2 = ctx->r2 & ctx->r6;
    // 0x8004F54C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004F550: sw          $v0, 0x5708($at)
    MEM_W(0X5708, ctx->r1) = ctx->r2;
    // 0x8004F554: jal         0x80053530
    // 0x8004F558: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    func_80053530_2E930(rdram, ctx);
        goto after_0;
    // 0x8004F558: sb          $zero, 0x0($a0)
    MEM_B(0X0, ctx->r4) = 0;
    after_0:
    // 0x8004F55C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8004F560: jr          $ra
    // 0x8004F564: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004F564: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008B0D0_664D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B0D0: beq         $a0, $zero, L_8008B0EC
    if (ctx->r4 == 0) {
        // 0x8008B0D4: nop
    
            goto L_8008B0EC;
    }
    // 0x8008B0D4: nop

    // 0x8008B0D8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8008B0DC: bgez        $v0, L_8008B0EC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8008B0E0: nop
    
            goto L_8008B0EC;
    }
    // 0x8008B0E0: nop

    // 0x8008B0E4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008B0E8: sw          $a0, 0x4FA8($at)
    MEM_W(0X4FA8, ctx->r1) = ctx->r4;
L_8008B0EC:
    // 0x8008B0EC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008B0F0: jr          $ra
    // 0x8008B0F4: lw          $v0, 0x4FA8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FA8);
    TRACE_RETURN()
    return;
    // 0x8008B0F4: lw          $v0, 0x4FA8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FA8);
;}
RECOMP_FUNC void func_8007C930_57D30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007C930: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007C934: addu        $t3, $a0, $zero
    ctx->r11 = ADD32(ctx->r4, 0);
    // 0x8007C938: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x8007C93C: lui         $a3, 0x800C
    ctx->r7 = S32(0X800C << 16);
    // 0x8007C940: lw          $a3, -0x2650($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X2650);
    // 0x8007C944: addu        $a2, $t3, $zero
    ctx->r6 = ADD32(ctx->r11, 0);
    // 0x8007C948: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8007C94C: lbu         $v1, 0xB61($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB61);
    // 0x8007C950: addu        $t1, $sp, $zero
    ctx->r9 = ADD32(ctx->r29, 0);
    // 0x8007C954: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x8007C958: srav        $t2, $v0, $v1
    ctx->r10 = S32(SIGNED(ctx->r2) >> (ctx->r3 & 31));
L_8007C95C:
    // 0x8007C95C: lh          $v1, 0xC($a3)
    ctx->r3 = MEM_H(ctx->r7, 0XC);
    // 0x8007C960: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8007C964: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007C968: mflo        $v1
    ctx->r3 = lo;
    // 0x8007C96C: lh          $a1, 0xE($a3)
    ctx->r5 = MEM_H(ctx->r7, 0XE);
    // 0x8007C970: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x8007C974: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007C978: mflo        $a1
    ctx->r5 = lo;
    // 0x8007C97C: lh          $a0, 0x10($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X10);
    // 0x8007C980: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x8007C984: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007C988: mflo        $a0
    ctx->r4 = lo;
    // 0x8007C98C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8007C990: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x8007C994: lw          $v0, 0x1C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X1C);
    // 0x8007C998: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8007C99C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8007C9A0: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x8007C9A4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007C9A8: sh          $v1, 0x4($t1)
    MEM_H(0X4, ctx->r9) = ctx->r3;
    // 0x8007C9AC: slti        $v0, $t0, 0x4
    ctx->r2 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x8007C9B0: bne         $v0, $zero, L_8007C95C
    if (ctx->r2 != 0) {
        // 0x8007C9B4: addiu       $t1, $t1, 0x8
        ctx->r9 = ADD32(ctx->r9, 0X8);
            goto L_8007C95C;
    }
    // 0x8007C9B4: addiu       $t1, $t1, 0x8
    ctx->r9 = ADD32(ctx->r9, 0X8);
    // 0x8007C9B8: lh          $v1, 0x4($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X4);
    // 0x8007C9BC: lh          $a0, 0xC($sp)
    ctx->r4 = MEM_H(ctx->r29, 0XC);
    // 0x8007C9C0: lh          $a1, 0x14($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X14);
    // 0x8007C9C4: lh          $a2, 0x1C($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1C);
    // 0x8007C9C8: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8007C9CC: bnel        $v0, $zero, L_8007C9D4
    if (ctx->r2 != 0) {
        // 0x8007C9D0: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8007C9D4;
    }
    goto skip_0;
    // 0x8007C9D0: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_0:
L_8007C9D4:
    // 0x8007C9D4: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8007C9D8: bnel        $v0, $zero, L_8007C9E0
    if (ctx->r2 != 0) {
        // 0x8007C9DC: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_8007C9E0;
    }
    goto skip_1;
    // 0x8007C9DC: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    skip_1:
L_8007C9E0:
    // 0x8007C9E0: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8007C9E4: bnel        $v0, $zero, L_8007C9EC
    if (ctx->r2 != 0) {
        // 0x8007C9E8: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8007C9EC;
    }
    goto skip_2;
    // 0x8007C9E8: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    skip_2:
L_8007C9EC:
    // 0x8007C9EC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C9F0: sw          $v1, -0x41C0($at)
    MEM_W(-0X41C0, ctx->r1) = ctx->r3;
    // 0x8007C9F4: slt         $v0, $t2, $v1
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007C9F8: beq         $v0, $zero, L_8007CC88
    if (ctx->r2 == 0) {
        // 0x8007C9FC: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_8007CC88;
    }
    // 0x8007C9FC: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x8007CA00: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x8007CA04: lw          $t1, -0x2650($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X2650);
    // 0x8007CA08: addiu       $t2, $sp, 0x20
    ctx->r10 = ADD32(ctx->r29, 0X20);
    // 0x8007CA0C: addu        $a3, $sp, $zero
    ctx->r7 = ADD32(ctx->r29, 0);
    // 0x8007CA10: addu        $a2, $t3, $zero
    ctx->r6 = ADD32(ctx->r11, 0);
L_8007CA14:
    // 0x8007CA14: lh          $a0, 0x0($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X0);
    // 0x8007CA18: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8007CA1C: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007CA20: mflo        $a0
    ctx->r4 = lo;
    // 0x8007CA24: lh          $a1, 0x2($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X2);
    // 0x8007CA28: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x8007CA2C: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007CA30: mflo        $a1
    ctx->r5 = lo;
    // 0x8007CA34: lh          $v1, 0x4($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X4);
    // 0x8007CA38: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x8007CA3C: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007CA40: mflo        $v1
    ctx->r3 = lo;
    // 0x8007CA44: lw          $v0, 0x14($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X14);
    // 0x8007CA48: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8007CA4C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8007CA50: sra         $a0, $a0, 12
    ctx->r4 = S32(SIGNED(ctx->r4) >> 12);
    // 0x8007CA54: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8007CA58: lh          $v0, 0x4($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X4);
    // 0x8007CA5C: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x8007CA60: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x8007CA64: bltzl       $v0, L_8007CA6C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8007CA68: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8007CA6C;
    }
    goto skip_3;
    // 0x8007CA68: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_3:
L_8007CA6C:
    // 0x8007CA6C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8007CA70: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x8007CA74: bne         $v0, $zero, L_8007CA80
    if (ctx->r2 != 0) {
        // 0x8007CA78: nop
    
            goto L_8007CA80;
    }
    // 0x8007CA78: nop

    // 0x8007CA7C: break       7
    do_break(2147994236);
L_8007CA80:
    // 0x8007CA80: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007CA84: bne         $v0, $at, L_8007CA98
    if (ctx->r2 != ctx->r1) {
        // 0x8007CA88: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8007CA98;
    }
    // 0x8007CA88: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8007CA8C: bne         $v1, $at, L_8007CA98
    if (ctx->r3 != ctx->r1) {
        // 0x8007CA90: nop
    
            goto L_8007CA98;
    }
    // 0x8007CA90: nop

    // 0x8007CA94: break       6
    do_break(2147994260);
L_8007CA98:
    // 0x8007CA98: mflo        $v1
    ctx->r3 = lo;
    // 0x8007CA9C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8007CAA0: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x8007CAA4: sh          $a0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r4;
    // 0x8007CAA8: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x8007CAAC: slti        $v0, $t0, 0x4
    ctx->r2 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x8007CAB0: sh          $v1, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r3;
    // 0x8007CAB4: bne         $v0, $zero, L_8007CA14
    if (ctx->r2 != 0) {
        // 0x8007CAB8: addiu       $t2, $t2, 0x4
        ctx->r10 = ADD32(ctx->r10, 0X4);
            goto L_8007CA14;
    }
    // 0x8007CAB8: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x8007CABC: lh          $a2, 0x20($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X20);
    // 0x8007CAC0: lh          $a0, 0x24($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X24);
    // 0x8007CAC4: lh          $a1, 0x28($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X28);
    // 0x8007CAC8: lh          $a3, 0x2C($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2C);
    // 0x8007CACC: slt         $v0, $a2, $a0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8007CAD0: beq         $v0, $zero, L_8007CADC
    if (ctx->r2 == 0) {
        // 0x8007CAD4: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8007CADC;
    }
    // 0x8007CAD4: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x8007CAD8: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_8007CADC:
    // 0x8007CADC: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8007CAE0: bnel        $v0, $zero, L_8007CAE8
    if (ctx->r2 != 0) {
        // 0x8007CAE4: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_8007CAE8;
    }
    goto skip_4;
    // 0x8007CAE4: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    skip_4:
L_8007CAE8:
    // 0x8007CAE8: slt         $v0, $v1, $a3
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8007CAEC: bnel        $v0, $zero, L_8007CAF4
    if (ctx->r2 != 0) {
        // 0x8007CAF0: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_8007CAF4;
    }
    goto skip_5;
    // 0x8007CAF0: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    skip_5:
L_8007CAF4:
    // 0x8007CAF4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007CAF8: sw          $v1, -0x41B4($at)
    MEM_W(-0X41B4, ctx->r1) = ctx->r3;
    // 0x8007CAFC: slti        $v0, $v1, -0x9F
    ctx->r2 = SIGNED(ctx->r3) < -0X9F ? 1 : 0;
    // 0x8007CB00: bne         $v0, $zero, L_8007CC8C
    if (ctx->r2 != 0) {
        // 0x8007CB04: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8007CC8C;
    }
    // 0x8007CB04: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8007CB08: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x8007CB0C: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007CB10: bnel        $v0, $zero, L_8007CB18
    if (ctx->r2 != 0) {
        // 0x8007CB14: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8007CB18;
    }
    goto skip_6;
    // 0x8007CB14: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_6:
L_8007CB18:
    // 0x8007CB18: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007CB1C: bnel        $v0, $zero, L_8007CB24
    if (ctx->r2 != 0) {
        // 0x8007CB20: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_8007CB24;
    }
    goto skip_7;
    // 0x8007CB20: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    skip_7:
L_8007CB24:
    // 0x8007CB24: slt         $v0, $a3, $v1
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007CB28: bnel        $v0, $zero, L_8007CB30
    if (ctx->r2 != 0) {
        // 0x8007CB2C: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_8007CB30;
    }
    goto skip_8;
    // 0x8007CB2C: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    skip_8:
L_8007CB30:
    // 0x8007CB30: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007CB34: sw          $v1, -0x41B8($at)
    MEM_W(-0X41B8, ctx->r1) = ctx->r3;
    // 0x8007CB38: slti        $v0, $v1, 0xA0
    ctx->r2 = SIGNED(ctx->r3) < 0XA0 ? 1 : 0;
    // 0x8007CB3C: beq         $v0, $zero, L_8007CC88
    if (ctx->r2 == 0) {
        // 0x8007CB40: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_8007CC88;
    }
    // 0x8007CB40: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x8007CB44: lui         $t1, 0x800C
    ctx->r9 = S32(0X800C << 16);
    // 0x8007CB48: lw          $t1, -0x2650($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X2650);
    // 0x8007CB4C: addiu       $t2, $sp, 0x20
    ctx->r10 = ADD32(ctx->r29, 0X20);
    // 0x8007CB50: addu        $a2, $t3, $zero
    ctx->r6 = ADD32(ctx->r11, 0);
    // 0x8007CB54: addu        $a3, $sp, $zero
    ctx->r7 = ADD32(ctx->r29, 0);
L_8007CB58:
    // 0x8007CB58: lh          $a0, 0x6($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X6);
    // 0x8007CB5C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8007CB60: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007CB64: mflo        $a0
    ctx->r4 = lo;
    // 0x8007CB68: lh          $a1, 0x8($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X8);
    // 0x8007CB6C: lw          $v0, 0x4($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X4);
    // 0x8007CB70: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007CB74: mflo        $a1
    ctx->r5 = lo;
    // 0x8007CB78: lh          $v1, 0xA($t1)
    ctx->r3 = MEM_H(ctx->r9, 0XA);
    // 0x8007CB7C: lw          $v0, 0x8($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X8);
    // 0x8007CB80: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007CB84: mflo        $v1
    ctx->r3 = lo;
    // 0x8007CB88: lw          $v0, 0x18($t1)
    ctx->r2 = MEM_W(ctx->r9, 0X18);
    // 0x8007CB8C: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8007CB90: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8007CB94: sra         $a0, $a0, 12
    ctx->r4 = S32(SIGNED(ctx->r4) >> 12);
    // 0x8007CB98: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8007CB9C: lh          $v0, 0x4($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X4);
    // 0x8007CBA0: sll         $v1, $a0, 16
    ctx->r3 = S32(ctx->r4 << 16);
    // 0x8007CBA4: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x8007CBA8: bltzl       $v0, L_8007CBB0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8007CBAC: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8007CBB0;
    }
    goto skip_9;
    // 0x8007CBAC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_9:
L_8007CBB0:
    // 0x8007CBB0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8007CBB4: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x8007CBB8: bne         $v0, $zero, L_8007CBC4
    if (ctx->r2 != 0) {
        // 0x8007CBBC: nop
    
            goto L_8007CBC4;
    }
    // 0x8007CBBC: nop

    // 0x8007CBC0: break       7
    do_break(2147994560);
L_8007CBC4:
    // 0x8007CBC4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007CBC8: bne         $v0, $at, L_8007CBDC
    if (ctx->r2 != ctx->r1) {
        // 0x8007CBCC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8007CBDC;
    }
    // 0x8007CBCC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8007CBD0: bne         $v1, $at, L_8007CBDC
    if (ctx->r3 != ctx->r1) {
        // 0x8007CBD4: nop
    
            goto L_8007CBDC;
    }
    // 0x8007CBD4: nop

    // 0x8007CBD8: break       6
    do_break(2147994584);
L_8007CBDC:
    // 0x8007CBDC: mflo        $v1
    ctx->r3 = lo;
    // 0x8007CBE0: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x8007CBE4: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x8007CBE8: sh          $a0, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r4;
    // 0x8007CBEC: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x8007CBF0: slti        $v0, $t0, 0x4
    ctx->r2 = SIGNED(ctx->r8) < 0X4 ? 1 : 0;
    // 0x8007CBF4: sh          $v1, 0x2($t2)
    MEM_H(0X2, ctx->r10) = ctx->r3;
    // 0x8007CBF8: bne         $v0, $zero, L_8007CB58
    if (ctx->r2 != 0) {
        // 0x8007CBFC: addiu       $t2, $t2, 0x4
        ctx->r10 = ADD32(ctx->r10, 0X4);
            goto L_8007CB58;
    }
    // 0x8007CBFC: addiu       $t2, $t2, 0x4
    ctx->r10 = ADD32(ctx->r10, 0X4);
    // 0x8007CC00: lh          $a2, 0x22($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X22);
    // 0x8007CC04: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x8007CC08: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
    // 0x8007CC0C: lh          $a3, 0x2E($sp)
    ctx->r7 = MEM_H(ctx->r29, 0X2E);
    // 0x8007CC10: slt         $v0, $a2, $a0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8007CC14: beq         $v0, $zero, L_8007CC20
    if (ctx->r2 == 0) {
        // 0x8007CC18: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8007CC20;
    }
    // 0x8007CC18: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x8007CC1C: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_8007CC20:
    // 0x8007CC20: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8007CC24: bnel        $v0, $zero, L_8007CC2C
    if (ctx->r2 != 0) {
        // 0x8007CC28: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_8007CC2C;
    }
    goto skip_10;
    // 0x8007CC28: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    skip_10:
L_8007CC2C:
    // 0x8007CC2C: slt         $v0, $v1, $a3
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x8007CC30: bnel        $v0, $zero, L_8007CC38
    if (ctx->r2 != 0) {
        // 0x8007CC34: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_8007CC38;
    }
    goto skip_11;
    // 0x8007CC34: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    skip_11:
L_8007CC38:
    // 0x8007CC38: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007CC3C: sw          $v1, -0x41C8($at)
    MEM_W(-0X41C8, ctx->r1) = ctx->r3;
    // 0x8007CC40: slti        $v0, $v1, -0x77
    ctx->r2 = SIGNED(ctx->r3) < -0X77 ? 1 : 0;
    // 0x8007CC44: bne         $v0, $zero, L_8007CC8C
    if (ctx->r2 != 0) {
        // 0x8007CC48: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8007CC8C;
    }
    // 0x8007CC48: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8007CC4C: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x8007CC50: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007CC54: bnel        $v0, $zero, L_8007CC5C
    if (ctx->r2 != 0) {
        // 0x8007CC58: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8007CC5C;
    }
    goto skip_12;
    // 0x8007CC58: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_12:
L_8007CC5C:
    // 0x8007CC5C: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007CC60: bnel        $v0, $zero, L_8007CC68
    if (ctx->r2 != 0) {
        // 0x8007CC64: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_8007CC68;
    }
    goto skip_13;
    // 0x8007CC64: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    skip_13:
L_8007CC68:
    // 0x8007CC68: slt         $v0, $a3, $v1
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007CC6C: bnel        $v0, $zero, L_8007CC74
    if (ctx->r2 != 0) {
        // 0x8007CC70: addu        $v1, $a3, $zero
        ctx->r3 = ADD32(ctx->r7, 0);
            goto L_8007CC74;
    }
    goto skip_14;
    // 0x8007CC70: addu        $v1, $a3, $zero
    ctx->r3 = ADD32(ctx->r7, 0);
    skip_14:
L_8007CC74:
    // 0x8007CC74: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007CC78: sw          $v1, -0x41C4($at)
    MEM_W(-0X41C4, ctx->r1) = ctx->r3;
    // 0x8007CC7C: slti        $v0, $v1, 0x78
    ctx->r2 = SIGNED(ctx->r3) < 0X78 ? 1 : 0;
    // 0x8007CC80: bne         $v0, $zero, L_8007CC8C
    if (ctx->r2 != 0) {
        // 0x8007CC84: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8007CC8C;
    }
    // 0x8007CC84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8007CC88:
    // 0x8007CC88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8007CC8C:
    // 0x8007CC8C: jr          $ra
    // 0x8007CC90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8007CC90: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800491F4_245F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800491F4: jr          $ra
    // 0x800491F8: nop

    TRACE_RETURN()
    return;
    // 0x800491F8: nop

;}
RECOMP_FUNC void func_80044A20_1FE20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80044A20: lhu         $a3, 0x0($a0)
    ctx->r7 = MEM_HU(ctx->r4, 0X0);
    // 0x80044A24: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80044A28: lhu         $v0, -0x26B4($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X26B4);
    // 0x80044A2C: lhu         $a2, 0x2($a0)
    ctx->r6 = MEM_HU(ctx->r4, 0X2);
    // 0x80044A30: lhu         $a1, 0x4($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X4);
    // 0x80044A34: lhu         $v1, 0x6($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X6);
    // 0x80044A38: subu        $a3, $a3, $v0
    ctx->r7 = SUB32(ctx->r7, ctx->r2);
    // 0x80044A3C: sh          $a3, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r7;
    // 0x80044A40: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80044A44: lhu         $v0, -0x26B6($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X26B6);
    // 0x80044A48: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x80044A4C: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80044A50: subu        $a2, $a2, $v0
    ctx->r6 = SUB32(ctx->r6, ctx->r2);
    // 0x80044A54: sh          $a2, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r6;
    // 0x80044A58: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80044A5C: lhu         $v0, -0x26B0($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X26B0);
    // 0x80044A60: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80044A64: sra         $t3, $a2, 16
    ctx->r11 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80044A68: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x80044A6C: sh          $a1, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r5;
    // 0x80044A70: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80044A74: lhu         $v0, -0x26B2($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X26B2);
    // 0x80044A78: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80044A7C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80044A80: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80044A84: sh          $v1, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r3;
    // 0x80044A88: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80044A8C: sra         $t4, $v1, 16
    ctx->r12 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80044A90: subu        $a0, $t4, $a1
    ctx->r4 = SUB32(ctx->r12, ctx->r5);
    // 0x80044A94: srl         $v0, $a0, 31
    ctx->r2 = S32(U32(ctx->r4) >> 31);
    // 0x80044A98: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80044A9C: lui         $t1, 0x801E
    ctx->r9 = S32(0X801E << 16);
    // 0x80044AA0: lh          $t1, -0x7154($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X7154);
    // 0x80044AA4: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80044AA8: addu        $t0, $a1, $v0
    ctx->r8 = ADD32(ctx->r5, ctx->r2);
    // 0x80044AAC: subu        $v0, $t0, $t1
    ctx->r2 = SUB32(ctx->r8, ctx->r9);
    // 0x80044AB0: bgez        $v0, L_80044ABC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80044AB4: subu        $t2, $t3, $a3
        ctx->r10 = SUB32(ctx->r11, ctx->r7);
            goto L_80044ABC;
    }
    // 0x80044AB4: subu        $t2, $t3, $a3
    ctx->r10 = SUB32(ctx->r11, ctx->r7);
    // 0x80044AB8: subu        $v0, $t1, $t0
    ctx->r2 = SUB32(ctx->r9, ctx->r8);
L_80044ABC:
    // 0x80044ABC: nop

    // 0x80044AC0: mult        $v0, $t2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80044AC4: mflo        $v0
    ctx->r2 = lo;
    // 0x80044AC8: nop

    // 0x80044ACC: nop

    // 0x80044AD0: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x80044AD4: bne         $a0, $zero, L_80044AE0
    if (ctx->r4 != 0) {
        // 0x80044AD8: nop
    
            goto L_80044AE0;
    }
    // 0x80044AD8: nop

    // 0x80044ADC: break       7
    do_break(2147764956);
L_80044AE0:
    // 0x80044AE0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80044AE4: bne         $a0, $at, L_80044AF8
    if (ctx->r4 != ctx->r1) {
        // 0x80044AE8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80044AF8;
    }
    // 0x80044AE8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80044AEC: bne         $v0, $at, L_80044AF8
    if (ctx->r2 != ctx->r1) {
        // 0x80044AF0: nop
    
            goto L_80044AF8;
    }
    // 0x80044AF0: nop

    // 0x80044AF4: break       6
    do_break(2147764980);
L_80044AF8:
    // 0x80044AF8: mflo        $a2
    ctx->r6 = lo;
    // 0x80044AFC: subu        $a0, $t3, $a3
    ctx->r4 = SUB32(ctx->r11, ctx->r7);
    // 0x80044B00: srl         $v0, $a0, 31
    ctx->r2 = S32(U32(ctx->r4) >> 31);
    // 0x80044B04: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80044B08: lui         $t1, 0x801E
    ctx->r9 = S32(0X801E << 16);
    // 0x80044B0C: lh          $t1, -0x7158($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X7158);
    // 0x80044B10: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80044B14: addu        $t0, $a3, $v0
    ctx->r8 = ADD32(ctx->r7, ctx->r2);
    // 0x80044B18: subu        $v0, $t0, $t1
    ctx->r2 = SUB32(ctx->r8, ctx->r9);
    // 0x80044B1C: bgez        $v0, L_80044B28
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80044B20: subu        $t2, $t4, $a1
        ctx->r10 = SUB32(ctx->r12, ctx->r5);
            goto L_80044B28;
    }
    // 0x80044B20: subu        $t2, $t4, $a1
    ctx->r10 = SUB32(ctx->r12, ctx->r5);
    // 0x80044B24: subu        $v0, $t1, $t0
    ctx->r2 = SUB32(ctx->r9, ctx->r8);
L_80044B28:
    // 0x80044B28: nop

    // 0x80044B2C: mult        $v0, $t2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80044B30: mflo        $v0
    ctx->r2 = lo;
    // 0x80044B34: nop

    // 0x80044B38: nop

    // 0x80044B3C: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x80044B40: bne         $a0, $zero, L_80044B4C
    if (ctx->r4 != 0) {
        // 0x80044B44: nop
    
            goto L_80044B4C;
    }
    // 0x80044B44: nop

    // 0x80044B48: break       7
    do_break(2147765064);
L_80044B4C:
    // 0x80044B4C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80044B50: bne         $a0, $at, L_80044B64
    if (ctx->r4 != ctx->r1) {
        // 0x80044B54: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80044B64;
    }
    // 0x80044B54: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80044B58: bne         $v0, $at, L_80044B64
    if (ctx->r2 != ctx->r1) {
        // 0x80044B5C: nop
    
            goto L_80044B64;
    }
    // 0x80044B5C: nop

    // 0x80044B60: break       6
    do_break(2147765088);
L_80044B64:
    // 0x80044B64: mflo        $v1
    ctx->r3 = lo;
    // 0x80044B68: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80044B6C: lh          $a0, -0x7158($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7158);
    // 0x80044B70: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x80044B74: slt         $v0, $a3, $a0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80044B78: beq         $v0, $zero, L_80044BD0
    if (ctx->r2 == 0) {
        // 0x80044B7C: subu        $a2, $t3, $a2
        ctx->r6 = SUB32(ctx->r11, ctx->r6);
            goto L_80044BD0;
    }
    // 0x80044B7C: subu        $a2, $t3, $a2
    ctx->r6 = SUB32(ctx->r11, ctx->r6);
    // 0x80044B80: slt         $v0, $a0, $a2
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x80044B84: beq         $v0, $zero, L_80044BD0
    if (ctx->r2 == 0) {
        // 0x80044B88: addu        $a1, $a1, $v1
        ctx->r5 = ADD32(ctx->r5, ctx->r3);
            goto L_80044BD0;
    }
    // 0x80044B88: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80044B8C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80044B90: lh          $a0, -0x7154($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7154);
    // 0x80044B94: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80044B98: beq         $v0, $zero, L_80044BD0
    if (ctx->r2 == 0) {
        // 0x80044B9C: subu        $v1, $t4, $v1
        ctx->r3 = SUB32(ctx->r12, ctx->r3);
            goto L_80044BD0;
    }
    // 0x80044B9C: subu        $v1, $t4, $v1
    ctx->r3 = SUB32(ctx->r12, ctx->r3);
    // 0x80044BA0: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80044BA4: beq         $v0, $zero, L_80044BD0
    if (ctx->r2 == 0) {
        // 0x80044BA8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80044BD0;
    }
    // 0x80044BA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80044BAC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80044BB0: sh          $a3, -0x3FAC($at)
    MEM_H(-0X3FAC, ctx->r1) = ctx->r7;
    // 0x80044BB4: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80044BB8: sh          $a2, -0x72D0($at)
    MEM_H(-0X72D0, ctx->r1) = ctx->r6;
    // 0x80044BBC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80044BC0: sh          $a1, -0x3FA8($at)
    MEM_H(-0X3FA8, ctx->r1) = ctx->r5;
    // 0x80044BC4: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80044BC8: j           L_80044BD4
    // 0x80044BCC: sh          $v1, -0x72CC($at)
    MEM_H(-0X72CC, ctx->r1) = ctx->r3;
        goto L_80044BD4;
    // 0x80044BCC: sh          $v1, -0x72CC($at)
    MEM_H(-0X72CC, ctx->r1) = ctx->r3;
L_80044BD0:
    // 0x80044BD0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80044BD4:
    // 0x80044BD4: jr          $ra
    // 0x80044BD8: nop

    TRACE_RETURN()
    return;
    // 0x80044BD8: nop

;}
RECOMP_FUNC void func_80030600_BA00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80030600: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80030604: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80030608: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8003060C: jr          $ra
    // 0x80030610: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80030610: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8008FF70_6B370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008FF70: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8008FF74: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x8008FF78: addu        $s5, $a1, $zero
    ctx->r21 = ADD32(ctx->r5, 0);
    // 0x8008FF7C: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8008FF80: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x8008FF84: addu        $t0, $a3, $zero
    ctx->r8 = ADD32(ctx->r7, 0);
    // 0x8008FF88: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8008FF8C: addu        $fp, $zero, $zero
    ctx->r30 = ADD32(0, 0);
    // 0x8008FF90: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
    // 0x8008FF94: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8008FF98: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8008FF9C: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x8008FFA0: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x8008FFA4: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x8008FFA8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x8008FFAC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x8008FFB0: beq         $s4, $zero, L_80090384
    if (ctx->r20 == 0) {
        // 0x8008FFB4: sw          $s1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r17;
            goto L_80090384;
    }
    // 0x8008FFB4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8008FFB8: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8008FFBC: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8008FFC0: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8008FFC4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8008FFC8: lui         $v1, 0xB00
    ctx->r3 = S32(0XB00 << 16);
    // 0x8008FFCC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8008FFD0: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8008FFD4: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x8008FFD8: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x8008FFDC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008FFE0: lw          $v0, 0x10($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X10);
    // 0x8008FFE4: lui         $v1, 0x1FFF
    ctx->r3 = S32(0X1FFF << 16);
    // 0x8008FFE8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8008FFEC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8008FFF0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8008FFF4: sw          $v0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r2;
    // 0x8008FFF8: lw          $a1, 0x30($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X30);
    // 0x8008FFFC: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x80090000: addu        $v0, $s4, $a1
    ctx->r2 = ADD32(ctx->r20, ctx->r5);
    // 0x80090004: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80090008: beq         $v0, $zero, L_80090018
    if (ctx->r2 == 0) {
        // 0x8009000C: addu        $s7, $zero, $zero
        ctx->r23 = ADD32(0, 0);
            goto L_80090018;
    }
    // 0x8009000C: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x80090010: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x80090014: sltu        $a0, $zero, $v0
    ctx->r4 = 0 < ctx->r2 ? 1 : 0;
L_80090018:
    // 0x80090018: beq         $a0, $zero, L_80090024
    if (ctx->r4 == 0) {
        // 0x8009001C: addu        $s1, $s4, $zero
        ctx->r17 = ADD32(ctx->r20, 0);
            goto L_80090024;
    }
    // 0x8009001C: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
    // 0x80090020: subu        $s1, $v1, $a1
    ctx->r17 = SUB32(ctx->r3, ctx->r5);
L_80090024:
    // 0x80090024: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x80090028: beq         $v1, $zero, L_80090038
    if (ctx->r3 == 0) {
        // 0x8009002C: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80090038;
    }
    // 0x8009002C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80090030: j           L_8009003C
    // 0x80090034: subu        $s6, $v0, $v1
    ctx->r22 = SUB32(ctx->r2, ctx->r3);
        goto L_8009003C;
    // 0x80090034: subu        $s6, $v0, $v1
    ctx->r22 = SUB32(ctx->r2, ctx->r3);
L_80090038:
    // 0x80090038: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
L_8009003C:
    // 0x8009003C: subu        $a2, $s1, $s6
    ctx->r6 = SUB32(ctx->r17, ctx->r22);
    // 0x80090040: nor         $v0, $zero, $a2
    ctx->r2 = ~(0 | ctx->r6);
    // 0x80090044: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80090048: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    // 0x8009004C: addiu       $v0, $a2, 0xF
    ctx->r2 = ADD32(ctx->r6, 0XF);
    // 0x80090050: sra         $s2, $v0, 4
    ctx->r18 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80090054: sll         $t1, $s2, 3
    ctx->r9 = S32(ctx->r18 << 3);
    // 0x80090058: beq         $a0, $zero, L_80090228
    if (ctx->r4 == 0) {
        // 0x8009005C: addu        $a3, $t1, $s2
        ctx->r7 = ADD32(ctx->r9, ctx->r18);
            goto L_80090228;
    }
    // 0x8009005C: addu        $a3, $t1, $s2
    ctx->r7 = ADD32(ctx->r9, ctx->r18);
    // 0x80090060: lh          $v0, 0x0($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X0);
    // 0x80090064: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80090068: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8009006C: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x80090070: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    // 0x80090074: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80090078: jal         0x80090544
    // 0x8009007C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80090544_6B944(rdram, ctx);
        goto after_0;
    // 0x8009007C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x80090080: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x80090084: beq         $v1, $zero, L_8009009C
    if (ctx->r3 == 0) {
        // 0x80090088: addu        $t0, $v0, $zero
        ctx->r8 = ADD32(ctx->r2, 0);
            goto L_8009009C;
    }
    // 0x80090088: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x8009008C: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x80090090: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80090094: j           L_800900A4
    // 0x80090098: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_800900A4;
    // 0x80090098: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_8009009C:
    // 0x8009009C: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x800900A0: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
L_800900A4:
    // 0x800900A4: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x800900A8: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x800900AC: lw          $a1, 0x14($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X14);
    // 0x800900B0: lw          $v1, 0x14($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X14);
    // 0x800900B4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x800900B8: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x800900BC: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x800900C0: srl         $v1, $v1, 4
    ctx->r3 = S32(U32(ctx->r3) >> 4);
    // 0x800900C4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x800900C8: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800900CC: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x800900D0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800900D4: sw          $a1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r5;
    // 0x800900D8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x800900DC: sw          $a0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r4;
    // 0x800900E0: lh          $s3, 0x0($s5)
    ctx->r19 = MEM_H(ctx->r21, 0X0);
    // 0x800900E4: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x800900E8: beq         $v0, $zero, L_800901F0
    if (ctx->r2 == 0) {
        // 0x800900EC: sll         $v0, $s7, 16
        ctx->r2 = S32(ctx->r23 << 16);
            goto L_800901F0;
    }
    // 0x800900EC: sll         $v0, $s7, 16
    ctx->r2 = S32(ctx->r23 << 16);
    // 0x800900F0: sra         $s6, $v0, 16
    ctx->r22 = S32(SIGNED(ctx->r2) >> 16);
L_800900F4:
    // 0x800900F4: addiu       $v0, $s2, 0x1
    ctx->r2 = ADD32(ctx->r18, 0X1);
    // 0x800900F8: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x800900FC: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80090100: sll         $v1, $s1, 1
    ctx->r3 = S32(ctx->r17 << 1);
    // 0x80090104: addu        $s3, $s3, $v1
    ctx->r19 = ADD32(ctx->r19, ctx->r3);
    // 0x80090108: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8009010C: lw          $a0, 0x1C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1C);
    // 0x80090110: addiu       $v1, $zero, -0x20
    ctx->r3 = ADD32(0, -0X20);
    // 0x80090114: and         $s5, $v0, $v1
    ctx->r21 = ctx->r2 & ctx->r3;
    // 0x80090118: nor         $v0, $zero, $a0
    ctx->r2 = ~(0 | ctx->r4);
    // 0x8009011C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80090120: sltu        $v1, $zero, $a0
    ctx->r3 = 0 < ctx->r4 ? 1 : 0;
    // 0x80090124: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80090128: beq         $v0, $zero, L_80090138
    if (ctx->r2 == 0) {
        // 0x8009012C: subu        $s4, $s4, $s1
        ctx->r20 = SUB32(ctx->r20, ctx->r17);
            goto L_80090138;
    }
    // 0x8009012C: subu        $s4, $s4, $s1
    ctx->r20 = SUB32(ctx->r20, ctx->r17);
    // 0x80090130: addiu       $v0, $a0, -0x1
    ctx->r2 = ADD32(ctx->r4, -0X1);
    // 0x80090134: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
L_80090138:
    // 0x80090138: lw          $v1, 0x18($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X18);
    // 0x8009013C: lw          $v0, 0x14($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X14);
    // 0x80090140: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80090144: sltu        $v0, $s4, $v1
    ctx->r2 = ctx->r20 < ctx->r3 ? 1 : 0;
    // 0x80090148: bne         $v0, $zero, L_80090154
    if (ctx->r2 != 0) {
        // 0x8009014C: addu        $s1, $s4, $zero
        ctx->r17 = ADD32(ctx->r20, 0);
            goto L_80090154;
    }
    // 0x8009014C: addu        $s1, $s4, $zero
    ctx->r17 = ADD32(ctx->r20, 0);
    // 0x80090150: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
L_80090154:
    // 0x80090154: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    // 0x80090158: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8009015C: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x80090160: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x80090164: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80090168: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8009016C: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    // 0x80090170: addiu       $v1, $v1, -0x10
    ctx->r3 = ADD32(ctx->r3, -0X10);
    // 0x80090174: addu        $a2, $s1, $v1
    ctx->r6 = ADD32(ctx->r17, ctx->r3);
    // 0x80090178: nor         $v0, $zero, $a2
    ctx->r2 = ~(0 | ctx->r6);
    // 0x8009017C: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80090180: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    // 0x80090184: addiu       $v0, $a2, 0xF
    ctx->r2 = ADD32(ctx->r6, 0XF);
    // 0x80090188: sra         $s2, $v0, 4
    ctx->r18 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8009018C: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x80090190: sll         $a3, $s2, 3
    ctx->r7 = S32(ctx->r18 << 3);
    // 0x80090194: addu        $a3, $a3, $s2
    ctx->r7 = ADD32(ctx->r7, ctx->r18);
    // 0x80090198: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8009019C: jal         0x80090544
    // 0x800901A0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80090544_6B944(rdram, ctx);
        goto after_1;
    // 0x800901A0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x800901A4: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x800901A8: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
    // 0x800901AC: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x800901B0: lui         $a2, 0xFF
    ctx->r6 = S32(0XFF << 16);
    // 0x800901B4: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x800901B8: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x800901BC: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x800901C0: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x800901C4: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x800901C8: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x800901CC: lui         $v0, 0xA00
    ctx->r2 = S32(0XA00 << 16);
    // 0x800901D0: sw          $a0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r4;
    // 0x800901D4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x800901D8: addu        $v1, $s5, $v1
    ctx->r3 = ADD32(ctx->r21, ctx->r3);
    // 0x800901DC: and         $v1, $v1, $a2
    ctx->r3 = ctx->r3 & ctx->r6;
    // 0x800901E0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800901E4: slt         $v0, $s1, $s4
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x800901E8: bne         $v0, $zero, L_800900F4
    if (ctx->r2 != 0) {
        // 0x800901EC: sw          $v1, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r3;
            goto L_800900F4;
    }
    // 0x800901EC: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
L_800901F0:
    // 0x800901F0: lw          $a0, 0x30($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X30);
    // 0x800901F4: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x800901F8: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    // 0x800901FC: addu        $a0, $a0, $s4
    ctx->r4 = ADD32(ctx->r4, ctx->r20);
    // 0x80090200: sw          $a0, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r4;
    // 0x80090204: lw          $a0, 0x3C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X3C);
    // 0x80090208: addu        $v1, $s4, $v1
    ctx->r3 = ADD32(ctx->r20, ctx->r3);
    // 0x8009020C: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x80090210: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
    // 0x80090214: sll         $v1, $s2, 3
    ctx->r3 = S32(ctx->r18 << 3);
    // 0x80090218: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x8009021C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80090220: j           L_80090388
    // 0x80090224: sw          $a0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r4;
        goto L_80090388;
    // 0x80090224: sw          $a0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r4;
L_80090228:
    // 0x80090228: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x8009022C: lui         $a1, 0x38E3
    ctx->r5 = S32(0X38E3 << 16);
    // 0x80090230: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x80090234: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80090238: lw          $a0, 0x4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4);
    // 0x8009023C: ori         $a1, $a1, 0x8E39
    ctx->r5 = ctx->r5 | 0X8E39;
    // 0x80090240: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x80090244: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80090248: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x8009024C: nor         $v0, $zero, $a0
    ctx->r2 = ~(0 | ctx->r4);
    // 0x80090250: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80090254: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x80090258: mult        $a0, $a1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8009025C: sll         $s1, $s2, 4
    ctx->r17 = S32(ctx->r18 << 4);
    // 0x80090260: sra         $v1, $a0, 31
    ctx->r3 = S32(SIGNED(ctx->r4) >> 31);
    // 0x80090264: mfhi        $t2
    ctx->r10 = hi;
    // 0x80090268: sra         $v0, $t2, 1
    ctx->r2 = S32(SIGNED(ctx->r10) >> 1);
    // 0x8009026C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80090270: sll         $s3, $v0, 4
    ctx->r19 = S32(ctx->r2 << 4);
    // 0x80090274: addu        $v1, $s1, $s6
    ctx->r3 = ADD32(ctx->r17, ctx->r22);
    // 0x80090278: slt         $v0, $v1, $s3
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r19) ? 1 : 0;
    // 0x8009027C: bnel        $v0, $zero, L_80090284
    if (ctx->r2 != 0) {
        // 0x80090280: addu        $s3, $v1, $zero
        ctx->r19 = ADD32(ctx->r3, 0);
            goto L_80090284;
    }
    goto skip_0;
    // 0x80090280: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    skip_0:
L_80090284:
    // 0x80090284: andi        $v0, $s3, 0xF
    ctx->r2 = ctx->r19 & 0XF;
    // 0x80090288: subu        $v0, $s3, $v0
    ctx->r2 = SUB32(ctx->r19, ctx->r2);
    // 0x8009028C: slt         $v0, $v0, $s4
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r20) ? 1 : 0;
    // 0x80090290: beq         $v0, $zero, L_8009031C
    if (ctx->r2 == 0) {
        // 0x80090294: subu        $a3, $a3, $a0
        ctx->r7 = SUB32(ctx->r7, ctx->r4);
            goto L_8009031C;
    }
    // 0x80090294: subu        $a3, $a3, $a0
    ctx->r7 = SUB32(ctx->r7, ctx->r4);
    // 0x80090298: lh          $v0, 0x0($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X0);
    // 0x8009029C: addu        $a0, $t0, $zero
    ctx->r4 = ADD32(ctx->r8, 0);
    // 0x800902A0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x800902A4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x800902A8: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x800902AC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x800902B0: subu        $a2, $s1, $s3
    ctx->r6 = SUB32(ctx->r17, ctx->r19);
    // 0x800902B4: jal         0x80090544
    // 0x800902B8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80090544_6B944(rdram, ctx);
        goto after_2;
    // 0x800902B8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x800902BC: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x800902C0: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x800902C4: beq         $v1, $zero, L_800902DC
    if (ctx->r3 == 0) {
        // 0x800902C8: addu        $t0, $v0, $zero
        ctx->r8 = ADD32(ctx->r2, 0);
            goto L_800902DC;
    }
    // 0x800902C8: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x800902CC: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x800902D0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x800902D4: j           L_800902E4
    // 0x800902D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_800902E4;
    // 0x800902D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_800902DC:
    // 0x800902DC: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x800902E0: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
L_800902E4:
    // 0x800902E4: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x800902E8: lw          $v1, 0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X30);
    // 0x800902EC: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x800902F0: addu        $v1, $v1, $s4
    ctx->r3 = ADD32(ctx->r3, ctx->r20);
    // 0x800902F4: sw          $v1, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->r3;
    // 0x800902F8: lw          $v1, 0x3C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X3C);
    // 0x800902FC: addu        $v0, $s4, $v0
    ctx->r2 = ADD32(ctx->r20, ctx->r2);
    // 0x80090300: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80090304: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x80090308: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x8009030C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80090310: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80090314: j           L_80090330
    // 0x80090318: sw          $v1, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r3;
        goto L_80090330;
    // 0x80090318: sw          $v1, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r3;
L_8009031C:
    // 0x8009031C: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x80090320: addu        $v1, $t1, $s2
    ctx->r3 = ADD32(ctx->r9, ctx->r18);
    // 0x80090324: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x80090328: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8009032C: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
L_80090330:
    // 0x80090330: beq         $s3, $zero, L_80090388
    if (ctx->r19 == 0) {
        // 0x80090334: addu        $v0, $t0, $zero
        ctx->r2 = ADD32(ctx->r8, 0);
            goto L_80090388;
    }
    // 0x80090334: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    // 0x80090338: beq         $fp, $zero, L_80090350
    if (ctx->r30 == 0) {
        // 0x8009033C: sw          $zero, 0x34($s0)
        MEM_W(0X34, ctx->r16) = 0;
            goto L_80090350;
    }
    // 0x8009033C: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x80090340: addu        $v0, $s6, $s1
    ctx->r2 = ADD32(ctx->r22, ctx->r17);
    // 0x80090344: subu        $v0, $v0, $s3
    ctx->r2 = SUB32(ctx->r2, ctx->r19);
    // 0x80090348: j           L_80090354
    // 0x8009034C: sll         $a2, $v0, 1
    ctx->r6 = S32(ctx->r2 << 1);
        goto L_80090354;
    // 0x8009034C: sll         $a2, $v0, 1
    ctx->r6 = S32(ctx->r2 << 1);
L_80090350:
    // 0x80090350: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80090354:
    // 0x80090354: addu        $a1, $t0, $zero
    ctx->r5 = ADD32(ctx->r8, 0);
    // 0x80090358: addiu       $t0, $t0, 0x8
    ctx->r8 = ADD32(ctx->r8, 0X8);
    // 0x8009035C: lui         $a0, 0xFF
    ctx->r4 = S32(0XFF << 16);
    // 0x80090360: lh          $v0, 0x0($s5)
    ctx->r2 = MEM_H(ctx->r21, 0X0);
    // 0x80090364: ori         $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 | 0XFFFF;
    // 0x80090368: sll         $v1, $s3, 1
    ctx->r3 = S32(ctx->r19 << 1);
    // 0x8009036C: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x80090370: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80090374: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x80090378: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8009037C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80090380: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_80090384:
    // 0x80090384: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
L_80090388:
    // 0x80090388: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x8009038C: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80090390: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80090394: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80090398: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x8009039C: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x800903A0: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x800903A4: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x800903A8: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x800903AC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800903B0: jr          $ra
    // 0x800903B4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x800903B4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void alFxPull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80097F60: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80097F64: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x80097F68: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80097F6C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80097F70: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80097F74: sw          $fp, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r30;
    // 0x80097F78: sw          $s7, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r23;
    // 0x80097F7C: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x80097F80: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x80097F84: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x80097F88: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80097F8C: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80097F90: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80097F94: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80097F98: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x80097F9C: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    // 0x80097FA0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80097FA4: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x80097FA8: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x80097FAC: jalr        $v0
    // 0x80097FB0: addiu       $s5, $zero, 0x140
    ctx->r21 = ADD32(0, 0X140);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80097FB0: addiu       $s5, $zero, 0x140
    ctx->r21 = ADD32(0, 0X140);
    after_0:
    // 0x80097FB4: addu        $t3, $v0, $zero
    ctx->r11 = ADD32(ctx->r2, 0);
    // 0x80097FB8: addu        $a3, $t3, $zero
    ctx->r7 = ADD32(ctx->r11, 0);
    // 0x80097FBC: addiu       $t3, $t3, 0x8
    ctx->r11 = ADD32(ctx->r11, 0X8);
    // 0x80097FC0: addu        $t0, $t3, $zero
    ctx->r8 = ADD32(ctx->r11, 0);
    // 0x80097FC4: addiu       $t3, $t3, 0x8
    ctx->r11 = ADD32(ctx->r11, 0X8);
    // 0x80097FC8: lui         $t2, 0xC00
    ctx->r10 = S32(0XC00 << 16);
    // 0x80097FCC: ori         $t2, $t2, 0xDA83
    ctx->r10 = ctx->r10 | 0XDA83;
    // 0x80097FD0: lui         $t1, 0x6C0
    ctx->r9 = S32(0X6C0 << 16);
    // 0x80097FD4: ori         $t1, $t1, 0x6C0
    ctx->r9 = ctx->r9 | 0X6C0;
    // 0x80097FD8: addu        $v1, $t3, $zero
    ctx->r3 = ADD32(ctx->r11, 0);
    // 0x80097FDC: addiu       $t3, $t3, 0x8
    ctx->r11 = ADD32(ctx->r11, 0X8);
    // 0x80097FE0: lui         $a2, 0xC00
    ctx->r6 = S32(0XC00 << 16);
    // 0x80097FE4: ori         $a2, $a2, 0x5A82
    ctx->r6 = ctx->r6 | 0X5A82;
    // 0x80097FE8: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    // 0x80097FEC: ori         $a1, $a1, 0x6C0
    ctx->r5 = ctx->r5 | 0X6C0;
    // 0x80097FF0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80097FF4: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80097FF8: sll         $s0, $s4, 1
    ctx->r16 = S32(ctx->r20 << 1);
    // 0x80097FFC: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    // 0x80098000: andi        $v0, $s0, 0xFFFF
    ctx->r2 = ctx->r16 & 0XFFFF;
    // 0x80098004: sw          $v0, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->r2;
    // 0x80098008: sw          $t2, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r10;
    // 0x8009800C: sw          $t1, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r9;
    // 0x80098010: sw          $a2, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r6;
    // 0x80098014: sw          $a1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r5;
    // 0x80098018: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8009801C: lw          $a1, 0x18($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X18);
    // 0x80098020: addiu       $a2, $zero, 0x6C0
    ctx->r6 = ADD32(0, 0X6C0);
    // 0x80098024: jal         0x80098860
    // 0x80098028: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    _saveBuffer(rdram, ctx);
        goto after_1;
    // 0x80098028: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_1:
    // 0x8009802C: addu        $t3, $v0, $zero
    ctx->r11 = ADD32(ctx->r2, 0);
    // 0x80098030: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80098034: ori         $v1, $v1, 0x800
    ctx->r3 = ctx->r3 | 0X800;
    // 0x80098038: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x8009803C: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x80098040: lbu         $v0, 0x24($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X24);
    // 0x80098044: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x80098048: blez        $v0, L_80098244
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8009804C: addiu       $t3, $t3, 0x8
        ctx->r11 = ADD32(ctx->r11, 0X8);
            goto L_80098244;
    }
    // 0x8009804C: addiu       $t3, $t3, 0x8
    ctx->r11 = ADD32(ctx->r11, 0X8);
L_80098050:
    // 0x80098050: lhu         $t4, 0x1E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X1E);
    // 0x80098054: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80098058: sll         $v1, $t4, 16
    ctx->r3 = S32(ctx->r12 << 16);
    // 0x8009805C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80098060: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80098064: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80098068: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8009806C: addu        $s1, $a0, $v0
    ctx->r17 = ADD32(ctx->r4, ctx->r2);
    // 0x80098070: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80098074: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x80098078: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x8009807C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80098080: subu        $s3, $a0, $v0
    ctx->r19 = SUB32(ctx->r4, ctx->r2);
    // 0x80098084: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80098088: bne         $s3, $s7, L_800980A0
    if (ctx->r19 != ctx->r23) {
        // 0x8009808C: subu        $fp, $a0, $v1
        ctx->r30 = SUB32(ctx->r4, ctx->r3);
            goto L_800980A0;
    }
    // 0x8009808C: subu        $fp, $a0, $v1
    ctx->r30 = SUB32(ctx->r4, ctx->r3);
    // 0x80098090: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80098094: addu        $s5, $s6, $zero
    ctx->r21 = ADD32(ctx->r22, 0);
    // 0x80098098: j           L_800980C0
    // 0x8009809C: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
        goto L_800980C0;
    // 0x8009809C: addu        $s6, $v0, $zero
    ctx->r22 = ADD32(ctx->r2, 0);
L_800980A0:
    // 0x800980A0: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800980A4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800980A8: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x800980AC: sll         $a2, $s6, 16
    ctx->r6 = S32(ctx->r22 << 16);
    // 0x800980B0: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800980B4: jal         0x800986F0
    // 0x800980B8: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    _loadBuffer(rdram, ctx);
        goto after_2;
    // 0x800980B8: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_2:
    // 0x800980BC: addu        $t3, $v0, $zero
    ctx->r11 = ADD32(ctx->r2, 0);
L_800980C0:
    // 0x800980C0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800980C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x800980C8: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x800980CC: sra         $s0, $v0, 16
    ctx->r16 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800980D0: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x800980D4: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    // 0x800980D8: jal         0x800984D8
    // 0x800980DC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    _loadOutputBuffer(rdram, ctx);
        goto after_3;
    // 0x800980DC: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_3:
    // 0x800980E0: lh          $v1, 0x8($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X8);
    // 0x800980E4: addu        $t3, $v0, $zero
    ctx->r11 = ADD32(ctx->r2, 0);
    // 0x800980E8: beq         $v1, $zero, L_80098144
    if (ctx->r3 == 0) {
        // 0x800980EC: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_80098144;
    }
    // 0x800980EC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x800980F0: addu        $a0, $t3, $zero
    ctx->r4 = ADD32(ctx->r11, 0);
    // 0x800980F4: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x800980F8: lui         $t4, 0xC00
    ctx->r12 = S32(0XC00 << 16);
    // 0x800980FC: or          $v0, $v0, $t4
    ctx->r2 = ctx->r2 | ctx->r12;
    // 0x80098100: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80098104: sll         $v0, $s6, 16
    ctx->r2 = S32(ctx->r22 << 16);
    // 0x80098108: andi        $v1, $s0, 0xFFFF
    ctx->r3 = ctx->r16 & 0XFFFF;
    // 0x8009810C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80098110: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x80098114: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x80098118: bne         $v0, $zero, L_80098144
    if (ctx->r2 != 0) {
        // 0x8009811C: addiu       $t3, $t3, 0x8
        ctx->r11 = ADD32(ctx->r11, 0X8);
            goto L_80098144;
    }
    // 0x8009811C: addiu       $t3, $t3, 0x8
    ctx->r11 = ADD32(ctx->r11, 0X8);
    // 0x80098120: lw          $v0, 0x20($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X20);
    // 0x80098124: bne         $v0, $zero, L_80098144
    if (ctx->r2 != 0) {
        // 0x80098128: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80098144;
    }
    // 0x80098128: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8009812C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80098130: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    // 0x80098134: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80098138: jal         0x80098860
    // 0x8009813C: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    _saveBuffer(rdram, ctx);
        goto after_4;
    // 0x8009813C: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_4:
    // 0x80098140: addu        $t3, $v0, $zero
    ctx->r11 = ADD32(ctx->r2, 0);
L_80098144:
    // 0x80098144: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x80098148: beq         $v0, $zero, L_80098198
    if (ctx->r2 == 0) {
        // 0x8009814C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80098198;
    }
    // 0x8009814C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80098150: addu        $t0, $t3, $zero
    ctx->r8 = ADD32(ctx->r11, 0);
    // 0x80098154: addiu       $t3, $t3, 0x8
    ctx->r11 = ADD32(ctx->r11, 0X8);
    // 0x80098158: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8009815C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80098160: sll         $a2, $s6, 16
    ctx->r6 = S32(ctx->r22 << 16);
    // 0x80098164: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80098168: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    // 0x8009816C: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x80098170: lui         $t4, 0xC00
    ctx->r12 = S32(0XC00 << 16);
    // 0x80098174: or          $v0, $v0, $t4
    ctx->r2 = ctx->r2 | ctx->r12;
    // 0x80098178: sw          $v0, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r2;
    // 0x8009817C: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x80098180: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x80098184: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80098188: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x8009818C: jal         0x80098860
    // 0x80098190: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    _saveBuffer(rdram, ctx);
        goto after_5;
    // 0x80098190: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_5:
    // 0x80098194: addu        $t3, $v0, $zero
    ctx->r11 = ADD32(ctx->r2, 0);
L_80098198:
    // 0x80098198: lw          $a0, 0x20($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X20);
    // 0x8009819C: beq         $a0, $zero, L_800981B8
    if (ctx->r4 == 0) {
        // 0x800981A0: sll         $a1, $s5, 16
        ctx->r5 = S32(ctx->r21 << 16);
            goto L_800981B8;
    }
    // 0x800981A0: sll         $a1, $s5, 16
    ctx->r5 = S32(ctx->r21 << 16);
    // 0x800981A4: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x800981A8: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x800981AC: jal         0x800989D0
    // 0x800981B0: addu        $a3, $t3, $zero
    ctx->r7 = ADD32(ctx->r11, 0);
    _filterBuffer(rdram, ctx);
        goto after_6;
    // 0x800981B0: addu        $a3, $t3, $zero
    ctx->r7 = ADD32(ctx->r11, 0);
    after_6:
    // 0x800981B4: addu        $t3, $v0, $zero
    ctx->r11 = ADD32(ctx->r2, 0);
L_800981B8:
    // 0x800981B8: lw          $v0, 0x24($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X24);
    // 0x800981BC: bne         $v0, $zero, L_800981E0
    if (ctx->r2 != 0) {
        // 0x800981C0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_800981E0;
    }
    // 0x800981C0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x800981C4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800981C8: addu        $a1, $fp, $zero
    ctx->r5 = ADD32(ctx->r30, 0);
    // 0x800981CC: sll         $a2, $s5, 16
    ctx->r6 = S32(ctx->r21 << 16);
    // 0x800981D0: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x800981D4: jal         0x80098860
    // 0x800981D8: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    _saveBuffer(rdram, ctx);
        goto after_7;
    // 0x800981D8: addu        $a3, $s4, $zero
    ctx->r7 = ADD32(ctx->r20, 0);
    after_7:
    // 0x800981DC: addu        $t3, $v0, $zero
    ctx->r11 = ADD32(ctx->r2, 0);
L_800981E0:
    // 0x800981E0: lh          $v0, 0xC($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XC);
    // 0x800981E4: beq         $v0, $zero, L_80098210
    if (ctx->r2 == 0) {
        // 0x800981E8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80098210;
    }
    // 0x800981E8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x800981EC: addu        $v0, $t3, $zero
    ctx->r2 = ADD32(ctx->r11, 0);
    // 0x800981F0: addiu       $t3, $t3, 0x8
    ctx->r11 = ADD32(ctx->r11, 0X8);
    // 0x800981F4: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x800981F8: lui         $t4, 0xC00
    ctx->r12 = S32(0XC00 << 16);
    // 0x800981FC: or          $v1, $v1, $t4
    ctx->r3 = ctx->r3 | ctx->r12;
    // 0x80098200: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80098204: sll         $v1, $s5, 16
    ctx->r3 = S32(ctx->r21 << 16);
    // 0x80098208: ori         $v1, $v1, 0x800
    ctx->r3 = ctx->r3 | 0X800;
    // 0x8009820C: sw          $v1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r3;
L_80098210:
    // 0x80098210: lhu         $t4, 0x1E($sp)
    ctx->r12 = MEM_HU(ctx->r29, 0X1E);
    // 0x80098214: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x80098218: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x8009821C: addiu       $v0, $t4, 0x1
    ctx->r2 = ADD32(ctx->r12, 0X1);
    // 0x80098220: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80098224: addu        $s7, $a0, $v1
    ctx->r23 = ADD32(ctx->r4, ctx->r3);
    // 0x80098228: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x8009822C: lbu         $v1, 0x24($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X24);
    // 0x80098230: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80098234: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80098238: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8009823C: bne         $v0, $zero, L_80098050
    if (ctx->r2 != 0) {
        // 0x80098240: nop
    
            goto L_80098050;
    }
    // 0x80098240: nop

L_80098244:
    // 0x80098244: lw          $v0, 0x18($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X18);
    // 0x80098248: lw          $a0, 0x1C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X1C);
    // 0x8009824C: lw          $v1, 0x14($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X14);
    // 0x80098250: sll         $a2, $s4, 1
    ctx->r6 = S32(ctx->r20 << 1);
    // 0x80098254: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80098258: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x8009825C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80098260: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80098264: beq         $v1, $zero, L_80098274
    if (ctx->r3 == 0) {
        // 0x80098268: sw          $v0, 0x18($s2)
        MEM_W(0X18, ctx->r18) = ctx->r2;
            goto L_80098274;
    }
    // 0x80098268: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8009826C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80098270: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
L_80098274:
    // 0x80098274: addiu       $v0, $t3, 0x8
    ctx->r2 = ADD32(ctx->r11, 0X8);
    // 0x80098278: addu        $a1, $t3, $zero
    ctx->r5 = ADD32(ctx->r11, 0);
    // 0x8009827C: addiu       $t4, $zero, 0x800
    ctx->r12 = ADD32(0, 0X800);
    // 0x80098280: sll         $v1, $t4, 16
    ctx->r3 = S32(ctx->r12 << 16);
    // 0x80098284: srl         $v1, $v1, 16
    ctx->r3 = S32(U32(ctx->r3) >> 16);
    // 0x80098288: lui         $a0, 0xA00
    ctx->r4 = S32(0XA00 << 16);
    // 0x8009828C: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80098290: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x80098294: andi        $v1, $a2, 0xFFFF
    ctx->r3 = ctx->r6 & 0XFFFF;
    // 0x80098298: lui         $a0, 0x6C0
    ctx->r4 = S32(0X6C0 << 16);
    // 0x8009829C: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x800982A0: sw          $v1, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r3;
    // 0x800982A4: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x800982A8: lw          $fp, 0x60($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X60);
    // 0x800982AC: lw          $s7, 0x5C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X5C);
    // 0x800982B0: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x800982B4: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x800982B8: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x800982BC: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x800982C0: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x800982C4: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x800982C8: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x800982CC: jr          $ra
    // 0x800982D0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x800982D0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8005129C_2C69C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005129C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800512A0: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x800512A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800512A8: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x800512AC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x800512B0: jal         0x80031600
    // 0x800512B4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80031600_CA00(rdram, ctx);
        goto after_0;
    // 0x800512B4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x800512B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800512BC: jal         0x80051364
    // 0x800512C0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80051364_2C764(rdram, ctx);
        goto after_1;
    // 0x800512C0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x800512C4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800512C8: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800512CC: jr          $ra
    // 0x800512D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x800512D0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8002AC34_6034(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002AC34: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002AC38: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8002AC3C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8002AC40: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002AC44: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8002AC48: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8002AC4C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8002AC50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8002AC54: lbu         $s1, 0x3($s3)
    ctx->r17 = MEM_BU(ctx->r19, 0X3);
    // 0x8002AC58: sll         $v0, $s1, 2
    ctx->r2 = S32(ctx->r17 << 2);
    // 0x8002AC5C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002AC60: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8002AC64: lw          $a0, 0x2270($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2270);
    // 0x8002AC68: jal         0x8008ADE8
    // 0x8002AC6C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_8008ADE8_661E8(rdram, ctx);
        goto after_0;
    // 0x8002AC6C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8002AC70: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x8002AC74: bne         $s4, $zero, L_8002AC84
    if (ctx->r20 != 0) {
        // 0x8002AC78: addiu       $v0, $zero, 0x8D
        ctx->r2 = ADD32(0, 0X8D);
            goto L_8002AC84;
    }
    // 0x8002AC78: addiu       $v0, $zero, 0x8D
    ctx->r2 = ADD32(0, 0X8D);
    // 0x8002AC7C: j           L_8002ACAC
    // 0x8002AC80: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_8002ACAC;
    // 0x8002AC80: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_8002AC84:
    // 0x8002AC84: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x8002AC88: beq         $v1, $v0, L_8002AD3C
    if (ctx->r3 == ctx->r2) {
        // 0x8002AC8C: addiu       $s2, $zero, 0x2
        ctx->r18 = ADD32(0, 0X2);
            goto L_8002AD3C;
    }
    // 0x8002AC8C: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
    // 0x8002AC90: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x8002AC94: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x8002AC98: lbu         $v1, -0x2698($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X2698);
    // 0x8002AC9C: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x8002ACA0: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8002ACA4: bne         $v0, $zero, L_8002AD54
    if (ctx->r2 != 0) {
        // 0x8002ACA8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8002AD54;
    }
    // 0x8002ACA8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8002ACAC:
    // 0x8002ACAC: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8002ACB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002ACB4: bne         $v1, $v0, L_8002AD54
    if (ctx->r3 != ctx->r2) {
        // 0x8002ACB8: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_8002AD54;
    }
    // 0x8002ACB8: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x8002ACBC: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8002ACC0: lw          $a0, 0x290($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X290);
    // 0x8002ACC4: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8002ACC8: lh          $v1, 0x14($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X14);
    // 0x8002ACCC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8002ACD0: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002ACD4: mflo        $v1
    ctx->r3 = lo;
    // 0x8002ACD8: lh          $a0, 0x18($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X18);
    // 0x8002ACDC: lh          $v0, 0x8($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X8);
    // 0x8002ACE0: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8002ACE4: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8002ACE8: mflo        $a0
    ctx->r4 = lo;
    // 0x8002ACEC: nop

    // 0x8002ACF0: nop

    // 0x8002ACF4: jal         0x80032424
    // 0x8002ACF8: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80032424_D824(rdram, ctx);
        goto after_1;
    // 0x8002ACF8: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_1:
    // 0x8002ACFC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8002AD00: slti        $v0, $a0, 0x1388
    ctx->r2 = SIGNED(ctx->r4) < 0X1388 ? 1 : 0;
    // 0x8002AD04: beql        $v0, $zero, L_8002AD54
    if (ctx->r2 == 0) {
        // 0x8002AD08: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8002AD54;
    }
    goto skip_0;
    // 0x8002AD08: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x8002AD0C: beq         $s4, $zero, L_8002AD44
    if (ctx->r20 == 0) {
        // 0x8002AD10: sll         $v0, $s1, 1
        ctx->r2 = S32(ctx->r17 << 1);
            goto L_8002AD44;
    }
    // 0x8002AD10: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x8002AD14: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x8002AD18: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8002AD1C: lbu         $v0, -0x2698($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2698);
    // 0x8002AD20: lbu         $v1, 0x2($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X2);
    // 0x8002AD24: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8002AD28: bne         $v0, $zero, L_8002AD44
    if (ctx->r2 != 0) {
        // 0x8002AD2C: sll         $v0, $s1, 1
        ctx->r2 = S32(ctx->r17 << 1);
            goto L_8002AD44;
    }
    // 0x8002AD2C: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
    // 0x8002AD30: slti        $v0, $a0, 0xBB9
    ctx->r2 = SIGNED(ctx->r4) < 0XBB9 ? 1 : 0;
    // 0x8002AD34: bne         $v0, $zero, L_8002AD44
    if (ctx->r2 != 0) {
        // 0x8002AD38: sll         $v0, $s1, 1
        ctx->r2 = S32(ctx->r17 << 1);
            goto L_8002AD44;
    }
    // 0x8002AD38: sll         $v0, $s1, 1
    ctx->r2 = S32(ctx->r17 << 1);
L_8002AD3C:
    // 0x8002AD3C: j           L_8002AD54
    // 0x8002AD40: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8002AD54;
    // 0x8002AD40: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8002AD44:
    // 0x8002AD44: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8002AD48: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8002AD4C: sh          $a0, -0x3E70($at)
    MEM_H(-0X3E70, ctx->r1) = ctx->r4;
    // 0x8002AD50: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_8002AD54:
    // 0x8002AD54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8002AD58: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8002AD5C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8002AD60: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8002AD64: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8002AD68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8002AD6C: jr          $ra
    // 0x8002AD70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8002AD70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800903B8_6B7B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800903B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800903BC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800903C0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x800903C4: beq         $a1, $v0, L_800904EC
    if (ctx->r5 == ctx->r2) {
        // 0x800903C8: addu        $a3, $a0, $zero
        ctx->r7 = ADD32(ctx->r4, 0);
            goto L_800904EC;
    }
    // 0x800903C8: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x800903CC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x800903D0: bne         $a1, $v0, L_80090538
    if (ctx->r5 != ctx->r2) {
        // 0x800903D4: nop
    
            goto L_80090538;
    }
    // 0x800903D4: nop

    // 0x800903D8: sw          $a2, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r6;
    // 0x800903DC: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x800903E0: lw          $a0, 0x20($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X20);
    // 0x800903E4: sw          $zero, 0x30($a3)
    MEM_W(0X30, ctx->r7) = 0;
    // 0x800903E8: sw          $v0, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r2;
    // 0x800903EC: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x800903F0: beq         $v1, $zero, L_80090408
    if (ctx->r3 == 0) {
        // 0x800903F4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80090408;
    }
    // 0x800903F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800903F8: beq         $v1, $v0, L_800904AC
    if (ctx->r3 == ctx->r2) {
        // 0x800903FC: nop
    
            goto L_800904AC;
    }
    // 0x800903FC: nop

    // 0x80090400: j           L_80090538
    // 0x80090404: nop

        goto L_80090538;
    // 0x80090404: nop

L_80090408:
    // 0x80090408: lw          $v0, 0x4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4);
    // 0x8009040C: lui         $v1, 0x38E3
    ctx->r3 = S32(0X38E3 << 16);
    // 0x80090410: ori         $v1, $v1, 0x8E39
    ctx->r3 = ctx->r3 | 0X8E39;
    // 0x80090414: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80090418: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8009041C: mfhi        $t0
    ctx->r8 = hi;
    // 0x80090420: sra         $v1, $t0, 1
    ctx->r3 = S32(SIGNED(ctx->r8) >> 1);
    // 0x80090424: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80090428: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8009042C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80090430: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x80090434: lw          $v0, 0x20($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X20);
    // 0x80090438: lw          $v1, 0x10($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X10);
    // 0x8009043C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x80090440: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80090444: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80090448: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8009044C: mflo        $v1
    ctx->r3 = lo;
    // 0x80090450: lw          $v0, 0x20($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X20);
    // 0x80090454: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80090458: sw          $v1, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r3;
    // 0x8009045C: lw          $v0, 0xC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XC);
    // 0x80090460: beq         $v0, $zero, L_800904DC
    if (ctx->r2 == 0) {
        // 0x80090464: addiu       $a2, $zero, 0x20
        ctx->r6 = ADD32(0, 0X20);
            goto L_800904DC;
    }
    // 0x80090464: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x80090468: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8009046C: lw          $v1, 0x20($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X20);
    // 0x80090470: sw          $v0, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r2;
    // 0x80090474: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x80090478: lw          $v1, 0x20($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X20);
    // 0x8009047C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80090480: sw          $v0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r2;
    // 0x80090484: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x80090488: lw          $v1, 0x20($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X20);
    // 0x8009048C: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x80090490: sw          $v0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r2;
    // 0x80090494: lw          $a0, 0xC($v1)
    ctx->r4 = MEM_W(ctx->r3, 0XC);
    // 0x80090498: lw          $a1, 0x10($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X10);
    // 0x8009049C: jal         0x80098D10
    // 0x800904A0: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    alCopy(rdram, ctx);
        goto after_0;
    // 0x800904A0: addiu       $a0, $a0, 0xC
    ctx->r4 = ADD32(ctx->r4, 0XC);
    after_0:
    // 0x800904A4: j           L_80090538
    // 0x800904A8: nop

        goto L_80090538;
    // 0x800904A8: nop

L_800904AC:
    // 0x800904AC: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x800904B0: beql        $v0, $zero, L_800904E0
    if (ctx->r2 == 0) {
        // 0x800904B4: sw          $zero, 0x1C($a3)
        MEM_W(0X1C, ctx->r7) = 0;
            goto L_800904E0;
    }
    goto skip_0;
    // 0x800904B4: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
    skip_0:
    // 0x800904B8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x800904BC: lw          $v1, 0x20($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X20);
    // 0x800904C0: sw          $v0, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r2;
    // 0x800904C4: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x800904C8: lw          $v1, 0x20($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X20);
    // 0x800904CC: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x800904D0: sw          $v0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r2;
    // 0x800904D4: j           L_80090530
    // 0x800904D8: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
        goto L_80090530;
    // 0x800904D8: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
L_800904DC:
    // 0x800904DC: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
L_800904E0:
    // 0x800904E0: sw          $zero, 0x18($a3)
    MEM_W(0X18, ctx->r7) = 0;
    // 0x800904E4: j           L_80090538
    // 0x800904E8: sw          $zero, 0x14($a3)
    MEM_W(0X14, ctx->r7) = 0;
        goto L_80090538;
    // 0x800904E8: sw          $zero, 0x14($a3)
    MEM_W(0X14, ctx->r7) = 0;
L_800904EC:
    // 0x800904EC: lw          $v0, 0x20($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X20);
    // 0x800904F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800904F4: sw          $zero, 0x34($a3)
    MEM_W(0X34, ctx->r7) = 0;
    // 0x800904F8: sw          $a0, 0x38($a3)
    MEM_W(0X38, ctx->r7) = ctx->r4;
    // 0x800904FC: beq         $v0, $zero, L_80090538
    if (ctx->r2 == 0) {
        // 0x80090500: sw          $zero, 0x30($a3)
        MEM_W(0X30, ctx->r7) = 0;
            goto L_80090538;
    }
    // 0x80090500: sw          $zero, 0x30($a3)
    MEM_W(0X30, ctx->r7) = 0;
    // 0x80090504: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80090508: lw          $v1, 0x20($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X20);
    // 0x8009050C: sw          $v0, 0x3C($a3)
    MEM_W(0X3C, ctx->r7) = ctx->r2;
    // 0x80090510: lbu         $v0, 0x8($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X8);
    // 0x80090514: beq         $v0, $zero, L_80090524
    if (ctx->r2 == 0) {
        // 0x80090518: nop
    
            goto L_80090524;
    }
    // 0x80090518: nop

    // 0x8009051C: bne         $v0, $a0, L_80090538
    if (ctx->r2 != ctx->r4) {
        // 0x80090520: nop
    
            goto L_80090538;
    }
    // 0x80090520: nop

L_80090524:
    // 0x80090524: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x80090528: beq         $v0, $zero, L_80090538
    if (ctx->r2 == 0) {
        // 0x8009052C: nop
    
            goto L_80090538;
    }
    // 0x8009052C: nop

L_80090530:
    // 0x80090530: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x80090534: sw          $v0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r2;
L_80090538:
    // 0x80090538: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8009053C: jr          $ra
    // 0x80090540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80090540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800268CC_1CCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800268CC: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800268D0: lb          $v0, 0x34E0($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X34E0);
    // 0x800268D4: bne         $v0, $zero, L_800268E4
    if (ctx->r2 != 0) {
        // 0x800268D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800268E4;
    }
    // 0x800268D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800268DC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800268E0: sb          $v0, 0x34E0($at)
    MEM_B(0X34E0, ctx->r1) = ctx->r2;
L_800268E4:
    // 0x800268E4: jr          $ra
    // 0x800268E8: nop

    TRACE_RETURN()
    return;
    // 0x800268E8: nop

;}
RECOMP_FUNC void func_8007897C_53D7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007897C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80078980: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80078984: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80078988: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8007898C: addiu       $s2, $sp, 0x18
    ctx->r18 = ADD32(ctx->r29, 0X18);
    // 0x80078990: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80078994: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80078998: addiu       $s0, $s3, 0x38
    ctx->r16 = ADD32(ctx->r19, 0X38);
    // 0x8007899C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x800789A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x800789A4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x800789A8: jal         0x8009A3B4
    // 0x800789AC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x800789AC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_0:
    // 0x800789B0: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x800789B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800789B8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x800789BC: lhu         $v0, 0x2C($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X2C);
    // 0x800789C0: lhu         $t3, 0x32($s3)
    ctx->r11 = MEM_HU(ctx->r19, 0X32);
    // 0x800789C4: lhu         $a3, 0x38($s3)
    ctx->r7 = MEM_HU(ctx->r19, 0X38);
    // 0x800789C8: lhu         $v1, 0x2E($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X2E);
    // 0x800789CC: lhu         $t4, 0x34($s3)
    ctx->r12 = MEM_HU(ctx->r19, 0X34);
    // 0x800789D0: lhu         $t1, 0x3A($s3)
    ctx->r9 = MEM_HU(ctx->r19, 0X3A);
    // 0x800789D4: lhu         $t0, 0x30($s3)
    ctx->r8 = MEM_HU(ctx->r19, 0X30);
    // 0x800789D8: lhu         $t5, 0x36($s3)
    ctx->r13 = MEM_HU(ctx->r19, 0X36);
    // 0x800789DC: lhu         $t2, 0x3C($s3)
    ctx->r10 = MEM_HU(ctx->r19, 0X3C);
    // 0x800789E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x800789E4: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x800789E8: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x800789EC: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x800789F0: addu        $t1, $t1, $v1
    ctx->r9 = ADD32(ctx->r9, ctx->r3);
    // 0x800789F4: addu        $t0, $t0, $t5
    ctx->r8 = ADD32(ctx->r8, ctx->r13);
    // 0x800789F8: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x800789FC: sh          $v0, 0x2C($s3)
    MEM_H(0X2C, ctx->r19) = ctx->r2;
    // 0x80078A00: sh          $a3, 0x38($s3)
    MEM_H(0X38, ctx->r19) = ctx->r7;
    // 0x80078A04: sh          $v1, 0x2E($s3)
    MEM_H(0X2E, ctx->r19) = ctx->r3;
    // 0x80078A08: sh          $t1, 0x3A($s3)
    MEM_H(0X3A, ctx->r19) = ctx->r9;
    // 0x80078A0C: sh          $t0, 0x30($s3)
    MEM_H(0X30, ctx->r19) = ctx->r8;
    // 0x80078A10: jal         0x8009A3B4
    // 0x80078A14: sh          $t2, 0x3C($s3)
    MEM_H(0X3C, ctx->r19) = ctx->r10;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80078A14: sh          $t2, 0x3C($s3)
    MEM_H(0X3C, ctx->r19) = ctx->r10;
    after_1:
    // 0x80078A18: jal         0x80078CA8
    // 0x80078A1C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_80078CA8_540A8(rdram, ctx);
        goto after_2;
    // 0x80078A1C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_2:
    // 0x80078A20: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80078A24: lbu         $v0, 0xA($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XA);
    // 0x80078A28: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80078A2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80078A30: sll         $a3, $v0, 1
    ctx->r7 = S32(ctx->r2 << 1);
    // 0x80078A34: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x80078A38: sll         $a3, $a3, 2
    ctx->r7 = S32(ctx->r7 << 2);
    // 0x80078A3C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80078A40: addiu       $v0, $v0, -0x3244
    ctx->r2 = ADD32(ctx->r2, -0X3244);
    // 0x80078A44: jal         0x800410F0
    // 0x80078A48: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    func_800410F0_1C4F0(rdram, ctx);
        goto after_3;
    // 0x80078A48: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    after_3:
    // 0x80078A4C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80078A50: beq         $s0, $zero, L_80078B08
    if (ctx->r16 == 0) {
        // 0x80078A54: nop
    
            goto L_80078B08;
    }
    // 0x80078A54: nop

    // 0x80078A58: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80078A5C: sh          $v0, 0x38($s3)
    MEM_H(0X38, ctx->r19) = ctx->r2;
    // 0x80078A60: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x80078A64: sh          $v0, 0x3A($s3)
    MEM_H(0X3A, ctx->r19) = ctx->r2;
    // 0x80078A68: lhu         $v0, 0x14($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X14);
    // 0x80078A6C: sh          $v0, 0x3C($s3)
    MEM_H(0X3C, ctx->r19) = ctx->r2;
    // 0x80078A70: andi        $v0, $s0, 0x1000
    ctx->r2 = ctx->r16 & 0X1000;
    // 0x80078A74: beq         $v0, $zero, L_80078B00
    if (ctx->r2 == 0) {
        // 0x80078A78: addiu       $a0, $s3, 0x2C
        ctx->r4 = ADD32(ctx->r19, 0X2C);
            goto L_80078B00;
    }
    // 0x80078A78: addiu       $a0, $s3, 0x2C
    ctx->r4 = ADD32(ctx->r19, 0X2C);
    // 0x80078A7C: lhu         $v1, 0x3E($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X3E);
    // 0x80078A80: lhu         $v0, 0x2E($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X2E);
    // 0x80078A84: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80078A88: sra         $v1, $v1, 17
    ctx->r3 = S32(SIGNED(ctx->r3) >> 17);
    // 0x80078A8C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80078A90: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80078A94: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80078A98: beq         $v0, $zero, L_80078AEC
    if (ctx->r2 == 0) {
        // 0x80078A9C: sh          $v1, 0x3E($s3)
        MEM_H(0X3E, ctx->r19) = ctx->r3;
            goto L_80078AEC;
    }
    // 0x80078A9C: sh          $v1, 0x3E($s3)
    MEM_H(0X3E, ctx->r19) = ctx->r3;
    // 0x80078AA0: lh          $a0, 0xC($s3)
    ctx->r4 = MEM_H(ctx->r19, 0XC);
    // 0x80078AA4: lbu         $v0, 0x8($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X8);
    // 0x80078AA8: lhu         $a2, 0x3E($s3)
    ctx->r6 = MEM_HU(ctx->r19, 0X3E);
    // 0x80078AAC: addiu       $a1, $s3, 0x18
    ctx->r5 = ADD32(ctx->r19, 0X18);
    // 0x80078AB0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80078AB4: sh          $zero, 0x2E($s3)
    MEM_H(0X2E, ctx->r19) = 0;
    // 0x80078AB8: sb          $v1, 0xB($s3)
    MEM_B(0XB, ctx->r19) = ctx->r3;
    // 0x80078ABC: sh          $zero, 0x26($s3)
    MEM_H(0X26, ctx->r19) = 0;
    // 0x80078AC0: sh          $zero, 0x24($s3)
    MEM_H(0X24, ctx->r19) = 0;
    // 0x80078AC4: sh          $zero, 0x22($s3)
    MEM_H(0X22, ctx->r19) = 0;
    // 0x80078AC8: sh          $zero, 0x1E($s3)
    MEM_H(0X1E, ctx->r19) = 0;
    // 0x80078ACC: sh          $zero, 0x1C($s3)
    MEM_H(0X1C, ctx->r19) = 0;
    // 0x80078AD0: sh          $zero, 0x1A($s3)
    MEM_H(0X1A, ctx->r19) = 0;
    // 0x80078AD4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80078AD8: sb          $v0, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r2;
    // 0x80078ADC: sh          $a2, 0x28($s3)
    MEM_H(0X28, ctx->r19) = ctx->r6;
    // 0x80078AE0: sh          $a2, 0x20($s3)
    MEM_H(0X20, ctx->r19) = ctx->r6;
    // 0x80078AE4: jal         0x800319B4
    // 0x80078AE8: sh          $a2, 0x18($s3)
    MEM_H(0X18, ctx->r19) = ctx->r6;
    func_800319B4_CDB4(rdram, ctx);
        goto after_4;
    // 0x80078AE8: sh          $a2, 0x18($s3)
    MEM_H(0X18, ctx->r19) = ctx->r6;
    after_4:
L_80078AEC:
    // 0x80078AEC: lhu         $v0, 0x2E($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X2E);
    // 0x80078AF0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80078AF4: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80078AF8: sh          $v0, 0x2E($s3)
    MEM_H(0X2E, ctx->r19) = ctx->r2;
    // 0x80078AFC: addiu       $a0, $s3, 0x2C
    ctx->r4 = ADD32(ctx->r19, 0X2C);
L_80078B00:
    // 0x80078B00: jal         0x80040834
    // 0x80078B04: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80040834_1BC34(rdram, ctx);
        goto after_5;
    // 0x80078B04: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
L_80078B08:
    // 0x80078B08: jal         0x80078D64
    // 0x80078B0C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_80078D64_54164(rdram, ctx);
        goto after_6;
    // 0x80078B0C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_6:
    // 0x80078B10: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80078B14: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80078B18: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80078B1C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80078B20: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80078B24: jr          $ra
    // 0x80078B28: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80078B28: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void osCreateScheduler(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009ABA0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8009ABA4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8009ABA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8009ABAC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8009ABB0: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x8009ABB4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8009ABB8: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x8009ABBC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8009ABC0: addiu       $s2, $s0, 0x40
    ctx->r18 = ADD32(ctx->r16, 0X40);
    // 0x8009ABC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8009ABC8: addiu       $a1, $s0, 0x58
    ctx->r5 = ADD32(ctx->r16, 0X58);
    // 0x8009ABCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8009ABD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8009ABD4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8009ABD8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8009ABDC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8009ABE0: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x8009ABE4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8009ABE8: sw          $zero, 0x274($s0)
    MEM_W(0X274, ctx->r16) = 0;
    // 0x8009ABEC: sw          $zero, 0x278($s0)
    MEM_W(0X278, ctx->r16) = 0;
    // 0x8009ABF0: sw          $zero, 0x260($s0)
    MEM_W(0X260, ctx->r16) = 0;
    // 0x8009ABF4: sw          $zero, 0x27C($s0)
    MEM_W(0X27C, ctx->r16) = 0;
    // 0x8009ABF8: sw          $zero, 0x264($s0)
    MEM_W(0X264, ctx->r16) = 0;
    // 0x8009ABFC: sw          $zero, 0x268($s0)
    MEM_W(0X268, ctx->r16) = 0;
    // 0x8009AC00: sw          $zero, 0x26C($s0)
    MEM_W(0X26C, ctx->r16) = 0;
    // 0x8009AC04: sw          $zero, 0x270($s0)
    MEM_W(0X270, ctx->r16) = 0;
    // 0x8009AC08: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x8009AC0C: lbu         $s3, 0x4B($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X4B);
    // 0x8009AC10: jal         0x8009A470
    // 0x8009AC14: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_0;
    // 0x8009AC14: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    after_0:
    // 0x8009AC18: addiu       $a0, $s0, 0x78
    ctx->r4 = ADD32(ctx->r16, 0X78);
    // 0x8009AC1C: addiu       $a1, $s0, 0x90
    ctx->r5 = ADD32(ctx->r16, 0X90);
    // 0x8009AC20: jal         0x8009A470
    // 0x8009AC24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    osCreateMesgQueue_recomp(rdram, ctx);
        goto after_1;
    // 0x8009AC24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8009AC28: jal         0x8009C2D0
    // 0x8009AC2C: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    osCreateViManager_recomp(rdram, ctx);
        goto after_2;
    // 0x8009AC2C: addiu       $a0, $zero, 0xFE
    ctx->r4 = ADD32(0, 0XFE);
    after_2:
    // 0x8009AC30: andi        $s1, $s1, 0xFF
    ctx->r17 = ctx->r17 & 0XFF;
    // 0x8009AC34: sll         $a0, $s1, 2
    ctx->r4 = S32(ctx->r17 << 2);
    // 0x8009AC38: addu        $a0, $a0, $s1
    ctx->r4 = ADD32(ctx->r4, ctx->r17);
    // 0x8009AC3C: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    // 0x8009AC40: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8009AC44: addiu       $v0, $v0, -0x230
    ctx->r2 = ADD32(ctx->r2, -0X230);
    // 0x8009AC48: jal         0x8009C670
    // 0x8009AC4C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    osViSetMode_recomp(rdram, ctx);
        goto after_3;
    // 0x8009AC4C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    after_3:
    // 0x8009AC50: jal         0x8009CBE0
    // 0x8009AC54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osViBlack_recomp(rdram, ctx);
        goto after_4;
    // 0x8009AC54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x8009AC58: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8009AC5C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8009AC60: jal         0x8009A840
    // 0x8009AC64: addiu       $a2, $zero, 0x29B
    ctx->r6 = ADD32(0, 0X29B);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x8009AC64: addiu       $a2, $zero, 0x29B
    ctx->r6 = ADD32(0, 0X29B);
    after_5:
    // 0x8009AC68: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    // 0x8009AC6C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8009AC70: jal         0x8009A840
    // 0x8009AC74: addiu       $a2, $zero, 0x29C
    ctx->r6 = ADD32(0, 0X29C);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x8009AC74: addiu       $a2, $zero, 0x29C
    ctx->r6 = ADD32(0, 0X29C);
    after_6:
    // 0x8009AC78: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x8009AC7C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8009AC80: jal         0x8009A840
    // 0x8009AC84: addiu       $a2, $zero, 0x29D
    ctx->r6 = ADD32(0, 0X29D);
    osSetEventMesg_recomp(rdram, ctx);
        goto after_7;
    // 0x8009AC84: addiu       $a2, $zero, 0x29D
    ctx->r6 = ADD32(0, 0X29D);
    after_7:
    // 0x8009AC88: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8009AC8C: addiu       $a1, $zero, 0x29A
    ctx->r5 = ADD32(0, 0X29A);
    // 0x8009AC90: jal         0x8009C610
    // 0x8009AC94: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    osViSetEvent_recomp(rdram, ctx);
        goto after_8;
    // 0x8009AC94: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_8:
    // 0x8009AC98: addiu       $s1, $s0, 0xB0
    ctx->r17 = ADD32(ctx->r16, 0XB0);
    // 0x8009AC9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8009ACA0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8009ACA4: lui         $a2, 0x800A
    ctx->r6 = S32(0X800A << 16);
    // 0x8009ACA8: addiu       $a2, $a2, -0x5228
    ctx->r6 = ADD32(ctx->r6, -0X5228);
    // 0x8009ACAC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x8009ACB0: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    // 0x8009ACB4: jal         0x8009B750
    // 0x8009ACB8: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    osCreateThread_recomp(rdram, ctx);
        goto after_9;
    // 0x8009ACB8: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    after_9:
    // 0x8009ACBC: jal         0x8009B9F0
    // 0x8009ACC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    osStartThread_recomp(rdram, ctx);
        goto after_10;
    // 0x8009ACC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x8009ACC4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8009ACC8: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8009ACCC: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8009ACD0: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8009ACD4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8009ACD8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8009ACDC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8009ACE0: jr          $ra
    // 0x8009ACE4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8009ACE4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80093438_6E838(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80093438: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8009343C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80093440: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x80093444: jal         0x8009E3E0
    // 0x80093448: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    osPfsRepairId_recomp(rdram, ctx);
        goto after_0;
    // 0x80093448: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_0:
    // 0x8009344C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80093450: jr          $ra
    // 0x80093454: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80093454: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80093458: nop

    // 0x8009345C: nop

;}
RECOMP_FUNC void func_8006B5B0_469B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006B5B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006B5B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006B5B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006B5BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006B5C0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8006B5C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006B5C8: beql        $v1, $v0, L_8006B77C
    if (ctx->r3 == ctx->r2) {
        // 0x8006B5CC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006B77C;
    }
    goto skip_0;
    // 0x8006B5CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x8006B5D0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8006B5D4: beql        $v0, $zero, L_8006B5EC
    if (ctx->r2 == 0) {
        // 0x8006B5D8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006B5EC;
    }
    goto skip_1;
    // 0x8006B5D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x8006B5DC: beq         $v1, $zero, L_8006B5FC
    if (ctx->r3 == 0) {
        // 0x8006B5E0: nop
    
            goto L_8006B5FC;
    }
    // 0x8006B5E0: nop

    // 0x8006B5E4: j           L_8006B7B0
    // 0x8006B5E8: nop

        goto L_8006B7B0;
    // 0x8006B5E8: nop

L_8006B5EC:
    // 0x8006B5EC: beq         $v1, $v0, L_8006B798
    if (ctx->r3 == ctx->r2) {
        // 0x8006B5F0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8006B798;
    }
    // 0x8006B5F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8006B5F4: j           L_8006B7B0
    // 0x8006B5F8: nop

        goto L_8006B7B0;
    // 0x8006B5F8: nop

L_8006B5FC:
    // 0x8006B5FC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8006B600: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x8006B604: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8006B608: beq         $v0, $zero, L_8006B730
    if (ctx->r2 == 0) {
        // 0x8006B60C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8006B730;
    }
    // 0x8006B60C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8006B610: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8006B614: addu        $at, $at, $v0
    gpr jr_addend_8006B61C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006B618: lw          $v0, 0x2880($at)
    ctx->r2 = ADD32(ctx->r1, 0X2880);
    // 0x8006B61C: jr          $v0
    // 0x8006B620: nop

    switch (jr_addend_8006B61C >> 2) {
        case 0: goto L_8006B624; break;
        case 1: goto L_8006B644; break;
        case 2: goto L_8006B664; break;
        case 3: goto L_8006B684; break;
        case 4: goto L_8006B6A4; break;
        case 5: goto L_8006B6C0; break;
        case 6: goto L_8006B6F0; break;
        case 7: goto L_8006B704; break;
        default: switch_error(__func__, 0x8006B61C, 0x800D2880);
    }
    // 0x8006B620: nop

L_8006B624:
    // 0x8006B624: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8006B628: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x8006B62C: lui         $v1, 0xFFE8
    ctx->r3 = S32(0XFFE8 << 16);
    // 0x8006B630: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006B634: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x8006B638: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8006B63C: j           L_8006B72C
    // 0x8006B640: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
        goto L_8006B72C;
    // 0x8006B640: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
L_8006B644:
    // 0x8006B644: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8006B648: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x8006B64C: lui         $v1, 0x18
    ctx->r3 = S32(0X18 << 16);
    // 0x8006B650: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006B654: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x8006B658: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8006B65C: j           L_8006B72C
    // 0x8006B660: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
        goto L_8006B72C;
    // 0x8006B660: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
L_8006B664:
    // 0x8006B664: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8006B668: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x8006B66C: lui         $v1, 0x18
    ctx->r3 = S32(0X18 << 16);
    // 0x8006B670: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006B674: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8006B678: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8006B67C: j           L_8006B72C
    // 0x8006B680: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
        goto L_8006B72C;
    // 0x8006B680: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
L_8006B684:
    // 0x8006B684: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8006B688: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x8006B68C: lui         $v1, 0xFFE8
    ctx->r3 = S32(0XFFE8 << 16);
    // 0x8006B690: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006B694: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8006B698: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8006B69C: j           L_8006B72C
    // 0x8006B6A0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
        goto L_8006B72C;
    // 0x8006B6A0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
L_8006B6A4:
    // 0x8006B6A4: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8006B6A8: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8006B6AC: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x8006B6B0: lui         $a1, 0xC
    ctx->r5 = S32(0XC << 16);
    // 0x8006B6B4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8006B6B8: j           L_8006B71C
    // 0x8006B6BC: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
        goto L_8006B71C;
    // 0x8006B6BC: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
L_8006B6C0:
    // 0x8006B6C0: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8006B6C4: lui         $v1, 0xFFF4
    ctx->r3 = S32(0XFFF4 << 16);
    // 0x8006B6C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006B6CC: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8006B6D0: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8006B6D4: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x8006B6D8: lui         $v1, 0xC
    ctx->r3 = S32(0XC << 16);
    // 0x8006B6DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8006B6E0: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x8006B6E4: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8006B6E8: j           L_8006B72C
    // 0x8006B6EC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
        goto L_8006B72C;
    // 0x8006B6EC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
L_8006B6F0:
    // 0x8006B6F0: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8006B6F4: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8006B6F8: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x8006B6FC: j           L_8006B714
    // 0x8006B700: lui         $a1, 0xFFF4
    ctx->r5 = S32(0XFFF4 << 16);
        goto L_8006B714;
    // 0x8006B700: lui         $a1, 0xFFF4
    ctx->r5 = S32(0XFFF4 << 16);
L_8006B704:
    // 0x8006B704: lw          $v0, 0x1C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1C);
    // 0x8006B708: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8006B70C: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x8006B710: lui         $a1, 0xC
    ctx->r5 = S32(0XC << 16);
L_8006B714:
    // 0x8006B714: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8006B718: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
L_8006B71C:
    // 0x8006B71C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8006B720: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8006B724: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8006B728: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
L_8006B72C:
    // 0x8006B72C: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
L_8006B730:
    // 0x8006B730: jal         0x8004F144
    // 0x8006B734: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8006B734: nop

    after_0:
    // 0x8006B738: beq         $v0, $zero, L_8006B74C
    if (ctx->r2 == 0) {
        // 0x8006B73C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006B74C;
    }
    // 0x8006B73C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B740: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8006B744: jal         0x8007023C
    // 0x8006B748: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8007023C_4B63C(rdram, ctx);
        goto after_1;
    // 0x8006B748: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
L_8006B74C:
    // 0x8006B74C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8006B750: jal         0x8004DD04
    // 0x8006B754: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x8006B754: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8006B758: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006B75C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x8006B760: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006B764: jal         0x8006FB90
    // 0x8006B768: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_3;
    // 0x8006B768: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x8006B76C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8006B770: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8006B774: j           L_8006B7B0
    // 0x8006B778: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
        goto L_8006B7B0;
    // 0x8006B778: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
L_8006B77C:
    // 0x8006B77C: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x8006B780: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006B784: jal         0x8006FB90
    // 0x8006B788: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_4;
    // 0x8006B788: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x8006B78C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006B790: j           L_8006B7AC
    // 0x8006B794: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8006B7AC;
    // 0x8006B794: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8006B798:
    // 0x8006B798: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8006B79C: bne         $v1, $v0, L_8006B7B0
    if (ctx->r3 != ctx->r2) {
        // 0x8006B7A0: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8006B7B0;
    }
    // 0x8006B7A0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8006B7A4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006B7A8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8006B7AC:
    // 0x8006B7AC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006B7B0:
    // 0x8006B7B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006B7B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006B7B8: jr          $ra
    // 0x8006B7BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006B7BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006FDFC_4B1FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006FDFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006FE00: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006FE04: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006FE08: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8006FE0C: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x8006FE10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006FE14: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8006FE18: lhu         $v1, 0x12A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X12A);
    // 0x8006FE1C: lhu         $v0, 0x12E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006FE20: lhu         $s1, 0x11C($s0)
    ctx->r17 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006FE24: lhu         $a0, 0x12C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006FE28: or          $a3, $v1, $v0
    ctx->r7 = ctx->r3 | ctx->r2;
    // 0x8006FE2C: lhu         $v0, 0x128($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X128);
    // 0x8006FE30: and         $v1, $s1, $a3
    ctx->r3 = ctx->r17 & ctx->r7;
    // 0x8006FE34: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8006FE38: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8006FE3C: and         $v0, $s1, $v0
    ctx->r2 = ctx->r17 & ctx->r2;
    // 0x8006FE40: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8006FE44: beq         $v1, $v0, L_8006FE78
    if (ctx->r3 == ctx->r2) {
        // 0x8006FE48: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_8006FE78;
    }
    // 0x8006FE48: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x8006FE4C: jal         0x8006FEB4
    // 0x8006FE50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FEB4_4B2B4(rdram, ctx);
        goto after_0;
    // 0x8006FE50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8006FE54: beq         $s2, $zero, L_8006FE98
    if (ctx->r18 == 0) {
        // 0x8006FE58: addu        $t0, $v0, $zero
        ctx->r8 = ADD32(ctx->r2, 0);
            goto L_8006FE98;
    }
    // 0x8006FE58: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x8006FE5C: lbu         $v1, 0xAD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAD);
    // 0x8006FE60: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8006FE64: beq         $v1, $v0, L_8006FE98
    if (ctx->r3 == ctx->r2) {
        // 0x8006FE68: addiu       $a0, $zero, 0xD
        ctx->r4 = ADD32(0, 0XD);
            goto L_8006FE98;
    }
    // 0x8006FE68: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x8006FE6C: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
    // 0x8006FE70: j           L_8006FE98
    // 0x8006FE74: sb          $zero, 0xA4($s0)
    MEM_B(0XA4, ctx->r16) = 0;
        goto L_8006FE98;
    // 0x8006FE74: sb          $zero, 0xA4($s0)
    MEM_B(0XA4, ctx->r16) = 0;
L_8006FE78:
    // 0x8006FE78: beql        $s2, $zero, L_8006FE98
    if (ctx->r18 == 0) {
        // 0x8006FE7C: sh          $zero, 0xB4($s0)
        MEM_H(0XB4, ctx->r16) = 0;
            goto L_8006FE98;
    }
    goto skip_0;
    // 0x8006FE7C: sh          $zero, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = 0;
    skip_0:
    // 0x8006FE80: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8006FE84: beql        $v0, $zero, L_8006FE98
    if (ctx->r2 == 0) {
        // 0x8006FE88: sh          $zero, 0xB4($s0)
        MEM_H(0XB4, ctx->r16) = 0;
            goto L_8006FE98;
    }
    goto skip_1;
    // 0x8006FE88: sh          $zero, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = 0;
    skip_1:
    // 0x8006FE8C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8006FE90: sb          $zero, 0xA4($s0)
    MEM_B(0XA4, ctx->r16) = 0;
    // 0x8006FE94: sh          $zero, 0xB4($s0)
    MEM_H(0XB4, ctx->r16) = 0;
L_8006FE98:
    // 0x8006FE98: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    // 0x8006FE9C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006FEA0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8006FEA4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8006FEA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006FEAC: jr          $ra
    // 0x8006FEB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8006FEB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80061380_3C780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80061380: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80061384: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80061388: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8006138C: jal         0x8002C6F0
    // 0x80061390: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8002C6F0_7AF0(rdram, ctx);
        goto after_0;
    // 0x80061390: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80061394: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80061398: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8006139C: addiu       $a1, $a1, 0x4B10
    ctx->r5 = ADD32(ctx->r5, 0X4B10);
    // 0x800613A0: addiu       $s1, $zero, 0x3C0
    ctx->r17 = ADD32(0, 0X3C0);
    // 0x800613A4: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x800613A8: addiu       $s0, $zero, 0x40
    ctx->r16 = ADD32(0, 0X40);
    // 0x800613AC: sh          $s1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r17;
    // 0x800613B0: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x800613B4: sh          $s0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r16;
    // 0x800613B8: jal         0x8002FDC0
    // 0x800613BC: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    func_8002FDC0_B1C0(rdram, ctx);
        goto after_1;
    // 0x800613BC: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    after_1:
    // 0x800613C0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x800613C4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800613C8: addiu       $a1, $a1, 0x4910
    ctx->r5 = ADD32(ctx->r5, 0X4910);
    // 0x800613CC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x800613D0: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x800613D4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x800613D8: sh          $s1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r17;
    // 0x800613DC: sh          $s0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r16;
    // 0x800613E0: jal         0x8002FDC0
    // 0x800613E4: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    func_8002FDC0_B1C0(rdram, ctx);
        goto after_2;
    // 0x800613E4: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    after_2:
    // 0x800613E8: jal         0x80036954
    // 0x800613EC: nop

    func_80036954_11D54(rdram, ctx);
        goto after_3;
    // 0x800613EC: nop

    after_3:
    // 0x800613F0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x800613F4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800613F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800613FC: jr          $ra
    // 0x80061400: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80061400: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80041910_1CD10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80041910: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x80041914: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x80041918: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x8004191C: sw          $s2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r18;
    // 0x80041920: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80041924: sw          $ra, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r31;
    // 0x80041928: sw          $s4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r20;
    // 0x8004192C: sw          $s3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r19;
    // 0x80041930: sw          $s1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r17;
    // 0x80041934: sw          $s0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r16;
    // 0x80041938: lh          $v0, 0x8($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X8);
    // 0x8004193C: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80041940: addu        $t9, $a1, $zero
    ctx->r25 = ADD32(ctx->r5, 0);
    // 0x80041944: lh          $t5, 0x0($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X0);
    // 0x80041948: lh          $t6, 0x2($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X2);
    // 0x8004194C: lh          $t4, 0x4($a0)
    ctx->r12 = MEM_H(ctx->r4, 0X4);
    // 0x80041950: lui         $a2, 0x8022
    ctx->r6 = S32(0X8022 << 16);
    // 0x80041954: lh          $a2, -0x26AC($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X26AC);
    // 0x80041958: lh          $v1, 0xA($a0)
    ctx->r3 = MEM_H(ctx->r4, 0XA);
    // 0x8004195C: lh          $t8, 0x6($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X6);
    // 0x80041960: andi        $a1, $a1, 0xFFFF
    ctx->r5 = ctx->r5 & 0XFFFF;
    // 0x80041964: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80041968: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x8004196C: lh          $v0, -0x26AE($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X26AE);
    // 0x80041970: subu        $t7, $a3, $a2
    ctx->r15 = SUB32(ctx->r7, ctx->r6);
    // 0x80041974: addu        $t3, $v1, $zero
    ctx->r11 = ADD32(ctx->r3, 0);
    // 0x80041978: subu        $s0, $v1, $v0
    ctx->r16 = SUB32(ctx->r3, ctx->r2);
    // 0x8004197C: sltiu       $v0, $a1, 0x56
    ctx->r2 = ctx->r5 < 0X56 ? 1 : 0;
    // 0x80041980: beq         $v0, $zero, L_80043DF0
    if (ctx->r2 == 0) {
        // 0x80041984: addu        $t2, $a3, $zero
        ctx->r10 = ADD32(ctx->r7, 0);
            goto L_80043DF0;
    }
    // 0x80041984: addu        $t2, $a3, $zero
    ctx->r10 = ADD32(ctx->r7, 0);
    // 0x80041988: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x8004198C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80041990: addu        $at, $at, $v0
    gpr jr_addend_80041998 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80041994: lw          $v0, 0x1FD0($at)
    ctx->r2 = ADD32(ctx->r1, 0X1FD0);
    // 0x80041998: jr          $v0
    // 0x8004199C: nop

    switch (jr_addend_80041998 >> 2) {
        case 0: goto L_800419A0; break;
        case 1: goto L_800419BC; break;
        case 2: goto L_80041A44; break;
        case 3: goto L_80041A90; break;
        case 4: goto L_80041B48; break;
        case 5: goto L_80041B48; break;
        case 6: goto L_80041B98; break;
        case 7: goto L_80041B98; break;
        case 8: goto L_80042024; break;
        case 9: goto L_80042184; break;
        case 10: goto L_800422E4; break;
        case 11: goto L_80042444; break;
        case 12: goto L_800425A4; break;
        case 13: goto L_800427C0; break;
        case 14: goto L_800429DC; break;
        case 15: goto L_80041B0C; break;
        case 16: goto L_80042DE4; break;
        case 17: goto L_80042E48; break;
        case 18: goto L_80042EAC; break;
        case 19: goto L_80042F10; break;
        case 20: goto L_80043DF0; break;
        case 21: goto L_80043DF0; break;
        case 22: goto L_80043DF0; break;
        case 23: goto L_80043DF0; break;
        case 24: goto L_80042FCC; break;
        case 25: goto L_800432E4; break;
        case 26: goto L_800435FC; break;
        case 27: goto L_80043914; break;
        case 28: goto L_80041C1C; break;
        case 29: goto L_80041C1C; break;
        case 30: goto L_80041C1C; break;
        case 31: goto L_80041C1C; break;
        case 32: goto L_800419A0; break;
        case 33: goto L_80041C84; break;
        case 34: goto L_80041C84; break;
        case 35: goto L_80041FC4; break;
        case 36: goto L_80042FCC; break;
        case 37: goto L_80043160; break;
        case 38: goto L_80043DF0; break;
        case 39: goto L_80043DF0; break;
        case 40: goto L_80043DF0; break;
        case 41: goto L_80043DF0; break;
        case 42: goto L_80043DF0; break;
        case 43: goto L_80043DF0; break;
        case 44: goto L_80043DF0; break;
        case 45: goto L_80043DF0; break;
        case 46: goto L_80043DF0; break;
        case 47: goto L_80043DF0; break;
        case 48: goto L_800419A0; break;
        case 49: goto L_80041D4C; break;
        case 50: goto L_80041D4C; break;
        case 51: goto L_80041FC4; break;
        case 52: goto L_800432E4; break;
        case 53: goto L_80043478; break;
        case 54: goto L_80043DF0; break;
        case 55: goto L_80043DF0; break;
        case 56: goto L_80043DF0; break;
        case 57: goto L_80043DF0; break;
        case 58: goto L_80043DF0; break;
        case 59: goto L_80043DF0; break;
        case 60: goto L_80043DF0; break;
        case 61: goto L_80043DF0; break;
        case 62: goto L_80043DF0; break;
        case 63: goto L_80043DF0; break;
        case 64: goto L_800419A0; break;
        case 65: goto L_80041E10; break;
        case 66: goto L_80041E10; break;
        case 67: goto L_80041FC4; break;
        case 68: goto L_800435FC; break;
        case 69: goto L_80043790; break;
        case 70: goto L_80043DF0; break;
        case 71: goto L_80043DF0; break;
        case 72: goto L_80043DF0; break;
        case 73: goto L_80043DF0; break;
        case 74: goto L_80043DF0; break;
        case 75: goto L_80043DF0; break;
        case 76: goto L_80043DF0; break;
        case 77: goto L_80043DF0; break;
        case 78: goto L_80043DF0; break;
        case 79: goto L_80043DF0; break;
        case 80: goto L_800419A0; break;
        case 81: goto L_80041EEC; break;
        case 82: goto L_80041EEC; break;
        case 83: goto L_80041FC4; break;
        case 84: goto L_80043914; break;
        case 85: goto L_80043AA8; break;
        default: switch_error(__func__, 0x80041998, 0x800D1FD0);
    }
    // 0x8004199C: nop

L_800419A0:
    // 0x800419A0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x800419A4: lh          $a0, -0x7156($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7156);
    // 0x800419A8: slt         $v1, $t7, $a0
    ctx->r3 = SIGNED(ctx->r15) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800419AC: beq         $v1, $zero, L_80043DF4
    if (ctx->r3 == 0) {
        // 0x800419B0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80043DF4;
    }
    // 0x800419B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800419B4: j           L_80043DF4
    // 0x800419B8: slt         $v0, $a0, $s0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
        goto L_80043DF4;
    // 0x800419B8: slt         $v0, $a0, $s0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
L_800419BC:
    // 0x800419BC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x800419C0: addiu       $a0, $a0, -0x7156
    ctx->r4 = ADD32(ctx->r4, -0X7156);
    // 0x800419C4: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x800419C8: slt         $v0, $t7, $v1
    ctx->r2 = SIGNED(ctx->r15) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800419CC: beq         $v0, $zero, L_80043DF0
    if (ctx->r2 == 0) {
        // 0x800419D0: slt         $v0, $v1, $s0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_80043DF0;
    }
    // 0x800419D0: slt         $v0, $v1, $s0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x800419D4: beq         $v0, $zero, L_80043DF4
    if (ctx->r2 == 0) {
        // 0x800419D8: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_80043DF4;
    }
    // 0x800419D8: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x800419DC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x800419E0: lb          $v0, 0x296($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X296);
    // 0x800419E4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800419E8: sh          $t7, -0x3FAA($at)
    MEM_H(-0X3FAA, ctx->r1) = ctx->r15;
    // 0x800419EC: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800419F0: sh          $s0, -0x72CE($at)
    MEM_H(-0X72CE, ctx->r1) = ctx->r16;
    // 0x800419F4: bne         $v0, $zero, L_80041A24
    if (ctx->r2 != 0) {
        // 0x800419F8: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_80041A24;
    }
    // 0x800419F8: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x800419FC: subu        $v0, $v1, $t7
    ctx->r2 = SUB32(ctx->r3, ctx->r15);
    // 0x80041A00: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x80041A04: beq         $v0, $zero, L_80041A24
    if (ctx->r2 == 0) {
        // 0x80041A08: nop
    
            goto L_80041A24;
    }
    // 0x80041A08: nop

    // 0x80041A0C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80041A10: lb          $v0, -0x7818($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X7818);
    // 0x80041A14: bne         $v0, $zero, L_80041A24
    if (ctx->r2 != 0) {
        // 0x80041A18: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80041A24;
    }
    // 0x80041A18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80041A1C: j           L_80041C70
    // 0x80041A20: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
        goto L_80041C70;
    // 0x80041A20: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
L_80041A24:
    // 0x80041A24: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80041A28: addiu       $a0, $a0, -0x7158
    ctx->r4 = ADD32(ctx->r4, -0X7158);
    // 0x80041A2C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80041A30: addiu       $a1, $a1, 0x47DC
    ctx->r5 = ADD32(ctx->r5, 0X47DC);
    // 0x80041A34: jal         0x80044ECC
    // 0x80041A38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80044ECC_202CC(rdram, ctx);
        goto after_0;
    // 0x80041A38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80041A3C: j           L_80041C58
    // 0x80041A40: nop

        goto L_80041C58;
    // 0x80041A40: nop

L_80041A44:
    // 0x80041A44: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80041A48: addiu       $a0, $a0, -0x7156
    ctx->r4 = ADD32(ctx->r4, -0X7156);
    // 0x80041A4C: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x80041A50: slt         $v0, $t7, $v1
    ctx->r2 = SIGNED(ctx->r15) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80041A54: beq         $v0, $zero, L_80043DF0
    if (ctx->r2 == 0) {
        // 0x80041A58: slt         $v0, $v1, $s0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_80043DF0;
    }
    // 0x80041A58: slt         $v0, $v1, $s0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80041A5C: beq         $v0, $zero, L_80043DF0
    if (ctx->r2 == 0) {
        // 0x80041A60: addiu       $a0, $a0, -0x2
        ctx->r4 = ADD32(ctx->r4, -0X2);
            goto L_80043DF0;
    }
    // 0x80041A60: addiu       $a0, $a0, -0x2
    ctx->r4 = ADD32(ctx->r4, -0X2);
    // 0x80041A64: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80041A68: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80041A6C: addiu       $a1, $a1, 0x47DC
    ctx->r5 = ADD32(ctx->r5, 0X47DC);
    // 0x80041A70: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80041A74: sh          $t7, -0x3FAA($at)
    MEM_H(-0X3FAA, ctx->r1) = ctx->r15;
    // 0x80041A78: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80041A7C: sh          $s0, -0x72CE($at)
    MEM_H(-0X72CE, ctx->r1) = ctx->r16;
    // 0x80041A80: jal         0x80044ECC
    // 0x80041A84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80044ECC_202CC(rdram, ctx);
        goto after_1;
    // 0x80041A84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80041A88: j           L_80041C58
    // 0x80041A8C: nop

        goto L_80041C58;
    // 0x80041A8C: nop

L_80041A90:
    // 0x80041A90: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80041A94: addiu       $a0, $a0, -0x7156
    ctx->r4 = ADD32(ctx->r4, -0X7156);
    // 0x80041A98: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x80041A9C: slt         $v0, $t7, $v1
    ctx->r2 = SIGNED(ctx->r15) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80041AA0: beq         $v0, $zero, L_80043DF0
    if (ctx->r2 == 0) {
        // 0x80041AA4: slt         $v0, $v1, $s0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_80043DF0;
    }
    // 0x80041AA4: slt         $v0, $v1, $s0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80041AA8: beq         $v0, $zero, L_80043DF4
    if (ctx->r2 == 0) {
        // 0x80041AAC: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_80043DF4;
    }
    // 0x80041AAC: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80041AB0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80041AB4: lh          $v0, -0x35B8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X35B8);
    // 0x80041AB8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80041ABC: sh          $t7, -0x3FAA($at)
    MEM_H(-0X3FAA, ctx->r1) = ctx->r15;
    // 0x80041AC0: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80041AC4: sh          $s0, -0x72CE($at)
    MEM_H(-0X72CE, ctx->r1) = ctx->r16;
    // 0x80041AC8: bgez        $v0, L_80041AE0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80041ACC: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_80041AE0;
    }
    // 0x80041ACC: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80041AD0: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80041AD4: lb          $v0, 0x296($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X296);
    // 0x80041AD8: bnel        $v0, $zero, L_80041AEC
    if (ctx->r2 != 0) {
        // 0x80041ADC: addiu       $a0, $a0, -0x2
        ctx->r4 = ADD32(ctx->r4, -0X2);
            goto L_80041AEC;
    }
    goto skip_0;
    // 0x80041ADC: addiu       $a0, $a0, -0x2
    ctx->r4 = ADD32(ctx->r4, -0X2);
    skip_0:
L_80041AE0:
    // 0x80041AE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80041AE4: j           L_80041C70
    // 0x80041AE8: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
        goto L_80041C70;
    // 0x80041AE8: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
L_80041AEC:
    // 0x80041AEC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80041AF0: addiu       $a1, $a1, 0x47DC
    ctx->r5 = ADD32(ctx->r5, 0X47DC);
    // 0x80041AF4: jal         0x80044ECC
    // 0x80041AF8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80044ECC_202CC(rdram, ctx);
        goto after_2;
    // 0x80041AF8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x80041AFC: beq         $v0, $zero, L_80043DF4
    if (ctx->r2 == 0) {
        // 0x80041B00: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_80043DF4;
    }
    // 0x80041B00: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80041B04: j           L_80043DD8
    // 0x80041B08: nop

        goto L_80043DD8;
    // 0x80041B08: nop

L_80041B0C:
    // 0x80041B0C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80041B10: addiu       $a0, $a0, -0x7156
    ctx->r4 = ADD32(ctx->r4, -0X7156);
    // 0x80041B14: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x80041B18: slt         $v0, $t7, $v1
    ctx->r2 = SIGNED(ctx->r15) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80041B1C: beq         $v0, $zero, L_80043DF0
    if (ctx->r2 == 0) {
        // 0x80041B20: slt         $v0, $v1, $s0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_80043DF0;
    }
    // 0x80041B20: slt         $v0, $v1, $s0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80041B24: beq         $v0, $zero, L_80043DF4
    if (ctx->r2 == 0) {
        // 0x80041B28: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_80043DF4;
    }
    // 0x80041B28: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80041B2C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80041B30: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80041B34: sh          $t7, -0x3FAA($at)
    MEM_H(-0X3FAA, ctx->r1) = ctx->r15;
    // 0x80041B38: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80041B3C: sh          $s0, -0x72CE($at)
    MEM_H(-0X72CE, ctx->r1) = ctx->r16;
    // 0x80041B40: j           L_80043DD8
    // 0x80041B44: sh          $s0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r16;
        goto L_80043DD8;
    // 0x80041B44: sh          $s0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r16;
L_80041B48:
    // 0x80041B48: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80041B4C: lh          $v1, -0x7156($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7156);
    // 0x80041B50: slt         $v0, $t7, $v1
    ctx->r2 = SIGNED(ctx->r15) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80041B54: beq         $v0, $zero, L_80043DF0
    if (ctx->r2 == 0) {
        // 0x80041B58: slt         $v0, $v1, $s0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_80043DF0;
    }
    // 0x80041B58: slt         $v0, $v1, $s0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80041B5C: beq         $v0, $zero, L_80043DF4
    if (ctx->r2 == 0) {
        // 0x80041B60: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_80043DF4;
    }
    // 0x80041B60: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80041B64: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80041B68: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80041B6C: sh          $t7, -0x3FAA($at)
    MEM_H(-0X3FAA, ctx->r1) = ctx->r15;
    // 0x80041B70: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80041B74: sh          $s0, -0x72CE($at)
    MEM_H(-0X72CE, ctx->r1) = ctx->r16;
L_80041B78:
    // 0x80041B78: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80041B7C: addiu       $a0, $a0, -0x7158
    ctx->r4 = ADD32(ctx->r4, -0X7158);
    // 0x80041B80: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80041B84: addiu       $a1, $a1, 0x47DC
    ctx->r5 = ADD32(ctx->r5, 0X47DC);
    // 0x80041B88: jal         0x800452D8
    // 0x80041B8C: addiu       $a2, $t9, -0x4
    ctx->r6 = ADD32(ctx->r25, -0X4);
    func_800452D8_206D8(rdram, ctx);
        goto after_3;
    // 0x80041B8C: addiu       $a2, $t9, -0x4
    ctx->r6 = ADD32(ctx->r25, -0X4);
    after_3:
    // 0x80041B90: j           L_80041BE0
    // 0x80041B94: nop

        goto L_80041BE0;
    // 0x80041B94: nop

L_80041B98:
    // 0x80041B98: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80041B9C: lh          $v1, -0x7156($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7156);
    // 0x80041BA0: slt         $v0, $t7, $v1
    ctx->r2 = SIGNED(ctx->r15) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80041BA4: beq         $v0, $zero, L_80043DF0
    if (ctx->r2 == 0) {
        // 0x80041BA8: slt         $v0, $v1, $s0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_80043DF0;
    }
    // 0x80041BA8: slt         $v0, $v1, $s0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80041BAC: beq         $v0, $zero, L_80043DF4
    if (ctx->r2 == 0) {
        // 0x80041BB0: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_80043DF4;
    }
    // 0x80041BB0: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80041BB4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80041BB8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80041BBC: sh          $t7, -0x3FAA($at)
    MEM_H(-0X3FAA, ctx->r1) = ctx->r15;
    // 0x80041BC0: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80041BC4: sh          $s0, -0x72CE($at)
    MEM_H(-0X72CE, ctx->r1) = ctx->r16;
L_80041BC8:
    // 0x80041BC8: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80041BCC: addiu       $a0, $a0, -0x7158
    ctx->r4 = ADD32(ctx->r4, -0X7158);
    // 0x80041BD0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80041BD4: addiu       $a1, $a1, 0x47DC
    ctx->r5 = ADD32(ctx->r5, 0X47DC);
    // 0x80041BD8: jal         0x800455B4
    // 0x80041BDC: addiu       $a2, $t9, -0x6
    ctx->r6 = ADD32(ctx->r25, -0X6);
    func_800455B4_209B4(rdram, ctx);
        goto after_4;
    // 0x80041BDC: addiu       $a2, $t9, -0x6
    ctx->r6 = ADD32(ctx->r25, -0X6);
    after_4:
L_80041BE0:
    // 0x80041BE0: beq         $v0, $zero, L_80041C10
    if (ctx->r2 == 0) {
        // 0x80041BE4: nop
    
            goto L_80041C10;
    }
    // 0x80041BE4: nop

    // 0x80041BE8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80041BEC: lh          $v0, -0x35B8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X35B8);
    // 0x80041BF0: bltz        $v0, L_80041C08
    if (SIGNED(ctx->r2) < 0) {
        // 0x80041BF4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80041C08;
    }
    // 0x80041BF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80041BF8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80041BFC: sb          $zero, 0x296($at)
    MEM_B(0X296, ctx->r1) = 0;
    // 0x80041C00: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80041C04: sb          $v0, 0x5480($at)
    MEM_B(0X5480, ctx->r1) = ctx->r2;
L_80041C08:
    // 0x80041C08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80041C0C: sh          $zero, 0x4980($at)
    MEM_H(0X4980, ctx->r1) = 0;
L_80041C10:
    // 0x80041C10: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80041C14: j           L_80043DE8
    // 0x80041C18: sh          $zero, 0x5730($at)
    MEM_H(0X5730, ctx->r1) = 0;
        goto L_80043DE8;
    // 0x80041C18: sh          $zero, 0x5730($at)
    MEM_H(0X5730, ctx->r1) = 0;
L_80041C1C:
    // 0x80041C1C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80041C20: addiu       $a0, $a0, -0x7156
    ctx->r4 = ADD32(ctx->r4, -0X7156);
    // 0x80041C24: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x80041C28: slt         $v0, $t7, $v1
    ctx->r2 = SIGNED(ctx->r15) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80041C2C: beq         $v0, $zero, L_80043DF0
    if (ctx->r2 == 0) {
        // 0x80041C30: slt         $v0, $v1, $s0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_80043DF0;
    }
    // 0x80041C30: slt         $v0, $v1, $s0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80041C34: beq         $v0, $zero, L_80043DF0
    if (ctx->r2 == 0) {
        // 0x80041C38: addiu       $a0, $a0, -0x2
        ctx->r4 = ADD32(ctx->r4, -0X2);
            goto L_80043DF0;
    }
    // 0x80041C38: addiu       $a0, $a0, -0x2
    ctx->r4 = ADD32(ctx->r4, -0X2);
    // 0x80041C3C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80041C40: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80041C44: sh          $t7, -0x3FAA($at)
    MEM_H(-0X3FAA, ctx->r1) = ctx->r15;
    // 0x80041C48: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80041C4C: sh          $s0, -0x72CE($at)
    MEM_H(-0X72CE, ctx->r1) = ctx->r16;
    // 0x80041C50: jal         0x80045B5C
    // 0x80041C54: addiu       $a1, $t9, -0x1C
    ctx->r5 = ADD32(ctx->r25, -0X1C);
    func_80045B5C_20F5C(rdram, ctx);
        goto after_5;
    // 0x80041C54: addiu       $a1, $t9, -0x1C
    ctx->r5 = ADD32(ctx->r25, -0X1C);
    after_5:
L_80041C58:
    // 0x80041C58: beq         $v0, $zero, L_80043DF4
    if (ctx->r2 == 0) {
        // 0x80041C5C: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_80043DF4;
    }
    // 0x80041C5C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80041C60: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80041C64: lh          $v0, -0x35B8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X35B8);
    // 0x80041C68: bltz        $v0, L_80043DD8
    if (SIGNED(ctx->r2) < 0) {
        // 0x80041C6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80043DD8;
    }
    // 0x80041C6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80041C70:
    // 0x80041C70: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80041C74: sb          $zero, 0x296($at)
    MEM_B(0X296, ctx->r1) = 0;
    // 0x80041C78: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80041C7C: j           L_80043DD8
    // 0x80041C80: sb          $v0, 0x5480($at)
    MEM_B(0X5480, ctx->r1) = ctx->r2;
        goto L_80043DD8;
    // 0x80041C80: sb          $v0, 0x5480($at)
    MEM_B(0X5480, ctx->r1) = ctx->r2;
L_80041C84:
    // 0x80041C84: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80041C88: lh          $v1, -0x7156($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7156);
    // 0x80041C8C: slt         $v0, $t7, $v1
    ctx->r2 = SIGNED(ctx->r15) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80041C90: beq         $v0, $zero, L_80043DF0
    if (ctx->r2 == 0) {
        // 0x80041C94: slt         $v0, $v1, $s0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_80043DF0;
    }
    // 0x80041C94: slt         $v0, $v1, $s0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80041C98: beq         $v0, $zero, L_80043DF4
    if (ctx->r2 == 0) {
        // 0x80041C9C: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_80043DF4;
    }
    // 0x80041C9C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80041CA0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80041CA4: lh          $v0, -0xBE0($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XBE0);
    // 0x80041CA8: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80041CAC: lh          $a1, -0x26B4($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X26B4);
    // 0x80041CB0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80041CB4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80041CB8: sh          $t7, -0x3FAA($at)
    MEM_H(-0X3FAA, ctx->r1) = ctx->r15;
    // 0x80041CBC: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80041CC0: sh          $s0, -0x72CE($at)
    MEM_H(-0X72CE, ctx->r1) = ctx->r16;
    // 0x80041CC4: bltz        $v0, L_80041CD4
    if (SIGNED(ctx->r2) < 0) {
        // 0x80041CC8: subu        $v1, $t6, $t5
        ctx->r3 = SUB32(ctx->r14, ctx->r13);
            goto L_80041CD4;
    }
    // 0x80041CC8: subu        $v1, $t6, $t5
    ctx->r3 = SUB32(ctx->r14, ctx->r13);
    // 0x80041CCC: j           L_80041CD8
    // 0x80041CD0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
        goto L_80041CD8;
    // 0x80041CD0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
L_80041CD4:
    // 0x80041CD4: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
L_80041CD8:
    // 0x80041CD8: nop

    // 0x80041CDC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80041CE0: mflo        $a1
    ctx->r5 = lo;
    // 0x80041CE4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80041CE8: lh          $v0, -0xBDC($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XBDC);
    // 0x80041CEC: lui         $a2, 0x8022
    ctx->r6 = S32(0X8022 << 16);
    // 0x80041CF0: lh          $a2, -0x26B2($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X26B2);
    // 0x80041CF4: bgez        $v0, L_80041D00
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80041CF8: subu        $v1, $t8, $t4
        ctx->r3 = SUB32(ctx->r24, ctx->r12);
            goto L_80041D00;
    }
    // 0x80041CF8: subu        $v1, $t8, $t4
    ctx->r3 = SUB32(ctx->r24, ctx->r12);
    // 0x80041CFC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_80041D00:
    // 0x80041D00: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x80041D04: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80041D08: mflo        $a0
    ctx->r4 = lo;
    // 0x80041D0C: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80041D10: nop

    // 0x80041D14: beq         $v0, $zero, L_80041D34
    if (ctx->r2 == 0) {
        // 0x80041D18: slt         $v0, $a1, $a0
        ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_80041D34;
    }
    // 0x80041D18: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80041D1C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80041D20: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x80041D24: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80041D28: bnel        $v0, $zero, L_80041B78
    if (ctx->r2 != 0) {
        // 0x80041D2C: addiu       $t9, $zero, 0x4
        ctx->r25 = ADD32(0, 0X4);
            goto L_80041B78;
    }
    goto skip_1;
    // 0x80041D2C: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    skip_1:
    // 0x80041D30: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
L_80041D34:
    // 0x80041D34: beq         $v0, $zero, L_80043C8C
    if (ctx->r2 == 0) {
        // 0x80041D38: nop
    
            goto L_80043C8C;
    }
    // 0x80041D38: nop

    // 0x80041D3C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80041D40: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x80041D44: j           L_80041EDC
    // 0x80041D48: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
        goto L_80041EDC;
    // 0x80041D48: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
L_80041D4C:
    // 0x80041D4C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80041D50: lh          $v1, -0x7156($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7156);
    // 0x80041D54: slt         $v0, $t7, $v1
    ctx->r2 = SIGNED(ctx->r15) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80041D58: beq         $v0, $zero, L_80043DF0
    if (ctx->r2 == 0) {
        // 0x80041D5C: slt         $v0, $v1, $s0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_80043DF0;
    }
    // 0x80041D5C: slt         $v0, $v1, $s0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80041D60: beq         $v0, $zero, L_80043DF4
    if (ctx->r2 == 0) {
        // 0x80041D64: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_80043DF4;
    }
    // 0x80041D64: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80041D68: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80041D6C: lh          $v0, -0xBE0($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XBE0);
    // 0x80041D70: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80041D74: lh          $a1, -0x26B6($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X26B6);
    // 0x80041D78: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80041D7C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80041D80: sh          $t7, -0x3FAA($at)
    MEM_H(-0X3FAA, ctx->r1) = ctx->r15;
    // 0x80041D84: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80041D88: sh          $s0, -0x72CE($at)
    MEM_H(-0X72CE, ctx->r1) = ctx->r16;
    // 0x80041D8C: bgez        $v0, L_80041D98
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80041D90: subu        $v1, $t6, $t5
        ctx->r3 = SUB32(ctx->r14, ctx->r13);
            goto L_80041D98;
    }
    // 0x80041D90: subu        $v1, $t6, $t5
    ctx->r3 = SUB32(ctx->r14, ctx->r13);
    // 0x80041D94: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_80041D98:
    // 0x80041D98: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80041D9C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80041DA0: mflo        $a1
    ctx->r5 = lo;
    // 0x80041DA4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80041DA8: lh          $v0, -0xBDC($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XBDC);
    // 0x80041DAC: lui         $a2, 0x8022
    ctx->r6 = S32(0X8022 << 16);
    // 0x80041DB0: lh          $a2, -0x26B2($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X26B2);
    // 0x80041DB4: bgez        $v0, L_80041DC0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80041DB8: subu        $v1, $t8, $t4
        ctx->r3 = SUB32(ctx->r24, ctx->r12);
            goto L_80041DC0;
    }
    // 0x80041DB8: subu        $v1, $t8, $t4
    ctx->r3 = SUB32(ctx->r24, ctx->r12);
    // 0x80041DBC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_80041DC0:
    // 0x80041DC0: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x80041DC4: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80041DC8: mflo        $a0
    ctx->r4 = lo;
    // 0x80041DCC: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80041DD0: nop

    // 0x80041DD4: beq         $v0, $zero, L_80041DF8
    if (ctx->r2 == 0) {
        // 0x80041DD8: slt         $v0, $a1, $a0
        ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_80041DF8;
    }
    // 0x80041DD8: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80041DDC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80041DE0: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x80041DE4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80041DE8: beq         $v0, $zero, L_80041DF8
    if (ctx->r2 == 0) {
        // 0x80041DEC: slt         $v0, $a1, $a0
        ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_80041DF8;
    }
    // 0x80041DEC: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80041DF0: j           L_80041B78
    // 0x80041DF4: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
        goto L_80041B78;
    // 0x80041DF4: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
L_80041DF8:
    // 0x80041DF8: beq         $v0, $zero, L_80043C8C
    if (ctx->r2 == 0) {
        // 0x80041DFC: nop
    
            goto L_80043C8C;
    }
    // 0x80041DFC: nop

    // 0x80041E00: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80041E04: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x80041E08: j           L_80041FB4
    // 0x80041E0C: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
        goto L_80041FB4;
    // 0x80041E0C: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
L_80041E10:
    // 0x80041E10: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80041E14: lh          $v1, -0x7156($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7156);
    // 0x80041E18: slt         $v0, $t7, $v1
    ctx->r2 = SIGNED(ctx->r15) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80041E1C: beq         $v0, $zero, L_80043DF0
    if (ctx->r2 == 0) {
        // 0x80041E20: slt         $v0, $v1, $s0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_80043DF0;
    }
    // 0x80041E20: slt         $v0, $v1, $s0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80041E24: beq         $v0, $zero, L_80043DF4
    if (ctx->r2 == 0) {
        // 0x80041E28: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_80043DF4;
    }
    // 0x80041E28: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80041E2C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80041E30: lh          $v0, -0xBE0($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XBE0);
    // 0x80041E34: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80041E38: lh          $a1, -0x26B4($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X26B4);
    // 0x80041E3C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80041E40: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80041E44: sh          $t7, -0x3FAA($at)
    MEM_H(-0X3FAA, ctx->r1) = ctx->r15;
    // 0x80041E48: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80041E4C: sh          $s0, -0x72CE($at)
    MEM_H(-0X72CE, ctx->r1) = ctx->r16;
    // 0x80041E50: bltz        $v0, L_80041E60
    if (SIGNED(ctx->r2) < 0) {
        // 0x80041E54: subu        $v1, $t6, $t5
        ctx->r3 = SUB32(ctx->r14, ctx->r13);
            goto L_80041E60;
    }
    // 0x80041E54: subu        $v1, $t6, $t5
    ctx->r3 = SUB32(ctx->r14, ctx->r13);
    // 0x80041E58: j           L_80041E64
    // 0x80041E5C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
        goto L_80041E64;
    // 0x80041E5C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
L_80041E60:
    // 0x80041E60: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
L_80041E64:
    // 0x80041E64: nop

    // 0x80041E68: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80041E6C: mflo        $a1
    ctx->r5 = lo;
    // 0x80041E70: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80041E74: lh          $v0, -0xBDC($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XBDC);
    // 0x80041E78: lui         $a2, 0x8022
    ctx->r6 = S32(0X8022 << 16);
    // 0x80041E7C: lh          $a2, -0x26B0($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X26B0);
    // 0x80041E80: bltz        $v0, L_80041E90
    if (SIGNED(ctx->r2) < 0) {
        // 0x80041E84: subu        $v1, $t8, $t4
        ctx->r3 = SUB32(ctx->r24, ctx->r12);
            goto L_80041E90;
    }
    // 0x80041E84: subu        $v1, $t8, $t4
    ctx->r3 = SUB32(ctx->r24, ctx->r12);
    // 0x80041E88: j           L_80041E94
    // 0x80041E8C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
        goto L_80041E94;
    // 0x80041E8C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
L_80041E90:
    // 0x80041E90: subu        $v0, $a2, $v0
    ctx->r2 = SUB32(ctx->r6, ctx->r2);
L_80041E94:
    // 0x80041E94: nop

    // 0x80041E98: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80041E9C: mflo        $a0
    ctx->r4 = lo;
    // 0x80041EA0: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80041EA4: nop

    // 0x80041EA8: beq         $v0, $zero, L_80041EC8
    if (ctx->r2 == 0) {
        // 0x80041EAC: slt         $v0, $a1, $a0
        ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_80041EC8;
    }
    // 0x80041EAC: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80041EB0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80041EB4: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x80041EB8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80041EBC: bnel        $v0, $zero, L_80041B78
    if (ctx->r2 != 0) {
        // 0x80041EC0: addiu       $t9, $zero, 0x5
        ctx->r25 = ADD32(0, 0X5);
            goto L_80041B78;
    }
    goto skip_2;
    // 0x80041EC0: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    skip_2:
    // 0x80041EC4: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
L_80041EC8:
    // 0x80041EC8: beq         $v0, $zero, L_80043C8C
    if (ctx->r2 == 0) {
        // 0x80041ECC: nop
    
            goto L_80043C8C;
    }
    // 0x80041ECC: nop

    // 0x80041ED0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80041ED4: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x80041ED8: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
L_80041EDC:
    // 0x80041EDC: beq         $v0, $zero, L_80043C8C
    if (ctx->r2 == 0) {
        // 0x80041EE0: nop
    
            goto L_80043C8C;
    }
    // 0x80041EE0: nop

    // 0x80041EE4: j           L_80041BC8
    // 0x80041EE8: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
        goto L_80041BC8;
    // 0x80041EE8: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
L_80041EEC:
    // 0x80041EEC: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80041EF0: lh          $v1, -0x7156($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7156);
    // 0x80041EF4: slt         $v0, $t7, $v1
    ctx->r2 = SIGNED(ctx->r15) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80041EF8: beq         $v0, $zero, L_80043DF0
    if (ctx->r2 == 0) {
        // 0x80041EFC: slt         $v0, $v1, $s0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_80043DF0;
    }
    // 0x80041EFC: slt         $v0, $v1, $s0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80041F00: beq         $v0, $zero, L_80043DF4
    if (ctx->r2 == 0) {
        // 0x80041F04: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_80043DF4;
    }
    // 0x80041F04: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80041F08: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80041F0C: lh          $v0, -0xBE0($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XBE0);
    // 0x80041F10: lui         $a1, 0x8022
    ctx->r5 = S32(0X8022 << 16);
    // 0x80041F14: lh          $a1, -0x26B4($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X26B4);
    // 0x80041F18: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80041F1C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80041F20: sh          $t7, -0x3FAA($at)
    MEM_H(-0X3FAA, ctx->r1) = ctx->r15;
    // 0x80041F24: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80041F28: sh          $s0, -0x72CE($at)
    MEM_H(-0X72CE, ctx->r1) = ctx->r16;
    // 0x80041F2C: bltz        $v0, L_80041F3C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80041F30: subu        $v1, $t6, $t5
        ctx->r3 = SUB32(ctx->r14, ctx->r13);
            goto L_80041F3C;
    }
    // 0x80041F30: subu        $v1, $t6, $t5
    ctx->r3 = SUB32(ctx->r14, ctx->r13);
    // 0x80041F34: j           L_80041F40
    // 0x80041F38: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
        goto L_80041F40;
    // 0x80041F38: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
L_80041F3C:
    // 0x80041F3C: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
L_80041F40:
    // 0x80041F40: nop

    // 0x80041F44: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80041F48: mflo        $a1
    ctx->r5 = lo;
    // 0x80041F4C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80041F50: lh          $v0, -0xBDC($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XBDC);
    // 0x80041F54: lui         $a2, 0x8022
    ctx->r6 = S32(0X8022 << 16);
    // 0x80041F58: lh          $a2, -0x26B2($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X26B2);
    // 0x80041F5C: bgez        $v0, L_80041F68
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80041F60: subu        $v1, $t8, $t4
        ctx->r3 = SUB32(ctx->r24, ctx->r12);
            goto L_80041F68;
    }
    // 0x80041F60: subu        $v1, $t8, $t4
    ctx->r3 = SUB32(ctx->r24, ctx->r12);
    // 0x80041F64: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_80041F68:
    // 0x80041F68: subu        $v0, $v0, $a2
    ctx->r2 = SUB32(ctx->r2, ctx->r6);
    // 0x80041F6C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80041F70: mflo        $a0
    ctx->r4 = lo;
    // 0x80041F74: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80041F78: nop

    // 0x80041F7C: beq         $v0, $zero, L_80041FA0
    if (ctx->r2 == 0) {
        // 0x80041F80: slt         $v0, $a1, $a0
        ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_80041FA0;
    }
    // 0x80041F80: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80041F84: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80041F88: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x80041F8C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80041F90: beq         $v0, $zero, L_80041FA0
    if (ctx->r2 == 0) {
        // 0x80041F94: slt         $v0, $a1, $a0
        ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_80041FA0;
    }
    // 0x80041F94: slt         $v0, $a1, $a0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80041F98: j           L_80041B78
    // 0x80041F9C: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
        goto L_80041B78;
    // 0x80041F9C: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
L_80041FA0:
    // 0x80041FA0: beq         $v0, $zero, L_80043C8C
    if (ctx->r2 == 0) {
        // 0x80041FA4: nop
    
            goto L_80043C8C;
    }
    // 0x80041FA4: nop

    // 0x80041FA8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80041FAC: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x80041FB0: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
L_80041FB4:
    // 0x80041FB4: beq         $v0, $zero, L_80043C8C
    if (ctx->r2 == 0) {
        // 0x80041FB8: nop
    
            goto L_80043C8C;
    }
    // 0x80041FB8: nop

    // 0x80041FBC: j           L_80041BC8
    // 0x80041FC0: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
        goto L_80041BC8;
    // 0x80041FC0: addiu       $t9, $zero, 0x7
    ctx->r25 = ADD32(0, 0X7);
L_80041FC4:
    // 0x80041FC4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80041FC8: addiu       $a0, $a0, -0x7156
    ctx->r4 = ADD32(ctx->r4, -0X7156);
    // 0x80041FCC: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x80041FD0: slt         $v0, $t7, $v1
    ctx->r2 = SIGNED(ctx->r15) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80041FD4: beq         $v0, $zero, L_80043DF0
    if (ctx->r2 == 0) {
        // 0x80041FD8: slt         $v0, $v1, $s0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_80043DF0;
    }
    // 0x80041FD8: slt         $v0, $v1, $s0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80041FDC: beq         $v0, $zero, L_80043DF4
    if (ctx->r2 == 0) {
        // 0x80041FE0: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_80043DF4;
    }
    // 0x80041FE0: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80041FE4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80041FE8: lh          $v0, -0x35B8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X35B8);
    // 0x80041FEC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80041FF0: sh          $t7, -0x3FAA($at)
    MEM_H(-0X3FAA, ctx->r1) = ctx->r15;
    // 0x80041FF4: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80041FF8: sh          $s0, -0x72CE($at)
    MEM_H(-0X72CE, ctx->r1) = ctx->r16;
    // 0x80041FFC: bltz        $v0, L_80043C8C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80042000: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_80043C8C;
    }
    // 0x80042000: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80042004: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80042008: sh          $t7, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r15;
    // 0x8004200C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80042010: sb          $zero, 0x296($at)
    MEM_B(0X296, ctx->r1) = 0;
    // 0x80042014: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80042018: sb          $v0, 0x5480($at)
    MEM_B(0X5480, ctx->r1) = ctx->r2;
    // 0x8004201C: j           L_80043DF4
    // 0x80042020: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
        goto L_80043DF4;
    // 0x80042020: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_80042024:
    // 0x80042024: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80042028: lb          $v0, 0x296($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X296);
    // 0x8004202C: bne         $v0, $zero, L_80042060
    if (ctx->r2 != 0) {
        // 0x80042030: nop
    
            goto L_80042060;
    }
    // 0x80042030: nop

    // 0x80042034: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80042038: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x8004203C: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80042040: beq         $v0, $zero, L_80042060
    if (ctx->r2 == 0) {
        // 0x80042044: nop
    
            goto L_80042060;
    }
    // 0x80042044: nop

    // 0x80042048: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8004204C: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x80042050: subu        $v0, $v0, $t7
    ctx->r2 = SUB32(ctx->r2, ctx->r15);
    // 0x80042054: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80042058: bne         $v0, $zero, L_80043C30
    if (ctx->r2 != 0) {
        // 0x8004205C: nop
    
            goto L_80043C30;
    }
    // 0x8004205C: nop

L_80042060:
    // 0x80042060: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80042064: lh          $v1, -0x26B0($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X26B0);
    // 0x80042068: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8004206C: lh          $a0, -0x26B2($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X26B2);
    // 0x80042070: subu        $v0, $t3, $a3
    ctx->r2 = SUB32(ctx->r11, ctx->r7);
    // 0x80042074: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80042078: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004207C: mflo        $v0
    ctx->r2 = lo;
    // 0x80042080: subu        $a2, $t8, $t4
    ctx->r6 = SUB32(ctx->r24, ctx->r12);
    // 0x80042084: nop

    // 0x80042088: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x8004208C: bne         $a2, $zero, L_80042098
    if (ctx->r6 != 0) {
        // 0x80042090: nop
    
            goto L_80042098;
    }
    // 0x80042090: nop

    // 0x80042094: break       7
    do_break(2147754132);
L_80042098:
    // 0x80042098: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004209C: bne         $a2, $at, L_800420B0
    if (ctx->r6 != ctx->r1) {
        // 0x800420A0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800420B0;
    }
    // 0x800420A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800420A4: bne         $v0, $at, L_800420B0
    if (ctx->r2 != ctx->r1) {
        // 0x800420A8: nop
    
            goto L_800420B0;
    }
    // 0x800420A8: nop

    // 0x800420AC: break       6
    do_break(2147754156);
L_800420B0:
    // 0x800420B0: mflo        $v0
    ctx->r2 = lo;
    // 0x800420B4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x800420B8: lh          $a0, -0x7154($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7154);
    // 0x800420BC: subu        $a3, $a3, $v0
    ctx->r7 = SUB32(ctx->r7, ctx->r2);
    // 0x800420C0: subu        $t1, $t3, $a3
    ctx->r9 = SUB32(ctx->r11, ctx->r7);
    // 0x800420C4: subu        $v0, $t8, $a0
    ctx->r2 = SUB32(ctx->r24, ctx->r4);
    // 0x800420C8: mult        $t1, $v0
    result = S64(S32(ctx->r9)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800420CC: mflo        $v0
    ctx->r2 = lo;
    // 0x800420D0: nop

    // 0x800420D4: nop

    // 0x800420D8: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x800420DC: bne         $a2, $zero, L_800420E8
    if (ctx->r6 != 0) {
        // 0x800420E0: nop
    
            goto L_800420E8;
    }
    // 0x800420E0: nop

    // 0x800420E4: break       7
    do_break(2147754212);
L_800420E8:
    // 0x800420E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800420EC: bne         $a2, $at, L_80042100
    if (ctx->r6 != ctx->r1) {
        // 0x800420F0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042100;
    }
    // 0x800420F0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800420F4: bne         $v0, $at, L_80042100
    if (ctx->r2 != ctx->r1) {
        // 0x800420F8: nop
    
            goto L_80042100;
    }
    // 0x800420F8: nop

    // 0x800420FC: break       6
    do_break(2147754236);
L_80042100:
    // 0x80042100: mflo        $v0
    ctx->r2 = lo;
    // 0x80042104: lui         $t4, 0x801C
    ctx->r12 = S32(0X801C << 16);
    // 0x80042108: addiu       $t4, $t4, -0x3FA8
    ctx->r12 = ADD32(ctx->r12, -0X3FA8);
    // 0x8004210C: lh          $v1, 0x0($t4)
    ctx->r3 = MEM_H(ctx->r12, 0X0);
    // 0x80042110: addu        $t0, $a3, $v0
    ctx->r8 = ADD32(ctx->r7, ctx->r2);
    // 0x80042114: slt         $v0, $t0, $t2
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80042118: beq         $v0, $zero, L_80042124
    if (ctx->r2 == 0) {
        // 0x8004211C: subu        $a1, $a0, $v1
        ctx->r5 = SUB32(ctx->r4, ctx->r3);
            goto L_80042124;
    }
    // 0x8004211C: subu        $a1, $a0, $v1
    ctx->r5 = SUB32(ctx->r4, ctx->r3);
    // 0x80042120: addu        $t0, $t2, $zero
    ctx->r8 = ADD32(ctx->r10, 0);
L_80042124:
    // 0x80042124: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80042128: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x8004212C: subu        $v0, $t3, $v0
    ctx->r2 = SUB32(ctx->r11, ctx->r2);
    // 0x80042130: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042134: mflo        $v0
    ctx->r2 = lo;
    // 0x80042138: nop

    // 0x8004213C: nop

    // 0x80042140: div         $zero, $v0, $t1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r9)));
    // 0x80042144: bne         $t1, $zero, L_80042150
    if (ctx->r9 != 0) {
        // 0x80042148: nop
    
            goto L_80042150;
    }
    // 0x80042148: nop

    // 0x8004214C: break       7
    do_break(2147754316);
L_80042150:
    // 0x80042150: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042154: bne         $t1, $at, L_80042168
    if (ctx->r9 != ctx->r1) {
        // 0x80042158: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042168;
    }
    // 0x80042158: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004215C: bne         $v0, $at, L_80042168
    if (ctx->r2 != ctx->r1) {
        // 0x80042160: nop
    
            goto L_80042168;
    }
    // 0x80042160: nop

    // 0x80042164: break       6
    do_break(2147754340);
L_80042168:
    // 0x80042168: mflo        $a0
    ctx->r4 = lo;
    // 0x8004216C: nop

    // 0x80042170: nop

    // 0x80042174: blez        $a0, L_800427B8
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80042178: addu        $v0, $v1, $a0
        ctx->r2 = ADD32(ctx->r3, ctx->r4);
            goto L_800427B8;
    }
    // 0x80042178: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    // 0x8004217C: j           L_800427B8
    // 0x80042180: sh          $v0, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r2;
        goto L_800427B8;
    // 0x80042180: sh          $v0, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r2;
L_80042184:
    // 0x80042184: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80042188: lb          $v0, 0x296($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X296);
    // 0x8004218C: bne         $v0, $zero, L_800421C0
    if (ctx->r2 != 0) {
        // 0x80042190: nop
    
            goto L_800421C0;
    }
    // 0x80042190: nop

    // 0x80042194: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80042198: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x8004219C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x800421A0: beq         $v0, $zero, L_800421C0
    if (ctx->r2 == 0) {
        // 0x800421A4: nop
    
            goto L_800421C0;
    }
    // 0x800421A4: nop

    // 0x800421A8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800421AC: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x800421B0: subu        $v0, $v0, $t7
    ctx->r2 = SUB32(ctx->r2, ctx->r15);
    // 0x800421B4: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x800421B8: bne         $v0, $zero, L_80043C30
    if (ctx->r2 != 0) {
        // 0x800421BC: nop
    
            goto L_80043C30;
    }
    // 0x800421BC: nop

L_800421C0:
    // 0x800421C0: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x800421C4: lh          $v1, -0x26B0($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X26B0);
    // 0x800421C8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x800421CC: lh          $a0, -0x26B2($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X26B2);
    // 0x800421D0: subu        $v0, $t3, $a3
    ctx->r2 = SUB32(ctx->r11, ctx->r7);
    // 0x800421D4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x800421D8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800421DC: mflo        $v0
    ctx->r2 = lo;
    // 0x800421E0: subu        $a2, $t8, $t4
    ctx->r6 = SUB32(ctx->r24, ctx->r12);
    // 0x800421E4: nop

    // 0x800421E8: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x800421EC: bne         $a2, $zero, L_800421F8
    if (ctx->r6 != 0) {
        // 0x800421F0: nop
    
            goto L_800421F8;
    }
    // 0x800421F0: nop

    // 0x800421F4: break       7
    do_break(2147754484);
L_800421F8:
    // 0x800421F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800421FC: bne         $a2, $at, L_80042210
    if (ctx->r6 != ctx->r1) {
        // 0x80042200: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042210;
    }
    // 0x80042200: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042204: bne         $v0, $at, L_80042210
    if (ctx->r2 != ctx->r1) {
        // 0x80042208: nop
    
            goto L_80042210;
    }
    // 0x80042208: nop

    // 0x8004220C: break       6
    do_break(2147754508);
L_80042210:
    // 0x80042210: mflo        $v0
    ctx->r2 = lo;
    // 0x80042214: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80042218: lh          $a0, -0x7154($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7154);
    // 0x8004221C: subu        $a3, $a3, $v0
    ctx->r7 = SUB32(ctx->r7, ctx->r2);
    // 0x80042220: subu        $t1, $t3, $a3
    ctx->r9 = SUB32(ctx->r11, ctx->r7);
    // 0x80042224: subu        $v0, $a0, $t4
    ctx->r2 = SUB32(ctx->r4, ctx->r12);
    // 0x80042228: mult        $t1, $v0
    result = S64(S32(ctx->r9)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004222C: mflo        $v0
    ctx->r2 = lo;
    // 0x80042230: nop

    // 0x80042234: nop

    // 0x80042238: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x8004223C: bne         $a2, $zero, L_80042248
    if (ctx->r6 != 0) {
        // 0x80042240: nop
    
            goto L_80042248;
    }
    // 0x80042240: nop

    // 0x80042244: break       7
    do_break(2147754564);
L_80042248:
    // 0x80042248: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004224C: bne         $a2, $at, L_80042260
    if (ctx->r6 != ctx->r1) {
        // 0x80042250: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042260;
    }
    // 0x80042250: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042254: bne         $v0, $at, L_80042260
    if (ctx->r2 != ctx->r1) {
        // 0x80042258: nop
    
            goto L_80042260;
    }
    // 0x80042258: nop

    // 0x8004225C: break       6
    do_break(2147754588);
L_80042260:
    // 0x80042260: mflo        $v0
    ctx->r2 = lo;
    // 0x80042264: lui         $t4, 0x801E
    ctx->r12 = S32(0X801E << 16);
    // 0x80042268: addiu       $t4, $t4, -0x72CC
    ctx->r12 = ADD32(ctx->r12, -0X72CC);
    // 0x8004226C: lh          $v1, 0x0($t4)
    ctx->r3 = MEM_H(ctx->r12, 0X0);
    // 0x80042270: addu        $t0, $a3, $v0
    ctx->r8 = ADD32(ctx->r7, ctx->r2);
    // 0x80042274: slt         $v0, $t0, $t2
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80042278: beq         $v0, $zero, L_80042284
    if (ctx->r2 == 0) {
        // 0x8004227C: subu        $a1, $v1, $a0
        ctx->r5 = SUB32(ctx->r3, ctx->r4);
            goto L_80042284;
    }
    // 0x8004227C: subu        $a1, $v1, $a0
    ctx->r5 = SUB32(ctx->r3, ctx->r4);
    // 0x80042280: addu        $t0, $t2, $zero
    ctx->r8 = ADD32(ctx->r10, 0);
L_80042284:
    // 0x80042284: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80042288: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x8004228C: subu        $v0, $t3, $v0
    ctx->r2 = SUB32(ctx->r11, ctx->r2);
    // 0x80042290: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042294: mflo        $v0
    ctx->r2 = lo;
    // 0x80042298: nop

    // 0x8004229C: nop

    // 0x800422A0: div         $zero, $v0, $t1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r9)));
    // 0x800422A4: bne         $t1, $zero, L_800422B0
    if (ctx->r9 != 0) {
        // 0x800422A8: nop
    
            goto L_800422B0;
    }
    // 0x800422A8: nop

    // 0x800422AC: break       7
    do_break(2147754668);
L_800422B0:
    // 0x800422B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800422B4: bne         $t1, $at, L_800422C8
    if (ctx->r9 != ctx->r1) {
        // 0x800422B8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800422C8;
    }
    // 0x800422B8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800422BC: bne         $v0, $at, L_800422C8
    if (ctx->r2 != ctx->r1) {
        // 0x800422C0: nop
    
            goto L_800422C8;
    }
    // 0x800422C0: nop

    // 0x800422C4: break       6
    do_break(2147754692);
L_800422C8:
    // 0x800422C8: mflo        $a0
    ctx->r4 = lo;
    // 0x800422CC: nop

    // 0x800422D0: nop

    // 0x800422D4: blez        $a0, L_800427B8
    if (SIGNED(ctx->r4) <= 0) {
        // 0x800422D8: subu        $v0, $v1, $a0
        ctx->r2 = SUB32(ctx->r3, ctx->r4);
            goto L_800427B8;
    }
    // 0x800422D8: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x800422DC: j           L_800427B8
    // 0x800422E0: sh          $v0, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r2;
        goto L_800427B8;
    // 0x800422E0: sh          $v0, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r2;
L_800422E4:
    // 0x800422E4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x800422E8: lb          $v0, 0x296($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X296);
    // 0x800422EC: bne         $v0, $zero, L_80042320
    if (ctx->r2 != 0) {
        // 0x800422F0: nop
    
            goto L_80042320;
    }
    // 0x800422F0: nop

    // 0x800422F4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800422F8: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x800422FC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80042300: beq         $v0, $zero, L_80042320
    if (ctx->r2 == 0) {
        // 0x80042304: nop
    
            goto L_80042320;
    }
    // 0x80042304: nop

    // 0x80042308: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8004230C: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x80042310: subu        $v0, $v0, $t7
    ctx->r2 = SUB32(ctx->r2, ctx->r15);
    // 0x80042314: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80042318: bne         $v0, $zero, L_80043C30
    if (ctx->r2 != 0) {
        // 0x8004231C: nop
    
            goto L_80043C30;
    }
    // 0x8004231C: nop

L_80042320:
    // 0x80042320: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80042324: lh          $v1, -0x26B4($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X26B4);
    // 0x80042328: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8004232C: lh          $a0, -0x26B6($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X26B6);
    // 0x80042330: subu        $v0, $t3, $a3
    ctx->r2 = SUB32(ctx->r11, ctx->r7);
    // 0x80042334: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80042338: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004233C: mflo        $v0
    ctx->r2 = lo;
    // 0x80042340: subu        $a2, $t6, $t5
    ctx->r6 = SUB32(ctx->r14, ctx->r13);
    // 0x80042344: nop

    // 0x80042348: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x8004234C: bne         $a2, $zero, L_80042358
    if (ctx->r6 != 0) {
        // 0x80042350: nop
    
            goto L_80042358;
    }
    // 0x80042350: nop

    // 0x80042354: break       7
    do_break(2147754836);
L_80042358:
    // 0x80042358: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004235C: bne         $a2, $at, L_80042370
    if (ctx->r6 != ctx->r1) {
        // 0x80042360: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042370;
    }
    // 0x80042360: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042364: bne         $v0, $at, L_80042370
    if (ctx->r2 != ctx->r1) {
        // 0x80042368: nop
    
            goto L_80042370;
    }
    // 0x80042368: nop

    // 0x8004236C: break       6
    do_break(2147754860);
L_80042370:
    // 0x80042370: mflo        $v0
    ctx->r2 = lo;
    // 0x80042374: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80042378: lh          $a0, -0x7158($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7158);
    // 0x8004237C: subu        $a3, $a3, $v0
    ctx->r7 = SUB32(ctx->r7, ctx->r2);
    // 0x80042380: subu        $t1, $t3, $a3
    ctx->r9 = SUB32(ctx->r11, ctx->r7);
    // 0x80042384: subu        $v0, $a0, $t5
    ctx->r2 = SUB32(ctx->r4, ctx->r13);
    // 0x80042388: mult        $t1, $v0
    result = S64(S32(ctx->r9)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004238C: mflo        $v0
    ctx->r2 = lo;
    // 0x80042390: nop

    // 0x80042394: nop

    // 0x80042398: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x8004239C: bne         $a2, $zero, L_800423A8
    if (ctx->r6 != 0) {
        // 0x800423A0: nop
    
            goto L_800423A8;
    }
    // 0x800423A0: nop

    // 0x800423A4: break       7
    do_break(2147754916);
L_800423A8:
    // 0x800423A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800423AC: bne         $a2, $at, L_800423C0
    if (ctx->r6 != ctx->r1) {
        // 0x800423B0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800423C0;
    }
    // 0x800423B0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800423B4: bne         $v0, $at, L_800423C0
    if (ctx->r2 != ctx->r1) {
        // 0x800423B8: nop
    
            goto L_800423C0;
    }
    // 0x800423B8: nop

    // 0x800423BC: break       6
    do_break(2147754940);
L_800423C0:
    // 0x800423C0: mflo        $v0
    ctx->r2 = lo;
    // 0x800423C4: lui         $t4, 0x801E
    ctx->r12 = S32(0X801E << 16);
    // 0x800423C8: addiu       $t4, $t4, -0x72D0
    ctx->r12 = ADD32(ctx->r12, -0X72D0);
    // 0x800423CC: lh          $v1, 0x0($t4)
    ctx->r3 = MEM_H(ctx->r12, 0X0);
    // 0x800423D0: addu        $t0, $a3, $v0
    ctx->r8 = ADD32(ctx->r7, ctx->r2);
    // 0x800423D4: slt         $v0, $t0, $t2
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x800423D8: beq         $v0, $zero, L_800423E4
    if (ctx->r2 == 0) {
        // 0x800423DC: subu        $a1, $v1, $a0
        ctx->r5 = SUB32(ctx->r3, ctx->r4);
            goto L_800423E4;
    }
    // 0x800423DC: subu        $a1, $v1, $a0
    ctx->r5 = SUB32(ctx->r3, ctx->r4);
    // 0x800423E0: addu        $t0, $t2, $zero
    ctx->r8 = ADD32(ctx->r10, 0);
L_800423E4:
    // 0x800423E4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800423E8: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x800423EC: subu        $v0, $t3, $v0
    ctx->r2 = SUB32(ctx->r11, ctx->r2);
    // 0x800423F0: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800423F4: mflo        $v0
    ctx->r2 = lo;
    // 0x800423F8: nop

    // 0x800423FC: nop

    // 0x80042400: div         $zero, $v0, $t1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r9)));
    // 0x80042404: bne         $t1, $zero, L_80042410
    if (ctx->r9 != 0) {
        // 0x80042408: nop
    
            goto L_80042410;
    }
    // 0x80042408: nop

    // 0x8004240C: break       7
    do_break(2147755020);
L_80042410:
    // 0x80042410: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042414: bne         $t1, $at, L_80042428
    if (ctx->r9 != ctx->r1) {
        // 0x80042418: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042428;
    }
    // 0x80042418: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004241C: bne         $v0, $at, L_80042428
    if (ctx->r2 != ctx->r1) {
        // 0x80042420: nop
    
            goto L_80042428;
    }
    // 0x80042420: nop

    // 0x80042424: break       6
    do_break(2147755044);
L_80042428:
    // 0x80042428: mflo        $a0
    ctx->r4 = lo;
    // 0x8004242C: nop

    // 0x80042430: nop

    // 0x80042434: blez        $a0, L_800429D4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80042438: subu        $v0, $v1, $a0
        ctx->r2 = SUB32(ctx->r3, ctx->r4);
            goto L_800429D4;
    }
    // 0x80042438: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x8004243C: j           L_800429D4
    // 0x80042440: sh          $v0, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r2;
        goto L_800429D4;
    // 0x80042440: sh          $v0, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r2;
L_80042444:
    // 0x80042444: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80042448: lb          $v0, 0x296($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X296);
    // 0x8004244C: bne         $v0, $zero, L_80042480
    if (ctx->r2 != 0) {
        // 0x80042450: nop
    
            goto L_80042480;
    }
    // 0x80042450: nop

    // 0x80042454: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80042458: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x8004245C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80042460: beq         $v0, $zero, L_80042480
    if (ctx->r2 == 0) {
        // 0x80042464: nop
    
            goto L_80042480;
    }
    // 0x80042464: nop

    // 0x80042468: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8004246C: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x80042470: subu        $v0, $v0, $t7
    ctx->r2 = SUB32(ctx->r2, ctx->r15);
    // 0x80042474: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80042478: bne         $v0, $zero, L_80043C30
    if (ctx->r2 != 0) {
        // 0x8004247C: nop
    
            goto L_80043C30;
    }
    // 0x8004247C: nop

L_80042480:
    // 0x80042480: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80042484: lh          $v1, -0x26B4($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X26B4);
    // 0x80042488: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8004248C: lh          $a0, -0x26B6($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X26B6);
    // 0x80042490: subu        $v0, $t3, $a3
    ctx->r2 = SUB32(ctx->r11, ctx->r7);
    // 0x80042494: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80042498: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004249C: mflo        $v0
    ctx->r2 = lo;
    // 0x800424A0: subu        $a2, $t6, $t5
    ctx->r6 = SUB32(ctx->r14, ctx->r13);
    // 0x800424A4: nop

    // 0x800424A8: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x800424AC: bne         $a2, $zero, L_800424B8
    if (ctx->r6 != 0) {
        // 0x800424B0: nop
    
            goto L_800424B8;
    }
    // 0x800424B0: nop

    // 0x800424B4: break       7
    do_break(2147755188);
L_800424B8:
    // 0x800424B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800424BC: bne         $a2, $at, L_800424D0
    if (ctx->r6 != ctx->r1) {
        // 0x800424C0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800424D0;
    }
    // 0x800424C0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800424C4: bne         $v0, $at, L_800424D0
    if (ctx->r2 != ctx->r1) {
        // 0x800424C8: nop
    
            goto L_800424D0;
    }
    // 0x800424C8: nop

    // 0x800424CC: break       6
    do_break(2147755212);
L_800424D0:
    // 0x800424D0: mflo        $v0
    ctx->r2 = lo;
    // 0x800424D4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x800424D8: lh          $a0, -0x7158($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7158);
    // 0x800424DC: subu        $a3, $a3, $v0
    ctx->r7 = SUB32(ctx->r7, ctx->r2);
    // 0x800424E0: subu        $t1, $t3, $a3
    ctx->r9 = SUB32(ctx->r11, ctx->r7);
    // 0x800424E4: subu        $v0, $t6, $a0
    ctx->r2 = SUB32(ctx->r14, ctx->r4);
    // 0x800424E8: mult        $t1, $v0
    result = S64(S32(ctx->r9)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800424EC: mflo        $v0
    ctx->r2 = lo;
    // 0x800424F0: nop

    // 0x800424F4: nop

    // 0x800424F8: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x800424FC: bne         $a2, $zero, L_80042508
    if (ctx->r6 != 0) {
        // 0x80042500: nop
    
            goto L_80042508;
    }
    // 0x80042500: nop

    // 0x80042504: break       7
    do_break(2147755268);
L_80042508:
    // 0x80042508: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004250C: bne         $a2, $at, L_80042520
    if (ctx->r6 != ctx->r1) {
        // 0x80042510: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042520;
    }
    // 0x80042510: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042514: bne         $v0, $at, L_80042520
    if (ctx->r2 != ctx->r1) {
        // 0x80042518: nop
    
            goto L_80042520;
    }
    // 0x80042518: nop

    // 0x8004251C: break       6
    do_break(2147755292);
L_80042520:
    // 0x80042520: mflo        $v0
    ctx->r2 = lo;
    // 0x80042524: lui         $t4, 0x801C
    ctx->r12 = S32(0X801C << 16);
    // 0x80042528: addiu       $t4, $t4, -0x3FAC
    ctx->r12 = ADD32(ctx->r12, -0X3FAC);
    // 0x8004252C: lh          $v1, 0x0($t4)
    ctx->r3 = MEM_H(ctx->r12, 0X0);
    // 0x80042530: addu        $t0, $a3, $v0
    ctx->r8 = ADD32(ctx->r7, ctx->r2);
    // 0x80042534: slt         $v0, $t0, $t2
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80042538: beq         $v0, $zero, L_80042544
    if (ctx->r2 == 0) {
        // 0x8004253C: subu        $a1, $a0, $v1
        ctx->r5 = SUB32(ctx->r4, ctx->r3);
            goto L_80042544;
    }
    // 0x8004253C: subu        $a1, $a0, $v1
    ctx->r5 = SUB32(ctx->r4, ctx->r3);
    // 0x80042540: addu        $t0, $t2, $zero
    ctx->r8 = ADD32(ctx->r10, 0);
L_80042544:
    // 0x80042544: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80042548: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x8004254C: subu        $v0, $t3, $v0
    ctx->r2 = SUB32(ctx->r11, ctx->r2);
    // 0x80042550: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042554: mflo        $v0
    ctx->r2 = lo;
    // 0x80042558: nop

    // 0x8004255C: nop

    // 0x80042560: div         $zero, $v0, $t1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r9))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r9)));
    // 0x80042564: bne         $t1, $zero, L_80042570
    if (ctx->r9 != 0) {
        // 0x80042568: nop
    
            goto L_80042570;
    }
    // 0x80042568: nop

    // 0x8004256C: break       7
    do_break(2147755372);
L_80042570:
    // 0x80042570: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042574: bne         $t1, $at, L_80042588
    if (ctx->r9 != ctx->r1) {
        // 0x80042578: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042588;
    }
    // 0x80042578: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004257C: bne         $v0, $at, L_80042588
    if (ctx->r2 != ctx->r1) {
        // 0x80042580: nop
    
            goto L_80042588;
    }
    // 0x80042580: nop

    // 0x80042584: break       6
    do_break(2147755396);
L_80042588:
    // 0x80042588: mflo        $a0
    ctx->r4 = lo;
    // 0x8004258C: nop

    // 0x80042590: nop

    // 0x80042594: blez        $a0, L_800429D4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80042598: addu        $v0, $v1, $a0
        ctx->r2 = ADD32(ctx->r3, ctx->r4);
            goto L_800429D4;
    }
    // 0x80042598: addu        $v0, $v1, $a0
    ctx->r2 = ADD32(ctx->r3, ctx->r4);
    // 0x8004259C: j           L_800429D4
    // 0x800425A0: sh          $v0, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r2;
        goto L_800429D4;
    // 0x800425A0: sh          $v0, 0x0($t4)
    MEM_H(0X0, ctx->r12) = ctx->r2;
L_800425A4:
    // 0x800425A4: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x800425A8: lh          $v0, -0x26B0($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X26B0);
    // 0x800425AC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x800425B0: lh          $a0, -0x26B2($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X26B2);
    // 0x800425B4: subu        $v1, $t3, $a3
    ctx->r3 = SUB32(ctx->r11, ctx->r7);
    // 0x800425B8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x800425BC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800425C0: mflo        $v1
    ctx->r3 = lo;
    // 0x800425C4: subu        $a1, $t8, $t4
    ctx->r5 = SUB32(ctx->r24, ctx->r12);
    // 0x800425C8: nop

    // 0x800425CC: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x800425D0: bne         $a1, $zero, L_800425DC
    if (ctx->r5 != 0) {
        // 0x800425D4: nop
    
            goto L_800425DC;
    }
    // 0x800425D4: nop

    // 0x800425D8: break       7
    do_break(2147755480);
L_800425DC:
    // 0x800425DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800425E0: bne         $a1, $at, L_800425F4
    if (ctx->r5 != ctx->r1) {
        // 0x800425E4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800425F4;
    }
    // 0x800425E4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800425E8: bne         $v1, $at, L_800425F4
    if (ctx->r3 != ctx->r1) {
        // 0x800425EC: nop
    
            goto L_800425F4;
    }
    // 0x800425EC: nop

    // 0x800425F0: break       6
    do_break(2147755504);
L_800425F4:
    // 0x800425F4: mflo        $v1
    ctx->r3 = lo;
    // 0x800425F8: lui         $a2, 0x801E
    ctx->r6 = S32(0X801E << 16);
    // 0x800425FC: addiu       $a2, $a2, -0x7154
    ctx->r6 = ADD32(ctx->r6, -0X7154);
    // 0x80042600: subu        $v0, $a3, $t3
    ctx->r2 = SUB32(ctx->r7, ctx->r11);
    // 0x80042604: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80042608: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x8004260C: lh          $v1, 0x0($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X0);
    // 0x80042610: srl         $v0, $a1, 31
    ctx->r2 = S32(U32(ctx->r5) >> 31);
    // 0x80042614: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80042618: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8004261C: addu        $v0, $t4, $v0
    ctx->r2 = ADD32(ctx->r12, ctx->r2);
    // 0x80042620: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80042624: beq         $v0, $zero, L_800426F4
    if (ctx->r2 == 0) {
        // 0x80042628: subu        $a0, $t3, $a3
        ctx->r4 = SUB32(ctx->r11, ctx->r7);
            goto L_800426F4;
    }
    // 0x80042628: subu        $a0, $t3, $a3
    ctx->r4 = SUB32(ctx->r11, ctx->r7);
    // 0x8004262C: subu        $v0, $t8, $v1
    ctx->r2 = SUB32(ctx->r24, ctx->r3);
    // 0x80042630: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042634: mflo        $v0
    ctx->r2 = lo;
    // 0x80042638: nop

    // 0x8004263C: nop

    // 0x80042640: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x80042644: bne         $a1, $zero, L_80042650
    if (ctx->r5 != 0) {
        // 0x80042648: nop
    
            goto L_80042650;
    }
    // 0x80042648: nop

    // 0x8004264C: break       7
    do_break(2147755596);
L_80042650:
    // 0x80042650: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042654: bne         $a1, $at, L_80042668
    if (ctx->r5 != ctx->r1) {
        // 0x80042658: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042668;
    }
    // 0x80042658: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004265C: bne         $v0, $at, L_80042668
    if (ctx->r2 != ctx->r1) {
        // 0x80042660: nop
    
            goto L_80042668;
    }
    // 0x80042660: nop

    // 0x80042664: break       6
    do_break(2147755620);
L_80042668:
    // 0x80042668: mflo        $v0
    ctx->r2 = lo;
    // 0x8004266C: addu        $t0, $a3, $v0
    ctx->r8 = ADD32(ctx->r7, ctx->r2);
    // 0x80042670: slt         $v0, $t0, $t2
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80042674: bnel        $v0, $zero, L_8004267C
    if (ctx->r2 != 0) {
        // 0x80042678: addu        $t0, $t2, $zero
        ctx->r8 = ADD32(ctx->r10, 0);
            goto L_8004267C;
    }
    goto skip_3;
    // 0x80042678: addu        $t0, $t2, $zero
    ctx->r8 = ADD32(ctx->r10, 0);
    skip_3:
L_8004267C:
    // 0x8004267C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80042680: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x80042684: subu        $v0, $t3, $v0
    ctx->r2 = SUB32(ctx->r11, ctx->r2);
    // 0x80042688: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004268C: mflo        $v0
    ctx->r2 = lo;
    // 0x80042690: nop

    // 0x80042694: nop

    // 0x80042698: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x8004269C: bne         $a0, $zero, L_800426A8
    if (ctx->r4 != 0) {
        // 0x800426A0: nop
    
            goto L_800426A8;
    }
    // 0x800426A0: nop

    // 0x800426A4: break       7
    do_break(2147755684);
L_800426A8:
    // 0x800426A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800426AC: bne         $a0, $at, L_800426C0
    if (ctx->r4 != ctx->r1) {
        // 0x800426B0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800426C0;
    }
    // 0x800426B0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800426B4: bne         $v0, $at, L_800426C0
    if (ctx->r2 != ctx->r1) {
        // 0x800426B8: nop
    
            goto L_800426C0;
    }
    // 0x800426B8: nop

    // 0x800426BC: break       6
    do_break(2147755708);
L_800426C0:
    // 0x800426C0: mflo        $a1
    ctx->r5 = lo;
    // 0x800426C4: blez        $a1, L_800426E0
    if (SIGNED(ctx->r5) <= 0) {
        // 0x800426C8: nop
    
            goto L_800426E0;
    }
    // 0x800426C8: nop

    // 0x800426CC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800426D0: addiu       $v1, $v1, -0x3FA8
    ctx->r3 = ADD32(ctx->r3, -0X3FA8);
    // 0x800426D4: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x800426D8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800426DC: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_800426E0:
    // 0x800426E0: lh          $v1, 0x0($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X0);
    // 0x800426E4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800426E8: lh          $v0, -0x3FA8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3FA8);
    // 0x800426EC: j           L_800427B8
    // 0x800426F0: subu        $a1, $v1, $v0
    ctx->r5 = SUB32(ctx->r3, ctx->r2);
        goto L_800427B8;
    // 0x800426F0: subu        $a1, $v1, $v0
    ctx->r5 = SUB32(ctx->r3, ctx->r2);
L_800426F4:
    // 0x800426F4: subu        $v0, $v1, $t4
    ctx->r2 = SUB32(ctx->r3, ctx->r12);
    // 0x800426F8: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800426FC: mflo        $v0
    ctx->r2 = lo;
    // 0x80042700: nop

    // 0x80042704: nop

    // 0x80042708: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x8004270C: bne         $a1, $zero, L_80042718
    if (ctx->r5 != 0) {
        // 0x80042710: nop
    
            goto L_80042718;
    }
    // 0x80042710: nop

    // 0x80042714: break       7
    do_break(2147755796);
L_80042718:
    // 0x80042718: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004271C: bne         $a1, $at, L_80042730
    if (ctx->r5 != ctx->r1) {
        // 0x80042720: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042730;
    }
    // 0x80042720: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042724: bne         $v0, $at, L_80042730
    if (ctx->r2 != ctx->r1) {
        // 0x80042728: nop
    
            goto L_80042730;
    }
    // 0x80042728: nop

    // 0x8004272C: break       6
    do_break(2147755820);
L_80042730:
    // 0x80042730: mflo        $v0
    ctx->r2 = lo;
    // 0x80042734: addu        $t0, $a3, $v0
    ctx->r8 = ADD32(ctx->r7, ctx->r2);
    // 0x80042738: slt         $v0, $t0, $t2
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8004273C: bnel        $v0, $zero, L_80042744
    if (ctx->r2 != 0) {
        // 0x80042740: addu        $t0, $t2, $zero
        ctx->r8 = ADD32(ctx->r10, 0);
            goto L_80042744;
    }
    goto skip_4;
    // 0x80042740: addu        $t0, $t2, $zero
    ctx->r8 = ADD32(ctx->r10, 0);
    skip_4:
L_80042744:
    // 0x80042744: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80042748: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x8004274C: subu        $v0, $t3, $v0
    ctx->r2 = SUB32(ctx->r11, ctx->r2);
    // 0x80042750: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042754: mflo        $v0
    ctx->r2 = lo;
    // 0x80042758: nop

    // 0x8004275C: nop

    // 0x80042760: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x80042764: bne         $a0, $zero, L_80042770
    if (ctx->r4 != 0) {
        // 0x80042768: nop
    
            goto L_80042770;
    }
    // 0x80042768: nop

    // 0x8004276C: break       7
    do_break(2147755884);
L_80042770:
    // 0x80042770: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042774: bne         $a0, $at, L_80042788
    if (ctx->r4 != ctx->r1) {
        // 0x80042778: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042788;
    }
    // 0x80042778: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004277C: bne         $v0, $at, L_80042788
    if (ctx->r2 != ctx->r1) {
        // 0x80042780: nop
    
            goto L_80042788;
    }
    // 0x80042780: nop

    // 0x80042784: break       6
    do_break(2147755908);
L_80042788:
    // 0x80042788: mflo        $a1
    ctx->r5 = lo;
    // 0x8004278C: blez        $a1, L_800427A8
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80042790: nop
    
            goto L_800427A8;
    }
    // 0x80042790: nop

    // 0x80042794: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80042798: addiu       $v1, $v1, -0x72CC
    ctx->r3 = ADD32(ctx->r3, -0X72CC);
    // 0x8004279C: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x800427A0: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x800427A4: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_800427A8:
    // 0x800427A8: lh          $v1, 0x0($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X0);
    // 0x800427AC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800427B0: lh          $v0, -0x72CC($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X72CC);
    // 0x800427B4: subu        $a1, $v0, $v1
    ctx->r5 = SUB32(ctx->r2, ctx->r3);
L_800427B8:
    // 0x800427B8: j           L_80043CCC
    // 0x800427BC: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
        goto L_80043CCC;
    // 0x800427BC: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
L_800427C0:
    // 0x800427C0: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x800427C4: lh          $v0, -0x26B4($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X26B4);
    // 0x800427C8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x800427CC: lh          $a0, -0x26B6($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X26B6);
    // 0x800427D0: subu        $v1, $t3, $a3
    ctx->r3 = SUB32(ctx->r11, ctx->r7);
    // 0x800427D4: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x800427D8: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800427DC: mflo        $v1
    ctx->r3 = lo;
    // 0x800427E0: subu        $a1, $t6, $t5
    ctx->r5 = SUB32(ctx->r14, ctx->r13);
    // 0x800427E4: nop

    // 0x800427E8: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x800427EC: bne         $a1, $zero, L_800427F8
    if (ctx->r5 != 0) {
        // 0x800427F0: nop
    
            goto L_800427F8;
    }
    // 0x800427F0: nop

    // 0x800427F4: break       7
    do_break(2147756020);
L_800427F8:
    // 0x800427F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800427FC: bne         $a1, $at, L_80042810
    if (ctx->r5 != ctx->r1) {
        // 0x80042800: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042810;
    }
    // 0x80042800: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042804: bne         $v1, $at, L_80042810
    if (ctx->r3 != ctx->r1) {
        // 0x80042808: nop
    
            goto L_80042810;
    }
    // 0x80042808: nop

    // 0x8004280C: break       6
    do_break(2147756044);
L_80042810:
    // 0x80042810: mflo        $v1
    ctx->r3 = lo;
    // 0x80042814: lui         $a2, 0x801E
    ctx->r6 = S32(0X801E << 16);
    // 0x80042818: addiu       $a2, $a2, -0x7158
    ctx->r6 = ADD32(ctx->r6, -0X7158);
    // 0x8004281C: subu        $v0, $a3, $t3
    ctx->r2 = SUB32(ctx->r7, ctx->r11);
    // 0x80042820: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80042824: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x80042828: lh          $v1, 0x0($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X0);
    // 0x8004282C: srl         $v0, $a1, 31
    ctx->r2 = S32(U32(ctx->r5) >> 31);
    // 0x80042830: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80042834: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80042838: addu        $v0, $t5, $v0
    ctx->r2 = ADD32(ctx->r13, ctx->r2);
    // 0x8004283C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80042840: beq         $v0, $zero, L_80042910
    if (ctx->r2 == 0) {
        // 0x80042844: subu        $a0, $t3, $a3
        ctx->r4 = SUB32(ctx->r11, ctx->r7);
            goto L_80042910;
    }
    // 0x80042844: subu        $a0, $t3, $a3
    ctx->r4 = SUB32(ctx->r11, ctx->r7);
    // 0x80042848: subu        $v0, $v1, $t5
    ctx->r2 = SUB32(ctx->r3, ctx->r13);
    // 0x8004284C: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042850: mflo        $v0
    ctx->r2 = lo;
    // 0x80042854: nop

    // 0x80042858: nop

    // 0x8004285C: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x80042860: bne         $a1, $zero, L_8004286C
    if (ctx->r5 != 0) {
        // 0x80042864: nop
    
            goto L_8004286C;
    }
    // 0x80042864: nop

    // 0x80042868: break       7
    do_break(2147756136);
L_8004286C:
    // 0x8004286C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042870: bne         $a1, $at, L_80042884
    if (ctx->r5 != ctx->r1) {
        // 0x80042874: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042884;
    }
    // 0x80042874: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042878: bne         $v0, $at, L_80042884
    if (ctx->r2 != ctx->r1) {
        // 0x8004287C: nop
    
            goto L_80042884;
    }
    // 0x8004287C: nop

    // 0x80042880: break       6
    do_break(2147756160);
L_80042884:
    // 0x80042884: mflo        $v0
    ctx->r2 = lo;
    // 0x80042888: addu        $t0, $a3, $v0
    ctx->r8 = ADD32(ctx->r7, ctx->r2);
    // 0x8004288C: slt         $v0, $t0, $t2
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80042890: bnel        $v0, $zero, L_80042898
    if (ctx->r2 != 0) {
        // 0x80042894: addu        $t0, $t2, $zero
        ctx->r8 = ADD32(ctx->r10, 0);
            goto L_80042898;
    }
    goto skip_5;
    // 0x80042894: addu        $t0, $t2, $zero
    ctx->r8 = ADD32(ctx->r10, 0);
    skip_5:
L_80042898:
    // 0x80042898: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8004289C: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x800428A0: subu        $v0, $t3, $v0
    ctx->r2 = SUB32(ctx->r11, ctx->r2);
    // 0x800428A4: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800428A8: mflo        $v0
    ctx->r2 = lo;
    // 0x800428AC: nop

    // 0x800428B0: nop

    // 0x800428B4: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x800428B8: bne         $a0, $zero, L_800428C4
    if (ctx->r4 != 0) {
        // 0x800428BC: nop
    
            goto L_800428C4;
    }
    // 0x800428BC: nop

    // 0x800428C0: break       7
    do_break(2147756224);
L_800428C4:
    // 0x800428C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800428C8: bne         $a0, $at, L_800428DC
    if (ctx->r4 != ctx->r1) {
        // 0x800428CC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800428DC;
    }
    // 0x800428CC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800428D0: bne         $v0, $at, L_800428DC
    if (ctx->r2 != ctx->r1) {
        // 0x800428D4: nop
    
            goto L_800428DC;
    }
    // 0x800428D4: nop

    // 0x800428D8: break       6
    do_break(2147756248);
L_800428DC:
    // 0x800428DC: mflo        $a1
    ctx->r5 = lo;
    // 0x800428E0: blez        $a1, L_800428FC
    if (SIGNED(ctx->r5) <= 0) {
        // 0x800428E4: nop
    
            goto L_800428FC;
    }
    // 0x800428E4: nop

    // 0x800428E8: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x800428EC: addiu       $v1, $v1, -0x72D0
    ctx->r3 = ADD32(ctx->r3, -0X72D0);
    // 0x800428F0: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x800428F4: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x800428F8: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_800428FC:
    // 0x800428FC: lh          $v1, 0x0($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X0);
    // 0x80042900: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80042904: lh          $v0, -0x72D0($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X72D0);
    // 0x80042908: j           L_800429D4
    // 0x8004290C: subu        $a1, $v0, $v1
    ctx->r5 = SUB32(ctx->r2, ctx->r3);
        goto L_800429D4;
    // 0x8004290C: subu        $a1, $v0, $v1
    ctx->r5 = SUB32(ctx->r2, ctx->r3);
L_80042910:
    // 0x80042910: subu        $v0, $t6, $v1
    ctx->r2 = SUB32(ctx->r14, ctx->r3);
    // 0x80042914: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042918: mflo        $v0
    ctx->r2 = lo;
    // 0x8004291C: nop

    // 0x80042920: nop

    // 0x80042924: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x80042928: bne         $a1, $zero, L_80042934
    if (ctx->r5 != 0) {
        // 0x8004292C: nop
    
            goto L_80042934;
    }
    // 0x8004292C: nop

    // 0x80042930: break       7
    do_break(2147756336);
L_80042934:
    // 0x80042934: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042938: bne         $a1, $at, L_8004294C
    if (ctx->r5 != ctx->r1) {
        // 0x8004293C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004294C;
    }
    // 0x8004293C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042940: bne         $v0, $at, L_8004294C
    if (ctx->r2 != ctx->r1) {
        // 0x80042944: nop
    
            goto L_8004294C;
    }
    // 0x80042944: nop

    // 0x80042948: break       6
    do_break(2147756360);
L_8004294C:
    // 0x8004294C: mflo        $v0
    ctx->r2 = lo;
    // 0x80042950: addu        $t0, $a3, $v0
    ctx->r8 = ADD32(ctx->r7, ctx->r2);
    // 0x80042954: slt         $v0, $t0, $t2
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80042958: bnel        $v0, $zero, L_80042960
    if (ctx->r2 != 0) {
        // 0x8004295C: addu        $t0, $t2, $zero
        ctx->r8 = ADD32(ctx->r10, 0);
            goto L_80042960;
    }
    goto skip_6;
    // 0x8004295C: addu        $t0, $t2, $zero
    ctx->r8 = ADD32(ctx->r10, 0);
    skip_6:
L_80042960:
    // 0x80042960: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80042964: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x80042968: subu        $v0, $t3, $v0
    ctx->r2 = SUB32(ctx->r11, ctx->r2);
    // 0x8004296C: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042970: mflo        $v0
    ctx->r2 = lo;
    // 0x80042974: nop

    // 0x80042978: nop

    // 0x8004297C: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x80042980: bne         $a0, $zero, L_8004298C
    if (ctx->r4 != 0) {
        // 0x80042984: nop
    
            goto L_8004298C;
    }
    // 0x80042984: nop

    // 0x80042988: break       7
    do_break(2147756424);
L_8004298C:
    // 0x8004298C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042990: bne         $a0, $at, L_800429A4
    if (ctx->r4 != ctx->r1) {
        // 0x80042994: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800429A4;
    }
    // 0x80042994: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042998: bne         $v0, $at, L_800429A4
    if (ctx->r2 != ctx->r1) {
        // 0x8004299C: nop
    
            goto L_800429A4;
    }
    // 0x8004299C: nop

    // 0x800429A0: break       6
    do_break(2147756448);
L_800429A4:
    // 0x800429A4: mflo        $a1
    ctx->r5 = lo;
    // 0x800429A8: blez        $a1, L_800429C4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x800429AC: nop
    
            goto L_800429C4;
    }
    // 0x800429AC: nop

    // 0x800429B0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800429B4: addiu       $v1, $v1, -0x3FAC
    ctx->r3 = ADD32(ctx->r3, -0X3FAC);
    // 0x800429B8: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x800429BC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800429C0: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_800429C4:
    // 0x800429C4: lh          $v1, 0x0($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X0);
    // 0x800429C8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800429CC: lh          $v0, -0x3FAC($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3FAC);
    // 0x800429D0: subu        $a1, $v1, $v0
    ctx->r5 = SUB32(ctx->r3, ctx->r2);
L_800429D4:
    // 0x800429D4: j           L_80043CCC
    // 0x800429D8: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
        goto L_80043CCC;
    // 0x800429D8: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
L_800429DC:
    // 0x800429DC: lui         $s1, 0x801E
    ctx->r17 = S32(0X801E << 16);
    // 0x800429E0: addiu       $s1, $s1, -0x7158
    ctx->r17 = ADD32(ctx->r17, -0X7158);
    // 0x800429E4: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x800429E8: subu        $t2, $t6, $t5
    ctx->r10 = SUB32(ctx->r14, ctx->r13);
    // 0x800429EC: subu        $t9, $v0, $t4
    ctx->r25 = SUB32(ctx->r2, ctx->r12);
    // 0x800429F0: mult        $t9, $t2
    result = S64(S32(ctx->r25)) * S64(S32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800429F4: mflo        $v1
    ctx->r3 = lo;
    // 0x800429F8: subu        $a2, $t8, $t4
    ctx->r6 = SUB32(ctx->r24, ctx->r12);
    // 0x800429FC: nop

    // 0x80042A00: div         $zero, $v1, $a2
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r6)));
    // 0x80042A04: bne         $a2, $zero, L_80042A10
    if (ctx->r6 != 0) {
        // 0x80042A08: nop
    
            goto L_80042A10;
    }
    // 0x80042A08: nop

    // 0x80042A0C: break       7
    do_break(2147756556);
L_80042A10:
    // 0x80042A10: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042A14: bne         $a2, $at, L_80042A28
    if (ctx->r6 != ctx->r1) {
        // 0x80042A18: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042A28;
    }
    // 0x80042A18: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042A1C: bne         $v1, $at, L_80042A28
    if (ctx->r3 != ctx->r1) {
        // 0x80042A20: nop
    
            goto L_80042A28;
    }
    // 0x80042A20: nop

    // 0x80042A24: break       6
    do_break(2147756580);
L_80042A28:
    // 0x80042A28: mflo        $v1
    ctx->r3 = lo;
    // 0x80042A2C: subu        $t8, $t8, $v0
    ctx->r24 = SUB32(ctx->r24, ctx->r2);
    // 0x80042A30: nop

    // 0x80042A34: mult        $t8, $t2
    result = S64(S32(ctx->r24)) * S64(S32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042A38: mflo        $v0
    ctx->r2 = lo;
    // 0x80042A3C: nop

    // 0x80042A40: nop

    // 0x80042A44: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x80042A48: bne         $a2, $zero, L_80042A54
    if (ctx->r6 != 0) {
        // 0x80042A4C: nop
    
            goto L_80042A54;
    }
    // 0x80042A4C: nop

    // 0x80042A50: break       7
    do_break(2147756624);
L_80042A54:
    // 0x80042A54: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042A58: bne         $a2, $at, L_80042A6C
    if (ctx->r6 != ctx->r1) {
        // 0x80042A5C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042A6C;
    }
    // 0x80042A5C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042A60: bne         $v0, $at, L_80042A6C
    if (ctx->r2 != ctx->r1) {
        // 0x80042A64: nop
    
            goto L_80042A6C;
    }
    // 0x80042A64: nop

    // 0x80042A68: break       6
    do_break(2147756648);
L_80042A6C:
    // 0x80042A6C: mflo        $v0
    ctx->r2 = lo;
    // 0x80042A70: lh          $t4, 0x0($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X0);
    // 0x80042A74: subu        $a0, $a3, $t3
    ctx->r4 = SUB32(ctx->r7, ctx->r11);
    // 0x80042A78: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
    // 0x80042A7C: addu        $v1, $t5, $v1
    ctx->r3 = ADD32(ctx->r13, ctx->r3);
    // 0x80042A80: slt         $v1, $t4, $v1
    ctx->r3 = SIGNED(ctx->r12) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80042A84: addu        $v0, $t5, $v0
    ctx->r2 = ADD32(ctx->r13, ctx->r2);
    // 0x80042A88: slt         $v0, $t4, $v0
    ctx->r2 = SIGNED(ctx->r12) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80042A8C: beq         $v0, $zero, L_80042A98
    if (ctx->r2 == 0) {
        // 0x80042A90: sll         $a1, $v1, 1
        ctx->r5 = S32(ctx->r3 << 1);
            goto L_80042A98;
    }
    // 0x80042A90: sll         $a1, $v1, 1
    ctx->r5 = S32(ctx->r3 << 1);
    // 0x80042A94: ori         $a1, $a1, 0x1
    ctx->r5 = ctx->r5 | 0X1;
L_80042A98:
    // 0x80042A98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80042A9C: beq         $a1, $v0, L_80042B98
    if (ctx->r5 == ctx->r2) {
        // 0x80042AA0: slti        $v0, $a1, 0x2
        ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
            goto L_80042B98;
    }
    // 0x80042AA0: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x80042AA4: beql        $v0, $zero, L_80042ABC
    if (ctx->r2 == 0) {
        // 0x80042AA8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80042ABC;
    }
    goto skip_7;
    // 0x80042AA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_7:
    // 0x80042AAC: beq         $a1, $zero, L_80042AD4
    if (ctx->r5 == 0) {
        // 0x80042AB0: subu        $a0, $t3, $a3
        ctx->r4 = SUB32(ctx->r11, ctx->r7);
            goto L_80042AD4;
    }
    // 0x80042AB0: subu        $a0, $t3, $a3
    ctx->r4 = SUB32(ctx->r11, ctx->r7);
    // 0x80042AB4: j           L_80043CCC
    // 0x80042AB8: nop

        goto L_80043CCC;
    // 0x80042AB8: nop

L_80042ABC:
    // 0x80042ABC: beq         $a1, $v0, L_80042C5C
    if (ctx->r5 == ctx->r2) {
        // 0x80042AC0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80042C5C;
    }
    // 0x80042AC0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80042AC4: beq         $a1, $v0, L_80042D20
    if (ctx->r5 == ctx->r2) {
        // 0x80042AC8: subu        $a0, $t3, $a3
        ctx->r4 = SUB32(ctx->r11, ctx->r7);
            goto L_80042D20;
    }
    // 0x80042AC8: subu        $a0, $t3, $a3
    ctx->r4 = SUB32(ctx->r11, ctx->r7);
    // 0x80042ACC: j           L_80043CCC
    // 0x80042AD0: nop

        goto L_80043CCC;
    // 0x80042AD0: nop

L_80042AD4:
    // 0x80042AD4: subu        $v1, $t4, $t5
    ctx->r3 = SUB32(ctx->r12, ctx->r13);
    // 0x80042AD8: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042ADC: mflo        $v1
    ctx->r3 = lo;
    // 0x80042AE0: nop

    // 0x80042AE4: nop

    // 0x80042AE8: div         $zero, $v1, $t2
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r10)));
    // 0x80042AEC: bne         $t2, $zero, L_80042AF8
    if (ctx->r10 != 0) {
        // 0x80042AF0: nop
    
            goto L_80042AF8;
    }
    // 0x80042AF0: nop

    // 0x80042AF4: break       7
    do_break(2147756788);
L_80042AF8:
    // 0x80042AF8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042AFC: bne         $t2, $at, L_80042B10
    if (ctx->r10 != ctx->r1) {
        // 0x80042B00: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042B10;
    }
    // 0x80042B00: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042B04: bne         $v1, $at, L_80042B10
    if (ctx->r3 != ctx->r1) {
        // 0x80042B08: nop
    
            goto L_80042B10;
    }
    // 0x80042B08: nop

    // 0x80042B0C: break       6
    do_break(2147756812);
L_80042B10:
    // 0x80042B10: mflo        $v1
    ctx->r3 = lo;
    // 0x80042B14: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80042B18: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x80042B1C: subu        $v0, $t3, $v0
    ctx->r2 = SUB32(ctx->r11, ctx->r2);
    // 0x80042B20: mult        $t2, $v0
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042B24: mflo        $v0
    ctx->r2 = lo;
    // 0x80042B28: nop

    // 0x80042B2C: nop

    // 0x80042B30: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x80042B34: bne         $a0, $zero, L_80042B40
    if (ctx->r4 != 0) {
        // 0x80042B38: nop
    
            goto L_80042B40;
    }
    // 0x80042B38: nop

    // 0x80042B3C: break       7
    do_break(2147756860);
L_80042B40:
    // 0x80042B40: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042B44: bne         $a0, $at, L_80042B58
    if (ctx->r4 != ctx->r1) {
        // 0x80042B48: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042B58;
    }
    // 0x80042B48: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042B4C: bne         $v0, $at, L_80042B58
    if (ctx->r2 != ctx->r1) {
        // 0x80042B50: nop
    
            goto L_80042B58;
    }
    // 0x80042B50: nop

    // 0x80042B54: break       6
    do_break(2147756884);
L_80042B58:
    // 0x80042B58: mflo        $a1
    ctx->r5 = lo;
    // 0x80042B5C: nop

    // 0x80042B60: nop

    // 0x80042B64: blez        $a1, L_80042B80
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80042B68: addu        $t0, $a3, $v1
        ctx->r8 = ADD32(ctx->r7, ctx->r3);
            goto L_80042B80;
    }
    // 0x80042B68: addu        $t0, $a3, $v1
    ctx->r8 = ADD32(ctx->r7, ctx->r3);
    // 0x80042B6C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80042B70: addiu       $v1, $v1, -0x72D0
    ctx->r3 = ADD32(ctx->r3, -0X72D0);
    // 0x80042B74: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80042B78: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80042B7C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_80042B80:
    // 0x80042B80: lh          $v1, 0x4($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X4);
    // 0x80042B84: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80042B88: lh          $v0, -0x72D0($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X72D0);
    // 0x80042B8C: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x80042B90: j           L_80043CCC
    // 0x80042B94: subu        $a1, $v0, $v1
    ctx->r5 = SUB32(ctx->r2, ctx->r3);
        goto L_80043CCC;
    // 0x80042B94: subu        $a1, $v0, $v1
    ctx->r5 = SUB32(ctx->r2, ctx->r3);
L_80042B98:
    // 0x80042B98: subu        $a0, $t3, $a3
    ctx->r4 = SUB32(ctx->r11, ctx->r7);
    // 0x80042B9C: mult        $a0, $t8
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042BA0: mflo        $v1
    ctx->r3 = lo;
    // 0x80042BA4: nop

    // 0x80042BA8: nop

    // 0x80042BAC: div         $zero, $v1, $a2
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r6)));
    // 0x80042BB0: bne         $a2, $zero, L_80042BBC
    if (ctx->r6 != 0) {
        // 0x80042BB4: nop
    
            goto L_80042BBC;
    }
    // 0x80042BB4: nop

    // 0x80042BB8: break       7
    do_break(2147756984);
L_80042BBC:
    // 0x80042BBC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042BC0: bne         $a2, $at, L_80042BD4
    if (ctx->r6 != ctx->r1) {
        // 0x80042BC4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042BD4;
    }
    // 0x80042BC4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042BC8: bne         $v1, $at, L_80042BD4
    if (ctx->r3 != ctx->r1) {
        // 0x80042BCC: nop
    
            goto L_80042BD4;
    }
    // 0x80042BCC: nop

    // 0x80042BD0: break       6
    do_break(2147757008);
L_80042BD4:
    // 0x80042BD4: mflo        $v1
    ctx->r3 = lo;
    // 0x80042BD8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80042BDC: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x80042BE0: subu        $v0, $t3, $v0
    ctx->r2 = SUB32(ctx->r11, ctx->r2);
    // 0x80042BE4: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042BE8: mflo        $v0
    ctx->r2 = lo;
    // 0x80042BEC: nop

    // 0x80042BF0: nop

    // 0x80042BF4: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x80042BF8: bne         $a0, $zero, L_80042C04
    if (ctx->r4 != 0) {
        // 0x80042BFC: nop
    
            goto L_80042C04;
    }
    // 0x80042BFC: nop

    // 0x80042C00: break       7
    do_break(2147757056);
L_80042C04:
    // 0x80042C04: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042C08: bne         $a0, $at, L_80042C1C
    if (ctx->r4 != ctx->r1) {
        // 0x80042C0C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042C1C;
    }
    // 0x80042C0C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042C10: bne         $v0, $at, L_80042C1C
    if (ctx->r2 != ctx->r1) {
        // 0x80042C14: nop
    
            goto L_80042C1C;
    }
    // 0x80042C14: nop

    // 0x80042C18: break       6
    do_break(2147757080);
L_80042C1C:
    // 0x80042C1C: mflo        $a1
    ctx->r5 = lo;
    // 0x80042C20: nop

    // 0x80042C24: nop

    // 0x80042C28: blez        $a1, L_80042C44
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80042C2C: addu        $t0, $a3, $v1
        ctx->r8 = ADD32(ctx->r7, ctx->r3);
            goto L_80042C44;
    }
    // 0x80042C2C: addu        $t0, $a3, $v1
    ctx->r8 = ADD32(ctx->r7, ctx->r3);
    // 0x80042C30: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80042C34: addiu       $v1, $v1, -0x3FA8
    ctx->r3 = ADD32(ctx->r3, -0X3FA8);
    // 0x80042C38: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80042C3C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80042C40: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_80042C44:
    // 0x80042C44: lh          $v1, 0x4($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X4);
    // 0x80042C48: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80042C4C: lh          $v0, -0x3FA8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3FA8);
    // 0x80042C50: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x80042C54: j           L_80043CCC
    // 0x80042C58: subu        $a1, $v1, $v0
    ctx->r5 = SUB32(ctx->r3, ctx->r2);
        goto L_80043CCC;
    // 0x80042C58: subu        $a1, $v1, $v0
    ctx->r5 = SUB32(ctx->r3, ctx->r2);
L_80042C5C:
    // 0x80042C5C: subu        $a0, $t3, $a3
    ctx->r4 = SUB32(ctx->r11, ctx->r7);
    // 0x80042C60: mult        $a0, $t9
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r25)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042C64: mflo        $v1
    ctx->r3 = lo;
    // 0x80042C68: nop

    // 0x80042C6C: nop

    // 0x80042C70: div         $zero, $v1, $a2
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r6)));
    // 0x80042C74: bne         $a2, $zero, L_80042C80
    if (ctx->r6 != 0) {
        // 0x80042C78: nop
    
            goto L_80042C80;
    }
    // 0x80042C78: nop

    // 0x80042C7C: break       7
    do_break(2147757180);
L_80042C80:
    // 0x80042C80: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042C84: bne         $a2, $at, L_80042C98
    if (ctx->r6 != ctx->r1) {
        // 0x80042C88: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042C98;
    }
    // 0x80042C88: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042C8C: bne         $v1, $at, L_80042C98
    if (ctx->r3 != ctx->r1) {
        // 0x80042C90: nop
    
            goto L_80042C98;
    }
    // 0x80042C90: nop

    // 0x80042C94: break       6
    do_break(2147757204);
L_80042C98:
    // 0x80042C98: mflo        $v1
    ctx->r3 = lo;
    // 0x80042C9C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80042CA0: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x80042CA4: subu        $v0, $t3, $v0
    ctx->r2 = SUB32(ctx->r11, ctx->r2);
    // 0x80042CA8: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042CAC: mflo        $v0
    ctx->r2 = lo;
    // 0x80042CB0: nop

    // 0x80042CB4: nop

    // 0x80042CB8: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x80042CBC: bne         $a0, $zero, L_80042CC8
    if (ctx->r4 != 0) {
        // 0x80042CC0: nop
    
            goto L_80042CC8;
    }
    // 0x80042CC0: nop

    // 0x80042CC4: break       7
    do_break(2147757252);
L_80042CC8:
    // 0x80042CC8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042CCC: bne         $a0, $at, L_80042CE0
    if (ctx->r4 != ctx->r1) {
        // 0x80042CD0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042CE0;
    }
    // 0x80042CD0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042CD4: bne         $v0, $at, L_80042CE0
    if (ctx->r2 != ctx->r1) {
        // 0x80042CD8: nop
    
            goto L_80042CE0;
    }
    // 0x80042CD8: nop

    // 0x80042CDC: break       6
    do_break(2147757276);
L_80042CE0:
    // 0x80042CE0: mflo        $a1
    ctx->r5 = lo;
    // 0x80042CE4: nop

    // 0x80042CE8: nop

    // 0x80042CEC: blez        $a1, L_80042D08
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80042CF0: addu        $t0, $a3, $v1
        ctx->r8 = ADD32(ctx->r7, ctx->r3);
            goto L_80042D08;
    }
    // 0x80042CF0: addu        $t0, $a3, $v1
    ctx->r8 = ADD32(ctx->r7, ctx->r3);
    // 0x80042CF4: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80042CF8: addiu       $v1, $v1, -0x72CC
    ctx->r3 = ADD32(ctx->r3, -0X72CC);
    // 0x80042CFC: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80042D00: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80042D04: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_80042D08:
    // 0x80042D08: lh          $v1, 0x4($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X4);
    // 0x80042D0C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80042D10: lh          $v0, -0x72CC($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X72CC);
    // 0x80042D14: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x80042D18: j           L_80043CCC
    // 0x80042D1C: addu        $a1, $v1, $v0
    ctx->r5 = ADD32(ctx->r3, ctx->r2);
        goto L_80043CCC;
    // 0x80042D1C: addu        $a1, $v1, $v0
    ctx->r5 = ADD32(ctx->r3, ctx->r2);
L_80042D20:
    // 0x80042D20: subu        $v1, $t6, $t4
    ctx->r3 = SUB32(ctx->r14, ctx->r12);
    // 0x80042D24: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042D28: mflo        $v1
    ctx->r3 = lo;
    // 0x80042D2C: nop

    // 0x80042D30: nop

    // 0x80042D34: div         $zero, $v1, $t2
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r10))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r10)));
    // 0x80042D38: bne         $t2, $zero, L_80042D44
    if (ctx->r10 != 0) {
        // 0x80042D3C: nop
    
            goto L_80042D44;
    }
    // 0x80042D3C: nop

    // 0x80042D40: break       7
    do_break(2147757376);
L_80042D44:
    // 0x80042D44: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042D48: bne         $t2, $at, L_80042D5C
    if (ctx->r10 != ctx->r1) {
        // 0x80042D4C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042D5C;
    }
    // 0x80042D4C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042D50: bne         $v1, $at, L_80042D5C
    if (ctx->r3 != ctx->r1) {
        // 0x80042D54: nop
    
            goto L_80042D5C;
    }
    // 0x80042D54: nop

    // 0x80042D58: break       6
    do_break(2147757400);
L_80042D5C:
    // 0x80042D5C: mflo        $v1
    ctx->r3 = lo;
    // 0x80042D60: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80042D64: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x80042D68: subu        $v0, $t3, $v0
    ctx->r2 = SUB32(ctx->r11, ctx->r2);
    // 0x80042D6C: mult        $t2, $v0
    result = S64(S32(ctx->r10)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042D70: mflo        $v0
    ctx->r2 = lo;
    // 0x80042D74: nop

    // 0x80042D78: nop

    // 0x80042D7C: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x80042D80: bne         $a0, $zero, L_80042D8C
    if (ctx->r4 != 0) {
        // 0x80042D84: nop
    
            goto L_80042D8C;
    }
    // 0x80042D84: nop

    // 0x80042D88: break       7
    do_break(2147757448);
L_80042D8C:
    // 0x80042D8C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042D90: bne         $a0, $at, L_80042DA4
    if (ctx->r4 != ctx->r1) {
        // 0x80042D94: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042DA4;
    }
    // 0x80042D94: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042D98: bne         $v0, $at, L_80042DA4
    if (ctx->r2 != ctx->r1) {
        // 0x80042D9C: nop
    
            goto L_80042DA4;
    }
    // 0x80042D9C: nop

    // 0x80042DA0: break       6
    do_break(2147757472);
L_80042DA4:
    // 0x80042DA4: mflo        $a1
    ctx->r5 = lo;
    // 0x80042DA8: nop

    // 0x80042DAC: nop

    // 0x80042DB0: blez        $a1, L_80042DCC
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80042DB4: addu        $t0, $a3, $v1
        ctx->r8 = ADD32(ctx->r7, ctx->r3);
            goto L_80042DCC;
    }
    // 0x80042DB4: addu        $t0, $a3, $v1
    ctx->r8 = ADD32(ctx->r7, ctx->r3);
    // 0x80042DB8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80042DBC: addiu       $v1, $v1, -0x3FAC
    ctx->r3 = ADD32(ctx->r3, -0X3FAC);
    // 0x80042DC0: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80042DC4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80042DC8: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_80042DCC:
    // 0x80042DCC: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x80042DD0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80042DD4: lh          $v0, -0x3FAC($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3FAC);
    // 0x80042DD8: addiu       $t1, $zero, 0x10
    ctx->r9 = ADD32(0, 0X10);
    // 0x80042DDC: j           L_80043CCC
    // 0x80042DE0: subu        $a1, $v1, $v0
    ctx->r5 = SUB32(ctx->r3, ctx->r2);
        goto L_80043CCC;
    // 0x80042DE0: subu        $a1, $v1, $v0
    ctx->r5 = SUB32(ctx->r3, ctx->r2);
L_80042DE4:
    // 0x80042DE4: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80042DE8: lh          $v1, -0x26B0($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X26B0);
    // 0x80042DEC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80042DF0: lh          $a0, -0x26B2($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X26B2);
    // 0x80042DF4: subu        $v0, $t3, $a3
    ctx->r2 = SUB32(ctx->r11, ctx->r7);
    // 0x80042DF8: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80042DFC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042E00: mflo        $v0
    ctx->r2 = lo;
    // 0x80042E04: subu        $a0, $t8, $t4
    ctx->r4 = SUB32(ctx->r24, ctx->r12);
    // 0x80042E08: nop

    // 0x80042E0C: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x80042E10: bne         $a0, $zero, L_80042E1C
    if (ctx->r4 != 0) {
        // 0x80042E14: nop
    
            goto L_80042E1C;
    }
    // 0x80042E14: nop

    // 0x80042E18: break       7
    do_break(2147757592);
L_80042E1C:
    // 0x80042E1C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042E20: bne         $a0, $at, L_80042E34
    if (ctx->r4 != ctx->r1) {
        // 0x80042E24: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042E34;
    }
    // 0x80042E24: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042E28: bne         $v0, $at, L_80042E34
    if (ctx->r2 != ctx->r1) {
        // 0x80042E2C: nop
    
            goto L_80042E34;
    }
    // 0x80042E2C: nop

    // 0x80042E30: break       6
    do_break(2147757616);
L_80042E34:
    // 0x80042E34: mflo        $v0
    ctx->r2 = lo;
    // 0x80042E38: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80042E3C: lh          $v1, -0x7154($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7154);
    // 0x80042E40: j           L_80042F70
    // 0x80042E44: subu        $v1, $t8, $v1
    ctx->r3 = SUB32(ctx->r24, ctx->r3);
        goto L_80042F70;
    // 0x80042E44: subu        $v1, $t8, $v1
    ctx->r3 = SUB32(ctx->r24, ctx->r3);
L_80042E48:
    // 0x80042E48: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80042E4C: lh          $v1, -0x26B0($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X26B0);
    // 0x80042E50: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80042E54: lh          $a0, -0x26B2($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X26B2);
    // 0x80042E58: subu        $v0, $t3, $a3
    ctx->r2 = SUB32(ctx->r11, ctx->r7);
    // 0x80042E5C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80042E60: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042E64: mflo        $v0
    ctx->r2 = lo;
    // 0x80042E68: subu        $a0, $t8, $t4
    ctx->r4 = SUB32(ctx->r24, ctx->r12);
    // 0x80042E6C: nop

    // 0x80042E70: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x80042E74: bne         $a0, $zero, L_80042E80
    if (ctx->r4 != 0) {
        // 0x80042E78: nop
    
            goto L_80042E80;
    }
    // 0x80042E78: nop

    // 0x80042E7C: break       7
    do_break(2147757692);
L_80042E80:
    // 0x80042E80: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042E84: bne         $a0, $at, L_80042E98
    if (ctx->r4 != ctx->r1) {
        // 0x80042E88: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042E98;
    }
    // 0x80042E88: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042E8C: bne         $v0, $at, L_80042E98
    if (ctx->r2 != ctx->r1) {
        // 0x80042E90: nop
    
            goto L_80042E98;
    }
    // 0x80042E90: nop

    // 0x80042E94: break       6
    do_break(2147757716);
L_80042E98:
    // 0x80042E98: mflo        $v0
    ctx->r2 = lo;
    // 0x80042E9C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80042EA0: lh          $v1, -0x7154($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7154);
    // 0x80042EA4: j           L_80042F70
    // 0x80042EA8: subu        $v1, $v1, $t4
    ctx->r3 = SUB32(ctx->r3, ctx->r12);
        goto L_80042F70;
    // 0x80042EA8: subu        $v1, $v1, $t4
    ctx->r3 = SUB32(ctx->r3, ctx->r12);
L_80042EAC:
    // 0x80042EAC: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80042EB0: lh          $v1, -0x26B4($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X26B4);
    // 0x80042EB4: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80042EB8: lh          $a0, -0x26B6($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X26B6);
    // 0x80042EBC: subu        $v0, $t3, $a3
    ctx->r2 = SUB32(ctx->r11, ctx->r7);
    // 0x80042EC0: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80042EC4: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042EC8: mflo        $v0
    ctx->r2 = lo;
    // 0x80042ECC: subu        $a0, $t6, $t5
    ctx->r4 = SUB32(ctx->r14, ctx->r13);
    // 0x80042ED0: nop

    // 0x80042ED4: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x80042ED8: bne         $a0, $zero, L_80042EE4
    if (ctx->r4 != 0) {
        // 0x80042EDC: nop
    
            goto L_80042EE4;
    }
    // 0x80042EDC: nop

    // 0x80042EE0: break       7
    do_break(2147757792);
L_80042EE4:
    // 0x80042EE4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042EE8: bne         $a0, $at, L_80042EFC
    if (ctx->r4 != ctx->r1) {
        // 0x80042EEC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042EFC;
    }
    // 0x80042EEC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042EF0: bne         $v0, $at, L_80042EFC
    if (ctx->r2 != ctx->r1) {
        // 0x80042EF4: nop
    
            goto L_80042EFC;
    }
    // 0x80042EF4: nop

    // 0x80042EF8: break       6
    do_break(2147757816);
L_80042EFC:
    // 0x80042EFC: mflo        $v0
    ctx->r2 = lo;
    // 0x80042F00: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80042F04: lh          $v1, -0x7158($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7158);
    // 0x80042F08: j           L_80042F70
    // 0x80042F0C: subu        $v1, $v1, $t5
    ctx->r3 = SUB32(ctx->r3, ctx->r13);
        goto L_80042F70;
    // 0x80042F0C: subu        $v1, $v1, $t5
    ctx->r3 = SUB32(ctx->r3, ctx->r13);
L_80042F10:
    // 0x80042F10: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x80042F14: lh          $v1, -0x26B4($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X26B4);
    // 0x80042F18: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80042F1C: lh          $a0, -0x26B6($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X26B6);
    // 0x80042F20: subu        $v0, $t3, $a3
    ctx->r2 = SUB32(ctx->r11, ctx->r7);
    // 0x80042F24: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80042F28: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042F2C: mflo        $v0
    ctx->r2 = lo;
    // 0x80042F30: subu        $a0, $t6, $t5
    ctx->r4 = SUB32(ctx->r14, ctx->r13);
    // 0x80042F34: nop

    // 0x80042F38: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x80042F3C: bne         $a0, $zero, L_80042F48
    if (ctx->r4 != 0) {
        // 0x80042F40: nop
    
            goto L_80042F48;
    }
    // 0x80042F40: nop

    // 0x80042F44: break       7
    do_break(2147757892);
L_80042F48:
    // 0x80042F48: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042F4C: bne         $a0, $at, L_80042F60
    if (ctx->r4 != ctx->r1) {
        // 0x80042F50: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042F60;
    }
    // 0x80042F50: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042F54: bne         $v0, $at, L_80042F60
    if (ctx->r2 != ctx->r1) {
        // 0x80042F58: nop
    
            goto L_80042F60;
    }
    // 0x80042F58: nop

    // 0x80042F5C: break       6
    do_break(2147757916);
L_80042F60:
    // 0x80042F60: mflo        $v0
    ctx->r2 = lo;
    // 0x80042F64: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80042F68: lh          $v1, -0x7158($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7158);
    // 0x80042F6C: subu        $v1, $t6, $v1
    ctx->r3 = SUB32(ctx->r14, ctx->r3);
L_80042F70:
    // 0x80042F70: addu        $a3, $a3, $v0
    ctx->r7 = ADD32(ctx->r7, ctx->r2);
    // 0x80042F74: subu        $v0, $t3, $a3
    ctx->r2 = SUB32(ctx->r11, ctx->r7);
    // 0x80042F78: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80042F7C: mflo        $v0
    ctx->r2 = lo;
    // 0x80042F80: nop

    // 0x80042F84: nop

    // 0x80042F88: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x80042F8C: bne         $a0, $zero, L_80042F98
    if (ctx->r4 != 0) {
        // 0x80042F90: nop
    
            goto L_80042F98;
    }
    // 0x80042F90: nop

    // 0x80042F94: break       7
    do_break(2147757972);
L_80042F98:
    // 0x80042F98: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80042F9C: bne         $a0, $at, L_80042FB0
    if (ctx->r4 != ctx->r1) {
        // 0x80042FA0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80042FB0;
    }
    // 0x80042FA0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80042FA4: bne         $v0, $at, L_80042FB0
    if (ctx->r2 != ctx->r1) {
        // 0x80042FA8: nop
    
            goto L_80042FB0;
    }
    // 0x80042FA8: nop

    // 0x80042FAC: break       6
    do_break(2147757996);
L_80042FB0:
    // 0x80042FB0: mflo        $v0
    ctx->r2 = lo;
    // 0x80042FB4: addu        $t0, $a3, $v0
    ctx->r8 = ADD32(ctx->r7, ctx->r2);
    // 0x80042FB8: slt         $v0, $t3, $t0
    ctx->r2 = SIGNED(ctx->r11) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80042FBC: bnel        $v0, $zero, L_80043DA4
    if (ctx->r2 != 0) {
        // 0x80042FC0: addu        $t0, $t3, $zero
        ctx->r8 = ADD32(ctx->r11, 0);
            goto L_80043DA4;
    }
    goto skip_8;
    // 0x80042FC0: addu        $t0, $t3, $zero
    ctx->r8 = ADD32(ctx->r11, 0);
    skip_8:
    // 0x80042FC4: j           L_80043DA4
    // 0x80042FC8: nop

        goto L_80043DA4;
    // 0x80042FC8: nop

L_80042FCC:
    // 0x80042FCC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80042FD0: lb          $v0, 0x296($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X296);
    // 0x80042FD4: bne         $v0, $zero, L_80043008
    if (ctx->r2 != 0) {
        // 0x80042FD8: nop
    
            goto L_80043008;
    }
    // 0x80042FD8: nop

    // 0x80042FDC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80042FE0: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x80042FE4: andi        $v0, $v0, 0x9
    ctx->r2 = ctx->r2 & 0X9;
    // 0x80042FE8: beq         $v0, $zero, L_80043008
    if (ctx->r2 == 0) {
        // 0x80042FEC: nop
    
            goto L_80043008;
    }
    // 0x80042FEC: nop

    // 0x80042FF0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80042FF4: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x80042FF8: subu        $v0, $v0, $t7
    ctx->r2 = SUB32(ctx->r2, ctx->r15);
    // 0x80042FFC: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80043000: bne         $v0, $zero, L_80043C30
    if (ctx->r2 != 0) {
        // 0x80043004: nop
    
            goto L_80043C30;
    }
    // 0x80043004: nop

L_80043008:
    // 0x80043008: lui         $s4, 0x801C
    ctx->r20 = S32(0X801C << 16);
    // 0x8004300C: addiu       $s4, $s4, -0x3FA8
    ctx->r20 = ADD32(ctx->r20, -0X3FA8);
    // 0x80043010: lui         $s3, 0x801E
    ctx->r19 = S32(0X801E << 16);
    // 0x80043014: addiu       $s3, $s3, -0x72D0
    ctx->r19 = ADD32(ctx->r19, -0X72D0);
    // 0x80043018: lh          $v1, 0x0($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X0);
    // 0x8004301C: lui         $t1, 0x801E
    ctx->r9 = S32(0X801E << 16);
    // 0x80043020: lh          $t1, -0x7158($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X7158);
    // 0x80043024: lh          $v0, 0x0($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X0);
    // 0x80043028: lui         $t0, 0x801E
    ctx->r8 = S32(0X801E << 16);
    // 0x8004302C: lh          $t0, -0x7154($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X7154);
    // 0x80043030: subu        $a1, $v1, $t1
    ctx->r5 = SUB32(ctx->r3, ctx->r9);
    // 0x80043034: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80043038: subu        $a0, $t0, $v0
    ctx->r4 = SUB32(ctx->r8, ctx->r2);
    // 0x8004303C: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80043040: beq         $v0, $zero, L_8004304C
    if (ctx->r2 == 0) {
        // 0x80043044: addu        $t2, $v1, $zero
        ctx->r10 = ADD32(ctx->r3, 0);
            goto L_8004304C;
    }
    // 0x80043044: addu        $t2, $v1, $zero
    ctx->r10 = ADD32(ctx->r3, 0);
    // 0x80043048: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_8004304C:
    // 0x8004304C: subu        $a2, $t3, $a3
    ctx->r6 = SUB32(ctx->r11, ctx->r7);
    // 0x80043050: subu        $v0, $t1, $t5
    ctx->r2 = SUB32(ctx->r9, ctx->r13);
    // 0x80043054: subu        $v1, $t8, $t0
    ctx->r3 = SUB32(ctx->r24, ctx->r8);
    // 0x80043058: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004305C: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80043060: mflo        $v0
    ctx->r2 = lo;
    // 0x80043064: subu        $a0, $t6, $t5
    ctx->r4 = SUB32(ctx->r14, ctx->r13);
    // 0x80043068: nop

    // 0x8004306C: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x80043070: bne         $a0, $zero, L_8004307C
    if (ctx->r4 != 0) {
        // 0x80043074: nop
    
            goto L_8004307C;
    }
    // 0x80043074: nop

    // 0x80043078: break       7
    do_break(2147758200);
L_8004307C:
    // 0x8004307C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80043080: bne         $a0, $at, L_80043094
    if (ctx->r4 != ctx->r1) {
        // 0x80043084: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80043094;
    }
    // 0x80043084: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80043088: bne         $v0, $at, L_80043094
    if (ctx->r2 != ctx->r1) {
        // 0x8004308C: nop
    
            goto L_80043094;
    }
    // 0x8004308C: nop

    // 0x80043090: break       6
    do_break(2147758224);
L_80043094:
    // 0x80043094: mflo        $v0
    ctx->r2 = lo;
    // 0x80043098: andi        $v1, $t9, 0xFFFF
    ctx->r3 = ctx->r25 & 0XFFFF;
    // 0x8004309C: addu        $t0, $a3, $v0
    ctx->r8 = ADD32(ctx->r7, ctx->r2);
    // 0x800430A0: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x800430A4: beql        $v1, $v0, L_80043CCC
    if (ctx->r3 == ctx->r2) {
        // 0x800430A8: addiu       $t1, $zero, 0x30
        ctx->r9 = ADD32(0, 0X30);
            goto L_80043CCC;
    }
    goto skip_9;
    // 0x800430A8: addiu       $t1, $zero, 0x30
    ctx->r9 = ADD32(0, 0X30);
    skip_9:
    // 0x800430AC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800430B0: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x800430B4: subu        $v1, $t3, $v0
    ctx->r3 = SUB32(ctx->r11, ctx->r2);
    // 0x800430B8: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800430BC: mflo        $v0
    ctx->r2 = lo;
    // 0x800430C0: nop

    // 0x800430C4: nop

    // 0x800430C8: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x800430CC: bne         $a2, $zero, L_800430D8
    if (ctx->r6 != 0) {
        // 0x800430D0: nop
    
            goto L_800430D8;
    }
    // 0x800430D0: nop

    // 0x800430D4: break       7
    do_break(2147758292);
L_800430D8:
    // 0x800430D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800430DC: bne         $a2, $at, L_800430F0
    if (ctx->r6 != ctx->r1) {
        // 0x800430E0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800430F0;
    }
    // 0x800430E0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800430E4: bne         $v0, $at, L_800430F0
    if (ctx->r2 != ctx->r1) {
        // 0x800430E8: nop
    
            goto L_800430F0;
    }
    // 0x800430E8: nop

    // 0x800430EC: break       6
    do_break(2147758316);
L_800430F0:
    // 0x800430F0: mflo        $a0
    ctx->r4 = lo;
    // 0x800430F4: nop

    // 0x800430F8: nop

    // 0x800430FC: blez        $a0, L_80043108
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80043100: subu        $v0, $t2, $a0
        ctx->r2 = SUB32(ctx->r10, ctx->r4);
            goto L_80043108;
    }
    // 0x80043100: subu        $v0, $t2, $a0
    ctx->r2 = SUB32(ctx->r10, ctx->r4);
    // 0x80043104: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
L_80043108:
    // 0x80043108: subu        $v0, $t8, $t4
    ctx->r2 = SUB32(ctx->r24, ctx->r12);
    // 0x8004310C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80043110: mflo        $v0
    ctx->r2 = lo;
    // 0x80043114: nop

    // 0x80043118: nop

    // 0x8004311C: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x80043120: bne         $a2, $zero, L_8004312C
    if (ctx->r6 != 0) {
        // 0x80043124: nop
    
            goto L_8004312C;
    }
    // 0x80043124: nop

    // 0x80043128: break       7
    do_break(2147758376);
L_8004312C:
    // 0x8004312C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80043130: bne         $a2, $at, L_80043144
    if (ctx->r6 != ctx->r1) {
        // 0x80043134: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80043144;
    }
    // 0x80043134: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80043138: bne         $v0, $at, L_80043144
    if (ctx->r2 != ctx->r1) {
        // 0x8004313C: nop
    
            goto L_80043144;
    }
    // 0x8004313C: nop

    // 0x80043140: break       6
    do_break(2147758400);
L_80043144:
    // 0x80043144: mflo        $a0
    ctx->r4 = lo;
    // 0x80043148: nop

    // 0x8004314C: nop

    // 0x80043150: blez        $a0, L_80043C28
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80043154: addu        $v0, $s1, $a0
        ctx->r2 = ADD32(ctx->r17, ctx->r4);
            goto L_80043C28;
    }
    // 0x80043154: addu        $v0, $s1, $a0
    ctx->r2 = ADD32(ctx->r17, ctx->r4);
    // 0x80043158: j           L_80043C28
    // 0x8004315C: sh          $v0, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r2;
        goto L_80043C28;
    // 0x8004315C: sh          $v0, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r2;
L_80043160:
    // 0x80043160: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80043164: lb          $v0, 0x296($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X296);
    // 0x80043168: bne         $v0, $zero, L_8004319C
    if (ctx->r2 != 0) {
        // 0x8004316C: nop
    
            goto L_8004319C;
    }
    // 0x8004316C: nop

    // 0x80043170: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80043174: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x80043178: andi        $v0, $v0, 0x6
    ctx->r2 = ctx->r2 & 0X6;
    // 0x8004317C: beq         $v0, $zero, L_8004319C
    if (ctx->r2 == 0) {
        // 0x80043180: nop
    
            goto L_8004319C;
    }
    // 0x80043180: nop

    // 0x80043184: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80043188: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x8004318C: subu        $v0, $v0, $t7
    ctx->r2 = SUB32(ctx->r2, ctx->r15);
    // 0x80043190: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80043194: bne         $v0, $zero, L_80043C30
    if (ctx->r2 != 0) {
        // 0x80043198: nop
    
            goto L_80043C30;
    }
    // 0x80043198: nop

L_8004319C:
    // 0x8004319C: lui         $s3, 0x801C
    ctx->r19 = S32(0X801C << 16);
    // 0x800431A0: addiu       $s3, $s3, -0x3FA8
    ctx->r19 = ADD32(ctx->r19, -0X3FA8);
    // 0x800431A4: lui         $s1, 0x801E
    ctx->r17 = S32(0X801E << 16);
    // 0x800431A8: addiu       $s1, $s1, -0x72D0
    ctx->r17 = ADD32(ctx->r17, -0X72D0);
    // 0x800431AC: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x800431B0: lui         $t1, 0x801E
    ctx->r9 = S32(0X801E << 16);
    // 0x800431B4: lh          $t1, -0x7158($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X7158);
    // 0x800431B8: lh          $v0, 0x0($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X0);
    // 0x800431BC: lui         $t0, 0x801E
    ctx->r8 = S32(0X801E << 16);
    // 0x800431C0: lh          $t0, -0x7154($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X7154);
    // 0x800431C4: subu        $a1, $v1, $t1
    ctx->r5 = SUB32(ctx->r3, ctx->r9);
    // 0x800431C8: addu        $t9, $v0, $zero
    ctx->r25 = ADD32(ctx->r2, 0);
    // 0x800431CC: subu        $a0, $t0, $v0
    ctx->r4 = SUB32(ctx->r8, ctx->r2);
    // 0x800431D0: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800431D4: beq         $v0, $zero, L_800431E0
    if (ctx->r2 == 0) {
        // 0x800431D8: addu        $t2, $v1, $zero
        ctx->r10 = ADD32(ctx->r3, 0);
            goto L_800431E0;
    }
    // 0x800431D8: addu        $t2, $v1, $zero
    ctx->r10 = ADD32(ctx->r3, 0);
    // 0x800431DC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_800431E0:
    // 0x800431E0: subu        $a2, $t3, $a3
    ctx->r6 = SUB32(ctx->r11, ctx->r7);
    // 0x800431E4: subu        $v1, $t1, $t5
    ctx->r3 = SUB32(ctx->r9, ctx->r13);
    // 0x800431E8: subu        $v0, $t8, $t0
    ctx->r2 = SUB32(ctx->r24, ctx->r8);
    // 0x800431EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800431F0: mult        $a2, $v1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800431F4: mflo        $v1
    ctx->r3 = lo;
    // 0x800431F8: subu        $v0, $t6, $t5
    ctx->r2 = SUB32(ctx->r14, ctx->r13);
    // 0x800431FC: nop

    // 0x80043200: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x80043204: bne         $v0, $zero, L_80043210
    if (ctx->r2 != 0) {
        // 0x80043208: nop
    
            goto L_80043210;
    }
    // 0x80043208: nop

    // 0x8004320C: break       7
    do_break(2147758604);
L_80043210:
    // 0x80043210: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80043214: bne         $v0, $at, L_80043228
    if (ctx->r2 != ctx->r1) {
        // 0x80043218: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80043228;
    }
    // 0x80043218: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004321C: bne         $v1, $at, L_80043228
    if (ctx->r3 != ctx->r1) {
        // 0x80043220: nop
    
            goto L_80043228;
    }
    // 0x80043220: nop

    // 0x80043224: break       6
    do_break(2147758628);
L_80043228:
    // 0x80043228: mflo        $v1
    ctx->r3 = lo;
    // 0x8004322C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80043230: lh          $a0, -0x7156($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7156);
    // 0x80043234: subu        $a3, $t3, $a0
    ctx->r7 = SUB32(ctx->r11, ctx->r4);
    // 0x80043238: mult        $v0, $a3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004323C: mflo        $v0
    ctx->r2 = lo;
    // 0x80043240: nop

    // 0x80043244: nop

    // 0x80043248: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x8004324C: bne         $a2, $zero, L_80043258
    if (ctx->r6 != 0) {
        // 0x80043250: nop
    
            goto L_80043258;
    }
    // 0x80043250: nop

    // 0x80043254: break       7
    do_break(2147758676);
L_80043258:
    // 0x80043258: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004325C: bne         $a2, $at, L_80043270
    if (ctx->r6 != ctx->r1) {
        // 0x80043260: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80043270;
    }
    // 0x80043260: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80043264: bne         $v0, $at, L_80043270
    if (ctx->r2 != ctx->r1) {
        // 0x80043268: nop
    
            goto L_80043270;
    }
    // 0x80043268: nop

    // 0x8004326C: break       6
    do_break(2147758700);
L_80043270:
    // 0x80043270: mflo        $a0
    ctx->r4 = lo;
    // 0x80043274: nop

    // 0x80043278: nop

    // 0x8004327C: blez        $a0, L_8004328C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80043280: subu        $t0, $t3, $v1
        ctx->r8 = SUB32(ctx->r11, ctx->r3);
            goto L_8004328C;
    }
    // 0x80043280: subu        $t0, $t3, $v1
    ctx->r8 = SUB32(ctx->r11, ctx->r3);
    // 0x80043284: subu        $v0, $t2, $a0
    ctx->r2 = SUB32(ctx->r10, ctx->r4);
    // 0x80043288: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8004328C:
    // 0x8004328C: subu        $v0, $t8, $t4
    ctx->r2 = SUB32(ctx->r24, ctx->r12);
    // 0x80043290: mult        $v0, $a3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80043294: mflo        $v0
    ctx->r2 = lo;
    // 0x80043298: nop

    // 0x8004329C: nop

    // 0x800432A0: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x800432A4: bne         $a2, $zero, L_800432B0
    if (ctx->r6 != 0) {
        // 0x800432A8: nop
    
            goto L_800432B0;
    }
    // 0x800432A8: nop

    // 0x800432AC: break       7
    do_break(2147758764);
L_800432B0:
    // 0x800432B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800432B4: bne         $a2, $at, L_800432C8
    if (ctx->r6 != ctx->r1) {
        // 0x800432B8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800432C8;
    }
    // 0x800432B8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800432BC: bne         $v0, $at, L_800432C8
    if (ctx->r2 != ctx->r1) {
        // 0x800432C0: nop
    
            goto L_800432C8;
    }
    // 0x800432C0: nop

    // 0x800432C4: break       6
    do_break(2147758788);
L_800432C8:
    // 0x800432C8: mflo        $a0
    ctx->r4 = lo;
    // 0x800432CC: nop

    // 0x800432D0: nop

    // 0x800432D4: blez        $a0, L_80043C28
    if (SIGNED(ctx->r4) <= 0) {
        // 0x800432D8: addu        $v0, $t9, $a0
        ctx->r2 = ADD32(ctx->r25, ctx->r4);
            goto L_80043C28;
    }
    // 0x800432D8: addu        $v0, $t9, $a0
    ctx->r2 = ADD32(ctx->r25, ctx->r4);
    // 0x800432DC: j           L_80043C28
    // 0x800432E0: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
        goto L_80043C28;
    // 0x800432E0: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
L_800432E4:
    // 0x800432E4: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x800432E8: lb          $v0, 0x296($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X296);
    // 0x800432EC: bne         $v0, $zero, L_80043320
    if (ctx->r2 != 0) {
        // 0x800432F0: nop
    
            goto L_80043320;
    }
    // 0x800432F0: nop

    // 0x800432F4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800432F8: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x800432FC: andi        $v0, $v0, 0xA
    ctx->r2 = ctx->r2 & 0XA;
    // 0x80043300: beq         $v0, $zero, L_80043320
    if (ctx->r2 == 0) {
        // 0x80043304: nop
    
            goto L_80043320;
    }
    // 0x80043304: nop

    // 0x80043308: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8004330C: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x80043310: subu        $v0, $v0, $t7
    ctx->r2 = SUB32(ctx->r2, ctx->r15);
    // 0x80043314: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80043318: bne         $v0, $zero, L_80043C30
    if (ctx->r2 != 0) {
        // 0x8004331C: nop
    
            goto L_80043C30;
    }
    // 0x8004331C: nop

L_80043320:
    // 0x80043320: lui         $s3, 0x801C
    ctx->r19 = S32(0X801C << 16);
    // 0x80043324: addiu       $s3, $s3, -0x3FA8
    ctx->r19 = ADD32(ctx->r19, -0X3FA8);
    // 0x80043328: lui         $t1, 0x801E
    ctx->r9 = S32(0X801E << 16);
    // 0x8004332C: lh          $t1, -0x7158($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X7158);
    // 0x80043330: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80043334: lh          $v1, -0x3FAC($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X3FAC);
    // 0x80043338: lh          $v0, 0x0($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X0);
    // 0x8004333C: lui         $t0, 0x801E
    ctx->r8 = S32(0X801E << 16);
    // 0x80043340: lh          $t0, -0x7154($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X7154);
    // 0x80043344: subu        $a1, $t1, $v1
    ctx->r5 = SUB32(ctx->r9, ctx->r3);
    // 0x80043348: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8004334C: subu        $a0, $t0, $v0
    ctx->r4 = SUB32(ctx->r8, ctx->r2);
    // 0x80043350: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80043354: beq         $v0, $zero, L_80043360
    if (ctx->r2 == 0) {
        // 0x80043358: addu        $t2, $v1, $zero
        ctx->r10 = ADD32(ctx->r3, 0);
            goto L_80043360;
    }
    // 0x80043358: addu        $t2, $v1, $zero
    ctx->r10 = ADD32(ctx->r3, 0);
    // 0x8004335C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_80043360:
    // 0x80043360: subu        $a2, $t3, $a3
    ctx->r6 = SUB32(ctx->r11, ctx->r7);
    // 0x80043364: subu        $v0, $t6, $t1
    ctx->r2 = SUB32(ctx->r14, ctx->r9);
    // 0x80043368: subu        $v1, $t8, $t0
    ctx->r3 = SUB32(ctx->r24, ctx->r8);
    // 0x8004336C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80043370: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80043374: mflo        $v0
    ctx->r2 = lo;
    // 0x80043378: subu        $a0, $t6, $t5
    ctx->r4 = SUB32(ctx->r14, ctx->r13);
    // 0x8004337C: nop

    // 0x80043380: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x80043384: bne         $a0, $zero, L_80043390
    if (ctx->r4 != 0) {
        // 0x80043388: nop
    
            goto L_80043390;
    }
    // 0x80043388: nop

    // 0x8004338C: break       7
    do_break(2147758988);
L_80043390:
    // 0x80043390: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80043394: bne         $a0, $at, L_800433A8
    if (ctx->r4 != ctx->r1) {
        // 0x80043398: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800433A8;
    }
    // 0x80043398: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8004339C: bne         $v0, $at, L_800433A8
    if (ctx->r2 != ctx->r1) {
        // 0x800433A0: nop
    
            goto L_800433A8;
    }
    // 0x800433A0: nop

    // 0x800433A4: break       6
    do_break(2147759012);
L_800433A8:
    // 0x800433A8: mflo        $v0
    ctx->r2 = lo;
    // 0x800433AC: andi        $v1, $t9, 0xFFFF
    ctx->r3 = ctx->r25 & 0XFFFF;
    // 0x800433B0: addu        $t0, $a3, $v0
    ctx->r8 = ADD32(ctx->r7, ctx->r2);
    // 0x800433B4: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x800433B8: beql        $v1, $v0, L_80043CCC
    if (ctx->r3 == ctx->r2) {
        // 0x800433BC: addiu       $t1, $zero, 0x30
        ctx->r9 = ADD32(0, 0X30);
            goto L_80043CCC;
    }
    goto skip_10;
    // 0x800433BC: addiu       $t1, $zero, 0x30
    ctx->r9 = ADD32(0, 0X30);
    skip_10:
    // 0x800433C0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800433C4: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x800433C8: subu        $v1, $t3, $v0
    ctx->r3 = SUB32(ctx->r11, ctx->r2);
    // 0x800433CC: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800433D0: mflo        $v0
    ctx->r2 = lo;
    // 0x800433D4: nop

    // 0x800433D8: nop

    // 0x800433DC: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x800433E0: bne         $a2, $zero, L_800433EC
    if (ctx->r6 != 0) {
        // 0x800433E4: nop
    
            goto L_800433EC;
    }
    // 0x800433E4: nop

    // 0x800433E8: break       7
    do_break(2147759080);
L_800433EC:
    // 0x800433EC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800433F0: bne         $a2, $at, L_80043404
    if (ctx->r6 != ctx->r1) {
        // 0x800433F4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80043404;
    }
    // 0x800433F4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800433F8: bne         $v0, $at, L_80043404
    if (ctx->r2 != ctx->r1) {
        // 0x800433FC: nop
    
            goto L_80043404;
    }
    // 0x800433FC: nop

    // 0x80043400: break       6
    do_break(2147759104);
L_80043404:
    // 0x80043404: mflo        $a0
    ctx->r4 = lo;
    // 0x80043408: nop

    // 0x8004340C: nop

    // 0x80043410: blez        $a0, L_80043420
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80043414: addu        $v0, $t2, $a0
        ctx->r2 = ADD32(ctx->r10, ctx->r4);
            goto L_80043420;
    }
    // 0x80043414: addu        $v0, $t2, $a0
    ctx->r2 = ADD32(ctx->r10, ctx->r4);
    // 0x80043418: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004341C: sh          $v0, -0x3FAC($at)
    MEM_H(-0X3FAC, ctx->r1) = ctx->r2;
L_80043420:
    // 0x80043420: subu        $v0, $t8, $t4
    ctx->r2 = SUB32(ctx->r24, ctx->r12);
    // 0x80043424: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80043428: mflo        $v0
    ctx->r2 = lo;
    // 0x8004342C: nop

    // 0x80043430: nop

    // 0x80043434: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x80043438: bne         $a2, $zero, L_80043444
    if (ctx->r6 != 0) {
        // 0x8004343C: nop
    
            goto L_80043444;
    }
    // 0x8004343C: nop

    // 0x80043440: break       7
    do_break(2147759168);
L_80043444:
    // 0x80043444: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80043448: bne         $a2, $at, L_8004345C
    if (ctx->r6 != ctx->r1) {
        // 0x8004344C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004345C;
    }
    // 0x8004344C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80043450: bne         $v0, $at, L_8004345C
    if (ctx->r2 != ctx->r1) {
        // 0x80043454: nop
    
            goto L_8004345C;
    }
    // 0x80043454: nop

    // 0x80043458: break       6
    do_break(2147759192);
L_8004345C:
    // 0x8004345C: mflo        $a0
    ctx->r4 = lo;
    // 0x80043460: nop

    // 0x80043464: nop

    // 0x80043468: blez        $a0, L_80043C28
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8004346C: addu        $v0, $s1, $a0
        ctx->r2 = ADD32(ctx->r17, ctx->r4);
            goto L_80043C28;
    }
    // 0x8004346C: addu        $v0, $s1, $a0
    ctx->r2 = ADD32(ctx->r17, ctx->r4);
    // 0x80043470: j           L_80043C28
    // 0x80043474: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
        goto L_80043C28;
    // 0x80043474: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
L_80043478:
    // 0x80043478: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8004347C: lb          $v0, 0x296($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X296);
    // 0x80043480: bne         $v0, $zero, L_800434B4
    if (ctx->r2 != 0) {
        // 0x80043484: nop
    
            goto L_800434B4;
    }
    // 0x80043484: nop

    // 0x80043488: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8004348C: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x80043490: andi        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 & 0X5;
    // 0x80043494: beq         $v0, $zero, L_800434B4
    if (ctx->r2 == 0) {
        // 0x80043498: nop
    
            goto L_800434B4;
    }
    // 0x80043498: nop

    // 0x8004349C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800434A0: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x800434A4: subu        $v0, $v0, $t7
    ctx->r2 = SUB32(ctx->r2, ctx->r15);
    // 0x800434A8: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x800434AC: bne         $v0, $zero, L_80043C30
    if (ctx->r2 != 0) {
        // 0x800434B0: nop
    
            goto L_80043C30;
    }
    // 0x800434B0: nop

L_800434B4:
    // 0x800434B4: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x800434B8: addiu       $s1, $s1, -0x3FA8
    ctx->r17 = ADD32(ctx->r17, -0X3FA8);
    // 0x800434BC: lui         $t1, 0x801E
    ctx->r9 = S32(0X801E << 16);
    // 0x800434C0: lh          $t1, -0x7158($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X7158);
    // 0x800434C4: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x800434C8: lh          $v1, -0x3FAC($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X3FAC);
    // 0x800434CC: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x800434D0: lui         $t0, 0x801E
    ctx->r8 = S32(0X801E << 16);
    // 0x800434D4: lh          $t0, -0x7154($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X7154);
    // 0x800434D8: subu        $a1, $t1, $v1
    ctx->r5 = SUB32(ctx->r9, ctx->r3);
    // 0x800434DC: addu        $t9, $v0, $zero
    ctx->r25 = ADD32(ctx->r2, 0);
    // 0x800434E0: subu        $a0, $t0, $v0
    ctx->r4 = SUB32(ctx->r8, ctx->r2);
    // 0x800434E4: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x800434E8: beq         $v0, $zero, L_800434F4
    if (ctx->r2 == 0) {
        // 0x800434EC: addu        $t2, $v1, $zero
        ctx->r10 = ADD32(ctx->r3, 0);
            goto L_800434F4;
    }
    // 0x800434EC: addu        $t2, $v1, $zero
    ctx->r10 = ADD32(ctx->r3, 0);
    // 0x800434F0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_800434F4:
    // 0x800434F4: subu        $a2, $t3, $a3
    ctx->r6 = SUB32(ctx->r11, ctx->r7);
    // 0x800434F8: subu        $v1, $t6, $t1
    ctx->r3 = SUB32(ctx->r14, ctx->r9);
    // 0x800434FC: subu        $v0, $t8, $t0
    ctx->r2 = SUB32(ctx->r24, ctx->r8);
    // 0x80043500: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80043504: mult        $a2, $v1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80043508: mflo        $v1
    ctx->r3 = lo;
    // 0x8004350C: subu        $v0, $t6, $t5
    ctx->r2 = SUB32(ctx->r14, ctx->r13);
    // 0x80043510: nop

    // 0x80043514: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x80043518: bne         $v0, $zero, L_80043524
    if (ctx->r2 != 0) {
        // 0x8004351C: nop
    
            goto L_80043524;
    }
    // 0x8004351C: nop

    // 0x80043520: break       7
    do_break(2147759392);
L_80043524:
    // 0x80043524: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80043528: bne         $v0, $at, L_8004353C
    if (ctx->r2 != ctx->r1) {
        // 0x8004352C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004353C;
    }
    // 0x8004352C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80043530: bne         $v1, $at, L_8004353C
    if (ctx->r3 != ctx->r1) {
        // 0x80043534: nop
    
            goto L_8004353C;
    }
    // 0x80043534: nop

    // 0x80043538: break       6
    do_break(2147759416);
L_8004353C:
    // 0x8004353C: mflo        $v1
    ctx->r3 = lo;
    // 0x80043540: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80043544: lh          $a0, -0x7156($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7156);
    // 0x80043548: subu        $a3, $t3, $a0
    ctx->r7 = SUB32(ctx->r11, ctx->r4);
    // 0x8004354C: mult        $v0, $a3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80043550: mflo        $v0
    ctx->r2 = lo;
    // 0x80043554: nop

    // 0x80043558: nop

    // 0x8004355C: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x80043560: bne         $a2, $zero, L_8004356C
    if (ctx->r6 != 0) {
        // 0x80043564: nop
    
            goto L_8004356C;
    }
    // 0x80043564: nop

    // 0x80043568: break       7
    do_break(2147759464);
L_8004356C:
    // 0x8004356C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80043570: bne         $a2, $at, L_80043584
    if (ctx->r6 != ctx->r1) {
        // 0x80043574: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80043584;
    }
    // 0x80043574: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80043578: bne         $v0, $at, L_80043584
    if (ctx->r2 != ctx->r1) {
        // 0x8004357C: nop
    
            goto L_80043584;
    }
    // 0x8004357C: nop

    // 0x80043580: break       6
    do_break(2147759488);
L_80043584:
    // 0x80043584: mflo        $a0
    ctx->r4 = lo;
    // 0x80043588: nop

    // 0x8004358C: nop

    // 0x80043590: blez        $a0, L_800435A4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80043594: subu        $t0, $t3, $v1
        ctx->r8 = SUB32(ctx->r11, ctx->r3);
            goto L_800435A4;
    }
    // 0x80043594: subu        $t0, $t3, $v1
    ctx->r8 = SUB32(ctx->r11, ctx->r3);
    // 0x80043598: addu        $v0, $t2, $a0
    ctx->r2 = ADD32(ctx->r10, ctx->r4);
    // 0x8004359C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800435A0: sh          $v0, -0x3FAC($at)
    MEM_H(-0X3FAC, ctx->r1) = ctx->r2;
L_800435A4:
    // 0x800435A4: subu        $v0, $t8, $t4
    ctx->r2 = SUB32(ctx->r24, ctx->r12);
    // 0x800435A8: mult        $v0, $a3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800435AC: mflo        $v0
    ctx->r2 = lo;
    // 0x800435B0: nop

    // 0x800435B4: nop

    // 0x800435B8: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x800435BC: bne         $a2, $zero, L_800435C8
    if (ctx->r6 != 0) {
        // 0x800435C0: nop
    
            goto L_800435C8;
    }
    // 0x800435C0: nop

    // 0x800435C4: break       7
    do_break(2147759556);
L_800435C8:
    // 0x800435C8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800435CC: bne         $a2, $at, L_800435E0
    if (ctx->r6 != ctx->r1) {
        // 0x800435D0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800435E0;
    }
    // 0x800435D0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800435D4: bne         $v0, $at, L_800435E0
    if (ctx->r2 != ctx->r1) {
        // 0x800435D8: nop
    
            goto L_800435E0;
    }
    // 0x800435D8: nop

    // 0x800435DC: break       6
    do_break(2147759580);
L_800435E0:
    // 0x800435E0: mflo        $a0
    ctx->r4 = lo;
    // 0x800435E4: nop

    // 0x800435E8: nop

    // 0x800435EC: blez        $a0, L_80043C28
    if (SIGNED(ctx->r4) <= 0) {
        // 0x800435F0: addu        $v0, $t9, $a0
        ctx->r2 = ADD32(ctx->r25, ctx->r4);
            goto L_80043C28;
    }
    // 0x800435F0: addu        $v0, $t9, $a0
    ctx->r2 = ADD32(ctx->r25, ctx->r4);
    // 0x800435F4: j           L_80043C28
    // 0x800435F8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_80043C28;
    // 0x800435F8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_800435FC:
    // 0x800435FC: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80043600: lb          $v0, 0x296($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X296);
    // 0x80043604: bne         $v0, $zero, L_80043638
    if (ctx->r2 != 0) {
        // 0x80043608: nop
    
            goto L_80043638;
    }
    // 0x80043608: nop

    // 0x8004360C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80043610: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x80043614: andi        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 & 0X5;
    // 0x80043618: beq         $v0, $zero, L_80043638
    if (ctx->r2 == 0) {
        // 0x8004361C: nop
    
            goto L_80043638;
    }
    // 0x8004361C: nop

    // 0x80043620: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80043624: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x80043628: subu        $v0, $v0, $t7
    ctx->r2 = SUB32(ctx->r2, ctx->r15);
    // 0x8004362C: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80043630: bne         $v0, $zero, L_80043C30
    if (ctx->r2 != 0) {
        // 0x80043634: nop
    
            goto L_80043C30;
    }
    // 0x80043634: nop

L_80043638:
    // 0x80043638: lui         $s3, 0x801E
    ctx->r19 = S32(0X801E << 16);
    // 0x8004363C: addiu       $s3, $s3, -0x72CC
    ctx->r19 = ADD32(ctx->r19, -0X72CC);
    // 0x80043640: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80043644: lh          $v1, -0x72D0($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X72D0);
    // 0x80043648: lui         $t1, 0x801E
    ctx->r9 = S32(0X801E << 16);
    // 0x8004364C: lh          $t1, -0x7158($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X7158);
    // 0x80043650: lh          $v0, 0x0($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X0);
    // 0x80043654: lui         $t0, 0x801E
    ctx->r8 = S32(0X801E << 16);
    // 0x80043658: lh          $t0, -0x7154($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X7154);
    // 0x8004365C: subu        $a1, $v1, $t1
    ctx->r5 = SUB32(ctx->r3, ctx->r9);
    // 0x80043660: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80043664: subu        $a0, $v0, $t0
    ctx->r4 = SUB32(ctx->r2, ctx->r8);
    // 0x80043668: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8004366C: beq         $v0, $zero, L_80043678
    if (ctx->r2 == 0) {
        // 0x80043670: addu        $t2, $v1, $zero
        ctx->r10 = ADD32(ctx->r3, 0);
            goto L_80043678;
    }
    // 0x80043670: addu        $t2, $v1, $zero
    ctx->r10 = ADD32(ctx->r3, 0);
    // 0x80043674: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_80043678:
    // 0x80043678: subu        $a2, $t3, $a3
    ctx->r6 = SUB32(ctx->r11, ctx->r7);
    // 0x8004367C: subu        $v0, $t1, $t5
    ctx->r2 = SUB32(ctx->r9, ctx->r13);
    // 0x80043680: subu        $v1, $t0, $t4
    ctx->r3 = SUB32(ctx->r8, ctx->r12);
    // 0x80043684: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80043688: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004368C: mflo        $v0
    ctx->r2 = lo;
    // 0x80043690: subu        $a0, $t6, $t5
    ctx->r4 = SUB32(ctx->r14, ctx->r13);
    // 0x80043694: nop

    // 0x80043698: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x8004369C: bne         $a0, $zero, L_800436A8
    if (ctx->r4 != 0) {
        // 0x800436A0: nop
    
            goto L_800436A8;
    }
    // 0x800436A0: nop

    // 0x800436A4: break       7
    do_break(2147759780);
L_800436A8:
    // 0x800436A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800436AC: bne         $a0, $at, L_800436C0
    if (ctx->r4 != ctx->r1) {
        // 0x800436B0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800436C0;
    }
    // 0x800436B0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800436B4: bne         $v0, $at, L_800436C0
    if (ctx->r2 != ctx->r1) {
        // 0x800436B8: nop
    
            goto L_800436C0;
    }
    // 0x800436B8: nop

    // 0x800436BC: break       6
    do_break(2147759804);
L_800436C0:
    // 0x800436C0: mflo        $v0
    ctx->r2 = lo;
    // 0x800436C4: andi        $v1, $t9, 0xFFFF
    ctx->r3 = ctx->r25 & 0XFFFF;
    // 0x800436C8: addu        $t0, $a3, $v0
    ctx->r8 = ADD32(ctx->r7, ctx->r2);
    // 0x800436CC: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x800436D0: beql        $v1, $v0, L_80043CCC
    if (ctx->r3 == ctx->r2) {
        // 0x800436D4: addiu       $t1, $zero, 0x30
        ctx->r9 = ADD32(0, 0X30);
            goto L_80043CCC;
    }
    goto skip_11;
    // 0x800436D4: addiu       $t1, $zero, 0x30
    ctx->r9 = ADD32(0, 0X30);
    skip_11:
    // 0x800436D8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800436DC: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x800436E0: subu        $v1, $t3, $v0
    ctx->r3 = SUB32(ctx->r11, ctx->r2);
    // 0x800436E4: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800436E8: mflo        $v0
    ctx->r2 = lo;
    // 0x800436EC: nop

    // 0x800436F0: nop

    // 0x800436F4: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x800436F8: bne         $a2, $zero, L_80043704
    if (ctx->r6 != 0) {
        // 0x800436FC: nop
    
            goto L_80043704;
    }
    // 0x800436FC: nop

    // 0x80043700: break       7
    do_break(2147759872);
L_80043704:
    // 0x80043704: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80043708: bne         $a2, $at, L_8004371C
    if (ctx->r6 != ctx->r1) {
        // 0x8004370C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004371C;
    }
    // 0x8004370C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80043710: bne         $v0, $at, L_8004371C
    if (ctx->r2 != ctx->r1) {
        // 0x80043714: nop
    
            goto L_8004371C;
    }
    // 0x80043714: nop

    // 0x80043718: break       6
    do_break(2147759896);
L_8004371C:
    // 0x8004371C: mflo        $a0
    ctx->r4 = lo;
    // 0x80043720: nop

    // 0x80043724: nop

    // 0x80043728: blez        $a0, L_80043738
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8004372C: subu        $v0, $t2, $a0
        ctx->r2 = SUB32(ctx->r10, ctx->r4);
            goto L_80043738;
    }
    // 0x8004372C: subu        $v0, $t2, $a0
    ctx->r2 = SUB32(ctx->r10, ctx->r4);
    // 0x80043730: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80043734: sh          $v0, -0x72D0($at)
    MEM_H(-0X72D0, ctx->r1) = ctx->r2;
L_80043738:
    // 0x80043738: subu        $v0, $t8, $t4
    ctx->r2 = SUB32(ctx->r24, ctx->r12);
    // 0x8004373C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80043740: mflo        $v0
    ctx->r2 = lo;
    // 0x80043744: nop

    // 0x80043748: nop

    // 0x8004374C: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x80043750: bne         $a2, $zero, L_8004375C
    if (ctx->r6 != 0) {
        // 0x80043754: nop
    
            goto L_8004375C;
    }
    // 0x80043754: nop

    // 0x80043758: break       7
    do_break(2147759960);
L_8004375C:
    // 0x8004375C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80043760: bne         $a2, $at, L_80043774
    if (ctx->r6 != ctx->r1) {
        // 0x80043764: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80043774;
    }
    // 0x80043764: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80043768: bne         $v0, $at, L_80043774
    if (ctx->r2 != ctx->r1) {
        // 0x8004376C: nop
    
            goto L_80043774;
    }
    // 0x8004376C: nop

    // 0x80043770: break       6
    do_break(2147759984);
L_80043774:
    // 0x80043774: mflo        $a0
    ctx->r4 = lo;
    // 0x80043778: nop

    // 0x8004377C: nop

    // 0x80043780: blez        $a0, L_80043C28
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80043784: subu        $v0, $s1, $a0
        ctx->r2 = SUB32(ctx->r17, ctx->r4);
            goto L_80043C28;
    }
    // 0x80043784: subu        $v0, $s1, $a0
    ctx->r2 = SUB32(ctx->r17, ctx->r4);
    // 0x80043788: j           L_80043C28
    // 0x8004378C: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
        goto L_80043C28;
    // 0x8004378C: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
L_80043790:
    // 0x80043790: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80043794: lb          $v0, 0x296($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X296);
    // 0x80043798: bne         $v0, $zero, L_800437CC
    if (ctx->r2 != 0) {
        // 0x8004379C: nop
    
            goto L_800437CC;
    }
    // 0x8004379C: nop

    // 0x800437A0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800437A4: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x800437A8: andi        $v0, $v0, 0xA
    ctx->r2 = ctx->r2 & 0XA;
    // 0x800437AC: beq         $v0, $zero, L_800437CC
    if (ctx->r2 == 0) {
        // 0x800437B0: nop
    
            goto L_800437CC;
    }
    // 0x800437B0: nop

    // 0x800437B4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800437B8: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x800437BC: subu        $v0, $v0, $t7
    ctx->r2 = SUB32(ctx->r2, ctx->r15);
    // 0x800437C0: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x800437C4: bne         $v0, $zero, L_80043C30
    if (ctx->r2 != 0) {
        // 0x800437C8: nop
    
            goto L_80043C30;
    }
    // 0x800437C8: nop

L_800437CC:
    // 0x800437CC: lui         $s1, 0x801E
    ctx->r17 = S32(0X801E << 16);
    // 0x800437D0: addiu       $s1, $s1, -0x72CC
    ctx->r17 = ADD32(ctx->r17, -0X72CC);
    // 0x800437D4: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x800437D8: lh          $v1, -0x72D0($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X72D0);
    // 0x800437DC: lui         $t1, 0x801E
    ctx->r9 = S32(0X801E << 16);
    // 0x800437E0: lh          $t1, -0x7158($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X7158);
    // 0x800437E4: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x800437E8: lui         $t0, 0x801E
    ctx->r8 = S32(0X801E << 16);
    // 0x800437EC: lh          $t0, -0x7154($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X7154);
    // 0x800437F0: subu        $a1, $v1, $t1
    ctx->r5 = SUB32(ctx->r3, ctx->r9);
    // 0x800437F4: addu        $t9, $v0, $zero
    ctx->r25 = ADD32(ctx->r2, 0);
    // 0x800437F8: subu        $a0, $v0, $t0
    ctx->r4 = SUB32(ctx->r2, ctx->r8);
    // 0x800437FC: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80043800: beq         $v0, $zero, L_8004380C
    if (ctx->r2 == 0) {
        // 0x80043804: addu        $t2, $v1, $zero
        ctx->r10 = ADD32(ctx->r3, 0);
            goto L_8004380C;
    }
    // 0x80043804: addu        $t2, $v1, $zero
    ctx->r10 = ADD32(ctx->r3, 0);
    // 0x80043808: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_8004380C:
    // 0x8004380C: subu        $a2, $t3, $a3
    ctx->r6 = SUB32(ctx->r11, ctx->r7);
    // 0x80043810: subu        $v1, $t1, $t5
    ctx->r3 = SUB32(ctx->r9, ctx->r13);
    // 0x80043814: subu        $v0, $t0, $t4
    ctx->r2 = SUB32(ctx->r8, ctx->r12);
    // 0x80043818: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8004381C: mult        $a2, $v1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80043820: mflo        $v1
    ctx->r3 = lo;
    // 0x80043824: subu        $v0, $t6, $t5
    ctx->r2 = SUB32(ctx->r14, ctx->r13);
    // 0x80043828: nop

    // 0x8004382C: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x80043830: bne         $v0, $zero, L_8004383C
    if (ctx->r2 != 0) {
        // 0x80043834: nop
    
            goto L_8004383C;
    }
    // 0x80043834: nop

    // 0x80043838: break       7
    do_break(2147760184);
L_8004383C:
    // 0x8004383C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80043840: bne         $v0, $at, L_80043854
    if (ctx->r2 != ctx->r1) {
        // 0x80043844: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80043854;
    }
    // 0x80043844: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80043848: bne         $v1, $at, L_80043854
    if (ctx->r3 != ctx->r1) {
        // 0x8004384C: nop
    
            goto L_80043854;
    }
    // 0x8004384C: nop

    // 0x80043850: break       6
    do_break(2147760208);
L_80043854:
    // 0x80043854: mflo        $v1
    ctx->r3 = lo;
    // 0x80043858: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x8004385C: lh          $a0, -0x7156($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7156);
    // 0x80043860: subu        $a3, $t3, $a0
    ctx->r7 = SUB32(ctx->r11, ctx->r4);
    // 0x80043864: mult        $v0, $a3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80043868: mflo        $v0
    ctx->r2 = lo;
    // 0x8004386C: nop

    // 0x80043870: nop

    // 0x80043874: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x80043878: bne         $a2, $zero, L_80043884
    if (ctx->r6 != 0) {
        // 0x8004387C: nop
    
            goto L_80043884;
    }
    // 0x8004387C: nop

    // 0x80043880: break       7
    do_break(2147760256);
L_80043884:
    // 0x80043884: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80043888: bne         $a2, $at, L_8004389C
    if (ctx->r6 != ctx->r1) {
        // 0x8004388C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8004389C;
    }
    // 0x8004388C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80043890: bne         $v0, $at, L_8004389C
    if (ctx->r2 != ctx->r1) {
        // 0x80043894: nop
    
            goto L_8004389C;
    }
    // 0x80043894: nop

    // 0x80043898: break       6
    do_break(2147760280);
L_8004389C:
    // 0x8004389C: mflo        $a0
    ctx->r4 = lo;
    // 0x800438A0: nop

    // 0x800438A4: nop

    // 0x800438A8: blez        $a0, L_800438BC
    if (SIGNED(ctx->r4) <= 0) {
        // 0x800438AC: subu        $t0, $t3, $v1
        ctx->r8 = SUB32(ctx->r11, ctx->r3);
            goto L_800438BC;
    }
    // 0x800438AC: subu        $t0, $t3, $v1
    ctx->r8 = SUB32(ctx->r11, ctx->r3);
    // 0x800438B0: subu        $v0, $t2, $a0
    ctx->r2 = SUB32(ctx->r10, ctx->r4);
    // 0x800438B4: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x800438B8: sh          $v0, -0x72D0($at)
    MEM_H(-0X72D0, ctx->r1) = ctx->r2;
L_800438BC:
    // 0x800438BC: subu        $v0, $t8, $t4
    ctx->r2 = SUB32(ctx->r24, ctx->r12);
    // 0x800438C0: mult        $v0, $a3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800438C4: mflo        $v0
    ctx->r2 = lo;
    // 0x800438C8: nop

    // 0x800438CC: nop

    // 0x800438D0: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x800438D4: bne         $a2, $zero, L_800438E0
    if (ctx->r6 != 0) {
        // 0x800438D8: nop
    
            goto L_800438E0;
    }
    // 0x800438D8: nop

    // 0x800438DC: break       7
    do_break(2147760348);
L_800438E0:
    // 0x800438E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800438E4: bne         $a2, $at, L_800438F8
    if (ctx->r6 != ctx->r1) {
        // 0x800438E8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800438F8;
    }
    // 0x800438E8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800438EC: bne         $v0, $at, L_800438F8
    if (ctx->r2 != ctx->r1) {
        // 0x800438F0: nop
    
            goto L_800438F8;
    }
    // 0x800438F0: nop

    // 0x800438F4: break       6
    do_break(2147760372);
L_800438F8:
    // 0x800438F8: mflo        $a0
    ctx->r4 = lo;
    // 0x800438FC: nop

    // 0x80043900: nop

    // 0x80043904: blez        $a0, L_80043C28
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80043908: subu        $v0, $t9, $a0
        ctx->r2 = SUB32(ctx->r25, ctx->r4);
            goto L_80043C28;
    }
    // 0x80043908: subu        $v0, $t9, $a0
    ctx->r2 = SUB32(ctx->r25, ctx->r4);
    // 0x8004390C: j           L_80043C28
    // 0x80043910: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_80043C28;
    // 0x80043910: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80043914:
    // 0x80043914: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80043918: lb          $v0, 0x296($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X296);
    // 0x8004391C: bne         $v0, $zero, L_80043950
    if (ctx->r2 != 0) {
        // 0x80043920: nop
    
            goto L_80043950;
    }
    // 0x80043920: nop

    // 0x80043924: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80043928: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x8004392C: andi        $v0, $v0, 0x6
    ctx->r2 = ctx->r2 & 0X6;
    // 0x80043930: beq         $v0, $zero, L_80043950
    if (ctx->r2 == 0) {
        // 0x80043934: nop
    
            goto L_80043950;
    }
    // 0x80043934: nop

    // 0x80043938: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8004393C: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x80043940: subu        $v0, $v0, $t7
    ctx->r2 = SUB32(ctx->r2, ctx->r15);
    // 0x80043944: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80043948: bne         $v0, $zero, L_80043C30
    if (ctx->r2 != 0) {
        // 0x8004394C: nop
    
            goto L_80043C30;
    }
    // 0x8004394C: nop

L_80043950:
    // 0x80043950: lui         $s4, 0x801E
    ctx->r20 = S32(0X801E << 16);
    // 0x80043954: addiu       $s4, $s4, -0x72CC
    ctx->r20 = ADD32(ctx->r20, -0X72CC);
    // 0x80043958: lui         $t1, 0x801E
    ctx->r9 = S32(0X801E << 16);
    // 0x8004395C: lh          $t1, -0x7158($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X7158);
    // 0x80043960: lui         $s3, 0x801C
    ctx->r19 = S32(0X801C << 16);
    // 0x80043964: addiu       $s3, $s3, -0x3FAC
    ctx->r19 = ADD32(ctx->r19, -0X3FAC);
    // 0x80043968: lh          $v1, 0x0($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X0);
    // 0x8004396C: lh          $v0, 0x0($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X0);
    // 0x80043970: lui         $t0, 0x801E
    ctx->r8 = S32(0X801E << 16);
    // 0x80043974: lh          $t0, -0x7154($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X7154);
    // 0x80043978: subu        $a1, $t1, $v1
    ctx->r5 = SUB32(ctx->r9, ctx->r3);
    // 0x8004397C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80043980: subu        $a0, $v0, $t0
    ctx->r4 = SUB32(ctx->r2, ctx->r8);
    // 0x80043984: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80043988: beq         $v0, $zero, L_80043994
    if (ctx->r2 == 0) {
        // 0x8004398C: addu        $t2, $v1, $zero
        ctx->r10 = ADD32(ctx->r3, 0);
            goto L_80043994;
    }
    // 0x8004398C: addu        $t2, $v1, $zero
    ctx->r10 = ADD32(ctx->r3, 0);
    // 0x80043990: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_80043994:
    // 0x80043994: subu        $a2, $t3, $a3
    ctx->r6 = SUB32(ctx->r11, ctx->r7);
    // 0x80043998: subu        $v0, $t6, $t1
    ctx->r2 = SUB32(ctx->r14, ctx->r9);
    // 0x8004399C: subu        $v1, $t0, $t4
    ctx->r3 = SUB32(ctx->r8, ctx->r12);
    // 0x800439A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800439A4: mult        $a2, $v0
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800439A8: mflo        $v0
    ctx->r2 = lo;
    // 0x800439AC: subu        $a0, $t6, $t5
    ctx->r4 = SUB32(ctx->r14, ctx->r13);
    // 0x800439B0: nop

    // 0x800439B4: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x800439B8: bne         $a0, $zero, L_800439C4
    if (ctx->r4 != 0) {
        // 0x800439BC: nop
    
            goto L_800439C4;
    }
    // 0x800439BC: nop

    // 0x800439C0: break       7
    do_break(2147760576);
L_800439C4:
    // 0x800439C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800439C8: bne         $a0, $at, L_800439DC
    if (ctx->r4 != ctx->r1) {
        // 0x800439CC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800439DC;
    }
    // 0x800439CC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800439D0: bne         $v0, $at, L_800439DC
    if (ctx->r2 != ctx->r1) {
        // 0x800439D4: nop
    
            goto L_800439DC;
    }
    // 0x800439D4: nop

    // 0x800439D8: break       6
    do_break(2147760600);
L_800439DC:
    // 0x800439DC: mflo        $v0
    ctx->r2 = lo;
    // 0x800439E0: andi        $v1, $t9, 0xFFFF
    ctx->r3 = ctx->r25 & 0XFFFF;
    // 0x800439E4: addu        $t0, $a3, $v0
    ctx->r8 = ADD32(ctx->r7, ctx->r2);
    // 0x800439E8: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x800439EC: beql        $v1, $v0, L_80043CCC
    if (ctx->r3 == ctx->r2) {
        // 0x800439F0: addiu       $t1, $zero, 0x30
        ctx->r9 = ADD32(0, 0X30);
            goto L_80043CCC;
    }
    goto skip_12;
    // 0x800439F0: addiu       $t1, $zero, 0x30
    ctx->r9 = ADD32(0, 0X30);
    skip_12:
    // 0x800439F4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800439F8: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x800439FC: subu        $v1, $t3, $v0
    ctx->r3 = SUB32(ctx->r11, ctx->r2);
    // 0x80043A00: mult        $a0, $v1
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80043A04: mflo        $v0
    ctx->r2 = lo;
    // 0x80043A08: nop

    // 0x80043A0C: nop

    // 0x80043A10: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x80043A14: bne         $a2, $zero, L_80043A20
    if (ctx->r6 != 0) {
        // 0x80043A18: nop
    
            goto L_80043A20;
    }
    // 0x80043A18: nop

    // 0x80043A1C: break       7
    do_break(2147760668);
L_80043A20:
    // 0x80043A20: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80043A24: bne         $a2, $at, L_80043A38
    if (ctx->r6 != ctx->r1) {
        // 0x80043A28: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80043A38;
    }
    // 0x80043A28: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80043A2C: bne         $v0, $at, L_80043A38
    if (ctx->r2 != ctx->r1) {
        // 0x80043A30: nop
    
            goto L_80043A38;
    }
    // 0x80043A30: nop

    // 0x80043A34: break       6
    do_break(2147760692);
L_80043A38:
    // 0x80043A38: mflo        $a0
    ctx->r4 = lo;
    // 0x80043A3C: nop

    // 0x80043A40: nop

    // 0x80043A44: blez        $a0, L_80043A50
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80043A48: addu        $v0, $t2, $a0
        ctx->r2 = ADD32(ctx->r10, ctx->r4);
            goto L_80043A50;
    }
    // 0x80043A48: addu        $v0, $t2, $a0
    ctx->r2 = ADD32(ctx->r10, ctx->r4);
    // 0x80043A4C: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
L_80043A50:
    // 0x80043A50: subu        $v0, $t8, $t4
    ctx->r2 = SUB32(ctx->r24, ctx->r12);
    // 0x80043A54: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80043A58: mflo        $v0
    ctx->r2 = lo;
    // 0x80043A5C: nop

    // 0x80043A60: nop

    // 0x80043A64: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x80043A68: bne         $a2, $zero, L_80043A74
    if (ctx->r6 != 0) {
        // 0x80043A6C: nop
    
            goto L_80043A74;
    }
    // 0x80043A6C: nop

    // 0x80043A70: break       7
    do_break(2147760752);
L_80043A74:
    // 0x80043A74: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80043A78: bne         $a2, $at, L_80043A8C
    if (ctx->r6 != ctx->r1) {
        // 0x80043A7C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80043A8C;
    }
    // 0x80043A7C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80043A80: bne         $v0, $at, L_80043A8C
    if (ctx->r2 != ctx->r1) {
        // 0x80043A84: nop
    
            goto L_80043A8C;
    }
    // 0x80043A84: nop

    // 0x80043A88: break       6
    do_break(2147760776);
L_80043A8C:
    // 0x80043A8C: mflo        $a0
    ctx->r4 = lo;
    // 0x80043A90: nop

    // 0x80043A94: nop

    // 0x80043A98: blez        $a0, L_80043C28
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80043A9C: subu        $v0, $s1, $a0
        ctx->r2 = SUB32(ctx->r17, ctx->r4);
            goto L_80043C28;
    }
    // 0x80043A9C: subu        $v0, $s1, $a0
    ctx->r2 = SUB32(ctx->r17, ctx->r4);
    // 0x80043AA0: j           L_80043C28
    // 0x80043AA4: sh          $v0, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r2;
        goto L_80043C28;
    // 0x80043AA4: sh          $v0, 0x0($s4)
    MEM_H(0X0, ctx->r20) = ctx->r2;
L_80043AA8:
    // 0x80043AA8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80043AAC: lb          $v0, 0x296($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X296);
    // 0x80043AB0: bne         $v0, $zero, L_80043AE4
    if (ctx->r2 != 0) {
        // 0x80043AB4: nop
    
            goto L_80043AE4;
    }
    // 0x80043AB4: nop

    // 0x80043AB8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80043ABC: lbu         $v0, -0x7818($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7818);
    // 0x80043AC0: andi        $v0, $v0, 0x9
    ctx->r2 = ctx->r2 & 0X9;
    // 0x80043AC4: beq         $v0, $zero, L_80043AE4
    if (ctx->r2 == 0) {
        // 0x80043AC8: nop
    
            goto L_80043AE4;
    }
    // 0x80043AC8: nop

    // 0x80043ACC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80043AD0: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x80043AD4: subu        $v0, $v0, $t7
    ctx->r2 = SUB32(ctx->r2, ctx->r15);
    // 0x80043AD8: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80043ADC: bne         $v0, $zero, L_80043C30
    if (ctx->r2 != 0) {
        // 0x80043AE0: nop
    
            goto L_80043C30;
    }
    // 0x80043AE0: nop

L_80043AE4:
    // 0x80043AE4: lui         $s3, 0x801E
    ctx->r19 = S32(0X801E << 16);
    // 0x80043AE8: addiu       $s3, $s3, -0x72CC
    ctx->r19 = ADD32(ctx->r19, -0X72CC);
    // 0x80043AEC: lui         $t1, 0x801E
    ctx->r9 = S32(0X801E << 16);
    // 0x80043AF0: lh          $t1, -0x7158($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X7158);
    // 0x80043AF4: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80043AF8: addiu       $s1, $s1, -0x3FAC
    ctx->r17 = ADD32(ctx->r17, -0X3FAC);
    // 0x80043AFC: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x80043B00: lh          $v0, 0x0($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X0);
    // 0x80043B04: lui         $t0, 0x801E
    ctx->r8 = S32(0X801E << 16);
    // 0x80043B08: lh          $t0, -0x7154($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X7154);
    // 0x80043B0C: subu        $a1, $t1, $v1
    ctx->r5 = SUB32(ctx->r9, ctx->r3);
    // 0x80043B10: addu        $t9, $v0, $zero
    ctx->r25 = ADD32(ctx->r2, 0);
    // 0x80043B14: subu        $a0, $v0, $t0
    ctx->r4 = SUB32(ctx->r2, ctx->r8);
    // 0x80043B18: slt         $v0, $a0, $a1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80043B1C: beq         $v0, $zero, L_80043B28
    if (ctx->r2 == 0) {
        // 0x80043B20: addu        $t2, $v1, $zero
        ctx->r10 = ADD32(ctx->r3, 0);
            goto L_80043B28;
    }
    // 0x80043B20: addu        $t2, $v1, $zero
    ctx->r10 = ADD32(ctx->r3, 0);
    // 0x80043B24: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
L_80043B28:
    // 0x80043B28: subu        $a2, $t3, $a3
    ctx->r6 = SUB32(ctx->r11, ctx->r7);
    // 0x80043B2C: subu        $v1, $t6, $t1
    ctx->r3 = SUB32(ctx->r14, ctx->r9);
    // 0x80043B30: subu        $v0, $t0, $t4
    ctx->r2 = SUB32(ctx->r8, ctx->r12);
    // 0x80043B34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80043B38: mult        $a2, $v1
    result = S64(S32(ctx->r6)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80043B3C: mflo        $v1
    ctx->r3 = lo;
    // 0x80043B40: subu        $v0, $t6, $t5
    ctx->r2 = SUB32(ctx->r14, ctx->r13);
    // 0x80043B44: nop

    // 0x80043B48: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x80043B4C: bne         $v0, $zero, L_80043B58
    if (ctx->r2 != 0) {
        // 0x80043B50: nop
    
            goto L_80043B58;
    }
    // 0x80043B50: nop

    // 0x80043B54: break       7
    do_break(2147760980);
L_80043B58:
    // 0x80043B58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80043B5C: bne         $v0, $at, L_80043B70
    if (ctx->r2 != ctx->r1) {
        // 0x80043B60: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80043B70;
    }
    // 0x80043B60: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80043B64: bne         $v1, $at, L_80043B70
    if (ctx->r3 != ctx->r1) {
        // 0x80043B68: nop
    
            goto L_80043B70;
    }
    // 0x80043B68: nop

    // 0x80043B6C: break       6
    do_break(2147761004);
L_80043B70:
    // 0x80043B70: mflo        $v1
    ctx->r3 = lo;
    // 0x80043B74: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80043B78: lh          $a0, -0x7156($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X7156);
    // 0x80043B7C: subu        $a3, $t3, $a0
    ctx->r7 = SUB32(ctx->r11, ctx->r4);
    // 0x80043B80: mult        $v0, $a3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80043B84: mflo        $v0
    ctx->r2 = lo;
    // 0x80043B88: nop

    // 0x80043B8C: nop

    // 0x80043B90: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x80043B94: bne         $a2, $zero, L_80043BA0
    if (ctx->r6 != 0) {
        // 0x80043B98: nop
    
            goto L_80043BA0;
    }
    // 0x80043B98: nop

    // 0x80043B9C: break       7
    do_break(2147761052);
L_80043BA0:
    // 0x80043BA0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80043BA4: bne         $a2, $at, L_80043BB8
    if (ctx->r6 != ctx->r1) {
        // 0x80043BA8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80043BB8;
    }
    // 0x80043BA8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80043BAC: bne         $v0, $at, L_80043BB8
    if (ctx->r2 != ctx->r1) {
        // 0x80043BB0: nop
    
            goto L_80043BB8;
    }
    // 0x80043BB0: nop

    // 0x80043BB4: break       6
    do_break(2147761076);
L_80043BB8:
    // 0x80043BB8: mflo        $a0
    ctx->r4 = lo;
    // 0x80043BBC: nop

    // 0x80043BC0: nop

    // 0x80043BC4: blez        $a0, L_80043BD4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80043BC8: subu        $t0, $t3, $v1
        ctx->r8 = SUB32(ctx->r11, ctx->r3);
            goto L_80043BD4;
    }
    // 0x80043BC8: subu        $t0, $t3, $v1
    ctx->r8 = SUB32(ctx->r11, ctx->r3);
    // 0x80043BCC: addu        $v0, $t2, $a0
    ctx->r2 = ADD32(ctx->r10, ctx->r4);
    // 0x80043BD0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80043BD4:
    // 0x80043BD4: subu        $v0, $t8, $t4
    ctx->r2 = SUB32(ctx->r24, ctx->r12);
    // 0x80043BD8: mult        $v0, $a3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80043BDC: mflo        $v0
    ctx->r2 = lo;
    // 0x80043BE0: nop

    // 0x80043BE4: nop

    // 0x80043BE8: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x80043BEC: bne         $a2, $zero, L_80043BF8
    if (ctx->r6 != 0) {
        // 0x80043BF0: nop
    
            goto L_80043BF8;
    }
    // 0x80043BF0: nop

    // 0x80043BF4: break       7
    do_break(2147761140);
L_80043BF8:
    // 0x80043BF8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80043BFC: bne         $a2, $at, L_80043C10
    if (ctx->r6 != ctx->r1) {
        // 0x80043C00: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80043C10;
    }
    // 0x80043C00: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80043C04: bne         $v0, $at, L_80043C10
    if (ctx->r2 != ctx->r1) {
        // 0x80043C08: nop
    
            goto L_80043C10;
    }
    // 0x80043C08: nop

    // 0x80043C0C: break       6
    do_break(2147761164);
L_80043C10:
    // 0x80043C10: mflo        $a0
    ctx->r4 = lo;
    // 0x80043C14: nop

    // 0x80043C18: nop

    // 0x80043C1C: blez        $a0, L_80043C28
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80043C20: subu        $v0, $t9, $a0
        ctx->r2 = SUB32(ctx->r25, ctx->r4);
            goto L_80043C28;
    }
    // 0x80043C20: subu        $v0, $t9, $a0
    ctx->r2 = SUB32(ctx->r25, ctx->r4);
    // 0x80043C24: sh          $v0, 0x0($s3)
    MEM_H(0X0, ctx->r19) = ctx->r2;
L_80043C28:
    // 0x80043C28: j           L_80043CCC
    // 0x80043C2C: addiu       $t1, $zero, 0x30
    ctx->r9 = ADD32(0, 0X30);
        goto L_80043CCC;
    // 0x80043C2C: addiu       $t1, $zero, 0x30
    ctx->r9 = ADD32(0, 0X30);
L_80043C30:
    // 0x80043C30: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x80043C34: addiu       $a1, $a1, -0x7156
    ctx->r5 = ADD32(ctx->r5, -0X7156);
    // 0x80043C38: lh          $v1, 0x0($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X0);
    // 0x80043C3C: slt         $v0, $t7, $v1
    ctx->r2 = SIGNED(ctx->r15) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80043C40: beq         $v0, $zero, L_80043DF0
    if (ctx->r2 == 0) {
        // 0x80043C44: slt         $v0, $v1, $s0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_80043DF0;
    }
    // 0x80043C44: slt         $v0, $v1, $s0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80043C48: beq         $v0, $zero, L_80043DF0
    if (ctx->r2 == 0) {
        // 0x80043C4C: addiu       $v1, $zero, 0x20
        ctx->r3 = ADD32(0, 0X20);
            goto L_80043DF0;
    }
    // 0x80043C4C: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x80043C50: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80043C54: lhu         $v0, 0x599C($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X599C);
    // 0x80043C58: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80043C5C: lhu         $a0, -0x2660($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X2660);
    // 0x80043C60: sh          $t7, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r15;
    // 0x80043C64: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80043C68: sh          $zero, 0x4980($at)
    MEM_H(0X4980, ctx->r1) = 0;
    // 0x80043C6C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80043C70: sb          $v1, -0x7818($at)
    MEM_B(-0X7818, ctx->r1) = ctx->r3;
    // 0x80043C74: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80043C78: sh          $v0, 0x5730($at)
    MEM_H(0X5730, ctx->r1) = ctx->r2;
    // 0x80043C7C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80043C80: sh          $a0, -0x6F9E($at)
    MEM_H(-0X6F9E, ctx->r1) = ctx->r4;
    // 0x80043C84: j           L_80043DF0
    // 0x80043C88: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
        goto L_80043DF0;
    // 0x80043C88: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
L_80043C8C:
    // 0x80043C8C: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80043C90: addiu       $a0, $a0, -0x7158
    ctx->r4 = ADD32(ctx->r4, -0X7158);
    // 0x80043C94: srl         $a1, $t9, 4
    ctx->r5 = S32(U32(ctx->r25) >> 4);
    // 0x80043C98: jal         0x80045890
    // 0x80043C9C: addiu       $a1, $a1, -0x2
    ctx->r5 = ADD32(ctx->r5, -0X2);
    func_80045890_20C90(rdram, ctx);
        goto after_6;
    // 0x80043C9C: addiu       $a1, $a1, -0x2
    ctx->r5 = ADD32(ctx->r5, -0X2);
    after_6:
    // 0x80043CA0: beq         $v0, $zero, L_80043DF4
    if (ctx->r2 == 0) {
        // 0x80043CA4: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_80043DF4;
    }
    // 0x80043CA4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80043CA8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80043CAC: lh          $v0, -0x35B8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X35B8);
    // 0x80043CB0: bltz        $v0, L_80043DD8
    if (SIGNED(ctx->r2) < 0) {
        // 0x80043CB4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80043DD8;
    }
    // 0x80043CB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80043CB8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80043CBC: sb          $zero, 0x296($at)
    MEM_B(0X296, ctx->r1) = 0;
    // 0x80043CC0: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80043CC4: j           L_80043DD8
    // 0x80043CC8: sb          $v0, 0x5480($at)
    MEM_B(0X5480, ctx->r1) = ctx->r2;
        goto L_80043DD8;
    // 0x80043CC8: sb          $v0, 0x5480($at)
    MEM_B(0X5480, ctx->r1) = ctx->r2;
L_80043CCC:
    // 0x80043CCC: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80043CD0: lh          $v0, -0x26AC($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X26AC);
    // 0x80043CD4: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80043CD8: addiu       $a0, $a0, -0x7156
    ctx->r4 = ADD32(ctx->r4, -0X7156);
    // 0x80043CDC: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x80043CE0: subu        $t0, $t0, $v0
    ctx->r8 = SUB32(ctx->r8, ctx->r2);
    // 0x80043CE4: slt         $v0, $t0, $v1
    ctx->r2 = SIGNED(ctx->r8) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80043CE8: beq         $v0, $zero, L_80043DF0
    if (ctx->r2 == 0) {
        // 0x80043CEC: slt         $v0, $v1, $s0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
            goto L_80043DF0;
    }
    // 0x80043CEC: slt         $v0, $v1, $s0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80043CF0: beq         $v0, $zero, L_80043DF4
    if (ctx->r2 == 0) {
        // 0x80043CF4: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_80043DF4;
    }
    // 0x80043CF4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80043CF8: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80043CFC: lb          $v0, 0x296($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X296);
    // 0x80043D00: bne         $v0, $zero, L_80043D34
    if (ctx->r2 != 0) {
        // 0x80043D04: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_80043D34;
    }
    // 0x80043D04: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80043D08: subu        $v0, $v1, $t0
    ctx->r2 = SUB32(ctx->r3, ctx->r8);
    // 0x80043D0C: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x80043D10: beq         $v0, $zero, L_80043D34
    if (ctx->r2 == 0) {
        // 0x80043D14: subu        $v0, $v1, $t7
        ctx->r2 = SUB32(ctx->r3, ctx->r15);
            goto L_80043D34;
    }
    // 0x80043D14: subu        $v0, $v1, $t7
    ctx->r2 = SUB32(ctx->r3, ctx->r15);
    // 0x80043D18: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80043D1C: beq         $v0, $zero, L_80043D34
    if (ctx->r2 == 0) {
        // 0x80043D20: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_80043D34;
    }
    // 0x80043D20: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80043D24: sh          $t0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r8;
    // 0x80043D28: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80043D2C: j           L_80043DF4
    // 0x80043D30: sh          $zero, 0x4980($at)
    MEM_H(0X4980, ctx->r1) = 0;
        goto L_80043DF4;
    // 0x80043D30: sh          $zero, 0x4980($at)
    MEM_H(0X4980, ctx->r1) = 0;
L_80043D34:
    // 0x80043D34: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80043D38: addiu       $a0, $a0, -0x7158
    ctx->r4 = ADD32(ctx->r4, -0X7158);
    // 0x80043D3C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80043D40: addiu       $a1, $a1, 0x47DC
    ctx->r5 = ADD32(ctx->r5, 0X47DC);
    // 0x80043D44: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80043D48: sh          $t0, -0x3FAA($at)
    MEM_H(-0X3FAA, ctx->r1) = ctx->r8;
    // 0x80043D4C: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x80043D50: sh          $s0, -0x72CE($at)
    MEM_H(-0X72CE, ctx->r1) = ctx->r16;
    // 0x80043D54: jal         0x80044ECC
    // 0x80043D58: ori         $a2, $t1, 0x43
    ctx->r6 = ctx->r9 | 0X43;
    func_80044ECC_202CC(rdram, ctx);
        goto after_7;
    // 0x80043D58: ori         $a2, $t1, 0x43
    ctx->r6 = ctx->r9 | 0X43;
    after_7:
    // 0x80043D5C: beq         $v0, $zero, L_80043D7C
    if (ctx->r2 == 0) {
        // 0x80043D60: nop
    
            goto L_80043D7C;
    }
    // 0x80043D60: nop

    // 0x80043D64: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80043D68: sh          $zero, 0x5730($at)
    MEM_H(0X5730, ctx->r1) = 0;
    // 0x80043D6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80043D70: sh          $zero, 0x4980($at)
    MEM_H(0X4980, ctx->r1) = 0;
    // 0x80043D74: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80043D78: sh          $zero, -0x6F9E($at)
    MEM_H(-0X6F9E, ctx->r1) = 0;
L_80043D7C:
    // 0x80043D7C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80043D80: lh          $v0, -0x35B8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X35B8);
    // 0x80043D84: bltz        $v0, L_80043D94
    if (SIGNED(ctx->r2) < 0) {
        // 0x80043D88: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80043D94;
    }
    // 0x80043D88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80043D8C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80043D90: sb          $zero, 0x296($at)
    MEM_B(0X296, ctx->r1) = 0;
L_80043D94:
    // 0x80043D94: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80043D98: sb          $v0, 0x5480($at)
    MEM_B(0X5480, ctx->r1) = ctx->r2;
    // 0x80043D9C: j           L_80043DF4
    // 0x80043DA0: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
        goto L_80043DF4;
    // 0x80043DA0: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_80043DA4:
    // 0x80043DA4: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80043DA8: lh          $v0, -0x26AE($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X26AE);
    // 0x80043DAC: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80043DB0: addiu       $a0, $a0, -0x7156
    ctx->r4 = ADD32(ctx->r4, -0X7156);
    // 0x80043DB4: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x80043DB8: subu        $t0, $t0, $v0
    ctx->r8 = SUB32(ctx->r8, ctx->r2);
    // 0x80043DBC: slt         $v0, $t7, $v1
    ctx->r2 = SIGNED(ctx->r15) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80043DC0: beq         $v0, $zero, L_80043DF0
    if (ctx->r2 == 0) {
        // 0x80043DC4: slt         $v0, $v1, $t0
        ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
            goto L_80043DF0;
    }
    // 0x80043DC4: slt         $v0, $v1, $t0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80043DC8: beq         $v0, $zero, L_80043DF0
    if (ctx->r2 == 0) {
        // 0x80043DCC: addiu       $v0, $t0, 0x1
        ctx->r2 = ADD32(ctx->r8, 0X1);
            goto L_80043DF0;
    }
    // 0x80043DCC: addiu       $v0, $t0, 0x1
    ctx->r2 = ADD32(ctx->r8, 0X1);
    // 0x80043DD0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x80043DD4: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_80043DD8:
    // 0x80043DD8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80043DDC: sh          $zero, 0x5730($at)
    MEM_H(0X5730, ctx->r1) = 0;
    // 0x80043DE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80043DE4: sh          $zero, 0x4980($at)
    MEM_H(0X4980, ctx->r1) = 0;
L_80043DE8:
    // 0x80043DE8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80043DEC: sh          $zero, -0x6F9E($at)
    MEM_H(-0X6F9E, ctx->r1) = 0;
L_80043DF0:
    // 0x80043DF0: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_80043DF4:
    // 0x80043DF4: lw          $ra, 0xC4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XC4);
    // 0x80043DF8: lw          $s4, 0xC0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XC0);
    // 0x80043DFC: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x80043E00: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x80043E04: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x80043E08: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x80043E0C: jr          $ra
    // 0x80043E10: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    TRACE_RETURN()
    return;
    // 0x80043E10: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
;}
RECOMP_FUNC void func_80067E40_43240(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80067E40: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80067E44: lw          $v1, 0x6C($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X6C);
    // 0x80067E48: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80067E4C: lh          $a0, -0x3BB8($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3BB8);
    // 0x80067E50: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x80067E54: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80067E58: bne         $v0, $zero, L_80067E7C
    if (ctx->r2 != 0) {
        // 0x80067E5C: nop
    
            goto L_80067E7C;
    }
    // 0x80067E5C: nop

    // 0x80067E60: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x80067E64: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80067E68: bne         $v0, $zero, L_80067E7C
    if (ctx->r2 != 0) {
        // 0x80067E6C: nop
    
            goto L_80067E7C;
    }
    // 0x80067E6C: nop

    // 0x80067E70: lbu         $v1, 0x3($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X3);
    // 0x80067E74: j           L_80067E88
    // 0x80067E78: andi        $a2, $v1, 0xFF
    ctx->r6 = ctx->r3 & 0XFF;
        goto L_80067E88;
    // 0x80067E78: andi        $a2, $v1, 0xFF
    ctx->r6 = ctx->r3 & 0XFF;
L_80067E7C:
    // 0x80067E7C: lw          $v0, 0x6C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X6C);
    // 0x80067E80: lbu         $v1, 0x4($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X4);
    // 0x80067E84: andi        $a2, $v1, 0xFF
    ctx->r6 = ctx->r3 & 0XFF;
L_80067E88:
    // 0x80067E88: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80067E8C: bne         $a2, $v0, L_80067EA4
    if (ctx->r6 != ctx->r2) {
        // 0x80067E90: sll         $v0, $a2, 1
        ctx->r2 = S32(ctx->r6 << 1);
            goto L_80067EA4;
    }
    // 0x80067E90: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x80067E94: lw          $v0, 0x6C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X6C);
    // 0x80067E98: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x80067E9C: j           L_80067ED0
    // 0x80067EA0: sw          $v0, 0x6C($a1)
    MEM_W(0X6C, ctx->r5) = ctx->r2;
        goto L_80067ED0;
    // 0x80067EA0: sw          $v0, 0x6C($a1)
    MEM_W(0X6C, ctx->r5) = ctx->r2;
L_80067EA4:
    // 0x80067EA4: lw          $a0, 0x44($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X44);
    // 0x80067EA8: sh          $v1, 0xC2($a1)
    MEM_H(0XC2, ctx->r5) = ctx->r3;
    // 0x80067EAC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80067EB0: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80067EB4: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x80067EB8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80067EBC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80067EC0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80067EC4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80067EC8: sw          $a0, 0x6C($a1)
    MEM_W(0X6C, ctx->r5) = ctx->r4;
    // 0x80067ECC: sw          $a0, 0x48($a1)
    MEM_W(0X48, ctx->r5) = ctx->r4;
L_80067ED0:
    // 0x80067ED0: jr          $ra
    // 0x80067ED4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80067ED4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80031B40_CF40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80031B40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80031B44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80031B48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80031B4C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80031B50: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80031B54: jal         0x80032510
    // 0x80031B58: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    func_80032510_D910(rdram, ctx);
        goto after_0;
    // 0x80031B58: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80031B5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80031B60: jal         0x800324D0
    // 0x80031B64: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_800324D0_D8D0(rdram, ctx);
        goto after_1;
    // 0x80031B64: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80031B68: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80031B6C: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x80031B70: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x80031B74: sh          $v1, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r3;
    // 0x80031B78: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x80031B7C: negu        $s0, $s0
    ctx->r16 = SUB32(0, ctx->r16);
    // 0x80031B80: sh          $a0, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r4;
    // 0x80031B84: sh          $zero, 0x2($v0)
    MEM_H(0X2, ctx->r2) = 0;
    // 0x80031B88: sh          $zero, 0x6($v0)
    MEM_H(0X6, ctx->r2) = 0;
    // 0x80031B8C: sh          $v1, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r3;
    // 0x80031B90: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x80031B94: sh          $s0, 0xC($v0)
    MEM_H(0XC, ctx->r2) = ctx->r16;
    // 0x80031B98: sh          $zero, 0xE($v0)
    MEM_H(0XE, ctx->r2) = 0;
    // 0x80031B9C: sh          $a0, 0x10($v0)
    MEM_H(0X10, ctx->r2) = ctx->r4;
    // 0x80031BA0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80031BA4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80031BA8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80031BAC: jr          $ra
    // 0x80031BB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80031BB0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8002B038_6438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002B038: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002B03C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8002B040: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8002B044: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002B048: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8002B04C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8002B050: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x8002B054: sltiu       $v0, $v1, 0x42
    ctx->r2 = ctx->r3 < 0X42 ? 1 : 0;
    // 0x8002B058: beq         $v0, $zero, L_8002B120
    if (ctx->r2 == 0) {
        // 0x8002B05C: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8002B120;
    }
    // 0x8002B05C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8002B060: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8002B064: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8002B068: lui         $at, 0x800A
    ctx->r1 = S32(0X800A << 16);
    // 0x8002B06C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8002B070: lw          $v0, 0x7DA8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7DA8);
    // 0x8002B074: bltz        $v0, L_8002B120
    if (SIGNED(ctx->r2) < 0) {
        // 0x8002B078: nop
    
            goto L_8002B120;
    }
    // 0x8002B078: nop

    // 0x8002B07C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8002B080: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8002B084: addiu       $s2, $s2, 0x6B28
    ctx->r18 = ADD32(ctx->r18, 0X6B28);
    // 0x8002B088: bne         $v0, $zero, L_8002B0BC
    if (ctx->r2 != 0) {
        // 0x8002B08C: addu        $s1, $v1, $zero
        ctx->r17 = ADD32(ctx->r3, 0);
            goto L_8002B0BC;
    }
    // 0x8002B08C: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    // 0x8002B090: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8002B094: lbu         $v0, 0x6B2D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X6B2D);
    // 0x8002B098: beq         $v0, $zero, L_8002B0BC
    if (ctx->r2 == 0) {
        // 0x8002B09C: nop
    
            goto L_8002B0BC;
    }
    // 0x8002B09C: nop

    // 0x8002B0A0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8002B0A4: lh          $v0, 0x6B2E($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X6B2E);
    // 0x8002B0A8: bne         $v0, $s1, L_8002B0BC
    if (ctx->r2 != ctx->r17) {
        // 0x8002B0AC: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_8002B0BC;
    }
    // 0x8002B0AC: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8002B0B0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8002B0B4: j           L_8002B120
    // 0x8002B0B8: sh          $v0, -0x3F76($at)
    MEM_H(-0X3F76, ctx->r1) = ctx->r2;
        goto L_8002B120;
    // 0x8002B0B8: sh          $v0, -0x3F76($at)
    MEM_H(-0X3F76, ctx->r1) = ctx->r2;
L_8002B0BC:
    // 0x8002B0BC: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B0C0: jal         0x8008ADE8
    // 0x8002B0C4: lw          $a0, 0x22D0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D0);
    func_8008ADE8_661E8(rdram, ctx);
        goto after_0;
    // 0x8002B0C4: lw          $a0, 0x22D0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D0);
    after_0:
    // 0x8002B0C8: beq         $v0, $zero, L_8002B0E0
    if (ctx->r2 == 0) {
        // 0x8002B0CC: nop
    
            goto L_8002B0E0;
    }
    // 0x8002B0CC: nop

    // 0x8002B0D0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B0D4: lw          $a0, 0x22D0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D0);
    // 0x8002B0D8: jal         0x8008AD34
    // 0x8002B0DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008AD34_66134(rdram, ctx);
        goto after_1;
    // 0x8002B0DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_8002B0E0:
    // 0x8002B0E0: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B0E4: jal         0x8008ADE8
    // 0x8002B0E8: lw          $a0, 0x22D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D4);
    func_8008ADE8_661E8(rdram, ctx);
        goto after_2;
    // 0x8002B0E8: lw          $a0, 0x22D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D4);
    after_2:
    // 0x8002B0EC: beq         $v0, $zero, L_8002B104
    if (ctx->r2 == 0) {
        // 0x8002B0F0: nop
    
            goto L_8002B104;
    }
    // 0x8002B0F0: nop

    // 0x8002B0F4: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B0F8: lw          $a0, 0x22D4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D4);
    // 0x8002B0FC: jal         0x8008AD34
    // 0x8002B100: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008AD34_66134(rdram, ctx);
        goto after_3;
    // 0x8002B100: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_8002B104:
    // 0x8002B104: lhu         $v1, 0x2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2);
    // 0x8002B108: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002B10C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B110: sb          $v0, 0x22D8($at)
    MEM_B(0X22D8, ctx->r1) = ctx->r2;
    // 0x8002B114: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8002B118: sh          $s1, 0x22DA($at)
    MEM_H(0X22DA, ctx->r1) = ctx->r17;
    // 0x8002B11C: sh          $v1, 0x6($s2)
    MEM_H(0X6, ctx->r18) = ctx->r3;
L_8002B120:
    // 0x8002B120: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002B124: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8002B128: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8002B12C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8002B130: jr          $ra
    // 0x8002B134: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8002B134: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80063CA8_3F0A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80063CA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80063CAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80063CB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80063CB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80063CB8: jal         0x8004A44C
    // 0x80063CBC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8004A44C_2584C(rdram, ctx);
        goto after_0;
    // 0x80063CBC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80063CC0: bne         $v0, $zero, L_80063CD0
    if (ctx->r2 != 0) {
        // 0x80063CC4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80063CD0;
    }
    // 0x80063CC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80063CC8: j           L_80063CDC
    // 0x80063CCC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80063CDC;
    // 0x80063CCC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80063CD0:
    // 0x80063CD0: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x80063CD4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80063CD8: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
L_80063CDC:
    // 0x80063CDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80063CE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80063CE4: jr          $ra
    // 0x80063CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80063CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80069518_44918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80069518: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8006951C: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80069520: addiu       $a3, $a3, 0xC18
    ctx->r7 = ADD32(ctx->r7, 0XC18);
    // 0x80069524: addu        $t1, $a2, $zero
    ctx->r9 = ADD32(ctx->r6, 0);
    // 0x80069528: addiu       $t2, $a3, 0x18
    ctx->r10 = ADD32(ctx->r7, 0X18);
L_8006952C:
    // 0x8006952C: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80069530: divu        $zero, $a1, $v0
    lo = S32(U32(ctx->r5) / U32(ctx->r2)); hi = S32(U32(ctx->r5) % U32(ctx->r2));
    // 0x80069534: bne         $v0, $zero, L_80069540
    if (ctx->r2 != 0) {
        // 0x80069538: nop
    
            goto L_80069540;
    }
    // 0x80069538: nop

    // 0x8006953C: break       7
    do_break(2147915068);
L_80069540:
    // 0x80069540: mflo        $t0
    ctx->r8 = lo;
    // 0x80069544: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80069548: lw          $v0, -0x482C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X482C);
    // 0x8006954C: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80069550: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80069554: sltu        $v1, $zero, $t0
    ctx->r3 = 0 < ctx->r8 ? 1 : 0;
    // 0x80069558: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8006955C: beq         $v0, $zero, L_80069580
    if (ctx->r2 == 0) {
        // 0x80069560: nop
    
            goto L_80069580;
    }
    // 0x80069560: nop

    // 0x80069564: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80069568: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8006956C: lbu         $v0, 0x2D98($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2D98);
    // 0x80069570: sb          $v0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r2;
    // 0x80069574: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80069578: j           L_80069590
    // 0x8006957C: sw          $t3, -0x482C($at)
    MEM_W(-0X482C, ctx->r1) = ctx->r11;
        goto L_80069590;
    // 0x8006957C: sw          $t3, -0x482C($at)
    MEM_W(-0X482C, ctx->r1) = ctx->r11;
L_80069580:
    // 0x80069580: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80069584: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80069588: lbu         $v0, 0xC30($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC30);
    // 0x8006958C: sb          $v0, 0x0($t1)
    MEM_B(0X0, ctx->r9) = ctx->r2;
L_80069590:
    // 0x80069590: lw          $v0, 0x0($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X0);
    // 0x80069594: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80069598: divu        $zero, $a1, $v0
    lo = S32(U32(ctx->r5) / U32(ctx->r2)); hi = S32(U32(ctx->r5) % U32(ctx->r2));
    // 0x8006959C: bne         $v0, $zero, L_800695A8
    if (ctx->r2 != 0) {
        // 0x800695A0: nop
    
            goto L_800695A8;
    }
    // 0x800695A0: nop

    // 0x800695A4: break       7
    do_break(2147915172);
L_800695A8:
    // 0x800695A8: mfhi        $a1
    ctx->r5 = hi;
    // 0x800695AC: sltu        $v0, $a3, $t2
    ctx->r2 = ctx->r7 < ctx->r10 ? 1 : 0;
    // 0x800695B0: nop

    // 0x800695B4: bne         $v0, $zero, L_8006952C
    if (ctx->r2 != 0) {
        // 0x800695B8: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_8006952C;
    }
    // 0x800695B8: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x800695BC: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x800695C0: lbu         $v0, 0x2D98($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2D98);
    // 0x800695C4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800695C8: sw          $zero, -0x482C($at)
    MEM_W(-0X482C, ctx->r1) = 0;
    // 0x800695CC: jr          $ra
    // 0x800695D0: sb          $v0, 0x6($a2)
    MEM_B(0X6, ctx->r6) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x800695D0: sb          $v0, 0x6($a2)
    MEM_B(0X6, ctx->r6) = ctx->r2;
;}
RECOMP_FUNC void func_800755C0_509C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800755C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800755C4: sh          $zero, -0x440($at)
    MEM_H(-0X440, ctx->r1) = 0;
    // 0x800755C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800755CC: jr          $ra
    // 0x800755D0: sw          $zero, -0x43C($at)
    MEM_W(-0X43C, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x800755D0: sw          $zero, -0x43C($at)
    MEM_W(-0X43C, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80084E28_60228(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80084E28: addu        $t4, $zero, $zero
    ctx->r12 = ADD32(0, 0);
    // 0x80084E2C: sll         $a2, $a2, 24
    ctx->r6 = S32(ctx->r6 << 24);
    // 0x80084E30: sra         $a2, $a2, 24
    ctx->r6 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80084E34: sll         $a3, $a3, 24
    ctx->r7 = S32(ctx->r7 << 24);
    // 0x80084E38: sra         $a3, $a3, 24
    ctx->r7 = S32(SIGNED(ctx->r7) >> 24);
    // 0x80084E3C: lb          $t5, 0x13($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X13);
L_80084E40:
    // 0x80084E40: lhu         $t3, 0x0($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X0);
    // 0x80084E44: andi        $t0, $t3, 0xFFFF
    ctx->r8 = ctx->r11 & 0XFFFF;
    // 0x80084E48: srl         $v1, $t0, 11
    ctx->r3 = S32(U32(ctx->r8) >> 11);
    // 0x80084E4C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80084E50: slti        $v0, $v1, 0x1F
    ctx->r2 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
    // 0x80084E54: beql        $v0, $zero, L_80084E5C
    if (ctx->r2 == 0) {
        // 0x80084E58: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_80084E5C;
    }
    goto skip_0;
    // 0x80084E58: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    skip_0:
L_80084E5C:
    // 0x80084E5C: nor         $v0, $zero, $v1
    ctx->r2 = ~(0 | ctx->r3);
    // 0x80084E60: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80084E64: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80084E68: srl         $v1, $t0, 6
    ctx->r3 = S32(U32(ctx->r8) >> 6);
    // 0x80084E6C: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80084E70: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x80084E74: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x80084E78: slti        $v0, $v1, 0x1F
    ctx->r2 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
    // 0x80084E7C: beql        $v0, $zero, L_80084E84
    if (ctx->r2 == 0) {
        // 0x80084E80: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_80084E84;
    }
    goto skip_1;
    // 0x80084E80: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    skip_1:
L_80084E84:
    // 0x80084E84: nor         $v0, $zero, $v1
    ctx->r2 = ~(0 | ctx->r3);
    // 0x80084E88: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80084E8C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80084E90: srl         $v1, $t0, 1
    ctx->r3 = S32(U32(ctx->r8) >> 1);
    // 0x80084E94: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80084E98: addu        $v1, $v1, $t5
    ctx->r3 = ADD32(ctx->r3, ctx->r13);
    // 0x80084E9C: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x80084EA0: slti        $v0, $v1, 0x1F
    ctx->r2 = SIGNED(ctx->r3) < 0X1F ? 1 : 0;
    // 0x80084EA4: beql        $v0, $zero, L_80084EAC
    if (ctx->r2 == 0) {
        // 0x80084EA8: addiu       $v1, $zero, 0x1F
        ctx->r3 = ADD32(0, 0X1F);
            goto L_80084EAC;
    }
    goto skip_2;
    // 0x80084EA8: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    skip_2:
L_80084EAC:
    // 0x80084EAC: nor         $v0, $zero, $v1
    ctx->r2 = ~(0 | ctx->r3);
    // 0x80084EB0: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x80084EB4: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80084EB8: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x80084EBC: andi        $v1, $t3, 0x1
    ctx->r3 = ctx->r11 & 0X1;
    // 0x80084EC0: sll         $v0, $t2, 11
    ctx->r2 = S32(ctx->r10 << 11);
    // 0x80084EC4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80084EC8: sll         $v0, $t1, 6
    ctx->r2 = S32(ctx->r9 << 6);
    // 0x80084ECC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80084ED0: sll         $v0, $t0, 1
    ctx->r2 = S32(ctx->r8 << 1);
    // 0x80084ED4: or          $t3, $v1, $v0
    ctx->r11 = ctx->r3 | ctx->r2;
    // 0x80084ED8: sh          $t3, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r11;
    // 0x80084EDC: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80084EE0: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x80084EE4: sltiu       $v0, $t4, 0x10
    ctx->r2 = ctx->r12 < 0X10 ? 1 : 0;
    // 0x80084EE8: bne         $v0, $zero, L_80084E40
    if (ctx->r2 != 0) {
        // 0x80084EEC: addiu       $a0, $a0, 0x2
        ctx->r4 = ADD32(ctx->r4, 0X2);
            goto L_80084E40;
    }
    // 0x80084EEC: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80084EF0: jr          $ra
    // 0x80084EF4: nop

    TRACE_RETURN()
    return;
    // 0x80084EF4: nop

;}
RECOMP_FUNC void func_8006C5D8_479D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006C5D8: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x8006C5DC: lh          $a1, 0x2($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X2);
    // 0x8006C5E0: mult        $v1, $a1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006C5E4: mflo        $v0
    ctx->r2 = lo;
    // 0x8006C5E8: nop

    // 0x8006C5EC: nop

    // 0x8006C5F0: blezl       $v0, L_8006C644
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8006C5F4: sll         $v1, $v1, 1
        ctx->r3 = S32(ctx->r3 << 1);
            goto L_8006C644;
    }
    goto skip_0;
    // 0x8006C5F4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    skip_0:
    // 0x8006C5F8: bltzl       $v1, L_8006C600
    if (SIGNED(ctx->r3) < 0) {
        // 0x8006C5FC: negu        $v1, $v1
        ctx->r3 = SUB32(0, ctx->r3);
            goto L_8006C600;
    }
    goto skip_1;
    // 0x8006C5FC: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    skip_1:
L_8006C600:
    // 0x8006C600: bltz        $a1, L_8006C618
    if (SIGNED(ctx->r5) < 0) {
        // 0x8006C604: slt         $v0, $a1, $v1
        ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8006C618;
    }
    // 0x8006C604: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8006C608: beq         $v0, $zero, L_8006C638
    if (ctx->r2 == 0) {
        // 0x8006C60C: nop
    
            goto L_8006C638;
    }
    // 0x8006C60C: nop

    // 0x8006C610: j           L_8006C628
    // 0x8006C614: nop

        goto L_8006C628;
    // 0x8006C614: nop

L_8006C618:
    // 0x8006C618: negu        $v0, $a1
    ctx->r2 = SUB32(0, ctx->r5);
    // 0x8006C61C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8006C620: beq         $v0, $zero, L_8006C638
    if (ctx->r2 == 0) {
        // 0x8006C624: nop
    
            goto L_8006C638;
    }
    // 0x8006C624: nop

L_8006C628:
    // 0x8006C628: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8006C62C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8006C630: j           L_8006C654
    // 0x8006C634: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
        goto L_8006C654;
    // 0x8006C634: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_8006C638:
    // 0x8006C638: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x8006C63C: j           L_8006C650
    // 0x8006C640: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
        goto L_8006C650;
    // 0x8006C640: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
L_8006C644:
    // 0x8006C644: lh          $v0, 0x2($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X2);
    // 0x8006C648: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    // 0x8006C64C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
L_8006C650:
    // 0x8006C650: sh          $v0, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r2;
L_8006C654:
    // 0x8006C654: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x8006C658: lh          $a1, 0x6($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X6);
    // 0x8006C65C: mult        $v1, $a1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r5)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8006C660: mflo        $v0
    ctx->r2 = lo;
    // 0x8006C664: nop

    // 0x8006C668: nop

    // 0x8006C66C: blezl       $v0, L_8006C6C0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8006C670: sll         $v1, $v1, 1
        ctx->r3 = S32(ctx->r3 << 1);
            goto L_8006C6C0;
    }
    goto skip_2;
    // 0x8006C670: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    skip_2:
    // 0x8006C674: bltzl       $v1, L_8006C67C
    if (SIGNED(ctx->r3) < 0) {
        // 0x8006C678: negu        $v1, $v1
        ctx->r3 = SUB32(0, ctx->r3);
            goto L_8006C67C;
    }
    goto skip_3;
    // 0x8006C678: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    skip_3:
L_8006C67C:
    // 0x8006C67C: bltz        $a1, L_8006C694
    if (SIGNED(ctx->r5) < 0) {
        // 0x8006C680: slt         $v0, $a1, $v1
        ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8006C694;
    }
    // 0x8006C680: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8006C684: beq         $v0, $zero, L_8006C6B4
    if (ctx->r2 == 0) {
        // 0x8006C688: nop
    
            goto L_8006C6B4;
    }
    // 0x8006C688: nop

    // 0x8006C68C: j           L_8006C6A4
    // 0x8006C690: nop

        goto L_8006C6A4;
    // 0x8006C690: nop

L_8006C694:
    // 0x8006C694: negu        $v0, $a1
    ctx->r2 = SUB32(0, ctx->r5);
    // 0x8006C698: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8006C69C: beq         $v0, $zero, L_8006C6B4
    if (ctx->r2 == 0) {
        // 0x8006C6A0: nop
    
            goto L_8006C6B4;
    }
    // 0x8006C6A0: nop

L_8006C6A4:
    // 0x8006C6A4: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x8006C6A8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8006C6AC: j           L_8006C6D0
    // 0x8006C6B0: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
        goto L_8006C6D0;
    // 0x8006C6B0: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
L_8006C6B4:
    // 0x8006C6B4: lh          $v0, 0x6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6);
    // 0x8006C6B8: j           L_8006C6CC
    // 0x8006C6BC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
        goto L_8006C6CC;
    // 0x8006C6BC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
L_8006C6C0:
    // 0x8006C6C0: lh          $v0, 0x6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6);
    // 0x8006C6C4: sh          $v1, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r3;
    // 0x8006C6C8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
L_8006C6CC:
    // 0x8006C6CC: sh          $v0, 0x6($a0)
    MEM_H(0X6, ctx->r4) = ctx->r2;
L_8006C6D0:
    // 0x8006C6D0: jr          $ra
    // 0x8006C6D4: nop

    TRACE_RETURN()
    return;
    // 0x8006C6D4: nop

;}
RECOMP_FUNC void func_8008CE04_68204(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008CE04: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8008CE08: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8008CE0C: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8008CE10: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8008CE14: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8008CE18: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8008CE1C: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x8008CE20: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8008CE24: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x8008CE28: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8008CE2C: addu        $s6, $a3, $zero
    ctx->r22 = ADD32(ctx->r7, 0);
    // 0x8008CE30: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8008CE34: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8008CE38: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8008CE3C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8008CE40: bne         $s2, $v0, L_8008CE54
    if (ctx->r18 != ctx->r2) {
        // 0x8008CE44: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8008CE54;
    }
    // 0x8008CE44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008CE48: sll         $v0, $s4, 3
    ctx->r2 = S32(ctx->r20 << 3);
    // 0x8008CE4C: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x8008CE50: lw          $s2, 0x1C($v0)
    ctx->r18 = MEM_W(ctx->r2, 0X1C);
L_8008CE54:
    // 0x8008CE54: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008CE58: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008CE5C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8008CE60: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008CE64: lw          $a0, 0x4F90($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4F90);
    // 0x8008CE68: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8008CE6C: beq         $v0, $zero, L_8008CF1C
    if (ctx->r2 == 0) {
        // 0x8008CE70: addiu       $a2, $s2, 0x1
        ctx->r6 = ADD32(ctx->r18, 0X1);
            goto L_8008CF1C;
    }
    // 0x8008CE70: addiu       $a2, $s2, 0x1
    ctx->r6 = ADD32(ctx->r18, 0X1);
    // 0x8008CE74: sll         $v0, $s4, 3
    ctx->r2 = S32(ctx->r20 << 3);
    // 0x8008CE78: addu        $s7, $s3, $v0
    ctx->r23 = ADD32(ctx->r19, ctx->r2);
    // 0x8008CE7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
L_8008CE80:
    // 0x8008CE80: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8008CE84: bne         $v0, $zero, L_8008CEE0
    if (ctx->r2 != 0) {
        // 0x8008CE88: nop
    
            goto L_8008CEE0;
    }
    // 0x8008CE88: nop

    // 0x8008CE8C: jal         0x8008CA18
    // 0x8008CE90: nop

    func_8008CA18_67E18(rdram, ctx);
        goto after_0;
    // 0x8008CE90: nop

    after_0:
    // 0x8008CE94: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008CE98: lw          $v0, 0x4FA0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FA0);
    // 0x8008CE9C: sh          $s4, 0xA6($s0)
    MEM_H(0XA6, ctx->r16) = ctx->r20;
    // 0x8008CEA0: sw          $s3, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r19;
    // 0x8008CEA4: sh          $s5, 0x9E($s0)
    MEM_H(0X9E, ctx->r16) = ctx->r21;
    // 0x8008CEA8: sh          $s6, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r22;
    // 0x8008CEAC: sw          $s2, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r18;
    // 0x8008CEB0: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    // 0x8008CEB4: lw          $v1, 0x10($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X10);
    // 0x8008CEB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8008CEBC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008CEC0: sw          $v0, 0x4FA0($at)
    MEM_W(0X4FA0, ctx->r1) = ctx->r2;
    // 0x8008CEC4: bnel        $v1, $zero, L_8008CECC
    if (ctx->r3 != 0) {
        // 0x8008CEC8: sw          $v1, 0x7C($s0)
        MEM_W(0X7C, ctx->r16) = ctx->r3;
            goto L_8008CECC;
    }
    goto skip_0;
    // 0x8008CEC8: sw          $v1, 0x7C($s0)
    MEM_W(0X7C, ctx->r16) = ctx->r3;
    skip_0:
L_8008CECC:
    // 0x8008CECC: lw          $v1, 0x18($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X18);
    // 0x8008CED0: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
    // 0x8008CED4: sw          $v1, 0x80($s0)
    MEM_W(0X80, ctx->r16) = ctx->r3;
    // 0x8008CED8: j           L_8008CF80
    // 0x8008CEDC: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
        goto L_8008CF80;
    // 0x8008CEDC: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
L_8008CEE0:
    // 0x8008CEE0: lw          $v0, 0x78($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X78);
    // 0x8008CEE4: beq         $v0, $zero, L_8008CF04
    if (ctx->r2 == 0) {
        // 0x8008CEE8: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8008CF04;
    }
    // 0x8008CEE8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008CEEC: lw          $v1, 0x48($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X48);
    // 0x8008CEF0: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8008CEF4: beq         $v0, $zero, L_8008CF04
    if (ctx->r2 == 0) {
        // 0x8008CEF8: nop
    
            goto L_8008CF04;
    }
    // 0x8008CEF8: nop

    // 0x8008CEFC: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x8008CF00: addu        $s1, $s0, $zero
    ctx->r17 = ADD32(ctx->r16, 0);
L_8008CF04:
    // 0x8008CF04: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008CF08: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008CF0C: addiu       $s0, $s0, 0x13C
    ctx->r16 = ADD32(ctx->r16, 0X13C);
    // 0x8008CF10: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8008CF14: bne         $v0, $zero, L_8008CE80
    if (ctx->r2 != 0) {
        // 0x8008CF18: addiu       $a0, $a0, 0x13C
        ctx->r4 = ADD32(ctx->r4, 0X13C);
            goto L_8008CE80;
    }
    // 0x8008CF18: addiu       $a0, $a0, 0x13C
    ctx->r4 = ADD32(ctx->r4, 0X13C);
L_8008CF1C:
    // 0x8008CF1C: slt         $v0, $a2, $s2
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x8008CF20: beq         $v0, $zero, L_8008CF80
    if (ctx->r2 == 0) {
        // 0x8008CF24: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8008CF80;
    }
    // 0x8008CF24: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8008CF28: jal         0x8008CA18
    // 0x8008CF2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8008CA18_67E18(rdram, ctx);
        goto after_1;
    // 0x8008CF2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8008CF30: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008CF34: lw          $v0, 0x4FA0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FA0);
    // 0x8008CF38: sh          $s4, 0xA6($s1)
    MEM_H(0XA6, ctx->r17) = ctx->r20;
    // 0x8008CF3C: sw          $s3, 0x78($s1)
    MEM_W(0X78, ctx->r17) = ctx->r19;
    // 0x8008CF40: sh          $s5, 0x9E($s1)
    MEM_H(0X9E, ctx->r17) = ctx->r21;
    // 0x8008CF44: sh          $s6, 0xB0($s1)
    MEM_H(0XB0, ctx->r17) = ctx->r22;
    // 0x8008CF48: sw          $s2, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->r18;
    // 0x8008CF4C: sw          $v0, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r2;
    // 0x8008CF50: lw          $v1, 0x10($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X10);
    // 0x8008CF54: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8008CF58: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008CF5C: sw          $v0, 0x4FA0($at)
    MEM_W(0X4FA0, ctx->r1) = ctx->r2;
    // 0x8008CF60: bnel        $v1, $zero, L_8008CF68
    if (ctx->r3 != 0) {
        // 0x8008CF64: sw          $v1, 0x7C($s1)
        MEM_W(0X7C, ctx->r17) = ctx->r3;
            goto L_8008CF68;
    }
    goto skip_1;
    // 0x8008CF64: sw          $v1, 0x7C($s1)
    MEM_W(0X7C, ctx->r17) = ctx->r3;
    skip_1:
L_8008CF68:
    // 0x8008CF68: sll         $v1, $s4, 3
    ctx->r3 = S32(ctx->r20 << 3);
    // 0x8008CF6C: addu        $v1, $s3, $v1
    ctx->r3 = ADD32(ctx->r19, ctx->r3);
    // 0x8008CF70: lw          $v1, 0x18($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X18);
    // 0x8008CF74: lw          $v0, 0x44($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X44);
    // 0x8008CF78: sw          $v1, 0x80($s1)
    MEM_W(0X80, ctx->r17) = ctx->r3;
    // 0x8008CF7C: sw          $v1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r3;
L_8008CF80:
    // 0x8008CF80: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8008CF84: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8008CF88: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8008CF8C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8008CF90: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8008CF94: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8008CF98: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8008CF9C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8008CFA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008CFA4: jr          $ra
    // 0x8008CFA8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8008CFA8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8003B878_16C78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B878: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8003B87C: lhu         $v1, -0x2380($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X2380);
    // 0x8003B880: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B884: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003B888: sltiu       $v0, $v1, 0x100
    ctx->r2 = ctx->r3 < 0X100 ? 1 : 0;
    // 0x8003B88C: beq         $v0, $zero, L_8003B8E8
    if (ctx->r2 == 0) {
        // 0x8003B890: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8003B8E8;
    }
    // 0x8003B890: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003B894: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x8003B898: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x8003B89C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8003B8A0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8003B8A4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8003B8A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8003B8AC: sw          $s0, 0x480($at)
    MEM_W(0X480, ctx->r1) = ctx->r16;
    // 0x8003B8B0: jal         0x8009A2B0
    // 0x8003B8B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x8003B8B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8003B8B8: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8003B8BC: lhu         $a0, -0x2380($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X2380);
    // 0x8003B8C0: lui         $v1, 0x801A
    ctx->r3 = S32(0X801A << 16);
    // 0x8003B8C4: lw          $v1, -0x5858($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5858);
    // 0x8003B8C8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8003B8CC: addiu       $v1, $v1, 0x28
    ctx->r3 = ADD32(ctx->r3, 0X28);
    // 0x8003B8D0: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8003B8D4: sw          $v1, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r3;
    // 0x8003B8D8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8003B8DC: sh          $a0, -0x2380($at)
    MEM_H(-0X2380, ctx->r1) = ctx->r4;
    // 0x8003B8E0: j           L_8003B8EC
    // 0x8003B8E4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_8003B8EC;
    // 0x8003B8E4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_8003B8E8:
    // 0x8003B8E8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8003B8EC:
    // 0x8003B8EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003B8F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003B8F4: jr          $ra
    // 0x8003B8F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003B8F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80059710_34B10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80059710: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80059714: lw          $a1, -0x3E24($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3E24);
    // 0x80059718: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8005971C: lw          $a2, -0x3E20($a2)
    ctx->r6 = MEM_W(ctx->r6, -0X3E20);
    // 0x80059720: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x80059724: lw          $a3, -0x3E1C($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X3E1C);
    // 0x80059728: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005972C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80059730: addiu       $a0, $a0, -0x3E34
    ctx->r4 = ADD32(ctx->r4, -0X3E34);
    // 0x80059734: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80059738: jal         0x800387FC
    // 0x8005973C: nop

    func_800387FC_13BFC(rdram, ctx);
        goto after_0;
    // 0x8005973C: nop

    after_0:
    // 0x80059740: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80059744: jr          $ra
    // 0x80059748: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80059748: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008B1A8_665A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B1A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008B1AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008B1B0: sw          $a0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r4;
    // 0x8008B1B4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8008B1B8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8008B1BC: jal         0x8008B4F4
    // 0x8008B1C0: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    func_8008B4F4_668F4(rdram, ctx);
        goto after_0;
    // 0x8008B1C0: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x8008B1C4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8008B1C8: jr          $ra
    // 0x8008B1CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8008B1CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80068428_43828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80068428: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x8006842C: lbu         $v1, 0x7D($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X7D);
    // 0x80068430: beq         $v1, $zero, L_80068448
    if (ctx->r3 == 0) {
        // 0x80068434: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80068448;
    }
    // 0x80068434: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80068438: beq         $v1, $v0, L_8006853C
    if (ctx->r3 == ctx->r2) {
        // 0x8006843C: lui         $v0, 0xF9FF
        ctx->r2 = S32(0XF9FF << 16);
            goto L_8006853C;
    }
    // 0x8006843C: lui         $v0, 0xF9FF
    ctx->r2 = S32(0XF9FF << 16);
    // 0x80068440: j           L_80068554
    // 0x80068444: nop

        goto L_80068554;
    // 0x80068444: nop

L_80068448:
    // 0x80068448: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x8006844C: lbu         $a0, 0x7D($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0X7D);
    // 0x80068450: lw          $a1, 0x6C($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X6C);
    // 0x80068454: lui         $v0, 0x600
    ctx->r2 = S32(0X600 << 16);
    // 0x80068458: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8006845C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80068460: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
    // 0x80068464: sb          $a0, 0x7D($a3)
    MEM_B(0X7D, ctx->r7) = ctx->r4;
    // 0x80068468: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x8006846C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80068470: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x80068474: sh          $v0, 0xB6($a3)
    MEM_H(0XB6, ctx->r7) = ctx->r2;
    // 0x80068478: sh          $v0, 0xB4($a3)
    MEM_H(0XB4, ctx->r7) = ctx->r2;
    // 0x8006847C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80068480: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80068484: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80068488: sw          $v1, 0x3FF0($at)
    MEM_W(0X3FF0, ctx->r1) = ctx->r3;
    // 0x8006848C: lhu         $v1, 0xB4($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0XB4);
    // 0x80068490: lhu         $a0, 0xB6($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0XB6);
    // 0x80068494: lw          $v0, 0x6C($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X6C);
    // 0x80068498: lbu         $a1, 0x7E($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X7E);
    // 0x8006849C: lbu         $a2, 0x7F($a3)
    ctx->r6 = MEM_BU(ctx->r7, 0X7F);
    // 0x800684A0: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x800684A4: sh          $v1, 0x88($a3)
    MEM_H(0X88, ctx->r7) = ctx->r3;
    // 0x800684A8: lhu         $v1, 0xB4($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0XB4);
    // 0x800684AC: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x800684B0: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x800684B4: sw          $v0, 0x6C($a3)
    MEM_W(0X6C, ctx->r7) = ctx->r2;
    // 0x800684B8: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x800684BC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x800684C0: sh          $a0, 0x8A($a3)
    MEM_H(0X8A, ctx->r7) = ctx->r4;
    // 0x800684C4: lhu         $a0, 0xB6($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0XB6);
    // 0x800684C8: lhu         $a1, 0xB4($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0XB4);
    // 0x800684CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800684D0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800684D4: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
    // 0x800684D8: sh          $v1, 0x8C($a3)
    MEM_H(0X8C, ctx->r7) = ctx->r3;
    // 0x800684DC: lhu         $v1, 0xB6($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0XB6);
    // 0x800684E0: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x800684E4: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x800684E8: sh          $a0, 0x8E($a3)
    MEM_H(0X8E, ctx->r7) = ctx->r4;
    // 0x800684EC: lbu         $a0, 0x7E($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0X7E);
    // 0x800684F0: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x800684F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800684F8: sh          $a1, 0x90($a3)
    MEM_H(0X90, ctx->r7) = ctx->r5;
    // 0x800684FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80068500: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80068504: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80068508: sh          $v1, 0x92($a3)
    MEM_H(0X92, ctx->r7) = ctx->r3;
    // 0x8006850C: lhu         $v1, 0xB4($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0XB4);
    // 0x80068510: lbu         $a0, 0x7F($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0X7F);
    // 0x80068514: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80068518: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8006851C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80068520: sh          $v1, 0x94($a3)
    MEM_H(0X94, ctx->r7) = ctx->r3;
    // 0x80068524: lhu         $v1, 0xB6($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0XB6);
    // 0x80068528: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8006852C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80068530: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80068534: j           L_80068554
    // 0x80068538: sh          $v1, 0x96($a3)
    MEM_H(0X96, ctx->r7) = ctx->r3;
        goto L_80068554;
    // 0x80068538: sh          $v1, 0x96($a3)
    MEM_H(0X96, ctx->r7) = ctx->r3;
L_8006853C:
    // 0x8006853C: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
    // 0x80068540: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80068544: lui         $a0, 0x1000
    ctx->r4 = S32(0X1000 << 16);
    // 0x80068548: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8006854C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80068550: sw          $v1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r3;
L_80068554:
    // 0x80068554: jr          $ra
    // 0x80068558: nop

    TRACE_RETURN()
    return;
    // 0x80068558: nop

;}
RECOMP_FUNC void func_800910A8_6C4A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800910A8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800910AC: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x800910B0: addu        $s6, $a0, $zero
    ctx->r22 = ADD32(ctx->r4, 0);
    // 0x800910B4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x800910B8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x800910BC: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x800910C0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x800910C4: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x800910C8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800910CC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x800910D0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x800910D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800910D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800910DC: lw          $v1, 0x1C($s6)
    ctx->r3 = MEM_W(ctx->r22, 0X1C);
    // 0x800910E0: lw          $v0, 0x14($s6)
    ctx->r2 = MEM_W(ctx->r22, 0X14);
    // 0x800910E4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x800910E8: addu        $a1, $v0, $v1
    ctx->r5 = ADD32(ctx->r2, ctx->r3);
    // 0x800910EC: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x800910F0: beq         $v0, $zero, L_800910FC
    if (ctx->r2 == 0) {
        // 0x800910F4: addu        $s2, $s4, $zero
        ctx->r18 = ADD32(ctx->r20, 0);
            goto L_800910FC;
    }
    // 0x800910F4: addu        $s2, $s4, $zero
    ctx->r18 = ADD32(ctx->r20, 0);
    // 0x800910F8: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
L_800910FC:
    // 0x800910FC: addiu       $s0, $a0, 0x170
    ctx->r16 = ADD32(ctx->r4, 0X170);
    // 0x80091100: sltu        $v0, $a1, $s0
    ctx->r2 = ctx->r5 < ctx->r16 ? 1 : 0;
    // 0x80091104: beq         $v0, $zero, L_80091174
    if (ctx->r2 == 0) {
        // 0x80091108: subu        $s1, $a1, $a0
        ctx->r17 = SUB32(ctx->r5, ctx->r4);
            goto L_80091174;
    }
    // 0x80091108: subu        $s1, $a1, $a0
    ctx->r17 = SUB32(ctx->r5, ctx->r4);
    // 0x8009110C: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80091110: sra         $s1, $s1, 1
    ctx->r17 = S32(SIGNED(ctx->r17) >> 1);
    // 0x80091114: sll         $s1, $s1, 1
    ctx->r17 = S32(ctx->r17 << 1);
    // 0x80091118: andi        $v1, $s1, 0xFFF
    ctx->r3 = ctx->r17 & 0XFFF;
    // 0x8009111C: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x80091120: andi        $v0, $s5, 0xFFF
    ctx->r2 = ctx->r21 & 0XFFF;
    // 0x80091124: lui         $s3, 0x600
    ctx->r19 = S32(0X600 << 16);
    // 0x80091128: or          $v0, $v0, $s3
    ctx->r2 = ctx->r2 | ctx->r19;
    // 0x8009112C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80091130: subu        $s0, $s0, $a1
    ctx->r16 = SUB32(ctx->r16, ctx->r5);
    // 0x80091134: sra         $s0, $s0, 1
    ctx->r16 = S32(SIGNED(ctx->r16) >> 1);
    // 0x80091138: jal         0x80099BB0
    // 0x8009113C: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x8009113C: sw          $v1, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r3;
    after_0:
    // 0x80091140: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x80091144: addu        $s2, $s4, $zero
    ctx->r18 = ADD32(ctx->r20, 0);
    // 0x80091148: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x8009114C: andi        $s0, $s0, 0xFFF
    ctx->r16 = ctx->r16 & 0XFFF;
    // 0x80091150: sll         $s0, $s0, 12
    ctx->r16 = S32(ctx->r16 << 12);
    // 0x80091154: addu        $s1, $s5, $s1
    ctx->r17 = ADD32(ctx->r21, ctx->r17);
    // 0x80091158: andi        $s1, $s1, 0xFFF
    ctx->r17 = ctx->r17 & 0XFFF;
    // 0x8009115C: or          $s1, $s1, $s3
    ctx->r17 = ctx->r17 | ctx->r19;
    // 0x80091160: or          $s0, $s0, $s1
    ctx->r16 = ctx->r16 | ctx->r17;
    // 0x80091164: sw          $s0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r16;
    // 0x80091168: lw          $a0, 0x14($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X14);
    // 0x8009116C: j           L_80091188
    // 0x80091170: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
        goto L_80091188;
    // 0x80091170: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
L_80091174:
    // 0x80091174: addiu       $s4, $s4, 0x8
    ctx->r20 = ADD32(ctx->r20, 0X8);
    // 0x80091178: andi        $v0, $s5, 0xFFF
    ctx->r2 = ctx->r21 & 0XFFF;
    // 0x8009117C: lui         $v1, 0x617
    ctx->r3 = S32(0X617 << 16);
    // 0x80091180: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80091184: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
L_80091188:
    // 0x80091188: jal         0x80099BB0
    // 0x8009118C: nop

    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x8009118C: nop

    after_1:
    // 0x80091190: sw          $v0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r2;
    // 0x80091194: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x80091198: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8009119C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x800911A0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x800911A4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x800911A8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x800911AC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x800911B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800911B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800911B8: jr          $ra
    // 0x800911BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800911BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
