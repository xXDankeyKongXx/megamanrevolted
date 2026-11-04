#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022C9BC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C9BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C9C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C9C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C9C8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022C9CC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C9D0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022C9D4: beq         $v1, $zero, L_8022C9F0
    if (ctx->r3 == 0) {
        // 0x8022C9D8: addiu       $a0, $s0, 0x348
        ctx->r4 = ADD32(ctx->r16, 0X348);
            goto L_8022C9F0;
    }
    // 0x8022C9D8: addiu       $a0, $s0, 0x348
    ctx->r4 = ADD32(ctx->r16, 0X348);
    // 0x8022C9DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C9E0: beq         $v1, $v0, L_8022CA08
    if (ctx->r3 == ctx->r2) {
        // 0x8022C9E4: nop
    
            goto L_8022CA08;
    }
    // 0x8022C9E4: nop

    // 0x8022C9E8: j           L_8022CAC4
    // 0x8022C9EC: nop

        goto L_8022CAC4;
    // 0x8022C9EC: nop

L_8022C9F0:
    // 0x8022C9F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C9F4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C9F8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022C9FC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CA00: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022CA04: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
L_8022CA08:
    // 0x8022CA08: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8022CA0C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CA10: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x8022CA14: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CA18: bgezl       $v0, L_8022CA30
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022CA1C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CA30;
    }
    goto skip_0;
    // 0x8022CA1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x8022CA20: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8022CA24: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022CA28: j           L_8022CAC4
    // 0x8022CA2C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
        goto L_8022CAC4;
    // 0x8022CA2C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_8022CA30:
    // 0x8022CA30: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8022CA34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CA38: jal         0x8004DA90
    // 0x8022CA3C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022CA3C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022CA40: jal         0x80040F30
    // 0x8022CA44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022CA44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022CA48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CA4C: jal         0x8003E934
    // 0x8022CA50: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022CA50: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_2:
    // 0x8022CA54: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022CA58: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022CA5C: lh          $a0, 0x2E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2E);
    // 0x8022CA60: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CA64: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022CA68: slti        $v1, $v1, 0x11
    ctx->r3 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x8022CA6C: bne         $v1, $zero, L_8022CAA8
    if (ctx->r3 != 0) {
        // 0x8022CA70: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022CAA8;
    }
    // 0x8022CA70: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022CA74: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022CA78: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022CA7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022CA80: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022CA84: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022CA88: jal         0x8009A3B4
    // 0x8022CA8C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022CA8C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_3:
    // 0x8022CA90: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022CA94: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022CA98: jal         0x8009A3B4
    // 0x8022CA9C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022CA9C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8022CAA0: j           L_8022CAC4
    // 0x8022CAA4: nop

        goto L_8022CAC4;
    // 0x8022CAA4: nop

L_8022CAA8:
    // 0x8022CAA8: andi        $v0, $s1, 0xF00
    ctx->r2 = ctx->r17 & 0XF00;
    // 0x8022CAAC: beq         $v0, $zero, L_8022CAC4
    if (ctx->r2 == 0) {
        // 0x8022CAB0: nop
    
            goto L_8022CAC4;
    }
    // 0x8022CAB0: nop

    // 0x8022CAB4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CAB8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022CABC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CAC0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022CAC4:
    // 0x8022CAC4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022CAC8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CACC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CAD0: jr          $ra
    // 0x8022CAD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CAD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8024C894_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024C894: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024C898: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024C89C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024C8A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024C8A4: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x8024C8A8: beq         $v1, $zero, L_8024C8C0
    if (ctx->r3 == 0) {
        // 0x8024C8AC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8024C8C0;
    }
    // 0x8024C8AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024C8B0: beq         $v1, $v0, L_8024C8EC
    if (ctx->r3 == ctx->r2) {
        // 0x8024C8B4: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8024C8EC;
    }
    // 0x8024C8B4: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8024C8B8: j           L_8024C934
    // 0x8024C8BC: nop

        goto L_8024C934;
    // 0x8024C8BC: nop

L_8024C8C0:
    // 0x8024C8C0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8024C8C4: jal         0x8006FF84
    // 0x8024C8C8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8024C8C8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x8024C8CC: beq         $v0, $zero, L_8024C934
    if (ctx->r2 == 0) {
        // 0x8024C8D0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8024C934;
    }
    // 0x8024C8D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8024C8D4: jal         0x800616FC
    // 0x8024C8D8: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x8024C8D8: addiu       $a1, $zero, 0x34
    ctx->r5 = ADD32(0, 0X34);
    after_1:
    // 0x8024C8DC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8024C8E0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024C8E4: j           L_8024C934
    // 0x8024C8E8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8024C934;
    // 0x8024C8E8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8024C8EC:
    // 0x8024C8EC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8024C8F0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8024C8F4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8024C8F8: bne         $v0, $zero, L_8024C934
    if (ctx->r2 != 0) {
        // 0x8024C8FC: nop
    
            goto L_8024C934;
    }
    // 0x8024C8FC: nop

    // 0x8024C900: jal         0x8002A398
    // 0x8024C904: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8002A398_5798(rdram, ctx);
        goto after_2;
    // 0x8024C904: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_2:
    // 0x8024C908: bne         $v0, $zero, L_8024C934
    if (ctx->r2 != 0) {
        // 0x8024C90C: addiu       $a0, $zero, 0x19
        ctx->r4 = ADD32(0, 0X19);
            goto L_8024C934;
    }
    // 0x8024C90C: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    // 0x8024C910: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8024C914: jal         0x8002A2F8
    // 0x8024C918: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_3;
    // 0x8024C918: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8024C91C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8024C920: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8024C924: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8024C928: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8024C92C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8024C930: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
L_8024C934:
    // 0x8024C934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024C938: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024C93C: jr          $ra
    // 0x8024C940: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024C940: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8024CC2C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024CC2C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8024CC30: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8024CC34: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8024CC38: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8024CC3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024CC40: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8024CC44: sltiu       $v0, $v1, 0x30
    ctx->r2 = ctx->r3 < 0X30 ? 1 : 0;
    // 0x8024CC48: beq         $v0, $zero, L_8024CD24
    if (ctx->r2 == 0) {
        // 0x8024CC4C: andi        $v0, $v1, 0xF
        ctx->r2 = ctx->r3 & 0XF;
            goto L_8024CD24;
    }
    // 0x8024CC4C: andi        $v0, $v1, 0xF
    ctx->r2 = ctx->r3 & 0XF;
    // 0x8024CC50: bne         $v0, $zero, L_8024CD08
    if (ctx->r2 != 0) {
        // 0x8024CC54: nop
    
            goto L_8024CD08;
    }
    // 0x8024CC54: nop

    // 0x8024CC58: jal         0x8004F144
    // 0x8024CC5C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8024CC5C: nop

    after_0:
    // 0x8024CC60: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8024CC64: beq         $s0, $zero, L_8024CD08
    if (ctx->r16 == 0) {
        // 0x8024CC68: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8024CD08;
    }
    // 0x8024CC68: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8024CC6C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8024CC70: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8024CC74: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8024CC78: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8024CC7C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8024CC80: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x8024CC84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8024CC88: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8024CC8C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8024CC90: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8024CC94: jal         0x800A3450
    // 0x8024CC98: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8024CC98: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    after_1:
    // 0x8024CC9C: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x8024CCA0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8024CCA4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024CCA8: jal         0x800A3450
    // 0x8024CCAC: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8024CCAC: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x8024CCB0: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x8024CCB4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8024CCB8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024CCBC: jal         0x800A3450
    // 0x8024CCC0: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8024CCC0: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_3:
    // 0x8024CCC4: lui         $a1, 0x3D48
    ctx->r5 = S32(0X3D48 << 16);
    // 0x8024CCC8: ori         $a1, $a1, 0x4E
    ctx->r5 = ctx->r5 | 0X4E;
    // 0x8024CCCC: lhu         $a0, 0x1E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1E);
    // 0x8024CCD0: lui         $v1, 0x2E40
    ctx->r3 = S32(0X2E40 << 16);
    // 0x8024CCD4: ori         $v1, $v1, 0x4040
    ctx->r3 = ctx->r3 | 0X4040;
    // 0x8024CCD8: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x8024CCDC: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x8024CCE0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8024CCE4: sw          $a1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r5;
    // 0x8024CCE8: sb          $v1, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r3;
    // 0x8024CCEC: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x8024CCF0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8024CCF4: jal         0x800A3450
    // 0x8024CCF8: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8024CCF8: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    after_4:
    // 0x8024CCFC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8024CD00: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8024CD04: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_8024CD08:
    // 0x8024CD08: jal         0x800A3450
    // 0x8024CD0C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x8024CD0C: nop

    after_5:
    // 0x8024CD10: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8024CD14: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8024CD18: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024CD1C: j           L_8024CD2C
    // 0x8024CD20: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
        goto L_8024CD2C;
    // 0x8024CD20: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_8024CD24:
    // 0x8024CD24: jal         0x8004F5C4
    // 0x8024CD28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_6;
    // 0x8024CD28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_8024CD2C:
    // 0x8024CD2C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8024CD30: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024CD34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024CD38: jr          $ra
    // 0x8024CD3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8024CD3C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802374C4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802374C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802374C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802374CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802374D0: jal         0x8004F418
    // 0x802374D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x802374D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x802374D8: lw          $v1, 0x33C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X33C);
    // 0x802374DC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802374E0: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x802374E4: lw          $a0, 0x33C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X33C);
    // 0x802374E8: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x802374EC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802374F0: lw          $v0, 0x4020($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4020);
    // 0x802374F4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802374F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802374FC: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80237500: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80237504: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80237508: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023750C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80237510: jalr        $v0
    // 0x80237514: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80237514: nop

    after_1:
    // 0x80237518: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x8023751C: lbu         $v0, 0xF($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XF);
    // 0x80237520: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80237524: beq         $v0, $zero, L_80237538
    if (ctx->r2 == 0) {
        // 0x80237528: nop
    
            goto L_80237538;
    }
    // 0x80237528: nop

    // 0x8023752C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80237530: jal         0x8004F4F8
    // 0x80237534: lw          $a0, 0x5638($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5638);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x80237534: lw          $a0, 0x5638($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5638);
    after_2:
L_80237538:
    // 0x80237538: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023753C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237540: jr          $ra
    // 0x80237544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023008C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023008C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80230090: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230094: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230098: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023009C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802300A0: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x802300A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802300A8: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x802300AC: beq         $v1, $v0, L_80230124
    if (ctx->r3 == ctx->r2) {
        // 0x802300B0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80230124;
    }
    // 0x802300B0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802300B4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802300B8: beql        $v0, $zero, L_802300D0
    if (ctx->r2 == 0) {
        // 0x802300BC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802300D0;
    }
    goto skip_0;
    // 0x802300BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802300C0: beq         $v1, $zero, L_802300E8
    if (ctx->r3 == 0) {
        // 0x802300C4: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802300E8;
    }
    // 0x802300C4: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802300C8: j           L_80230238
    // 0x802300CC: nop

        goto L_80230238;
    // 0x802300CC: nop

L_802300D0:
    // 0x802300D0: beq         $v1, $v0, L_80230184
    if (ctx->r3 == ctx->r2) {
        // 0x802300D4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80230184;
    }
    // 0x802300D4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802300D8: beq         $v1, $v0, L_80230210
    if (ctx->r3 == ctx->r2) {
        // 0x802300DC: nop
    
            goto L_80230210;
    }
    // 0x802300DC: nop

    // 0x802300E0: j           L_80230238
    // 0x802300E4: nop

        goto L_80230238;
    // 0x802300E4: nop

L_802300E8:
    // 0x802300E8: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x802300EC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802300F0: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x802300F4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802300F8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x802300FC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80230100: addiu       $v0, $zero, -0x18
    ctx->r2 = ADD32(0, -0X18);
    // 0x80230104: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80230108: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8023010C: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x80230110: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80230114: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x80230118: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
    // 0x8023011C: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x80230120: sh          $v1, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r3;
L_80230124:
    // 0x80230124: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80230128: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8023012C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80230130: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230134: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80230138: bltz        $v0, L_80230168
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023013C: slti        $v0, $v0, 0x2
        ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_80230168;
    }
    // 0x8023013C: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80230140: beq         $v0, $zero, L_80230238
    if (ctx->r2 == 0) {
        // 0x80230144: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230238;
    }
    // 0x80230144: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230148: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8023014C: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80230150: jal         0x8004DA90
    // 0x80230154: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80230154: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80230158: jal         0x80040F30
    // 0x8023015C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8023015C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80230160: j           L_80230238
    // 0x80230164: nop

        goto L_80230238;
    // 0x80230164: nop

L_80230168:
    // 0x80230168: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8023016C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80230170: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230174: addiu       $v1, $zero, 0x22
    ctx->r3 = ADD32(0, 0X22);
    // 0x80230178: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8023017C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230180: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80230184:
    // 0x80230184: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x80230188: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023018C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80230190: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80230194: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80230198: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023019C: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x802301A0: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x802301A4: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x802301A8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802301AC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x802301B0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x802301B4: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x802301B8: jal         0x8004DA90
    // 0x802301BC: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x802301BC: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_2:
    // 0x802301C0: jal         0x80040F30
    // 0x802301C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x802301C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802301C8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802301CC: beq         $v1, $zero, L_80230238
    if (ctx->r3 == 0) {
        // 0x802301D0: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_80230238;
    }
    // 0x802301D0: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x802301D4: bnel        $v0, $zero, L_802301DC
    if (ctx->r2 != 0) {
        // 0x802301D8: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_802301DC;
    }
    goto skip_1;
    // 0x802301D8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_802301DC:
    // 0x802301DC: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x802301E0: beq         $v0, $zero, L_80230238
    if (ctx->r2 == 0) {
        // 0x802301E4: nop
    
            goto L_80230238;
    }
    // 0x802301E4: nop

    // 0x802301E8: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x802301EC: bgtz        $v0, L_80230238
    if (SIGNED(ctx->r2) > 0) {
        // 0x802301F0: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_80230238;
    }
    // 0x802301F0: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x802301F4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802301F8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802301FC: addiu       $v1, $zero, 0x23
    ctx->r3 = ADD32(0, 0X23);
    // 0x80230200: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80230204: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230208: j           L_80230238
    // 0x8023020C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80230238;
    // 0x8023020C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80230210:
    // 0x80230210: lhu         $v0, 0x34C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X34C);
    // 0x80230214: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80230218: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x8023021C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80230220: bgez        $v0, L_80230238
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80230224: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_80230238;
    }
    // 0x80230224: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80230228: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8023022C: sb          $v1, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r3;
    // 0x80230230: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x80230234: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_80230238:
    // 0x80230238: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023023C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80230240: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230244: jr          $ra
    // 0x80230248: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80230248: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80242E4C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80242E4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80242E50: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80242E54: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80242E58: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80242E5C: jal         0x80243360
    // 0x80242E60: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_80243360_ovl10(rdram, ctx);
        goto after_0;
    // 0x80242E60: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x80242E64: lh          $a0, 0x44($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X44);
    // 0x80242E68: lhu         $v1, 0xE2($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XE2);
    // 0x80242E6C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80242E70: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x80242E74: sh          $v0, 0xE4($s0)
    MEM_H(0XE4, ctx->r16) = ctx->r2;
    // 0x80242E78: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80242E7C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80242E80: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x80242E84: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80242E88: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80242E8C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80242E90: slti        $v0, $v0, 0x401
    ctx->r2 = SIGNED(ctx->r2) < 0X401 ? 1 : 0;
    // 0x80242E94: bne         $v0, $zero, L_8024300C
    if (ctx->r2 != 0) {
        // 0x80242E98: sh          $v1, 0xE2($s0)
        MEM_H(0XE2, ctx->r16) = ctx->r3;
            goto L_8024300C;
    }
    // 0x80242E98: sh          $v1, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = ctx->r3;
    // 0x80242E9C: lbu         $v0, 0xDE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XDE);
    // 0x80242EA0: lw          $a0, 0xD0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0XD0);
    // 0x80242EA4: addiu       $v1, $v1, -0x400
    ctx->r3 = ADD32(ctx->r3, -0X400);
    // 0x80242EA8: sh          $v1, 0xE2($s0)
    MEM_H(0XE2, ctx->r16) = ctx->r3;
    // 0x80242EAC: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80242EB0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80242EB4: lbu         $v0, 0x2($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X2);
    // 0x80242EB8: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80242EBC: beq         $v0, $zero, L_80242ED4
    if (ctx->r2 == 0) {
        // 0x80242EC0: addiu       $v1, $zero, -0x1
        ctx->r3 = ADD32(0, -0X1);
            goto L_80242ED4;
    }
    // 0x80242EC0: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
    // 0x80242EC4: lbu         $v0, 0xDC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XDC);
    // 0x80242EC8: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x80242ECC: j           L_80242EE4
    // 0x80242ED0: addiu       $v0, $v0, 0xC00
    ctx->r2 = ADD32(ctx->r2, 0XC00);
        goto L_80242EE4;
    // 0x80242ED0: addiu       $v0, $v0, 0xC00
    ctx->r2 = ADD32(ctx->r2, 0XC00);
