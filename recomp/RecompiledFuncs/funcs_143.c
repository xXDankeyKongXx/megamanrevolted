#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80231F04_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231F04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231F08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231F0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231F10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80231F14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231F18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231F1C: jal         0x80050294
    // 0x80231F20: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80231F20: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    after_0:
    // 0x80231F24: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80231F28: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x80231F2C: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80231F30: sb          $v0, 0x1DE($s0)
    MEM_B(0X1DE, ctx->r16) = ctx->r2;
    // 0x80231F34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231F38: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80231F3C: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x80231F40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231F44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231F48: jr          $ra
    // 0x80231F4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231F4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EF28_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EF28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022EF2C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EF30: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EF34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022EF38: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022EF3C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022EF40: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022EF44: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EF48: jal         0x8022FED8
    // 0x8022EF4C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_8022FED8_ovl21(rdram, ctx);
        goto after_0;
    // 0x8022EF4C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022EF50: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022EF54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EF58: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022EF5C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022EF60: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022EF64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EF68: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EF6C: jr          $ra
    // 0x8022EF70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EF70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238320_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238320: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238324: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80238328: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023832C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238330: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238334: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238338: lw          $v0, -0x3748($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3748);
    // 0x8023833C: jalr        $v0
    // 0x80238340: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80238340: nop

    after_0:
    // 0x80238344: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80238348: jr          $ra
    // 0x8023834C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023834C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F820_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F820: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022F824: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022F828: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022F82C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022F830: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x8022F834: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F838: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022F83C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8022F840: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022F844: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8022F848: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022F84C: addiu       $s3, $s2, 0x14
    ctx->r19 = ADD32(ctx->r18, 0X14);
    // 0x8022F850: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022F854: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022F858: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022F85C: sh          $v0, 0x34C($s2)
    MEM_H(0X34C, ctx->r18) = ctx->r2;
    // 0x8022F860: sb          $v1, 0x34A($s2)
    MEM_B(0X34A, ctx->r18) = ctx->r3;
    // 0x8022F864: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F868: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022F86C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022F870: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F874: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8022F878: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022F87C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x8022F880: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8022F884: jal         0x8009A3B4
    // 0x8022F888: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022F888: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022F88C: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8022F890: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022F894: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x8022F898: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F89C: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x8022F8A0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F8A4: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x8022F8A8: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8022F8AC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022F8B0: jal         0x8004EC38
    // 0x8022F8B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x8022F8B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022F8B8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022F8BC: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022F8C0: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8022F8C4: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022F8C8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022F8CC: jal         0x80034FCC
    // 0x8022F8D0: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    func_80034FCC_103CC(rdram, ctx);
        goto after_2;
    // 0x8022F8D0: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    after_2:
    // 0x8022F8D4: lbu         $a0, 0x2($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X2);
    // 0x8022F8D8: jal         0x8022FEC8
    // 0x8022F8DC: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    func_8022FEC8_ovl21(rdram, ctx);
        goto after_3;
    // 0x8022F8DC: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    after_3:
    // 0x8022F8E0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022F8E4: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022F8E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022F8EC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022F8F0: jal         0x8004F820
    // 0x8022F8F4: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022F8F4: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    after_4:
    // 0x8022F8F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F8FC: bgez        $v0, L_8022F928
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F900: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022F928;
    }
    // 0x8022F900: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022F904: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022F908: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022F90C: jal         0x8004F820
    // 0x8022F910: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022F910: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_5:
    // 0x8022F914: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F918: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022F91C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022F920: j           L_8022F940
    // 0x8022F924: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_8022F940;
    // 0x8022F924: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_8022F928:
    // 0x8022F928: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022F92C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022F930: jal         0x8004F820
    // 0x8022F934: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x8022F934: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_6:
    // 0x8022F938: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F93C: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_8022F940:
    // 0x8022F940: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022F944: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x8022F948: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F94C: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8022F950: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022F954: sb          $v0, 0x11B($s2)
    MEM_B(0X11B, ctx->r18) = ctx->r2;
    // 0x8022F958: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022F95C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022F960: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022F964: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F968: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022F96C: jr          $ra
    // 0x8022F970: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022F970: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80228914_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228914: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228918: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022891C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228920: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80228924: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x80228928: lh          $v0, 0xDA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XDA);
    // 0x8022892C: bne         $v1, $v0, L_802289CC
    if (ctx->r3 != ctx->r2) {
        // 0x80228930: addiu       $a0, $s0, 0xD0
        ctx->r4 = ADD32(ctx->r16, 0XD0);
            goto L_802289CC;
    }
    // 0x80228930: addiu       $a0, $s0, 0xD0
    ctx->r4 = ADD32(ctx->r16, 0XD0);
    // 0x80228934: jal         0x800A3450
    // 0x80228938: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80228938: nop

    after_0:
    // 0x8022893C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80228940: slti        $v0, $v0, 0xE
    ctx->r2 = SIGNED(ctx->r2) < 0XE ? 1 : 0;
    // 0x80228944: beq         $v0, $zero, L_80228990
    if (ctx->r2 == 0) {
        // 0x80228948: nop
    
            goto L_80228990;
    }
    // 0x80228948: nop

    // 0x8022894C: jal         0x800A3450
    // 0x80228950: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80228950: nop

    after_1:
    // 0x80228954: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80228958: sb          $v0, 0xD1($s0)
    MEM_B(0XD1, ctx->r16) = ctx->r2;
    // 0x8022895C: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80228960: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228964: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80228968: jal         0x800A3450
    // 0x8022896C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022896C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    after_2:
    // 0x80228970: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80228974: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80228978: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022897C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228980: lhu         $v0, -0x4EAC($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X4EAC);
    // 0x80228984: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80228988: j           L_802289B8
    // 0x8022898C: sh          $v0, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r2;
        goto L_802289B8;
    // 0x8022898C: sh          $v0, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r2;
L_80228990:
    // 0x80228990: jal         0x800A3450
    // 0x80228994: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80228994: nop

    after_3:
    // 0x80228998: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022899C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802289A0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802289A4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802289A8: lhu         $v1, -0x4EAC($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X4EAC);
    // 0x802289AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802289B0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802289B4: sh          $v1, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r3;
L_802289B8:
    // 0x802289B8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802289BC: jal         0x802281A8
    // 0x802289C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802281A8_ovl21(rdram, ctx);
        goto after_4;
    // 0x802289C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802289C4: j           L_80228A28
    // 0x802289C8: nop

        goto L_80228A28;
    // 0x802289C8: nop

L_802289CC:
    // 0x802289CC: lh          $v0, 0x54($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X54);
    // 0x802289D0: beq         $v0, $zero, L_802289F8
    if (ctx->r2 == 0) {
        // 0x802289D4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802289F8;
    }
    // 0x802289D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802289D8: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x802289DC: bne         $v0, $zero, L_802289E8
    if (ctx->r2 != 0) {
        // 0x802289E0: addiu       $v0, $v1, -0x20
        ctx->r2 = ADD32(ctx->r3, -0X20);
            goto L_802289E8;
    }
    // 0x802289E0: addiu       $v0, $v1, -0x20
    ctx->r2 = ADD32(ctx->r3, -0X20);
    // 0x802289E4: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
L_802289E8:
    // 0x802289E8: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x802289EC: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x802289F0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802289F4: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
L_802289F8:
    // 0x802289F8: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x802289FC: lh          $v0, 0xA($a0)
    ctx->r2 = MEM_H(ctx->r4, 0XA);
    // 0x80228A00: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80228A04: beq         $v0, $zero, L_80228A14
    if (ctx->r2 == 0) {
        // 0x80228A08: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80228A14;
    }
    // 0x80228A08: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80228A0C: j           L_80228A18
    // 0x80228A10: addiu       $v0, $a0, -0x40
    ctx->r2 = ADD32(ctx->r4, -0X40);
        goto L_80228A18;
    // 0x80228A10: addiu       $v0, $a0, -0x40
    ctx->r2 = ADD32(ctx->r4, -0X40);
L_80228A14:
    // 0x80228A14: addiu       $v0, $a0, 0x40
    ctx->r2 = ADD32(ctx->r4, 0X40);
L_80228A18:
    // 0x80228A18: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80228A1C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228A20: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228A24: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80228A28:
    // 0x80228A28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80228A2C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80228A30: jr          $ra
    // 0x80228A34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228A34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022FBB0_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FBB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FBB4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022FBB8: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022FBBC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FBC0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FBC4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FBC8: lw          $v0, -0x3F88($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3F88);
    // 0x8022FBCC: jalr        $v0
    // 0x8022FBD0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022FBD0: nop

    after_0:
    // 0x8022FBD4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022FBD8: jr          $ra
    // 0x8022FBDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FBDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237450_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237450: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80237454: lb          $v0, -0x3312($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3312);
    // 0x80237458: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023745C: lw          $v1, -0x331C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X331C);
    // 0x80237460: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80237464: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x80237468: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023746C: addiu       $a1, $a1, -0x3320
    ctx->r5 = ADD32(ctx->r5, -0X3320);
    // 0x80237470: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x80237474: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x80237478: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023747C: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x80237480: beq         $a0, $v0, L_802374A8
    if (ctx->r4 == ctx->r2) {
        // 0x80237484: addiu       $sp, $sp, -0x10
        ctx->r29 = ADD32(ctx->r29, -0X10);
            goto L_802374A8;
    }
    // 0x80237484: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80237488: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8023748C: bne         $a0, $v0, L_802374A0
    if (ctx->r4 != ctx->r2) {
        // 0x80237490: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_802374A0;
    }
    // 0x80237490: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80237494: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80237498: j           L_802374A8
    // 0x8023749C: sb          $zero, -0x3312($at)
    MEM_B(-0X3312, ctx->r1) = 0;
        goto L_802374A8;
    // 0x8023749C: sb          $zero, -0x3312($at)
    MEM_B(-0X3312, ctx->r1) = 0;
L_802374A0:
    // 0x802374A0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802374A4: sb          $v0, -0x3312($at)
    MEM_B(-0X3312, ctx->r1) = ctx->r2;
L_802374A8:
    // 0x802374A8: lb          $v1, 0xE($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XE);
    // 0x802374AC: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x802374B0: lb          $a0, 0x11($a1)
    ctx->r4 = MEM_B(ctx->r5, 0X11);
    // 0x802374B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802374B8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x802374BC: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x802374C0: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x802374C4: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
    // 0x802374C8: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
    // 0x802374CC: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x802374D0: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x802374D4: beq         $v1, $v0, L_802374F0
    if (ctx->r3 == ctx->r2) {
        // 0x802374D8: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_802374F0;
    }
    // 0x802374D8: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x802374DC: bne         $v1, $v0, L_802374EC
    if (ctx->r3 != ctx->r2) {
        // 0x802374E0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802374EC;
    }
    // 0x802374E0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802374E4: j           L_802374F0
    // 0x802374E8: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
        goto L_802374F0;
    // 0x802374E8: sb          $zero, 0x11($a1)
    MEM_B(0X11, ctx->r5) = 0;
L_802374EC:
    // 0x802374EC: sb          $v0, 0x11($a1)
    MEM_B(0X11, ctx->r5) = ctx->r2;
L_802374F0:
    // 0x802374F0: lb          $v1, 0x11($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X11);
    // 0x802374F4: lw          $v0, 0x8($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X8);
    // 0x802374F8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802374FC: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80237500: lbu         $v0, 0xC($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XC);
    // 0x80237504: sb          $a0, 0xF($a1)
    MEM_B(0XF, ctx->r5) = ctx->r4;
    // 0x80237508: lbu         $v1, 0xF($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XF);
    // 0x8023750C: sb          $v0, 0x168($a2)
    MEM_B(0X168, ctx->r6) = ctx->r2;
    // 0x80237510: sb          $a0, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r4;
    // 0x80237514: sb          $v1, 0x169($a2)
    MEM_B(0X169, ctx->r6) = ctx->r3;
    // 0x80237518: jr          $ra
    // 0x8023751C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8023751C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_802322BC_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802322BC: lb          $v0, 0x385($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X385);
    // 0x802322C0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802322C4: beq         $v0, $zero, L_802322D8
    if (ctx->r2 == 0) {
        // 0x802322C8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802322D8;
    }
    // 0x802322C8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802322CC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x802322D0: j           L_802322E4
    // 0x802322D4: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
        goto L_802322E4;
    // 0x802322D4: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
L_802322D8:
    // 0x802322D8: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x802322DC: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x802322E0: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
L_802322E4:
    // 0x802322E4: jr          $ra
    // 0x802322E8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x802322E8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80235928_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235928: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023592C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235930: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80235934: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80235938: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023593C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80235940: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80235944: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80235948: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8023594C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80235950: jal         0x8004D5D4
    // 0x80235954: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80235954: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80235958: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8023595C: sw          $zero, 0x4E4($s0)
    MEM_W(0X4E4, ctx->r16) = 0;
    // 0x80235960: sw          $zero, 0x4E8($s0)
    MEM_W(0X4E8, ctx->r16) = 0;
    // 0x80235964: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x80235968: lw          $a0, 0x3C60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3C60);
    // 0x8023596C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80235970: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80235974: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80235978: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8023597C: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x80235980: sh          $v0, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r2;
    // 0x80235984: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80235988: sw          $zero, 0x4F4($s0)
    MEM_W(0X4F4, ctx->r16) = 0;
    // 0x8023598C: sw          $zero, 0x4F8($s0)
    MEM_W(0X4F8, ctx->r16) = 0;
    // 0x80235990: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80235994: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80235998: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8023599C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802359A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802359A4: lbu         $a1, 0xF($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XF);
    // 0x802359A8: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x802359AC: jal         0x800540BC
    // 0x802359B0: addiu       $a0, $s0, 0x504
    ctx->r4 = ADD32(ctx->r16, 0X504);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x802359B0: addiu       $a0, $s0, 0x504
    ctx->r4 = ADD32(ctx->r16, 0X504);
    after_1:
    // 0x802359B4: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x802359B8: sw          $zero, 0x514($s0)
    MEM_W(0X514, ctx->r16) = 0;
    // 0x802359BC: sw          $zero, 0x518($s0)
    MEM_W(0X518, ctx->r16) = 0;
    // 0x802359C0: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x802359C4: lw          $a0, 0x3C60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3C60);
    // 0x802359C8: lhu         $v0, 0x1A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1A);
    // 0x802359CC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802359D0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802359D4: sh          $v0, 0x51C($s0)
    MEM_H(0X51C, ctx->r16) = ctx->r2;
    // 0x802359D8: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x802359DC: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x802359E0: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x802359E4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802359E8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802359EC: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x802359F0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802359F4: addiu       $v0, $v0, -0x3D94
    ctx->r2 = ADD32(ctx->r2, -0X3D94);
    // 0x802359F8: andi        $a0, $a0, 0x7F
    ctx->r4 = ctx->r4 & 0X7F;
    // 0x802359FC: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80235A00: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80235A04: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80235A08: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x80235A0C: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x80235A10: bne         $a0, $zero, L_80235A50
    if (ctx->r4 != 0) {
        // 0x80235A14: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_80235A50;
    }
    // 0x80235A14: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x80235A18: jal         0x8003EF5C
    // 0x80235A1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003EF5C_1A35C(rdram, ctx);
        goto after_2;
    // 0x80235A1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80235A20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235A24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80235A28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235A2C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80235A30: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235A34: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80235A38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235A3C: sh          $v1, 0x51E($s0)
    MEM_H(0X51E, ctx->r16) = ctx->r3;
    // 0x80235A40: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80235A44: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80235A48: j           L_80235A84
    // 0x80235A4C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80235A84;
    // 0x80235A4C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80235A50:
    // 0x80235A50: jal         0x8003E934
    // 0x80235A54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x80235A54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80235A58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235A5C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80235A60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235A64: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80235A68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80235A6C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80235A70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80235A74: sh          $v1, 0x51E($s0)
    MEM_H(0X51E, ctx->r16) = ctx->r3;
    // 0x80235A78: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80235A7C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80235A80: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80235A84:
    // 0x80235A84: jal         0x80050294
    // 0x80235A88: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80235A88: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_4:
    // 0x80235A8C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80235A90: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80235A94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235A98: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235A9C: jr          $ra
    // 0x80235AA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235AA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232B94_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232B94: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80232B98: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80232B9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232BA0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80232BA4: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80232BA8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80232BAC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80232BB0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80232BB4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232BB8: bne         $v1, $v0, L_80232C48
    if (ctx->r3 != ctx->r2) {
        // 0x80232BBC: addiu       $s1, $s0, 0xC4
        ctx->r17 = ADD32(ctx->r16, 0XC4);
            goto L_80232C48;
    }
    // 0x80232BBC: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    // 0x80232BC0: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x80232BC4: lbu         $v1, 0x65($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X65);
    // 0x80232BC8: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x80232BCC: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x80232BD0: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80232BD4: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80232BD8: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80232BDC: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80232BE0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80232BE4: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80232BE8: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80232BEC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80232BF0: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x80232BF4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80232BF8: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x80232BFC: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x80232C00: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x80232C04: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x80232C08: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80232C0C: bne         $v1, $zero, L_80232C48
    if (ctx->r3 != 0) {
        // 0x80232C10: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_80232C48;
    }
    // 0x80232C10: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80232C14: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x80232C18: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x80232C1C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80232C20: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80232C24: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80232C28: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80232C2C: beq         $v1, $v0, L_80232C48
    if (ctx->r3 == ctx->r2) {
        // 0x80232C30: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80232C48;
    }
    // 0x80232C30: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80232C34: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x80232C38: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x80232C3C: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x80232C40: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80232C44: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_80232C48:
    // 0x80232C48: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80232C4C: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80232C50: beq         $v0, $zero, L_80232D9C
    if (ctx->r2 == 0) {
        // 0x80232C54: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80232D9C;
    }
    // 0x80232C54: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80232C58: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232C5C: addu        $at, $at, $v0
    gpr jr_addend_80232C64 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232C60: lw          $v0, -0x35E0($at)
    ctx->r2 = ADD32(ctx->r1, -0X35E0);
    // 0x80232C64: jr          $v0
    // 0x80232C68: nop

    switch (jr_addend_80232C64 >> 2) {
        case 0: goto L_80232C6C; break;
        case 1: goto L_80232C8C; break;
        case 2: goto L_80232CC4; break;
        case 3: goto L_80232CF4; break;
        case 4: goto L_80232CF4; break;
        default: switch_error(__func__, 0x80232C64, 0x8023CA20);
    }
    // 0x80232C68: nop

L_80232C6C:
    // 0x80232C6C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232C70: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x80232C74: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80232C78: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232C7C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80232C80: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80232C84: j           L_80232CA4
    // 0x80232C88: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
        goto L_80232CA4;
    // 0x80232C88: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
L_80232C8C:
    // 0x80232C8C: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x80232C90: lh          $a3, 0x44($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X44);
    // 0x80232C94: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80232C98: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232C9C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80232CA0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
L_80232CA4:
    // 0x80232CA4: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    // 0x80232CA8: jal         0x8004DBA0
    // 0x80232CAC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_0;
    // 0x80232CAC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x80232CB0: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80232CB4: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x80232CB8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232CBC: j           L_80232D9C
    // 0x80232CC0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_80232D9C;
    // 0x80232CC0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80232CC4:
    // 0x80232CC4: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80232CC8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80232CCC: bne         $v1, $v0, L_80232D9C
    if (ctx->r3 != ctx->r2) {
        // 0x80232CD0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232D9C;
    }
    // 0x80232CD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232CD4: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80232CD8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232CDC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80232CE0: jal         0x80050294
    // 0x80232CE4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80232CE4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80232CE8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232CEC: j           L_80232D9C
    // 0x80232CF0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80232D9C;
    // 0x80232CF0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80232CF4:
    // 0x80232CF4: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80232CF8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80232CFC: bne         $v1, $v0, L_80232D68
    if (ctx->r3 != ctx->r2) {
        // 0x80232D00: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80232D68;
    }
    // 0x80232D00: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232D04: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80232D08: bne         $v1, $v0, L_80232D28
    if (ctx->r3 != ctx->r2) {
        // 0x80232D0C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232D28;
    }
    // 0x80232D0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232D10: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80232D14: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80232D18: beq         $v0, $zero, L_80232D28
    if (ctx->r2 == 0) {
        // 0x80232D1C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80232D28;
    }
    // 0x80232D1C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80232D20: j           L_80232D40
    // 0x80232D24: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80232D40;
    // 0x80232D24: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80232D28:
    // 0x80232D28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80232D2C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232D30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232D34: jal         0x80050294
    // 0x80232D38: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80232D38: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x80232D3C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80232D40:
    // 0x80232D40: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80232D44: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80232D48: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80232D4C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80232D50: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80232D54: sb          $v0, 0x3D($s2)
    MEM_B(0X3D, ctx->r18) = ctx->r2;
    // 0x80232D58: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80232D5C: sb          $zero, 0x3C($s2)
    MEM_B(0X3C, ctx->r18) = 0;
    // 0x80232D60: sb          $zero, 0x6($s1)
    MEM_B(0X6, ctx->r17) = 0;
    // 0x80232D64: sb          $v0, 0x395($s0)
    MEM_B(0X395, ctx->r16) = ctx->r2;
L_80232D68:
    // 0x80232D68: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80232D6C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80232D70: bne         $v1, $v0, L_80232D9C
    if (ctx->r3 != ctx->r2) {
        // 0x80232D74: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80232D9C;
    }
    // 0x80232D74: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232D78: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232D7C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80232D80: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80232D84: jal         0x8004F820
    // 0x80232D88: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80232D88: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_3:
    // 0x80232D8C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80232D90: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232D94: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80232D98: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80232D9C:
    // 0x80232D9C: jal         0x8005044C
    // 0x80232DA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x80232DA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80232DA4: jal         0x80040F30
    // 0x80232DA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x80232DA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80232DAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232DB0: jal         0x8003E934
    // 0x80232DB4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80232DB4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    after_6:
    // 0x80232DB8: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x80232DBC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80232DC0: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80232DC4: andi        $v1, $v1, 0x3000
    ctx->r3 = ctx->r3 & 0X3000;
    // 0x80232DC8: bne         $v1, $v0, L_80232E24
    if (ctx->r3 != ctx->r2) {
        // 0x80232DCC: nop
    
            goto L_80232E24;
    }
    // 0x80232DCC: nop

    // 0x80232DD0: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80232DD4: bne         $a0, $v0, L_80232E24
    if (ctx->r4 != ctx->r2) {
        // 0x80232DD8: nop
    
            goto L_80232E24;
    }
    // 0x80232DD8: nop

    // 0x80232DDC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232DE0: bne         $v0, $zero, L_80232DFC
    if (ctx->r2 != 0) {
        // 0x80232DE4: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80232DFC;
    }
    // 0x80232DE4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80232DE8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80232DEC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80232DF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232DF4: j           L_80232E08
    // 0x80232DF8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
        goto L_80232E08;
    // 0x80232DF8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
L_80232DFC:
    // 0x80232DFC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80232E00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232E04: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
L_80232E08:
    // 0x80232E08: jal         0x80050294
    // 0x80232E0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80232E0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80232E10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232E14: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80232E18: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80232E1C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80232E20: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_80232E24:
    // 0x80232E24: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80232E28: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80232E2C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80232E30: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80232E34: jr          $ra
    // 0x80232E38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80232E38: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802386C4_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802386C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802386C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802386CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802386D0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802386D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802386D8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802386DC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802386E0: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802386E4: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x802386E8: beq         $v0, $zero, L_80238840
    if (ctx->r2 == 0) {
        // 0x802386EC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80238840;
    }
    // 0x802386EC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802386F0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802386F4: addu        $at, $at, $v0
    gpr jr_addend_802386FC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802386F8: lw          $v0, -0x3408($at)
    ctx->r2 = ADD32(ctx->r1, -0X3408);
    // 0x802386FC: jr          $v0
    // 0x80238700: nop

    switch (jr_addend_802386FC >> 2) {
        case 0: goto L_80238704; break;
        case 1: goto L_80238724; break;
        case 2: goto L_80238730; break;
        case 3: goto L_80238778; break;
        case 4: goto L_80238798; break;
        case 5: goto L_802387CC; break;
        case 6: goto L_80238800; break;
        default: switch_error(__func__, 0x802386FC, 0x8023CBF8);
    }
    // 0x80238700: nop

