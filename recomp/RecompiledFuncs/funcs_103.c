#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80229D58_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229D58: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80229D5C: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x80229D60: beq         $a0, $v0, L_80229D84
    if (ctx->r4 == ctx->r2) {
        // 0x80229D64: slti        $v0, $a0, 0x39
        ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
            goto L_80229D84;
    }
    // 0x80229D64: slti        $v0, $a0, 0x39
    ctx->r2 = SIGNED(ctx->r4) < 0X39 ? 1 : 0;
    // 0x80229D68: bne         $v0, $zero, L_80229D90
    if (ctx->r2 != 0) {
        // 0x80229D6C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229D90;
    }
    // 0x80229D6C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229D70: slti        $v0, $a0, 0x4E
    ctx->r2 = SIGNED(ctx->r4) < 0X4E ? 1 : 0;
    // 0x80229D74: beq         $v0, $zero, L_80229D8C
    if (ctx->r2 == 0) {
        // 0x80229D78: slti        $v0, $a0, 0x4C
        ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
            goto L_80229D8C;
    }
    // 0x80229D78: slti        $v0, $a0, 0x4C
    ctx->r2 = SIGNED(ctx->r4) < 0X4C ? 1 : 0;
    // 0x80229D7C: bne         $v0, $zero, L_80229D90
    if (ctx->r2 != 0) {
        // 0x80229D80: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229D90;
    }
    // 0x80229D80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80229D84:
    // 0x80229D84: j           L_80229D90
    // 0x80229D88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80229D90;
    // 0x80229D88: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80229D8C:
    // 0x80229D8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80229D90:
    // 0x80229D90: jr          $ra
    // 0x80229D94: nop

    TRACE_RETURN()
    return;
    // 0x80229D94: nop

;}
RECOMP_FUNC void func_80232980_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232980: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80232984: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80232988: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023298C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80232990: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80232994: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80232998: lw          $v0, 0x44($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X44);
    // 0x8023299C: lb          $v0, 0x0($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X0);
    // 0x802329A0: bne         $v0, $zero, L_802329B8
    if (ctx->r2 != 0) {
        // 0x802329A4: nop
    
            goto L_802329B8;
    }
    // 0x802329A4: nop

    // 0x802329A8: jal         0x8004F684
    // 0x802329AC: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x802329AC: nop

    after_0:
    // 0x802329B0: j           L_80232A78
    // 0x802329B4: nop

        goto L_80232A78;
    // 0x802329B4: nop

L_802329B8:
    // 0x802329B8: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x802329BC: beq         $v1, $zero, L_802329D4
    if (ctx->r3 == 0) {
        // 0x802329C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802329D4;
    }
    // 0x802329C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802329C4: beq         $v1, $v0, L_80232A04
    if (ctx->r3 == ctx->r2) {
        // 0x802329C8: nop
    
            goto L_80232A04;
    }
    // 0x802329C8: nop

    // 0x802329CC: j           L_80232A78
    // 0x802329D0: nop

        goto L_80232A78;
    // 0x802329D0: nop

L_802329D4:
    // 0x802329D4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802329D8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802329DC: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x802329E0: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x802329E4: jal         0x8004D5D4
    // 0x802329E8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x802329E8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_1:
    // 0x802329EC: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x802329F0: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x802329F4: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x802329F8: sw          $v1, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r3;
    // 0x802329FC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232A00: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_80232A04:
    // 0x80232A04: lw          $s2, 0x44($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X44);
    // 0x80232A08: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x80232A0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232A10: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80232A14: jal         0x8009A3B4
    // 0x80232A18: addiu       $a1, $s2, 0x54
    ctx->r5 = ADD32(ctx->r18, 0X54);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80232A18: addiu       $a1, $s2, 0x54
    ctx->r5 = ADD32(ctx->r18, 0X54);
    after_2:
    // 0x80232A1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232A20: addiu       $a1, $s1, 0x18
    ctx->r5 = ADD32(ctx->r17, 0X18);
    // 0x80232A24: sh          $zero, 0x20($sp)
    MEM_H(0X20, ctx->r29) = 0;
    // 0x80232A28: jal         0x80031600
    // 0x80232A2C: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    func_80031600_CA00(rdram, ctx);
        goto after_3;
    // 0x80232A2C: sh          $zero, 0x24($sp)
    MEM_H(0X24, ctx->r29) = 0;
    after_3:
    // 0x80232A30: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
    // 0x80232A34: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80232A38: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x80232A3C: bne         $v0, $zero, L_80232A48
    if (ctx->r2 != 0) {
        // 0x80232A40: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_80232A48;
    }
    // 0x80232A40: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80232A44: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
L_80232A48:
    // 0x80232A48: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80232A4C: addiu       $a0, $s1, 0x18
    ctx->r4 = ADD32(ctx->r17, 0X18);
    // 0x80232A50: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80232A54: addiu       $v0, $zero, 0x600
    ctx->r2 = ADD32(0, 0X600);
    // 0x80232A58: jal         0x80031DA8
    // 0x80232A5C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_4;
    // 0x80232A5C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_4:
    // 0x80232A60: addiu       $a0, $s1, 0x38
    ctx->r4 = ADD32(ctx->r17, 0X38);
    // 0x80232A64: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80232A68: jal         0x8009A3B4
    // 0x80232A6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80232A6C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80232A70: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80232A74: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
L_80232A78:
    // 0x80232A78: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80232A7C: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80232A80: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80232A84: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80232A88: jr          $ra
    // 0x80232A8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80232A8C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022FD40_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FD40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FD44: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022FD48: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022FD4C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FD50: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022FD54: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FD58: lw          $v0, 0x6B90($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6B90);
    // 0x8022FD5C: jalr        $v0
    // 0x8022FD60: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022FD60: nop

    after_0:
    // 0x8022FD64: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022FD68: jr          $ra
    // 0x8022FD6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FD6C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DAA0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DAA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DAA4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022DAA8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022DAAC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022DAB0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022DAB4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DAB8: lw          $v0, 0x6ADC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6ADC);
    // 0x8022DABC: jalr        $v0
    // 0x8022DAC0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022DAC0: nop

    after_0:
    // 0x8022DAC4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022DAC8: jr          $ra
    // 0x8022DACC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DACC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226158_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226158: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022615C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226160: jal         0x8006036C
    // 0x80226164: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x80226164: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_0:
    // 0x80226168: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022616C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80226170: jr          $ra
    // 0x80226174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226174: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227C1C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227C1C: lh          $v0, 0x350($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X350);
    // 0x80227C20: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80227C24: beq         $v0, $zero, L_80227C40
    if (ctx->r2 == 0) {
        // 0x80227C28: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80227C40;
    }
    // 0x80227C28: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227C2C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80227C30: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x80227C34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227C38: bne         $v0, $zero, L_80227C6C
    if (ctx->r2 != 0) {
        // 0x80227C3C: nop
    
            goto L_80227C6C;
    }
    // 0x80227C3C: nop

L_80227C40:
    // 0x80227C40: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x80227C44: bgez        $v0, L_80227C6C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227C48: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_80227C6C;
    }
    // 0x80227C48: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80227C4C: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x80227C50: bnel        $v1, $v0, L_80227C6C
    if (ctx->r3 != ctx->r2) {
        // 0x80227C54: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_80227C6C;
    }
    goto skip_0;
    // 0x80227C54: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
    // 0x80227C58: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80227C5C: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x80227C60: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x80227C64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227C68: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80227C6C:
    // 0x80227C6C: jr          $ra
    // 0x80227C70: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80227C70: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8022E7B8_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E7B8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022E7BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E7C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E7C4: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022E7C8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8022E7CC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022E7D0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022E7D4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022E7D8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E7DC: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022E7E0: lw          $v1, 0xD4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XD4);
    // 0x8022E7E4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022E7E8: addu        $a0, $v0, $v1
    ctx->r4 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E7EC: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x8022E7F0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022E7F4: bne         $v1, $v0, L_8022E87C
    if (ctx->r3 != ctx->r2) {
        // 0x8022E7F8: addiu       $s2, $s0, 0xD0
        ctx->r18 = ADD32(ctx->r16, 0XD0);
            goto L_8022E87C;
    }
    // 0x8022E7F8: addiu       $s2, $s0, 0xD0
    ctx->r18 = ADD32(ctx->r16, 0XD0);
    // 0x8022E7FC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022E800: bne         $v0, $zero, L_8022E810
    if (ctx->r2 != 0) {
        // 0x8022E804: nop
    
            goto L_8022E810;
    }
    // 0x8022E804: nop

    // 0x8022E808: lbu         $v0, 0x5($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X5);
    // 0x8022E80C: sh          $v0, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r2;
L_8022E810:
    // 0x8022E810: lh          $v1, 0xEA($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XEA);
    // 0x8022E814: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
    // 0x8022E818: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E81C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022E820: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8022E824: sb          $v0, 0xDE($s0)
    MEM_B(0XDE, ctx->r16) = ctx->r2;
    // 0x8022E828: lh          $v0, 0xEA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XEA);
    // 0x8022E82C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022E830: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022E834: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022E838: lh          $v1, 0x66A4($at)
    ctx->r3 = MEM_H(ctx->r1, 0X66A4);
    // 0x8022E83C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E840: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8022E844: bne         $v1, $zero, L_8022E850
    if (ctx->r3 != 0) {
        // 0x8022E848: nop
    
            goto L_8022E850;
    }
    // 0x8022E848: nop

    // 0x8022E84C: break       7
    do_break(2149771340);
L_8022E850:
    // 0x8022E850: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022E854: bne         $v1, $at, L_8022E868
    if (ctx->r3 != ctx->r1) {
        // 0x8022E858: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8022E868;
    }
    // 0x8022E858: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022E85C: bne         $v0, $at, L_8022E868
    if (ctx->r2 != ctx->r1) {
        // 0x8022E860: nop
    
            goto L_8022E868;
    }
    // 0x8022E860: nop

    // 0x8022E864: break       6
    do_break(2149771364);
L_8022E868:
    // 0x8022E868: mfhi        $v1
    ctx->r3 = hi;
    // 0x8022E86C: nop

    // 0x8022E870: nop

    // 0x8022E874: j           L_8022E948
    // 0x8022E878: sh          $v1, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r3;
        goto L_8022E948;
    // 0x8022E878: sh          $v1, 0xEA($s0)
    MEM_H(0XEA, ctx->r16) = ctx->r3;
L_8022E87C:
    // 0x8022E87C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022E880: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x8022E884: addiu       $s4, $zero, 0x3
    ctx->r20 = ADD32(0, 0X3);
L_8022E888:
    // 0x8022E888: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022E88C: bne         $v0, $zero, L_8022E8C4
    if (ctx->r2 != 0) {
        // 0x8022E890: nop
    
            goto L_8022E8C4;
    }
    // 0x8022E890: nop

    // 0x8022E894: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022E898: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x8022E89C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022E8A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E8A4: sll         $v1, $s1, 16
    ctx->r3 = S32(ctx->r17 << 16);
    // 0x8022E8A8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022E8AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E8B0: lbu         $s3, 0x5($v0)
    ctx->r19 = MEM_BU(ctx->r2, 0X5);
    // 0x8022E8B4: beql        $v1, $s5, L_8022E948
    if (ctx->r3 == ctx->r21) {
        // 0x8022E8B8: sb          $s3, 0xE($s2)
        MEM_B(0XE, ctx->r18) = ctx->r19;
            goto L_8022E948;
    }
    goto skip_0;
    // 0x8022E8B8: sb          $s3, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r19;
    skip_0:
    // 0x8022E8BC: j           L_8022E8EC
    // 0x8022E8C0: nop

        goto L_8022E8EC;
    // 0x8022E8C0: nop

L_8022E8C4:
    // 0x8022E8C4: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x8022E8C8: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8022E8CC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022E8D0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E8D4: sll         $v1, $s1, 16
    ctx->r3 = S32(ctx->r17 << 16);
    // 0x8022E8D8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022E8DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E8E0: lbu         $s3, 0x4($v0)
    ctx->r19 = MEM_BU(ctx->r2, 0X4);
    // 0x8022E8E4: beql        $v1, $s4, L_8022E948
    if (ctx->r3 == ctx->r20) {
        // 0x8022E8E8: sb          $s3, 0xE($s2)
        MEM_B(0XE, ctx->r18) = ctx->r19;
            goto L_8022E948;
    }
    goto skip_1;
    // 0x8022E8E8: sb          $s3, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r19;
    skip_1:
L_8022E8EC:
    // 0x8022E8EC: jal         0x800A3450
    // 0x8022E8F0: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022E8F0: nop

    after_0:
    // 0x8022E8F4: lw          $a1, 0x0($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X0);
    // 0x8022E8F8: sll         $a0, $s1, 16
    ctx->r4 = S32(ctx->r17 << 16);
    // 0x8022E8FC: sll         $v1, $s3, 3
    ctx->r3 = S32(ctx->r19 << 3);
    // 0x8022E900: sra         $a0, $a0, 14
    ctx->r4 = S32(SIGNED(ctx->r4) >> 14);
    // 0x8022E904: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8022E908: lbu         $v1, 0x2($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2);
    // 0x8022E90C: srav        $v0, $v0, $a0
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r4 & 31));
    // 0x8022E910: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022E914: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x8022E918: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022E91C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022E920: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022E924: bne         $v0, $zero, L_8022E944
    if (ctx->r2 != 0) {
        // 0x8022E928: addiu       $v0, $s1, 0x1
        ctx->r2 = ADD32(ctx->r17, 0X1);
            goto L_8022E944;
    }
    // 0x8022E928: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x8022E92C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022E930: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E934: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022E938: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8022E93C: bne         $v0, $zero, L_8022E888
    if (ctx->r2 != 0) {
        // 0x8022E940: nop
    
            goto L_8022E888;
    }
    // 0x8022E940: nop

L_8022E944:
    // 0x8022E944: sb          $s3, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r19;
L_8022E948:
    // 0x8022E948: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022E94C: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8022E950: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022E954: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E958: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022E95C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E960: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E964: jr          $ra
    // 0x8022E968: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022E968: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8022E96C: nop

;}
RECOMP_FUNC void func_8022C1D0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C1D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C1D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C1D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C1DC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022C1E0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C1E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C1E8: jal         0x8009A3B4
    // 0x8022C1EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022C1EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022C1F0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022C1F4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022C1F8: jal         0x8009A3B4
    // 0x8022C1FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C1FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022C200: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022C204: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022C208: jal         0x8009A3B4
    // 0x8022C20C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022C20C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022C210: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022C214: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C218: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022C21C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C220: lw          $v0, 0x6610($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6610);
    // 0x8022C224: jalr        $v0
    // 0x8022C228: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022C228: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022C22C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C230: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022C234: beq         $v0, $zero, L_8022C24C
    if (ctx->r2 == 0) {
        // 0x8022C238: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022C24C;
    }
    // 0x8022C238: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C23C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8022C240: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022C244: jal         0x8003B564
    // 0x8022C248: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x8022C248: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_8022C24C:
    // 0x8022C24C: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022C250: beq         $v0, $zero, L_8022C268
    if (ctx->r2 == 0) {
        // 0x8022C254: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8022C268;
    }
    // 0x8022C254: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C258: jal         0x8005044C
    // 0x8022C25C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8022C25C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022C260: j           L_8022C26C
    // 0x8022C264: nop

        goto L_8022C26C;
    // 0x8022C264: nop