L_80242ED4:
    // 0x80242ED4: lbu         $v0, 0xDC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XDC);
    // 0x80242ED8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80242EDC: sll         $v0, $v0, 10
    ctx->r2 = S32(ctx->r2 << 10);
    // 0x80242EE0: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
L_80242EE4:
    // 0x80242EE4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80242EE8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80242EEC: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80242EF0: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80242EF4: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x80242EF8: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80242EFC: lbu         $a1, 0xC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XC);
    // 0x80242F00: bne         $a1, $zero, L_80242F38
    if (ctx->r5 != 0) {
        // 0x80242F04: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80242F38;
    }
    // 0x80242F04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80242F08: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x80242F0C: sll         $a0, $v1, 24
    ctx->r4 = S32(ctx->r3 << 24);
    // 0x80242F10: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80242F14: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80242F18: mflo        $a0
    ctx->r4 = lo;
    // 0x80242F1C: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80242F20: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80242F24: addiu       $v0, $v0, -0x200
    ctx->r2 = ADD32(ctx->r2, -0X200);
    // 0x80242F28: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80242F2C: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80242F30: j           L_80242FD0
    // 0x80242F34: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
        goto L_80242FD0;
    // 0x80242F34: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
L_80242F38:
    // 0x80242F38: bnel        $a1, $v0, L_80242F70
    if (ctx->r5 != ctx->r2) {
        // 0x80242F3C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80242F70;
    }
    goto skip_0;
    // 0x80242F3C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80242F40: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80242F44: addiu       $v0, $v0, -0x200
    ctx->r2 = ADD32(ctx->r2, -0X200);
    // 0x80242F48: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80242F4C: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x80242F50: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x80242F54: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80242F58: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80242F5C: mflo        $v1
    ctx->r3 = lo;
    // 0x80242F60: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80242F64: nop

    // 0x80242F68: j           L_80242FCC
    // 0x80242F6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_80242FCC;
    // 0x80242F6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_80242F70:
    // 0x80242F70: bnel        $a1, $v0, L_80242FA8
    if (ctx->r5 != ctx->r2) {
        // 0x80242F74: sll         $v1, $v1, 24
        ctx->r3 = S32(ctx->r3 << 24);
            goto L_80242FA8;
    }
    goto skip_1;
    // 0x80242F74: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    skip_1:
    // 0x80242F78: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x80242F7C: sll         $a0, $v1, 24
    ctx->r4 = S32(ctx->r3 << 24);
    // 0x80242F80: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80242F84: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80242F88: mflo        $a0
    ctx->r4 = lo;
    // 0x80242F8C: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80242F90: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80242F94: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x80242F98: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80242F9C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80242FA0: j           L_80242FD0
    // 0x80242FA4: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
        goto L_80242FD0;
    // 0x80242FA4: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
L_80242FA8:
    // 0x80242FA8: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80242FAC: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x80242FB0: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80242FB4: lhu         $v0, 0x12($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X12);
    // 0x80242FB8: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x80242FBC: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80242FC0: mflo        $v1
    ctx->r3 = lo;
    // 0x80242FC4: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80242FC8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_80242FCC:
    // 0x80242FCC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_80242FD0:
    // 0x80242FD0: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80242FD4: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x80242FD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80242FDC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80242FE0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80242FE4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80242FE8: jal         0x80243718
    // 0x80242FEC: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    func_80243718_ovl10(rdram, ctx);
        goto after_1;
    // 0x80242FEC: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    after_1:
    // 0x80242FF0: lbu         $v0, 0xF($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XF);
    // 0x80242FF4: sh          $zero, 0x12($s1)
    MEM_H(0X12, ctx->r17) = 0;
    // 0x80242FF8: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x80242FFC: sb          $v0, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r2;
    // 0x80243000: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80243004: j           L_80243014
    // 0x80243008: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80243014;
    // 0x80243008: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8024300C:
    // 0x8024300C: jal         0x802431E4
    // 0x80243010: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802431E4_ovl10(rdram, ctx);
        goto after_2;
    // 0x80243010: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80243014:
    // 0x80243014: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80243018: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8024301C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80243020: jr          $ra
    // 0x80243024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80243024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A04C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A04C: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022A050: lw          $v0, -0xD90($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XD90);
    // 0x8022A054: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022A058: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A05C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022A060: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022A064: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8022A068: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022A06C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022A070: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022A074: beq         $v0, $zero, L_8022A14C
    if (ctx->r2 == 0) {
        // 0x8022A078: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8022A14C;
    }
    // 0x8022A078: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A07C: lui         $s4, 0x8000
    ctx->r20 = S32(0X8000 << 16);
    // 0x8022A080: addiu       $s5, $zero, 0x20
    ctx->r21 = ADD32(0, 0X20);
    // 0x8022A084: addiu       $s3, $zero, 0x2
    ctx->r19 = ADD32(0, 0X2);
    // 0x8022A088: lui         $s2, 0x8025
    ctx->r18 = S32(0X8025 << 16);
    // 0x8022A08C: addiu       $s2, $s2, 0x55F8
    ctx->r18 = ADD32(ctx->r18, 0X55F8);
    // 0x8022A090: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022A094: lw          $v0, -0xD90($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XD90);
L_8022A098:
    // 0x8022A098: srlv        $v1, $s4, $s1
    ctx->r3 = S32(U32(ctx->r20) >> (ctx->r17 & 31));
    // 0x8022A09C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022A0A0: beq         $v0, $zero, L_8022A138
    if (ctx->r2 == 0) {
        // 0x8022A0A4: nop
    
            goto L_8022A138;
    }
    // 0x8022A0A4: nop

    // 0x8022A0A8: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x8022A0AC: jal         0x8004DA68
    // 0x8022A0B0: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x8022A0B0: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    after_0:
    // 0x8022A0B4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A0B8: beq         $v1, $s5, L_8022A0D0
    if (ctx->r3 == ctx->r21) {
        // 0x8022A0BC: addiu       $v0, $zero, 0x60
        ctx->r2 = ADD32(0, 0X60);
            goto L_8022A0D0;
    }
    // 0x8022A0BC: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8022A0C0: beq         $v1, $v0, L_8022A0F8
    if (ctx->r3 == ctx->r2) {
        // 0x8022A0C4: nop
    
            goto L_8022A0F8;
    }
    // 0x8022A0C4: nop

    // 0x8022A0C8: j           L_8022A11C
    // 0x8022A0CC: nop

        goto L_8022A11C;
    // 0x8022A0CC: nop

L_8022A0D0:
    // 0x8022A0D0: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A0D4: sb          $s3, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r19;
    // 0x8022A0D8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022A0DC: lw          $v0, 0x4020($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4020);
    // 0x8022A0E0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022A0E4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A0E8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022A0EC: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022A0F0: j           L_8022A10C
    // 0x8022A0F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_8022A10C;
    // 0x8022A0F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022A0F8:
    // 0x8022A0F8: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A0FC: sb          $s3, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r19;
    // 0x8022A100: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x8022A104: lw          $v1, -0x26A8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X26A8);
    // 0x8022A108: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8022A10C:
    // 0x8022A10C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A110: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022A114: jalr        $v0
    // 0x8022A118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022A118: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022A11C:
    // 0x8022A11C: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x8022A120: lw          $v1, -0xD90($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XD90);
    // 0x8022A124: srlv        $v0, $s4, $s1
    ctx->r2 = S32(U32(ctx->r20) >> (ctx->r17 & 31));
    // 0x8022A128: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x8022A12C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022A130: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8022A134: sw          $v1, -0xD90($at)
    MEM_W(-0XD90, ctx->r1) = ctx->r3;
L_8022A138:
    // 0x8022A138: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8022A13C: lw          $v0, -0xD90($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XD90);
    // 0x8022A140: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8022A144: bne         $v0, $zero, L_8022A098
    if (ctx->r2 != 0) {
        // 0x8022A148: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8022A098;
    }
    // 0x8022A148: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8022A14C:
    // 0x8022A14C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022A150: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8022A154: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022A158: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A15C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A160: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A164: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A168: jr          $ra
    // 0x8022A16C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022A16C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80238E44_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238E44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80238E48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80238E4C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238E50: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80238E54: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x80238E58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80238E5C: lui         $a1, 0x8025
    ctx->r5 = S32(0X8025 << 16);
    // 0x80238E60: addiu       $a1, $a1, 0x2F88
    ctx->r5 = ADD32(ctx->r5, 0X2F88);
    // 0x80238E64: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80238E68: jal         0x8009A3B4
    // 0x80238E6C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80238E6C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x80238E70: lb          $v0, 0x352($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X352);
    // 0x80238E74: lw          $v1, 0x340($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X340);
    // 0x80238E78: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80238E7C: andi        $a0, $v0, 0x3
    ctx->r4 = ctx->r2 & 0X3;
    // 0x80238E80: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80238E84: lb          $v0, 0xC($v1)
    ctx->r2 = MEM_B(ctx->r3, 0XC);
    // 0x80238E88: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80238E8C: beq         $v0, $a1, L_80238EA4
    if (ctx->r2 == ctx->r5) {
        // 0x80238E90: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80238EA4;
    }
    // 0x80238E90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80238E94: addu        $v1, $s1, $a0
    ctx->r3 = ADD32(ctx->r17, ctx->r4);
    // 0x80238E98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238E9C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80238EA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_80238EA4:
    // 0x80238EA4: lb          $v0, 0x352($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X352);
    // 0x80238EA8: lw          $v1, 0x340($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X340);
    // 0x80238EAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238EB0: andi        $a0, $v0, 0x3
    ctx->r4 = ctx->r2 & 0X3;
    // 0x80238EB4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80238EB8: lb          $v0, 0xC($v1)
    ctx->r2 = MEM_B(ctx->r3, 0XC);
    // 0x80238EBC: beq         $v0, $a1, L_80238ED0
    if (ctx->r2 == ctx->r5) {
        // 0x80238EC0: addu        $v1, $s1, $a0
        ctx->r3 = ADD32(ctx->r17, ctx->r4);
            goto L_80238ED0;
    }
    // 0x80238EC0: addu        $v1, $s1, $a0
    ctx->r3 = ADD32(ctx->r17, ctx->r4);
    // 0x80238EC4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80238EC8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80238ECC: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_80238ED0:
    // 0x80238ED0: lw          $v0, 0x340($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X340);
    // 0x80238ED4: lb          $v1, 0x352($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X352);
    // 0x80238ED8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80238EDC: lb          $v0, 0xC($v0)
    ctx->r2 = MEM_B(ctx->r2, 0XC);
    // 0x80238EE0: sll         $v1, $a2, 16
    ctx->r3 = S32(ctx->r6 << 16);
    // 0x80238EE4: sra         $a0, $v1, 16
    ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80238EE8: sltiu       $v1, $a0, 0x1
    ctx->r3 = ctx->r4 < 0X1 ? 1 : 0;
    // 0x80238EEC: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80238EF0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80238EF4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80238EF8: bne         $v0, $zero, L_80238F94
    if (ctx->r2 != 0) {
        // 0x80238EFC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80238F94;
    }
    // 0x80238EFC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80238F00: lhu         $v0, 0x30A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X30A);
    // 0x80238F04: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80238F08: div         $zero, $v0, $a0
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r4)));
    // 0x80238F0C: bne         $a0, $zero, L_80238F18
    if (ctx->r4 != 0) {
        // 0x80238F10: nop
    
            goto L_80238F18;
    }
    // 0x80238F10: nop

    // 0x80238F14: break       7
    do_break(2149814036);
L_80238F18:
    // 0x80238F18: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80238F1C: bne         $a0, $at, L_80238F30
    if (ctx->r4 != ctx->r1) {
        // 0x80238F20: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80238F30;
    }
    // 0x80238F20: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80238F24: bne         $v0, $at, L_80238F30
    if (ctx->r2 != ctx->r1) {
        // 0x80238F28: nop
    
            goto L_80238F30;
    }
    // 0x80238F28: nop

    // 0x80238F2C: break       6
    do_break(2149814060);
L_80238F30:
    // 0x80238F30: mfhi        $v1
    ctx->r3 = hi;
    // 0x80238F34: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80238F38: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80238F3C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80238F40: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80238F44: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80238F48: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
L_80238F4C:
    // 0x80238F4C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80238F50: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80238F54: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80238F58: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x80238F5C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80238F60: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238F64: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80238F68: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80238F6C: bne         $v0, $zero, L_80238F8C
    if (ctx->r2 != 0) {
        // 0x80238F70: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_80238F8C;
    }
    // 0x80238F70: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80238F74: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80238F78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238F7C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80238F80: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x80238F84: bne         $v0, $zero, L_80238F4C
    if (ctx->r2 != 0) {
        // 0x80238F88: sll         $v0, $a1, 16
        ctx->r2 = S32(ctx->r5 << 16);
            goto L_80238F4C;
    }
    // 0x80238F88: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
L_80238F8C:
    // 0x80238F8C: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x80238F90: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
L_80238F94:
    // 0x80238F94: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80238F98: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80238F9C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80238FA0: jr          $ra
    // 0x80238FA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80238FA4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022B934_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B934: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B938: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B93C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B940: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B944: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B948: bne         $v0, $zero, L_8022B9C4
    if (ctx->r2 != 0) {
        // 0x8022B94C: nop
    
            goto L_8022B9C4;
    }
    // 0x8022B94C: nop

    // 0x8022B950: jal         0x8022BE40
    // 0x8022B954: nop

    func_8022BE40_ovl10(rdram, ctx);
        goto after_0;
    // 0x8022B954: nop

    after_0:
    // 0x8022B958: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B95C: bne         $v0, $zero, L_8022B98C
    if (ctx->r2 != 0) {
        // 0x8022B960: nop
    
            goto L_8022B98C;
    }
    // 0x8022B960: nop

    // 0x8022B964: jal         0x80229F50
    // 0x8022B968: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    func_80229F50_ovl10(rdram, ctx);
        goto after_1;
    // 0x8022B968: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_1:
    // 0x8022B96C: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x8022B970: jal         0x8003E87C
    // 0x8022B974: addiu       $a0, $a0, 0x7C8
    ctx->r4 = ADD32(ctx->r4, 0X7C8);
    func_8003E87C_19C7C(rdram, ctx);
        goto after_2;
    // 0x8022B974: addiu       $a0, $a0, 0x7C8
    ctx->r4 = ADD32(ctx->r4, 0X7C8);
    after_2:
    // 0x8022B978: addiu       $v1, $zero, 0x100
    ctx->r3 = ADD32(0, 0X100);
    // 0x8022B97C: bne         $v0, $v1, L_8022B98C
    if (ctx->r2 != ctx->r3) {
        // 0x8022B980: nop
    
            goto L_8022B98C;
    }
    // 0x8022B980: nop

    // 0x8022B984: jal         0x8022A170
    // 0x8022B988: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8022A170_ovl10(rdram, ctx);
        goto after_3;
    // 0x8022B988: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