L_80238704:
    // 0x80238704: jal         0x8006FF84
    // 0x80238708: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80238708: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8023870C: beq         $v0, $zero, L_80238840
    if (ctx->r2 == 0) {
        // 0x80238710: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80238840;
    }
    // 0x80238710: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80238714: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80238718: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x8023871C: j           L_802387F0
    // 0x80238720: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
        goto L_802387F0;
    // 0x80238720: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
L_80238724:
    // 0x80238724: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80238728: j           L_802387F0
    // 0x8023872C: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
        goto L_802387F0;
    // 0x8023872C: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_80238730:
    // 0x80238730: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80238734: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80238738: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8023873C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80238740: bne         $v0, $zero, L_80238840
    if (ctx->r2 != 0) {
        // 0x80238744: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80238840;
    }
    // 0x80238744: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80238748: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8023874C: lw          $a1, 0x2B24($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B24);
    // 0x80238750: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80238754: addiu       $v0, $zero, 0x36
    ctx->r2 = ADD32(0, 0X36);
    // 0x80238758: jal         0x80061510
    // 0x8023875C: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    func_80061510_3C910(rdram, ctx);
        goto after_1;
    // 0x8023875C: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    after_1:
    // 0x80238760: addiu       $a0, $zero, 0x13F
    ctx->r4 = ADD32(0, 0X13F);
    // 0x80238764: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80238768: jal         0x8002A2F8
    // 0x8023876C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x8023876C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80238770: j           L_802387F0
    // 0x80238774: nop

        goto L_802387F0;
    // 0x80238774: nop

L_80238778:
    // 0x80238778: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x8023877C: bgez        $v0, L_80238840
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80238780: nop
    
            goto L_80238840;
    }
    // 0x80238780: nop

    // 0x80238784: lh          $a0, 0xB0($s1)
    ctx->r4 = MEM_H(ctx->r17, 0XB0);
    // 0x80238788: jal         0x80070F38
    // 0x8023878C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80070F38_4C338(rdram, ctx);
        goto after_3;
    // 0x8023878C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x80238790: j           L_802387F0
    // 0x80238794: nop

        goto L_802387F0;
    // 0x80238794: nop

L_80238798:
    // 0x80238798: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023879C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802387A0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802387A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802387A8: bne         $v0, $zero, L_80238840
    if (ctx->r2 != 0) {
        // 0x802387AC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80238840;
    }
    // 0x802387AC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802387B0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x802387B4: lw          $a1, 0x2B5C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B5C);
    // 0x802387B8: jal         0x80061510
    // 0x802387BC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_4;
    // 0x802387BC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_4:
    // 0x802387C0: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x802387C4: j           L_802387F0
    // 0x802387C8: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
        goto L_802387F0;
    // 0x802387C8: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
L_802387CC:
    // 0x802387CC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802387D0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802387D4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802387D8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802387DC: bne         $v0, $zero, L_80238840
    if (ctx->r2 != 0) {
        // 0x802387E0: nop
    
            goto L_80238840;
    }
    // 0x802387E0: nop

    // 0x802387E4: lb          $v0, 0xA7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA7);
    // 0x802387E8: bgez        $v0, L_80238840
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802387EC: nop
    
            goto L_80238840;
    }
    // 0x802387EC: nop

L_802387F0:
    // 0x802387F0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802387F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802387F8: j           L_80238840
    // 0x802387FC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80238840;
    // 0x802387FC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80238800:
    // 0x80238800: jal         0x8003516C
    // 0x80238804: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_5;
    // 0x80238804: nop

    after_5:
    // 0x80238808: bne         $v0, $zero, L_80238840
    if (ctx->r2 != 0) {
        // 0x8023880C: nop
    
            goto L_80238840;
    }
    // 0x8023880C: nop

    // 0x80238810: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80238814: jal         0x80070050
    // 0x80238818: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_6;
    // 0x80238818: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_6:
    // 0x8023881C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80238820: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    // 0x80238824: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x80238828: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023882C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80238830: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238834: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80238838: jal         0x80060590
    // 0x8023883C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    func_80060590_3B990(rdram, ctx);
        goto after_7;
    // 0x8023883C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    after_7:
L_80238840:
    // 0x80238840: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80238844: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80238848: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023884C: jr          $ra
    // 0x80238850: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80238850: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80238854: nop

    // 0x80238858: nop

    // 0x8023885C: nop

;}
RECOMP_FUNC void func_80225340_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225340: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225344: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80225348: lb          $a1, -0x3BC6($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X3BC6);
    // 0x8022534C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225350: addiu       $v0, $v0, -0x5050
    ctx->r2 = ADD32(ctx->r2, -0X5050);
    // 0x80225354: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225358: addiu       $a0, $a0, -0x5058
    ctx->r4 = ADD32(ctx->r4, -0X5058);
    // 0x8022535C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225360: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80225364: jal         0x8006100C
    // 0x80225368: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    func_8006100C_3C40C(rdram, ctx);
        goto after_0;
    // 0x80225368: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    after_0:
    // 0x8022536C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225370: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    // 0x80225374: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225378: jr          $ra
    // 0x8022537C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022537C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234880_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234880: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80234884: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80234888: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023488C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80234890: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80234894: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80234898: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023489C: jal         0x8009A3B4
    // 0x802348A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802348A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x802348A4: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802348A8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802348AC: jal         0x8009A3B4
    // 0x802348B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802348B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802348B4: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802348B8: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802348BC: jal         0x8009A3B4
    // 0x802348C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802348C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802348C4: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802348C8: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x802348CC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802348D0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802348D4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802348D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802348DC: lw          $v0, -0x3E10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3E10);
    // 0x802348E0: jalr        $v0
    // 0x802348E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802348E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802348E8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802348EC: beq         $v0, $zero, L_80234904
    if (ctx->r2 == 0) {
        // 0x802348F0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80234904;
    }
    // 0x802348F0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802348F4: jal         0x8005044C
    // 0x802348F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x802348F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802348FC: j           L_8023490C
    // 0x80234900: nop

        goto L_8023490C;
    // 0x80234900: nop

L_80234904:
    // 0x80234904: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234908: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8023490C:
    // 0x8023490C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80234910: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80234914: beq         $v0, $zero, L_8023492C
    if (ctx->r2 == 0) {
        // 0x80234918: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023492C;
    }
    // 0x80234918: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023491C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80234920: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80234924: jal         0x8003B564
    // 0x80234928: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_5;
    // 0x80234928: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
L_8023492C:
    // 0x8023492C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80234930: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80234934: beq         $v1, $v0, L_80234950
    if (ctx->r3 == ctx->r2) {
        // 0x80234938: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80234950;
    }
    // 0x80234938: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023493C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80234940: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80234944: jal         0x80047284
    // 0x80234948: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_6;
    // 0x80234948: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
    // 0x8023494C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
L_80234950:
    // 0x80234950: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80234954: bnel        $v1, $v0, L_8023497C
    if (ctx->r3 != ctx->r2) {
        // 0x80234958: sw          $zero, 0xC($s1)
        MEM_W(0XC, ctx->r17) = 0;
            goto L_8023497C;
    }
    goto skip_0;
    // 0x80234958: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    skip_0:
    // 0x8023495C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80234960: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80234964: jal         0x8009A3B4
    // 0x80234968: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80234968: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x8023496C: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80234970: addiu       $v0, $v0, -0x1E
    ctx->r2 = ADD32(ctx->r2, -0X1E);
    // 0x80234974: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80234978: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
L_8023497C:
    // 0x8023497C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80234980: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80234984: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234988: jr          $ra
    // 0x8023498C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023498C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80236F4C_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236F4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236F50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236F54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236F58: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80236F5C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80236F60: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236F64: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80236F68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236F6C: beq         $v1, $v0, L_80237014
    if (ctx->r3 == ctx->r2) {
        // 0x80236F70: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80237014;
    }
    // 0x80236F70: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80236F74: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80236F78: beql        $v0, $zero, L_80236F90
    if (ctx->r2 == 0) {
        // 0x80236F7C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80236F90;
    }
    goto skip_0;
    // 0x80236F7C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80236F80: beq         $v1, $zero, L_80236FA0
    if (ctx->r3 == 0) {
        // 0x80236F84: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236FA0;
    }
    // 0x80236F84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236F88: j           L_80237138
    // 0x80236F8C: nop

        goto L_80237138;
    // 0x80236F8C: nop

L_80236F90:
    // 0x80236F90: beq         $v1, $v0, L_80237074
    if (ctx->r3 == ctx->r2) {
        // 0x80236F94: addiu       $s2, $s0, 0x14
        ctx->r18 = ADD32(ctx->r16, 0X14);
            goto L_80237074;
    }
    // 0x80236F94: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x80236F98: j           L_80237138
    // 0x80236F9C: nop

        goto L_80237138;
    // 0x80236F9C: nop

L_80236FA0:
    // 0x80236FA0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80236FA4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80236FA8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80236FAC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80236FB0: lhu         $v0, -0x3D7C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D7C);
    // 0x80236FB4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80236FB8: lhu         $v1, -0x3D80($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3D80);
    // 0x80236FBC: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80236FC0: lhu         $a0, -0x3D7A($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X3D7A);
    // 0x80236FC4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236FC8: sh          $zero, -0x332E($at)
    MEM_H(-0X332E, ctx->r1) = 0;
    // 0x80236FCC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236FD0: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80236FD4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236FD8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80236FDC: lhu         $v0, -0x3D7E($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3D7E);
    // 0x80236FE0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80236FE4: sra         $a0, $a0, 17
    ctx->r4 = S32(SIGNED(ctx->r4) >> 17);
    // 0x80236FE8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236FEC: sh          $v1, -0x3330($at)
    MEM_H(-0X3330, ctx->r1) = ctx->r3;
    // 0x80236FF0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80236FF4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236FF8: sh          $v0, -0x332C($at)
    MEM_H(-0X332C, ctx->r1) = ctx->r2;
    // 0x80236FFC: lhu         $v1, 0x4E0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E0);
    // 0x80237000: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80237004: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
    // 0x80237008: sh          $zero, 0x4E8($s0)
    MEM_H(0X4E8, ctx->r16) = 0;
    // 0x8023700C: andi        $v1, $v1, 0xFFFB
    ctx->r3 = ctx->r3 & 0XFFFB;
    // 0x80237010: sh          $v1, 0x4E0($s0)
    MEM_H(0X4E0, ctx->r16) = ctx->r3;
L_80237014:
    // 0x80237014: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80237018: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023701C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80237020: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80237024: bltz        $v0, L_80237058
    if (SIGNED(ctx->r2) < 0) {
        // 0x80237028: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80237058;
    }
    // 0x80237028: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023702C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80237030: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80237034: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80237038: addiu       $a1, $a1, -0x3330
    ctx->r5 = ADD32(ctx->r5, -0X3330);
    // 0x8023703C: jal         0x8004F820
    // 0x80237040: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80237040: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_0:
    // 0x80237044: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80237048: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023704C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80237050: j           L_80237138
    // 0x80237054: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
        goto L_80237138;
    // 0x80237054: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80237058:
    // 0x80237058: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023705C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80237060: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80237064: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x80237068: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8023706C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80237070: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
L_80237074:
    // 0x80237074: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80237078: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023707C: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80237080: addiu       $a1, $a1, -0x3330
    ctx->r5 = ADD32(ctx->r5, -0X3330);
    // 0x80237084: jal         0x8004F820
    // 0x80237088: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80237088: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_1:
    // 0x8023708C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80237090: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    // 0x80237094: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80237098: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023709C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802370A0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802370A4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802370A8: jal         0x8004DA90
    // 0x802370AC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x802370AC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_2:
    // 0x802370B0: jal         0x80040F30
    // 0x802370B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x802370B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802370B8: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x802370BC: beq         $v0, $zero, L_802370CC
    if (ctx->r2 == 0) {
        // 0x802370C0: addiu       $a0, $zero, 0xD5
        ctx->r4 = ADD32(0, 0XD5);
            goto L_802370CC;
    }
    // 0x802370C0: addiu       $a0, $zero, 0xD5
    ctx->r4 = ADD32(0, 0XD5);
    // 0x802370C4: jal         0x8002A33C
    // 0x802370C8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x802370C8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_4:
L_802370CC:
    // 0x802370CC: lh          $a2, 0x14($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X14);
    // 0x802370D0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802370D4: lh          $a0, -0x3D80($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3D80);
    // 0x802370D8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802370DC: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x802370E0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802370E4: lh          $v1, -0x3D7E($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X3D7E);
    // 0x802370E8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802370EC: subu        $a2, $a2, $a0
    ctx->r6 = SUB32(ctx->r6, ctx->r4);
    // 0x802370F0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802370F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802370F8: bltz        $v0, L_80237128
    if (SIGNED(ctx->r2) < 0) {
        // 0x802370FC: subu        $a1, $a1, $v1
        ctx->r5 = SUB32(ctx->r5, ctx->r3);
            goto L_80237128;
    }
    // 0x802370FC: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x80237100: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80237104: lh          $v0, -0x3D7C($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3D7C);
    // 0x80237108: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x8023710C: beq         $v0, $zero, L_80237138
    if (ctx->r2 == 0) {
        // 0x80237110: nop
    
            goto L_80237138;
    }
    // 0x80237110: nop

    // 0x80237114: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80237118: lh          $v0, -0x3D7A($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3D7A);
    // 0x8023711C: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80237120: beq         $v0, $zero, L_80237138
    if (ctx->r2 == 0) {
        // 0x80237124: nop
    
            goto L_80237138;
    }
    // 0x80237124: nop

L_80237128:
    // 0x80237128: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023712C: ori         $v0, $v0, 0x5
    ctx->r2 = ctx->r2 | 0X5;
    // 0x80237130: andi        $v0, $v0, 0xFFBF
    ctx->r2 = ctx->r2 & 0XFFBF;
    // 0x80237134: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80237138:
    // 0x80237138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023713C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80237140: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80237144: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237148: jr          $ra
    // 0x8023714C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023714C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CFE0_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CFE0: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8022CFE4: sw          $s2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r18;
    // 0x8022CFE8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022CFEC: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x8022CFF0: sw          $s1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r17;
    // 0x8022CFF4: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    // 0x8022CFF8: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8022CFFC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022D000: bne         $v1, $v0, L_8022D020
    if (ctx->r3 != ctx->r2) {
        // 0x8022D004: nop
    
            goto L_8022D020;
    }
    // 0x8022D004: nop

    // 0x8022D008: jal         0x8022D5EC
    // 0x8022D00C: nop

    func_8022D5EC_ovl21(rdram, ctx);
        goto after_0;
    // 0x8022D00C: nop

    after_0:
    // 0x8022D010: jal         0x8004F684
    // 0x8022D014: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_1;
    // 0x8022D014: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x8022D018: j           L_8022D2D0
    // 0x8022D01C: nop

        goto L_8022D2D0;
    // 0x8022D01C: nop

L_8022D020:
    // 0x8022D020: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x8022D024: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D028: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D02C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D030: lw          $v0, -0x4730($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4730);
    // 0x8022D034: jalr        $v0
    // 0x8022D038: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x8022D038: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x8022D03C: jal         0x8006033C
    // 0x8022D040: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x8022D040: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_3:
    // 0x8022D044: bne         $v0, $zero, L_8022D2C8
    if (ctx->r2 != 0) {
        // 0x8022D048: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8022D2C8;
    }
    // 0x8022D048: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022D04C: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x8022D050: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D054: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x8022D058: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x8022D05C: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
    // 0x8022D060: jal         0x8002C678
    // 0x8022D064: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
    func_8002C678_7A78(rdram, ctx);
        goto after_4;
    // 0x8022D064: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
    after_4:
    // 0x8022D068: lb          $a0, 0xC($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XC);
    // 0x8022D06C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022D070: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x8022D074: jal         0x800319B4
    // 0x8022D078: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800319B4_CDB4(rdram, ctx);
        goto after_5;
    // 0x8022D078: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_5:
    // 0x8022D07C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D080: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x8022D084: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D088: jal         0x800308E8
    // 0x8022D08C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_800308E8_BCE8(rdram, ctx);
        goto after_6;
    // 0x8022D08C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_6:
    // 0x8022D090: lh          $v1, 0x38($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X38);
    // 0x8022D094: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x8022D098: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D09C: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8022D0A0: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x8022D0A4: lh          $v1, 0x3A($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X3A);
    // 0x8022D0A8: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x8022D0AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D0B0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8022D0B4: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8022D0B8: lh          $v1, 0x3C($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X3C);
    // 0x8022D0BC: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x8022D0C0: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x8022D0C4: addiu       $s0, $s0, 0x4760
    ctx->r16 = ADD32(ctx->r16, 0X4760);
    // 0x8022D0C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D0CC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D0D0: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x8022D0D4: jal         0x80031E5C
    // 0x8022D0D8: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    func_80031E5C_D25C(rdram, ctx);
        goto after_7;
    // 0x8022D0D8: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    after_7:
    // 0x8022D0DC: jal         0x80031E94
    // 0x8022D0E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031E94_D294(rdram, ctx);
        goto after_8;
    // 0x8022D0E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8022D0E4: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8022D0E8: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8022D0EC: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022D0F0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022D0F4: jal         0x8009A3B4
    // 0x8022D0F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8022D0F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x8022D0FC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8022D100: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8022D104: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022D108: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8022D10C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8022D110: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x8022D114: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x8022D118: jal         0x80031F0C
    // 0x8022D11C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_10;
    // 0x8022D11C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_10:
    // 0x8022D120: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x8022D124: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8022D128: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x8022D12C: jal         0x8009A3B4
    // 0x8022D130: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8022D130: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_11:
    // 0x8022D134: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022D138: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022D13C: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8022D140: jal         0x8009A3B4
    // 0x8022D144: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x8022D144: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_12:
    // 0x8022D148: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8022D14C: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8022D150: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022D154: jal         0x8009A3B4
    // 0x8022D158: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x8022D158: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_13:
    // 0x8022D15C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8022D160: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8022D164: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022D168: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8022D16C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8022D170: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x8022D174: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x8022D178: jal         0x80031F0C
    // 0x8022D17C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_14;
    // 0x8022D17C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_14:
    // 0x8022D180: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x8022D184: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8022D188: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x8022D18C: jal         0x8009A3B4
    // 0x8022D190: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x8022D190: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_15:
    // 0x8022D194: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022D198: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022D19C: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8022D1A0: jal         0x8009A3B4
    // 0x8022D1A4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_16;
    // 0x8022D1A4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_16:
    // 0x8022D1A8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8022D1AC: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8022D1B0: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    // 0x8022D1B4: jal         0x8009A3B4
    // 0x8022D1B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x8022D1B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_17:
    // 0x8022D1BC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x8022D1C0: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x8022D1C4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022D1C8: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8022D1CC: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x8022D1D0: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x8022D1D4: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x8022D1D8: jal         0x80031F0C
    // 0x8022D1DC: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_18;
    // 0x8022D1DC: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_18:
    // 0x8022D1E0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x8022D1E4: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8022D1E8: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x8022D1EC: jal         0x8009A3B4
    // 0x8022D1F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_19;
    // 0x8022D1F0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_19:
    // 0x8022D1F4: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x8022D1F8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022D1FC: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x8022D200: jal         0x8009A3B4
    // 0x8022D204: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_20;
    // 0x8022D204: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_20:
    // 0x8022D208: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x8022D20C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x8022D210: beq         $a2, $a1, L_8022D2C8
    if (ctx->r6 == ctx->r5) {
        // 0x8022D214: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8022D2C8;
    }
    // 0x8022D214: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022D218: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x8022D21C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x8022D220: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x8022D224: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022D228: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022D22C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022D230: mflo        $v0
    ctx->r2 = lo;
    // 0x8022D234: subu        $v1, $a2, $a1
    ctx->r3 = SUB32(ctx->r6, ctx->r5);
    // 0x8022D238: nop

    // 0x8022D23C: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8022D240: bne         $v1, $zero, L_8022D24C
    if (ctx->r3 != 0) {
        // 0x8022D244: nop
    
            goto L_8022D24C;
    }
    // 0x8022D244: nop

    // 0x8022D248: break       7
    do_break(2149765704);
L_8022D24C:
    // 0x8022D24C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022D250: bne         $v1, $at, L_8022D264
    if (ctx->r3 != ctx->r1) {
        // 0x8022D254: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8022D264;
    }
    // 0x8022D254: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022D258: bne         $v0, $at, L_8022D264
    if (ctx->r2 != ctx->r1) {
        // 0x8022D25C: nop
    
            goto L_8022D264;
    }
    // 0x8022D25C: nop

    // 0x8022D260: break       6
    do_break(2149765728);
L_8022D264:
    // 0x8022D264: mflo        $v0
    ctx->r2 = lo;
    // 0x8022D268: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x8022D26C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022D270: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022D274: beq         $v0, $zero, L_8022D2C8
    if (ctx->r2 == 0) {
        // 0x8022D278: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8022D2C8;
    }
    // 0x8022D278: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022D27C: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x8022D280: lh          $a0, 0x18($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X18);
    // 0x8022D284: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022D288: beq         $v0, $zero, L_8022D2A4
    if (ctx->r2 == 0) {
        // 0x8022D28C: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8022D2A4;
    }
    // 0x8022D28C: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022D290: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x8022D294: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022D298: bne         $v0, $zero, L_8022D2BC
    if (ctx->r2 != 0) {
        // 0x8022D29C: lui         $v0, 0x240
        ctx->r2 = S32(0X240 << 16);
            goto L_8022D2BC;
    }
    // 0x8022D29C: lui         $v0, 0x240
    ctx->r2 = S32(0X240 << 16);
    // 0x8022D2A0: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
L_8022D2A4:
    // 0x8022D2A4: beq         $v0, $zero, L_8022D2C8
    if (ctx->r2 == 0) {
        // 0x8022D2A8: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8022D2C8;
    }
    // 0x8022D2A8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022D2AC: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x8022D2B0: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022D2B4: beq         $v0, $zero, L_8022D2C4
    if (ctx->r2 == 0) {
        // 0x8022D2B8: lui         $v0, 0x240
        ctx->r2 = S32(0X240 << 16);
            goto L_8022D2C4;
    }
    // 0x8022D2B8: lui         $v0, 0x240
    ctx->r2 = S32(0X240 << 16);
L_8022D2BC:
    // 0x8022D2BC: j           L_8022D2CC
    // 0x8022D2C0: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
        goto L_8022D2CC;
    // 0x8022D2C0: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
L_8022D2C4:
    // 0x8022D2C4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_8022D2C8:
    // 0x8022D2C8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_8022D2CC:
    // 0x8022D2CC: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
L_8022D2D0:
    // 0x8022D2D0: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    // 0x8022D2D4: lw          $s2, 0x98($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X98);
    // 0x8022D2D8: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x8022D2DC: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x8022D2E0: jr          $ra
    // 0x8022D2E4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    TRACE_RETURN()
    return;
    // 0x8022D2E4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_80225DBC_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225DBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225DC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225DC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225DC8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225DCC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225DD0: jal         0x80040F30
    // 0x80225DD4: sw          $zero, 0x4F4($s0)
    MEM_W(0X4F4, ctx->r16) = 0;
    func_80040F30_1C330(rdram, ctx);
        goto after_0;
    // 0x80225DD4: sw          $zero, 0x4F4($s0)
    MEM_W(0X4F4, ctx->r16) = 0;
    after_0:
    // 0x80225DD8: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80225DDC: beq         $v0, $zero, L_80225DF0
    if (ctx->r2 == 0) {
        // 0x80225DE0: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80225DF0;
    }
    // 0x80225DE0: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80225DE4: lw          $v0, 0x4F4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4F4);
    // 0x80225DE8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80225DEC: sw          $v0, 0x4F4($s0)
    MEM_W(0X4F4, ctx->r16) = ctx->r2;