L_8022C268:
    // 0x8022C268: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
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
RECOMP_FUNC void func_80227B00_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227B04: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227B08: jal         0x8004F418
    // 0x80227B0C: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80227B0C: nop

    after_0:
    // 0x80227B10: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227B14: jr          $ra
    // 0x80227B18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227B18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B8B8_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B8B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B8BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B8C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B8C4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B8C8: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022B8CC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B8D0: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022B8D4: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022B8D8: jal         0x8004DA90
    // 0x8022B8DC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022B8DC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022B8E0: jal         0x8003E810
    // 0x8022B8E4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8003E810_19C10(rdram, ctx);
        goto after_1;
    // 0x8022B8E4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8022B8E8: bne         $v0, $zero, L_8022B904
    if (ctx->r2 != 0) {
        // 0x8022B8EC: nop
    
            goto L_8022B904;
    }
    // 0x8022B8EC: nop

    // 0x8022B8F0: jal         0x80040F30
    // 0x8022B8F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x8022B8F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022B8F8: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8022B8FC: j           L_8022B910
    // 0x8022B900: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8022B910;
    // 0x8022B900: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022B904:
    // 0x8022B904: jal         0x8004F418
    // 0x8022B908: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x8022B908: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022B90C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022B910:
    // 0x8022B910: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B914: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B918: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B91C: jr          $ra
    // 0x8022B920: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B920: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022AB14_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AB14: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8022AB18: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8022AB1C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022AB20: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8022AB24: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022AB28: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022AB2C: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8022AB30: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8022AB34: jal         0x8009A3B4
    // 0x8022AB38: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022AB38: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022AB3C: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8022AB40: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022AB44: jal         0x8009A3B4
    // 0x8022AB48: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022AB48: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022AB4C: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x8022AB50: addiu       $s0, $s1, 0x54
    ctx->r16 = ADD32(ctx->r17, 0X54);
    // 0x8022AB54: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022AB58: jal         0x8009A3B4
    // 0x8022AB5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022AB5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022AB60: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022AB64: lbu         $v1, -0x3A4C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A4C);
    // 0x8022AB68: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022AB6C: bne         $v1, $v0, L_8022ACC0
    if (ctx->r3 != ctx->r2) {
        // 0x8022AB70: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_8022ACC0;
    }
    // 0x8022AB70: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x8022AB74: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022AB78: lw          $v0, -0x3A44($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A44);
    // 0x8022AB7C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8022AB80: bne         $v0, $zero, L_8022AB8C
    if (ctx->r2 != 0) {
        // 0x8022AB84: addiu       $v0, $zero, 0x4210
        ctx->r2 = ADD32(0, 0X4210);
            goto L_8022AB8C;
    }
    // 0x8022AB84: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022AB88: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_8022AB8C:
    // 0x8022AB8C: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    // 0x8022AB90: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8022AB94: lhu         $v1, 0x44($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X44);
    // 0x8022AB98: lh          $a0, 0x44($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X44);
    // 0x8022AB9C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022ABA0: bgez        $a0, L_8022ABC4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8022ABA4: sh          $v0, 0x14($s1)
        MEM_H(0X14, ctx->r17) = ctx->r2;
            goto L_8022ABC4;
    }
    // 0x8022ABA4: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x8022ABA8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022ABAC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022ABB0: slti        $v0, $v0, -0x2BB
    ctx->r2 = SIGNED(ctx->r2) < -0X2BB ? 1 : 0;
    // 0x8022ABB4: beq         $v0, $zero, L_8022ABE8
    if (ctx->r2 == 0) {
        // 0x8022ABB8: addiu       $a0, $s1, 0x54
        ctx->r4 = ADD32(ctx->r17, 0X54);
            goto L_8022ABE8;
    }
    // 0x8022ABB8: addiu       $a0, $s1, 0x54
    ctx->r4 = ADD32(ctx->r17, 0X54);
    // 0x8022ABBC: j           L_8022ABD8
    // 0x8022ABC0: nop

        goto L_8022ABD8;
    // 0x8022ABC0: nop

L_8022ABC4:
    // 0x8022ABC4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022ABC8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022ABCC: slti        $v0, $v0, 0x2BC
    ctx->r2 = SIGNED(ctx->r2) < 0X2BC ? 1 : 0;
    // 0x8022ABD0: bne         $v0, $zero, L_8022ABE8
    if (ctx->r2 != 0) {
        // 0x8022ABD4: addiu       $a0, $s1, 0x54
        ctx->r4 = ADD32(ctx->r17, 0X54);
            goto L_8022ABE8;
    }
    // 0x8022ABD4: addiu       $a0, $s1, 0x54
    ctx->r4 = ADD32(ctx->r17, 0X54);
L_8022ABD8:
    // 0x8022ABD8: jal         0x8004F418
    // 0x8022ABDC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x8022ABDC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8022ABE0: j           L_8022AD4C
    // 0x8022ABE4: nop

        goto L_8022AD4C;
    // 0x8022ABE4: nop

L_8022ABE8:
    // 0x8022ABE8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022ABEC: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022ABF0: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x8022ABF4: lh          $a3, 0x16($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X16);
    // 0x8022ABF8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022ABFC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AC00: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022AC04: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022AC08: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022AC0C: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    // 0x8022AC10: jal         0x8009A3B4
    // 0x8022AC14: sw          $a3, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022AC14: sw          $a3, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r7;
    after_4:
    // 0x8022AC18: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8022AC1C: beq         $v0, $zero, L_8022AC80
    if (ctx->r2 == 0) {
        // 0x8022AC20: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022AC80;
    }
    // 0x8022AC20: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022AC24: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022AC28: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x8022AC2C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022AC30: beq         $v0, $zero, L_8022AC5C
    if (ctx->r2 == 0) {
        // 0x8022AC34: nop
    
            goto L_8022AC5C;
    }
    // 0x8022AC34: nop

    // 0x8022AC38: lhu         $a0, 0x56($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X56);
    // 0x8022AC3C: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8022AC40: addiu       $a0, $a0, 0x100
    ctx->r4 = ADD32(ctx->r4, 0X100);
    // 0x8022AC44: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x8022AC48: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022AC4C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022AC50: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022AC54: j           L_8022AC7C
    // 0x8022AC58: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
        goto L_8022AC7C;
    // 0x8022AC58: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
L_8022AC5C:
    // 0x8022AC5C: lhu         $a0, 0x56($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X56);
    // 0x8022AC60: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8022AC64: addiu       $a0, $a0, -0x100
    ctx->r4 = ADD32(ctx->r4, -0X100);
    // 0x8022AC68: xori        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 ^ 0X1;
    // 0x8022AC6C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022AC70: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022AC74: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022AC78: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
L_8022AC7C:
    // 0x8022AC7C: sh          $a0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r4;
L_8022AC80:
    // 0x8022AC80: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    // 0x8022AC84: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022AC88: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022AC8C: beq         $v0, $zero, L_8022ACD8
    if (ctx->r2 == 0) {
        // 0x8022AC90: addiu       $s0, $sp, 0x28
        ctx->r16 = ADD32(ctx->r29, 0X28);
            goto L_8022ACD8;
    }
    // 0x8022AC90: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x8022AC94: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8022AC98: addiu       $a0, $a0, -0x3A46
    ctx->r4 = ADD32(ctx->r4, -0X3A46);
    // 0x8022AC9C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8022ACA0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022ACA4: lbu         $v1, -0x3A45($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A45);
    // 0x8022ACA8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8022ACAC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022ACB0: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022ACB4: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x8022ACB8: j           L_8022ACD8
    // 0x8022ACBC: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
        goto L_8022ACD8;
    // 0x8022ACBC: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
L_8022ACC0:
    // 0x8022ACC0: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
    // 0x8022ACC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ACC8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022ACCC: jal         0x8009A3B4
    // 0x8022ACD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022ACD0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022ACD4: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
L_8022ACD8:
    // 0x8022ACD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ACDC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022ACE0: jal         0x8009A3B4
    // 0x8022ACE4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022ACE4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022ACE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ACEC: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x8022ACF0: addiu       $a1, $zero, 0x4B
    ctx->r5 = ADD32(0, 0X4B);
    // 0x8022ACF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022ACF8: addiu       $v0, $v0, -0x14
    ctx->r2 = ADD32(ctx->r2, -0X14);
    // 0x8022ACFC: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8022AD00: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022AD04: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022AD08: addiu       $v0, $s2, 0x8
    ctx->r2 = ADD32(ctx->r18, 0X8);
    // 0x8022AD0C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022AD10: lui         $v0, 0x480
    ctx->r2 = S32(0X480 << 16);
    // 0x8022AD14: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022AD18: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022AD1C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022AD20: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022AD24: jal         0x80051E18
    // 0x8022AD28: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_7;
    // 0x8022AD28: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_7:
    // 0x8022AD2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AD30: jal         0x8005044C
    // 0x8022AD34: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x8022AD34: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    after_8:
    // 0x8022AD38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AD3C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8022AD40: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022AD44: jal         0x8003B564
    // 0x8022AD48: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x8022AD48: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
L_8022AD4C:
    // 0x8022AD4C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8022AD50: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8022AD54: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8022AD58: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022AD5C: jr          $ra
    // 0x8022AD60: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8022AD60: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80231850_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231850: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80231854: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80231858: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023185C: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80231860: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80231864: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80231868: lh          $v1, 0x3E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X3E);
    // 0x8023186C: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x80231870: sh          $zero, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = 0;
    // 0x80231874: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80231878: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8023187C: jal         0x8004D5D4
    // 0x80231880: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80231880: sw          $v1, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r3;
    after_0:
    // 0x80231884: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x80231888: jal         0x8002C654
    // 0x8023188C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x8023188C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80231890: lb          $a0, 0xF($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XF);
    // 0x80231894: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80231898: jal         0x800319B4
    // 0x8023189C: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x8023189C: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_2:
    // 0x802318A0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802318A4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802318A8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802318AC: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x802318B0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802318B4: addiu       $v0, $v0, 0x6C50
    ctx->r2 = ADD32(ctx->r2, 0X6C50);
    // 0x802318B8: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x802318BC: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x802318C0: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x802318C4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802318C8: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x802318CC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802318D0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802318D4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802318D8: jr          $ra
    // 0x802318DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802318DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80228CB4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228CB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228CB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228CBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228CC0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80228CC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228CC8: jal         0x80229DE4
    // 0x80228CCC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80229DE4_ovl12(rdram, ctx);
        goto after_0;
    // 0x80228CCC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80228CD0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228CD4: beq         $v0, $zero, L_80228D00
    if (ctx->r2 == 0) {
        // 0x80228CD8: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_80228D00;
    }
    // 0x80228CD8: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80228CDC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80228CE0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228CE4: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80228CE8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80228CEC: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80228CF0: jal         0x80229D48
    // 0x80228CF4: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    func_80229D48_ovl12(rdram, ctx);
        goto after_1;
    // 0x80228CF4: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    after_1:
    // 0x80228CF8: j           L_80228D40
    // 0x80228CFC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80228D40;
    // 0x80228CFC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80228D00:
    // 0x80228D00: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80228D04: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228D08: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80228D0C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228D10: bne         $v0, $zero, L_80228D20
    if (ctx->r2 != 0) {
        // 0x80228D14: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228D20;
    }
    // 0x80228D14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228D18: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228D1C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228D20:
    // 0x80228D20: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80228D24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228D28: jal         0x8004DA90
    // 0x80228D2C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80228D2C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80228D30: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80228D34: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80228D38: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228D3C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80228D40:
    // 0x80228D40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228D44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228D48: jr          $ra
    // 0x80228D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EB70_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EB70: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022EB74: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022EB78: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022EB7C: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8022EB80: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022EB84: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x8022EB88: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022EB8C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022EB90: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022EB94: jal         0x8009A3B4
    // 0x8022EB98: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022EB98: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022EB9C: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x8022EBA0: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8022EBA4: jal         0x8009A3B4
    // 0x8022EBA8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022EBA8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022EBAC: addiu       $a0, $s2, 0x5C
    ctx->r4 = ADD32(ctx->r18, 0X5C);
    // 0x8022EBB0: addiu       $s0, $s2, 0x54
    ctx->r16 = ADD32(ctx->r18, 0X54);
    // 0x8022EBB4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022EBB8: jal         0x8009A3B4
    // 0x8022EBBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022EBBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022EBC0: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x8022EBC4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022EBC8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022EBCC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EBD0: lw          $v0, 0x6B28($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6B28);
    // 0x8022EBD4: jalr        $v0
    // 0x8022EBD8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022EBD8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8022EBDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EBE0: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x8022EBE4: jal         0x80031600
    // 0x8022EBE8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_4;
    // 0x8022EBE8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022EBEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EBF0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022EBF4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022EBF8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022EBFC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022EC00: jal         0x80031DA8
    // 0x8022EC04: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_5;
    // 0x8022EC04: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_5:
    // 0x8022EC08: addiu       $a0, $s2, 0xAC
    ctx->r4 = ADD32(ctx->r18, 0XAC);
    // 0x8022EC0C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022EC10: jal         0x8009A3B4
    // 0x8022EC14: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022EC14: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022EC18: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022EC1C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022EC20: beq         $v0, $zero, L_8022EC3C
    if (ctx->r2 == 0) {
        // 0x8022EC24: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022EC3C;
    }
    // 0x8022EC24: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022EC28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022EC2C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022EC30: lui         $a3, 0x2000
    ctx->r7 = S32(0X2000 << 16);
    // 0x8022EC34: jal         0x80047284
    // 0x8022EC38: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    func_80047284_22684(rdram, ctx);
        goto after_7;
    // 0x8022EC38: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    after_7:
L_8022EC3C:
    // 0x8022EC3C: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8022EC40: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022EC44: beq         $v0, $zero, L_8022EC5C
    if (ctx->r2 == 0) {
        // 0x8022EC48: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022EC5C;
    }
    // 0x8022EC48: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022EC4C: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    // 0x8022EC50: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022EC54: jal         0x8003B564
    // 0x8022EC58: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8003B564_16964(rdram, ctx);
        goto after_8;
    // 0x8022EC58: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
L_8022EC5C:
    // 0x8022EC5C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022EC60: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022EC64: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022EC68: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022EC6C: jr          $ra
    // 0x8022EC70: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022EC70: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80226EA0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226EA0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226EA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226EA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226EAC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226EB0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226EB4: lbu         $a0, 0x5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5);
    // 0x80226EB8: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80226EBC: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80226EC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226EC4: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80226EC8: beq         $v1, $v0, L_80226F00
    if (ctx->r3 == ctx->r2) {
        // 0x80226ECC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80226F00;
    }
    // 0x80226ECC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80226ED0: beql        $v0, $zero, L_80226EE8
    if (ctx->r2 == 0) {
        // 0x80226ED4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226EE8;
    }
    goto skip_0;
    // 0x80226ED4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80226ED8: beq         $v1, $zero, L_80226EF8
    if (ctx->r3 == 0) {
        // 0x80226EDC: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80226EF8;
    }
    // 0x80226EDC: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80226EE0: j           L_80226FC0
    // 0x80226EE4: nop

        goto L_80226FC0;
    // 0x80226EE4: nop

L_80226EE8:
    // 0x80226EE8: beq         $v1, $v0, L_80226F40
    if (ctx->r3 == ctx->r2) {
        // 0x80226EEC: addiu       $a0, $zero, 0x22E
        ctx->r4 = ADD32(0, 0X22E);
            goto L_80226F40;
    }
    // 0x80226EEC: addiu       $a0, $zero, 0x22E
    ctx->r4 = ADD32(0, 0X22E);
    // 0x80226EF0: j           L_80226FC0
    // 0x80226EF4: nop

        goto L_80226FC0;
    // 0x80226EF4: nop

L_80226EF8:
    // 0x80226EF8: j           L_80226FC0
    // 0x80226EFC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80226FC0;
    // 0x80226EFC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80226F00:
    // 0x80226F00: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226F04: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226F08: bne         $v0, $zero, L_80226FC0
    if (ctx->r2 != 0) {
        // 0x80226F0C: nop
    
            goto L_80226FC0;
    }
    // 0x80226F0C: nop

    // 0x80226F10: jal         0x80054578
    // 0x80226F14: nop

    func_80054578_2F978(rdram, ctx);
        goto after_0;
    // 0x80226F14: nop

    after_0:
    // 0x80226F18: jal         0x80070050
    // 0x80226F1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_1;
    // 0x80226F1C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80226F20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226F24: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F28: jal         0x80034844
    // 0x80226F2C: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_2;
    // 0x80226F2C: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_2:
    // 0x80226F30: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80226F34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226F38: j           L_80226FC0
    // 0x80226F3C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80226FC0;
    // 0x80226F3C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80226F40:
    // 0x80226F40: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80226F44: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80226F48: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80226F4C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F50: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80226F54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226F58: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F5C: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80226F60: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80226F64: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F68: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80226F6C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226F70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F74: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80226F78: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80226F7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F80: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x80226F84: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226F88: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F8C: sb          $a1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r5;
    // 0x80226F90: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F94: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80226F98: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F9C: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226FA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226FA4: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226FA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226FAC: sb          $a1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r5;
    // 0x80226FB0: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x80226FB4: jal         0x8006036C
    // 0x80226FB8: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x80226FB8: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    after_3:
    // 0x80226FBC: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80226FC0:
    // 0x80226FC0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226FC4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226FC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226FCC: jr          $ra
    // 0x80226FD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226FD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232D0C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232D0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232D10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232D14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232D18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232D1C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80232D20: beq         $v1, $zero, L_80232D38
    if (ctx->r3 == 0) {
        // 0x80232D24: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80232D38;
    }
    // 0x80232D24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232D28: beq         $v1, $v0, L_80232DF8
    if (ctx->r3 == ctx->r2) {
        // 0x80232D2C: nop
    
            goto L_80232DF8;
    }
    // 0x80232D2C: nop

    // 0x80232D30: j           L_80232E40
    // 0x80232D34: nop

        goto L_80232E40;
    // 0x80232D34: nop