L_8022B98C:
    // 0x8022B98C: jal         0x8006033C
    // 0x8022B990: addiu       $a0, $zero, 0x209
    ctx->r4 = ADD32(0, 0X209);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x8022B990: addiu       $a0, $zero, 0x209
    ctx->r4 = ADD32(0, 0X209);
    after_4:
    // 0x8022B994: beq         $v0, $zero, L_8022B9C0
    if (ctx->r2 == 0) {
        // 0x8022B998: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022B9C0;
    }
    // 0x8022B998: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B99C: jal         0x8006033C
    // 0x8022B9A0: addiu       $a0, $zero, 0x211
    ctx->r4 = ADD32(0, 0X211);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x8022B9A0: addiu       $a0, $zero, 0x211
    ctx->r4 = ADD32(0, 0X211);
    after_5:
    // 0x8022B9A4: bne         $v0, $zero, L_8022B9C0
    if (ctx->r2 != 0) {
        // 0x8022B9A8: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8022B9C0;
    }
    // 0x8022B9A8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B9AC: jal         0x8022A170
    // 0x8022B9B0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8022A170_ovl10(rdram, ctx);
        goto after_6;
    // 0x8022B9B0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_6:
    // 0x8022B9B4: jal         0x8022A170
    // 0x8022B9B8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8022A170_ovl10(rdram, ctx);
        goto after_7;
    // 0x8022B9B8: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_7:
    // 0x8022B9BC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022B9C0:
    // 0x8022B9C0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B9C4:
    // 0x8022B9C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B9C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B9CC: jr          $ra
    // 0x8022B9D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B9D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225E7C_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225E80: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225E84: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225E88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225E8C: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80225E90: bne         $v0, $zero, L_80225F14
    if (ctx->r2 != 0) {
        // 0x80225E94: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80225F14;
    }
    // 0x80225E94: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80225E98: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80225E9C: lb          $a0, -0x1D90($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1D90);
    // 0x80225EA0: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80225EA4: jal         0x8003B85C
    // 0x80225EA8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80225EA8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80225EAC: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80225EB0: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    // 0x80225EB4: lw          $a0, 0x88($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X88);
    // 0x80225EB8: ori         $a1, $a1, 0xF
    ctx->r5 = ctx->r5 | 0XF;
    // 0x80225EBC: jal         0x8003B840
    // 0x80225EC0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80225EC0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80225EC4: lui         $a0, 0x8025
    ctx->r4 = S32(0X8025 << 16);
    // 0x80225EC8: lb          $a0, -0x1D8F($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X1D8F);
    // 0x80225ECC: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80225ED0: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80225ED4: jal         0x8003B85C
    // 0x80225ED8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80225ED8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x80225EDC: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80225EE0: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x80225EE4: lw          $a0, 0x88($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X88);
    // 0x80225EE8: ori         $a1, $a1, 0x11
    ctx->r5 = ctx->r5 | 0X11;
    // 0x80225EEC: jal         0x8003B840
    // 0x80225EF0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80225EF0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x80225EF4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225EF8: jal         0x800616FC
    // 0x80225EFC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x80225EFC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_4:
    // 0x80225F00: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80225F04: sb          $zero, 0xF($v0)
    MEM_B(0XF, ctx->r2) = 0;
    // 0x80225F08: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x80225F0C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225F10: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_80225F14:
    // 0x80225F14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225F18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225F1C: jr          $ra
    // 0x80225F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225F24: nop

    // 0x80225F28: nop

    // 0x80225F2C: nop

;}
RECOMP_FUNC void func_802336A0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802336A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802336A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802336A8: lbu         $a1, 0xA($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XA);
    // 0x802336AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802336B0: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x802336B4: beq         $v1, $v0, L_802336DC
    if (ctx->r3 == ctx->r2) {
        // 0x802336B8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802336DC;
    }
    // 0x802336B8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802336BC: beq         $v0, $zero, L_802336F8
    if (ctx->r2 == 0) {
        // 0x802336C0: nop
    
            goto L_802336F8;
    }
    // 0x802336C0: nop

    // 0x802336C4: bne         $v1, $zero, L_802336F8
    if (ctx->r3 != 0) {
        // 0x802336C8: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_802336F8;
    }
    // 0x802336C8: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x802336CC: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x802336D0: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x802336D4: j           L_802336F8
    // 0x802336D8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
        goto L_802336F8;
    // 0x802336D8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
L_802336DC:
    // 0x802336DC: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x802336E0: bgez        $v0, L_802336F8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802336E4: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_802336F8;
    }
    // 0x802336E4: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x802336E8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x802336EC: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x802336F0: jal         0x8006036C
    // 0x802336F4: addiu       $a0, $zero, 0x61F
    ctx->r4 = ADD32(0, 0X61F);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x802336F4: addiu       $a0, $zero, 0x61F
    ctx->r4 = ADD32(0, 0X61F);
    after_0:
L_802336F8:
    // 0x802336F8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802336FC: jr          $ra
    // 0x80233700: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233700: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BDA4_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BDA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022BDA8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022BDAC: sb          $zero, 0x4($a0)
    MEM_B(0X4, ctx->r4) = 0;
    // 0x8022BDB0: jal         0x8006036C
    // 0x8022BDB4: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x8022BDB4: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_0:
    // 0x8022BDB8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022BDBC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022BDC0: jr          $ra
    // 0x8022BDC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BDC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F8C0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F8C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F8C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F8C8: jal         0x8004F418
    // 0x8022F8CC: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022F8CC: nop

    after_0:
    // 0x8022F8D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F8D4: jr          $ra
    // 0x8022F8D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F8D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232FB0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232FB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80232FB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232FB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232FBC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232FC0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80232FC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232FC8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80232FCC: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80232FD0: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x80232FD4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80232FD8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80232FDC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80232FE0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80232FE4: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x80232FE8: lhu         $t0, 0x56($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X56);
    // 0x80232FEC: lbu         $t1, 0xAC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XAC);
    // 0x80232FF0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80232FF4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80232FF8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80232FFC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80233000: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x80233004: sh          $t0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r8;
    // 0x80233008: jal         0x8004F820
    // 0x8023300C: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8023300C: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    after_0:
    // 0x80233010: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233014: bgez        $v0, L_80233044
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80233018: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80233044;
    }
    // 0x80233018: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8023301C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80233020: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80233024: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80233028: jal         0x8004F820
    // 0x8023302C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8023302C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x80233030: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233034: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80233038: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023303C: j           L_80233060
    // 0x80233040: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80233060;
    // 0x80233040: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80233044:
    // 0x80233044: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80233048: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8023304C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80233050: jal         0x8004F820
    // 0x80233054: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80233054: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80233058: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023305C: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80233060:
    // 0x80233060: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80233064: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x80233068: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8023306C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80233070: jal         0x800610AC
    // 0x80233074: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_3;
    // 0x80233074: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80233078: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8023307C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80233080: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80233084: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233088: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023308C: jr          $ra
    // 0x80233090: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80233090: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80233618_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233618: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023361C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233620: jal         0x8004F418
    // 0x80233624: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80233624: nop

    after_0:
    // 0x80233628: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023362C: jr          $ra
    // 0x80233630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233630: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80247550_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80247550: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80247554: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80247558: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024755C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80247560: jal         0x80071110
    // 0x80247564: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_80071110_4C510(rdram, ctx);
        goto after_0;
    // 0x80247564: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80247568: bne         $v0, $zero, L_8024757C
    if (ctx->r2 != 0) {
        // 0x8024756C: nop
    
            goto L_8024757C;
    }
    // 0x8024756C: nop

    // 0x80247570: lh          $v0, 0x7C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X7C);
    // 0x80247574: beq         $v0, $zero, L_802475B8
    if (ctx->r2 == 0) {
        // 0x80247578: addiu       $a0, $s0, 0x34
        ctx->r4 = ADD32(ctx->r16, 0X34);
            goto L_802475B8;
    }
    // 0x80247578: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
L_8024757C:
    // 0x8024757C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80247580: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80247584: beq         $v0, $zero, L_8024759C
    if (ctx->r2 == 0) {
        // 0x80247588: nop
    
            goto L_8024759C;
    }
    // 0x80247588: nop

    // 0x8024758C: jal         0x8004F4F8
    // 0x80247590: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_1;
    // 0x80247590: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80247594: j           L_802475A8
    // 0x80247598: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
        goto L_802475A8;
    // 0x80247598: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8024759C:
    // 0x8024759C: jal         0x8004F568
    // 0x802475A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_2;
    // 0x802475A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802475A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802475A8:
    // 0x802475A8: jal         0x802477C4
    // 0x802475AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_802477C4_ovl10(rdram, ctx);
        goto after_3;
    // 0x802475AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x802475B0: j           L_80247680
    // 0x802475B4: nop

        goto L_80247680;
    // 0x802475B4: nop

L_802475B8:
    // 0x802475B8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802475BC: jal         0x8009A3B4
    // 0x802475C0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x802475C0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x802475C4: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802475C8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802475CC: jal         0x8009A3B4
    // 0x802475D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802475D0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x802475D4: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x802475D8: addiu       $v0, $v1, 0xFF
    ctx->r2 = ADD32(ctx->r3, 0XFF);
    // 0x802475DC: beq         $v1, $zero, L_80247648
    if (ctx->r3 == 0) {
        // 0x802475E0: sb          $v0, 0xB($s0)
        MEM_B(0XB, ctx->r16) = ctx->r2;
            goto L_80247648;
    }
    // 0x802475E0: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802475E4: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x802475E8: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x802475EC: lh          $a0, 0x48($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X48);
    // 0x802475F0: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x802475F4: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x802475F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802475FC: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x80247600: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x80247604: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x80247608: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8024760C: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80247610: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x80247614: lhu         $a0, 0x24($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X24);
    // 0x80247618: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8024761C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80247620: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x80247624: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80247628: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x8024762C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
    // 0x80247630: sh          $a0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r4;
    // 0x80247634: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x80247638: sh          $v0, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r2;
    // 0x8024763C: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80247640: j           L_80247678
    // 0x80247644: sh          $v1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r3;
        goto L_80247678;
    // 0x80247644: sh          $v1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r3;
L_80247648:
    // 0x80247648: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8024764C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80247650: beq         $v0, $zero, L_80247668
    if (ctx->r2 == 0) {
        // 0x80247654: nop
    
            goto L_80247668;
    }
    // 0x80247654: nop

    // 0x80247658: jal         0x8004F4F8
    // 0x8024765C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_6;
    // 0x8024765C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80247660: j           L_80247680
    // 0x80247664: nop

        goto L_80247680;
    // 0x80247664: nop

L_80247668:
    // 0x80247668: jal         0x8004F568
    // 0x8024766C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F568_2A968(rdram, ctx);
        goto after_7;
    // 0x8024766C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80247670: j           L_80247680
    // 0x80247674: nop

        goto L_80247680;
    // 0x80247674: nop

L_80247678:
    // 0x80247678: jal         0x80247690
    // 0x8024767C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80247690_ovl10(rdram, ctx);
        goto after_8;
    // 0x8024767C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_80247680:
    // 0x80247680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80247684: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80247688: jr          $ra
    // 0x8024768C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024768C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239EE0_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239EE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239EE4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80239EE8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80239EEC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239EF0: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80239EF4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239EF8: lw          $v0, 0x16D0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X16D0);
    // 0x80239EFC: jalr        $v0
    // 0x80239F00: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80239F00: nop

    after_0:
    // 0x80239F04: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80239F08: jr          $ra
    // 0x80239F0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239F0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802385BC_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802385BC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802385C0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802385C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802385C8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x802385CC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802385D0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802385D4: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x802385D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802385DC: beq         $v1, $v0, L_802386A4
    if (ctx->r3 == ctx->r2) {
        // 0x802385E0: addiu       $s1, $s0, 0x308
        ctx->r17 = ADD32(ctx->r16, 0X308);
            goto L_802386A4;
    }
    // 0x802385E0: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x802385E4: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x802385E8: beql        $v0, $zero, L_80238600
    if (ctx->r2 == 0) {
        // 0x802385EC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80238600;
    }
    goto skip_0;
    // 0x802385EC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_0:
    // 0x802385F0: beq         $v1, $zero, L_80238618
    if (ctx->r3 == 0) {
        // 0x802385F4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80238618;
    }
    // 0x802385F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802385F8: j           L_80238948
    // 0x802385FC: nop

        goto L_80238948;
    // 0x802385FC: nop

L_80238600:
    // 0x80238600: beq         $v1, $v0, L_80238820
    if (ctx->r3 == ctx->r2) {
        // 0x80238604: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80238820;
    }
    // 0x80238604: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80238608: beq         $v1, $v0, L_802388D8
    if (ctx->r3 == ctx->r2) {
        // 0x8023860C: nop
    
            goto L_802388D8;
    }
    // 0x8023860C: nop

    // 0x80238610: j           L_80238948
    // 0x80238614: nop

        goto L_80238948;
    // 0x80238614: nop

L_80238618:
    // 0x80238618: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8023861C: lhu         $v1, 0x308($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X308);
    // 0x80238620: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80238624: sll         $a0, $a0, 1
    ctx->r4 = S32(ctx->r4 << 1);
    // 0x80238628: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x8023862C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80238630: lhu         $v0, 0x1638($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X1638);
    // 0x80238634: ori         $v1, $v1, 0x100
    ctx->r3 = ctx->r3 | 0X100;
    // 0x80238638: sh          $v1, 0x308($s0)
    MEM_H(0X308, ctx->r16) = ctx->r3;
    // 0x8023863C: andi        $v1, $v1, 0x40
    ctx->r3 = ctx->r3 & 0X40;
    // 0x80238640: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80238644: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80238648: beq         $v1, $zero, L_80238698
    if (ctx->r3 == 0) {
        // 0x8023864C: sh          $v0, 0x4C($s0)
        MEM_H(0X4C, ctx->r16) = ctx->r2;
            goto L_80238698;
    }
    // 0x8023864C: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
    // 0x80238650: lb          $v0, 0x352($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X352);
    // 0x80238654: lw          $v1, 0x344($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X344);
    // 0x80238658: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8023865C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80238660: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238664: lb          $v0, 0xC($v1)
    ctx->r2 = MEM_B(ctx->r3, 0XC);
    // 0x80238668: beq         $v0, $a1, L_80238698
    if (ctx->r2 == ctx->r5) {
        // 0x8023866C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80238698;
    }
    // 0x8023866C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80238670: lb          $a0, 0x353($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X353);
    // 0x80238674: lhu         $v1, 0x358($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X358);
    // 0x80238678: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8023867C: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x80238680: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80238684: andi        $a0, $a0, 0x3
    ctx->r4 = ctx->r4 & 0X3;
    // 0x80238688: srav        $v0, $v0, $a0
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r4 & 31));
    // 0x8023868C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80238690: j           L_80238820
    // 0x80238694: sh          $v1, 0x358($s0)
    MEM_H(0X358, ctx->r16) = ctx->r3;
        goto L_80238820;
    // 0x80238694: sh          $v1, 0x358($s0)
    MEM_H(0X358, ctx->r16) = ctx->r3;
L_80238698:
    // 0x80238698: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8023869C: andi        $v0, $v0, 0xFFBF
    ctx->r2 = ctx->r2 & 0XFFBF;
    // 0x802386A0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_802386A4:
    // 0x802386A4: lw          $a0, 0x38($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X38);
    // 0x802386A8: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x802386AC: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x802386B0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802386B4: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802386B8: mflo        $a1
    ctx->r5 = lo;
    // 0x802386BC: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x802386C0: lh          $v0, 0x6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6);
    // 0x802386C4: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x802386C8: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802386CC: mflo        $v1
    ctx->r3 = lo;
    // 0x802386D0: lui         $v0, 0x1F
    ctx->r2 = S32(0X1F << 16);
    // 0x802386D4: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x802386D8: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x802386DC: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x802386E0: bne         $v0, $zero, L_802387D8
    if (ctx->r2 != 0) {
        // 0x802386E4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802387D8;
    }
    // 0x802386E4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802386E8: jal         0x80238E44
    // 0x802386EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80238E44_ovl10(rdram, ctx);
        goto after_0;
    // 0x802386EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802386F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802386F4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802386F8: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x802386FC: beq         $v0, $v1, L_80238718
    if (ctx->r2 == ctx->r3) {
        // 0x80238700: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80238718;
    }
    // 0x80238700: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80238704: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80238708: lbu         $v0, 0x4A($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4A);
    // 0x8023870C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80238710: j           L_8023875C
    // 0x80238714: sra         $a2, $v0, 24
    ctx->r6 = S32(SIGNED(ctx->r2) >> 24);
        goto L_8023875C;
    // 0x80238714: sra         $a2, $v0, 24
    ctx->r6 = S32(SIGNED(ctx->r2) >> 24);