L_80225DF0:
    // 0x80225DF0: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x80225DF4: bne         $v0, $zero, L_80225E5C
    if (ctx->r2 != 0) {
        // 0x80225DF8: nop
    
            goto L_80225E5C;
    }
    // 0x80225DF8: nop

    // 0x80225DFC: jal         0x8003E934
    // 0x80225E00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80225E00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80225E04: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80225E08: beql        $v0, $v1, L_80225E48
    if (ctx->r2 == ctx->r3) {
        // 0x80225E0C: sh          $v0, 0x16($s0)
        MEM_H(0X16, ctx->r16) = ctx->r2;
            goto L_80225E48;
    }
    goto skip_0;
    // 0x80225E0C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    skip_0:
    // 0x80225E10: lb          $v0, 0x75($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X75);
    // 0x80225E14: bne         $v0, $zero, L_80225E50
    if (ctx->r2 != 0) {
        // 0x80225E18: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80225E50;
    }
    // 0x80225E18: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80225E1C: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80225E20: jal         0x8009A3B4
    // 0x80225E24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80225E24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80225E28: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80225E2C: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80225E30: jal         0x8009A3B4
    // 0x80225E34: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80225E34: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x80225E38: lw          $v0, 0x4F4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4F4);
    // 0x80225E3C: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80225E40: j           L_80225E50
    // 0x80225E44: sw          $v0, 0x4F4($s0)
    MEM_W(0X4F4, ctx->r16) = ctx->r2;
        goto L_80225E50;
    // 0x80225E44: sw          $v0, 0x4F4($s0)
    MEM_W(0X4F4, ctx->r16) = ctx->r2;
L_80225E48:
    // 0x80225E48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225E4C: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
L_80225E50:
    // 0x80225E50: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x80225E54: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225E58: sw          $v0, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r2;
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
RECOMP_FUNC void func_80237520_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237520: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237524: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237528: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023752C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80237530: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80237534: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80237538: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8023753C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80237540: sltiu       $v0, $v1, 0xB
    ctx->r2 = ctx->r3 < 0XB ? 1 : 0;
    // 0x80237544: beq         $v0, $zero, L_802377A0
    if (ctx->r2 == 0) {
        // 0x80237548: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802377A0;
    }
    // 0x80237548: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023754C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80237550: addu        $at, $at, $v0
    gpr jr_addend_80237558 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237554: lw          $v0, -0x3450($at)
    ctx->r2 = ADD32(ctx->r1, -0X3450);
    // 0x80237558: jr          $v0
    // 0x8023755C: nop

    switch (jr_addend_80237558 >> 2) {
        case 0: goto L_80237560; break;
        case 1: goto L_802375C4; break;
        case 2: goto L_802375E4; break;
        case 3: goto L_80237600; break;
        case 4: goto L_80237620; break;
        case 5: goto L_80237668; break;
        case 6: goto L_802377A0; break;
        case 7: goto L_802377A0; break;
        case 8: goto L_802377A0; break;
        case 9: goto L_802377A0; break;
        case 10: goto L_802376B4; break;
        default: switch_error(__func__, 0x80237558, 0x8023CBB0);
    }
    // 0x8023755C: nop

L_80237560:
    // 0x80237560: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80237564: jal         0x8006FF84
    // 0x80237568: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80237568: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x8023756C: beq         $v0, $zero, L_802377A0
    if (ctx->r2 == 0) {
        // 0x80237570: addiu       $a0, $s1, 0x428
        ctx->r4 = ADD32(ctx->r17, 0X428);
            goto L_802377A0;
    }
    // 0x80237570: addiu       $a0, $s1, 0x428
    ctx->r4 = ADD32(ctx->r17, 0X428);
    // 0x80237574: lbu         $v1, 0xBD($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XBD);
    // 0x80237578: addiu       $a1, $s1, 0x438
    ctx->r5 = ADD32(ctx->r17, 0X438);
    // 0x8023757C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80237580: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80237584: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237588: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8023758C: lui         $v0, 0x104
    ctx->r2 = S32(0X104 << 16);
    // 0x80237590: sw          $v0, 0x428($s1)
    MEM_W(0X428, ctx->r17) = ctx->r2;
    // 0x80237594: lui         $v0, 0xFF9F
    ctx->r2 = S32(0XFF9F << 16);
    // 0x80237598: sw          $v0, 0x42C($s1)
    MEM_W(0X42C, ctx->r17) = ctx->r2;
    // 0x8023759C: lui         $v0, 0xF0
    ctx->r2 = S32(0XF0 << 16);
    // 0x802375A0: sw          $v0, 0x430($s1)
    MEM_W(0X430, ctx->r17) = ctx->r2;
    // 0x802375A4: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x802375A8: jal         0x8004DD04
    // 0x802375AC: sb          $v1, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r3;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x802375AC: sb          $v1, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r3;
    after_1:
    // 0x802375B0: addiu       $v0, $zero, -0x800
    ctx->r2 = ADD32(0, -0X800);
    // 0x802375B4: sh          $zero, 0x440($s1)
    MEM_H(0X440, ctx->r17) = 0;
    // 0x802375B8: sh          $zero, 0x444($s1)
    MEM_H(0X444, ctx->r17) = 0;
    // 0x802375BC: j           L_80237610
    // 0x802375C0: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
        goto L_80237610;
    // 0x802375C0: sh          $v0, 0x442($s1)
    MEM_H(0X442, ctx->r17) = ctx->r2;
L_802375C4:
    // 0x802375C4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802375C8: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x802375CC: ori         $a0, $a0, 0x6600
    ctx->r4 = ctx->r4 | 0X6600;
    // 0x802375D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802375D4: jal         0x80036B1C
    // 0x802375D8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_2;
    // 0x802375D8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    after_2:
    // 0x802375DC: j           L_802377A0
    // 0x802375E0: nop

        goto L_802377A0;
    // 0x802375E0: nop

L_802375E4:
    // 0x802375E4: jal         0x80036B7C
    // 0x802375E8: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_3;
    // 0x802375E8: nop

    after_3:
    // 0x802375EC: beq         $v0, $zero, L_802377A0
    if (ctx->r2 == 0) {
        // 0x802375F0: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_802377A0;
    }
    // 0x802375F0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x802375F4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802375F8: j           L_80237614
    // 0x802375FC: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
        goto L_80237614;
    // 0x802375FC: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
L_80237600:
    // 0x80237600: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80237604: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80237608: bne         $v0, $zero, L_802377A0
    if (ctx->r2 != 0) {
        // 0x8023760C: sw          $v0, 0xC($s0)
        MEM_W(0XC, ctx->r16) = ctx->r2;
            goto L_802377A0;
    }
    // 0x8023760C: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
L_80237610:
    // 0x80237610: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
L_80237614:
    // 0x80237614: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237618: j           L_802377A0
    // 0x8023761C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_802377A0;
    // 0x8023761C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80237620:
    // 0x80237620: jal         0x80036E48
    // 0x80237624: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80036E48_12248(rdram, ctx);
        goto after_4;
    // 0x80237624: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_4:
    // 0x80237628: jal         0x80029114
    // 0x8023762C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80029114_4514(rdram, ctx);
        goto after_5;
    // 0x8023762C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x80237630: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80237634: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80237638: jal         0x8005F6B4
    // 0x8023763C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_6;
    // 0x8023763C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80237640: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80237644: addiu       $v0, $v0, -0x3D70
    ctx->r2 = ADD32(ctx->r2, -0X3D70);
    // 0x80237648: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8023764C: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80237650: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80237654: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80237658: addiu       $v1, $v1, -0x3CA8
    ctx->r3 = ADD32(ctx->r3, -0X3CA8);
    // 0x8023765C: sw          $v1, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r3;
    // 0x80237660: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237664: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80237668:
    // 0x80237668: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023766C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80237670: bne         $v0, $zero, L_802376B4
    if (ctx->r2 != 0) {
        // 0x80237674: nop
    
            goto L_802376B4;
    }
    // 0x80237674: nop

    // 0x80237678: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x8023767C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80237680: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80237684: beq         $v1, $v0, L_8023769C
    if (ctx->r3 == ctx->r2) {
        // 0x80237688: nop
    
            goto L_8023769C;
    }
    // 0x80237688: nop

    // 0x8023768C: jal         0x8006072C
    // 0x80237690: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_7;
    // 0x80237690: nop

    after_7:
    // 0x80237694: beq         $v0, $zero, L_802376B4
    if (ctx->r2 == 0) {
        // 0x80237698: nop
    
            goto L_802376B4;
    }
    // 0x80237698: nop

L_8023769C:
    // 0x8023769C: jal         0x80036E48
    // 0x802376A0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_8;
    // 0x802376A0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_8:
    // 0x802376A4: jal         0x8006036C
    // 0x802376A8: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x802376A8: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    after_9:
    // 0x802376AC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802376B0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802376B4:
    // 0x802376B4: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802376B8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802376BC: beq         $v1, $v0, L_802376D4
    if (ctx->r3 == ctx->r2) {
        // 0x802376C0: nop
    
            goto L_802376D4;
    }
    // 0x802376C0: nop

    // 0x802376C4: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x802376C8: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x802376CC: jalr        $v0
    // 0x802376D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_10;
    // 0x802376D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
L_802376D4:
    // 0x802376D4: jal         0x8005FB90
    // 0x802376D8: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_11;
    // 0x802376D8: nop

    after_11:
    // 0x802376DC: jal         0x80060018
    // 0x802376E0: nop

    func_80060018_3B418(rdram, ctx);
        goto after_12;
    // 0x802376E0: nop

    after_12:
    // 0x802376E4: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802376E8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802376EC: bne         $v1, $v0, L_802377A0
    if (ctx->r3 != ctx->r2) {
        // 0x802376F0: nop
    
            goto L_802377A0;
    }
    // 0x802376F0: nop

    // 0x802376F4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802376F8: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x802376FC: bne         $v0, $zero, L_802377A0
    if (ctx->r2 != 0) {
        // 0x80237700: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802377A0;
    }
    // 0x80237700: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80237704: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80237708: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8023770C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x80237710: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80237714: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80237718: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023771C: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x80237720: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80237724: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80237728: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023772C: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80237730: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80237734: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80237738: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023773C: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80237740: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80237744: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80237748: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x8023774C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80237750: lbu         $v0, -0x330C($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X330C);
    // 0x80237754: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80237758: lbu         $v1, -0x330B($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X330B);
    // 0x8023775C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80237760: sb          $v0, 0x170($s1)
    MEM_B(0X170, ctx->r17) = ctx->r2;
    // 0x80237764: jal         0x800736E0
    // 0x80237768: sb          $v1, 0x171($s1)
    MEM_B(0X171, ctx->r17) = ctx->r3;
    func_800736E0_4EAE0(rdram, ctx);
        goto after_13;
    // 0x80237768: sb          $v1, 0x171($s1)
    MEM_B(0X171, ctx->r17) = ctx->r3;
    after_13:
    // 0x8023776C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80237770: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80237774: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80237778: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023777C: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80237780: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80237784: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80237788: jal         0x80036B00
    // 0x8023778C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_14;
    // 0x8023778C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_14:
    // 0x80237790: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80237794: jal         0x80070050
    // 0x80237798: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_15;
    // 0x80237798: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_15:
    // 0x8023779C: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_802377A0:
    // 0x802377A0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802377A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802377A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802377AC: jr          $ra
    // 0x802377B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802377B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227840_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227840: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227844: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227848: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022784C: lui         $t2, 0x3D08
    ctx->r10 = S32(0X3D08 << 16);
    // 0x80227850: ori         $t2, $t2, 0xE
    ctx->r10 = ctx->r10 | 0XE;
    // 0x80227854: lui         $t1, 0x2C80
    ctx->r9 = S32(0X2C80 << 16);
    // 0x80227858: ori         $t1, $t1, 0x8080
    ctx->r9 = ctx->r9 | 0X8080;
    // 0x8022785C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80227860: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227864: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227868: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022786C: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x80227870: lhu         $a3, 0x20($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X20);
    // 0x80227874: lhu         $t0, 0x24($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X24);
    // 0x80227878: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022787C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80227880: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80227884: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80227888: sw          $t2, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r10;
    // 0x8022788C: sw          $t1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r9;
    // 0x80227890: ori         $v0, $v0, 0x22
    ctx->r2 = ctx->r2 | 0X22;
    // 0x80227894: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80227898: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x8022789C: sh          $v1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r3;
    // 0x802278A0: sh          $a3, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r7;
    // 0x802278A4: sh          $a3, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r7;
    // 0x802278A8: sh          $t0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r8;
    // 0x802278AC: jal         0x8009A3B4
    // 0x802278B0: sh          $t0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r8;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802278B0: sh          $t0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r8;
    after_0:
    // 0x802278B4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802278B8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802278BC: jal         0x8009A3B4
    // 0x802278C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802278C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802278C4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802278C8: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x802278CC: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x802278D0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802278D4: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
    // 0x802278D8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802278DC: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x802278E0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802278E4: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x802278E8: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x802278EC: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x802278F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802278F4: beq         $v1, $v0, L_80227A08
    if (ctx->r3 == ctx->r2) {
        // 0x802278F8: sh          $zero, 0x9A($s0)
        MEM_H(0X9A, ctx->r16) = 0;
            goto L_80227A08;
    }
    // 0x802278F8: sh          $zero, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = 0;
    // 0x802278FC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80227900: beql        $v0, $zero, L_80227918
    if (ctx->r2 == 0) {
        // 0x80227904: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80227918;
    }
    goto skip_0;
    // 0x80227904: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80227908: beq         $v1, $zero, L_80227940
    if (ctx->r3 == 0) {
        // 0x8022790C: nop
    
            goto L_80227940;
    }
    // 0x8022790C: nop

    // 0x80227910: j           L_80227AA4
    // 0x80227914: nop

        goto L_80227AA4;
    // 0x80227914: nop

L_80227918:
    // 0x80227918: beq         $v1, $v0, L_80227A54
    if (ctx->r3 == ctx->r2) {
        // 0x8022791C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80227A54;
    }
    // 0x8022791C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227920: bne         $v1, $v0, L_80227AA4
    if (ctx->r3 != ctx->r2) {
        // 0x80227924: lui         $v0, 0x2C80
        ctx->r2 = S32(0X2C80 << 16);
            goto L_80227AA4;
    }
    // 0x80227924: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x80227928: ori         $v0, $v0, 0x80FF
    ctx->r2 = ctx->r2 | 0X80FF;
    // 0x8022792C: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
    // 0x80227930: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x80227934: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80227938: sh          $v1, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r3;
    // 0x8022793C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80227940:
    // 0x80227940: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80227944: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227948: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022794C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80227950: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80227954: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80227958: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8022795C: jal         0x800324B4
    // 0x80227960: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    func_800324B4_D8B4(rdram, ctx);
        goto after_2;
    // 0x80227960: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    after_2:
    // 0x80227964: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227968: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022796C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80227970: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x80227974: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227978: srl         $v1, $v1, 10
    ctx->r3 = S32(U32(ctx->r3) >> 10);
    // 0x8022797C: jal         0x8004DDE8
    // 0x80227980: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    func_8004DDE8_291E8(rdram, ctx);
        goto after_3;
    // 0x80227980: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    after_3:
    // 0x80227984: lui         $v1, 0x38E3
    ctx->r3 = S32(0X38E3 << 16);
    // 0x80227988: ori         $v1, $v1, 0x8E39
    ctx->r3 = ctx->r3 | 0X8E39;
    // 0x8022798C: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
    // 0x80227990: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80227994: lh          $v1, 0x3EA($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X3EA);
    // 0x80227998: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x8022799C: mfhi        $t3
    ctx->r11 = hi;
    // 0x802279A0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802279A4: srl         $v0, $t3, 3
    ctx->r2 = S32(U32(ctx->r11) >> 3);
    // 0x802279A8: div         $zero, $v1, $v0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r2)));
    // 0x802279AC: bne         $v0, $zero, L_802279B8
    if (ctx->r2 != 0) {
        // 0x802279B0: nop
    
            goto L_802279B8;
    }
    // 0x802279B0: nop

    // 0x802279B4: break       7
    do_break(2149743028);
L_802279B8:
    // 0x802279B8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x802279BC: bne         $v0, $at, L_802279D0
    if (ctx->r2 != ctx->r1) {
        // 0x802279C0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_802279D0;
    }
    // 0x802279C0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x802279C4: bne         $v1, $at, L_802279D0
    if (ctx->r3 != ctx->r1) {
        // 0x802279C8: nop
    
            goto L_802279D0;
    }
    // 0x802279C8: nop

    // 0x802279CC: break       6
    do_break(2149743052);
L_802279D0:
    // 0x802279D0: mflo        $v1
    ctx->r3 = lo;
    // 0x802279D4: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x802279D8: nop

    // 0x802279DC: jal         0x80032498
    // 0x802279E0: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_4;
    // 0x802279E0: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    after_4:
    // 0x802279E4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802279E8: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x802279EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802279F0: srl         $v1, $v1, 10
    ctx->r3 = S32(U32(ctx->r3) >> 10);
    // 0x802279F4: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x802279F8: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x802279FC: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80227A00: j           L_80227AA4
    // 0x80227A04: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
        goto L_80227AA4;
    // 0x80227A04: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
L_80227A08:
    // 0x80227A08: lhu         $v1, 0x64($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X64);
    // 0x80227A0C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227A10: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80227A14: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80227A18: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80227A1C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227A20: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80227A24: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80227A28: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80227A2C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80227A30: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80227A34: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80227A38: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80227A3C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80227A40: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80227A44: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80227A48: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80227A4C: j           L_80227AA4
    // 0x80227A50: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
        goto L_80227AA4;
    // 0x80227A50: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80227A54:
    // 0x80227A54: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80227A58: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227A5C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80227A60: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80227A64: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80227A68: lhu         $v0, 0x64($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X64);
    // 0x80227A6C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80227A70: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80227A74: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80227A78: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80227A7C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80227A80: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80227A84: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80227A88: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80227A8C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80227A90: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80227A94: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80227A98: sra         $v1, $v1, 20
    ctx->r3 = S32(SIGNED(ctx->r3) >> 20);
    // 0x80227A9C: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80227AA0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80227AA4:
    // 0x80227AA4: jal         0x8003F754
    // 0x80227AA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_5;
    // 0x80227AA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80227AAC: beql        $v0, $zero, L_80227AC0
    if (ctx->r2 == 0) {
        // 0x80227AB0: sw          $zero, 0x9C($s0)
        MEM_W(0X9C, ctx->r16) = 0;
            goto L_80227AC0;
    }
    goto skip_1;
    // 0x80227AB0: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    skip_1:
    // 0x80227AB4: jal         0x8004F4F8
    // 0x80227AB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_6;
    // 0x80227AB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80227ABC: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
L_80227AC0:
    // 0x80227AC0: addiu       $a0, $zero, 0x1AF
    ctx->r4 = ADD32(0, 0X1AF);
    // 0x80227AC4: jal         0x8002A33C
    // 0x80227AC8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_7;
    // 0x80227AC8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_7:
    // 0x80227ACC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227AD0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227AD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227AD8: jr          $ra
    // 0x80227ADC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227ADC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802281A8_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802281A8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802281AC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802281B0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802281B4: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x802281B8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802281BC: addiu       $s2, $s1, 0x14
    ctx->r18 = ADD32(ctx->r17, 0X14);
    // 0x802281C0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802281C4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802281C8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802281CC: jal         0x8009A3B4
    // 0x802281D0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802281D0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x802281D4: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x802281D8: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x802281DC: jal         0x8009A3B4
    // 0x802281E0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802281E0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802281E4: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x802281E8: addiu       $s0, $s1, 0x54
    ctx->r16 = ADD32(ctx->r17, 0X54);
    // 0x802281EC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802281F0: jal         0x8009A3B4
    // 0x802281F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802281F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802281F8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802281FC: lbu         $v1, 0x74($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X74);
    // 0x80228200: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80228204: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228208: sw          $v0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r2;
    // 0x8022820C: jal         0x802283C0
    // 0x80228210: sb          $v1, 0x75($s1)
    MEM_B(0X75, ctx->r17) = ctx->r3;
    func_802283C0_ovl21(rdram, ctx);
        goto after_3;
    // 0x80228210: sb          $v1, 0x75($s1)
    MEM_B(0X75, ctx->r17) = ctx->r3;
    after_3:
    // 0x80228214: addiu       $a0, $s1, 0xDC
    ctx->r4 = ADD32(ctx->r17, 0XDC);
    // 0x80228218: jal         0x800540D0
    // 0x8022821C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_4;
    // 0x8022821C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80228220: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80228224: sw          $v0, 0xEC($s1)
    MEM_W(0XEC, ctx->r17) = ctx->r2;
    // 0x80228228: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022822C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80228230: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228234: lw          $v0, -0x4F08($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4F08);
    // 0x80228238: jalr        $v0
    // 0x8022823C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8022823C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80228240: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80228244: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228248: beq         $v1, $v0, L_802282FC
    if (ctx->r3 == ctx->r2) {
        // 0x8022824C: addiu       $a0, $s1, 0xAC
        ctx->r4 = ADD32(ctx->r17, 0XAC);
            goto L_802282FC;
    }
    // 0x8022824C: addiu       $a0, $s1, 0xAC
    ctx->r4 = ADD32(ctx->r17, 0XAC);
    // 0x80228250: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228254: jal         0x8009A3B4
    // 0x80228258: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80228258: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022825C: lbu         $v1, 0xD0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XD0);
    // 0x80228260: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228264: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x80228268: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022826C: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80228270: sb          $v0, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r2;
    // 0x80228274: lhu         $v0, 0xAE($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XAE);
    // 0x80228278: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x8022827C: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80228280: lhu         $a2, -0x4EEC($a2)
    ctx->r6 = MEM_HU(ctx->r6, -0X4EEC);
    // 0x80228284: lbu         $v1, 0xD0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XD0);
    // 0x80228288: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022828C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80228290: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80228294: sh          $v0, 0xAE($s1)
    MEM_H(0XAE, ctx->r17) = ctx->r2;
    // 0x80228298: jal         0x80031600
    // 0x8022829C: sb          $v1, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r3;
    func_80031600_CA00(rdram, ctx);
        goto after_7;
    // 0x8022829C: sb          $v1, 0xD0($s1)
    MEM_B(0XD0, ctx->r17) = ctx->r3;
    after_7:
    // 0x802282A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802282A4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802282A8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802282AC: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802282B0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802282B4: jal         0x80031DA8
    // 0x802282B8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_8;
    // 0x802282B8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_8:
    // 0x802282BC: jal         0x80228498
    // 0x802282C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80228498_ovl21(rdram, ctx);
        goto after_9;
    // 0x802282C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x802282C4: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x802282C8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802282CC: beq         $v1, $v0, L_802282DC
    if (ctx->r3 == ctx->r2) {
        // 0x802282D0: nop
    
            goto L_802282DC;
    }
    // 0x802282D0: nop

    // 0x802282D4: jal         0x80228560
    // 0x802282D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80228560_ovl21(rdram, ctx);
        goto after_10;
    // 0x802282D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