L_80232D38:
    // 0x80232D38: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80232D3C: jal         0x8006FF84
    // 0x80232D40: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80232D40: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x80232D44: beq         $v0, $zero, L_80232E40
    if (ctx->r2 == 0) {
        // 0x80232D48: nop
    
            goto L_80232E40;
    }
    // 0x80232D48: nop

    // 0x80232D4C: jal         0x80232B60
    // 0x80232D50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80232B60_ovl12(rdram, ctx);
        goto after_1;
    // 0x80232D50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80232D54: jal         0x80036B58
    // 0x80232D58: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_80036B58_11F58(rdram, ctx);
        goto after_2;
    // 0x80232D58: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_2:
    // 0x80232D5C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80232D60: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x80232D64: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80232D68: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232D6C: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x80232D70: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232D74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232D78: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x80232D7C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80232D80: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232D84: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x80232D88: addiu       $v0, $zero, 0x300
    ctx->r2 = ADD32(0, 0X300);
    // 0x80232D8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232D90: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x80232D94: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x80232D98: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232D9C: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x80232DA0: lui         $v0, 0x300
    ctx->r2 = S32(0X300 << 16);
    // 0x80232DA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232DA8: sh          $zero, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = 0;
    // 0x80232DAC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232DB0: sw          $zero, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = 0;
    // 0x80232DB4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232DB8: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80232DBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232DC0: sh          $zero, 0x4DF0($at)
    MEM_H(0X4DF0, ctx->r1) = 0;
    // 0x80232DC4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232DC8: sh          $zero, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = 0;
    // 0x80232DCC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232DD0: sh          $zero, 0x4DF4($at)
    MEM_H(0X4DF4, ctx->r1) = 0;
    // 0x80232DD4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232DD8: sb          $zero, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = 0;
    // 0x80232DDC: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x80232DE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80232DE4: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x80232DE8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80232DEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232DF0: j           L_80232E40
    // 0x80232DF4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80232E40;
    // 0x80232DF4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80232DF8:
    // 0x80232DF8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80232DFC: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80232E00: bne         $v0, $zero, L_80232E40
    if (ctx->r2 != 0) {
        // 0x80232E04: nop
    
            goto L_80232E40;
    }
    // 0x80232E04: nop

    // 0x80232E08: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80232E0C: lbu         $v0, -0x7388($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X7388);
    // 0x80232E10: bne         $v0, $zero, L_80232E40
    if (ctx->r2 != 0) {
        // 0x80232E14: addiu       $a0, $zero, 0x19
        ctx->r4 = ADD32(0, 0X19);
            goto L_80232E40;
    }
    // 0x80232E14: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x80232E18: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80232E1C: jal         0x8002A2F8
    // 0x80232E20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x80232E20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80232E24: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80232E28: jal         0x800616FC
    // 0x80232E2C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x80232E2C: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_4:
    // 0x80232E30: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232E34: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80232E38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232E3C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80232E40:
    // 0x80232E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232E44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232E48: jr          $ra
    // 0x80232E4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232E4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802314A4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802314A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802314A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802314AC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802314B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802314B4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802314B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802314BC: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x802314C0: lw          $s2, 0x44($s1)
    ctx->r18 = MEM_W(ctx->r17, 0X44);
    // 0x802314C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802314C8: beq         $v1, $v0, L_80231510
    if (ctx->r3 == ctx->r2) {
        // 0x802314CC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80231510;
    }
    // 0x802314CC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802314D0: beql        $v0, $zero, L_802314E8
    if (ctx->r2 == 0) {
        // 0x802314D4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802314E8;
    }
    goto skip_0;
    // 0x802314D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802314D8: beq         $v1, $zero, L_802314F8
    if (ctx->r3 == 0) {
        // 0x802314DC: lui         $v1, 0x20
        ctx->r3 = S32(0X20 << 16);
            goto L_802314F8;
    }
    // 0x802314DC: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x802314E0: j           L_8023163C
    // 0x802314E4: nop

        goto L_8023163C;
    // 0x802314E4: nop

L_802314E8:
    // 0x802314E8: beq         $v1, $v0, L_80231544
    if (ctx->r3 == ctx->r2) {
        // 0x802314EC: nop
    
            goto L_80231544;
    }
    // 0x802314EC: nop

    // 0x802314F0: j           L_8023163C
    // 0x802314F4: nop

        goto L_8023163C;
    // 0x802314F4: nop

L_802314F8:
    // 0x802314F8: lh          $v0, 0x3A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X3A);
    // 0x802314FC: sw          $v1, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r3;
    // 0x80231500: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80231504: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
    // 0x80231508: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023150C: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
L_80231510:
    // 0x80231510: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80231514: ori         $v0, $v0, 0xFF00
    ctx->r2 = ctx->r2 | 0XFF00;
    // 0x80231518: lw          $v1, 0xC($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XC);
    // 0x8023151C: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x80231520: ori         $a0, $a0, 0x1000
    ctx->r4 = ctx->r4 | 0X1000;
    // 0x80231524: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80231528: bne         $v1, $a0, L_80231538
    if (ctx->r3 != ctx->r4) {
        // 0x8023152C: nop
    
            goto L_80231538;
    }
    // 0x8023152C: nop

    // 0x80231530: jal         0x802316D8
    // 0x80231534: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_802316D8_ovl12(rdram, ctx);
        goto after_0;
    // 0x80231534: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_0:
L_80231538:
    // 0x80231538: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x8023153C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231540: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_80231544:
    // 0x80231544: lw          $v0, 0x4C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4C);
    // 0x80231548: lw          $a0, 0x50($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X50);
    // 0x8023154C: lhu         $v1, 0x3A($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X3A);
    // 0x80231550: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80231554: sw          $v0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r2;
    // 0x80231558: lw          $v0, 0x50($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X50);
    // 0x8023155C: lhu         $a1, 0x4C($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X4C);
    // 0x80231560: lui         $a0, 0xFFFC
    ctx->r4 = S32(0XFFFC << 16);
    // 0x80231564: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x80231568: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023156C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80231570: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80231574: sh          $a1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r5;
    // 0x80231578: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8023157C: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80231580: slt         $v1, $v1, $a1
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80231584: beq         $v1, $zero, L_802315F4
    if (ctx->r3 == 0) {
        // 0x80231588: sw          $v0, 0x50($s1)
        MEM_W(0X50, ctx->r17) = ctx->r2;
            goto L_802315F4;
    }
    // 0x80231588: sw          $v0, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->r2;
    // 0x8023158C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80231590: addiu       $a1, $s2, 0x3
    ctx->r5 = ADD32(ctx->r18, 0X3);
    // 0x80231594: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231598: sb          $zero, 0x3($s2)
    MEM_B(0X3, ctx->r18) = 0;
    // 0x8023159C: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x802315A0: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x802315A4: sw          $zero, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = 0;
    // 0x802315A8: jal         0x8004D5D4
    // 0x802315AC: sw          $zero, 0x50($s2)
    MEM_W(0X50, ctx->r18) = 0;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x802315AC: sw          $zero, 0x50($s2)
    MEM_W(0X50, ctx->r18) = 0;
    after_1:
    // 0x802315B0: addiu       $s0, $s2, 0x18
    ctx->r16 = ADD32(ctx->r18, 0X18);
    // 0x802315B4: jal         0x8002C654
    // 0x802315B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_2;
    // 0x802315B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802315BC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802315C0: jal         0x800317C0
    // 0x802315C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800317C0_CBC0(rdram, ctx);
        goto after_3;
    // 0x802315C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802315C8: lbu         $a0, 0xB($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0XB);
    // 0x802315CC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802315D0: jal         0x800319B4
    // 0x802315D4: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_4;
    // 0x802315D4: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_4:
    // 0x802315D8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802315DC: jal         0x80031BB4
    // 0x802315E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_5;
    // 0x802315E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802315E4: jal         0x8004F684
    // 0x802315E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_6;
    // 0x802315E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x802315EC: j           L_8023163C
    // 0x802315F0: nop

        goto L_8023163C;
    // 0x802315F0: nop

L_802315F4:
    // 0x802315F4: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x802315F8: jal         0x8002C654
    // 0x802315FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_7;
    // 0x802315FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80231600: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x80231604: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80231608: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023160C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80231610: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80231614: lh          $a0, 0x6C30($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X6C30);
    // 0x80231618: jal         0x80031BB4
    // 0x8023161C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_8;
    // 0x8023161C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80231620: lb          $a0, 0xF($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XF);
    // 0x80231624: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80231628: jal         0x800319B4
    // 0x8023162C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    func_800319B4_CDB4(rdram, ctx);
        goto after_9;
    // 0x8023162C: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    after_9:
    // 0x80231630: lbu         $v0, 0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XB);
    // 0x80231634: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231638: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_8023163C:
    // 0x8023163C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80231640: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80231644: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231648: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023164C: jr          $ra
    // 0x80231650: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231650: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227BB8_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227BB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227BBC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227BC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227BC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227BC8: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80227BCC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227BD0: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80227BD4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227BD8: bne         $v0, $zero, L_80227C0C
    if (ctx->r2 != 0) {
        // 0x80227BDC: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_80227C0C;
    }
    // 0x80227BDC: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x80227BE0: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80227BE4: bne         $v1, $v0, L_80227BF0
    if (ctx->r3 != ctx->r2) {
        // 0x80227BE8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227BF0;
    }
    // 0x80227BE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227BEC: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
L_80227BF0:
    // 0x80227BF0: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80227BF4: jal         0x80229CB0
    // 0x80227BF8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80229CB0_ovl12(rdram, ctx);
        goto after_0;
    // 0x80227BF8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x80227BFC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227C00: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227C04: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227C08: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80227C0C:
    // 0x80227C0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227C10: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227C14: jr          $ra
    // 0x80227C18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227C18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231654_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231654: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231658: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023165C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231660: lui         $a0, 0xFF
    ctx->r4 = S32(0XFF << 16);
    // 0x80231664: ori         $a0, $a0, 0xFF00
    ctx->r4 = ctx->r4 | 0XFF00;
    // 0x80231668: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x8023166C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231670: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x80231674: ori         $v1, $v1, 0x1000
    ctx->r3 = ctx->r3 | 0X1000;
    // 0x80231678: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    // 0x8023167C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x80231680: beql        $v0, $v1, L_802316C8
    if (ctx->r2 == ctx->r3) {
        // 0x80231684: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802316C8;
    }
    goto skip_0;
    // 0x80231684: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x80231688: beq         $a1, $zero, L_802316A0
    if (ctx->r5 == 0) {
        // 0x8023168C: nop
    
            goto L_802316A0;
    }
    // 0x8023168C: nop

    // 0x80231690: jal         0x8006033C
    // 0x80231694: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80231694: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x80231698: beq         $v0, $zero, L_802316C8
    if (ctx->r2 == 0) {
        // 0x8023169C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802316C8;
    }
    // 0x8023169C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802316A0:
    // 0x802316A0: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x802316A4: jal         0x8006033C
    // 0x802316A8: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802316A8: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_1:
    // 0x802316AC: bne         $v0, $zero, L_802316C8
    if (ctx->r2 != 0) {
        // 0x802316B0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802316C8;
    }
    // 0x802316B0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802316B4: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x802316B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802316BC: bne         $v1, $v0, L_802316C8
    if (ctx->r3 != ctx->r2) {
        // 0x802316C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802316C8;
    }
    // 0x802316C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802316C4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802316C8:
    // 0x802316C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802316CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802316D0: jr          $ra
    // 0x802316D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802316D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225C08_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225C0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225C10: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225C18: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225C1C: bne         $v0, $zero, L_80225C38
    if (ctx->r2 != 0) {
        // 0x80225C20: nop
    
            goto L_80225C38;
    }
    // 0x80225C20: nop

    // 0x80225C24: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225C28: jal         0x800607C4
    // 0x80225C2C: addiu       $a0, $a0, 0x5A44
    ctx->r4 = ADD32(ctx->r4, 0X5A44);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225C2C: addiu       $a0, $a0, 0x5A44
    ctx->r4 = ADD32(ctx->r4, 0X5A44);
    after_0:
    // 0x80225C30: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225C34: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225C38:
    // 0x80225C38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225C3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225C40: jr          $ra
    // 0x80225C44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225C44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228290_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228290: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228294: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228298: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022829C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802282A0: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x802282A4: bgez        $v0, L_802282BC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802282A8: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_802282BC;
    }
    // 0x802282A8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802282AC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802282B0: jal         0x80229D58
    // 0x802282B4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_80229D58_ovl12(rdram, ctx);
        goto after_0;
    // 0x802282B4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x802282B8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802282BC:
    // 0x802282BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802282C0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802282C4: jr          $ra
    // 0x802282C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802282C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229B44_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229B44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229B48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229B4C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229B50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229B54: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229B58: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80229B5C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80229B60: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80229B64: jal         0x8004F820
    // 0x80229B68: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80229B68: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80229B6C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229B70: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229B74: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229B78: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80229B7C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80229B80: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80229B84: bne         $v0, $zero, L_80229BA8
    if (ctx->r2 != 0) {
        // 0x80229B88: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_80229BA8;
    }
    // 0x80229B88: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x80229B8C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80229B90: lbu         $a0, 0x34B($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34B);
    // 0x80229B94: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80229B98: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80229B9C: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80229BA0: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80229BA4: sb          $a0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r4;
L_80229BA8:
    // 0x80229BA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229BAC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229BB0: jr          $ra
    // 0x80229BB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229BB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226FDC_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226FDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226FE0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226FE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226FE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226FEC: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x80226FF0: beq         $v1, $zero, L_80227008
    if (ctx->r3 == 0) {
        // 0x80226FF4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227008;
    }
    // 0x80226FF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226FF8: beq         $v1, $v0, L_80227020
    if (ctx->r3 == ctx->r2) {
        // 0x80226FFC: nop
    
            goto L_80227020;
    }
    // 0x80226FFC: nop

    // 0x80227000: j           L_80227038
    // 0x80227004: nop

        goto L_80227038;
    // 0x80227004: nop

L_80227008:
    // 0x80227008: jal         0x80036E48
    // 0x8022700C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_0;
    // 0x8022700C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x80227010: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80227014: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227018: j           L_80227038
    // 0x8022701C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
        goto L_80227038;
    // 0x8022701C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_80227020:
    // 0x80227020: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227024: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80227028: bne         $v0, $zero, L_80227038
    if (ctx->r2 != 0) {
        // 0x8022702C: nop
    
            goto L_80227038;
    }
    // 0x8022702C: nop

    // 0x80227030: jal         0x800600F8
    // 0x80227034: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_1;
    // 0x80227034: nop

    after_1:
L_80227038:
    // 0x80227038: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022703C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227040: jr          $ra
    // 0x80227044: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227044: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80227048: nop

    // 0x8022704C: nop

;}
RECOMP_FUNC void func_8022A694_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A694: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022A698: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022A69C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A6A0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022A6A4: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022A6A8: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022A6AC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022A6B0: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022A6B4: jal         0x8009A3B4
    // 0x8022A6B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022A6B8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022A6BC: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022A6C0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022A6C4: jal         0x8009A3B4
    // 0x8022A6C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022A6C8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022A6CC: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022A6D0: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022A6D4: jal         0x8009A3B4
    // 0x8022A6D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022A6D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022A6DC: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022A6E0: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022A6E4: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8022A6E8: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022A6EC: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x8022A6F0: lhu         $a3, 0x48($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X48);
    // 0x8022A6F4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022A6F8: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022A6FC: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022A700: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8022A704: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022A708: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022A70C: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x8022A710: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
    // 0x8022A714: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022A718: lh          $a1, 0x18($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X18);
    // 0x8022A71C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A720: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022A724: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022A728: slti        $a1, $a1, 0x400
    ctx->r5 = SIGNED(ctx->r5) < 0X400 ? 1 : 0;
    // 0x8022A72C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022A730: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022A734: beq         $a1, $zero, L_8022A750
    if (ctx->r5 == 0) {
        // 0x8022A738: sw          $a0, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r4;
            goto L_8022A750;
    }
    // 0x8022A738: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022A73C: lw          $v0, 0x350($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X350);
    // 0x8022A740: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x8022A744: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A748: beql        $v0, $zero, L_8022A7A0
    if (ctx->r2 == 0) {
        // 0x8022A74C: addiu       $a0, $sp, 0x28
        ctx->r4 = ADD32(ctx->r29, 0X28);
            goto L_8022A7A0;
    }
    goto skip_0;
    // 0x8022A74C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    skip_0:
L_8022A750:
    // 0x8022A750: lw          $v0, 0x350($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X350);
    // 0x8022A754: lui         $v1, 0x400
    ctx->r3 = S32(0X400 << 16);
    // 0x8022A758: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A75C: beq         $v0, $zero, L_8022A768
    if (ctx->r2 == 0) {
        // 0x8022A760: addiu       $a0, $zero, 0x161
        ctx->r4 = ADD32(0, 0X161);
            goto L_8022A768;
    }
    // 0x8022A760: addiu       $a0, $zero, 0x161
    ctx->r4 = ADD32(0, 0X161);
    // 0x8022A764: addiu       $a0, $zero, 0x162
    ctx->r4 = ADD32(0, 0X162);
L_8022A768:
    // 0x8022A768: jal         0x8002A33C
    // 0x8022A76C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022A76C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8022A770: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x8022A774: bgez        $v0, L_8022A780
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A778: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_8022A780;
    }
    // 0x8022A778: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8022A77C: addiu       $v0, $zero, -0x50
    ctx->r2 = ADD32(0, -0X50);