L_80238718:
    // 0x80238718: jal         0x80238C08
    // 0x8023871C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80238C08_ovl10(rdram, ctx);
        goto after_1;
    // 0x8023871C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80238720: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80238724: lb          $v1, 0x4A($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X4A);
    // 0x80238728: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023872C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80238730: beq         $v1, $v0, L_8023875C
    if (ctx->r3 == ctx->r2) {
        // 0x80238734: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8023875C;
    }
    // 0x80238734: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80238738: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023873C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80238740: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80238744: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x80238748: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x8023874C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80238750: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x80238754: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80238758: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_8023875C:
    // 0x8023875C: lw          $v0, 0x38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38);
    // 0x80238760: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80238764: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80238768: sw          $v1, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r3;
    // 0x8023876C: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80238770: sb          $v0, 0x49($s1)
    MEM_B(0X49, ctx->r17) = ctx->r2;
    // 0x80238774: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x80238778: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8023877C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80238780: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238784: lb          $a1, 0xC($v1)
    ctx->r5 = MEM_B(ctx->r3, 0XC);
    // 0x80238788: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8023878C: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x80238790: lui         $v1, 0x8025
    ctx->r3 = S32(0X8025 << 16);
    // 0x80238794: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80238798: lw          $v1, 0x1624($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X1624);
    // 0x8023879C: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x802387A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802387A4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802387A8: sw          $v1, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r3;
    // 0x802387AC: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x802387B0: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x802387B4: sh          $zero, 0x42($s1)
    MEM_H(0X42, ctx->r17) = 0;
    // 0x802387B8: sh          $v0, 0x40($s1)
    MEM_H(0X40, ctx->r17) = ctx->r2;
    // 0x802387BC: lhu         $v1, 0x6($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X6);
    // 0x802387C0: lbu         $v0, 0x4A($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4A);
    // 0x802387C4: andi        $a2, $a2, 0x3
    ctx->r6 = ctx->r6 & 0X3;
    // 0x802387C8: sb          $a2, 0x4A($s1)
    MEM_B(0X4A, ctx->r17) = ctx->r6;
    // 0x802387CC: sb          $v0, 0x4B($s1)
    MEM_B(0X4B, ctx->r17) = ctx->r2;
    // 0x802387D0: j           L_80238800
    // 0x802387D4: sh          $v1, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r3;
        goto L_80238800;
    // 0x802387D4: sh          $v1, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r3;
L_802387D8:
    // 0x802387D8: lhu         $a2, 0x56($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X56);
    // 0x802387DC: addiu       $a1, $s1, 0x40
    ctx->r5 = ADD32(ctx->r17, 0X40);
    // 0x802387E0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x802387E4: addiu       $a2, $a2, 0x800
    ctx->r6 = ADD32(ctx->r6, 0X800);
    // 0x802387E8: jal         0x8004F820
    // 0x802387EC: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802387EC: andi        $a2, $a2, 0xFFF
    ctx->r6 = ctx->r6 & 0XFFF;
    after_2:
    // 0x802387F0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802387F4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802387F8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802387FC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80238800:
    // 0x80238800: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80238804: lh          $v1, 0x44($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X44);
    // 0x80238808: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023880C: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x80238810: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238814: lh          $v0, 0x1630($at)
    ctx->r2 = MEM_H(ctx->r1, 0X1630);
    // 0x80238818: j           L_80238898
    // 0x8023881C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
        goto L_80238898;
    // 0x8023881C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
L_80238820:
    // 0x80238820: lw          $a0, 0x3C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X3C);
    // 0x80238824: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x80238828: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x8023882C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80238830: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80238834: mflo        $a1
    ctx->r5 = lo;
    // 0x80238838: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8023883C: lh          $v0, 0x6($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X6);
    // 0x80238840: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x80238844: mult        $v0, $v0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80238848: mflo        $v0
    ctx->r2 = lo;
    // 0x8023884C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80238850: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80238854: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80238858: beq         $v0, $zero, L_8023887C
    if (ctx->r2 == 0) {
        // 0x8023885C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8023887C;
    }
    // 0x8023885C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80238860: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80238864: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80238868: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8023886C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80238870: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80238874: j           L_802388D8
    // 0x80238878: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_802388D8;
    // 0x80238878: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_8023887C:
    // 0x8023887C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80238880: lh          $v1, 0x44($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X44);
    // 0x80238884: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80238888: lui         $at, 0x8025
    ctx->r1 = S32(0X8025 << 16);
    // 0x8023888C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238890: lh          $v0, 0x1630($at)
    ctx->r2 = MEM_H(ctx->r1, 0X1630);
    // 0x80238894: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
L_80238898:
    // 0x80238898: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023889C: beql        $v1, $zero, L_802388B4
    if (ctx->r3 == 0) {
        // 0x802388A0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802388B4;
    }
    goto skip_1;
    // 0x802388A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_1:
    // 0x802388A4: lhu         $v0, 0x4C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4C);
    // 0x802388A8: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x802388AC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802388B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802388B4:
    // 0x802388B4: lhu         $a1, 0x44($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X44);
    // 0x802388B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802388BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802388C0: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x802388C4: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x802388C8: jal         0x8004DA90
    // 0x802388CC: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x802388CC: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_3:
    // 0x802388D0: j           L_80238948
    // 0x802388D4: nop

        goto L_80238948;
    // 0x802388D4: nop

L_802388D8:
    // 0x802388D8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802388DC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802388E0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802388E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802388E8: bgez        $v0, L_80238948
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802388EC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80238948;
    }
    // 0x802388EC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802388F0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802388F4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x802388F8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802388FC: andi        $v1, $v0, 0xFFDF
    ctx->r3 = ctx->r2 & 0XFFDF;
    // 0x80238900: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80238904: bne         $v0, $zero, L_8023892C
    if (ctx->r2 != 0) {
        // 0x80238908: sh          $v1, 0x0($s1)
        MEM_H(0X0, ctx->r17) = ctx->r3;
            goto L_8023892C;
    }
    // 0x80238908: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    // 0x8023890C: lb          $v0, 0x4A($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X4A);
    // 0x80238910: lhu         $a0, 0x50($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X50);
    // 0x80238914: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x80238918: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8023891C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80238920: srav        $v1, $v1, $v0
    ctx->r3 = S32(SIGNED(ctx->r3) >> (ctx->r2 & 31));
    // 0x80238924: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x80238928: sh          $a0, 0x50($s1)
    MEM_H(0X50, ctx->r17) = ctx->r4;
L_8023892C:
    // 0x8023892C: jal         0x8023922C
    // 0x80238930: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023922C_ovl10(rdram, ctx);
        goto after_4;
    // 0x80238930: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80238934: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80238938: addiu       $v1, $zero, 0x78
    ctx->r3 = ADD32(0, 0X78);
    // 0x8023893C: sh          $v1, 0x52($s1)
    MEM_H(0X52, ctx->r17) = ctx->r3;
    // 0x80238940: andi        $v0, $v0, 0xFFBF
    ctx->r2 = ctx->r2 & 0XFFBF;
    // 0x80238944: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80238948:
    // 0x80238948: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023894C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80238950: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80238954: jr          $ra
    // 0x80238958: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80238958: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8024D148_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8024D148: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024D14C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8024D150: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8024D154: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8024D158: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8024D15C: blez        $v0, L_8024D1E4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8024D160: nop
    
            goto L_8024D1E4;
    }
    // 0x8024D160: nop

    // 0x8024D164: jal         0x800A3450
    // 0x8024D168: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8024D168: nop

    after_0:
    // 0x8024D16C: lhu         $v1, 0x1C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X1C);
    // 0x8024D170: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8024D174: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8024D178: jal         0x800A3450
    // 0x8024D17C: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8024D17C: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_1:
    // 0x8024D180: lhu         $v1, 0x20($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X20);
    // 0x8024D184: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8024D188: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8024D18C: jal         0x800A3450
    // 0x8024D190: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8024D190: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x8024D194: lui         $t0, 0xFFFE
    ctx->r8 = S32(0XFFFE << 16);
    // 0x8024D198: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x8024D19C: ori         $t0, $t0, 0xFEFF
    ctx->r8 = ctx->r8 | 0XFEFF;
    // 0x8024D1A0: lbu         $a3, 0xE($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XE);
    // 0x8024D1A4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8024D1A8: lhu         $a0, 0x1E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1E);
    // 0x8024D1AC: lhu         $a1, 0x24($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X24);
    // 0x8024D1B0: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    // 0x8024D1B4: sll         $v1, $v1, 24
    ctx->r3 = S32(ctx->r3 << 24);
    // 0x8024D1B8: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x8024D1BC: addiu       $a3, $a3, -0x1
    ctx->r7 = ADD32(ctx->r7, -0X1);
    // 0x8024D1C0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8024D1C4: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x8024D1C8: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x8024D1CC: addu        $a2, $a2, $t0
    ctx->r6 = ADD32(ctx->r6, ctx->r8);
    // 0x8024D1D0: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    // 0x8024D1D4: sh          $a1, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r5;
    // 0x8024D1D8: sw          $a2, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r6;
    // 0x8024D1DC: j           L_8024D1EC
    // 0x8024D1E0: sb          $a3, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r7;
        goto L_8024D1EC;
    // 0x8024D1E0: sb          $a3, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r7;
L_8024D1E4:
    // 0x8024D1E4: jal         0x8004F5C4
    // 0x8024D1E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x8024D1E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_8024D1EC:
    // 0x8024D1EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8024D1F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8024D1F4: jr          $ra
    // 0x8024D1F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8024D1F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8024D1FC: nop

;}
RECOMP_FUNC void func_80239F10_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239F10: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80239F14: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80239F18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239F1C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80239F20: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80239F24: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80239F28: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80239F2C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80239F30: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80239F34: jal         0x8004D5D4
    // 0x80239F38: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80239F38: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80239F3C: addiu       $s2, $sp, 0x18
    ctx->r18 = ADD32(ctx->r29, 0X18);
    // 0x80239F40: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80239F44: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80239F48: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80239F4C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80239F50: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80239F54: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80239F58: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80239F5C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80239F60: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80239F64: sh          $zero, 0x368($s0)
    MEM_H(0X368, ctx->r16) = 0;
    // 0x80239F68: jal         0x8009A3B4
    // 0x80239F6C: sw          $zero, 0x36C($s0)
    MEM_W(0X36C, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80239F6C: sw          $zero, 0x36C($s0)
    MEM_W(0X36C, ctx->r16) = 0;
    after_1:
    // 0x80239F70: addiu       $s1, $s0, 0x374
    ctx->r17 = ADD32(ctx->r16, 0X374);
    // 0x80239F74: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80239F78: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80239F7C: jal         0x8009A3B4
    // 0x80239F80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80239F80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80239F84: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80239F88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80239F8C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80239F90: addiu       $a3, $zero, 0x100
    ctx->r7 = ADD32(0, 0X100);
    // 0x80239F94: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80239F98: jal         0x8004DBA0
    // 0x80239F9C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x80239F9C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
    // 0x80239FA0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239FA4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80239FA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80239FAC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80239FB0: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x80239FB4: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x80239FB8: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x80239FBC: lui         $v0, 0x8025
    ctx->r2 = S32(0X8025 << 16);
    // 0x80239FC0: addiu       $v0, $v0, 0x16EC
    ctx->r2 = ADD32(ctx->r2, 0X16EC);
    // 0x80239FC4: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80239FC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239FCC: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x80239FD0: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80239FD4: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80239FD8: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80239FDC: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x80239FE0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80239FE4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80239FE8: jal         0x80050294
    // 0x80239FEC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x80239FEC: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_4:
    // 0x80239FF0: jal         0x8023A010
    // 0x80239FF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023A010_ovl10(rdram, ctx);
        goto after_5;
    // 0x80239FF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80239FF8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80239FFC: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8023A000: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8023A004: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8023A008: jr          $ra
    // 0x8023A00C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023A00C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80232204_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232204: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232208: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023220C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232210: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80232214: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232218: jal         0x80233334
    // 0x8023221C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_80233334_ovl10(rdram, ctx);
        goto after_0;
    // 0x8023221C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80232220: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80232224: beq         $v0, $zero, L_80232250
    if (ctx->r2 == 0) {
        // 0x80232228: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_80232250;
    }
    // 0x80232228: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8023222C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80232230: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232234: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80232238: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8023223C: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x80232240: jal         0x80233298
    // 0x80232244: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    func_80233298_ovl10(rdram, ctx);
        goto after_1;
    // 0x80232244: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    after_1:
    // 0x80232248: j           L_80232290
    // 0x8023224C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80232290;
    // 0x8023224C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80232250:
    // 0x80232250: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x80232254: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80232258: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8023225C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232260: bne         $v0, $zero, L_80232270
    if (ctx->r2 != 0) {
        // 0x80232264: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232270;
    }
    // 0x80232264: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232268: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023226C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80232270:
    // 0x80232270: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80232274: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232278: jal         0x8004DA90
    // 0x8023227C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8023227C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80232280: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80232284: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80232288: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8023228C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80232290:
    // 0x80232290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232294: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232298: jr          $ra
    // 0x8023229C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023229C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233108_ovl10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233108: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023310C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233110: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233114: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80233118: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023311C: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80233120: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80233124: jal         0x8004FA7C
    // 0x80233128: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80233128: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x8023312C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x80233130: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80233134: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80233138: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8023313C: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x80233140: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80233144: beq         $v1, $zero, L_80233178
    if (ctx->r3 == 0) {
        // 0x80233148: nop
    
            goto L_80233178;
    }
    // 0x80233148: nop

    // 0x8023314C: jal         0x80233298
    // 0x80233150: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80233298_ovl10(rdram, ctx);
        goto after_1;
    // 0x80233150: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_1:
    // 0x80233154: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80233158: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x8023315C: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x80233160: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80233164: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80233168: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x8023316C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80233170: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x80233174: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_80233178:
    // 0x80233178: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8023317C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80233180: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80233184: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80233188: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023318C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233190: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233194: jr          $ra
    // 0x80233198: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233198: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802264CC_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802264CC: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802264D0: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x802264D4: bne         $v0, $zero, L_802264F4
    if (ctx->r2 != 0) {
        // 0x802264D8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_802264F4;
    }
    // 0x802264D8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802264DC: lw          $v0, 0x2C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X2C);
    // 0x802264E0: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x802264E4: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x802264E8: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x802264EC: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x802264F0: sb          $a0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r4;
L_802264F4:
    // 0x802264F4: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802264F8: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802264FC: bne         $v1, $v0, L_80226510
    if (ctx->r3 != ctx->r2) {
        // 0x80226500: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80226510;
    }
    // 0x80226500: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80226504: lw          $v1, 0x38($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X38);
    // 0x80226508: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x8022650C: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
L_80226510:
    // 0x80226510: bne         $v1, $v0, L_80226524
    if (ctx->r3 != ctx->r2) {
        // 0x80226514: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80226524;
    }
    // 0x80226514: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226518: lw          $v1, 0x40($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X40);
    // 0x8022651C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226520: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80226524:
    // 0x80226524: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80226528: addiu       $v0, $zero, 0x41
    ctx->r2 = ADD32(0, 0X41);
    // 0x8022652C: bne         $v1, $v0, L_80226540
    if (ctx->r3 != ctx->r2) {
        // 0x80226530: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226540;
    }
    // 0x80226530: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226534: lw          $v1, 0x34($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X34);
    // 0x80226538: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8022653C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80226540:
    // 0x80226540: jr          $ra
    // 0x80226544: nop

    TRACE_RETURN()
    return;
    // 0x80226544: nop

;}
RECOMP_FUNC void func_80227AE0_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227AE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227AE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227AE8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227AEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227AF0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80227AF4: bnel        $v0, $zero, L_80227B68
    if (ctx->r2 != 0) {
        // 0x80227AF8: addiu       $a0, $s0, 0x2C
        ctx->r4 = ADD32(ctx->r16, 0X2C);
            goto L_80227B68;
    }
    goto skip_0;
    // 0x80227AF8: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    skip_0:
    // 0x80227AFC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80227B00: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227B04: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227B08: jal         0x8004D5D4
    // 0x80227B0C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227B0C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227B10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227B14: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227B18: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80227B1C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227B20: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227B24: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227B28: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227B2C: jal         0x8003E934
    // 0x80227B30: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80227B30: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    after_1:
    // 0x80227B34: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227B38: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x80227B3C: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x80227B40: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227B44: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227B48: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x80227B4C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80227B50: jal         0x80050294
    // 0x80227B54: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80227B54: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x80227B58: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80227B5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227B60: j           L_80227B9C
    // 0x80227B64: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80227B9C;
    // 0x80227B64: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80227B68:
    // 0x80227B68: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80227B6C: jal         0x8009A3B4
    // 0x80227B70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80227B70: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80227B74: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80227B78: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80227B7C: jal         0x8009A3B4
    // 0x80227B80: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80227B80: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x80227B84: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80227B88: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80227B8C: jal         0x8009A3B4
    // 0x80227B90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80227B90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x80227B94: jal         0x8005044C
    // 0x80227B98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80227B98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80227B9C:
    // 0x80227B9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227BA0: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80227BA4: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80227BA8: jal         0x8003B564
    // 0x80227BAC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x80227BAC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x80227BB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227BB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227BB8: jr          $ra
    // 0x80227BBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227BBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229584_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229584: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229588: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022958C: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80229590: bne         $v0, $zero, L_802295B0
    if (ctx->r2 != 0) {
        // 0x80229594: nop
    
            goto L_802295B0;
    }
    // 0x80229594: nop

    // 0x80229598: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022959C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802295A0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802295A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802295A8: j           L_802295C4
    // 0x802295AC: lw          $v0, -0x49E0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X49E0);
        goto L_802295C4;
    // 0x802295AC: lw          $v0, -0x49E0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X49E0);