L_802282DC:
    // 0x802282DC: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802282E0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802282E4: beq         $v0, $zero, L_802282FC
    if (ctx->r2 == 0) {
        // 0x802282E8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802282FC;
    }
    // 0x802282E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802282EC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x802282F0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802282F4: jal         0x8003B564
    // 0x802282F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_11;
    // 0x802282F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_11:
L_802282FC:
    // 0x802282FC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80228300: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80228304: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80228308: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022830C: jr          $ra
    // 0x80228310: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80228310: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80236910_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236910: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236914: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236918: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023691C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80236920: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80236924: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236928: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8023692C: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80236930: beq         $v0, $zero, L_80236AF4
    if (ctx->r2 == 0) {
        // 0x80236934: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80236AF4;
    }
    // 0x80236934: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80236938: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023693C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236940: addu        $at, $at, $v0
    gpr jr_addend_80236948 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236944: lw          $v0, -0x34B0($at)
    ctx->r2 = ADD32(ctx->r1, -0X34B0);
    // 0x80236948: jr          $v0
    // 0x8023694C: nop

    switch (jr_addend_80236948 >> 2) {
        case 0: goto L_80236950; break;
        case 1: goto L_80236990; break;
        case 2: goto L_802369DC; break;
        case 3: goto L_80236AA4; break;
        case 4: goto L_80236AD0; break;
        default: switch_error(__func__, 0x80236948, 0x8023CB50);
    }
    // 0x8023694C: nop

L_80236950:
    // 0x80236950: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236954: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80236958: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8023695C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80236960: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80236964: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80236968: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x8023696C: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x80236970: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236974: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80236978: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023697C: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x80236980: andi        $v1, $v1, 0xFFFB
    ctx->r3 = ctx->r3 & 0XFFFB;
    // 0x80236984: jal         0x8003E934
    // 0x80236988: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x80236988: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    after_0:
    // 0x8023698C: sh          $v0, 0x3E($s1)
    MEM_H(0X3E, ctx->r17) = ctx->r2;
L_80236990:
    // 0x80236990: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80236994: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236998: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8023699C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802369A0: bgez        $v0, L_80236AF4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802369A4: nop
    
            goto L_80236AF4;
    }
    // 0x802369A4: nop

    // 0x802369A8: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x802369AC: lhu         $v1, 0x182($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X182);
    // 0x802369B0: addiu       $v0, $v0, 0xC8
    ctx->r2 = ADD32(ctx->r2, 0XC8);
    // 0x802369B4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802369B8: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x802369BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802369C0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802369C4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x802369C8: addiu       $v1, $v1, 0xC8
    ctx->r3 = ADD32(ctx->r3, 0XC8);
    // 0x802369CC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802369D0: sh          $v1, 0x182($s0)
    MEM_H(0X182, ctx->r16) = ctx->r3;
    // 0x802369D4: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x802369D8: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
L_802369DC:
    // 0x802369DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802369E0: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x802369E4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802369E8: jal         0x8004DA90
    // 0x802369EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x802369EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x802369F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802369F4: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x802369F8: lh          $s2, 0x16($s0)
    ctx->r18 = MEM_H(ctx->r16, 0X16);
    // 0x802369FC: lhu         $v1, 0x182($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X182);
    // 0x80236A00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236A04: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x80236A08: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236A0C: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80236A10: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80236A14: jal         0x80040F30
    // 0x80236A18: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x80236A18: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x80236A1C: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x80236A20: lhu         $a0, 0x4E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E);
    // 0x80236A24: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x80236A28: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80236A2C: bne         $v0, $zero, L_80236A44
    if (ctx->r2 != 0) {
        // 0x80236A30: sh          $v1, 0x46($s0)
        MEM_H(0X46, ctx->r16) = ctx->r3;
            goto L_80236A44;
    }
    // 0x80236A30: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x80236A34: lh          $v0, 0x3E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3E);
    // 0x80236A38: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80236A3C: bne         $v0, $zero, L_80236A98
    if (ctx->r2 != 0) {
        // 0x80236A40: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_80236A98;
    }
    // 0x80236A40: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
L_80236A44:
    // 0x80236A44: lhu         $v0, 0x3E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3E);
    // 0x80236A48: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x80236A4C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80236A50: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236A54: bgtz        $v1, L_80236A7C
    if (SIGNED(ctx->r3) > 0) {
        // 0x80236A58: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_80236A7C;
    }
    // 0x80236A58: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80236A5C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80236A60: addiu       $a0, $zero, 0xD3
    ctx->r4 = ADD32(0, 0XD3);
    // 0x80236A64: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80236A68: ori         $v0, $v0, 0x5
    ctx->r2 = ctx->r2 | 0X5;
    // 0x80236A6C: jal         0x8002A33C
    // 0x80236A70: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80236A70: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    after_3:
    // 0x80236A74: j           L_80236AF4
    // 0x80236A78: nop

        goto L_80236AF4;
    // 0x80236A78: nop

L_80236A7C:
    // 0x80236A7C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80236A80: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80236A84: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80236A88: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80236A8C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80236A90: j           L_80236AA4
    // 0x80236A94: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80236AA4;
    // 0x80236A94: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80236A98:
    // 0x80236A98: sh          $s2, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r18;
    // 0x80236A9C: j           L_80236AF4
    // 0x80236AA0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_80236AF4;
    // 0x80236AA0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80236AA4:
    // 0x80236AA4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80236AA8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236AAC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80236AB0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236AB4: bgez        $v0, L_80236AF4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80236AB8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80236AF4;
    }
    // 0x80236AB8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80236ABC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80236AC0: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x80236AC4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80236AC8: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x80236ACC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80236AD0:
    // 0x80236AD0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80236AD4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236AD8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80236ADC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80236AE0: bgez        $v0, L_80236AF4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80236AE4: nop
    
            goto L_80236AF4;
    }
    // 0x80236AE4: nop

    // 0x80236AE8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80236AEC: ori         $v0, $v0, 0x5
    ctx->r2 = ctx->r2 | 0X5;
    // 0x80236AF0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80236AF4:
    // 0x80236AF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80236AF8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80236AFC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236B00: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236B04: jr          $ra
    // 0x80236B08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236B08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226C60_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226C60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226C64: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80226C68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226C6C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80226C70: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80226C74: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80226C78: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80226C7C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80226C80: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80226C84: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80226C88: jal         0x800324B4
    // 0x80226C8C: sh          $zero, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = 0;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80226C8C: sh          $zero, 0x7C($s0)
    MEM_H(0X7C, ctx->r16) = 0;
    after_0:
    // 0x80226C90: lw          $v1, 0x9C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X9C);
    // 0x80226C94: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80226C98: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226C9C: mflo        $v0
    ctx->r2 = lo;
    // 0x80226CA0: lw          $v1, 0xA0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XA0);
    // 0x80226CA4: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80226CA8: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    // 0x80226CAC: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x80226CB0: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x80226CB4: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80226CB8: jal         0x80032498
    // 0x80226CBC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80226CBC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_1:
    // 0x80226CC0: lui         $a3, 0x3D48
    ctx->r7 = S32(0X3D48 << 16);
    // 0x80226CC4: ori         $a3, $a3, 0xE
    ctx->r7 = ctx->r7 | 0XE;
    // 0x80226CC8: lui         $a2, 0x2C80
    ctx->r6 = S32(0X2C80 << 16);
    // 0x80226CCC: lw          $v1, 0x9C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X9C);
    // 0x80226CD0: ori         $a2, $a2, 0x8080
    ctx->r6 = ctx->r6 | 0X8080;
    // 0x80226CD4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80226CD8: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80226CDC: mflo        $v0
    ctx->r2 = lo;
    // 0x80226CE0: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80226CE4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80226CE8: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80226CEC: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80226CF0: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x80226CF4: sw          $a3, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r7;
    // 0x80226CF8: sw          $a2, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r6;
    // 0x80226CFC: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x80226D00: sh          $v1, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r3;
    // 0x80226D04: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80226D08: jal         0x8004DD04
    // 0x80226D0C: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x80226D0C: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    after_2:
    // 0x80226D10: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80226D14: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80226D18: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x80226D1C: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80226D20: lw          $t0, 0x20($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X20);
    // 0x80226D24: lh          $a2, 0x48($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X48);
    // 0x80226D28: lw          $a3, 0x24($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X24);
    // 0x80226D2C: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x80226D30: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80226D34: sll         $a2, $a2, 10
    ctx->r6 = S32(ctx->r6 << 10);
    // 0x80226D38: subu        $a3, $a3, $a2
    ctx->r7 = SUB32(ctx->r7, ctx->r6);
    // 0x80226D3C: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
    // 0x80226D40: sw          $t0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r8;
    // 0x80226D44: jal         0x8004DD04
    // 0x80226D48: sw          $a3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r7;
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x80226D48: sw          $a3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r7;
    after_3:
    // 0x80226D4C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80226D50: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80226D54: beq         $v0, $zero, L_80226D90
    if (ctx->r2 == 0) {
        // 0x80226D58: sw          $zero, 0x78($s0)
        MEM_W(0X78, ctx->r16) = 0;
            goto L_80226D90;
    }
    // 0x80226D58: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80226D5C: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80226D60: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226D64: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226D68: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226D6C: lhu         $v1, -0x4F78($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X4F78);
    // 0x80226D70: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80226D74: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226D78: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80226D7C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226D80: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226D84: lhu         $v0, -0x4F76($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X4F76);
    // 0x80226D88: j           L_80226DC0
    // 0x80226D8C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80226DC0;
    // 0x80226D8C: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80226D90:
    // 0x80226D90: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80226D94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226D98: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226D9C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226DA0: lhu         $v1, -0x4F90($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X4F90);
    // 0x80226DA4: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80226DA8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226DAC: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80226DB0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226DB4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226DB8: lhu         $v0, -0x4F8E($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X4F8E);
    // 0x80226DBC: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80226DC0:
    // 0x80226DC0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80226DC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226DC8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80226DCC: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x80226DD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226DD4: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x80226DD8: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80226DDC: jal         0x802274D8
    // 0x80226DE0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_802274D8_ovl21(rdram, ctx);
        goto after_4;
    // 0x80226DE0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_4:
    // 0x80226DE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226DE8: beq         $v0, $zero, L_80226DF8
    if (ctx->r2 == 0) {
        // 0x80226DEC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80226DF8;
    }
    // 0x80226DEC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226DF0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226DF4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_80226DF8:
    // 0x80226DF8: lhu         $a1, 0x14($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X14);
    // 0x80226DFC: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80226E00: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x80226E04: lhu         $a2, 0x18($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X18);
    // 0x80226E08: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80226E0C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80226E10: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x80226E14: andi        $v1, $v1, 0xFB
    ctx->r3 = ctx->r3 & 0XFB;
    // 0x80226E18: sh          $a1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r5;
    // 0x80226E1C: sh          $v0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r2;
    // 0x80226E20: sh          $a2, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r6;
    // 0x80226E24: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x80226E28: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
    // 0x80226E2C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80226E30: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80226E34: jr          $ra
    // 0x80226E38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226E38: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80229AD0_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229AD0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80229AD4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80229AD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229ADC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80229AE0: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x80229AE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229AE8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80229AEC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80229AF0: sb          $v0, 0x40($s0)
    MEM_B(0X40, ctx->r16) = ctx->r2;
    // 0x80229AF4: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
    // 0x80229AF8: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x80229AFC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80229B00: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80229B04: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80229B08: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80229B0C: sh          $zero, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = 0;
    // 0x80229B10: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80229B14: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80229B18: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229B1C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80229B20: jal         0x800A3450
    // 0x80229B24: sh          $v1, 0x42($s0)
    MEM_H(0X42, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80229B24: sh          $v1, 0x42($s0)
    MEM_H(0X42, ctx->r16) = ctx->r3;
    after_0:
    // 0x80229B28: lui         $v1, 0x3D08
    ctx->r3 = S32(0X3D08 << 16);
    // 0x80229B2C: lhu         $a0, 0x1C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1C);
    // 0x80229B30: lhu         $a2, 0x1E($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X1E);
    // 0x80229B34: lhu         $a3, 0x20($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X20);
    // 0x80229B38: lbu         $a1, 0x40($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X40);
    // 0x80229B3C: ori         $v1, $v1, 0x2E
    ctx->r3 = ctx->r3 | 0X2E;
    // 0x80229B40: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80229B44: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    // 0x80229B48: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x80229B4C: sb          $v0, 0x41($s0)
    MEM_B(0X41, ctx->r16) = ctx->r2;
    // 0x80229B50: sh          $a0, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r4;
    // 0x80229B54: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x80229B58: sll         $v0, $a1, 8
    ctx->r2 = S32(ctx->r5 << 8);
    // 0x80229B5C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80229B60: lbu         $v1, 0x41($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X41);
    // 0x80229B64: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80229B68: lbu         $v0, 0x41($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X41);
    // 0x80229B6C: sw          $zero, 0x30($s0)
    MEM_W(0X30, ctx->r16) = 0;
    // 0x80229B70: sw          $zero, 0x34($s0)
    MEM_W(0X34, ctx->r16) = 0;
    // 0x80229B74: or          $a0, $a0, $a1
    ctx->r4 = ctx->r4 | ctx->r5;
    // 0x80229B78: sw          $a0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r4;
    // 0x80229B7C: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    // 0x80229B80: lui         $a1, 0x6800
    ctx->r5 = S32(0X6800 << 16);
    // 0x80229B84: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80229B88: sh          $a2, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r6;
    // 0x80229B8C: sh          $a3, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r7;
    // 0x80229B90: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80229B94: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229B98: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80229B9C: lbu         $v1, -0x4DA0($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X4DA0);
    // 0x80229BA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229BA4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80229BA8: sb          $v1, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r3;
    // 0x80229BAC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80229BB0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229BB4: lbu         $v1, -0x4D9F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X4D9F);
    // 0x80229BB8: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x80229BBC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80229BC0: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    // 0x80229BC4: addiu       $v0, $s0, 0x30
    ctx->r2 = ADD32(ctx->r16, 0X30);
    // 0x80229BC8: sb          $v1, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r3;
    // 0x80229BCC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80229BD0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80229BD4: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x80229BD8: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80229BDC: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x80229BE0: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x80229BE4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80229BE8: jal         0x80051E18
    // 0x80229BEC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x80229BEC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_1:
    // 0x80229BF0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80229BF4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80229BF8: jr          $ra
    // 0x80229BFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80229BFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022DDF4_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DDF4: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x8022DDF8: bltzl       $v0, L_8022DE00
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022DDFC: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_8022DE00;
    }
    goto skip_0;
    // 0x8022DDFC: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
L_8022DE00:
    // 0x8022DE00: jr          $ra
    // 0x8022DE04: nop

    TRACE_RETURN()
    return;
    // 0x8022DE04: nop

;}
RECOMP_FUNC void func_8022B184_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B184: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B188: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B18C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B190: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8022B194: addiu       $a0, $a0, -0x3BC8
    ctx->r4 = ADD32(ctx->r4, -0X3BC8);
    // 0x8022B198: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B19C: lb          $v1, 0x0($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X0);
    // 0x8022B1A0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022B1A4: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022B1A8: xori        $v0, $v1, 0xE
    ctx->r2 = ctx->r3 ^ 0XE;
    // 0x8022B1AC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022B1B0: xori        $v1, $v1, 0x14
    ctx->r3 = ctx->r3 ^ 0X14;
    // 0x8022B1B4: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022B1B8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022B1BC: bne         $v0, $zero, L_8022B1D8
    if (ctx->r2 != 0) {
        // 0x8022B1C0: lui         $v1, 0xFFFF
        ctx->r3 = S32(0XFFFF << 16);
            goto L_8022B1D8;
    }
    // 0x8022B1C0: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8022B1C4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8022B1C8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022B1CC: lui         $v1, 0x1300
    ctx->r3 = S32(0X1300 << 16);
    // 0x8022B1D0: bne         $v0, $v1, L_8022B268
    if (ctx->r2 != ctx->r3) {
        // 0x8022B1D4: nop
    
            goto L_8022B268;
    }
    // 0x8022B1D4: nop

L_8022B1D8:
    // 0x8022B1D8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022B1DC: lhu         $v1, 0x3A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3A);
    // 0x8022B1E0: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x8022B1E4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022B1E8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022B1EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B1F0: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    // 0x8022B1F4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B1F8: lhu         $v0, 0x4DEA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4DEA);
    // 0x8022B1FC: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8022B200: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8022B204: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022B208: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B20C: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8022B210: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B214: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B218: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8022B21C: lh          $v0, 0x3A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3A);
    // 0x8022B220: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x8022B224: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022B228: bne         $v0, $zero, L_8022B3F8
    if (ctx->r2 != 0) {
        // 0x8022B22C: nop
    
            goto L_8022B3F8;
    }
    // 0x8022B22C: nop

    // 0x8022B230: jal         0x80070050
    // 0x8022B234: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_0;
    // 0x8022B234: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022B238: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B23C: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8022B240: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022B244: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B248: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x8022B24C: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x8022B250: addiu       $a0, $zero, 0x177
    ctx->r4 = ADD32(0, 0X177);
    // 0x8022B254: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8022B258: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022B25C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022B260: j           L_8022B3F0
    // 0x8022B264: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
        goto L_8022B3F0;
    // 0x8022B264: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
L_8022B268:
    // 0x8022B268: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022B26C: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x8022B270: bne         $v0, $zero, L_8022B334
    if (ctx->r2 != 0) {
        // 0x8022B274: addiu       $v0, $zero, 0x7FF
        ctx->r2 = ADD32(0, 0X7FF);
            goto L_8022B334;
    }
    // 0x8022B274: addiu       $v0, $zero, 0x7FF
    ctx->r2 = ADD32(0, 0X7FF);
    // 0x8022B278: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022B27C: lhu         $v1, 0x3A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3A);
    // 0x8022B280: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x8022B284: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022B288: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022B28C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B290: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    // 0x8022B294: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B298: lhu         $v0, 0x4DEA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4DEA);
    // 0x8022B29C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8022B2A0: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8022B2A4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022B2A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B2AC: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8022B2B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B2B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B2B8: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8022B2BC: lh          $v0, 0x3A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3A);
    // 0x8022B2C0: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x8022B2C4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022B2C8: bne         $v0, $zero, L_8022B3F8
    if (ctx->r2 != 0) {
        // 0x8022B2CC: nop
    
            goto L_8022B3F8;
    }
    // 0x8022B2CC: nop

    // 0x8022B2D0: jal         0x80070050
    // 0x8022B2D4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_1;
    // 0x8022B2D4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_1:
    // 0x8022B2D8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022B2DC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B2E0: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8022B2E4: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022B2E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B2EC: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x8022B2F0: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022B2F4: addiu       $a0, $zero, 0x177
    ctx->r4 = ADD32(0, 0X177);
    // 0x8022B2F8: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8022B2FC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022B300: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x8022B304: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022B308: jal         0x8002A33C
    // 0x8022B30C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022B30C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022B310: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022B314: bne         $v0, $zero, L_8022B328
    if (ctx->r2 != 0) {
        // 0x8022B318: nop
    
            goto L_8022B328;
    }
    // 0x8022B318: nop

    // 0x8022B31C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022B320: j           L_8022B3F8
    // 0x8022B324: sh          $zero, -0x3A82($at)
    MEM_H(-0X3A82, ctx->r1) = 0;
        goto L_8022B3F8;
    // 0x8022B324: sh          $zero, -0x3A82($at)
    MEM_H(-0X3A82, ctx->r1) = 0;
L_8022B328:
    // 0x8022B328: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022B32C: j           L_8022B3F8
    // 0x8022B330: sh          $zero, -0x3A80($at)
    MEM_H(-0X3A80, ctx->r1) = 0;
        goto L_8022B3F8;
    // 0x8022B330: sh          $zero, -0x3A80($at)
    MEM_H(-0X3A80, ctx->r1) = 0;
L_8022B334:
    // 0x8022B334: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022B338: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x8022B33C: bne         $v1, $v0, L_8022B388
    if (ctx->r3 != ctx->r2) {
        // 0x8022B340: nop
    
            goto L_8022B388;
    }
    // 0x8022B340: nop

    // 0x8022B344: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022B348: lhu         $v1, 0x3A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3A);
    // 0x8022B34C: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x8022B350: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022B354: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022B358: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B35C: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    // 0x8022B360: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B364: lhu         $v0, 0x4DEA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4DEA);
    // 0x8022B368: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8022B36C: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8022B370: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022B374: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B378: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8022B37C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B380: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B384: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
L_8022B388:
    // 0x8022B388: lh          $v0, 0x3A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3A);
    // 0x8022B38C: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x8022B390: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022B394: bltzl       $v0, L_8022B39C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022B398: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022B39C;
    }
    goto skip_0;
    // 0x8022B398: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8022B39C:
    // 0x8022B39C: slti        $v0, $v0, 0x460
    ctx->r2 = SIGNED(ctx->r2) < 0X460 ? 1 : 0;
    // 0x8022B3A0: bne         $v0, $zero, L_8022B3F8
    if (ctx->r2 != 0) {
        // 0x8022B3A4: nop
    
            goto L_8022B3F8;
    }
    // 0x8022B3A4: nop

    // 0x8022B3A8: jal         0x80070050
    // 0x8022B3AC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_3;
    // 0x8022B3AC: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_3:
    // 0x8022B3B0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022B3B4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B3B8: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8022B3BC: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022B3C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B3C4: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x8022B3C8: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
    // 0x8022B3CC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022B3D0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022B3D4: sh          $v0, -0x3A7E($at)
    MEM_H(-0X3A7E, ctx->r1) = ctx->r2;
    // 0x8022B3D8: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022B3DC: addiu       $a0, $zero, 0x177
    ctx->r4 = ADD32(0, 0X177);
    // 0x8022B3E0: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8022B3E4: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x8022B3E8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022B3EC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_8022B3F0:
    // 0x8022B3F0: jal         0x8002A33C
    // 0x8022B3F4: nop

    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022B3F4: nop

    after_4:
L_8022B3F8:
    // 0x8022B3F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B3FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B400: jr          $ra
    // 0x8022B404: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B404: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802277CC_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802277CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802277D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802277D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802277D8: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x802277DC: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x802277E0: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x802277E4: addiu       $v0, $a0, 0x14
    ctx->r2 = ADD32(ctx->r4, 0X14);
    // 0x802277E8: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x802277EC: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x802277F0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802277F4: jal         0x8009A3B4
    // 0x802277F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802277F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802277FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227800: jr          $ra
    // 0x80227804: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227804: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80227808: nop

    // 0x8022780C: nop

;}
RECOMP_FUNC void func_8022F4C8_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F4C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F4CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F4D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F4D4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F4D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F4DC: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022F4E0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022F4E4: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x8022F4E8: jal         0x8004FA7C
    // 0x8022F4EC: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022F4EC: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022F4F0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022F4F4: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x8022F4F8: beq         $v0, $zero, L_8022F58C
    if (ctx->r2 == 0) {
        // 0x8022F4FC: nop
    
            goto L_8022F58C;
    }
    // 0x8022F4FC: nop

    // 0x8022F500: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022F504: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8022F508: bne         $v0, $zero, L_8022F58C
    if (ctx->r2 != 0) {
        // 0x8022F50C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F58C;
    }
    // 0x8022F50C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F510: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022F514: beq         $v1, $v0, L_8022F52C
    if (ctx->r3 == ctx->r2) {
        // 0x8022F518: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022F52C;
    }
    // 0x8022F518: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F51C: beq         $v1, $v0, L_8022F55C
    if (ctx->r3 == ctx->r2) {
        // 0x8022F520: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022F55C;
    }
    // 0x8022F520: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022F524: j           L_8022F580
    // 0x8022F528: nop

        goto L_8022F580;
    // 0x8022F528: nop