L_8022A780:
    // 0x8022A780: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022A784: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022A788: addiu       $v0, $zero, -0x3C
    ctx->r2 = ADD32(0, -0X3C);
    // 0x8022A78C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022A790: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022A794: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022A798: j           L_8022A7F8
    // 0x8022A79C: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_8022A7F8;
    // 0x8022A79C: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_8022A7A0:
    // 0x8022A7A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022A7A4: jal         0x8009A3B4
    // 0x8022A7A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022A7A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022A7AC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8022A7B0: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x8022A7B4: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x8022A7B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A7BC: addiu       $v0, $v0, -0x1E
    ctx->r2 = ADD32(ctx->r2, -0X1E);
    // 0x8022A7C0: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8022A7C4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022A7C8: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022A7CC: addiu       $v0, $s0, 0x350
    ctx->r2 = ADD32(ctx->r16, 0X350);
    // 0x8022A7D0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022A7D4: lui         $v0, 0xC80
    ctx->r2 = S32(0XC80 << 16);
    // 0x8022A7D8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022A7DC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022A7E0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022A7E4: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022A7E8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022A7EC: jal         0x80051E18
    // 0x8022A7F0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_5;
    // 0x8022A7F0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_5:
    // 0x8022A7F4: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
L_8022A7F8:
    // 0x8022A7F8: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x8022A7FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A800: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x8022A804: jal         0x800504EC
    // 0x8022A808: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    func_800504EC_2B8EC(rdram, ctx);
        goto after_6;
    // 0x8022A808: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    after_6:
    // 0x8022A80C: jal         0x80051770
    // 0x8022A810: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_7;
    // 0x8022A810: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022A814: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x8022A818: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022A81C: sh          $v0, -0x3D8C($at)
    MEM_H(-0X3D8C, ctx->r1) = ctx->r2;
    // 0x8022A820: jal         0x80051248
    // 0x8022A824: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_8;
    // 0x8022A824: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8022A828: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A82C: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022A830: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022A834: jal         0x8003B564
    // 0x8022A838: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x8022A838: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x8022A83C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022A840: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022A844: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022A848: jr          $ra
    // 0x8022A84C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022A84C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_802291A0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802291A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802291A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802291A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802291AC: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802291B0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802291B4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802291B8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802291BC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802291C0: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x802291C4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802291C8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802291CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802291D0: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
    // 0x802291D4: sh          $v1, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r3;
    // 0x802291D8: jal         0x80229D48
    // 0x802291DC: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    func_80229D48_ovl12(rdram, ctx);
        goto after_0;
    // 0x802291DC: sb          $a1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r5;
    after_0:
    // 0x802291E0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x802291E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802291E8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802291EC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802291F0: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x802291F4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802291F8: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x802291FC: jal         0x8004F820
    // 0x80229200: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80229200: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x80229204: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229208: bgez        $v0, L_80229238
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022920C: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80229238;
    }
    // 0x8022920C: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80229210: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229214: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229218: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022921C: jal         0x8004F820
    // 0x80229220: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80229220: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80229224: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229228: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022922C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80229230: j           L_80229254
    // 0x80229234: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80229254;
    // 0x80229234: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80229238:
    // 0x80229238: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022923C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80229240: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80229244: jal         0x8004F820
    // 0x80229248: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80229248: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x8022924C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229250: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80229254:
    // 0x80229254: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229258: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022925C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80229260: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229264: jal         0x800610AC
    // 0x80229268: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x80229268: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022926C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80229270: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80229274: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229278: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022927C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229280: jr          $ra
    // 0x80229284: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229284: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80227E54_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227E54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227E58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227E5C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227E60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227E64: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80227E68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227E6C: jal         0x8004DA90
    // 0x80227E70: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80227E70: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80227E74: lhu         $v0, 0x35E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X35E);
    // 0x80227E78: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227E7C: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    // 0x80227E80: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227E84: bne         $v0, $zero, L_80227EBC
    if (ctx->r2 != 0) {
        // 0x80227E88: nop
    
            goto L_80227EBC;
    }
    // 0x80227E88: nop

    // 0x80227E8C: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x80227E90: beq         $v0, $zero, L_80227EA4
    if (ctx->r2 == 0) {
        // 0x80227E94: nop
    
            goto L_80227EA4;
    }
    // 0x80227E94: nop

    // 0x80227E98: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80227E9C: j           L_80227EAC
    // 0x80227EA0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
        goto L_80227EAC;
    // 0x80227EA0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
L_80227EA4:
    // 0x80227EA4: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80227EA8: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
L_80227EAC:
    // 0x80227EAC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80227EB0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80227EB4: j           L_80227F0C
    // 0x80227EB8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80227F0C;
    // 0x80227EB8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80227EBC:
    // 0x80227EBC: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80227EC0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227EC4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80227EC8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227ECC: bne         $v0, $zero, L_80227EDC
    if (ctx->r2 != 0) {
        // 0x80227ED0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227EDC;
    }
    // 0x80227ED0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227ED4: j           L_80227F0C
    // 0x80227ED8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80227F0C;
    // 0x80227ED8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80227EDC:
    // 0x80227EDC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80227EE0: jal         0x80229DE4
    // 0x80227EE4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80229DE4_ovl12(rdram, ctx);
        goto after_1;
    // 0x80227EE4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x80227EE8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227EEC: beq         $v0, $zero, L_80227F10
    if (ctx->r2 == 0) {
        // 0x80227EF0: nop
    
            goto L_80227F10;
    }
    // 0x80227EF0: nop

    // 0x80227EF4: jal         0x80229D48
    // 0x80227EF8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80229D48_ovl12(rdram, ctx);
        goto after_2;
    // 0x80227EF8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x80227EFC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227F00: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80227F04: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x80227F08: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_80227F0C:
    // 0x80227F0C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227F10:
    // 0x80227F10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227F14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227F18: jr          $ra
    // 0x80227F1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227F1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FD70_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FD70: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FD74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FD78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FD7C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022FD80: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022FD84: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022FD88: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022FD8C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022FD90: jal         0x8004D5D4
    // 0x8022FD94: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022FD94: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022FD98: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x8022FD9C: jal         0x8002C678
    // 0x8022FDA0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_1;
    // 0x8022FDA0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022FDA4: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022FDA8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8022FDAC: jal         0x800319B4
    // 0x8022FDB0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x8022FDB0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_2:
    // 0x8022FDB4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FDB8: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8022FDBC: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022FDC0: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x8022FDC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FDC8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022FDCC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022FDD0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022FDD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FDD8: jr          $ra
    // 0x8022FDDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FDDC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227800_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227800: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227804: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227808: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022780C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227810: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227814: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80227818: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022781C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80227820: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227824: beq         $v1, $zero, L_80227834
    if (ctx->r3 == 0) {
        // 0x80227828: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_80227834;
    }
    // 0x80227828: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022782C: j           L_8022783C
    // 0x80227830: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
        goto L_8022783C;
    // 0x80227830: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
L_80227834:
    // 0x80227834: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227838: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8022783C:
    // 0x8022783C: jal         0x8004D5D4
    // 0x80227840: nop

    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227840: nop

    after_0:
    // 0x80227844: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227848: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x8022784C: bne         $a0, $v0, L_8022785C
    if (ctx->r4 != ctx->r2) {
        // 0x80227850: xori        $v1, $a0, 0x24
        ctx->r3 = ctx->r4 ^ 0X24;
            goto L_8022785C;
    }
    // 0x80227850: xori        $v1, $a0, 0x24
    ctx->r3 = ctx->r4 ^ 0X24;
    // 0x80227854: j           L_802278D0
    // 0x80227858: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
        goto L_802278D0;
    // 0x80227858: addiu       $v0, $zero, 0x1D7
    ctx->r2 = ADD32(0, 0X1D7);
L_8022785C:
    // 0x8022785C: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80227860: xori        $v0, $a0, 0x30
    ctx->r2 = ctx->r4 ^ 0X30;
    // 0x80227864: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80227868: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022786C: bne         $v1, $zero, L_802278D0
    if (ctx->r3 != 0) {
        // 0x80227870: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_802278D0;
    }
    // 0x80227870: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80227874: xori        $v1, $a0, 0x42
    ctx->r3 = ctx->r4 ^ 0X42;
    // 0x80227878: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022787C: xori        $v0, $a0, 0x53
    ctx->r2 = ctx->r4 ^ 0X53;
    // 0x80227880: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80227884: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80227888: bne         $v1, $zero, L_802278D0
    if (ctx->r3 != 0) {
        // 0x8022788C: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_802278D0;
    }
    // 0x8022788C: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x80227890: xori        $v1, $a0, 0x5C
    ctx->r3 = ctx->r4 ^ 0X5C;
    // 0x80227894: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80227898: xori        $v0, $a0, 0x44
    ctx->r2 = ctx->r4 ^ 0X44;
    // 0x8022789C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802278A0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802278A4: bne         $v1, $zero, L_802278D0
    if (ctx->r3 != 0) {
        // 0x802278A8: addiu       $v0, $zero, 0x21A
        ctx->r2 = ADD32(0, 0X21A);
            goto L_802278D0;
    }
    // 0x802278A8: addiu       $v0, $zero, 0x21A
    ctx->r2 = ADD32(0, 0X21A);
    // 0x802278AC: addiu       $v0, $zero, 0x5E
    ctx->r2 = ADD32(0, 0X5E);
    // 0x802278B0: bnel        $a0, $v0, L_802278D0
    if (ctx->r4 != ctx->r2) {
        // 0x802278B4: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_802278D0;
    }
    goto skip_0;
    // 0x802278B4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    skip_0:
    // 0x802278B8: addiu       $v0, $zero, 0x1C0
    ctx->r2 = ADD32(0, 0X1C0);
    // 0x802278BC: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802278C0: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802278C4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802278C8: j           L_802278D8
    // 0x802278CC: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
        goto L_802278D8;
    // 0x802278CC: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
L_802278D0:
    // 0x802278D0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802278D4: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
L_802278D8:
    // 0x802278D8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802278DC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802278E0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802278E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802278E8: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x802278EC: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x802278F0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802278F4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x802278F8: bne         $v0, $zero, L_80227904
    if (ctx->r2 != 0) {
        // 0x802278FC: addiu       $v0, $zero, 0x2710
        ctx->r2 = ADD32(0, 0X2710);
            goto L_80227904;
    }
    // 0x802278FC: addiu       $v0, $zero, 0x2710
    ctx->r2 = ADD32(0, 0X2710);
    // 0x80227900: addiu       $v0, $zero, 0x1388
    ctx->r2 = ADD32(0, 0X1388);
L_80227904:
    // 0x80227904: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x80227908: addiu       $a0, $s1, 0xC
    ctx->r4 = ADD32(ctx->r17, 0XC);
    // 0x8022790C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80227910: jal         0x8009A3B4
    // 0x80227914: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80227914: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80227918: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022791C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227920: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227924: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
    // 0x80227928: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x8022792C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227930: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227934: addiu       $v0, $v0, 0x6350
    ctx->r2 = ADD32(ctx->r2, 0X6350);
    // 0x80227938: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x8022793C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227940: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80227944: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80227948: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x8022794C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80227950: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80227954: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x80227958: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022795C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80227960: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80227964: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80227968: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022796C: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80227970: jal         0x80050294
    // 0x80227974: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80227974: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    after_2:
    // 0x80227978: jal         0x80227994
    // 0x8022797C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227994_ovl12(rdram, ctx);
        goto after_3;
    // 0x8022797C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80227980: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227984: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227988: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022798C: jr          $ra
    // 0x80227990: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227990: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B990_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B990: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B994: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B998: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B99C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B9A0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B9A4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B9A8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022B9AC: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022B9B0: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022B9B4: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022B9B8: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022B9BC: jal         0x8004D5D4
    // 0x8022B9C0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022B9C0: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022B9C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B9C8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022B9CC: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022B9D0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022B9D4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022B9D8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022B9DC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022B9E0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022B9E4: addiu       $v0, $v0, 0x65D0
    ctx->r2 = ADD32(ctx->r2, 0X65D0);
    // 0x8022B9E8: jal         0x8003E934
    // 0x8022B9EC: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022B9EC: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022B9F0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022B9F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B9F8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022B9FC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022BA00: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022BA04: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022BA08: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022BA0C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022BA10: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022BA14: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022BA18: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022BA1C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022BA20: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x8022BA24: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x8022BA28: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022BA2C: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x8022BA30: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022BA34: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022BA38: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022BA3C: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022BA40: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x8022BA44: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022BA48: jal         0x800A3450
    // 0x8022BA4C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022BA4C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_2:
    // 0x8022BA50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BA54: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022BA58: jal         0x80050294
    // 0x8022BA5C: andi        $a2, $v0, 0x3
    ctx->r6 = ctx->r2 & 0X3;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022BA5C: andi        $a2, $v0, 0x3
    ctx->r6 = ctx->r2 & 0X3;
    after_3:
    // 0x8022BA60: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8022BA64: lbu         $a2, 0x8($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X8);
    // 0x8022BA68: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    // 0x8022BA6C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022BA70: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022BA74: sb          $v0, 0x107($s0)
    MEM_B(0X107, ctx->r16) = ctx->r2;
    // 0x8022BA78: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x8022BA7C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022BA80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BA84: sb          $zero, 0xFF($s0)
    MEM_B(0XFF, ctx->r16) = 0;
    // 0x8022BA88: sb          $zero, 0x103($s0)
    MEM_B(0X103, ctx->r16) = 0;
    // 0x8022BA8C: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x8022BA90: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8022BA94: addiu       $v1, $v1, -0x50
    ctx->r3 = ADD32(ctx->r3, -0X50);
    // 0x8022BA98: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022BA9C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022BAA0: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022BAA4: jal         0x8002A33C
    // 0x8022BAA8: sb          $a2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r6;
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022BAA8: sb          $a2, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r6;
    after_4:
    // 0x8022BAAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BAB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BAB4: jr          $ra
    // 0x8022BAB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BAB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802317A0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802317A0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802317A4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x802317A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802317AC: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802317B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802317B4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802317B8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x802317BC: jal         0x80047284
    // 0x802317C0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    func_80047284_22684(rdram, ctx);
        goto after_0;
    // 0x802317C0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    after_0:
    // 0x802317C4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802317C8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802317CC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802317D0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802317D4: lw          $v0, 0x6C40($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6C40);
    // 0x802317D8: jalr        $v0
    // 0x802317DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x802317DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802317E0: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x802317E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802317E8: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x802317EC: jal         0x8009A3B4
    // 0x802317F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802317F0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802317F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802317F8: lhu         $v0, 0x2A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2A);
    // 0x802317FC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x80231800: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231804: addiu       $v0, $v0, -0x2D
    ctx->r2 = ADD32(ctx->r2, -0X2D);
    // 0x80231808: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8023180C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80231810: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80231814: addiu       $v0, $s0, 0x4C
    ctx->r2 = ADD32(ctx->r16, 0X4C);
    // 0x80231818: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023181C: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80231820: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80231824: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80231828: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023182C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80231830: jal         0x80051E18
    // 0x80231834: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x80231834: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x80231838: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
    // 0x8023183C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80231840: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80231844: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80231848: jr          $ra
    // 0x8023184C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8023184C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80233E6C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233E6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233E70: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80233E74: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80233E78: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80233E7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233E80: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80233E84: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80233E88: beq         $v0, $zero, L_80233F6C
    if (ctx->r2 == 0) {
        // 0x80233E8C: andi        $v0, $v1, 0x3
        ctx->r2 = ctx->r3 & 0X3;
            goto L_80233F6C;
    }
    // 0x80233E8C: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x80233E90: bne         $v0, $zero, L_80233F50
    if (ctx->r2 != 0) {
        // 0x80233E94: nop
    
            goto L_80233F50;
    }
    // 0x80233E94: nop

    // 0x80233E98: jal         0x8004F144
    // 0x80233E9C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80233E9C: nop

    after_0:
    // 0x80233EA0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80233EA4: beq         $s0, $zero, L_80233F50
    if (ctx->r16 == 0) {
        // 0x80233EA8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80233F50;
    }
    // 0x80233EA8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233EAC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80233EB0: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80233EB4: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80233EB8: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80233EBC: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80233EC0: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80233EC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233EC8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80233ECC: jal         0x800A3450
    // 0x80233ED0: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80233ED0: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    after_1:
    // 0x80233ED4: lbu         $v1, 0xE($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XE);
    // 0x80233ED8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80233EDC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80233EE0: sb          $v1, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r3;
    // 0x80233EE4: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80233EE8: jal         0x800A3450
    // 0x80233EEC: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80233EEC: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    after_2:
    // 0x80233EF0: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x80233EF4: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80233EF8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80233EFC: jal         0x800A3450
    // 0x80233F00: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80233F00: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_3:
    // 0x80233F04: lui         $a0, 0x3D48
    ctx->r4 = S32(0X3D48 << 16);
    // 0x80233F08: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x80233F0C: ori         $a0, $a0, 0x4E
    ctx->r4 = ctx->r4 | 0X4E;
    // 0x80233F10: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80233F14: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80233F18: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    // 0x80233F1C: lhu         $v1, 0x1E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1E);
    // 0x80233F20: lui         $v0, 0x2E40
    ctx->r2 = S32(0X2E40 << 16);
    // 0x80233F24: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
    // 0x80233F28: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80233F2C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80233F30: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    // 0x80233F34: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x80233F38: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x80233F3C: jal         0x800A3450
    // 0x80233F40: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80233F40: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    after_4:
    // 0x80233F44: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80233F48: addiu       $v0, $v0, 0xA0
    ctx->r2 = ADD32(ctx->r2, 0XA0);
    // 0x80233F4C: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80233F50:
    // 0x80233F50: jal         0x800A3450
    // 0x80233F54: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80233F54: nop

    after_5:
    // 0x80233F58: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80233F5C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233F60: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233F64: j           L_80233F74
    // 0x80233F68: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
        goto L_80233F74;
    // 0x80233F68: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_80233F6C:
    // 0x80233F6C: jal         0x8004F5C4
    // 0x80233F70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_6;
    // 0x80233F70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_80233F74:
    // 0x80233F74: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80233F78: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233F7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233F80: jr          $ra
    // 0x80233F84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233F84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C86C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C86C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022C870: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022C874: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C878: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022C87C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022C880: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C884: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022C888: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022C88C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C890: beq         $v1, $v0, L_8022C958
    if (ctx->r3 == ctx->r2) {
        // 0x8022C894: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022C958;
    }
    // 0x8022C894: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022C898: beql        $v0, $zero, L_8022C8B0
    if (ctx->r2 == 0) {
        // 0x8022C89C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C8B0;
    }
    goto skip_0;
    // 0x8022C89C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022C8A0: beq         $v1, $zero, L_8022C8C8
    if (ctx->r3 == 0) {
        // 0x8022C8A4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8022C8C8;
    }
    // 0x8022C8A4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022C8A8: j           L_8022CA30
    // 0x8022C8AC: nop

        goto L_8022CA30;
    // 0x8022C8AC: nop