L_802295B0:
    // 0x802295B0: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802295B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802295B8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802295BC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802295C0: lw          $v0, -0x49D4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X49D4);
L_802295C4:
    // 0x802295C4: jalr        $v0
    // 0x802295C8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802295C8: nop

    after_0:
    // 0x802295CC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802295D0: jr          $ra
    // 0x802295D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802295D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802263A8_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802263A8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802263AC: bne         $v0, $zero, L_80226488
    if (ctx->r2 != 0) {
        // 0x802263B0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80226488;
    }
    // 0x802263B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802263B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802263B8: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802263BC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802263C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802263C4: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x802263C8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802263CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802263D0: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x802263D4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802263D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802263DC: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x802263E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802263E4: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x802263E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802263EC: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x802263F0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802263F4: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x802263F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802263FC: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226400: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226404: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226408: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022640C: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80226410: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80226414: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226418: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x8022641C: addiu       $t0, $t0, 0x4430
    ctx->r8 = ADD32(ctx->r8, 0X4430);
    // 0x80226420: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80226424: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226428: lbu         $v1, 0x0($t0)
    ctx->r3 = MEM_BU(ctx->r8, 0X0);
    // 0x8022642C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226430: lbu         $a0, 0x44A0($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X44A0);
    // 0x80226434: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80226438: lbu         $a1, 0x4510($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X4510);
    // 0x8022643C: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80226440: lbu         $a2, 0x4548($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X4548);
    // 0x80226444: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80226448: lbu         $a3, 0x4580($a3)
    ctx->r7 = MEM_BU(ctx->r7, 0X4580);
    // 0x8022644C: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
    // 0x80226450: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80226454: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x80226458: and         $a1, $a1, $v0
    ctx->r5 = ctx->r5 & ctx->r2;
    // 0x8022645C: and         $a2, $a2, $v0
    ctx->r6 = ctx->r6 & ctx->r2;
    // 0x80226460: and         $a3, $a3, $v0
    ctx->r7 = ctx->r7 & ctx->r2;
    // 0x80226464: sb          $v1, 0x0($t0)
    MEM_B(0X0, ctx->r8) = ctx->r3;
    // 0x80226468: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022646C: sb          $a0, 0x44A0($at)
    MEM_B(0X44A0, ctx->r1) = ctx->r4;
    // 0x80226470: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226474: sb          $a1, 0x4510($at)
    MEM_B(0X4510, ctx->r1) = ctx->r5;
    // 0x80226478: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022647C: sb          $a2, 0x4548($at)
    MEM_B(0X4548, ctx->r1) = ctx->r6;
    // 0x80226480: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226484: sb          $a3, 0x4580($at)
    MEM_B(0X4580, ctx->r1) = ctx->r7;
L_80226488:
    // 0x80226488: jr          $ra
    // 0x8022648C: nop

    TRACE_RETURN()
    return;
    // 0x8022648C: nop

;}
RECOMP_FUNC void func_80225F10_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225F10: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80225F14: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80225F18: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80225F1C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80225F20: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80225F24: lw          $v0, 0x10($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X10);
    // 0x80225F28: bne         $v0, $zero, L_802260D0
    if (ctx->r2 != 0) {
        // 0x80225F2C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802260D0;
    }
    // 0x80225F2C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225F30: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F34: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225F38: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80225F3C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F40: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225F44: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80225F48: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F4C: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80225F50: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225F54: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F58: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225F5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F60: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225F64: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F68: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225F6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F70: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225F74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F78: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225F7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F80: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225F84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F88: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225F8C: lw          $a0, 0x28($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X28);
    // 0x80225F90: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80225F94: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80225F98: sb          $v1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r3;
    // 0x80225F9C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80225FA0: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x80225FA4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225FA8: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80225FAC: lw          $a0, 0x2C($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X2C);
    // 0x80225FB0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80225FB4: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80225FB8: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x80225FBC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225FC0: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80225FC4: lw          $v1, 0x30($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X30);
    // 0x80225FC8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225FCC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225FD0: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
    // 0x80225FD4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225FD8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225FDC: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x80225FE0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225FE4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225FE8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225FEC: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80225FF0: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225FF4: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
    // 0x80225FF8: sb          $s0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r16;
    // 0x80225FFC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80226000: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226004: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226008: lw          $v1, 0x3C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X3C);
    // 0x8022600C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226010: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226014: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226018: lw          $v1, 0x40($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X40);
    // 0x8022601C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226020: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226024: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226028: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x8022602C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226030: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80226034: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80226038: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022603C: addiu       $v0, $zero, 0xB8
    ctx->r2 = ADD32(0, 0XB8);
    // 0x80226040: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80226044: addiu       $v0, $zero, -0x6E
    ctx->r2 = ADD32(0, -0X6E);
    // 0x80226048: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8022604C: addiu       $v0, $zero, 0x12C
    ctx->r2 = ADD32(0, 0X12C);
    // 0x80226050: jal         0x802295D8
    // 0x80226054: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_802295D8_ovl11(rdram, ctx);
        goto after_0;
    // 0x80226054: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x80226058: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022605C: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80226060: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80226064: addiu       $v0, $zero, 0x10E
    ctx->r2 = ADD32(0, 0X10E);
    // 0x80226068: jal         0x802295D8
    // 0x8022606C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_802295D8_ovl11(rdram, ctx);
        goto after_1;
    // 0x8022606C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x80226070: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80226074: addiu       $v0, $zero, 0x3F
    ctx->r2 = ADD32(0, 0X3F);
    // 0x80226078: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8022607C: addiu       $v0, $zero, 0xB4
    ctx->r2 = ADD32(0, 0XB4);
    // 0x80226080: jal         0x802295D8
    // 0x80226084: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_802295D8_ovl11(rdram, ctx);
        goto after_2;
    // 0x80226084: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x80226088: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022608C: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80226090: jal         0x802295D8
    // 0x80226094: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_802295D8_ovl11(rdram, ctx);
        goto after_3;
    // 0x80226094: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_3:
    // 0x80226098: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022609C: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x802260A0: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x802260A4: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x802260A8: jal         0x802295D8
    // 0x802260AC: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_802295D8_ovl11(rdram, ctx);
        goto after_4;
    // 0x802260AC: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_4:
    // 0x802260B0: lw          $v1, 0x48($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X48);
    // 0x802260B4: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x802260B8: sh          $v0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r2;
    // 0x802260BC: addiu       $v0, $zero, -0x46
    ctx->r2 = ADD32(0, -0X46);
    // 0x802260C0: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x802260C4: addiu       $v0, $zero, 0x7C
    ctx->r2 = ADD32(0, 0X7C);
    // 0x802260C8: sb          $s0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r16;
    // 0x802260CC: sh          $v0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r2;
L_802260D0:
    // 0x802260D0: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x802260D4: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802260D8: bne         $v1, $v0, L_802260EC
    if (ctx->r3 != ctx->r2) {
        // 0x802260DC: addiu       $v0, $zero, 0x5A
        ctx->r2 = ADD32(0, 0X5A);
            goto L_802260EC;
    }
    // 0x802260DC: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x802260E0: lw          $a0, 0x28($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X28);
    // 0x802260E4: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
    // 0x802260E8: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
L_802260EC:
    // 0x802260EC: bne         $v1, $v0, L_80226100
    if (ctx->r3 != ctx->r2) {
        // 0x802260F0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80226100;
    }
    // 0x802260F0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802260F4: lw          $v1, 0x40($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X40);
    // 0x802260F8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802260FC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80226100:
    // 0x80226100: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80226104: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80226108: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022610C: jr          $ra
    // 0x80226110: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226110: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80227274_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227274: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80227278: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x8022727C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227280: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227284: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227288: slti        $v0, $v1, 0x14
    ctx->r2 = SIGNED(ctx->r3) < 0X14 ? 1 : 0;
    // 0x8022728C: beq         $v0, $zero, L_802272D0
    if (ctx->r2 == 0) {
        // 0x80227290: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_802272D0;
    }
    // 0x80227290: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227294: lui         $a2, 0xFFFC
    ctx->r6 = S32(0XFFFC << 16);
    // 0x80227298: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022729C: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x802272A0: lhu         $a0, 0x14($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X14);
    // 0x802272A4: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x802272A8: ori         $a2, $a2, 0x6A7F
    ctx->r6 = ctx->r6 | 0X6A7F;
    // 0x802272AC: addiu       $v0, $v0, -0x3
    ctx->r2 = ADD32(ctx->r2, -0X3);
    // 0x802272B0: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x802272B4: addiu       $a0, $a0, -0x3
    ctx->r4 = ADD32(ctx->r4, -0X3);
    // 0x802272B8: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x802272BC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x802272C0: sw          $v1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r3;
    // 0x802272C4: sh          $a0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r4;
    // 0x802272C8: j           L_802272F8
    // 0x802272CC: sw          $a1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r5;
        goto L_802272F8;
    // 0x802272CC: sw          $a1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r5;
L_802272D0:
    // 0x802272D0: slti        $v0, $v1, 0x28
    ctx->r2 = SIGNED(ctx->r3) < 0X28 ? 1 : 0;
    // 0x802272D4: beq         $v0, $zero, L_802272F8
    if (ctx->r2 == 0) {
        // 0x802272D8: lui         $v0, 0xFFFE
        ctx->r2 = S32(0XFFFE << 16);
            goto L_802272F8;
    }
    // 0x802272D8: lui         $v0, 0xFFFE
    ctx->r2 = S32(0XFFFE << 16);
    // 0x802272DC: lhu         $v1, 0x18($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X18);
    // 0x802272E0: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x802272E4: ori         $v0, $v0, 0x6A7F
    ctx->r2 = ctx->r2 | 0X6A7F;
    // 0x802272E8: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x802272EC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802272F0: sh          $v1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r3;
    // 0x802272F4: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
L_802272F8:
    // 0x802272F8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802272FC: bne         $v0, $zero, L_80227320
    if (ctx->r2 != 0) {
        // 0x80227300: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227320;
    }
    // 0x80227300: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227304: lb          $a1, 0xD($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XD);
    // 0x80227308: jal         0x80050294
    // 0x8022730C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022730C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80227310: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227314: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227318: j           L_80227328
    // 0x8022731C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80227328;
    // 0x8022731C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80227320:
    // 0x80227320: jal         0x8005044C
    // 0x80227324: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80227324: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80227328:
    // 0x80227328: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022732C: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x80227330: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80227334: jal         0x8003B564
    // 0x80227338: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_2;
    // 0x80227338: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022733C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227340: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227344: jr          $ra
    // 0x80227348: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227348: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022990C_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022990C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80229910: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x80229914: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80229918: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8022991C: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x80229920: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x80229924: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x80229928: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8022992C: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80229930: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80229934: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x80229938: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8022993C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80229940: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229944: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80229948: lui         $s5, 0x8023
    ctx->r21 = S32(0X8023 << 16);
    // 0x8022994C: addu        $s5, $s5, $v0
    ctx->r21 = ADD32(ctx->r21, ctx->r2);
    // 0x80229950: lhu         $s5, -0x479C($s5)
    ctx->r21 = MEM_HU(ctx->r21, -0X479C);
    // 0x80229954: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x80229958: lui         $s6, 0x8023
    ctx->r22 = S32(0X8023 << 16);
    // 0x8022995C: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x80229960: lhu         $s6, -0x479A($s6)
    ctx->r22 = MEM_HU(ctx->r22, -0X479A);
    // 0x80229964: jal         0x800874D0
    // 0x80229968: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_800874D0_628D0(rdram, ctx);
        goto after_0;
    // 0x80229968: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_0:
    // 0x8022996C: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80229970: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x80229974: lh          $a2, 0x1A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1A);
    // 0x80229978: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022997C: addiu       $a0, $a0, -0x4610
    ctx->r4 = ADD32(ctx->r4, -0X4610);
    // 0x80229980: sll         $a3, $s6, 16
    ctx->r7 = S32(ctx->r22 << 16);
    // 0x80229984: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80229988: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022998C: lbu         $v1, -0x46F8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X46F8);
    // 0x80229990: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x80229994: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229998: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022999C: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x802299A0: jal         0x80086F94
    // 0x802299A4: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80086F94_62394(rdram, ctx);
        goto after_1;
    // 0x802299A4: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_1:
    // 0x802299A8: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x802299AC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x802299B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802299B4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802299B8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802299BC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802299C0: lhu         $v0, -0x4798($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X4798);
    // 0x802299C4: beq         $v0, $zero, L_80229BE0
    if (ctx->r2 == 0) {
        // 0x802299C8: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_80229BE0;
    }
    // 0x802299C8: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
L_802299CC:
    // 0x802299CC: bgez        $s6, L_802299D8
    if (SIGNED(ctx->r22) >= 0) {
        // 0x802299D0: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_802299D8;
    }
    // 0x802299D0: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x802299D4: addiu       $v0, $s6, 0xF
    ctx->r2 = ADD32(ctx->r22, 0XF);
L_802299D8:
    // 0x802299D8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802299DC: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802299E0: beq         $v0, $zero, L_80229C9C
    if (ctx->r2 == 0) {
        // 0x802299E4: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_80229C9C;
    }
    // 0x802299E4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x802299E8: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x802299EC: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x802299F0: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x802299F4: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x802299F8: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x802299FC: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80229A00: jal         0x800874D0
    // 0x80229A04: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_2;
    // 0x80229A04: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_2:
    // 0x80229A08: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80229A0C: jal         0x80087248
    // 0x80229A10: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_3;
    // 0x80229A10: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_3:
    // 0x80229A14: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80229A18: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80229A1C: lh          $v0, 0x18($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X18);
    // 0x80229A20: lh          $a0, 0x1A($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X1A);
    // 0x80229A24: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x80229A28: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80229A2C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80229A30: jal         0x800874D0
    // 0x80229A34: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_4;
    // 0x80229A34: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_4:
    // 0x80229A38: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80229A3C: jal         0x80087248
    // 0x80229A40: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_5;
    // 0x80229A40: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_5:
    // 0x80229A44: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x80229A48: bgez        $s5, L_80229A54
    if (SIGNED(ctx->r21) >= 0) {
        // 0x80229A4C: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_80229A54;
    }
    // 0x80229A4C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80229A50: addiu       $v1, $s5, 0xFF
    ctx->r3 = ADD32(ctx->r21, 0XFF);