L_8022F52C:
    // 0x8022F52C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F530: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022F534: bne         $v0, $zero, L_8022F580
    if (ctx->r2 != 0) {
        // 0x8022F538: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022F580;
    }
    // 0x8022F538: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022F53C: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022F540: bne         $v0, $zero, L_8022F580
    if (ctx->r2 != 0) {
        // 0x8022F544: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F580;
    }
    // 0x8022F544: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F548: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022F54C: bne         $v1, $v0, L_8022F580
    if (ctx->r3 != ctx->r2) {
        // 0x8022F550: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022F580;
    }
    // 0x8022F550: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022F554: j           L_8022F580
    // 0x8022F558: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022F580;
    // 0x8022F558: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022F55C:
    // 0x8022F55C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F560: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8022F564: beq         $v0, $zero, L_8022F57C
    if (ctx->r2 == 0) {
        // 0x8022F568: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_8022F57C;
    }
    // 0x8022F568: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x8022F56C: bne         $v0, $zero, L_8022F580
    if (ctx->r2 != 0) {
        // 0x8022F570: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022F580;
    }
    // 0x8022F570: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022F574: j           L_8022F580
    // 0x8022F578: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022F580;
    // 0x8022F578: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022F57C:
    // 0x8022F57C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022F580:
    // 0x8022F580: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022F584: beq         $v0, $zero, L_8022F5B0
    if (ctx->r2 == 0) {
        // 0x8022F588: nop
    
            goto L_8022F5B0;
    }
    // 0x8022F588: nop

L_8022F58C:
    // 0x8022F58C: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022F590: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F594: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022F598: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022F59C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022F5A0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022F5A4: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022F5A8: j           L_8022F5C0
    // 0x8022F5AC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022F5C0;
    // 0x8022F5AC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022F5B0:
    // 0x8022F5B0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F5B4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022F5B8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F5BC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022F5C0:
    // 0x8022F5C0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F5C4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F5C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F5CC: jr          $ra
    // 0x8022F5D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F5D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225F18_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225F1C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225F20: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80225F24: beq         $v0, $zero, L_80225F3C
    if (ctx->r2 == 0) {
        // 0x80225F28: nop
    
            goto L_80225F3C;
    }
    // 0x80225F28: nop

    // 0x80225F2C: jal         0x80226804
    // 0x80225F30: nop

    func_80226804_ovl21(rdram, ctx);
        goto after_0;
    // 0x80225F30: nop

    after_0:
    // 0x80225F34: j           L_80225F44
    // 0x80225F38: nop

        goto L_80225F44;
    // 0x80225F38: nop

L_80225F3C:
    // 0x80225F3C: jal         0x8005044C
    // 0x80225F40: nop

    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80225F40: nop

    after_1:
L_80225F44:
    // 0x80225F44: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225F48: jr          $ra
    // 0x80225F4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225F4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230010_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230014: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230018: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023001C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80230020: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230024: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230028: jal         0x8009A3B4
    // 0x8023002C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023002C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80230030: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80230034: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80230038: jal         0x8009A3B4
    // 0x8023003C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023003C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80230040: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80230044: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80230048: jal         0x8009A3B4
    // 0x8023004C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023004C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80230050: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80230054: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230058: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023005C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230060: lw          $v0, -0x3F70($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3F70);
    // 0x80230064: jalr        $v0
    // 0x80230068: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80230068: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8023006C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230070: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80230074: beq         $v0, $zero, L_8023008C
    if (ctx->r2 == 0) {
        // 0x80230078: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023008C;
    }
    // 0x80230078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023007C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80230080: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80230084: jal         0x8003B564
    // 0x80230088: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x80230088: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8023008C:
    // 0x8023008C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230090: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230094: jr          $ra
    // 0x80230098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022969C_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022969C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802296A0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802296A4: jal         0x8004F5C4
    // 0x802296A8: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x802296A8: nop

    after_0:
    // 0x802296AC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802296B0: jr          $ra
    // 0x802296B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802296B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802268A8_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802268A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802268AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802268B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802268B4: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802268B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802268BC: jal         0x80050294
    // 0x802268C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802268C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802268C4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802268C8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x802268CC: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x802268D0: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x802268D4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802268D8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802268DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802268E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802268E4: jr          $ra
    // 0x802268E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802268E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233830_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233830: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80233834: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80233838: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023383C: jal         0x802345C8
    // 0x80233840: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_802345C8_ovl21(rdram, ctx);
        goto after_0;
    // 0x80233840: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80233844: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80233848: bgez        $v0, L_8023385C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023384C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023385C;
    }
    // 0x8023384C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80233850: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80233854: j           L_802338A0
    // 0x80233858: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_802338A0;
    // 0x80233858: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8023385C:
    // 0x8023385C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80233860: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233864: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233868: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023386C: lw          $v0, -0x3E54($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3E54);
    // 0x80233870: jalr        $v0
    // 0x80233874: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80233874: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80233878: lh          $v0, 0x34C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X34C);
    // 0x8023387C: beq         $v0, $zero, L_8023388C
    if (ctx->r2 == 0) {
        // 0x80233880: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8023388C;
    }
    // 0x80233880: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80233884: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80233888: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
L_8023388C:
    // 0x8023388C: lh          $v0, 0x350($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X350);
    // 0x80233890: beq         $v0, $zero, L_802338A0
    if (ctx->r2 == 0) {
        // 0x80233894: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_802338A0;
    }
    // 0x80233894: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80233898: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023389C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
L_802338A0:
    // 0x802338A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802338A4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802338A8: jr          $ra
    // 0x802338AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802338AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80230FF4_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230FF4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80230FF8: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80230FFC: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80231000: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x80231004: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80231008: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x8023100C: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80231010: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80231014: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80231018: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8023101C: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x80231020: addiu       $a0, $s4, 0x368
    ctx->r4 = ADD32(ctx->r20, 0X368);
    // 0x80231024: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80231028: addiu       $s5, $s4, 0x348
    ctx->r21 = ADD32(ctx->r20, 0X348);
    // 0x8023102C: addiu       $s6, $s4, 0xC4
    ctx->r22 = ADD32(ctx->r20, 0XC4);
    // 0x80231030: addiu       $s1, $s4, 0x1D8
    ctx->r17 = ADD32(ctx->r20, 0X1D8);
    // 0x80231034: addiu       $s3, $s4, 0x64
    ctx->r19 = ADD32(ctx->r20, 0X64);
    // 0x80231038: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8023103C: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80231040: andi        $v0, $v0, 0xF7
    ctx->r2 = ctx->r2 & 0XF7;
    // 0x80231044: jal         0x800540D0
    // 0x80231048: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x80231048: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
    after_0:
    // 0x8023104C: beq         $v0, $zero, L_80231060
    if (ctx->r2 == 0) {
        // 0x80231050: nop
    
            goto L_80231060;
    }
    // 0x80231050: nop

    // 0x80231054: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x80231058: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8023105C: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
L_80231060:
    // 0x80231060: lbu         $v0, 0x1DD($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1DD);
    // 0x80231064: beq         $v0, $zero, L_80231070
    if (ctx->r2 == 0) {
        // 0x80231068: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80231070;
    }
    // 0x80231068: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023106C: sb          $v0, 0x1DD($s4)
    MEM_B(0X1DD, ctx->r20) = ctx->r2;
L_80231070:
    // 0x80231070: lhu         $v0, 0x1D8($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1D8);
    // 0x80231074: beq         $v0, $zero, L_80231080
    if (ctx->r2 == 0) {
        // 0x80231078: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80231080;
    }
    // 0x80231078: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023107C: sh          $v0, 0x1D8($s4)
    MEM_H(0X1D8, ctx->r20) = ctx->r2;
L_80231080:
    // 0x80231080: lw          $v1, 0x350($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X350);
    // 0x80231084: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80231088: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8023108C: and         $a1, $v1, $v0
    ctx->r5 = ctx->r3 & ctx->r2;
    // 0x80231090: beq         $a1, $zero, L_802312E0
    if (ctx->r5 == 0) {
        // 0x80231094: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802312E0;
    }
    // 0x80231094: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231098: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x8023109C: bne         $v1, $v0, L_802310B0
    if (ctx->r3 != ctx->r2) {
        // 0x802310A0: nop
    
            goto L_802310B0;
    }
    // 0x802310A0: nop

    // 0x802310A4: lbu         $v0, 0x1DC($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1DC);
    // 0x802310A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802310AC: sb          $v0, 0x1DC($s4)
    MEM_B(0X1DC, ctx->r20) = ctx->r2;
L_802310B0:
    // 0x802310B0: lhu         $v0, 0x6E($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X6E);
    // 0x802310B4: lhu         $a0, 0x6E($s4)
    ctx->r4 = MEM_HU(ctx->r20, 0X6E);
    // 0x802310B8: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x802310BC: sh          $v0, 0x6E($s4)
    MEM_H(0X6E, ctx->r20) = ctx->r2;
    // 0x802310C0: lhu         $v0, 0x1D8($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1D8);
    // 0x802310C4: lh          $v1, 0x6E($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X6E);
    // 0x802310C8: sh          $a0, 0xB2($s4)
    MEM_H(0XB2, ctx->r20) = ctx->r4;
    // 0x802310CC: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x802310D0: bgtz        $v1, L_802310EC
    if (SIGNED(ctx->r3) > 0) {
        // 0x802310D4: sh          $v0, 0x1D8($s4)
        MEM_H(0X1D8, ctx->r20) = ctx->r2;
            goto L_802310EC;
    }
    // 0x802310D4: sh          $v0, 0x1D8($s4)
    MEM_H(0X1D8, ctx->r20) = ctx->r2;
    // 0x802310D8: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x802310DC: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x802310E0: sb          $v1, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r3;
    // 0x802310E4: j           L_80231584
    // 0x802310E8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
        goto L_80231584;
    // 0x802310E8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
L_802310EC:
    // 0x802310EC: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x802310F0: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x802310F4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x802310F8: bne         $v0, $zero, L_8023112C
    if (ctx->r2 != 0) {
        // 0x802310FC: sh          $v1, 0x15E($s4)
        MEM_H(0X15E, ctx->r20) = ctx->r3;
            goto L_8023112C;
    }
    // 0x802310FC: sh          $v1, 0x15E($s4)
    MEM_H(0X15E, ctx->r20) = ctx->r3;
    // 0x80231100: lbu         $v0, 0x2($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X2);
    // 0x80231104: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80231108: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8023110C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231110: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231114: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80231118: lhu         $v0, 0x1D8($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1D8);
    // 0x8023111C: lbu         $v1, 0x9($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X9);
    // 0x80231120: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80231124: beq         $v0, $zero, L_80231140
    if (ctx->r2 == 0) {
        // 0x80231128: nop
    
            goto L_80231140;
    }
    // 0x80231128: nop

L_8023112C:
    // 0x8023112C: lw          $v0, 0x350($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X350);
    // 0x80231130: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x80231134: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80231138: beq         $v0, $zero, L_802311FC
    if (ctx->r2 == 0) {
        // 0x8023113C: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_802311FC;
    }
    // 0x8023113C: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_80231140:
    // 0x80231140: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x80231144: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231148: beq         $v1, $v0, L_80231588
    if (ctx->r3 == ctx->r2) {
        // 0x8023114C: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_80231588;
    }
    // 0x8023114C: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x80231150: addiu       $s0, $s4, 0x14
    ctx->r16 = ADD32(ctx->r20, 0X14);
    // 0x80231154: jal         0x8002A33C
    // 0x80231158: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x80231158: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023115C: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x80231160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231164: addiu       $a1, $s5, 0x10
    ctx->r5 = ADD32(ctx->r21, 0X10);
    // 0x80231168: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
    // 0x8023116C: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
    // 0x80231170: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
    // 0x80231174: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80231178: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x8023117C: sb          $zero, 0x4($s1)
    MEM_B(0X4, ctx->r17) = 0;
    // 0x80231180: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x80231184: lh          $a2, 0x56($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X56);
    // 0x80231188: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8023118C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80231190: jal         0x8004FEA0
    // 0x80231194: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_2;
    // 0x80231194: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    after_2:
    // 0x80231198: addiu       $v1, $zero, 0xC0
    ctx->r3 = ADD32(0, 0XC0);
    // 0x8023119C: sh          $v1, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r3;
    // 0x802311A0: addiu       $v1, $zero, -0xC0
    ctx->r3 = ADD32(0, -0XC0);
    // 0x802311A4: sh          $v1, 0x46($s4)
    MEM_H(0X46, ctx->r20) = ctx->r3;
    // 0x802311A8: lbu         $v1, 0x6($s6)
    ctx->r3 = MEM_BU(ctx->r22, 0X6);
    // 0x802311AC: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x802311B0: sb          $v1, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r3;
    // 0x802311B4: addiu       $v1, $v0, 0x800
    ctx->r3 = ADD32(ctx->r2, 0X800);
    // 0x802311B8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802311BC: sh          $v1, 0x56($s4)
    MEM_H(0X56, ctx->r20) = ctx->r3;
    // 0x802311C0: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x802311C4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802311C8: bne         $v0, $zero, L_802311E4
    if (ctx->r2 != 0) {
        // 0x802311CC: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_802311E4;
    }
    // 0x802311CC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x802311D0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802311D4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802311D8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802311DC: j           L_802312D0
    // 0x802311E0: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_802312D0;
    // 0x802311E0: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_802311E4:
    // 0x802311E4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x802311E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802311EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802311F0: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x802311F4: j           L_802312D0
    // 0x802311F8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
        goto L_802312D0;
    // 0x802311F8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
L_802311FC:
    // 0x802311FC: addiu       $s0, $s4, 0x14
    ctx->r16 = ADD32(ctx->r20, 0X14);
    // 0x80231200: jal         0x8002A33C
    // 0x80231204: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80231204: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80231208: lbu         $v0, 0x1DD($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1DD);
    // 0x8023120C: beq         $v0, $zero, L_80231258
    if (ctx->r2 == 0) {
        // 0x80231210: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80231258;
    }
    // 0x80231210: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231214: lbu         $v1, 0x1DC($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1DC);
    // 0x80231218: bne         $v1, $v0, L_80231588
    if (ctx->r3 != ctx->r2) {
        // 0x8023121C: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80231588;
    }
    // 0x8023121C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231220: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x80231224: beq         $v1, $v0, L_80231588
    if (ctx->r3 == ctx->r2) {
        // 0x80231228: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_80231588;
    }
    // 0x80231228: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8023122C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80231230: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231234: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231238: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8023123C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80231240: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
    // 0x80231244: jal         0x80050294
    // 0x80231248: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80231248: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    after_4:
    // 0x8023124C: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x80231250: j           L_80231584
    // 0x80231254: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
        goto L_80231584;
    // 0x80231254: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
L_80231258:
    // 0x80231258: addiu       $a0, $s4, 0x1C
    ctx->r4 = ADD32(ctx->r20, 0X1C);
    // 0x8023125C: lh          $a1, 0x56($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X56);
    // 0x80231260: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x80231264: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80231268: sb          $v0, 0x1DD($s4)
    MEM_B(0X1DD, ctx->r20) = ctx->r2;
    // 0x8023126C: sb          $zero, 0x1DC($s4)
    MEM_B(0X1DC, ctx->r20) = 0;
    // 0x80231270: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80231274: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x80231278: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x8023127C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80231280: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80231284: jal         0x8004FAEC
    // 0x80231288: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_5;
    // 0x80231288: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_5:
    // 0x8023128C: bne         $v0, $zero, L_80231588
    if (ctx->r2 != 0) {
        // 0x80231290: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80231588;
    }
    // 0x80231290: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80231294: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x80231298: beq         $v1, $v0, L_80231588
    if (ctx->r3 == ctx->r2) {
        // 0x8023129C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231588;
    }
    // 0x8023129C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802312A0: lh          $a2, 0x56($s4)
    ctx->r6 = MEM_H(ctx->r20, 0X56);
    // 0x802312A4: lh          $a3, 0x382($s4)
    ctx->r7 = MEM_H(ctx->r20, 0X382);
    // 0x802312A8: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x802312AC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802312B0: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x802312B4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802312B8: jal         0x8004F820
    // 0x802312BC: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x802312BC: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    after_6:
    // 0x802312C0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x802312C4: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x802312C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802312CC: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_802312D0:
    // 0x802312D0: jal         0x80050294
    // 0x802312D4: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x802312D4: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    after_7:
    // 0x802312D8: j           L_80231588
    // 0x802312DC: nop

        goto L_80231588;
    // 0x802312DC: nop

L_802312E0:
    // 0x802312E0: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x802312E4: addiu       $v0, $v1, -0x2
    ctx->r2 = ADD32(ctx->r3, -0X2);
    // 0x802312E8: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x802312EC: bne         $v0, $zero, L_80231588
    if (ctx->r2 != 0) {
        // 0x802312F0: addiu       $v0, $v1, -0x4
        ctx->r2 = ADD32(ctx->r3, -0X4);
            goto L_80231588;
    }
    // 0x802312F0: addiu       $v0, $v1, -0x4
    ctx->r2 = ADD32(ctx->r3, -0X4);
    // 0x802312F4: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x802312F8: bne         $v0, $zero, L_80231588
    if (ctx->r2 != 0) {
        // 0x802312FC: nop
    
            goto L_80231588;
    }
    // 0x802312FC: nop

    // 0x80231300: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x80231304: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80231308: bne         $v0, $zero, L_80231588
    if (ctx->r2 != 0) {
        // 0x8023130C: andi        $v1, $v1, 0xFF
        ctx->r3 = ctx->r3 & 0XFF;
            goto L_80231588;
    }
    // 0x8023130C: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x80231310: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80231314: beq         $v1, $v0, L_80231588
    if (ctx->r3 == ctx->r2) {
        // 0x80231318: nop
    
            goto L_80231588;
    }
    // 0x80231318: nop

    // 0x8023131C: lb          $v0, 0x386($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X386);
    // 0x80231320: beq         $v0, $zero, L_80231330
    if (ctx->r2 == 0) {
        // 0x80231324: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80231330;
    }
    // 0x80231324: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80231328: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023132C: sb          $v0, 0x386($s4)
    MEM_B(0X386, ctx->r20) = ctx->r2;
L_80231330:
    // 0x80231330: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x80231334: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80231338: beq         $v0, $zero, L_80231548
    if (ctx->r2 == 0) {
        // 0x8023133C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231548;
    }
    // 0x8023133C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231340: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x80231344: beq         $v1, $v0, L_80231504
    if (ctx->r3 == ctx->r2) {
        // 0x80231348: addiu       $a0, $s4, 0x1C
        ctx->r4 = ADD32(ctx->r20, 0X1C);
            goto L_80231504;
    }
    // 0x80231348: addiu       $a0, $s4, 0x1C
    ctx->r4 = ADD32(ctx->r20, 0X1C);
    // 0x8023134C: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x80231350: lh          $a1, 0x56($s4)
    ctx->r5 = MEM_H(ctx->r20, 0X56);
    // 0x80231354: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80231358: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x8023135C: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x80231360: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80231364: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80231368: jal         0x8004FAEC
    // 0x8023136C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_8;
    // 0x8023136C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_8:
    // 0x80231370: beq         $v0, $zero, L_80231470
    if (ctx->r2 == 0) {
        // 0x80231374: lui         $v0, 0x8
        ctx->r2 = S32(0X8 << 16);
            goto L_80231470;
    }
    // 0x80231374: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x80231378: lw          $v1, 0x80($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X80);
    // 0x8023137C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80231380: beq         $v0, $zero, L_80231394
    if (ctx->r2 == 0) {
        // 0x80231384: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231394;
    }
    // 0x80231384: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231388: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8023138C: j           L_80231504
    // 0x80231390: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_80231504;
    // 0x80231390: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_80231394:
    // 0x80231394: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x80231398: ori         $v0, $v0, 0xE847
    ctx->r2 = ctx->r2 | 0XE847;
    // 0x8023139C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x802313A0: bne         $v0, $zero, L_802313EC
    if (ctx->r2 != 0) {
        // 0x802313A4: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_802313EC;
    }
    // 0x802313A4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802313A8: lb          $v0, 0x386($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X386);
    // 0x802313AC: bne         $v0, $zero, L_802313EC
    if (ctx->r2 != 0) {
        // 0x802313B0: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_802313EC;
    }
    // 0x802313B0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802313B4: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x802313B8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802313BC: beq         $v1, $v0, L_802313D0
    if (ctx->r3 == ctx->r2) {
        // 0x802313C0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802313D0;
    }
    // 0x802313C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802313C4: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x802313C8: j           L_802314FC
    // 0x802313CC: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_802314FC;
    // 0x802313CC: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_802313D0:
    // 0x802313D0: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x802313D4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802313D8: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x802313DC: sb          $zero, 0x66($s4)
    MEM_B(0X66, ctx->r20) = 0;
    // 0x802313E0: sb          $zero, 0x65($s4)
    MEM_B(0X65, ctx->r20) = 0;
    // 0x802313E4: j           L_802314FC
    // 0x802313E8: sb          $zero, 0x64($s4)
    MEM_B(0X64, ctx->r20) = 0;
        goto L_802314FC;
    // 0x802313E8: sb          $zero, 0x64($s4)
    MEM_B(0X64, ctx->r20) = 0;
L_802313EC:
    // 0x802313EC: sb          $zero, 0x9($s4)
    MEM_B(0X9, ctx->r20) = 0;
    // 0x802313F0: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x802313F4: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x802313F8: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802313FC: bne         $v0, $zero, L_80231418
    if (ctx->r2 != 0) {
        // 0x80231400: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80231418;
    }
    // 0x80231400: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80231404: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x80231408: sb          $zero, 0x7($s6)
    MEM_B(0X7, ctx->r22) = 0;
    // 0x8023140C: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80231410: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
    // 0x80231414: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_80231418:
    // 0x80231418: sh          $v0, 0x3A($s5)
    MEM_H(0X3A, ctx->r21) = ctx->r2;
    // 0x8023141C: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x80231420: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231424: beq         $v1, $v0, L_80231504
    if (ctx->r3 == ctx->r2) {
        // 0x80231428: nop
    
            goto L_80231504;
    }
    // 0x80231428: nop

    // 0x8023142C: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x80231430: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80231434: bne         $v0, $zero, L_80231504
    if (ctx->r2 != 0) {
        // 0x80231438: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80231504;
    }
    // 0x80231438: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023143C: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x80231440: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231444: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    // 0x80231448: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x8023144C: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x80231450: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80231454: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
    // 0x80231458: lbu         $a1, 0xAC($s4)
    ctx->r5 = MEM_BU(ctx->r20, 0XAC);
    // 0x8023145C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80231460: jal         0x80050294
    // 0x80231464: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_9;
    // 0x80231464: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x80231468: j           L_80231504
    // 0x8023146C: nop

        goto L_80231504;
    // 0x8023146C: nop

L_80231470:
    // 0x80231470: lbu         $v1, 0xCA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XCA);
    // 0x80231474: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80231478: sb          $zero, 0x9($s4)
    MEM_B(0X9, ctx->r20) = 0;
    // 0x8023147C: andi        $v1, $v1, 0x80
    ctx->r3 = ctx->r3 & 0X80;
    // 0x80231480: bne         $v1, $zero, L_80231498
    if (ctx->r3 != 0) {
        // 0x80231484: sb          $v0, 0xA($s4)
        MEM_B(0XA, ctx->r20) = ctx->r2;
            goto L_80231498;
    }
    // 0x80231484: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x80231488: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x8023148C: sb          $zero, 0xCB($s4)
    MEM_B(0XCB, ctx->r20) = 0;
    // 0x80231490: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80231494: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