L_8022C8B0:
    // 0x8022C8B0: beq         $v1, $v0, L_8022C988
    if (ctx->r3 == ctx->r2) {
        // 0x8022C8B4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022C988;
    }
    // 0x8022C8B4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C8B8: beq         $v1, $v0, L_8022C9C8
    if (ctx->r3 == ctx->r2) {
        // 0x8022C8BC: nop
    
            goto L_8022C9C8;
    }
    // 0x8022C8BC: nop

    // 0x8022C8C0: j           L_8022CA30
    // 0x8022C8C4: nop

        goto L_8022CA30;
    // 0x8022C8C4: nop

L_8022C8C8:
    // 0x8022C8C8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022C8CC: addiu       $v1, $v1, -0x420
    ctx->r3 = ADD32(ctx->r3, -0X420);
    // 0x8022C8D0: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
L_8022C8D4:
    // 0x8022C8D4: lb          $v0, 0x0($v1)
    ctx->r2 = MEM_B(ctx->r3, 0X0);
    // 0x8022C8D8: beq         $v0, $zero, L_8022C8EC
    if (ctx->r2 == 0) {
        // 0x8022C8DC: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8022C8EC;
    }
    // 0x8022C8DC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8022C8E0: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x8022C8E4: beq         $v0, $a1, L_8022C8F8
    if (ctx->r2 == ctx->r5) {
        // 0x8022C8E8: nop
    
            goto L_8022C8F8;
    }
    // 0x8022C8E8: nop

L_8022C8EC:
    // 0x8022C8EC: slti        $v0, $a0, 0x12
    ctx->r2 = SIGNED(ctx->r4) < 0X12 ? 1 : 0;
    // 0x8022C8F0: bne         $v0, $zero, L_8022C8D4
    if (ctx->r2 != 0) {
        // 0x8022C8F4: addiu       $v1, $v1, 0x3C8
        ctx->r3 = ADD32(ctx->r3, 0X3C8);
            goto L_8022C8D4;
    }
    // 0x8022C8F4: addiu       $v1, $v1, 0x3C8
    ctx->r3 = ADD32(ctx->r3, 0X3C8);
L_8022C8F8:
    // 0x8022C8F8: lh          $v0, 0x14($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X14);
    // 0x8022C8FC: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x8022C900: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022C904: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x8022C908: addiu       $v0, $v0, -0x79
    ctx->r2 = ADD32(ctx->r2, -0X79);
    // 0x8022C90C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022C910: lh          $v0, 0x18($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X18);
    // 0x8022C914: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022C918: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x8022C91C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022C920: lh          $a2, 0x56($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X56);
    // 0x8022C924: addiu       $a1, $zero, 0x107
    ctx->r5 = ADD32(0, 0X107);
    // 0x8022C928: addiu       $a3, $zero, 0x12
    ctx->r7 = ADD32(0, 0X12);
    // 0x8022C92C: jal         0x80034FCC
    // 0x8022C930: addiu       $a2, $a2, -0x800
    ctx->r6 = ADD32(ctx->r6, -0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_0;
    // 0x8022C930: addiu       $a2, $a2, -0x800
    ctx->r6 = ADD32(ctx->r6, -0X800);
    after_0:
    // 0x8022C934: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022C938: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    // 0x8022C93C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8022C940: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022C944: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C948: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C94C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022C950: j           L_8022C9BC
    // 0x8022C954: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
        goto L_8022C9BC;
    // 0x8022C954: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
L_8022C958:
    // 0x8022C958: jal         0x8003516C
    // 0x8022C95C: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x8022C95C: nop

    after_1:
    // 0x8022C960: bne         $v0, $zero, L_8022CA30
    if (ctx->r2 != 0) {
        // 0x8022C964: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022CA30;
    }
    // 0x8022C964: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C968: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022C96C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022C970: jal         0x800610AC
    // 0x8022C974: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_2;
    // 0x8022C974: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    after_2:
    // 0x8022C978: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C97C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C980: j           L_8022CA30
    // 0x8022C984: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022CA30;
    // 0x8022C984: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022C988:
    // 0x8022C988: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022C98C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022C990: bne         $v0, $zero, L_8022CA30
    if (ctx->r2 != 0) {
        // 0x8022C994: nop
    
            goto L_8022CA30;
    }
    // 0x8022C994: nop

    // 0x8022C998: jal         0x80034E3C
    // 0x8022C99C: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_3;
    // 0x8022C99C: nop

    after_3:
    // 0x8022C9A0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022C9A4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022C9A8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022C9AC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C9B0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C9B4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022C9B8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_8022C9BC:
    // 0x8022C9BC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022C9C0: j           L_8022CA30
    // 0x8022C9C4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_8022CA30;
    // 0x8022C9C4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022C9C8:
    // 0x8022C9C8: jal         0x8003516C
    // 0x8022C9CC: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_4;
    // 0x8022C9CC: nop

    after_4:
    // 0x8022C9D0: bne         $v0, $zero, L_8022CA30
    if (ctx->r2 != 0) {
        // 0x8022C9D4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CA30;
    }
    // 0x8022C9D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C9D8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022C9DC: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8022C9E0: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022C9E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022C9E8: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x8022C9EC: sb          $zero, 0x35A($s0)
    MEM_B(0X35A, ctx->r16) = 0;
    // 0x8022C9F0: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022C9F4: lbu         $v1, 0x6630($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6630);
    // 0x8022C9F8: lbu         $v0, 0x35A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X35A);
    // 0x8022C9FC: sb          $v1, 0x358($s0)
    MEM_B(0X358, ctx->r16) = ctx->r3;
    // 0x8022CA00: lbu         $a1, 0x358($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X358);
    // 0x8022CA04: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022CA08: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CA0C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CA10: lbu         $v0, 0x6631($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X6631);
    // 0x8022CA14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CA18: jal         0x80050294
    // 0x8022CA1C: sb          $v0, 0x359($s0)
    MEM_B(0X359, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022CA1C: sb          $v0, 0x359($s0)
    MEM_B(0X359, ctx->r16) = ctx->r2;
    after_5:
    // 0x8022CA20: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022CA24: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022CA28: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CA2C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022CA30:
    // 0x8022CA30: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022CA34: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022CA38: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022CA3C: jr          $ra
    // 0x8022CA40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022CA40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022F7F0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F7F0: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8022F7F4: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8022F7F8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022F7FC: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8022F800: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8022F804: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x8022F808: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022F80C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022F810: sw          $ra, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r31;
    // 0x8022F814: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x8022F818: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8022F81C: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8022F820: jal         0x8009A3B4
    // 0x8022F824: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022F824: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022F828: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x8022F82C: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x8022F830: jal         0x8009A3B4
    // 0x8022F834: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022F834: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022F838: addiu       $a0, $s2, 0x5C
    ctx->r4 = ADD32(ctx->r18, 0X5C);
    // 0x8022F83C: addiu       $a1, $s2, 0x54
    ctx->r5 = ADD32(ctx->r18, 0X54);
    // 0x8022F840: jal         0x8009A3B4
    // 0x8022F844: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022F844: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022F848: lb          $v0, 0xE($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XE);
    // 0x8022F84C: beq         $v0, $zero, L_8022F8A4
    if (ctx->r2 == 0) {
        // 0x8022F850: nop
    
            goto L_8022F8A4;
    }
    // 0x8022F850: nop

    // 0x8022F854: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8022F858: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x8022F85C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022F860: bne         $v0, $zero, L_8022F8A4
    if (ctx->r2 != 0) {
        // 0x8022F864: nop
    
            goto L_8022F8A4;
    }
    // 0x8022F864: nop

    // 0x8022F868: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8022F86C: lb          $v1, 0xC($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XC);
    // 0x8022F870: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F874: sb          $v0, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r2;
    // 0x8022F878: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022F87C: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
    // 0x8022F880: addiu       $v1, $a0, 0x3
    ctx->r3 = ADD32(ctx->r4, 0X3);
    // 0x8022F884: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022F888: beql        $v1, $zero, L_8022F89C
    if (ctx->r3 == 0) {
        // 0x8022F88C: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022F89C;
    }
    goto skip_0;
    // 0x8022F88C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    skip_0:
    // 0x8022F890: sb          $a0, 0x3($s2)
    MEM_B(0X3, ctx->r18) = ctx->r4;
    // 0x8022F894: sb          $zero, 0xE($s2)
    MEM_B(0XE, ctx->r18) = 0;
    // 0x8022F898: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
L_8022F89C:
    // 0x8022F89C: jal         0x8004D5D4
    // 0x8022F8A0: addiu       $a1, $s2, 0x3
    ctx->r5 = ADD32(ctx->r18, 0X3);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x8022F8A0: addiu       $a1, $s2, 0x3
    ctx->r5 = ADD32(ctx->r18, 0X3);
    after_3:
L_8022F8A4:
    // 0x8022F8A4: lw          $v1, 0xC0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XC0);
    // 0x8022F8A8: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x8022F8AC: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022F8B0: beq         $v0, $zero, L_8022F8E8
    if (ctx->r2 == 0) {
        // 0x8022F8B4: lui         $v0, 0x200
        ctx->r2 = S32(0X200 << 16);
            goto L_8022F8E8;
    }
    // 0x8022F8B4: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x8022F8B8: jal         0x800A3450
    // 0x8022F8BC: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8022F8BC: nop

    after_4:
    // 0x8022F8C0: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x8022F8C4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F8C8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022F8CC: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022F8D0: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022F8D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F8D8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022F8DC: addiu       $v1, $v1, 0x12C
    ctx->r3 = ADD32(ctx->r3, 0X12C);
    // 0x8022F8E0: j           L_8022FAE4
    // 0x8022F8E4: sw          $v1, 0xD0($s2)
    MEM_W(0XD0, ctx->r18) = ctx->r3;
        goto L_8022FAE4;
    // 0x8022F8E4: sw          $v1, 0xD0($s2)
    MEM_W(0XD0, ctx->r18) = ctx->r3;
L_8022F8E8:
    // 0x8022F8E8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022F8EC: beq         $v0, $zero, L_8022F900
    if (ctx->r2 == 0) {
        // 0x8022F8F0: addiu       $a0, $s2, 0x14
        ctx->r4 = ADD32(ctx->r18, 0X14);
            goto L_8022F900;
    }
    // 0x8022F8F0: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
    // 0x8022F8F4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F8F8: j           L_8022FAE4
    // 0x8022F8FC: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
        goto L_8022FAE4;
    // 0x8022F8FC: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
L_8022F900:
    // 0x8022F900: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x8022F904: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022F908: beq         $v0, $zero, L_8022FAD4
    if (ctx->r2 == 0) {
        // 0x8022F90C: lui         $v0, 0x400
        ctx->r2 = S32(0X400 << 16);
            goto L_8022FAD4;
    }
    // 0x8022F90C: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8022F910: lb          $v0, 0xC($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC);
    // 0x8022F914: beq         $v0, $zero, L_8022F920
    if (ctx->r2 == 0) {
        // 0x8022F918: addiu       $a0, $zero, 0x16C
        ctx->r4 = ADD32(0, 0X16C);
            goto L_8022F920;
    }
    // 0x8022F918: addiu       $a0, $zero, 0x16C
    ctx->r4 = ADD32(0, 0X16C);
    // 0x8022F91C: addiu       $a0, $zero, 0x16B
    ctx->r4 = ADD32(0, 0X16B);
L_8022F920:
    // 0x8022F920: jal         0x8002A33C
    // 0x8022F924: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022F924: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_5:
    // 0x8022F928: lb          $v1, 0xD($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XD);
    // 0x8022F92C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F930: bne         $v1, $v0, L_8022F978
    if (ctx->r3 != ctx->r2) {
        // 0x8022F934: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8022F978;
    }
    // 0x8022F934: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8022F938: lb          $v0, 0xC($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC);
    // 0x8022F93C: beq         $v0, $zero, L_8022F954
    if (ctx->r2 == 0) {
        // 0x8022F940: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_8022F954;
    }
    // 0x8022F940: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8022F944: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8022F948: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F94C: j           L_8022F968
    // 0x8022F950: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
        goto L_8022F968;
    // 0x8022F950: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_8022F954:
    // 0x8022F954: lw          $v0, 0x4C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4C);
    // 0x8022F958: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    // 0x8022F95C: addiu       $v0, $v0, 0x1E
    ctx->r2 = ADD32(ctx->r2, 0X1E);
    // 0x8022F960: jal         0x800616FC
    // 0x8022F964: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_6;
    // 0x8022F964: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
    after_6:
L_8022F968:
    // 0x8022F968: jal         0x8004F4F8
    // 0x8022F96C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_7;
    // 0x8022F96C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_7:
    // 0x8022F970: j           L_8022FCC8
    // 0x8022F974: nop

        goto L_8022FCC8;
    // 0x8022F974: nop

L_8022F978:
    // 0x8022F978: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022F97C: addiu       $s5, $s2, 0x14
    ctx->r21 = ADD32(ctx->r18, 0X14);
    // 0x8022F980: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x8022F984: sb          $v0, 0xD($s2)
    MEM_B(0XD, ctx->r18) = ctx->r2;
    // 0x8022F988: lb          $v1, 0xD($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XD);
    // 0x8022F98C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022F990: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022F994: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x8022F998: sb          $s4, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r20;
    // 0x8022F99C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022F9A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F9A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F9A8: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022F9AC: addiu       $v1, $v1, 0x6B60
    ctx->r3 = ADD32(ctx->r3, 0X6B60);
    // 0x8022F9B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F9B4: jal         0x8004EC38
    // 0x8022F9B8: sw          $v0, 0x78($s2)
    MEM_W(0X78, ctx->r18) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_8;
    // 0x8022F9B8: sw          $v0, 0x78($s2)
    MEM_W(0X78, ctx->r18) = ctx->r2;
    after_8:
    // 0x8022F9BC: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022F9C0: addiu       $s0, $s3, 0x400
    ctx->r16 = ADD32(ctx->r19, 0X400);
    // 0x8022F9C4: jal         0x800324B4
    // 0x8022F9C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_9;
    // 0x8022F9C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8022F9CC: lw          $v1, 0xD0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XD0);
    // 0x8022F9D0: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022F9D4: mflo        $v0
    ctx->r2 = lo;
    // 0x8022F9D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F9DC: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x8022F9E0: jal         0x80032498
    // 0x8022F9E4: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_10;
    // 0x8022F9E4: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    after_10:
    // 0x8022F9E8: lw          $v1, 0xD0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XD0);
    // 0x8022F9EC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022F9F0: mflo        $v0
    ctx->r2 = lo;
    // 0x8022F9F4: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x8022F9F8: nop

    // 0x8022F9FC: jal         0x8004EFE4
    // 0x8022FA00: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_11;
    // 0x8022FA00: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    after_11:
    // 0x8022FA04: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022FA08: beq         $s1, $zero, L_8022FB30
    if (ctx->r17 == 0) {
        // 0x8022FA0C: addiu       $v0, $zero, 0x26
        ctx->r2 = ADD32(0, 0X26);
            goto L_8022FB30;
    }
    // 0x8022FA0C: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x8022FA10: sb          $s4, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r20;
    // 0x8022FA14: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8022FA18: lbu         $v0, 0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XC);
    // 0x8022FA1C: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x8022FA20: lbu         $v0, 0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XD);
    // 0x8022FA24: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022FA28: sb          $s4, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r20;
    // 0x8022FA2C: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x8022FA30: lbu         $v0, 0xF($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF);
    // 0x8022FA34: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8022FA38: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022FA3C: jal         0x8009A3B4
    // 0x8022FA40: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x8022FA40: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    after_12:
    // 0x8022FA44: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x8022FA48: beq         $v0, $zero, L_8022FA70
    if (ctx->r2 == 0) {
        // 0x8022FA4C: nop
    
            goto L_8022FA70;
    }
    // 0x8022FA4C: nop

    // 0x8022FA50: jal         0x800A3450
    // 0x8022FA54: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_13;
    // 0x8022FA54: nop

    after_13:
    // 0x8022FA58: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022FA5C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022FA60: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FA64: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022FA68: j           L_8022FA8C
    // 0x8022FA6C: addiu       $v1, $v1, 0x64
    ctx->r3 = ADD32(ctx->r3, 0X64);
        goto L_8022FA8C;
    // 0x8022FA6C: addiu       $v1, $v1, 0x64
    ctx->r3 = ADD32(ctx->r3, 0X64);
L_8022FA70:
    // 0x8022FA70: jal         0x800A3450
    // 0x8022FA74: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_14;
    // 0x8022FA74: nop

    after_14:
    // 0x8022FA78: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022FA7C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022FA80: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FA84: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022FA88: addiu       $v1, $v1, 0x32
    ctx->r3 = ADD32(ctx->r3, 0X32);
L_8022FA8C:
    // 0x8022FA8C: sw          $v1, 0xD0($s1)
    MEM_W(0XD0, ctx->r17) = ctx->r3;
    // 0x8022FA90: addiu       $s0, $s3, -0x400
    ctx->r16 = ADD32(ctx->r19, -0X400);
    // 0x8022FA94: jal         0x800324B4
    // 0x8022FA98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_15;
    // 0x8022FA98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_15:
    // 0x8022FA9C: lw          $v1, 0xD0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XD0);
    // 0x8022FAA0: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022FAA4: mflo        $v0
    ctx->r2 = lo;
    // 0x8022FAA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FAAC: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x8022FAB0: jal         0x80032498
    // 0x8022FAB4: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_16;
    // 0x8022FAB4: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    after_16:
    // 0x8022FAB8: lw          $v1, 0xD0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XD0);
    // 0x8022FABC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022FAC0: mflo        $v0
    ctx->r2 = lo;
    // 0x8022FAC4: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x8022FAC8: nop

    // 0x8022FACC: j           L_8022FB30
    // 0x8022FAD0: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
        goto L_8022FB30;
    // 0x8022FAD0: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
L_8022FAD4:
    // 0x8022FAD4: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022FAD8: beq         $v0, $zero, L_8022FB30
    if (ctx->r2 == 0) {
        // 0x8022FADC: addiu       $a1, $s2, 0xC8
        ctx->r5 = ADD32(ctx->r18, 0XC8);
            goto L_8022FB30;
    }
    // 0x8022FADC: addiu       $a1, $s2, 0xC8
    ctx->r5 = ADD32(ctx->r18, 0XC8);
    // 0x8022FAE0: addiu       $a0, $s2, 0x14
    ctx->r4 = ADD32(ctx->r18, 0X14);
L_8022FAE4:
    // 0x8022FAE4: jal         0x8004EC38
    // 0x8022FAE8: nop

    func_8004EC38_2A038(rdram, ctx);
        goto after_17;
    // 0x8022FAE8: nop

    after_17:
    // 0x8022FAEC: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8022FAF0: jal         0x800324B4
    // 0x8022FAF4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_18;
    // 0x8022FAF4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_18:
    // 0x8022FAF8: lw          $v1, 0xD0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XD0);
    // 0x8022FAFC: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022FB00: mflo        $v0
    ctx->r2 = lo;
    // 0x8022FB04: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022FB08: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x8022FB0C: jal         0x80032498
    // 0x8022FB10: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_19;
    // 0x8022FB10: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    after_19:
    // 0x8022FB14: lw          $v1, 0xD0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XD0);
    // 0x8022FB18: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022FB1C: mflo        $v0
    ctx->r2 = lo;
    // 0x8022FB20: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022FB24: sb          $v1, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r3;
    // 0x8022FB28: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x8022FB2C: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
L_8022FB30:
    // 0x8022FB30: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x8022FB34: addiu       $s3, $s2, 0x14
    ctx->r19 = ADD32(ctx->r18, 0X14);
    // 0x8022FB38: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022FB3C: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8022FB40: lhu         $v1, 0x46($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X46);
    // 0x8022FB44: lhu         $t0, 0x4E($s2)
    ctx->r8 = MEM_HU(ctx->r18, 0X4E);
    // 0x8022FB48: lh          $a2, 0x44($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X44);
    // 0x8022FB4C: lw          $a3, 0x1C($s2)
    ctx->r7 = MEM_W(ctx->r18, 0X1C);
    // 0x8022FB50: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x8022FB54: sll         $a2, $a2, 12
    ctx->r6 = S32(ctx->r6 << 12);
    // 0x8022FB58: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x8022FB5C: sh          $v1, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r3;
    // 0x8022FB60: sw          $a3, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r7;
    // 0x8022FB64: lh          $a3, 0x46($s2)
    ctx->r7 = MEM_H(ctx->r18, 0X46);
    // 0x8022FB68: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8022FB6C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022FB70: sh          $v0, 0x56($s2)
    MEM_H(0X56, ctx->r18) = ctx->r2;
    // 0x8022FB74: lh          $v0, 0x48($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X48);
    // 0x8022FB78: lw          $v1, 0x24($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X24);
    // 0x8022FB7C: lw          $a2, 0x20($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X20);
    // 0x8022FB80: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x8022FB84: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FB88: sll         $a3, $a3, 12
    ctx->r7 = S32(ctx->r7 << 12);
    // 0x8022FB8C: addu        $a2, $a2, $a3
    ctx->r6 = ADD32(ctx->r6, ctx->r7);
    // 0x8022FB90: sw          $v1, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r3;
    // 0x8022FB94: jal         0x8004DD04
    // 0x8022FB98: sw          $a2, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r6;
    func_8004DD04_29104(rdram, ctx);
        goto after_20;
    // 0x8022FB98: sw          $a2, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r6;
    after_20:
    // 0x8022FB9C: jal         0x80040F30
    // 0x8022FBA0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_21;
    // 0x8022FBA0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_21:
    // 0x8022FBA4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022FBA8: beq         $a1, $zero, L_8022FBBC
    if (ctx->r5 == 0) {
        // 0x8022FBAC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022FBBC;
    }
    // 0x8022FBAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FBB0: sb          $v0, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r2;
    // 0x8022FBB4: jal         0x80040834
    // 0x8022FBB8: addiu       $a0, $s2, 0x44
    ctx->r4 = ADD32(ctx->r18, 0X44);
    func_80040834_1BC34(rdram, ctx);
        goto after_22;
    // 0x8022FBB8: addiu       $a0, $s2, 0x44
    ctx->r4 = ADD32(ctx->r18, 0X44);
    after_22:
L_8022FBBC:
    // 0x8022FBBC: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8022FBC0: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022FBC4: addiu       $a1, $a1, 0x7510
    ctx->r5 = ADD32(ctx->r5, 0X7510);
    // 0x8022FBC8: jal         0x8009A3B4
    // 0x8022FBCC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    memcpy_recomp(rdram, ctx);
        goto after_23;
    // 0x8022FBCC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_23:
    // 0x8022FBD0: addiu       $a0, $s2, 0xAC
    ctx->r4 = ADD32(ctx->r18, 0XAC);
    // 0x8022FBD4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022FBD8: jal         0x8009A3B4
    // 0x8022FBDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_24;
    // 0x8022FBDC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_24:
    // 0x8022FBE0: addiu       $a0, $s2, 0x54
    ctx->r4 = ADD32(ctx->r18, 0X54);
    // 0x8022FBE4: addiu       $s1, $s2, 0x8C
    ctx->r17 = ADD32(ctx->r18, 0X8C);
    // 0x8022FBE8: jal         0x80031600
    // 0x8022FBEC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_25;
    // 0x8022FBEC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_25:
    // 0x8022FBF0: lb          $v0, 0xD($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XD);
    // 0x8022FBF4: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x8022FBF8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022FBFC: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022FC00: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x8022FC04: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8022FC08: lb          $v0, 0xD($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XD);
    // 0x8022FC0C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022FC10: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022FC14: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x8022FC18: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8022FC1C: lb          $v0, 0xD($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XD);
    // 0x8022FC20: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022FC24: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022FC28: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x8022FC2C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022FC30: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8022FC34: jal         0x80031DA8
    // 0x8022FC38: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_26;
    // 0x8022FC38: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_26:
    // 0x8022FC3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FC40: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022FC44: jal         0x8009A3B4
    // 0x8022FC48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_27;
    // 0x8022FC48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_27:
    // 0x8022FC4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FC50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FC54: lb          $v1, 0xD($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XD);
    // 0x8022FC58: lbu         $t0, 0x1($s2)
    ctx->r8 = MEM_BU(ctx->r18, 0X1);
    // 0x8022FC5C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022FC60: addiu       $v0, $s2, 0xC0
    ctx->r2 = ADD32(ctx->r18, 0XC0);
    // 0x8022FC64: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022FC68: lui         $v0, 0x488
    ctx->r2 = S32(0X488 << 16);
    // 0x8022FC6C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022FC70: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022FC74: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022FC78: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022FC7C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022FC80: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022FC84: sll         $a1, $v1, 4
    ctx->r5 = S32(ctx->r3 << 4);
    // 0x8022FC88: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8022FC8C: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x8022FC90: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
    // 0x8022FC94: jal         0x80051E18
    // 0x8022FC98: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    func_80051E18_2D218(rdram, ctx);
        goto after_28;
    // 0x8022FC98: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    after_28:
    // 0x8022FC9C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022FCA0: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8022FCA4: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022FCA8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022FCAC: sw          $zero, 0xC0($a0)
    MEM_W(0XC0, ctx->r4) = 0;
    // 0x8022FCB0: sll         $a1, $v0, 2
    ctx->r5 = S32(ctx->r2 << 2);
    // 0x8022FCB4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8022FCB8: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8022FCBC: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8022FCC0: jal         0x8003B564
    // 0x8022FCC4: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
    func_8003B564_16964(rdram, ctx);
        goto after_29;
    // 0x8022FCC4: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
    after_29:
L_8022FCC8:
    // 0x8022FCC8: lw          $ra, 0x60($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X60);
    // 0x8022FCCC: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x8022FCD0: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8022FCD4: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x8022FCD8: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8022FCDC: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8022FCE0: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8022FCE4: jr          $ra
    // 0x8022FCE8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x8022FCE8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_8022CDE0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CDE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CDE4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022CDE8: jal         0x8004F418
    // 0x8022CDEC: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022CDEC: nop

    after_0:
    // 0x8022CDF0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022CDF4: jr          $ra
    // 0x8022CDF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CDF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229618_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229618: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022961C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229620: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229624: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229628: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022962C: bgez        $v0, L_80229660
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229630: nop
    
            goto L_80229660;
    }
    // 0x80229630: nop

    // 0x80229634: jal         0x80229D48
    // 0x80229638: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80229D48_ovl12(rdram, ctx);
        goto after_0;
    // 0x80229638: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022963C: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80229640: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x80229644: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x80229648: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022964C: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80229650: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x80229654: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80229658: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x8022965C: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_80229660:
    // 0x80229660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229664: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229668: jr          $ra
    // 0x8022966C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022966C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FFD0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FFD0: jr          $ra
    // 0x8022FFD4: nop

    TRACE_RETURN()
    return;
    // 0x8022FFD4: nop

    // 0x8022FFD8: nop

    // 0x8022FFDC: nop

;}
RECOMP_FUNC void func_802318E0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802318E0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802318E4: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x802318E8: bne         $v0, $a0, L_802318FC
    if (ctx->r2 != ctx->r4) {
        // 0x802318EC: nop
    
            goto L_802318FC;
    }
    // 0x802318EC: nop

    // 0x802318F0: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802318F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802318F8: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_802318FC:
    // 0x802318FC: lw          $v0, 0x4C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X4C);
    // 0x80231900: bgez        $v0, L_8023190C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80231904: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023190C;
    }
    // 0x80231904: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80231908: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_8023190C:
    // 0x8023190C: jr          $ra
    // 0x80231910: nop

    TRACE_RETURN()
    return;
    // 0x80231910: nop