L_80229A54:
    // 0x80229A54: addu        $a0, $s5, $s0
    ctx->r4 = ADD32(ctx->r21, ctx->r16);
    // 0x80229A58: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80229A5C: jal         0x800874D0
    // 0x80229A60: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_6;
    // 0x80229A60: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_6:
    // 0x80229A64: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80229A68: jal         0x80087248
    // 0x80229A6C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_7;
    // 0x80229A6C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_7:
    // 0x80229A70: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80229A74: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x80229A78: sltiu       $v1, $s2, 0x1
    ctx->r3 = ctx->r18 < 0X1 ? 1 : 0;
    // 0x80229A7C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80229A80: bnel        $v0, $zero, L_802299CC
    if (ctx->r2 != 0) {
        // 0x80229A84: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_802299CC;
    }
    goto skip_0;
    // 0x80229A84: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x80229A88: beq         $a1, $zero, L_80229BD8
    if (ctx->r5 == 0) {
        // 0x80229A8C: addu        $t7, $zero, $zero
        ctx->r15 = ADD32(0, 0);
            goto L_80229BD8;
    }
    // 0x80229A8C: addu        $t7, $zero, $zero
    ctx->r15 = ADD32(0, 0);
    // 0x80229A90: addu        $t6, $a1, $zero
    ctx->r14 = ADD32(ctx->r5, 0);
    // 0x80229A94: addu        $t5, $s2, $zero
    ctx->r13 = ADD32(ctx->r18, 0);
    // 0x80229A98: addu        $t4, $s1, $zero
    ctx->r12 = ADD32(ctx->r17, 0);
L_80229A9C:
    // 0x80229A9C: lhu         $t1, 0x0($t4)
    ctx->r9 = MEM_HU(ctx->r12, 0X0);
    // 0x80229AA0: lhu         $v1, 0x0($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0X0);
    // 0x80229AA4: lb          $t3, 0xD($s3)
    ctx->r11 = MEM_B(ctx->r19, 0XD);
    // 0x80229AA8: andi        $a2, $t1, 0xFFFF
    ctx->r6 = ctx->r9 & 0XFFFF;
    // 0x80229AAC: srl         $t2, $a2, 11
    ctx->r10 = S32(U32(ctx->r6) >> 11);
    // 0x80229AB0: srl         $a3, $v1, 11
    ctx->r7 = S32(U32(ctx->r3) >> 11);
    // 0x80229AB4: subu        $a3, $a3, $t2
    ctx->r7 = SUB32(ctx->r7, ctx->r10);
    // 0x80229AB8: mult        $a3, $t3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229ABC: mflo        $a3
    ctx->r7 = lo;
    // 0x80229AC0: lb          $a1, 0xC($s3)
    ctx->r5 = MEM_B(ctx->r19, 0XC);
    // 0x80229AC4: nop

    // 0x80229AC8: div         $zero, $a3, $a1
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r5)));
    // 0x80229ACC: bne         $a1, $zero, L_80229AD8
    if (ctx->r5 != 0) {
        // 0x80229AD0: nop
    
            goto L_80229AD8;
    }
    // 0x80229AD0: nop

    // 0x80229AD4: break       7
    do_break(2149751508);
L_80229AD8:
    // 0x80229AD8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80229ADC: bne         $a1, $at, L_80229AF0
    if (ctx->r5 != ctx->r1) {
        // 0x80229AE0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80229AF0;
    }
    // 0x80229AE0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80229AE4: bne         $a3, $at, L_80229AF0
    if (ctx->r7 != ctx->r1) {
        // 0x80229AE8: nop
    
            goto L_80229AF0;
    }
    // 0x80229AE8: nop

    // 0x80229AEC: break       6
    do_break(2149751532);
L_80229AF0:
    // 0x80229AF0: mflo        $a3
    ctx->r7 = lo;
    // 0x80229AF4: sra         $t0, $a2, 6
    ctx->r8 = S32(SIGNED(ctx->r6) >> 6);
    // 0x80229AF8: andi        $t0, $t0, 0x1F
    ctx->r8 = ctx->r8 & 0X1F;
    // 0x80229AFC: sra         $v0, $v1, 6
    ctx->r2 = S32(SIGNED(ctx->r3) >> 6);
    // 0x80229B00: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80229B04: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x80229B08: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229B0C: mflo        $v0
    ctx->r2 = lo;
    // 0x80229B10: nop

    // 0x80229B14: nop

    // 0x80229B18: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x80229B1C: bne         $a1, $zero, L_80229B28
    if (ctx->r5 != 0) {
        // 0x80229B20: nop
    
            goto L_80229B28;
    }
    // 0x80229B20: nop

    // 0x80229B24: break       7
    do_break(2149751588);
L_80229B28:
    // 0x80229B28: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80229B2C: bne         $a1, $at, L_80229B40
    if (ctx->r5 != ctx->r1) {
        // 0x80229B30: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80229B40;
    }
    // 0x80229B30: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80229B34: bne         $v0, $at, L_80229B40
    if (ctx->r2 != ctx->r1) {
        // 0x80229B38: nop
    
            goto L_80229B40;
    }
    // 0x80229B38: nop

    // 0x80229B3C: break       6
    do_break(2149751612);
L_80229B40:
    // 0x80229B40: mflo        $v0
    ctx->r2 = lo;
    // 0x80229B44: sra         $a2, $a2, 1
    ctx->r6 = S32(SIGNED(ctx->r6) >> 1);
    // 0x80229B48: andi        $a2, $a2, 0x1F
    ctx->r6 = ctx->r6 & 0X1F;
    // 0x80229B4C: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80229B50: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80229B54: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x80229B58: mult        $v1, $t3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80229B5C: mflo        $v1
    ctx->r3 = lo;
    // 0x80229B60: nop

    // 0x80229B64: nop

    // 0x80229B68: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x80229B6C: bne         $a1, $zero, L_80229B78
    if (ctx->r5 != 0) {
        // 0x80229B70: nop
    
            goto L_80229B78;
    }
    // 0x80229B70: nop

    // 0x80229B74: break       7
    do_break(2149751668);
L_80229B78:
    // 0x80229B78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80229B7C: bne         $a1, $at, L_80229B90
    if (ctx->r5 != ctx->r1) {
        // 0x80229B80: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80229B90;
    }
    // 0x80229B80: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80229B84: bne         $v1, $at, L_80229B90
    if (ctx->r3 != ctx->r1) {
        // 0x80229B88: nop
    
            goto L_80229B90;
    }
    // 0x80229B88: nop

    // 0x80229B8C: break       6
    do_break(2149751692);
L_80229B90:
    // 0x80229B90: mflo        $v1
    ctx->r3 = lo;
    // 0x80229B94: addiu       $t5, $t5, 0x2
    ctx->r13 = ADD32(ctx->r13, 0X2);
    // 0x80229B98: addiu       $t4, $t4, 0x2
    ctx->r12 = ADD32(ctx->r12, 0X2);
    // 0x80229B9C: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    // 0x80229BA0: andi        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 & 0X1;
    // 0x80229BA4: addu        $t2, $t2, $a3
    ctx->r10 = ADD32(ctx->r10, ctx->r7);
    // 0x80229BA8: sll         $t2, $t2, 11
    ctx->r10 = S32(ctx->r10 << 11);
    // 0x80229BAC: or          $t1, $t1, $t2
    ctx->r9 = ctx->r9 | ctx->r10;
    // 0x80229BB0: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x80229BB4: sll         $t0, $t0, 6
    ctx->r8 = S32(ctx->r8 << 6);
    // 0x80229BB8: or          $t1, $t1, $t0
    ctx->r9 = ctx->r9 | ctx->r8;
    // 0x80229BBC: slti        $v0, $t7, 0x10
    ctx->r2 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x80229BC0: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x80229BC4: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x80229BC8: or          $t1, $t1, $a2
    ctx->r9 = ctx->r9 | ctx->r6;
    // 0x80229BCC: sh          $t1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r9;
    // 0x80229BD0: bne         $v0, $zero, L_80229A9C
    if (ctx->r2 != 0) {
        // 0x80229BD4: addiu       $t6, $t6, 0x2
        ctx->r14 = ADD32(ctx->r14, 0X2);
            goto L_80229A9C;
    }
    // 0x80229BD4: addiu       $t6, $t6, 0x2
    ctx->r14 = ADD32(ctx->r14, 0X2);
L_80229BD8:
    // 0x80229BD8: j           L_802299CC
    // 0x80229BDC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_802299CC;
    // 0x80229BDC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80229BE0:
    // 0x80229BE0: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x80229BE4: bne         $v0, $zero, L_80229C9C
    if (ctx->r2 != 0) {
        // 0x80229BE8: nop
    
            goto L_80229C9C;
    }
    // 0x80229BE8: nop

L_80229BEC:
    // 0x80229BEC: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x80229BF0: bltzl       $v0, L_80229BF8
    if (SIGNED(ctx->r2) < 0) {
        // 0x80229BF4: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_80229BF8;
    }
    goto skip_1;
    // 0x80229BF4: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_1:
L_80229BF8:
    // 0x80229BF8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80229BFC: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80229C00: beq         $v0, $zero, L_80229C9C
    if (ctx->r2 == 0) {
        // 0x80229C04: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_80229C9C;
    }
    // 0x80229C04: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80229C08: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x80229C0C: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x80229C10: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x80229C14: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x80229C18: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x80229C1C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80229C20: jal         0x800874D0
    // 0x80229C24: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_8;
    // 0x80229C24: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_8:
    // 0x80229C28: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80229C2C: jal         0x80087248
    // 0x80229C30: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_9;
    // 0x80229C30: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_9:
    // 0x80229C34: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80229C38: bgez        $s5, L_80229C44
    if (SIGNED(ctx->r21) >= 0) {
        // 0x80229C3C: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_80229C44;
    }
    // 0x80229C3C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80229C40: addiu       $v0, $s5, 0xFF
    ctx->r2 = ADD32(ctx->r21, 0XFF);