L_80231498:
    // 0x80231498: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x8023149C: lw          $a0, 0x80($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X80);
    // 0x802314A0: ori         $v0, $v0, 0xE847
    ctx->r2 = ctx->r2 | 0XE847;
    // 0x802314A4: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x802314A8: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x802314AC: bne         $v0, $zero, L_80231504
    if (ctx->r2 != 0) {
        // 0x802314B0: sh          $v1, 0x382($s4)
        MEM_H(0X382, ctx->r20) = ctx->r3;
            goto L_80231504;
    }
    // 0x802314B0: sh          $v1, 0x382($s4)
    MEM_H(0X382, ctx->r20) = ctx->r3;
    // 0x802314B4: lb          $v0, 0x386($s4)
    ctx->r2 = MEM_B(ctx->r20, 0X386);
    // 0x802314B8: bne         $v0, $zero, L_80231504
    if (ctx->r2 != 0) {
        // 0x802314BC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80231504;
    }
    // 0x802314BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802314C0: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x802314C4: beq         $v1, $v0, L_802314D8
    if (ctx->r3 == ctx->r2) {
        // 0x802314C8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802314D8;
    }
    // 0x802314C8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802314CC: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x802314D0: j           L_802314F0
    // 0x802314D4: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
        goto L_802314F0;
    // 0x802314D4: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
L_802314D8:
    // 0x802314D8: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x802314DC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802314E0: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x802314E4: sb          $zero, 0x66($s4)
    MEM_B(0X66, ctx->r20) = 0;
    // 0x802314E8: sb          $zero, 0x65($s4)
    MEM_B(0X65, ctx->r20) = 0;
    // 0x802314EC: sb          $zero, 0x64($s4)
    MEM_B(0X64, ctx->r20) = 0;
L_802314F0:
    // 0x802314F0: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x802314F4: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x802314F8: sb          $v0, 0x6($s6)
    MEM_B(0X6, ctx->r22) = ctx->r2;
L_802314FC:
    // 0x802314FC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80231500: sh          $v0, 0x3A($s5)
    MEM_H(0X3A, ctx->r21) = ctx->r2;
L_80231504:
    // 0x80231504: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x80231508: lui         $v1, 0xFF
    ctx->r3 = S32(0XFF << 16);
    // 0x8023150C: ori         $v1, $v1, 0xFF00
    ctx->r3 = ctx->r3 | 0XFF00;
    // 0x80231510: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80231514: addiu       $v1, $zero, 0x600
    ctx->r3 = ADD32(0, 0X600);
    // 0x80231518: bne         $v0, $v1, L_80231588
    if (ctx->r2 != ctx->r3) {
        // 0x8023151C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231588;
    }
    // 0x8023151C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231520: lbu         $v1, 0xAC($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XAC);
    // 0x80231524: beq         $v1, $v0, L_80231588
    if (ctx->r3 == ctx->r2) {
        // 0x80231528: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80231588;
    }
    // 0x80231528: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023152C: sb          $v0, 0xAC($s4)
    MEM_B(0XAC, ctx->r20) = ctx->r2;
    // 0x80231530: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80231534: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80231538: jal         0x80050294
    // 0x8023153C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_10;
    // 0x8023153C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_10:
    // 0x80231540: j           L_80231588
    // 0x80231544: nop

        goto L_80231588;
    // 0x80231544: nop

L_80231548:
    // 0x80231548: lbu         $v0, 0x9($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X9);
    // 0x8023154C: bne         $v0, $zero, L_80231590
    if (ctx->r2 != 0) {
        // 0x80231550: sll         $v0, $v0, 2
        ctx->r2 = S32(ctx->r2 << 2);
            goto L_80231590;
    }
    // 0x80231550: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231554: lbu         $v1, 0xA($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA);
    // 0x80231558: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8023155C: bne         $v1, $v0, L_80231588
    if (ctx->r3 != ctx->r2) {
        // 0x80231560: addiu       $v1, $zero, 0x50
        ctx->r3 = ADD32(0, 0X50);
            goto L_80231588;
    }
    // 0x80231560: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
    // 0x80231564: lbu         $v0, 0xCA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XCA);
    // 0x80231568: sh          $v1, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r3;
    // 0x8023156C: addiu       $v1, $zero, 0x78
    ctx->r3 = ADD32(0, 0X78);
    // 0x80231570: sb          $zero, 0xA($s4)
    MEM_B(0XA, ctx->r20) = 0;
    // 0x80231574: sb          $zero, 0xF($s4)
    MEM_B(0XF, ctx->r20) = 0;
    // 0x80231578: sb          $v1, 0x385($s4)
    MEM_B(0X385, ctx->r20) = ctx->r3;
    // 0x8023157C: sb          $zero, 0x384($s4)
    MEM_B(0X384, ctx->r20) = 0;
    // 0x80231580: andi        $v0, $v0, 0x7E
    ctx->r2 = ctx->r2 & 0X7E;
L_80231584:
    // 0x80231584: sb          $v0, 0xCA($s4)
    MEM_B(0XCA, ctx->r20) = ctx->r2;
L_80231588:
    // 0x80231588: lbu         $v0, 0x9($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X9);
    // 0x8023158C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80231590:
    // 0x80231590: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231594: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231598: lw          $v0, -0x3F14($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3F14);
    // 0x8023159C: jalr        $v0
    // 0x802315A0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x802315A0: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_11:
    // 0x802315A4: lbu         $v1, 0xA6($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0XA6);
    // 0x802315A8: andi        $v0, $v1, 0x4
    ctx->r2 = ctx->r3 & 0X4;
    // 0x802315AC: bne         $v0, $zero, L_802315C0
    if (ctx->r2 != 0) {
        // 0x802315B0: addiu       $a0, $zero, 0x159
        ctx->r4 = ADD32(0, 0X159);
            goto L_802315C0;
    }
    // 0x802315B0: addiu       $a0, $zero, 0x159
    ctx->r4 = ADD32(0, 0X159);
    // 0x802315B4: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x802315B8: beq         $v0, $zero, L_802315C8
    if (ctx->r2 == 0) {
        // 0x802315BC: addiu       $a0, $zero, 0x15A
        ctx->r4 = ADD32(0, 0X15A);
            goto L_802315C8;
    }
    // 0x802315BC: addiu       $a0, $zero, 0x15A
    ctx->r4 = ADD32(0, 0X15A);
L_802315C0:
    // 0x802315C0: jal         0x8002A33C
    // 0x802315C4: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_12;
    // 0x802315C4: addiu       $a1, $s4, 0x14
    ctx->r5 = ADD32(ctx->r20, 0X14);
    after_12:
L_802315C8:
    // 0x802315C8: lbu         $v1, 0x9($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X9);
    // 0x802315CC: addiu       $v0, $v1, -0x5
    ctx->r2 = ADD32(ctx->r3, -0X5);
    // 0x802315D0: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x802315D4: bne         $v0, $zero, L_802315F0
    if (ctx->r2 != 0) {
        // 0x802315D8: andi        $v1, $v1, 0xFF
        ctx->r3 = ctx->r3 & 0XFF;
            goto L_802315F0;
    }
    // 0x802315D8: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x802315DC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802315E0: beq         $v1, $v0, L_802315F0
    if (ctx->r3 == ctx->r2) {
        // 0x802315E4: nop
    
            goto L_802315F0;
    }
    // 0x802315E4: nop

    // 0x802315E8: jal         0x8023328C
    // 0x802315EC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8023328C_ovl21(rdram, ctx);
        goto after_13;
    // 0x802315EC: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_13:
L_802315F0:
    // 0x802315F0: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x802315F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802315F8: bnel        $v1, $v0, L_80231680
    if (ctx->r3 != ctx->r2) {
        // 0x802315FC: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_80231680;
    }
    goto skip_0;
    // 0x802315FC: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    skip_0:
    // 0x80231600: lh          $v0, 0x15E($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X15E);
    // 0x80231604: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x80231608: beq         $v0, $zero, L_80231628
    if (ctx->r2 == 0) {
        // 0x8023160C: nop
    
            goto L_80231628;
    }
    // 0x8023160C: nop

    // 0x80231610: lb          $v0, 0x2($s3)
    ctx->r2 = MEM_B(ctx->r19, 0X2);
    // 0x80231614: bne         $v0, $zero, L_80231628
    if (ctx->r2 != 0) {
        // 0x80231618: nop
    
            goto L_80231628;
    }
    // 0x80231618: nop

    // 0x8023161C: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x80231620: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80231624: sb          $v0, 0x0($s4)
    MEM_B(0X0, ctx->r20) = ctx->r2;
L_80231628:
    // 0x80231628: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8023162C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80231630: bne         $v0, $zero, L_80231680
    if (ctx->r2 != 0) {
        // 0x80231634: addu        $a0, $s5, $zero
        ctx->r4 = ADD32(ctx->r21, 0);
            goto L_80231680;
    }
    // 0x80231634: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80231638: addiu       $a1, $s4, 0x180
    ctx->r5 = ADD32(ctx->r20, 0X180);
    // 0x8023163C: jal         0x8009A3B4
    // 0x80231640: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_14;
    // 0x80231640: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_14:
    // 0x80231644: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80231648: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8023164C: lbu         $v1, 0x1($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1);
    // 0x80231650: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231654: addiu       $v0, $s5, 0x8
    ctx->r2 = ADD32(ctx->r21, 0X8);
    // 0x80231658: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023165C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80231660: lb          $v1, 0x73($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X73);
    // 0x80231664: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80231668: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023166C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80231670: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80231674: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80231678: j           L_802316C0
    // 0x8023167C: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
        goto L_802316C0;
    // 0x8023167C: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
L_80231680:
    // 0x80231680: addiu       $a1, $s4, 0x180
    ctx->r5 = ADD32(ctx->r20, 0X180);
    // 0x80231684: jal         0x8009A3B4
    // 0x80231688: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x80231688: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_15:
    // 0x8023168C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80231690: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80231694: lbu         $v1, 0x1($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X1);
    // 0x80231698: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023169C: addiu       $v0, $s5, 0x8
    ctx->r2 = ADD32(ctx->r21, 0X8);
    // 0x802316A0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802316A4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x802316A8: lb          $v1, 0x73($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X73);
    // 0x802316AC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x802316B0: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802316B4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802316B8: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x802316BC: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_802316C0:
    // 0x802316C0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802316C4: jal         0x80051E18
    // 0x802316C8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_16;
    // 0x802316C8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_16:
    // 0x802316CC: lbu         $v0, 0x6($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X6);
    // 0x802316D0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802316D4: beq         $v0, $zero, L_802317E4
    if (ctx->r2 == 0) {
        // 0x802316D8: addiu       $a0, $s4, 0x228
        ctx->r4 = ADD32(ctx->r20, 0X228);
            goto L_802317E4;
    }
    // 0x802316D8: addiu       $a0, $s4, 0x228
    ctx->r4 = ADD32(ctx->r20, 0X228);
    // 0x802316DC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x802316E0: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
    // 0x802316E4: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    // 0x802316E8: addiu       $v0, $zero, 0x4D0
    ctx->r2 = ADD32(0, 0X4D0);
    // 0x802316EC: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x802316F0: addiu       $v0, $zero, -0x20
    ctx->r2 = ADD32(0, -0X20);
    // 0x802316F4: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
    // 0x802316F8: jal         0x800308E8
    // 0x802316FC: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_17;
    // 0x802316FC: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    after_17:
    // 0x80231700: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80231704: lhu         $v0, 0x190($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X190);
    // 0x80231708: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023170C: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x80231710: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80231714: lhu         $v0, 0x192($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X192);
    // 0x80231718: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8023171C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231720: sh          $v0, 0x2($s5)
    MEM_H(0X2, ctx->r21) = ctx->r2;
    // 0x80231724: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x80231728: lhu         $v0, 0x194($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X194);
    // 0x8023172C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x80231730: addiu       $s2, $s5, 0x18
    ctx->r18 = ADD32(ctx->r21, 0X18);
    // 0x80231734: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231738: sh          $v0, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r2;
    // 0x8023173C: lbu         $v0, 0x1($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1);
    // 0x80231740: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231744: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80231748: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x8023174C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80231750: lhu         $v0, 0x4($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X4);
    // 0x80231754: addiu       $s1, $zero, 0x80
    ctx->r17 = ADD32(0, 0X80);
    // 0x80231758: lui         $s0, 0x508
    ctx->r16 = S32(0X508 << 16);
    // 0x8023175C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80231760: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80231764: or          $v0, $v0, $s0
    ctx->r2 = ctx->r2 | ctx->r16;
    // 0x80231768: jal         0x80051E18
    // 0x8023176C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_18;
    // 0x8023176C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_18:
    // 0x80231770: addiu       $a0, $s4, 0x268
    ctx->r4 = ADD32(ctx->r20, 0X268);
    // 0x80231774: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80231778: jal         0x800308E8
    // 0x8023177C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    func_800308E8_BCE8(rdram, ctx);
        goto after_19;
    // 0x8023177C: addu        $a2, $s3, $zero
    ctx->r6 = ADD32(ctx->r19, 0);
    after_19:
    // 0x80231780: lw          $v1, 0x30($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X30);
    // 0x80231784: lhu         $v0, 0x1A0($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1A0);
    // 0x80231788: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023178C: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
    // 0x80231790: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x80231794: lhu         $v0, 0x1A2($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1A2);
    // 0x80231798: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023179C: sh          $v0, 0x2($s5)
    MEM_H(0X2, ctx->r21) = ctx->r2;
    // 0x802317A0: lw          $v1, 0x38($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X38);
    // 0x802317A4: lhu         $v0, 0x1A4($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X1A4);
    // 0x802317A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802317AC: sh          $v0, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r2;
    // 0x802317B0: lbu         $v0, 0x1($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X1);
    // 0x802317B4: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x802317B8: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x802317BC: sw          $s2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r18;
    // 0x802317C0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x802317C4: lhu         $v0, 0x4($s6)
    ctx->r2 = MEM_HU(ctx->r22, 0X4);
    // 0x802317C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802317CC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x802317D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802317D4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x802317D8: or          $v0, $v0, $s0
    ctx->r2 = ctx->r2 | ctx->r16;
    // 0x802317DC: jal         0x80051E18
    // 0x802317E0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_20;
    // 0x802317E0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_20:
L_802317E4:
    // 0x802317E4: lbu         $v1, 0x3($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X3);
    // 0x802317E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802317EC: beq         $v1, $v0, L_80231814
    if (ctx->r3 == ctx->r2) {
        // 0x802317F0: nop
    
            goto L_80231814;
    }
    // 0x802317F0: nop

    // 0x802317F4: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x802317F8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802317FC: beq         $v0, $zero, L_80231814
    if (ctx->r2 == 0) {
        // 0x80231800: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_80231814;
    }
    // 0x80231800: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x80231804: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x80231808: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8023180C: jal         0x8003B564
    // 0x80231810: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_21;
    // 0x80231810: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_21:
L_80231814:
    // 0x80231814: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80231818: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x8023181C: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80231820: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80231824: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80231828: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8023182C: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80231830: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80231834: jr          $ra
    // 0x80231838: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x80231838: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80231914_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231914: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231918: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023191C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231920: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231924: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231928: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023192C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231930: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231934: lw          $v0, -0x3EF0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3EF0);
    // 0x80231938: jalr        $v0
    // 0x8023193C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023193C: nop

    after_0:
    // 0x80231940: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80231944: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231948: bne         $v1, $v0, L_802319D8
    if (ctx->r3 != ctx->r2) {
        // 0x8023194C: nop
    
            goto L_802319D8;
    }
    // 0x8023194C: nop

    // 0x80231950: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x80231954: lbu         $a0, 0x65($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X65);
    // 0x80231958: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x8023195C: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x80231960: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80231964: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80231968: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x8023196C: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80231970: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x80231974: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80231978: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x8023197C: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x80231980: lb          $a0, 0x64($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X64);
    // 0x80231984: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x80231988: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8023198C: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80231990: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80231994: bgez        $a0, L_802319B0
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80231998: sb          $v0, 0x65($s0)
        MEM_B(0X65, ctx->r16) = ctx->r2;
            goto L_802319B0;
    }
    // 0x80231998: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x8023199C: lhu         $v0, 0x15E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X15E);
    // 0x802319A0: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x802319A4: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x802319A8: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x802319AC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_802319B0:
    // 0x802319B0: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x802319B4: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x802319B8: beq         $v0, $zero, L_802319D8
    if (ctx->r2 == 0) {
        // 0x802319BC: nop
    
            goto L_802319D8;
    }
    // 0x802319BC: nop

    // 0x802319C0: lbu         $v0, 0x66($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X66);
    // 0x802319C4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802319C8: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x802319CC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802319D0: bltzl       $v0, L_802319D8
    if (SIGNED(ctx->r2) < 0) {
        // 0x802319D4: sb          $zero, 0x66($s0)
        MEM_B(0X66, ctx->r16) = 0;
            goto L_802319D8;
    }
    goto skip_0;
    // 0x802319D4: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    skip_0:
L_802319D8:
    // 0x802319D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802319DC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802319E0: jr          $ra
    // 0x802319E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802319E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232010_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232010: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232014: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80232018: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023201C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80232020: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80232024: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80232028: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023202C: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x80232030: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x80232034: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80232038: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8023203C: addiu       $a3, $a3, 0x49CC
    ctx->r7 = ADD32(ctx->r7, 0X49CC);
    // 0x80232040: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80232044: jal         0x8004FAEC
    // 0x80232048: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_0;
    // 0x80232048: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x8023204C: beq         $v0, $zero, L_80232060
    if (ctx->r2 == 0) {
        // 0x80232050: nop
    
            goto L_80232060;
    }
    // 0x80232050: nop

    // 0x80232054: lbu         $v0, 0x1DE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1DE);
    // 0x80232058: bne         $v0, $zero, L_802320DC
    if (ctx->r2 != 0) {
        // 0x8023205C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_802320DC;
    }
    // 0x8023205C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_80232060:
    // 0x80232060: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80232064: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232068: bne         $v1, $v0, L_802320AC
    if (ctx->r3 != ctx->r2) {
        // 0x8023206C: nop
    
            goto L_802320AC;
    }
    // 0x8023206C: nop

    // 0x80232070: lbu         $v0, 0x1DE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1DE);
    // 0x80232074: bne         $v0, $zero, L_802320AC
    if (ctx->r2 != 0) {
        // 0x80232078: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802320AC;
    }
    // 0x80232078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023207C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80232080: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232084: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80232088: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023208C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80232090: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80232094: jal         0x80050294
    // 0x80232098: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80232098: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8023209C: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x802320A0: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x802320A4: j           L_80232164
    // 0x802320A8: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
        goto L_80232164;
    // 0x802320A8: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
L_802320AC:
    // 0x802320AC: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x802320B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802320B4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802320B8: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x802320BC: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x802320C0: sb          $v1, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r3;
    // 0x802320C4: sb          $zero, 0xCB($a0)
    MEM_B(0XCB, ctx->r4) = 0;
    // 0x802320C8: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x802320CC: jal         0x80232174
    // 0x802320D0: sb          $v0, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r2;
    func_80232174_ovl21(rdram, ctx);
        goto after_2;
    // 0x802320D0: sb          $v0, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r2;
    after_2:
    // 0x802320D4: j           L_80232164
    // 0x802320D8: nop

        goto L_80232164;
    // 0x802320D8: nop

L_802320DC:
    // 0x802320DC: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    // 0x802320E0: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x802320E4: ori         $v1, $v1, 0x387F
    ctx->r3 = ctx->r3 | 0X387F;
    // 0x802320E8: sltu        $v1, $v1, $a0
    ctx->r3 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x802320EC: bne         $v1, $zero, L_8023215C
    if (ctx->r3 != 0) {
        // 0x802320F0: sb          $v0, 0x1DE($s0)
        MEM_B(0X1DE, ctx->r16) = ctx->r2;
            goto L_8023215C;
    }
    // 0x802320F0: sb          $v0, 0x1DE($s0)
    MEM_B(0X1DE, ctx->r16) = ctx->r2;
    // 0x802320F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802320F8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802320FC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80232100: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80232104: lbu         $v1, 0xCA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XCA);
    // 0x80232108: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023210C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80232110: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80232114: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80232118: jal         0x80050294
    // 0x8023211C: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8023211C: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
    after_3:
    // 0x80232120: addiu       $a0, $zero, 0x15B
    ctx->r4 = ADD32(0, 0X15B);
    // 0x80232124: jal         0x8002A33C
    // 0x80232128: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80232128: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
    // 0x8023212C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80232130: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80232134: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80232138: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023213C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232140: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80232144: lbu         $v0, 0xC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC);
    // 0x80232148: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023214C: jal         0x802322EC
    // 0x80232150: sh          $v0, 0xC8($a0)
    MEM_H(0XC8, ctx->r4) = ctx->r2;
    func_802322EC_ovl21(rdram, ctx);
        goto after_5;
    // 0x80232150: sh          $v0, 0xC8($a0)
    MEM_H(0XC8, ctx->r4) = ctx->r2;
    after_5:
    // 0x80232154: j           L_80232164
    // 0x80232158: nop

        goto L_80232164;
    // 0x80232158: nop

L_8023215C:
    // 0x8023215C: jal         0x80231D04
    // 0x80232160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80231D04_ovl21(rdram, ctx);
        goto after_6;
    // 0x80232160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80232164:
    // 0x80232164: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80232168: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023216C: jr          $ra
    // 0x80232170: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80232170: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230E68_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230E68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230E6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230E70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230E74: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80230E78: jal         0x8005131C
    // 0x80230E7C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8005131C_2C71C(rdram, ctx);
        goto after_0;
    // 0x80230E7C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80230E80: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230E84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230E88: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230E8C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80230E90: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80230E94: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230E98: jal         0x8004D5D4
    // 0x80230E9C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80230E9C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x80230EA0: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80230EA4: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80230EA8: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x80230EAC: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x80230EB0: sb          $zero, 0x386($s0)
    MEM_B(0X386, ctx->r16) = 0;
    // 0x80230EB4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80230EB8: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80230EBC: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80230EC0: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80230EC4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80230EC8: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80230ECC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80230ED0: addiu       $v0, $v0, -0x3F30
    ctx->r2 = ADD32(ctx->r2, -0X3F30);
    // 0x80230ED4: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80230ED8: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80230EDC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80230EE0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80230EE4: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x80230EE8: sb          $v0, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r2;
    // 0x80230EEC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80230EF0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80230EF4: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80230EF8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230EFC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230F00: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80230F04: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80230F08: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x80230F0C: lbu         $v1, 0xB($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XB);
    // 0x80230F10: addiu       $a0, $s0, 0x368
    ctx->r4 = ADD32(ctx->r16, 0X368);
    // 0x80230F14: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80230F18: sb          $zero, 0x1DC($s0)
    MEM_B(0X1DC, ctx->r16) = 0;
    // 0x80230F1C: sh          $zero, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = 0;
    // 0x80230F20: sb          $v0, 0x1DD($s0)
    MEM_B(0X1DD, ctx->r16) = ctx->r2;
    // 0x80230F24: sb          $zero, 0x67($s0)
    MEM_B(0X67, ctx->r16) = 0;
    // 0x80230F28: sb          $zero, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = 0;
    // 0x80230F2C: jal         0x800540BC
    // 0x80230F30: sh          $v1, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r3;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_2;
    // 0x80230F30: sh          $v1, 0xC8($s0)
    MEM_H(0XC8, ctx->r16) = ctx->r3;
    after_2:
    // 0x80230F34: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80230F38: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80230F3C: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80230F40: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230F44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230F48: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80230F4C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80230F50: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x80230F54: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80230F58: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80230F5C: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
    // 0x80230F60: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80230F64: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x80230F68: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x80230F6C: bne         $v1, $zero, L_80230F94
    if (ctx->r3 != 0) {
        // 0x80230F70: sh          $v0, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r2;
            goto L_80230F94;
    }
    // 0x80230F70: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x80230F74: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80230F78: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80230F7C: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80230F80: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230F84: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80230F88: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80230F8C: j           L_80230FAC
    // 0x80230F90: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
        goto L_80230FAC;
    // 0x80230F90: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