;}
RECOMP_FUNC void func_802316D8_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802316D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802316DC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802316E0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x802316E4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802316E8: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x802316EC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802316F0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x802316F4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802316F8: addiu       $s4, $zero, 0x10
    ctx->r20 = ADD32(0, 0X10);
    // 0x802316FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80231700: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_80231704:
    // 0x80231704: jal         0x8004EEAC
    // 0x80231708: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x80231708: nop

    after_0:
    // 0x8023170C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80231710: beq         $s0, $zero, L_80231768
    if (ctx->r16 == 0) {
        // 0x80231714: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80231768;
    }
    // 0x80231714: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80231718: addiu       $a1, $s3, 0x38
    ctx->r5 = ADD32(ctx->r19, 0X38);
    // 0x8023171C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80231720: sb          $s2, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r18;
    // 0x80231724: sb          $s4, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r20;
    // 0x80231728: jal         0x8009A3B4
    // 0x8023172C: sb          $s2, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r18;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023172C: sb          $s2, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r18;
    after_1:
    // 0x80231730: lh          $a0, 0x14($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X14);
    // 0x80231734: lh          $a1, 0x16($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16);
    // 0x80231738: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x8023173C: andi        $v1, $s1, 0xFF
    ctx->r3 = ctx->r17 & 0XFF;
    // 0x80231740: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80231744: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231748: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x8023174C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80231750: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80231754: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x80231758: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8023175C: sw          $a0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r4;
    // 0x80231760: sw          $a1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r5;
    // 0x80231764: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
L_80231768:
    // 0x80231768: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8023176C: andi        $v0, $s1, 0xFF
    ctx->r2 = ctx->r17 & 0XFF;
    // 0x80231770: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x80231774: bne         $v0, $zero, L_80231704
    if (ctx->r2 != 0) {
        // 0x80231778: nop
    
            goto L_80231704;
    }
    // 0x80231778: nop

    // 0x8023177C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80231780: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80231784: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80231788: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023178C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231790: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231794: jr          $ra
    // 0x80231798: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80231798: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8023179C: nop

;}
RECOMP_FUNC void func_80229CB0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229CB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229CB4: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x80229CB8: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80229CBC: beq         $a0, $v0, L_80229D24
    if (ctx->r4 == ctx->r2) {
        // 0x80229CC0: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80229D24;
    }
    // 0x80229CC0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229CC4: slti        $v0, $a0, 0x2B
    ctx->r2 = SIGNED(ctx->r4) < 0X2B ? 1 : 0;
    // 0x80229CC8: beql        $v0, $zero, L_80229CE8
    if (ctx->r2 == 0) {
        // 0x80229CCC: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_80229CE8;
    }
    goto skip_0;
    // 0x80229CCC: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    skip_0:
    // 0x80229CD0: beq         $a0, $zero, L_80229D1C
    if (ctx->r4 == 0) {
        // 0x80229CD4: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_80229D1C;
    }
    // 0x80229CD4: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80229CD8: beq         $a0, $v0, L_80229D3C
    if (ctx->r4 == ctx->r2) {
        // 0x80229CDC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229D3C;
    }
    // 0x80229CDC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229CE0: j           L_80229D3C
    // 0x80229CE4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80229D3C;
    // 0x80229CE4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80229CE8:
    // 0x80229CE8: beq         $a0, $v0, L_80229D1C
    if (ctx->r4 == ctx->r2) {
        // 0x80229CEC: slti        $v0, $a0, 0x51
        ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
            goto L_80229D1C;
    }
    // 0x80229CEC: slti        $v0, $a0, 0x51
    ctx->r2 = SIGNED(ctx->r4) < 0X51 ? 1 : 0;
    // 0x80229CF0: beq         $v0, $zero, L_80229D08
    if (ctx->r2 == 0) {
        // 0x80229CF4: addiu       $v0, $zero, 0x39
        ctx->r2 = ADD32(0, 0X39);
            goto L_80229D08;
    }
    // 0x80229CF4: addiu       $v0, $zero, 0x39
    ctx->r2 = ADD32(0, 0X39);
    // 0x80229CF8: beq         $a0, $v0, L_80229D3C
    if (ctx->r4 == ctx->r2) {
        // 0x80229CFC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80229D3C;
    }
    // 0x80229CFC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80229D00: j           L_80229D3C
    // 0x80229D04: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80229D3C;
    // 0x80229D04: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80229D08:
    // 0x80229D08: addiu       $v0, $zero, 0x53
    ctx->r2 = ADD32(0, 0X53);
    // 0x80229D0C: beq         $a0, $v0, L_80229D2C
    if (ctx->r4 == ctx->r2) {
        // 0x80229D10: nop
    
            goto L_80229D2C;
    }
    // 0x80229D10: nop

    // 0x80229D14: j           L_80229D3C
    // 0x80229D18: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80229D3C;
    // 0x80229D18: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80229D1C:
    // 0x80229D1C: j           L_80229D3C
    // 0x80229D20: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80229D3C;
    // 0x80229D20: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80229D24:
    // 0x80229D24: j           L_80229D3C
    // 0x80229D28: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_80229D3C;
    // 0x80229D28: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_80229D2C:
    // 0x80229D2C: jal         0x800A3450
    // 0x80229D30: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80229D30: nop

    after_0:
    // 0x80229D34: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80229D38: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