L_80229C44:
    // 0x80229C44: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x80229C48: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80229C4C: subu        $v1, $s5, $v0
    ctx->r3 = SUB32(ctx->r21, ctx->r2);
    // 0x80229C50: addu        $a0, $s0, $v1
    ctx->r4 = ADD32(ctx->r16, ctx->r3);
    // 0x80229C54: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80229C58: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80229C5C: jal         0x800874D0
    // 0x80229C60: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_10;
    // 0x80229C60: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_10:
    // 0x80229C64: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x80229C68: jal         0x80087248
    // 0x80229C6C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_11;
    // 0x80229C6C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_11:
    // 0x80229C70: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80229C74: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x80229C78: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x80229C7C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80229C80: bnel        $v0, $zero, L_80229BEC
    if (ctx->r2 != 0) {
        // 0x80229C84: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_80229BEC;
    }
    goto skip_2;
    // 0x80229C84: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_2:
    // 0x80229C88: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229C8C: jal         0x80099F90
    // 0x80229C90: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    bcopy_recomp(rdram, ctx);
        goto after_12;
    // 0x80229C90: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_12:
    // 0x80229C94: j           L_80229BEC
    // 0x80229C98: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_80229BEC;
    // 0x80229C98: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_80229C9C:
    // 0x80229C9C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x80229CA0: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x80229CA4: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x80229CA8: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x80229CAC: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x80229CB0: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80229CB4: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80229CB8: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80229CBC: jr          $ra
    // 0x80229CC0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x80229CC0: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80228B10_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228B10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228B14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228B18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228B1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228B20: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228B24: bne         $v0, $zero, L_80228B40
    if (ctx->r2 != 0) {
        // 0x80228B28: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_80228B40;
    }
    // 0x80228B28: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228B2C: jal         0x80050294
    // 0x80228B30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228B30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228B34: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228B38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228B3C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228B40:
    // 0x80228B40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228B44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228B48: jr          $ra
    // 0x80228B4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228B4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225150_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225154: addiu       $v0, $v0, -0x60A8
    ctx->r2 = ADD32(ctx->r2, -0X60A8);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225164: addiu       $v0, $v0, -0x5FF8
    ctx->r2 = ADD32(ctx->r2, -0X5FF8);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225174: addiu       $v0, $v0, -0x5FC8
    ctx->r2 = ADD32(ctx->r2, -0X5FC8);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225184: addiu       $v0, $v0, -0x5FC4
    ctx->r2 = ADD32(ctx->r2, -0X5FC4);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225194: addiu       $v0, $v0, -0x5F8C
    ctx->r2 = ADD32(ctx->r2, -0X5F8C);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802251A4: addiu       $v0, $v0, -0x5F78
    ctx->r2 = ADD32(ctx->r2, -0X5F78);
    // 0x802251A8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802251AC: jr          $ra
    // 0x802251B0: sw          $v0, -0x2344($at)
    MEM_W(-0X2344, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802251B0: sw          $v0, -0x2344($at)
    MEM_W(-0X2344, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_802298A8_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802298A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802298AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802298B0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802298B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802298B8: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x802298BC: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x802298C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802298C4: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x802298C8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802298CC: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802298D0: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802298D4: beq         $v1, $zero, L_802298F4
    if (ctx->r3 == 0) {
        // 0x802298D8: nop
    
            goto L_802298F4;
    }
    // 0x802298D8: nop

    // 0x802298DC: jal         0x80229CC4
    // 0x802298E0: nop

    func_80229CC4_ovl11(rdram, ctx);
        goto after_0;
    // 0x802298E0: nop

    after_0:
    // 0x802298E4: beq         $v0, $zero, L_802298F4
    if (ctx->r2 == 0) {
        // 0x802298E8: nop
    
            goto L_802298F4;
    }
    // 0x802298E8: nop

    // 0x802298EC: jal         0x8004F62C
    // 0x802298F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x802298F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_802298F4:
    // 0x802298F4: jal         0x8022990C
    // 0x802298F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022990C_ovl11(rdram, ctx);
        goto after_2;
    // 0x802298F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802298FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229900: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229904: jr          $ra
    // 0x80229908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229908: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802279A0_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802279A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802279A4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802279A8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802279AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802279B0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802279B4: bne         $v0, $zero, L_802279D0
    if (ctx->r2 != 0) {
        // 0x802279B8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_802279D0;
    }
    // 0x802279B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802279BC: jal         0x80050294
    // 0x802279C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802279C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802279C4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802279C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802279CC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802279D0:
    // 0x802279D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802279D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802279D8: jr          $ra
    // 0x802279DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802279DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227690_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227690: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227694: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227698: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022769C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802276A0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802276A4: bne         $v0, $zero, L_802276D0
    if (ctx->r2 != 0) {
        // 0x802276A8: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_802276D0;
    }
    // 0x802276A8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802276AC: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x802276B0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802276B4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802276B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802276BC: jal         0x80050294
    // 0x802276C0: sb          $v0, 0x100($s0)
    MEM_B(0X100, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802276C0: sb          $v0, 0x100($s0)
    MEM_B(0X100, ctx->r16) = ctx->r2;
    after_0:
    // 0x802276C4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802276C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802276CC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802276D0:
    // 0x802276D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802276D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802276D8: jr          $ra
    // 0x802276DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802276DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022692C_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022692C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80226930: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226934: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80226938: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022693C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80226940: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226944: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226948: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x8022694C: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x80226950: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x80226954: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80226958: beq         $v0, $zero, L_80226B94
    if (ctx->r2 == 0) {
        // 0x8022695C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80226B94;
    }
    // 0x8022695C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226960: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226964: addu        $at, $at, $v0
    gpr jr_addend_8022696C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226968: lw          $v0, -0x46B8($at)
    ctx->r2 = ADD32(ctx->r1, -0X46B8);
    // 0x8022696C: jr          $v0
    // 0x80226970: nop

    switch (jr_addend_8022696C >> 2) {
        case 0: goto L_80226974; break;
        case 1: goto L_802269C0; break;
        case 2: goto L_802269DC; break;
        case 3: goto L_80226A04; break;
        case 4: goto L_80226A60; break;
        case 5: goto L_80226AA8; break;
        default: switch_error(__func__, 0x8022696C, 0x8022B948);
    }
    // 0x80226970: nop

L_80226974:
    // 0x80226974: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226978: jal         0x8006FF84
    // 0x8022697C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x8022697C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_0:
    // 0x80226980: beq         $v0, $zero, L_80226B94
    if (ctx->r2 == 0) {
        // 0x80226984: lui         $a0, 0x10D
        ctx->r4 = S32(0X10D << 16);
            goto L_80226B94;
    }
    // 0x80226984: lui         $a0, 0x10D
    ctx->r4 = S32(0X10D << 16);
    // 0x80226988: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x8022698C: lbu         $a1, 0x0($s3)
    ctx->r5 = MEM_BU(ctx->r19, 0X0);
    // 0x80226990: ori         $a0, $a0, 0x3501
    ctx->r4 = ctx->r4 | 0X3501;
    // 0x80226994: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226998: sb          $v0, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r2;
    // 0x8022699C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802269A0: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
    // 0x802269A4: ori         $v1, $v1, 0x10
    ctx->r3 = ctx->r3 | 0X10;
    // 0x802269A8: andi        $a1, $a1, 0xFC
    ctx->r5 = ctx->r5 & 0XFC;
    // 0x802269AC: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    // 0x802269B0: jal         0x80036B1C
    // 0x802269B4: sb          $a1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r5;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_1;
    // 0x802269B4: sb          $a1, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r5;
    after_1:
    // 0x802269B8: j           L_802269F4
    // 0x802269BC: nop

        goto L_802269F4;
    // 0x802269BC: nop

L_802269C0:
    // 0x802269C0: jal         0x80036B7C
    // 0x802269C4: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_2;
    // 0x802269C4: nop

    after_2:
    // 0x802269C8: beq         $v0, $zero, L_80226B94
    if (ctx->r2 == 0) {
        // 0x802269CC: addiu       $v1, $zero, 0x19
        ctx->r3 = ADD32(0, 0X19);
            goto L_80226B94;
    }
    // 0x802269CC: addiu       $v1, $zero, 0x19
    ctx->r3 = ADD32(0, 0X19);
    // 0x802269D0: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x802269D4: j           L_802269F8
    // 0x802269D8: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
        goto L_802269F8;
    // 0x802269D8: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
L_802269DC:
    // 0x802269DC: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x802269E0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802269E4: bne         $v0, $zero, L_80226B94
    if (ctx->r2 != 0) {
        // 0x802269E8: sw          $v0, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->r2;
            goto L_80226B94;
    }
    // 0x802269E8: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x802269EC: jal         0x80036E48
    // 0x802269F0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x802269F0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_3:
L_802269F4:
    // 0x802269F4: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
L_802269F8:
    // 0x802269F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802269FC: j           L_80226B94
    // 0x80226A00: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_80226B94;
    // 0x80226A00: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80226A04:
    // 0x80226A04: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226A08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226A0C: jal         0x8005F6B4
    // 0x80226A10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_4;
    // 0x80226A10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80226A14: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80226A18: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80226A1C: addiu       $s0, $s0, -0x52A0
    ctx->r16 = ADD32(ctx->r16, -0X52A0);
    // 0x80226A20: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226A24: addiu       $v0, $v0, -0x51EC
    ctx->r2 = ADD32(ctx->r2, -0X51EC);
    // 0x80226A28: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226A2C: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80226A30: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226A34: addiu       $v0, $v0, -0x504C
    ctx->r2 = ADD32(ctx->r2, -0X504C);
    // 0x80226A38: sw          $v0, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = ctx->r2;
L_80226A3C:
    // 0x80226A3C: jal         0x8005FA7C
    // 0x80226A40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_5;
    // 0x80226A40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80226A44: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80226A48: slti        $v0, $s1, 0xA
    ctx->r2 = SIGNED(ctx->r17) < 0XA ? 1 : 0;
    // 0x80226A4C: bne         $v0, $zero, L_80226A3C
    if (ctx->r2 != 0) {
        // 0x80226A50: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_80226A3C;
    }
    // 0x80226A50: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x80226A54: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80226A58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226A5C: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80226A60:
    // 0x80226A60: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226A64: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226A68: bne         $v0, $zero, L_80226AA8
    if (ctx->r2 != 0) {
        // 0x80226A6C: nop
    
            goto L_80226AA8;
    }
    // 0x80226A6C: nop

    // 0x80226A70: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x80226A74: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80226A78: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226A7C: beq         $v1, $v0, L_80226A94
    if (ctx->r3 == ctx->r2) {
        // 0x80226A80: nop
    
            goto L_80226A94;
    }
    // 0x80226A80: nop

    // 0x80226A84: jal         0x8006072C
    // 0x80226A88: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_6;
    // 0x80226A88: nop

    after_6:
    // 0x80226A8C: beq         $v0, $zero, L_80226AA8
    if (ctx->r2 == 0) {
        // 0x80226A90: nop
    
            goto L_80226AA8;
    }
    // 0x80226A90: nop

L_80226A94:
    // 0x80226A94: jal         0x80036E48
    // 0x80226A98: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_7;
    // 0x80226A98: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_7:
    // 0x80226A9C: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80226AA0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226AA4: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80226AA8:
    // 0x80226AA8: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x80226AAC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226AB0: beq         $v1, $v0, L_80226AC8
    if (ctx->r3 == ctx->r2) {
        // 0x80226AB4: nop
    
            goto L_80226AC8;
    }
    // 0x80226AB4: nop

    // 0x80226AB8: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x80226ABC: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80226AC0: jalr        $v0
    // 0x80226AC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x80226AC4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_8:
L_80226AC8:
    // 0x80226AC8: jal         0x8005FB90
    // 0x80226ACC: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_9;
    // 0x80226ACC: nop

    after_9:
    // 0x80226AD0: jal         0x80060018
    // 0x80226AD4: nop

    func_80060018_3B418(rdram, ctx);
        goto after_10;
    // 0x80226AD4: nop

    after_10:
    // 0x80226AD8: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x80226ADC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226AE0: bne         $v1, $v0, L_80226B94
    if (ctx->r3 != ctx->r2) {
        // 0x80226AE4: nop
    
            goto L_80226B94;
    }
    // 0x80226AE4: nop

    // 0x80226AE8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226AEC: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226AF0: bne         $v0, $zero, L_80226B94
    if (ctx->r2 != 0) {
        // 0x80226AF4: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80226B94;
    }
    // 0x80226AF4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226AF8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226AFC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226B00: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80226B04: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80226B08: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B0C: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80226B10: addiu       $v0, $zero, 0x708
    ctx->r2 = ADD32(0, 0X708);
    // 0x80226B14: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B18: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80226B1C: addiu       $v0, $zero, -0x81
    ctx->r2 = ADD32(0, -0X81);
    // 0x80226B20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B24: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80226B28: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80226B2C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B30: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x80226B34: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80226B38: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B3C: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x80226B40: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226B44: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B48: sb          $v1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r3;
    // 0x80226B4C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B50: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x80226B54: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B58: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226B5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B60: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226B64: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226B68: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
    // 0x80226B6C: jal         0x80036B00
    // 0x80226B70: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    func_80036B00_11F00(rdram, ctx);
        goto after_11;
    // 0x80226B70: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    after_11:
    // 0x80226B74: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80226B78: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226B7C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80226B80: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80226B84: jal         0x80070050
    // 0x80226B88: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    func_80070050_4B450(rdram, ctx);
        goto after_12;
    // 0x80226B88: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    after_12:
    // 0x80226B8C: jal         0x8006036C
    // 0x80226B90: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    func_8006036C_3B76C(rdram, ctx);
        goto after_13;
    // 0x80226B90: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    after_13:
L_80226B94:
    // 0x80226B94: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80226B98: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80226B9C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226BA0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226BA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226BA8: jr          $ra
    // 0x80226BAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226BAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802285A4_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802285A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802285A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802285AC: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x802285B0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802285B4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802285B8: lb          $v0, 0xA($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA);
    // 0x802285BC: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x802285C0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802285C4: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x802285C8: lb          $a0, 0x1($v1)
    ctx->r4 = MEM_B(ctx->r3, 0X1);
    // 0x802285CC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802285D0: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x802285D4: beq         $a0, $v0, L_802285F0
    if (ctx->r4 == ctx->r2) {
        // 0x802285D8: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_802285F0;
    }
    // 0x802285D8: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x802285DC: bne         $a0, $v0, L_802285EC
    if (ctx->r4 != ctx->r2) {
        // 0x802285E0: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_802285EC;
    }
    // 0x802285E0: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x802285E4: j           L_802285F0
    // 0x802285E8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_802285F0;
    // 0x802285E8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802285EC:
    // 0x802285EC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802285F0:
    // 0x802285F0: lb          $v1, 0xA($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA);
    // 0x802285F4: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x802285F8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802285FC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80228600: lb          $v1, 0x9($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X9);
    // 0x80228604: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80228608: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022860C: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80228610: beq         $a0, $v1, L_80228638
    if (ctx->r4 == ctx->r3) {
        // 0x80228614: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_80228638;
    }
    // 0x80228614: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80228618: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8022861C: jal         0x8003B85C
    // 0x80228620: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80228620: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80228624: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80228628: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x8022862C: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80228630: jal         0x8003B840
    // 0x80228634: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80228634: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80228638:
    // 0x80228638: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    // 0x8022863C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80228640: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80228644: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80228648: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022864C: lb          $v1, 0x1($v0)
    ctx->r3 = MEM_B(ctx->r2, 0X1);
    // 0x80228650: addiu       $v0, $zero, 0x7E
    ctx->r2 = ADD32(0, 0X7E);
    // 0x80228654: beq         $v1, $v0, L_80228670
    if (ctx->r3 == ctx->r2) {
        // 0x80228658: addiu       $v0, $zero, 0x7F
        ctx->r2 = ADD32(0, 0X7F);
            goto L_80228670;
    }
    // 0x80228658: addiu       $v0, $zero, 0x7F
    ctx->r2 = ADD32(0, 0X7F);
    // 0x8022865C: bne         $v1, $v0, L_8022866C
    if (ctx->r3 != ctx->r2) {
        // 0x80228660: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022866C;
    }
    // 0x80228660: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80228664: j           L_80228670
    // 0x80228668: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
        goto L_80228670;
    // 0x80228668: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_8022866C:
    // 0x8022866C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80228670:
    // 0x80228670: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80228674: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80228678: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022867C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80228680: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80228684: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x80228688: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022868C: sra         $a0, $v0, 24
    ctx->r4 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80228690: beq         $a0, $v1, L_802286B8
    if (ctx->r4 == ctx->r3) {
        // 0x80228694: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_802286B8;
    }
    // 0x80228694: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80228698: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x8022869C: jal         0x8003B85C
    // 0x802286A0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x802286A0: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x802286A4: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x802286A8: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x802286AC: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x802286B0: jal         0x8003B840
    // 0x802286B4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x802286B4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_802286B8:
    // 0x802286B8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802286BC: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802286C0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802286C4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802286C8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802286CC: jr          $ra
    // 0x802286D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802286D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x802286D4: nop

    // 0x802286D8: nop

    // 0x802286DC: nop

;}
RECOMP_FUNC void func_80229820_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229824: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229828: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022982C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229830: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80229834: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229838: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022983C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229840: lw          $v0, -0x4808($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4808);
    // 0x80229844: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80229848: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x8022984C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80229850: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x80229854: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80229858: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022985C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80229860: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80229864: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x80229868: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022986C: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x80229870: jal         0x80229CC4
    // 0x80229874: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    func_80229CC4_ovl11(rdram, ctx);
        goto after_0;
    // 0x80229874: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    after_0:
    // 0x80229878: beq         $v0, $zero, L_8022988C
    if (ctx->r2 == 0) {
        // 0x8022987C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022988C;
    }
    // 0x8022987C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229880: jal         0x8004F62C
    // 0x80229884: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x80229884: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80229888: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022988C:
    // 0x8022988C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80229890: jal         0x8022990C
    // 0x80229894: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022990C_ovl11(rdram, ctx);
        goto after_2;
    // 0x80229894: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80229898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022989C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802298A0: jr          $ra
    // 0x802298A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802298A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022964C_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022964C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229650: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229654: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229658: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022965C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80229660: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80229664: ori         $v1, $v1, 0x2E
    ctx->r3 = ctx->r3 | 0X2E;
    // 0x80229668: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022966C: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    // 0x80229670: ori         $v0, $v0, 0x22
    ctx->r2 = ctx->r2 | 0X22;
    // 0x80229674: jal         0x800A3450
    // 0x80229678: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80229678: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022967C: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80229680: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80229684: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80229688: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x8022968C: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x80229690: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x80229694: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229698: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x8022969C: sh          $zero, 0x26($s0)
    MEM_H(0X26, ctx->r16) = 0;
    // 0x802296A0: sw          $v0, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r2;
    // 0x802296A4: sh          $zero, 0x3E($s0)
    MEM_H(0X3E, ctx->r16) = 0;
    // 0x802296A8: sh          $zero, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = 0;
    // 0x802296AC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802296B0: jal         0x80229430
    // 0x802296B4: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    func_80229430_ovl11(rdram, ctx);
        goto after_1;
    // 0x802296B4: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    after_1:
    // 0x802296B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802296BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802296C0: jr          $ra
    // 0x802296C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802296C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802290C4_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802290C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802290C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802290CC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802290D0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802290D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802290D8: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x802290DC: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802290E0: bne         $v0, $zero, L_8022916C
    if (ctx->r2 != 0) {
        // 0x802290E4: nop
    
            goto L_8022916C;
    }
    // 0x802290E4: nop

    // 0x802290E8: jal         0x8004F144
    // 0x802290EC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802290EC: nop

    after_0:
    // 0x802290F0: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802290F4: beq         $s0, $zero, L_8022916C
    if (ctx->r16 == 0) {
        // 0x802290F8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022916C;
    }
    // 0x802290F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802290FC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80229100: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80229104: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80229108: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022910C: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80229110: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x80229114: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x80229118: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022911C: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80229120: lhu         $v0, 0x20($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X20);
    // 0x80229124: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x80229128: lhu         $v0, 0x1C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X1C);
    // 0x8022912C: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80229130: ori         $v1, $v1, 0xE
    ctx->r3 = ctx->r3 | 0XE;
    // 0x80229134: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x80229138: lhu         $a0, 0x1E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1E);
    // 0x8022913C: lui         $v0, 0x2E80
    ctx->r2 = S32(0X2E80 << 16);
    // 0x80229140: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80229144: sw          $v0, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r2;
    // 0x80229148: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022914C: sw          $v1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r3;
    // 0x80229150: sb          $v0, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r2;
    // 0x80229154: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x80229158: jal         0x800A3450
    // 0x8022915C: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022915C: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    after_1:
    // 0x80229160: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80229164: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80229168: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_8022916C:
    // 0x8022916C: lbu         $v0, 0x9($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X9);
    // 0x80229170: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229174: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x80229178: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022917C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229180: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229184: jr          $ra
    // 0x80229188: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229188: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228DD0_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228DD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228DD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228DD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228DDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228DE0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228DE4: bne         $v0, $zero, L_80228E00
    if (ctx->r2 != 0) {
        // 0x80228DE8: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_80228E00;
    }
    // 0x80228DE8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80228DEC: jal         0x80050294
    // 0x80228DF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228DF0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228DF4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228DF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228DFC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228E00:
    // 0x80228E00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228E04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228E08: jr          $ra
    // 0x80228E0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228E0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225D50_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D50: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225D54: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D58: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225D5C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80225D60: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D64: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225D68: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225D6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D70: sb          $a0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r4;
    // 0x80225D74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D78: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225D7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D80: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225D84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D88: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225D8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D90: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225D94: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225D98: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225D9C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DA0: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225DA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DA8: jr          $ra
    // 0x80225DAC: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80225DAC: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_80226DE8_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226DE8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226DEC: bne         $v0, $zero, L_80226E00
    if (ctx->r2 != 0) {
        // 0x80226DF0: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_80226E00;
    }
    // 0x80226DF0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80226DF4: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226DF8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226DFC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80226E00:
    // 0x80226E00: jr          $ra
    // 0x80226E04: nop

    TRACE_RETURN()
    return;
    // 0x80226E04: nop

;}
RECOMP_FUNC void func_80229384_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229384: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229388: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022938C: lbu         $v1, -0x3A48($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3A48);
    // 0x80229390: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80229394: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229398: bne         $v1, $v0, L_802293BC
    if (ctx->r3 != ctx->r2) {
        // 0x8022939C: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_802293BC;
    }
    // 0x8022939C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802293A0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802293A4: lw          $v0, -0x3A40($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A40);
    // 0x802293A8: blez        $v0, L_802293BC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802293AC: nop
    
            goto L_802293BC;
    }
    // 0x802293AC: nop

    // 0x802293B0: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x802293B4: j           L_802293C4
    // 0x802293B8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
        goto L_802293C4;
    // 0x802293B8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_802293BC:
    // 0x802293BC: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x802293C0: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