L_80230F94:
    // 0x80230F94: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80230F98: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80230F9C: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
    // 0x80230FA0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80230FA4: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80230FA8: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
L_80230FAC:
    // 0x80230FAC: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x80230FB0: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x80230FB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230FB8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230FBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230FC0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80230FC4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80230FC8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80230FCC: jal         0x80050294
    // 0x80230FD0: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80230FD0: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    after_3:
    // 0x80230FD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230FD8: jal         0x80230FF4
    // 0x80230FDC: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    func_80230FF4_ovl21(rdram, ctx);
        goto after_4;
    // 0x80230FDC: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    after_4:
    // 0x80230FE0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80230FE4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230FE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230FEC: jr          $ra
    // 0x80230FF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230FF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80233CBC_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233CBC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233CC0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80233CC4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80233CC8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80233CCC: jal         0x802345C8
    // 0x80233CD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_802345C8_ovl21(rdram, ctx);
        goto after_0;
    // 0x80233CD0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80233CD4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80233CD8: bltz        $v0, L_80233D9C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80233CDC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80233D9C;
    }
    // 0x80233CDC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80233CE0: lhu         $v1, 0x34C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X34C);
    // 0x80233CE4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80233CE8: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80233CEC: sra         $s0, $v0, 16
    ctx->r16 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80233CF0: slti        $v0, $s0, 0x1B
    ctx->r2 = SIGNED(ctx->r16) < 0X1B ? 1 : 0;
    // 0x80233CF4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80233CF8: andi        $a1, $v0, 0x3
    ctx->r5 = ctx->r2 & 0X3;
    // 0x80233CFC: slti        $v0, $s0, 0x15
    ctx->r2 = SIGNED(ctx->r16) < 0X15 ? 1 : 0;
    // 0x80233D00: beq         $v0, $zero, L_80233D0C
    if (ctx->r2 == 0) {
        // 0x80233D04: sh          $v1, 0x34C($s1)
        MEM_H(0X34C, ctx->r17) = ctx->r3;
            goto L_80233D0C;
    }
    // 0x80233D04: sh          $v1, 0x34C($s1)
    MEM_H(0X34C, ctx->r17) = ctx->r3;
    // 0x80233D08: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
L_80233D0C:
    // 0x80233D0C: slti        $v0, $s0, 0xF
    ctx->r2 = SIGNED(ctx->r16) < 0XF ? 1 : 0;
    // 0x80233D10: bnel        $v0, $zero, L_80233D18
    if (ctx->r2 != 0) {
        // 0x80233D14: addiu       $a1, $zero, 0x9
        ctx->r5 = ADD32(0, 0X9);
            goto L_80233D18;
    }
    goto skip_0;
    // 0x80233D14: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    skip_0:
L_80233D18:
    // 0x80233D18: slti        $v0, $s0, 0x9
    ctx->r2 = SIGNED(ctx->r16) < 0X9 ? 1 : 0;
    // 0x80233D1C: bnel        $v0, $zero, L_80233D24
    if (ctx->r2 != 0) {
        // 0x80233D20: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_80233D24;
    }
    goto skip_1;
    // 0x80233D20: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    skip_1:
L_80233D24:
    // 0x80233D24: lw          $a0, 0x354($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X354);
    // 0x80233D28: slti        $s0, $s0, 0x4
    ctx->r16 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x80233D2C: xori        $s0, $s0, 0x1
    ctx->r16 = ctx->r16 ^ 0X1;
    // 0x80233D30: negu        $s0, $s0
    ctx->r16 = SUB32(0, ctx->r16);
    // 0x80233D34: and         $s0, $a1, $s0
    ctx->r16 = ctx->r5 & ctx->r16;
    // 0x80233D38: jal         0x800324B4
    // 0x80233D3C: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80233D3C: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_1:
    // 0x80233D40: nop

    // 0x80233D44: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233D48: mflo        $v0
    ctx->r2 = lo;
    // 0x80233D4C: lw          $a0, 0x354($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X354);
    // 0x80233D50: lhu         $v1, 0x14($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X14);
    // 0x80233D54: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    // 0x80233D58: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80233D5C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233D60: jal         0x80032498
    // 0x80233D64: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x80233D64: sh          $v1, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r3;
    after_2:
    // 0x80233D68: nop

    // 0x80233D6C: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233D70: mflo        $v0
    ctx->r2 = lo;
    // 0x80233D74: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x80233D78: lb          $a0, 0xA7($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XA7);
    // 0x80233D7C: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80233D80: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233D84: bgez        $a0, L_80233DA4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80233D88: sh          $v1, 0x18($s1)
        MEM_H(0X18, ctx->r17) = ctx->r3;
            goto L_80233DA4;
    }
    // 0x80233D88: sh          $v1, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r3;
    // 0x80233D8C: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80233D90: bne         $v0, $zero, L_80233D9C
    if (ctx->r2 != 0) {
        // 0x80233D94: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80233D9C;
    }
    // 0x80233D94: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80233D98: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80233D9C:
    // 0x80233D9C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80233DA0: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_80233DA4:
    // 0x80233DA4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80233DA8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233DAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233DB0: jr          $ra
    // 0x80233DB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233DB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BFA0_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BFA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BFA4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022BFA8: jal         0x8004F684
    // 0x8022BFAC: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x8022BFAC: nop

    after_0:
    // 0x8022BFB0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022BFB4: jr          $ra
    // 0x8022BFB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BFB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F604_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F604: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022F608: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F60C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F610: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022F614: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022F618: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022F61C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F620: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F624: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022F628: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x8022F62C: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x8022F630: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8022F634: jal         0x8022FF64
    // 0x8022F638: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    func_8022FF64_ovl21(rdram, ctx);
        goto after_0;
    // 0x8022F638: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022F63C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022F640: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022F644: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022F648: beq         $v0, $zero, L_8022F6DC
    if (ctx->r2 == 0) {
        // 0x8022F64C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022F6DC;
    }
    // 0x8022F64C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022F650: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022F654: jal         0x8022FEC8
    // 0x8022F658: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    func_8022FEC8_ovl21(rdram, ctx);
        goto after_1;
    // 0x8022F658: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022F65C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F660: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F664: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x8022F668: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F66C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022F670: jal         0x8004F820
    // 0x8022F674: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022F674: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022F678: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F67C: bgez        $v0, L_8022F6A8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F680: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022F6A8;
    }
    // 0x8022F680: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F684: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F688: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F68C: jal         0x8004F820
    // 0x8022F690: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x8022F690: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022F694: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F698: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022F69C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022F6A0: j           L_8022F6C0
    // 0x8022F6A4: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_8022F6C0;
    // 0x8022F6A4: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_8022F6A8:
    // 0x8022F6A8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F6AC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022F6B0: jal         0x8004F820
    // 0x8022F6B4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022F6B4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_4:
    // 0x8022F6B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F6BC: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_8022F6C0:
    // 0x8022F6C0: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x8022F6C4: sh          $v1, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r3;
    // 0x8022F6C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F6CC: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x8022F6D0: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022F6D4: j           L_8022F724
    // 0x8022F6D8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
        goto L_8022F724;
    // 0x8022F6D8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022F6DC:
    // 0x8022F6DC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F6E0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F6E4: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022F6E8: jal         0x8004F820
    // 0x8022F6EC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022F6EC: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
    // 0x8022F6F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F6F4: slt         $v0, $zero, $v0
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022F6F8: beq         $v0, $zero, L_8022F708
    if (ctx->r2 == 0) {
        // 0x8022F6FC: sh          $v0, 0x34E($s0)
        MEM_H(0X34E, ctx->r16) = ctx->r2;
            goto L_8022F708;
    }
    // 0x8022F6FC: sh          $v0, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = ctx->r2;
    // 0x8022F700: j           L_8022F70C
    // 0x8022F704: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_8022F70C;
    // 0x8022F704: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022F708:
    // 0x8022F708: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_8022F70C:
    // 0x8022F70C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F710: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022F714: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x8022F718: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022F71C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F720: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_8022F724:
    // 0x8022F724: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F728: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F72C: jal         0x800610AC
    // 0x8022F730: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    func_800610AC_3C4AC(rdram, ctx);
        goto after_6;
    // 0x8022F730: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_6:
    // 0x8022F734: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022F738: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F73C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022F740: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F744: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F748: jr          $ra
    // 0x8022F74C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022F74C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80233B28_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233B28: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80233B2C: bgez        $v0, L_80233B44
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80233B30: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_80233B44;
    }
    // 0x80233B30: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80233B34: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80233B38: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80233B3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233B40: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80233B44:
    // 0x80233B44: jr          $ra
    // 0x80233B48: nop

    TRACE_RETURN()
    return;
    // 0x80233B48: nop

;}
RECOMP_FUNC void func_80226574_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226574: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226578: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022657C: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80226580: beq         $v0, $zero, L_80226598
    if (ctx->r2 == 0) {
        // 0x80226584: nop
    
            goto L_80226598;
    }
    // 0x80226584: nop

    // 0x80226588: jal         0x802267B4
    // 0x8022658C: nop

    func_802267B4_ovl21(rdram, ctx);
        goto after_0;
    // 0x8022658C: nop

    after_0:
    // 0x80226590: j           L_802265B0
    // 0x80226594: nop

        goto L_802265B0;
    // 0x80226594: nop

L_80226598:
    // 0x80226598: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8022659C: lhu         $v1, 0x51A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X51A);
    // 0x802265A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802265A4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802265A8: jal         0x8005044C
    // 0x802265AC: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x802265AC: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_1:
L_802265B0:
    // 0x802265B0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802265B4: jr          $ra
    // 0x802265B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802265B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C740_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C740: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C744: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C748: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C74C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C750: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C754: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C758: beq         $v1, $v0, L_8022C7BC
    if (ctx->r3 == ctx->r2) {
        // 0x8022C75C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022C7BC;
    }
    // 0x8022C75C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022C760: beql        $v0, $zero, L_8022C778
    if (ctx->r2 == 0) {
        // 0x8022C764: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C778;
    }
    goto skip_0;
    // 0x8022C764: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022C768: beq         $v1, $zero, L_8022C790
    if (ctx->r3 == 0) {
        // 0x8022C76C: nop
    
            goto L_8022C790;
    }
    // 0x8022C76C: nop

    // 0x8022C770: j           L_8022C838
    // 0x8022C774: nop

        goto L_8022C838;
    // 0x8022C774: nop

L_8022C778:
    // 0x8022C778: beq         $v1, $v0, L_8022C7D8
    if (ctx->r3 == ctx->r2) {
        // 0x8022C77C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022C7D8;
    }
    // 0x8022C77C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C780: beq         $v1, $v0, L_8022C810
    if (ctx->r3 == ctx->r2) {
        // 0x8022C784: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8022C810;
    }
    // 0x8022C784: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022C788: j           L_8022C838
    // 0x8022C78C: nop

        goto L_8022C838;
    // 0x8022C78C: nop

L_8022C790:
    // 0x8022C790: jal         0x8006033C
    // 0x8022C794: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022C794: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    after_0:
    // 0x8022C798: bnel        $v0, $zero, L_8022C834
    if (ctx->r2 != 0) {
        // 0x8022C79C: sb          $zero, 0x8($s0)
        MEM_B(0X8, ctx->r16) = 0;
            goto L_8022C834;
    }
    goto skip_1;
    // 0x8022C79C: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    skip_1:
    // 0x8022C7A0: jal         0x8006033C
    // 0x8022C7A4: addiu       $a0, $zero, 0x647
    ctx->r4 = ADD32(0, 0X647);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022C7A4: addiu       $a0, $zero, 0x647
    ctx->r4 = ADD32(0, 0X647);
    after_1:
    // 0x8022C7A8: bnel        $v0, $zero, L_8022C834
    if (ctx->r2 != 0) {
        // 0x8022C7AC: sb          $zero, 0x8($s0)
        MEM_B(0X8, ctx->r16) = 0;
            goto L_8022C834;
    }
    goto skip_2;
    // 0x8022C7AC: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    skip_2:
    // 0x8022C7B0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C7B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C7B8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C7BC:
    // 0x8022C7BC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022C7C0: lbu         $v0, -0x3A50($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3A50);
    // 0x8022C7C4: bne         $v0, $zero, L_8022C838
    if (ctx->r2 != 0) {
        // 0x8022C7C8: nop
    
            goto L_8022C838;
    }
    // 0x8022C7C8: nop

    // 0x8022C7CC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C7D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C7D4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C7D8:
    // 0x8022C7D8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022C7DC: jal         0x8006FF84
    // 0x8022C7E0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_2;
    // 0x8022C7E0: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_2:
    // 0x8022C7E4: beq         $v0, $zero, L_8022C838
    if (ctx->r2 == 0) {
        // 0x8022C7E8: nop
    
            goto L_8022C838;
    }
    // 0x8022C7E8: nop

    // 0x8022C7EC: jal         0x8006036C
    // 0x8022C7F0: addiu       $a0, $zero, 0x647
    ctx->r4 = ADD32(0, 0X647);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x8022C7F0: addiu       $a0, $zero, 0x647
    ctx->r4 = ADD32(0, 0X647);
    after_3:
    // 0x8022C7F4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022C7F8: jal         0x800616FC
    // 0x8022C7FC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x8022C7FC: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_4:
    // 0x8022C800: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C804: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C808: j           L_8022C838
    // 0x8022C80C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022C838;
    // 0x8022C80C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C810:
    // 0x8022C810: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C814: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022C818: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022C81C: bne         $v0, $zero, L_8022C838
    if (ctx->r2 != 0) {
        // 0x8022C820: nop
    
            goto L_8022C838;
    }
    // 0x8022C820: nop

    // 0x8022C824: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022C828: jal         0x80070050
    // 0x8022C82C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_5;
    // 0x8022C82C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_5:
    // 0x8022C830: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
L_8022C834:
    // 0x8022C834: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8022C838:
    // 0x8022C838: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C83C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C840: jr          $ra
    // 0x8022C844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CC08_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CC08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022CC0C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CC10: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022CC14: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022CC18: addiu       $s3, $a0, 0x2C
    ctx->r19 = ADD32(ctx->r4, 0X2C);
    // 0x8022CC1C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022CC20: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022CC24: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CC28: addiu       $s0, $s1, 0x10
    ctx->r16 = ADD32(ctx->r17, 0X10);
    // 0x8022CC2C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
L_8022CC30:
    // 0x8022CC30: lbu         $v1, -0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, -0XF);
    // 0x8022CC34: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022CC38: bne         $v1, $v0, L_8022CC98
    if (ctx->r3 != ctx->r2) {
        // 0x8022CC3C: addiu       $v0, $zero, 0x60
        ctx->r2 = ADD32(0, 0X60);
            goto L_8022CC98;
    }
    // 0x8022CC3C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8022CC40: lbu         $v1, -0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, -0XE);
    // 0x8022CC44: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x8022CC48: bne         $v1, $v0, L_8022CC68
    if (ctx->r3 != ctx->r2) {
        // 0x8022CC4C: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_8022CC68;
    }
    // 0x8022CC4C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x8022CC50: lw          $a0, 0x8($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X8);
    // 0x8022CC54: jal         0x8006033C
    // 0x8022CC58: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022CC58: nop

    after_0:
    // 0x8022CC5C: bnel        $v0, $zero, L_8022CC64
    if (ctx->r2 != 0) {
        // 0x8022CC60: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_8022CC64;
    }
    goto skip_0;
    // 0x8022CC60: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    skip_0:
L_8022CC64:
    // 0x8022CC64: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_8022CC68:
    // 0x8022CC68: bnel        $v0, $zero, L_8022CE2C
    if (ctx->r2 != 0) {
        // 0x8022CC6C: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_8022CE2C;
    }
    goto skip_1;
    // 0x8022CC6C: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    skip_1:
    // 0x8022CC70: jal         0x8006033C
    // 0x8022CC74: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022CC74: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    after_1:
    // 0x8022CC78: beq         $v0, $zero, L_8022CC88
    if (ctx->r2 == 0) {
        // 0x8022CC7C: nop
    
            goto L_8022CC88;
    }
    // 0x8022CC7C: nop

    // 0x8022CC80: jal         0x80060590
    // 0x8022CC84: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    func_80060590_3B990(rdram, ctx);
        goto after_2;
    // 0x8022CC84: addiu       $a0, $zero, 0x60C
    ctx->r4 = ADD32(0, 0X60C);
    after_2:
L_8022CC88:
    // 0x8022CC88: jal         0x8004EEAC
    // 0x8022CC8C: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_3;
    // 0x8022CC8C: nop

    after_3:
    // 0x8022CC90: j           L_8022CD0C
    // 0x8022CC94: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
        goto L_8022CD0C;
    // 0x8022CC94: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
L_8022CC98:
    // 0x8022CC98: bne         $v1, $v0, L_8022CDA8
    if (ctx->r3 != ctx->r2) {
        // 0x8022CC9C: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8022CDA8;
    }
    // 0x8022CC9C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022CCA0: lbu         $v1, -0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, -0XE);
    // 0x8022CCA4: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022CCA8: bne         $v1, $v0, L_8022CCF8
    if (ctx->r3 != ctx->r2) {
        // 0x8022CCAC: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_8022CCF8;
    }
    // 0x8022CCAC: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x8022CCB0: lb          $v1, -0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, -0X8);
    // 0x8022CCB4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022CCB8: bne         $v1, $v0, L_8022CCD8
    if (ctx->r3 != ctx->r2) {
        // 0x8022CCBC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022CCD8;
    }
    // 0x8022CCBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CCC0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8022CCC4: jal         0x8006033C
    // 0x8022CCC8: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x8022CCC8: nop

    after_4:
    // 0x8022CCCC: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8022CCD0: j           L_8022CCF4
    // 0x8022CCD4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
        goto L_8022CCF4;
    // 0x8022CCD4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_8022CCD8:
    // 0x8022CCD8: bne         $v1, $v0, L_8022CCF8
    if (ctx->r3 != ctx->r2) {
        // 0x8022CCDC: addu        $v0, $s2, $zero
        ctx->r2 = ADD32(ctx->r18, 0);
            goto L_8022CCF8;
    }
    // 0x8022CCDC: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x8022CCE0: lw          $a0, 0x4($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X4);
    // 0x8022CCE4: jal         0x8006033C
    // 0x8022CCE8: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x8022CCE8: nop

    after_5:
    // 0x8022CCEC: bnel        $v0, $zero, L_8022CCF4
    if (ctx->r2 != 0) {
        // 0x8022CCF0: addiu       $s2, $zero, 0x1
        ctx->r18 = ADD32(0, 0X1);
            goto L_8022CCF4;
    }
    goto skip_2;
    // 0x8022CCF0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    skip_2:
L_8022CCF4:
    // 0x8022CCF4: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
L_8022CCF8:
    // 0x8022CCF8: bnel        $v0, $zero, L_8022CE2C
    if (ctx->r2 != 0) {
        // 0x8022CCFC: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_8022CE2C;
    }
    goto skip_3;
    // 0x8022CCFC: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    skip_3:
    // 0x8022CD00: jal         0x8004EFE4
    // 0x8022CD04: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_6;
    // 0x8022CD04: nop

    after_6:
    // 0x8022CD08: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
L_8022CD0C:
    // 0x8022CD0C: beql        $a1, $zero, L_8022CE2C
    if (ctx->r5 == 0) {
        // 0x8022CD10: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_8022CE2C;
    }
    goto skip_4;
    // 0x8022CD10: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    skip_4:
    // 0x8022CD14: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022CD18: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8022CD1C: lbu         $v0, -0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XE);
    // 0x8022CD20: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x8022CD24: lbu         $v0, -0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XD);
    // 0x8022CD28: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x8022CD2C: lbu         $v0, -0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XC);
    // 0x8022CD30: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
    // 0x8022CD34: lbu         $v0, -0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XB);
    // 0x8022CD38: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
    // 0x8022CD3C: lbu         $v0, -0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X9);
    // 0x8022CD40: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022CD44: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x8022CD48: lbu         $v0, -0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X8);
    // 0x8022CD4C: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x8022CD50: lbu         $v0, -0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X7);
    // 0x8022CD54: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x8022CD58: lbu         $v0, -0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X6);
    // 0x8022CD5C: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
    // 0x8022CD60: lbu         $v0, -0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X5);
    // 0x8022CD64: sb          $v0, 0xF($a1)
    MEM_B(0XF, ctx->r5) = ctx->r2;
    // 0x8022CD68: lhu         $v0, -0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X4);
    // 0x8022CD6C: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x8022CD70: lhu         $v0, -0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X2);
    // 0x8022CD74: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x8022CD78: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022CD7C: lh          $v1, 0x16($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X16);
    // 0x8022CD80: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x8022CD84: lh          $v0, 0x14($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X14);
    // 0x8022CD88: lh          $a0, 0x18($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X18);
    // 0x8022CD8C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022CD90: sw          $v1, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r3;
    // 0x8022CD94: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CD98: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022CD9C: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x8022CDA0: j           L_8022CE28
    // 0x8022CDA4: sw          $a0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r4;
        goto L_8022CE28;
    // 0x8022CDA4: sw          $a0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r4;
L_8022CDA8:
    // 0x8022CDA8: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8022CDAC: bnel        $v1, $v0, L_8022CE2C
    if (ctx->r3 != ctx->r2) {
        // 0x8022CDB0: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_8022CE2C;
    }
    goto skip_5;
    // 0x8022CDB0: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    skip_5:
    // 0x8022CDB4: jal         0x8004F2C4
    // 0x8022CDB8: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_7;
    // 0x8022CDB8: nop

    after_7:
    // 0x8022CDBC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022CDC0: beql        $v1, $zero, L_8022CE2C
    if (ctx->r3 == 0) {
        // 0x8022CDC4: addiu       $s1, $s1, 0x14
        ctx->r17 = ADD32(ctx->r17, 0X14);
            goto L_8022CE2C;
    }
    goto skip_6;
    // 0x8022CDC4: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    skip_6:
    // 0x8022CDC8: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022CDCC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022CDD0: lbu         $v0, -0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XE);
    // 0x8022CDD4: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022CDD8: lbu         $v0, -0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XD);
    // 0x8022CDDC: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8022CDE0: lbu         $v0, -0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XC);
    // 0x8022CDE4: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x8022CDE8: lbu         $v0, -0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0XB);
    // 0x8022CDEC: sb          $v0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r2;
    // 0x8022CDF0: lbu         $v0, -0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X8);
    // 0x8022CDF4: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x8022CDF8: lbu         $v0, -0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X7);
    // 0x8022CDFC: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x8022CE00: lbu         $v0, -0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X6);
    // 0x8022CE04: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x8022CE08: lbu         $v0, -0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, -0X5);
    // 0x8022CE0C: sb          $v0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r2;
    // 0x8022CE10: lhu         $v0, -0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X4);
    // 0x8022CE14: sh          $v0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r2;
    // 0x8022CE18: lhu         $v0, -0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X2);
    // 0x8022CE1C: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x8022CE20: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022CE24: sh          $v0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r2;
L_8022CE28:
    // 0x8022CE28: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