L_80229D3C:
    // 0x80229D3C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229D40: jr          $ra
    // 0x80229D44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229D44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229064_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229064: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229068: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022906C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229070: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229074: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229078: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022907C: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80229080: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x80229084: jal         0x8004FA7C
    // 0x80229088: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80229088: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022908C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80229090: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80229094: beq         $v0, $zero, L_80229128
    if (ctx->r2 == 0) {
        // 0x80229098: nop
    
            goto L_80229128;
    }
    // 0x80229098: nop

    // 0x8022909C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802290A0: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x802290A4: bne         $v0, $zero, L_80229128
    if (ctx->r2 != 0) {
        // 0x802290A8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229128;
    }
    // 0x802290A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802290AC: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x802290B0: beq         $v1, $v0, L_802290C8
    if (ctx->r3 == ctx->r2) {
        // 0x802290B4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802290C8;
    }
    // 0x802290B4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802290B8: beq         $v1, $v0, L_802290F8
    if (ctx->r3 == ctx->r2) {
        // 0x802290BC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802290F8;
    }
    // 0x802290BC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802290C0: j           L_8022911C
    // 0x802290C4: nop

        goto L_8022911C;
    // 0x802290C4: nop

L_802290C8:
    // 0x802290C8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802290CC: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x802290D0: bne         $v0, $zero, L_8022911C
    if (ctx->r2 != 0) {
        // 0x802290D4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022911C;
    }
    // 0x802290D4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802290D8: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x802290DC: bne         $v0, $zero, L_8022911C
    if (ctx->r2 != 0) {
        // 0x802290E0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022911C;
    }
    // 0x802290E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802290E4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802290E8: bne         $v1, $v0, L_8022911C
    if (ctx->r3 != ctx->r2) {
        // 0x802290EC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022911C;
    }
    // 0x802290EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802290F0: j           L_8022911C
    // 0x802290F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022911C;
    // 0x802290F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802290F8:
    // 0x802290F8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802290FC: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x80229100: beq         $v0, $zero, L_80229118
    if (ctx->r2 == 0) {
        // 0x80229104: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_80229118;
    }
    // 0x80229104: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x80229108: bne         $v0, $zero, L_8022911C
    if (ctx->r2 != 0) {
        // 0x8022910C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8022911C;
    }
    // 0x8022910C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80229110: j           L_8022911C
    // 0x80229114: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022911C;
    // 0x80229114: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80229118:
    // 0x80229118: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8022911C:
    // 0x8022911C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229120: beq         $v0, $zero, L_8022914C
    if (ctx->r2 == 0) {
        // 0x80229124: nop
    
            goto L_8022914C;
    }
    // 0x80229124: nop

L_80229128:
    // 0x80229128: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022912C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229130: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229134: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229138: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022913C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80229140: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80229144: j           L_8022915C
    // 0x80229148: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022915C;
    // 0x80229148: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022914C:
    // 0x8022914C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80229150: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80229154: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80229158: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022915C:
    // 0x8022915C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229160: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229164: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229168: jr          $ra
    // 0x8022916C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022916C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802301D0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802301D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802301D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802301D8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802301DC: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x802301E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802301E4: jal         0x80230BE4
    // 0x802301E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80230BE4_ovl12(rdram, ctx);
        goto after_0;
    // 0x802301E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x802301EC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802301F0: beq         $v0, $zero, L_8023023C
    if (ctx->r2 == 0) {
        // 0x802301F4: nop
    
            goto L_8023023C;
    }
    // 0x802301F4: nop

    // 0x802301F8: jal         0x80230C30
    // 0x802301FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230C30_ovl12(rdram, ctx);
        goto after_1;
    // 0x802301FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80230200: beq         $v0, $zero, L_80230214
    if (ctx->r2 == 0) {
        // 0x80230204: nop
    
            goto L_80230214;
    }
    // 0x80230204: nop

    // 0x80230208: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023020C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230210: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80230214:
    // 0x80230214: lw          $v0, 0x4C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4C);
    // 0x80230218: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8023021C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80230220: beq         $v0, $zero, L_8023023C
    if (ctx->r2 == 0) {
        // 0x80230224: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023023C;
    }
    // 0x80230224: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80230228: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8023022C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80230230: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80230234: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80230238: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_8023023C:
    // 0x8023023C: lw          $v0, 0x4C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4C);
    // 0x80230240: bgez        $v0, L_8023026C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80230244: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023026C;
    }
    // 0x80230244: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80230248: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x8023024C: lbu         $a0, 0x8($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X8);
    // 0x80230250: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80230254: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80230258: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8023025C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80230260: ori         $v1, $v1, 0x8
    ctx->r3 = ctx->r3 | 0X8;
    // 0x80230264: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x80230268: sb          $a0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r4;
L_8023026C:
    // 0x8023026C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230270: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230274: jr          $ra
    // 0x80230278: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230278: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233854_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233854: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233858: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023385C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80233860: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80233864: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233868: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8023386C: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80233870: beq         $v0, $zero, L_80233928
    if (ctx->r2 == 0) {
        // 0x80233874: andi        $v0, $v1, 0x3
        ctx->r2 = ctx->r3 & 0X3;
            goto L_80233928;
    }
    // 0x80233874: andi        $v0, $v1, 0x3
    ctx->r2 = ctx->r3 & 0X3;
    // 0x80233878: bne         $v0, $zero, L_8023390C
    if (ctx->r2 != 0) {
        // 0x8023387C: nop
    
            goto L_8023390C;
    }
    // 0x8023387C: nop

    // 0x80233880: jal         0x8004F144
    // 0x80233884: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80233884: nop

    after_0:
    // 0x80233888: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023388C: beq         $s0, $zero, L_8023390C
    if (ctx->r16 == 0) {
        // 0x80233890: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023390C;
    }
    // 0x80233890: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233894: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80233898: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8023389C: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802338A0: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802338A4: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x802338A8: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x802338AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802338B0: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x802338B4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802338B8: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x802338BC: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x802338C0: lhu         $v0, 0x20($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X20);
    // 0x802338C4: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x802338C8: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x802338CC: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x802338D0: ori         $v1, $v1, 0x4E
    ctx->r3 = ctx->r3 | 0X4E;
    // 0x802338D4: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x802338D8: lhu         $a0, 0x1E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1E);
    // 0x802338DC: lui         $v0, 0x2E40
    ctx->r2 = S32(0X2E40 << 16);
    // 0x802338E0: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
    // 0x802338E4: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x802338E8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802338EC: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    // 0x802338F0: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x802338F4: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x802338F8: jal         0x800A3450
    // 0x802338FC: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x802338FC: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    after_1:
    // 0x80233900: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233904: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80233908: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_8023390C:
    // 0x8023390C: jal         0x800A3450
    // 0x80233910: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80233910: nop

    after_2:
    // 0x80233914: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80233918: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8023391C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233920: j           L_80233930
    // 0x80233924: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
        goto L_80233930;
    // 0x80233924: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_80233928:
    // 0x80233928: jal         0x8004F5C4
    // 0x8023392C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x8023392C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
L_80233930:
    // 0x80233930: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80233934: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233938: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023393C: jr          $ra
    // 0x80233940: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233940: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230FAC_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230FAC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80230FB0: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80230FB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230FB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230FBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230FC0: bne         $v0, $s0, L_80230FD8
    if (ctx->r2 != ctx->r16) {
        // 0x80230FC4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80230FD8;
    }
    // 0x80230FC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230FC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230FCC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80230FD0: j           L_8023103C
    // 0x80230FD4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_8023103C;
    // 0x80230FD4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80230FD8:
    // 0x80230FD8: lw          $v1, 0x4C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4C);
    // 0x80230FDC: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80230FE0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80230FE4: beq         $v0, $zero, L_80231024
    if (ctx->r2 == 0) {
        // 0x80230FE8: nop
    
            goto L_80231024;
    }
    // 0x80230FE8: nop

    // 0x80230FEC: jal         0x80231654
    // 0x80230FF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80231654_ovl12(rdram, ctx);
        goto after_0;
    // 0x80230FF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80230FF4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80230FF8: beq         $v0, $zero, L_80231008
    if (ctx->r2 == 0) {
        // 0x80230FFC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80231008;
    }
    // 0x80230FFC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80231000: j           L_8023103C
    // 0x80231004: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8023103C;
    // 0x80231004: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80231008:
    // 0x80231008: jal         0x80231384
    // 0x8023100C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80231384_ovl12(rdram, ctx);
        goto after_1;
    // 0x8023100C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80231010: addiu       $a0, $zero, 0x13D
    ctx->r4 = ADD32(0, 0X13D);
    // 0x80231014: jal         0x8002A33C
    // 0x80231018: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x80231018: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_2:
    // 0x8023101C: j           L_8023103C
    // 0x80231020: nop

        goto L_8023103C;
    // 0x80231020: nop

L_80231024:
    // 0x80231024: bgez        $v1, L_8023103C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80231028: nop
    
            goto L_8023103C;
    }
    // 0x80231028: nop

    // 0x8023102C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80231030: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80231034: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231038: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8023103C:
    // 0x8023103C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231040: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231044: jr          $ra
    // 0x80231048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802285F4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802285F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802285F8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802285FC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80228600: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80228604: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228608: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022860C: lh          $a0, 0x64($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X64);
    // 0x80228610: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x80228614: lb          $a2, 0xF($s1)
    ctx->r6 = MEM_B(ctx->r17, 0XF);
    // 0x80228618: jal         0x8004FA7C
    // 0x8022861C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022861C: addiu       $s0, $s1, 0x348
    ctx->r16 = ADD32(ctx->r17, 0X348);
    after_0:
    // 0x80228620: lh          $a1, 0x362($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X362);
    // 0x80228624: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80228628: sll         $v1, $s2, 16
    ctx->r3 = S32(ctx->r18 << 16);
    // 0x8022862C: sra         $a0, $v1, 16
    ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80228630: srl         $v1, $a0, 31
    ctx->r3 = S32(U32(ctx->r4) >> 31);
    // 0x80228634: sltiu       $v0, $a1, 0x1
    ctx->r2 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80228638: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022863C: bnel        $v0, $zero, L_8022865C
    if (ctx->r2 != 0) {
        // 0x80228640: negu        $s2, $s2
        ctx->r18 = SUB32(0, ctx->r18);
            goto L_8022865C;
    }
    goto skip_0;
    // 0x80228640: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
    skip_0:
    // 0x80228644: sltu        $v0, $zero, $a1
    ctx->r2 = 0 < ctx->r5 ? 1 : 0;
    // 0x80228648: slt         $v1, $zero, $a0
    ctx->r3 = SIGNED(0) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022864C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228650: beq         $v0, $zero, L_80228660
    if (ctx->r2 == 0) {
        // 0x80228654: sll         $v0, $s2, 16
        ctx->r2 = S32(ctx->r18 << 16);
            goto L_80228660;
    }
    // 0x80228654: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80228658: negu        $s2, $s2
    ctx->r18 = SUB32(0, ctx->r18);
L_8022865C:
    // 0x8022865C: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
L_80228660:
    // 0x80228660: bne         $v0, $zero, L_80228690
    if (ctx->r2 != 0) {
        // 0x80228664: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228690;
    }
    // 0x80228664: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228668: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x8022866C: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x80228670: lhu         $a1, 0x16($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X16);
    // 0x80228674: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x80228678: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8022867C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80228680: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228684: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x80228688: j           L_802286E8
    // 0x8022868C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
        goto L_802286E8;
    // 0x8022868C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
L_80228690:
    // 0x80228690: lhu         $v0, 0x8($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X8);
    // 0x80228694: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228698: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022869C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802286A0: beq         $v0, $zero, L_802286E4
    if (ctx->r2 == 0) {
        // 0x802286A4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802286E4;
    }
    // 0x802286A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802286A8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802286AC: jal         0x80229DE4
    // 0x802286B0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80229DE4_ovl12(rdram, ctx);
        goto after_1;
    // 0x802286B0: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x802286B4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802286B8: beq         $v0, $zero, L_802286F0
    if (ctx->r2 == 0) {
        // 0x802286BC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802286F0;
    }
    // 0x802286BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802286C0: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x802286C4: jal         0x80229D48
    // 0x802286C8: nop

    func_80229D48_ovl12(rdram, ctx);
        goto after_2;
    // 0x802286C8: nop

    after_2:
    // 0x802286CC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x802286D0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802286D4: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x802286D8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802286DC: j           L_80228710
    // 0x802286E0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_80228710;
    // 0x802286E0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802286E4:
    // 0x802286E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802286E8:
    // 0x802286E8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x802286EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_802286F0:
    // 0x802286F0: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x802286F4: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x802286F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802286FC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80228700: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80228704: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228708: jal         0x8004DA90
    // 0x8022870C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022870C: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    after_3:
L_80228710:
    // 0x80228710: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80228714: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228718: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022871C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228720: jr          $ra
    // 0x80228724: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228724: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022BC1C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BC1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BC20: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BC24: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022BC28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022BC2C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BC30: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BC34: beq         $v1, $v0, L_8022BC7C
    if (ctx->r3 == ctx->r2) {
        // 0x8022BC38: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022BC7C;
    }
    // 0x8022BC38: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022BC3C: beql        $v0, $zero, L_8022BC54
    if (ctx->r2 == 0) {
        // 0x8022BC40: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022BC54;
    }
    goto skip_0;
    // 0x8022BC40: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022BC44: beq         $v1, $zero, L_8022BC64
    if (ctx->r3 == 0) {
        // 0x8022BC48: nop
    
            goto L_8022BC64;
    }
    // 0x8022BC48: nop

    // 0x8022BC4C: j           L_8022BCB8
    // 0x8022BC50: nop

        goto L_8022BCB8;
    // 0x8022BC50: nop

L_8022BC54:
    // 0x8022BC54: beq         $v1, $v0, L_8022BCA8
    if (ctx->r3 == ctx->r2) {
        // 0x8022BC58: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BCA8;
    }
    // 0x8022BC58: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BC5C: j           L_8022BCB8
    // 0x8022BC60: nop

        goto L_8022BCB8;
    // 0x8022BC60: nop

L_8022BC64:
    // 0x8022BC64: jal         0x8022BCC8
    // 0x8022BC68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022BCC8_ovl12(rdram, ctx);
        goto after_0;
    // 0x8022BC68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022BC6C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BC70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BC74: j           L_8022BCB8
    // 0x8022BC78: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022BCB8;
    // 0x8022BC78: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022BC7C:
    // 0x8022BC7C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022BC80: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022BC84: bne         $v0, $zero, L_8022BCA8
    if (ctx->r2 != 0) {
        // 0x8022BC88: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022BCA8;
    }
    // 0x8022BC88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BC8C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022BC90: jal         0x800616FC
    // 0x8022BC94: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x8022BC94: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8022BC98: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BC9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BCA0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022BCA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022BCA8:
    // 0x8022BCA8: addiu       $a1, $zero, 0x90
    ctx->r5 = ADD32(0, 0X90);
    // 0x8022BCAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BCB0: jal         0x8004DA90
    // 0x8022BCB4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022BCB4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
L_8022BCB8:
    // 0x8022BCB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022BCBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BCC0: jr          $ra
    // 0x8022BCC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BCC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802349C0_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802349C0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x802349C4: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x802349C8: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x802349CC: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x802349D0: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x802349D4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802349D8: addiu       $s3, $sp, 0x18
    ctx->r19 = ADD32(ctx->r29, 0X18);
    // 0x802349DC: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x802349E0: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802349E4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802349E8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802349EC: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
L_802349F0:
    // 0x802349F0: sra         $s2, $v0, 16
    ctx->r18 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802349F4: addu        $s0, $s5, $s2
    ctx->r16 = ADD32(ctx->r21, ctx->r18);
    // 0x802349F8: lbu         $v0, 0x16($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X16);
    // 0x802349FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80234A00: sb          $v0, 0x16($s0)
    MEM_B(0X16, ctx->r16) = ctx->r2;
    // 0x80234A04: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80234A08: bne         $v0, $zero, L_80234B84
    if (ctx->r2 != 0) {
        // 0x80234A0C: addiu       $v0, $s4, 0x1
        ctx->r2 = ADD32(ctx->r20, 0X1);
            goto L_80234B84;
    }
    // 0x80234A0C: addiu       $v0, $s4, 0x1
    ctx->r2 = ADD32(ctx->r20, 0X1);
    // 0x80234A10: lbu         $v1, 0x14($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X14);
    // 0x80234A14: sll         $v0, $s2, 3
    ctx->r2 = S32(ctx->r18 << 3);
    // 0x80234A18: subu        $v0, $v0, $s2
    ctx->r2 = SUB32(ctx->r2, ctx->r18);
    // 0x80234A1C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234A20: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80234A24: sll         $s1, $v0, 1
    ctx->r17 = S32(ctx->r2 << 1);
    // 0x80234A28: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80234A2C: sb          $v1, 0x14($s0)
    MEM_B(0X14, ctx->r16) = ctx->r3;
    // 0x80234A30: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x80234A34: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80234A38: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x80234A3C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80234A40: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80234A44: lbu         $v1, 0x72D0($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X72D0);
    // 0x80234A48: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80234A4C: beql        $v1, $v0, L_80234A54
    if (ctx->r3 == ctx->r2) {
        // 0x80234A50: sb          $zero, 0x14($s0)
        MEM_B(0X14, ctx->r16) = 0;
            goto L_80234A54;
    }
    goto skip_0;
    // 0x80234A50: sb          $zero, 0x14($s0)
    MEM_B(0X14, ctx->r16) = 0;
    skip_0:
L_80234A54:
    // 0x80234A54: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x80234A58: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80234A5C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80234A60: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80234A64: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234A68: lbu         $v0, 0x72D1($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X72D1);
    // 0x80234A6C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80234A70: sb          $v0, 0x16($s0)
    MEM_B(0X16, ctx->r16) = ctx->r2;
    // 0x80234A74: lw          $a1, 0x1C($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X1C);
    // 0x80234A78: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80234A7C: jal         0x8003BA58
    // 0x80234A80: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003BA58_16E58(rdram, ctx);
        goto after_0;
    // 0x80234A80: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80234A84: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80234A88: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80234A8C: addu        $a2, $s2, $zero
    ctx->r6 = ADD32(ctx->r18, 0);
    // 0x80234A90: jal         0x8003BB80
    // 0x80234A94: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_8003BB80_16F80(rdram, ctx);
        goto after_1;
    // 0x80234A94: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_1:
    // 0x80234A98: lbu         $v0, 0x14($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X14);
    // 0x80234A9C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80234AA0: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80234AA4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80234AA8: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80234AAC: lbu         $a0, 0x72D0($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X72D0);
    // 0x80234AB0: sll         $a2, $s2, 2
    ctx->r6 = S32(ctx->r18 << 2);
    // 0x80234AB4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80234AB8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80234ABC: lbu         $v0, 0x7344($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7344);
    // 0x80234AC0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80234AC4: srl         $v1, $a0, 10
    ctx->r3 = S32(U32(ctx->r4) >> 10);
    // 0x80234AC8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234ACC: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    // 0x80234AD0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80234AD4: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80234AD8: lbu         $v0, 0x7345($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7345);
    // 0x80234ADC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234AE0: sb          $v0, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r2;
    // 0x80234AE4: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80234AE8: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80234AEC: lbu         $v0, 0x7346($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7346);
    // 0x80234AF0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234AF4: sb          $v0, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r2;
    // 0x80234AF8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80234AFC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80234B00: lbu         $v0, 0x7347($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7347);
    // 0x80234B04: srl         $a0, $a0, 18
    ctx->r4 = S32(U32(ctx->r4) >> 18);
    // 0x80234B08: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234B0C: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x80234B10: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    // 0x80234B14: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80234B18: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80234B1C: lbu         $v0, 0x734C($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X734C);
    // 0x80234B20: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80234B24: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80234B28: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234B2C: sb          $v0, 0x11($sp)
    MEM_B(0X11, ctx->r29) = ctx->r2;
    // 0x80234B30: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80234B34: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80234B38: lbu         $v0, 0x734D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X734D);
    // 0x80234B3C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234B40: sb          $v0, 0x13($sp)
    MEM_B(0X13, ctx->r29) = ctx->r2;
    // 0x80234B44: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80234B48: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80234B4C: lbu         $v0, 0x734E($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X734E);
    // 0x80234B50: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80234B54: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    // 0x80234B58: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234B5C: sb          $v0, 0x15($sp)
    MEM_B(0X15, ctx->r29) = ctx->r2;
    // 0x80234B60: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80234B64: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80234B68: lbu         $v0, 0x734F($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X734F);
    // 0x80234B6C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80234B70: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x80234B74: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234B78: jal         0x8003BC68
    // 0x80234B7C: sb          $v0, 0x17($sp)
    MEM_B(0X17, ctx->r29) = ctx->r2;
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x80234B7C: sb          $v0, 0x17($sp)
    MEM_B(0X17, ctx->r29) = ctx->r2;
    after_2:
    // 0x80234B80: addiu       $v0, $s4, 0x1
    ctx->r2 = ADD32(ctx->r20, 0X1);
L_80234B84:
    // 0x80234B84: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x80234B88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234B8C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80234B90: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80234B94: bne         $v0, $zero, L_802349F0
    if (ctx->r2 != 0) {
        // 0x80234B98: sll         $v0, $s4, 16
        ctx->r2 = S32(ctx->r20 << 16);
            goto L_802349F0;
    }
    // 0x80234B98: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    // 0x80234B9C: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x80234BA0: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80234BA4: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80234BA8: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80234BAC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80234BB0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80234BB4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80234BB8: jr          $ra
    // 0x80234BBC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80234BBC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_802260C4_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802260C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802260C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802260CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802260D0: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x802260D4: bne         $v0, $zero, L_8022613C
    if (ctx->r2 != 0) {
        // 0x802260D8: nop
    
            goto L_8022613C;
    }
    // 0x802260D8: nop

    // 0x802260DC: jal         0x8006033C
    // 0x802260E0: addiu       $a0, $zero, 0x233
    ctx->r4 = ADD32(0, 0X233);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802260E0: addiu       $a0, $zero, 0x233
    ctx->r4 = ADD32(0, 0X233);
    after_0:
    // 0x802260E4: beq         $v0, $zero, L_8022613C
    if (ctx->r2 == 0) {
        // 0x802260E8: nop
    
            goto L_8022613C;
    }
    // 0x802260E8: nop

    // 0x802260EC: jal         0x8006033C
    // 0x802260F0: addiu       $a0, $zero, 0x234
    ctx->r4 = ADD32(0, 0X234);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802260F0: addiu       $a0, $zero, 0x234
    ctx->r4 = ADD32(0, 0X234);
    after_1:
    // 0x802260F4: bne         $v0, $zero, L_80226118
    if (ctx->r2 != 0) {
        // 0x802260F8: nop
    
            goto L_80226118;
    }
    // 0x802260F8: nop

    // 0x802260FC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80226100: jal         0x8005FB30
    // 0x80226104: addiu       $a0, $a0, 0x5C8C
    ctx->r4 = ADD32(ctx->r4, 0X5C8C);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_2;
    // 0x80226104: addiu       $a0, $a0, 0x5C8C
    ctx->r4 = ADD32(ctx->r4, 0X5C8C);
    after_2:
    // 0x80226108: jal         0x80060D38
    // 0x8022610C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    func_80060D38_3C138(rdram, ctx);
        goto after_3;
    // 0x8022610C: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    after_3:
    // 0x80226110: j           L_80226124
    // 0x80226114: nop

        goto L_80226124;
    // 0x80226114: nop

L_80226118:
    // 0x80226118: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022611C: jal         0x8005FB30
    // 0x80226120: addiu       $a0, $a0, 0x5CA0
    ctx->r4 = ADD32(ctx->r4, 0X5CA0);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_4;
    // 0x80226120: addiu       $a0, $a0, 0x5CA0
    ctx->r4 = ADD32(ctx->r4, 0X5CA0);
    after_4:
L_80226124:
    // 0x80226124: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80226128: addiu       $s0, $s0, 0x5CB4
    ctx->r16 = ADD32(ctx->r16, 0X5CB4);
    // 0x8022612C: jal         0x8005FB30
    // 0x80226130: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_5;
    // 0x80226130: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80226134: jal         0x8005FB30
    // 0x80226138: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_6;
    // 0x80226138: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_6:
L_8022613C:
    // 0x8022613C: jal         0x8006036C
    // 0x80226140: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x80226140: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_7:
    // 0x80226144: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80226148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022614C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226150: jr          $ra
    // 0x80226154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229878_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229878: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022987C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229880: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229884: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229888: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022988C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80229890: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80229894: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80229898: jal         0x8004F820
    // 0x8022989C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022989C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x802298A0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802298A4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802298A8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802298AC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802298B0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802298B4: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x802298B8: bne         $v0, $zero, L_802298F0
    if (ctx->r2 != 0) {
        // 0x802298BC: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_802298F0;
    }
    // 0x802298BC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802298C0: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x802298C4: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x802298C8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802298CC: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x802298D0: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x802298D4: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x802298D8: jal         0x80229D48
    // 0x802298DC: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    func_80229D48_ovl12(rdram, ctx);
        goto after_1;
    // 0x802298DC: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    after_1:
    // 0x802298E0: jal         0x80034E3C
    // 0x802298E4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80034E3C_1023C(rdram, ctx);
        goto after_2;
    // 0x802298E4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x802298E8: j           L_8022990C
    // 0x802298EC: nop

        goto L_8022990C;
    // 0x802298EC: nop

L_802298F0:
    // 0x802298F0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802298F4: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x802298F8: bne         $v1, $v0, L_8022990C
    if (ctx->r3 != ctx->r2) {
        // 0x802298FC: nop
    
            goto L_8022990C;
    }
    // 0x802298FC: nop

    // 0x80229900: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80229904: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229908: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022990C:
    // 0x8022990C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229910: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229914: jr          $ra
    // 0x80229918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F600_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F600: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8022F604: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8022F608: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F60C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022F610: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x8022F614: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x8022F618: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x8022F61C: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8022F620: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F624: addiu       $s3, $s0, 0x14
    ctx->r19 = ADD32(ctx->r16, 0X14);
    // 0x8022F628: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022F62C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022F630: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022F634: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022F638: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x8022F63C: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x8022F640: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022F644: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8022F648: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8022F64C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022F650: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x8022F654: jal         0x8009A3B4
    // 0x8022F658: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022F658: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022F65C: lui         $t2, 0x80
    ctx->r10 = S32(0X80 << 16);
    // 0x8022F660: ori         $t2, $t2, 0x8080
    ctx->r10 = ctx->r10 | 0X8080;
    // 0x8022F664: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8022F668: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8022F66C: lh          $a3, 0x18($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18);
    // 0x8022F670: lh          $t0, 0x16($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X16);
    // 0x8022F674: lb          $t1, 0xD($s0)
    ctx->r9 = MEM_B(ctx->r16, 0XD);
    // 0x8022F678: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x8022F67C: addiu       $a1, $a1, 0x7510
    ctx->r5 = ADD32(ctx->r5, 0X7510);
    // 0x8022F680: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8022F684: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022F688: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022F68C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x8022F690: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x8022F694: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x8022F698: sw          $t2, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r10;
    // 0x8022F69C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022F6A0: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022F6A4: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x8022F6A8: sll         $v0, $t1, 1
    ctx->r2 = S32(ctx->r9 << 1);
    // 0x8022F6AC: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x8022F6B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F6B4: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
    // 0x8022F6B8: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x8022F6BC: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022F6C0: addiu       $v1, $v1, 0x6B60
    ctx->r3 = ADD32(ctx->r3, 0X6B60);
    // 0x8022F6C4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F6C8: sw          $a3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r7;
    // 0x8022F6CC: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    // 0x8022F6D0: sw          $t0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r8;
    // 0x8022F6D4: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
    // 0x8022F6D8: jal         0x8009A3B4
    // 0x8022F6DC: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022F6DC: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022F6E0: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8022F6E4: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022F6E8: jal         0x8009A3B4
    // 0x8022F6EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022F6EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022F6F0: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x8022F6F4: addiu       $s2, $s0, 0x8C
    ctx->r18 = ADD32(ctx->r16, 0X8C);
    // 0x8022F6F8: jal         0x80031600
    // 0x8022F6FC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_3;
    // 0x8022F6FC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8022F700: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022F704: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x8022F708: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022F70C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022F710: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x8022F714: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x8022F718: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022F71C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022F720: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022F724: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x8022F728: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8022F72C: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022F730: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022F734: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022F738: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x8022F73C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022F740: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8022F744: jal         0x80031DA8
    // 0x8022F748: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_4;
    // 0x8022F748: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_4:
    // 0x8022F74C: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022F750: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F754: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022F758: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F75C: jal         0x8004D5D4
    // 0x8022F760: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_5;
    // 0x8022F760: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_5:
    // 0x8022F764: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F768: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022F76C: jal         0x8009A3B4
    // 0x8022F770: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022F770: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022F774: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F778: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x8022F77C: lbu         $a3, 0x1($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X1);
    // 0x8022F780: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F784: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x8022F788: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022F78C: lui         $v0, 0x488
    ctx->r2 = S32(0X488 << 16);
    // 0x8022F790: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022F794: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022F798: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022F79C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022F7A0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022F7A4: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022F7A8: sll         $a1, $v1, 4
    ctx->r5 = S32(ctx->r3 << 4);
    // 0x8022F7AC: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8022F7B0: sll         $a1, $a1, 1
    ctx->r5 = S32(ctx->r5 << 1);
    // 0x8022F7B4: subu        $a1, $v0, $a1
    ctx->r5 = SUB32(ctx->r2, ctx->r5);
    // 0x8022F7B8: sw          $a3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r7;
    // 0x8022F7BC: jal         0x80051E18
    // 0x8022F7C0: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    func_80051E18_2D218(rdram, ctx);
        goto after_7;
    // 0x8022F7C0: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    after_7:
    // 0x8022F7C4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F7C8: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x8022F7CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F7D0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022F7D4: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x8022F7D8: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8022F7DC: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8022F7E0: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8022F7E4: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8022F7E8: jr          $ra
    // 0x8022F7EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8022F7EC: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8022A96C_ovl12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A96C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A970: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A974: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A978: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A97C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A980: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A984: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022A988: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x8022A98C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A990: jal         0x8004D5D4
    // 0x8022A994: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022A994: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022A998: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022A99C: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x8022A9A0: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x8022A9A4: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022A9A8: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022A9AC: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022A9B0: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8022A9B4: jal         0x800A3450
    // 0x8022A9B8: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022A9B8: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    after_1:
    // 0x8022A9BC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022A9C0: beq         $v0, $zero, L_8022A9E0
    if (ctx->r2 == 0) {
        // 0x8022A9C4: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022A9E0;
    }
    // 0x8022A9C4: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022A9C8: addiu       $v0, $zero, 0x2BC
    ctx->r2 = ADD32(0, 0X2BC);
    // 0x8022A9CC: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022A9D0: addiu       $v0, $zero, -0x1E
    ctx->r2 = ADD32(0, -0X1E);
    // 0x8022A9D4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022A9D8: j           L_8022A9F4
    // 0x8022A9DC: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
        goto L_8022A9F4;
    // 0x8022A9DC: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
L_8022A9E0:
    // 0x8022A9E0: addiu       $v0, $zero, -0x2BC
    ctx->r2 = ADD32(0, -0X2BC);
    // 0x8022A9E4: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022A9E8: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022A9EC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022A9F0: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
L_8022A9F4:
    // 0x8022A9F4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022A9F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A9FC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022AA00: addiu       $v0, $zero, 0x258
    ctx->r2 = ADD32(0, 0X258);
    // 0x8022AA04: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022AA08: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022AA0C: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8022AA10: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022AA14: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AA18: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022AA1C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022AA20: sw          $v0, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r2;
    // 0x8022AA24: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022AA28: sw          $v1, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r3;
    // 0x8022AA2C: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x8022AA30: sw          $a0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r4;
    // 0x8022AA34: sw          $a0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r4;
    // 0x8022AA38: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x8022AA3C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022AA40: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022AA44: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
    // 0x8022AA48: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x8022AA4C: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8022AA50: lh          $a3, 0x18($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18);
    // 0x8022AA54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022AA58: addiu       $v0, $zero, -0x64
    ctx->r2 = ADD32(0, -0X64);
    // 0x8022AA5C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022AA60: lh          $t0, 0x16($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X16);
    // 0x8022AA64: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022AA68: addiu       $v0, $zero, 0x500
    ctx->r2 = ADD32(0, 0X500);
    // 0x8022AA6C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022AA70: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022AA74: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022AA78: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022AA7C: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022AA80: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x8022AA84: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
    // 0x8022AA88: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x8022AA8C: sw          $a3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r7;
    // 0x8022AA90: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    // 0x8022AA94: sw          $t0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r8;
    // 0x8022AA98: jal         0x8009A3B4
    // 0x8022AA9C: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022AA9C: sw          $t0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r8;
    after_2:
    // 0x8022AAA0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022AAA4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022AAA8: jal         0x8009A3B4
    // 0x8022AAAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022AAAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022AAB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AAB4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AAB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AABC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022AAC0: jal         0x80050294
    // 0x8022AAC4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022AAC4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_4:
    // 0x8022AAC8: jal         0x8004F2C4
    // 0x8022AACC: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_5;
    // 0x8022AACC: nop

    after_5:
    // 0x8022AAD0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022AAD4: beq         $v1, $zero, L_8022AAF0
    if (ctx->r3 == 0) {
        // 0x8022AAD8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022AAF0;
    }
    // 0x8022AAD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AADC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022AAE0: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x8022AAE4: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022AAE8: sw          $s0, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r16;
    // 0x8022AAEC: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
L_8022AAF0:
    // 0x8022AAF0: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
    // 0x8022AAF4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022AAF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AAFC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022AB00: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022AB04: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AB08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AB0C: jr          $ra
    // 0x8022AB10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AB10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