L_802293C4:
    // 0x802293C4: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x802293C8: lb          $v0, 0xE($a1)
    ctx->r2 = MEM_B(ctx->r5, 0XE);
    // 0x802293CC: blez        $v0, L_80229418
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802293D0: lui         $v0, 0xFFFD
        ctx->r2 = S32(0XFFFD << 16);
            goto L_80229418;
    }
    // 0x802293D0: lui         $v0, 0xFFFD
    ctx->r2 = S32(0XFFFD << 16);
    // 0x802293D4: lw          $v1, 0x18($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X18);
    // 0x802293D8: lb          $a0, 0xE($a1)
    ctx->r4 = MEM_B(ctx->r5, 0XE);
    // 0x802293DC: ori         $v0, $v0, 0xFDFE
    ctx->r2 = ctx->r2 | 0XFDFE;
    // 0x802293E0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802293E4: slti        $a0, $a0, 0x11
    ctx->r4 = SIGNED(ctx->r4) < 0X11 ? 1 : 0;
    // 0x802293E8: bne         $a0, $zero, L_802293FC
    if (ctx->r4 != 0) {
        // 0x802293EC: sw          $v1, 0x18($a1)
        MEM_W(0X18, ctx->r5) = ctx->r3;
            goto L_802293FC;
    }
    // 0x802293EC: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x802293F0: lhu         $v0, 0x1E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X1E);
    // 0x802293F4: j           L_80229404
    // 0x802293F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        goto L_80229404;
    // 0x802293F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_802293FC:
    // 0x802293FC: lhu         $v0, 0x1E($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X1E);
    // 0x80229400: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
L_80229404:
    // 0x80229404: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x80229408: lbu         $v0, 0xE($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XE);
    // 0x8022940C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229410: j           L_80229420
    // 0x80229414: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
        goto L_80229420;
    // 0x80229414: sb          $v0, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r2;
L_80229418:
    // 0x80229418: jal         0x8004F5C4
    // 0x8022941C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8022941C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
L_80229420:
    // 0x80229420: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229424: jr          $ra
    // 0x80229428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229428: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022942C: nop

;}
RECOMP_FUNC void func_80228E30_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228E30: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80228E34: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80228E38: beq         $v0, $zero, L_80228F0C
    if (ctx->r2 == 0) {
        // 0x80228E3C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80228F0C;
    }
    // 0x80228E3C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228E40: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228E44: addu        $at, $at, $v0
    gpr jr_addend_80228E4C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228E48: lw          $v0, -0x46A0($at)
    ctx->r2 = ADD32(ctx->r1, -0X46A0);
    // 0x80228E4C: jr          $v0
    // 0x80228E50: nop

    switch (jr_addend_80228E4C >> 2) {
        case 0: goto L_80228E54; break;
        case 1: goto L_80228E70; break;
        case 2: goto L_80228EA0; break;
        case 3: goto L_80228EC4; break;
        case 4: goto L_80228EF0; break;
        default: switch_error(__func__, 0x80228E4C, 0x8022B960);
    }
    // 0x80228E50: nop

L_80228E54:
    // 0x80228E54: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80228E58: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x80228E5C: sh          $zero, 0x44($a0)
    MEM_H(0X44, ctx->r4) = 0;
    // 0x80228E60: sh          $zero, 0xC($a0)
    MEM_H(0XC, ctx->r4) = 0;
    // 0x80228E64: sh          $v0, 0xE($a0)
    MEM_H(0XE, ctx->r4) = ctx->r2;
    // 0x80228E68: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228E6C: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
L_80228E70:
    // 0x80228E70: lhu         $v0, 0x44($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X44);
    // 0x80228E74: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x80228E78: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
    // 0x80228E7C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228E80: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228E84: slti        $v0, $v0, 0xC0
    ctx->r2 = SIGNED(ctx->r2) < 0XC0 ? 1 : 0;
    // 0x80228E88: bne         $v0, $zero, L_80228F0C
    if (ctx->r2 != 0) {
        // 0x80228E8C: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_80228F0C;
    }
    // 0x80228E8C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80228E90: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80228E94: sb          $v1, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r3;
    // 0x80228E98: j           L_80228F08
    // 0x80228E9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80228F08;
    // 0x80228E9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80228EA0:
    // 0x80228EA0: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x80228EA4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228EA8: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x80228EAC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228EB0: bne         $v0, $zero, L_80228F0C
    if (ctx->r2 != 0) {
        // 0x80228EB4: nop
    
            goto L_80228F0C;
    }
    // 0x80228EB4: nop

    // 0x80228EB8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80228EBC: j           L_80228F08
    // 0x80228EC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80228F08;
    // 0x80228EC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80228EC4:
    // 0x80228EC4: lhu         $v0, 0x44($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X44);
    // 0x80228EC8: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
    // 0x80228ECC: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
    // 0x80228ED0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228ED4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228ED8: slti        $v0, $v0, -0xBF
    ctx->r2 = SIGNED(ctx->r2) < -0XBF ? 1 : 0;
    // 0x80228EDC: beq         $v0, $zero, L_80228F0C
    if (ctx->r2 == 0) {
        // 0x80228EE0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80228F0C;
    }
    // 0x80228EE0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228EE4: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80228EE8: j           L_80228F0C
    // 0x80228EEC: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
        goto L_80228F0C;
    // 0x80228EEC: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
L_80228EF0:
    // 0x80228EF0: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x80228EF4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228EF8: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x80228EFC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80228F00: bne         $v0, $zero, L_80228F0C
    if (ctx->r2 != 0) {
        // 0x80228F04: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228F0C;
    }
    // 0x80228F04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80228F08:
    // 0x80228F08: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80228F0C:
    // 0x80228F0C: lhu         $v0, 0x38($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X38);
    // 0x80228F10: addiu       $v0, $v0, 0x5
    ctx->r2 = ADD32(ctx->r2, 0X5);
    // 0x80228F14: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x80228F18: lhu         $v0, 0x3A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X3A);
    // 0x80228F1C: lh          $v1, 0x38($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X38);
    // 0x80228F20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228F24: slti        $v1, $v1, 0x181
    ctx->r3 = SIGNED(ctx->r3) < 0X181 ? 1 : 0;
    // 0x80228F28: bne         $v1, $zero, L_80228F34
    if (ctx->r3 != 0) {
        // 0x80228F2C: sh          $v0, 0x3A($a0)
        MEM_H(0X3A, ctx->r4) = ctx->r2;
            goto L_80228F34;
    }
    // 0x80228F2C: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x80228F30: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_80228F34:
    // 0x80228F34: jr          $ra
    // 0x80228F38: nop

    TRACE_RETURN()
    return;
    // 0x80228F38: nop

;}
RECOMP_FUNC void func_80226584_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226584: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226588: bne         $v0, $zero, L_802265CC
    if (ctx->r2 != 0) {
        // 0x8022658C: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_802265CC;
    }
    // 0x8022658C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80226590: lw          $v1, 0x3C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X3C);
    // 0x80226594: sb          $v0, 0x110($v1)
    MEM_B(0X110, ctx->r3) = ctx->r2;
    // 0x80226598: lw          $v1, 0x44($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X44);
    // 0x8022659C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802265A0: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x802265A4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802265A8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802265AC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802265B0: lw          $v1, 0x48($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X48);
    // 0x802265B4: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x802265B8: sh          $v0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r2;
    // 0x802265BC: addiu       $v0, $zero, -0xC8
    ctx->r2 = ADD32(0, -0XC8);
    // 0x802265C0: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x802265C4: sh          $zero, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = 0;
    // 0x802265C8: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
L_802265CC:
    // 0x802265CC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802265D0: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802265D4: bne         $v1, $v0, L_80226608
    if (ctx->r3 != ctx->r2) {
        // 0x802265D8: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_80226608;
    }
    // 0x802265D8: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x802265DC: lw          $v1, 0x48($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X48);
    // 0x802265E0: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x802265E4: sh          $v0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r2;
    // 0x802265E8: addiu       $v0, $zero, -0xC8
    ctx->r2 = ADD32(0, -0XC8);
    // 0x802265EC: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x802265F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802265F4: sh          $zero, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = 0;
    // 0x802265F8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802265FC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80226600: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226604: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
L_80226608:
    // 0x80226608: bne         $v1, $v0, L_8022661C
    if (ctx->r3 != ctx->r2) {
        // 0x8022660C: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_8022661C;
    }
    // 0x8022660C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80226610: lw          $v1, 0x44($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X44);
    // 0x80226614: sb          $v0, 0x110($v1)
    MEM_B(0X110, ctx->r3) = ctx->r2;
    // 0x80226618: sb          $zero, 0xC($v1)
    MEM_B(0XC, ctx->r3) = 0;
L_8022661C:
    // 0x8022661C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226620: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80226624: bne         $v1, $v0, L_80226638
    if (ctx->r3 != ctx->r2) {
        // 0x80226628: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226638;
    }
    // 0x80226628: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022662C: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x80226630: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226634: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80226638:
    // 0x80226638: jr          $ra
    // 0x8022663C: nop

    TRACE_RETURN()
    return;
    // 0x8022663C: nop

;}
RECOMP_FUNC void func_80225DB0_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225DB0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225DB4: bne         $v0, $zero, L_80225F08
    if (ctx->r2 != 0) {
        // 0x80225DB8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80225F08;
    }
    // 0x80225DB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225DBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DC0: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225DC4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80225DC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DCC: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225DD0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DD4: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80225DD8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225DDC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DE0: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225DE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DE8: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225DEC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DF0: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225DF4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225DF8: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225DFC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225E00: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225E04: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225E08: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225E0C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225E10: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225E14: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80225E18: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225E1C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225E20: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225E24: lw          $v1, 0x34($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X34);
    // 0x80225E28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225E2C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225E30: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225E34: lw          $v1, 0x38($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X38);
    // 0x80225E38: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225E3C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225E40: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225E44: lw          $v1, 0x3C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X3C);
    // 0x80225E48: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225E4C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225E50: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225E54: lw          $v1, 0x40($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X40);
    // 0x80225E58: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225E5C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225E60: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225E64: lw          $v1, 0x44($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X44);
    // 0x80225E68: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80225E6C: addiu       $a1, $a1, 0x4430
    ctx->r5 = ADD32(ctx->r5, 0X4430);
    // 0x80225E70: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80225E74: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225E78: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225E7C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80225E80: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80225E84: lbu         $v1, 0x44A0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X44A0);
    // 0x80225E88: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225E8C: lbu         $a0, 0x4510($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4510);
    // 0x80225E90: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x80225E94: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x80225E98: ori         $a0, $a0, 0x3
    ctx->r4 = ctx->r4 | 0X3;
    // 0x80225E9C: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80225EA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225EA4: sb          $v1, 0x44A0($at)
    MEM_B(0X44A0, ctx->r1) = ctx->r3;
    // 0x80225EA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225EAC: sb          $a0, 0x4510($at)
    MEM_B(0X4510, ctx->r1) = ctx->r4;
    // 0x80225EB0: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80225EB4: lbu         $v1, 0x4548($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4548);
    // 0x80225EB8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225EBC: lbu         $a0, 0x4580($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4580);
    // 0x80225EC0: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x80225EC4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225EC8: sh          $v0, 0x4450($at)
    MEM_H(0X4450, ctx->r1) = ctx->r2;
    // 0x80225ECC: addiu       $v0, $zero, -0x168
    ctx->r2 = ADD32(0, -0X168);
    // 0x80225ED0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225ED4: sh          $v0, 0x44C0($at)
    MEM_H(0X44C0, ctx->r1) = ctx->r2;
    // 0x80225ED8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225EDC: sh          $v0, 0x4530($at)
    MEM_H(0X4530, ctx->r1) = ctx->r2;
    // 0x80225EE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225EE4: sh          $v0, 0x4568($at)
    MEM_H(0X4568, ctx->r1) = ctx->r2;
    // 0x80225EE8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225EEC: sh          $v0, 0x45A0($at)
    MEM_H(0X45A0, ctx->r1) = ctx->r2;
    // 0x80225EF0: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x80225EF4: ori         $a0, $a0, 0x3
    ctx->r4 = ctx->r4 | 0X3;
    // 0x80225EF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225EFC: sb          $v1, 0x4548($at)
    MEM_B(0X4548, ctx->r1) = ctx->r3;
    // 0x80225F00: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F04: sb          $a0, 0x4580($at)
    MEM_B(0X4580, ctx->r1) = ctx->r4;
L_80225F08:
    // 0x80225F08: jr          $ra
    // 0x80225F0C: nop

    TRACE_RETURN()
    return;
    // 0x80225F0C: nop

;}
RECOMP_FUNC void func_80226F40_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226F40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226F44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226F48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226F4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226F50: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226F54: bnel        $v0, $zero, L_80226F74
    if (ctx->r2 != 0) {
        // 0x80226F58: addiu       $a0, $s0, 0x2C
        ctx->r4 = ADD32(ctx->r16, 0X2C);
            goto L_80226F74;
    }
    goto skip_0;
    // 0x80226F58: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    skip_0:
    // 0x80226F5C: jal         0x80226FCC
    // 0x80226F60: nop

    func_80226FCC_ovl11(rdram, ctx);
        goto after_0;
    // 0x80226F60: nop

    after_0:
    // 0x80226F64: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226F68: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226F6C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226F70: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
L_80226F74:
    // 0x80226F74: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80226F78: jal         0x8009A3B4
    // 0x80226F7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80226F7C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80226F80: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80226F84: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80226F88: jal         0x8009A3B4
    // 0x80226F8C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80226F8C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80226F90: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80226F94: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80226F98: jal         0x8009A3B4
    // 0x80226F9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80226F9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80226FA0: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80226FA4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226FA8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226FAC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226FB0: lw          $v0, -0x4FF0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X4FF0);
    // 0x80226FB4: jalr        $v0
    // 0x80226FB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80226FB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80226FBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226FC0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226FC4: jr          $ra
    // 0x80226FC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226FC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227650_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227650: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227654: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227658: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022765C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227660: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227664: bne         $v0, $zero, L_80227680
    if (ctx->r2 != 0) {
        // 0x80227668: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80227680;
    }
    // 0x80227668: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022766C: jal         0x80050294
    // 0x80227670: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227670: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80227674: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227678: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022767C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227680:
    // 0x80227680: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227684: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227688: jr          $ra
    // 0x8022768C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022768C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229048_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229048: jr          $ra
    // 0x8022904C: nop

    TRACE_RETURN()
    return;
    // 0x8022904C: nop

;}
RECOMP_FUNC void func_80226E08_ovl11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E08: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226E0C: bne         $v0, $zero, L_80226E20
    if (ctx->r2 != 0) {
        // 0x80226E10: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80226E20;
    }
    // 0x80226E10: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80226E14: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226E18: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226E1C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80226E20:
    // 0x80226E20: jr          $ra
    // 0x80226E24: nop

    TRACE_RETURN()
    return;
    // 0x80226E24: nop

;}