L_8022CE2C:
    // 0x8022CE2C: lb          $v1, 0x0($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X0);
    // 0x8022CE30: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022CE34: bne         $v1, $v0, L_8022CC30
    if (ctx->r3 != ctx->r2) {
        // 0x8022CE38: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_8022CC30;
    }
    // 0x8022CE38: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8022CE3C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022CE40: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CE44: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022CE48: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CE4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CE50: jr          $ra
    // 0x8022CE54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022CE54: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80230980_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230980: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230984: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230988: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023098C: jal         0x8004F144
    // 0x80230990: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80230990: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80230994: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80230998: beq         $v1, $zero, L_802309D4
    if (ctx->r3 == 0) {
        // 0x8023099C: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_802309D4;
    }
    // 0x8023099C: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x802309A0: addiu       $a1, $s0, 0x310
    ctx->r5 = ADD32(ctx->r16, 0X310);
    // 0x802309A4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802309A8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802309AC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802309B0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802309B4: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x802309B8: jal         0x8009A3B4
    // 0x802309BC: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802309BC: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    after_1:
    // 0x802309C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802309C4: jal         0x8007A1B8
    // 0x802309C8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x802309C8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x802309CC: jal         0x8004F418
    // 0x802309D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x802309D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_802309D4:
    // 0x802309D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802309D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802309DC: jr          $ra
    // 0x802309E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802309E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233C58_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233C58: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80233C5C: bgez        $v0, L_80233C8C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80233C60: nop
    
            goto L_80233C8C;
    }
    // 0x80233C60: nop

    // 0x80233C64: lhu         $v0, 0x34C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X34C);
    // 0x80233C68: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80233C6C: sh          $v0, 0x34C($a0)
    MEM_H(0X34C, ctx->r4) = ctx->r2;
    // 0x80233C70: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233C74: bne         $v0, $zero, L_80233C8C
    if (ctx->r2 != 0) {
        // 0x80233C78: nop
    
            goto L_80233C8C;
    }
    // 0x80233C78: nop

    // 0x80233C7C: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80233C80: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x80233C84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233C88: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_80233C8C:
    // 0x80233C8C: jr          $ra
    // 0x80233C90: nop

    TRACE_RETURN()
    return;
    // 0x80233C90: nop

;}
RECOMP_FUNC void func_8022D980_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D980: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D984: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D988: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D98C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D990: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D994: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022D998: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022D99C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022D9A0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022D9A4: beq         $v1, $zero, L_8022D9B4
    if (ctx->r3 == 0) {
        // 0x8022D9A8: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_8022D9B4;
    }
    // 0x8022D9A8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022D9AC: j           L_8022D9BC
    // 0x8022D9B0: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
        goto L_8022D9BC;
    // 0x8022D9B0: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
L_8022D9B4:
    // 0x8022D9B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D9B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8022D9BC:
    // 0x8022D9BC: jal         0x8004D5D4
    // 0x8022D9C0: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022D9C0: nop

    after_0:
    // 0x8022D9C4: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D9C8: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x8022D9CC: bne         $a0, $v0, L_8022D9DC
    if (ctx->r4 != ctx->r2) {
        // 0x8022D9D0: xori        $v1, $a0, 0x24
        ctx->r3 = ctx->r4 ^ 0X24;
            goto L_8022D9DC;
    }
    // 0x8022D9D0: xori        $v1, $a0, 0x24
    ctx->r3 = ctx->r4 ^ 0X24;
    // 0x8022D9D4: j           L_8022DA50
    // 0x8022D9D8: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
        goto L_8022DA50;
    // 0x8022D9D8: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
L_8022D9DC:
    // 0x8022D9DC: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022D9E0: xori        $v0, $a0, 0x30
    ctx->r2 = ctx->r4 ^ 0X30;
    // 0x8022D9E4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022D9E8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022D9EC: bne         $v1, $zero, L_8022DA50
    if (ctx->r3 != 0) {
        // 0x8022D9F0: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_8022DA50;
    }
    // 0x8022D9F0: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x8022D9F4: xori        $v1, $a0, 0x42
    ctx->r3 = ctx->r4 ^ 0X42;
    // 0x8022D9F8: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022D9FC: xori        $v0, $a0, 0x53
    ctx->r2 = ctx->r4 ^ 0X53;
    // 0x8022DA00: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022DA04: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022DA08: bne         $v1, $zero, L_8022DA50
    if (ctx->r3 != 0) {
        // 0x8022DA0C: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_8022DA50;
    }
    // 0x8022DA0C: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x8022DA10: xori        $v1, $a0, 0x5C
    ctx->r3 = ctx->r4 ^ 0X5C;
    // 0x8022DA14: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022DA18: xori        $v0, $a0, 0x44
    ctx->r2 = ctx->r4 ^ 0X44;
    // 0x8022DA1C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022DA20: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022DA24: bne         $v1, $zero, L_8022DA50
    if (ctx->r3 != 0) {
        // 0x8022DA28: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_8022DA50;
    }
    // 0x8022DA28: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x8022DA2C: addiu       $v0, $zero, 0x5E
    ctx->r2 = ADD32(0, 0X5E);
    // 0x8022DA30: bnel        $a0, $v0, L_8022DA50
    if (ctx->r4 != ctx->r2) {
        // 0x8022DA34: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_8022DA50;
    }
    goto skip_0;
    // 0x8022DA34: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    skip_0:
    // 0x8022DA38: addiu       $v0, $zero, 0x1C0
    ctx->r2 = ADD32(0, 0X1C0);
    // 0x8022DA3C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022DA40: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022DA44: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022DA48: j           L_8022DA58
    // 0x8022DA4C: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
        goto L_8022DA58;
    // 0x8022DA4C: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
L_8022DA50:
    // 0x8022DA50: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022DA54: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
L_8022DA58:
    // 0x8022DA58: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022DA5C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022DA60: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022DA64: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DA68: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022DA6C: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8022DA70: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022DA74: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022DA78: bne         $v0, $zero, L_8022DA84
    if (ctx->r2 != 0) {
        // 0x8022DA7C: addiu       $v0, $zero, 0x2710
        ctx->r2 = ADD32(0, 0X2710);
            goto L_8022DA84;
    }
    // 0x8022DA7C: addiu       $v0, $zero, 0x2710
    ctx->r2 = ADD32(0, 0X2710);
    // 0x8022DA80: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
L_8022DA84:
    // 0x8022DA84: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x8022DA88: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    // 0x8022DA8C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022DA90: jal         0x8009A3B4
    // 0x8022DA94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022DA94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022DA98: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022DA9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DAA0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022DAA4: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x8022DAA8: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x8022DAAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DAB0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022DAB4: addiu       $v0, $v0, -0x41C0
    ctx->r2 = ADD32(ctx->r2, -0X41C0);
    // 0x8022DAB8: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022DABC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DAC0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022DAC4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022DAC8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022DACC: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022DAD0: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022DAD4: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022DAD8: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022DADC: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022DAE0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022DAE4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022DAE8: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022DAEC: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022DAF0: jal         0x80050294
    // 0x8022DAF4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022DAF4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022DAF8: jal         0x8022DB14
    // 0x8022DAFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022DB14_ovl21(rdram, ctx);
        goto after_3;
    // 0x8022DAFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022DB00: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022DB04: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022DB08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DB0C: jr          $ra
    // 0x8022DB10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DB10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F408_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F408: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F40C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F410: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F414: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F418: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F41C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022F420: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F424: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022F428: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022F42C: bne         $v0, $zero, L_8022F488
    if (ctx->r2 != 0) {
        // 0x8022F430: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022F488;
    }
    // 0x8022F430: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022F434: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F438: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022F43C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F440: jal         0x8004F820
    // 0x8022F444: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022F444: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022F448: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F44C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022F450: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x8022F454: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F458: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022F45C: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8022F460: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8022F464: beq         $a0, $zero, L_8022F488
    if (ctx->r4 == 0) {
        // 0x8022F468: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022F488;
    }
    // 0x8022F468: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022F46C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022F470: jal         0x8022FE30
    // 0x8022F474: nop

    func_8022FE30_ovl21(rdram, ctx);
        goto after_1;
    // 0x8022F474: nop

    after_1:
    // 0x8022F478: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022F47C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F480: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022F484: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022F488:
    // 0x8022F488: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022F48C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022F490: bne         $v0, $zero, L_8022F4B4
    if (ctx->r2 != 0) {
        // 0x8022F494: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022F4B4;
    }
    // 0x8022F494: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022F498: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022F49C: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x8022F4A0: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022F4A4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022F4A8: jal         0x8022FEC8
    // 0x8022F4AC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022FEC8_ovl21(rdram, ctx);
        goto after_2;
    // 0x8022F4AC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022F4B0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022F4B4:
    // 0x8022F4B4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F4B8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F4BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F4C0: jr          $ra
    // 0x8022F4C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F4C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227ED4_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227ED4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80227ED8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80227EDC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227EE0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80227EE4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80227EE8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80227EEC: jal         0x8009A3B4
    // 0x80227EF0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80227EF0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x80227EF4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80227EF8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80227EFC: jal         0x8009A3B4
    // 0x80227F00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80227F00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80227F04: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80227F08: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227F0C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80227F10: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227F14: bne         $v0, $zero, L_80227F2C
    if (ctx->r2 != 0) {
        // 0x80227F18: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80227F2C;
    }
    // 0x80227F18: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80227F1C: jal         0x8004F4F8
    // 0x80227F20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80227F20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80227F24: j           L_80228010
    // 0x80227F28: nop

        goto L_80228010;
    // 0x80227F28: nop

L_80227F2C:
    // 0x80227F2C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227F30: bne         $v1, $v0, L_80227F3C
    if (ctx->r3 != ctx->r2) {
        // 0x80227F34: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_80227F3C;
    }
    // 0x80227F34: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x80227F38: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80227F3C:
    // 0x80227F3C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80227F40: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80227F44: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x80227F48: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227F4C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227F50: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80227F54: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227F58: lbu         $v1, -0x4F2C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X4F2C);
    // 0x80227F5C: lbu         $t0, 0xA($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XA);
    // 0x80227F60: lhu         $v0, 0x9A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X9A);
    // 0x80227F64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227F68: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x80227F6C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80227F70: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80227F74: lbu         $v1, -0x4F2B($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X4F2B);
    // 0x80227F78: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80227F7C: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80227F80: sh          $v0, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = ctx->r2;
    // 0x80227F84: jal         0x8004DA90
    // 0x80227F88: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x80227F88: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    after_3:
    // 0x80227F8C: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x80227F90: beq         $v0, $zero, L_80227FAC
    if (ctx->r2 == 0) {
        // 0x80227F94: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80227FAC;
    }
    // 0x80227F94: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227F98: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80227F9C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80227FA0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80227FA4: bne         $v0, $zero, L_80227FF8
    if (ctx->r2 != 0) {
        // 0x80227FA8: nop
    
            goto L_80227FF8;
    }
    // 0x80227FA8: nop

L_80227FAC:
    // 0x80227FAC: jal         0x8004F144
    // 0x80227FB0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x80227FB0: nop

    after_4:
    // 0x80227FB4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227FB8: beq         $v1, $zero, L_80227FF8
    if (ctx->r3 == 0) {
        // 0x80227FBC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227FF8;
    }
    // 0x80227FBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227FC0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80227FC4: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80227FC8: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80227FCC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227FD0: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80227FD4: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
    // 0x80227FD8: lhu         $v0, 0x90($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X90);
    // 0x80227FDC: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80227FE0: lhu         $v0, 0x92($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X92);
    // 0x80227FE4: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80227FE8: lhu         $v0, 0x94($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X94);
    // 0x80227FEC: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
    // 0x80227FF0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227FF4: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_80227FF8:
    // 0x80227FF8: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80227FFC: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80228000: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x80228004: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x80228008: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x8022800C: sh          $a0, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r4;
L_80228010:
    // 0x80228010: jal         0x8003F754
    // 0x80228014: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_5;
    // 0x80228014: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80228018: bne         $v0, $zero, L_80228034
    if (ctx->r2 != 0) {
        // 0x8022801C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80228034;
    }
    // 0x8022801C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228020: lw          $v0, 0x9C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X9C);
    // 0x80228024: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80228028: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022802C: beq         $v0, $zero, L_80228048
    if (ctx->r2 == 0) {
        // 0x80228030: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80228048;
    }
    // 0x80228030: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80228034:
    // 0x80228034: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80228038: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022803C: sb          $zero, 0x96($s0)
    MEM_B(0X96, ctx->r16) = 0;
    // 0x80228040: j           L_80228098
    // 0x80228044: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80228098;
    // 0x80228044: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80228048:
    // 0x80228048: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022804C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80228050: beq         $v0, $zero, L_80228098
    if (ctx->r2 == 0) {
        // 0x80228054: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80228098;
    }
    // 0x80228054: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80228058: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x8022805C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80228060: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228064: addiu       $v0, $s0, 0x9C
    ctx->r2 = ADD32(ctx->r16, 0X9C);
    // 0x80228068: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x8022806C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80228070: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80228074: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80228078: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022807C: addiu       $a1, $a1, 0x10
    ctx->r5 = ADD32(ctx->r5, 0X10);
    // 0x80228080: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80228084: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x80228088: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022808C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80228090: jal         0x80051E18
    // 0x80228094: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_6;
    // 0x80228094: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_6:
L_80228098:
    // 0x80228098: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    // 0x8022809C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802280A0: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802280A4: jr          $ra
    // 0x802280A8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802280A8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80226E3C_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E3C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80226E40: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80226E44: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226E48: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80226E4C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80226E50: lw          $v1, 0x9C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X9C);
    // 0x80226E54: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80226E58: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80226E5C: beq         $v0, $zero, L_80226EB4
    if (ctx->r2 == 0) {
        // 0x80226E60: nop
    
            goto L_80226EB4;
    }
    // 0x80226E60: nop

    // 0x80226E64: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80226E68: addiu       $s0, $s0, 0x4A06
    ctx->r16 = ADD32(ctx->r16, 0X4A06);
    // 0x80226E6C: jal         0x800324B4
    // 0x80226E70: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80226E70: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_0:
    // 0x80226E74: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80226E78: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80226E7C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80226E80: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80226E84: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x80226E88: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x80226E8C: jal         0x80032498
    // 0x80226E90: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80226E90: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_1:
    // 0x80226E94: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80226E98: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80226E9C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80226EA0: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x80226EA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226EA8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80226EAC: j           L_80226EE4
    // 0x80226EB0: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
        goto L_80226EE4;
    // 0x80226EB0: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
L_80226EB4:
    // 0x80226EB4: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80226EB8: beq         $v0, $zero, L_80226ED4
    if (ctx->r2 == 0) {
        // 0x80226EBC: lui         $v0, 0x1C00
        ctx->r2 = S32(0X1C00 << 16);
            goto L_80226ED4;
    }
    // 0x80226EBC: lui         $v0, 0x1C00
    ctx->r2 = S32(0X1C00 << 16);
    // 0x80226EC0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80226EC4: beq         $v0, $zero, L_80226EE4
    if (ctx->r2 == 0) {
        // 0x80226EC8: nop
    
            goto L_80226EE4;
    }
    // 0x80226EC8: nop

    // 0x80226ECC: j           L_80226F00
    // 0x80226ED0: nop

        goto L_80226F00;
    // 0x80226ED0: nop

L_80226ED4:
    // 0x80226ED4: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
    // 0x80226ED8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80226EDC: bne         $v0, $zero, L_80226F00
    if (ctx->r2 != 0) {
        // 0x80226EE0: nop
    
            goto L_80226F00;
    }
    // 0x80226EE0: nop

L_80226EE4:
    // 0x80226EE4: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80226EE8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80226EEC: bne         $v0, $zero, L_80226F2C
    if (ctx->r2 != 0) {
        // 0x80226EF0: sw          $zero, 0x9C($s1)
        MEM_W(0X9C, ctx->r17) = 0;
            goto L_80226F2C;
    }
    // 0x80226EF0: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    // 0x80226EF4: lh          $v0, 0x7C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X7C);
    // 0x80226EF8: beq         $v0, $zero, L_80226F34
    if (ctx->r2 == 0) {
        // 0x80226EFC: addiu       $a0, $s1, 0x34
        ctx->r4 = ADD32(ctx->r17, 0X34);
            goto L_80226F34;
    }
    // 0x80226EFC: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
L_80226F00:
    // 0x80226F00: jal         0x8004F144
    // 0x80226F04: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x80226F04: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    after_2:
    // 0x80226F08: beq         $v0, $zero, L_80226F18
    if (ctx->r2 == 0) {
        // 0x80226F0C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80226F18;
    }
    // 0x80226F0C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226F10: jal         0x80227780
    // 0x80226F14: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_80227780_ovl21(rdram, ctx);
        goto after_3;
    // 0x80226F14: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_3:
L_80226F18:
    // 0x80226F18: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x80226F1C: jal         0x8004F4F8
    // 0x80226F20: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_4;
    // 0x80226F20: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80226F24: j           L_8022704C
    // 0x80226F28: nop

        goto L_8022704C;
    // 0x80226F28: nop

L_80226F2C:
    // 0x80226F2C: sh          $zero, 0x7C($s1)
    MEM_H(0X7C, ctx->r17) = 0;
    // 0x80226F30: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
L_80226F34:
    // 0x80226F34: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80226F38: jal         0x8009A3B4
    // 0x80226F3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80226F3C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x80226F40: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80226F44: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80226F48: jal         0x8009A3B4
    // 0x80226F4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80226F4C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80226F50: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80226F54: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x80226F58: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80226F5C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80226F60: beq         $v0, $zero, L_80226F9C
    if (ctx->r2 == 0) {
        // 0x80226F64: sw          $v1, 0x8C($s1)
        MEM_W(0X8C, ctx->r17) = ctx->r3;
            goto L_80226F9C;
    }
    // 0x80226F64: sw          $v1, 0x8C($s1)
    MEM_W(0X8C, ctx->r17) = ctx->r3;
    // 0x80226F68: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80226F6C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226F70: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226F74: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226F78: lhu         $v1, -0x4F78($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X4F78);
    // 0x80226F7C: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80226F80: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226F84: sb          $v1, 0x96($s1)
    MEM_B(0X96, ctx->r17) = ctx->r3;
    // 0x80226F88: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226F8C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226F90: lhu         $v0, -0x4F76($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X4F76);
    // 0x80226F94: j           L_80226FCC
    // 0x80226F98: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
        goto L_80226FCC;
    // 0x80226F98: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
L_80226F9C:
    // 0x80226F9C: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80226FA0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226FA4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226FA8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226FAC: lhu         $v1, -0x4F90($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X4F90);
    // 0x80226FB0: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80226FB4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226FB8: sb          $v1, 0x96($s1)
    MEM_B(0X96, ctx->r17) = ctx->r3;
    // 0x80226FBC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226FC0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226FC4: lhu         $v0, -0x4F8E($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X4F8E);
    // 0x80226FC8: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
L_80226FCC:
    // 0x80226FCC: jal         0x80227690
    // 0x80226FD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80227690_ovl21(rdram, ctx);
        goto after_7;
    // 0x80226FD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x80226FD4: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80226FD8: jal         0x8004DD04
    // 0x80226FDC: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    func_8004DD04_29104(rdram, ctx);
        goto after_8;
    // 0x80226FDC: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    after_8:
    // 0x80226FE0: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80226FE4: jal         0x8004DD04
    // 0x80226FE8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_9;
    // 0x80226FE8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_9:
    // 0x80226FEC: jal         0x802274D8
    // 0x80226FF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_802274D8_ovl21(rdram, ctx);
        goto after_10;
    // 0x80226FF0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x80226FF4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226FF8: beq         $v0, $zero, L_80227008
    if (ctx->r2 == 0) {
        // 0x80226FFC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80227008;
    }
    // 0x80226FFC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227000: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80227004: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_80227008:
    // 0x80227008: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x8022700C: sltiu       $v0, $v1, 0x96
    ctx->r2 = ctx->r3 < 0X96 ? 1 : 0;
    // 0x80227010: bne         $v0, $zero, L_80227028
    if (ctx->r2 != 0) {
        // 0x80227014: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80227028;
    }
    // 0x80227014: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80227018: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022701C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80227020: j           L_8022702C
    // 0x80227024: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
        goto L_8022702C;
    // 0x80227024: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_80227028:
    // 0x80227028: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_8022702C:
    // 0x8022702C: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80227030: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80227034: lhu         $a0, 0x18($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X18);
    // 0x80227038: sb          $zero, 0x76($s1)
    MEM_B(0X76, ctx->r17) = 0;
    // 0x8022703C: addiu       $v1, $v1, -0x10
    ctx->r3 = ADD32(ctx->r3, -0X10);
    // 0x80227040: sh          $v0, 0x90($s1)
    MEM_H(0X90, ctx->r17) = ctx->r2;
    // 0x80227044: sh          $v1, 0x92($s1)
    MEM_H(0X92, ctx->r17) = ctx->r3;
    // 0x80227048: sh          $a0, 0x94($s1)
    MEM_H(0X94, ctx->r17) = ctx->r4;
L_8022704C:
    // 0x8022704C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80227050: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80227054: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80227058: jr          $ra
    // 0x8022705C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022705C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80233B4C_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233B4C: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80233B50: bgez        $v0, L_80233B80
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80233B54: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80233B80;
    }
    // 0x80233B54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233B58: lh          $v1, 0x34C($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X34C);
    // 0x80233B5C: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80233B60: bne         $v1, $zero, L_80233B80
    if (ctx->r3 != 0) {
        // 0x80233B64: sb          $v0, 0x9($a0)
        MEM_B(0X9, ctx->r4) = ctx->r2;
            goto L_80233B80;
    }
    // 0x80233B64: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80233B68: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80233B6C: bne         $v0, $zero, L_80233B78
    if (ctx->r2 != 0) {
        // 0x80233B70: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80233B78;
    }
    // 0x80233B70: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233B74: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80233B78:
    // 0x80233B78: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    // 0x80233B7C: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_80233B80:
    // 0x80233B80: jr          $ra
    // 0x80233B84: nop

    TRACE_RETURN()
    return;
    // 0x80233B84: nop

;}
RECOMP_FUNC void func_802262E4_ovl21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802262E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802262E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802262EC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802262F0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802262F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802262F8: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x802262FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226300: beq         $v1, $v0, L_80226328
    if (ctx->r3 == ctx->r2) {
        // 0x80226304: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80226328;
    }
    // 0x80226304: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80226308: beq         $v0, $zero, L_802263A4
    if (ctx->r2 == 0) {
        // 0x8022630C: nop
    
            goto L_802263A4;
    }
    // 0x8022630C: nop

    // 0x80226310: bne         $v1, $zero, L_802263A4
    if (ctx->r3 != 0) {
        // 0x80226314: nop
    
            goto L_802263A4;
    }
    // 0x80226314: nop

    // 0x80226318: jal         0x802263C0
    // 0x8022631C: nop

    func_802263C0_ovl21(rdram, ctx);
        goto after_0;
    // 0x8022631C: nop

    after_0:
    // 0x80226320: j           L_802263AC
    // 0x80226324: nop

        goto L_802263AC;
    // 0x80226324: nop

L_80226328:
    // 0x80226328: jal         0x8004EFE4
    // 0x8022632C: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_1;
    // 0x8022632C: nop

    after_1:
    // 0x80226330: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80226334: beq         $s0, $zero, L_80226388
    if (ctx->r16 == 0) {
        // 0x80226338: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226388;
    }
    // 0x80226338: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022633C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80226340: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226344: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80226348: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x8022634C: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x80226350: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80226354: addiu       $a1, $s1, 0x188
    ctx->r5 = ADD32(ctx->r17, 0X188);
    // 0x80226358: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022635C: jal         0x8009A3B4
    // 0x80226360: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80226360: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    after_2:
    // 0x80226364: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80226368: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022636C: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80226370: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226374: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80226378: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022637C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80226380: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80226384: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
L_80226388:
    // 0x80226388: addiu       $a0, $zero, 0x1BA
    ctx->r4 = ADD32(0, 0X1BA);
    // 0x8022638C: jal         0x8002A33C
    // 0x80226390: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80226390: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x80226394: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80226398: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022639C: j           L_802263AC
    // 0x802263A0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_802263AC;
    // 0x802263A0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802263A4:
    // 0x802263A4: jal         0x80226488
    // 0x802263A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80226488_ovl21(rdram, ctx);
        goto after_4;
    // 0x802263A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
L_802263AC:
    // 0x802263AC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802263B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802263B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802263B8: jr          $ra
    // 0x802263BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802263BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
