#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80231D68_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231D68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231D6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80231D70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231D74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80231D78: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x80231D7C: lh          $v0, 0x380($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X380);
    // 0x80231D80: bne         $a0, $v0, L_80231DC8
    if (ctx->r4 != ctx->r2) {
        // 0x80231D84: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_80231DC8;
    }
    // 0x80231D84: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x80231D88: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x80231D8C: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x80231D90: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80231D94: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80231D98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231D9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80231DA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231DA4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80231DA8: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80231DAC: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x80231DB0: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80231DB4: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x80231DB8: jal         0x80050294
    // 0x80231DBC: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80231DBC: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    after_0:
    // 0x80231DC0: j           L_80231DDC
    // 0x80231DC4: nop

        goto L_80231DDC;
    // 0x80231DC4: nop

L_80231DC8:
    // 0x80231DC8: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80231DCC: bne         $v0, $zero, L_80231DD8
    if (ctx->r2 != 0) {
        // 0x80231DD0: addiu       $v0, $v1, -0x80
        ctx->r2 = ADD32(ctx->r3, -0X80);
            goto L_80231DD8;
    }
    // 0x80231DD0: addiu       $v0, $v1, -0x80
    ctx->r2 = ADD32(ctx->r3, -0X80);
    // 0x80231DD4: addiu       $v0, $v1, 0x80
    ctx->r2 = ADD32(ctx->r3, 0X80);
L_80231DD8:
    // 0x80231DD8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80231DDC:
    // 0x80231DDC: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80231DE0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80231DE4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80231DE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80231DEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80231DF0: jr          $ra
    // 0x80231DF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231DF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022827C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022827C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228280: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228284: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228288: jal         0x8004F418
    // 0x8022828C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022828C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80228290: lw          $a0, 0x36C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X36C);
    // 0x80228294: jal         0x8004F5C4
    // 0x80228298: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x80228298: nop

    after_1:
    // 0x8022829C: jal         0x8004F5C4
    // 0x802282A0: lw          $a0, 0x370($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X370);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x802282A0: lw          $a0, 0x370($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X370);
    after_2:
    // 0x802282A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802282A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802282AC: jr          $ra
    // 0x802282B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802282B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225340_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225340: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225344: jr          $ra
    // 0x80225348: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80225348: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8022BED8_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BED8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022BEDC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022BEE0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022BEE4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022BEE8: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8022BEEC: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8022BEF0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022BEF4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022BEF8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022BEFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022BF00: lbu         $v0, 0xF($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0XF);
    // 0x8022BF04: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022BF08: bne         $v0, $zero, L_8022C160
    if (ctx->r2 != 0) {
        // 0x8022BF0C: addiu       $s2, $s3, 0x328
        ctx->r18 = ADD32(ctx->r19, 0X328);
            goto L_8022C160;
    }
    // 0x8022BF0C: addiu       $s2, $s3, 0x328
    ctx->r18 = ADD32(ctx->r19, 0X328);
    // 0x8022BF10: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022BF14: addiu       $s6, $zero, 0x9
    ctx->r22 = ADD32(0, 0X9);
    // 0x8022BF18: addiu       $s5, $zero, 0xF
    ctx->r21 = ADD32(0, 0XF);
    // 0x8022BF1C: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_8022BF20:
    // 0x8022BF20: jal         0x8004F144
    // 0x8022BF24: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022BF24: nop

    after_0:
    // 0x8022BF28: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022BF2C: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022BF30: sra         $s0, $v0, 16
    ctx->r16 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BF34: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x8022BF38: addu        $a0, $v0, $s2
    ctx->r4 = ADD32(ctx->r2, ctx->r18);
    // 0x8022BF3C: beq         $v1, $zero, L_8022BF6C
    if (ctx->r3 == 0) {
        // 0x8022BF40: sw          $v1, 0x50($a0)
        MEM_W(0X50, ctx->r4) = ctx->r3;
            goto L_8022BF6C;
    }
    // 0x8022BF40: sw          $v1, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->r3;
    // 0x8022BF44: sb          $s6, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r22;
    // 0x8022BF48: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
    // 0x8022BF4C: sb          $s5, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r21;
    // 0x8022BF50: lw          $v0, 0x50($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X50);
    // 0x8022BF54: sb          $s4, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r20;
    // 0x8022BF58: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x8022BF5C: lw          $v1, 0x50($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X50);
    // 0x8022BF60: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x8022BF64: j           L_8022BFA8
    // 0x8022BF68: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
        goto L_8022BFA8;
    // 0x8022BF68: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_8022BF6C:
    // 0x8022BF6C: jal         0x8004F418
    // 0x8022BF70: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8022BF70: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_1:
    // 0x8022BF74: bne         $s0, $zero, L_8022C24C
    if (ctx->r16 != 0) {
        // 0x8022BF78: addiu       $v1, $s1, -0x1
        ctx->r3 = ADD32(ctx->r17, -0X1);
            goto L_8022C24C;
    }
    // 0x8022BF78: addiu       $v1, $s1, -0x1
    ctx->r3 = ADD32(ctx->r17, -0X1);
L_8022BF7C:
    // 0x8022BF7C: sll         $s0, $v1, 16
    ctx->r16 = S32(ctx->r3 << 16);
    // 0x8022BF80: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8022BF84: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x8022BF88: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8022BF8C: lw          $a0, 0x50($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X50);
    // 0x8022BF90: jal         0x8004F5C4
    // 0x8022BF94: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x8022BF94: addu        $s1, $v1, $zero
    ctx->r17 = ADD32(ctx->r3, 0);
    after_2:
    // 0x8022BF98: beq         $s0, $zero, L_8022BF7C
    if (ctx->r16 == 0) {
        // 0x8022BF9C: addiu       $v1, $s1, -0x1
        ctx->r3 = ADD32(ctx->r17, -0X1);
            goto L_8022BF7C;
    }
    // 0x8022BF9C: addiu       $v1, $s1, -0x1
    ctx->r3 = ADD32(ctx->r17, -0X1);
    // 0x8022BFA0: j           L_8022C24C
    // 0x8022BFA4: nop

        goto L_8022C24C;
    // 0x8022BFA4: nop

L_8022BFA8:
    // 0x8022BFA8: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x8022BFAC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022BFB0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BFB4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BFB8: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8022BFBC: bne         $v0, $zero, L_8022BF20
    if (ctx->r2 != 0) {
        // 0x8022BFC0: nop
    
            goto L_8022BF20;
    }
    // 0x8022BFC0: nop

    // 0x8022BFC4: lw          $v0, 0x58($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X58);
    // 0x8022BFC8: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x8022BFCC: sb          $v0, 0xD($s3)
    MEM_B(0XD, ctx->r19) = ctx->r2;
    // 0x8022BFD0: lw          $v0, 0x5C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X5C);
    // 0x8022BFD4: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x8022BFD8: jal         0x8004EEAC
    // 0x8022BFDC: sb          $v0, 0xE($s3)
    MEM_B(0XE, ctx->r19) = ctx->r2;
    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_3;
    // 0x8022BFDC: sb          $v0, 0xE($s3)
    MEM_B(0XE, ctx->r19) = ctx->r2;
    after_3:
    // 0x8022BFE0: beq         $v0, $zero, L_8022C11C
    if (ctx->r2 == 0) {
        // 0x8022BFE4: sw          $v0, 0x4C($s2)
        MEM_W(0X4C, ctx->r18) = ctx->r2;
            goto L_8022C11C;
    }
    // 0x8022BFE4: sw          $v0, 0x4C($s2)
    MEM_W(0X4C, ctx->r18) = ctx->r2;
    // 0x8022BFE8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8022BFEC: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8022BFF0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022BFF4: bne         $v1, $v0, L_8022C018
    if (ctx->r3 != ctx->r2) {
        // 0x8022BFF8: nop
    
            goto L_8022C018;
    }
    // 0x8022BFF8: nop

    // 0x8022BFFC: lb          $v0, 0xC($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XC);
    // 0x8022C000: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022C004: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C008: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C00C: addiu       $v0, $v0, -0x7D38
    ctx->r2 = ADD32(ctx->r2, -0X7D38);
    // 0x8022C010: j           L_8022C030
    // 0x8022C014: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
        goto L_8022C030;
    // 0x8022C014: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
L_8022C018:
    // 0x8022C018: lb          $v0, 0xC($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XC);
    // 0x8022C01C: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8022C020: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C024: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022C028: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C02C: addiu       $v0, $v0, -0x7C48
    ctx->r2 = ADD32(ctx->r2, -0X7C48);
L_8022C030:
    // 0x8022C030: addu        $s4, $v1, $v0
    ctx->r20 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C034: lw          $v1, 0x4C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4C);
    // 0x8022C038: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022C03C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022C040: lw          $v1, 0x4C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4C);
    // 0x8022C044: lbu         $v0, 0x2($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X2);
    // 0x8022C048: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022C04C: lw          $v1, 0x4C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4C);
    // 0x8022C050: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x8022C054: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x8022C058: lw          $v1, 0x4C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4C);
    // 0x8022C05C: lbu         $v0, 0x4($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X4);
    // 0x8022C060: sb          $v0, 0x4($v1)
    MEM_B(0X4, ctx->r3) = ctx->r2;
    // 0x8022C064: lw          $v1, 0x4C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4C);
    // 0x8022C068: lbu         $v0, 0x5($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X5);
    // 0x8022C06C: sb          $v0, 0x5($v1)
    MEM_B(0X5, ctx->r3) = ctx->r2;
    // 0x8022C070: lw          $v1, 0x4C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4C);
    // 0x8022C074: lw          $v0, 0x8($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X8);
    // 0x8022C078: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x8022C07C: lw          $s1, 0x4C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X4C);
    // 0x8022C080: addiu       $a1, $s4, 0xC
    ctx->r5 = ADD32(ctx->r20, 0XC);
    // 0x8022C084: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C088: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x8022C08C: jal         0x8009A3B4
    // 0x8022C090: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022C090: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022C094: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022C098: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022C09C: jal         0x8009A3B4
    // 0x8022C0A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022C0A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022C0A4: lw          $v1, 0x4C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4C);
    // 0x8022C0A8: lh          $v0, 0x14($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X14);
    // 0x8022C0AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C0B0: sw          $v0, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r2;
    // 0x8022C0B4: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x8022C0B8: lw          $v1, 0x4C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4C);
    // 0x8022C0BC: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x8022C0C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C0C4: sw          $v0, 0x38($v1)
    MEM_W(0X38, ctx->r3) = ctx->r2;
    // 0x8022C0C8: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x8022C0CC: lw          $v1, 0x4C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4C);
    // 0x8022C0D0: lh          $v0, 0x18($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X18);
    // 0x8022C0D4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C0D8: sw          $v0, 0x3C($v1)
    MEM_W(0X3C, ctx->r3) = ctx->r2;
    // 0x8022C0DC: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x8022C0E0: lw          $v0, 0x4C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4C);
    // 0x8022C0E4: sh          $zero, 0x5C($v0)
    MEM_H(0X5C, ctx->r2) = 0;
    // 0x8022C0E8: sh          $zero, 0x54($v0)
    MEM_H(0X54, ctx->r2) = 0;
    // 0x8022C0EC: lbu         $v0, 0x7($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X7);
    // 0x8022C0F0: lw          $v1, 0x4C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4C);
    // 0x8022C0F4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022C0F8: sh          $v0, 0x5E($v1)
    MEM_H(0X5E, ctx->r3) = ctx->r2;
    // 0x8022C0FC: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x8022C100: lw          $v0, 0x4C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4C);
    // 0x8022C104: sh          $zero, 0x60($v0)
    MEM_H(0X60, ctx->r2) = 0;
    // 0x8022C108: sh          $zero, 0x58($v0)
    MEM_H(0X58, ctx->r2) = 0;
    // 0x8022C10C: lw          $v1, 0x4C($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4C);
    // 0x8022C110: lbu         $v0, 0x1($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X1);
    // 0x8022C114: j           L_8022C160
    // 0x8022C118: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
        goto L_8022C160;
    // 0x8022C118: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
L_8022C11C:
    // 0x8022C11C: jal         0x8004F418
    // 0x8022C120: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_6;
    // 0x8022C120: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    after_6:
    // 0x8022C124: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022C128: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_8022C12C:
    // 0x8022C12C: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x8022C130: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8022C134: jal         0x8004F5C4
    // 0x8022C138: lw          $a0, 0x50($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X50);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_7;
    // 0x8022C138: lw          $a0, 0x50($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X50);
    after_7:
    // 0x8022C13C: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x8022C140: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022C144: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C148: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C14C: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8022C150: bne         $v0, $zero, L_8022C12C
    if (ctx->r2 != 0) {
        // 0x8022C154: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_8022C12C;
    }
    // 0x8022C154: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022C158: j           L_8022C24C
    // 0x8022C15C: nop

        goto L_8022C24C;
    // 0x8022C15C: nop

L_8022C160:
    // 0x8022C160: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x8022C164: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022C168: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C16C: sh          $zero, 0x54($s3)
    MEM_H(0X54, ctx->r19) = 0;
    // 0x8022C170: sh          $zero, 0x58($s3)
    MEM_H(0X58, ctx->r19) = 0;
    // 0x8022C174: sw          $zero, 0x44($s3)
    MEM_W(0X44, ctx->r19) = 0;
    // 0x8022C178: sw          $zero, 0x48($s3)
    MEM_W(0X48, ctx->r19) = 0;
    // 0x8022C17C: sw          $zero, 0x64($s3)
    MEM_W(0X64, ctx->r19) = 0;
    // 0x8022C180: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022C184: jal         0x8004D5D4
    // 0x8022C188: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_8;
    // 0x8022C188: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    after_8:
    // 0x8022C18C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022C190: sh          $v0, 0x15C($s3)
    MEM_H(0X15C, ctx->r19) = ctx->r2;
    // 0x8022C194: sh          $v0, 0x15A($s3)
    MEM_H(0X15A, ctx->r19) = ctx->r2;
    // 0x8022C198: sh          $v0, 0x158($s3)
    MEM_H(0X158, ctx->r19) = ctx->r2;
    // 0x8022C19C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022C1A0: sw          $zero, 0x34($s2)
    MEM_W(0X34, ctx->r18) = 0;
    // 0x8022C1A4: sw          $zero, 0x38($s2)
    MEM_W(0X38, ctx->r18) = 0;
    // 0x8022C1A8: sw          $zero, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = 0;
    // 0x8022C1AC: sw          $zero, 0x40($s2)
    MEM_W(0X40, ctx->r18) = 0;
    // 0x8022C1B0: sw          $zero, 0x44($s2)
    MEM_W(0X44, ctx->r18) = 0;
    // 0x8022C1B4: sw          $zero, 0x48($s2)
    MEM_W(0X48, ctx->r18) = 0;
    // 0x8022C1B8: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x8022C1BC: sw          $zero, 0x4($s2)
    MEM_W(0X4, ctx->r18) = 0;
    // 0x8022C1C0: sw          $zero, 0x8($s2)
    MEM_W(0X8, ctx->r18) = 0;
    // 0x8022C1C4: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    // 0x8022C1C8: sw          $zero, 0x18($s2)
    MEM_W(0X18, ctx->r18) = 0;
    // 0x8022C1CC: sw          $zero, 0x28($s2)
    MEM_W(0X28, ctx->r18) = 0;
    // 0x8022C1D0: lbu         $v0, 0x2($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X2);
    // 0x8022C1D4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022C1D8: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022C1DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C1E0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C1E4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022C1E8: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x8022C1EC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022C1F0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C1F4: addiu       $v0, $v0, -0x7D48
    ctx->r2 = ADD32(ctx->r2, -0X7D48);
    // 0x8022C1F8: sw          $v0, 0x78($s3)
    MEM_W(0X78, ctx->r19) = ctx->r2;
    // 0x8022C1FC: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022C200: sh          $v1, 0x6E($s3)
    MEM_H(0X6E, ctx->r19) = ctx->r3;
    // 0x8022C204: sh          $v1, 0xB0($s3)
    MEM_H(0XB0, ctx->r19) = ctx->r3;
    // 0x8022C208: jal         0x8003E934
    // 0x8022C20C: sh          $v1, 0xB2($s3)
    MEM_H(0XB2, ctx->r19) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_9;
    // 0x8022C20C: sh          $v1, 0xB2($s3)
    MEM_H(0XB2, ctx->r19) = ctx->r3;
    after_9:
    // 0x8022C210: lbu         $v1, 0xF($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XF);
    // 0x8022C214: sh          $v0, 0x16($s3)
    MEM_H(0X16, ctx->r19) = ctx->r2;
    // 0x8022C218: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C21C: sw          $v0, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r2;
    // 0x8022C220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C224: andi        $v1, $v1, 0x40
    ctx->r3 = ctx->r3 & 0X40;
    // 0x8022C228: beq         $v1, $zero, L_8022C23C
    if (ctx->r3 == 0) {
        // 0x8022C22C: sb          $v0, 0x8($s3)
        MEM_B(0X8, ctx->r19) = ctx->r2;
            goto L_8022C23C;
    }
    // 0x8022C22C: sb          $v0, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r2;
    // 0x8022C230: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C234: j           L_8022C240
    // 0x8022C238: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
        goto L_8022C240;
    // 0x8022C238: sb          $v0, 0x9($s3)
    MEM_B(0X9, ctx->r19) = ctx->r2;
L_8022C23C:
    // 0x8022C23C: sb          $zero, 0x9($s3)
    MEM_B(0X9, ctx->r19) = 0;
L_8022C240:
    // 0x8022C240: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022C244: sh          $zero, 0xA($s3)
    MEM_H(0XA, ctx->r19) = 0;
    // 0x8022C248: sh          $v0, 0x15E($s3)
    MEM_H(0X15E, ctx->r19) = ctx->r2;
L_8022C24C:
    // 0x8022C24C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C250: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8022C254: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8022C258: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022C25C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C260: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022C264: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022C268: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C26C: jr          $ra
    // 0x8022C270: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022C270: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022C3AC_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C3AC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022C3B0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022C3B4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022C3B8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022C3BC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022C3C0: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022C3C4: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022C3C8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022C3CC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022C3D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022C3D4: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022C3D8: addiu       $s3, $s1, 0x328
    ctx->r19 = ADD32(ctx->r17, 0X328);
    // 0x8022C3DC: beq         $v1, $zero, L_8022C3F8
    if (ctx->r3 == 0) {
        // 0x8022C3E0: sh          $zero, 0x330($s1)
        MEM_H(0X330, ctx->r17) = 0;
            goto L_8022C3F8;
    }
    // 0x8022C3E0: sh          $zero, 0x330($s1)
    MEM_H(0X330, ctx->r17) = 0;
    // 0x8022C3E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C3E8: beq         $v1, $v0, L_8022C428
    if (ctx->r3 == ctx->r2) {
        // 0x8022C3EC: nop
    
            goto L_8022C428;
    }
    // 0x8022C3EC: nop

    // 0x8022C3F0: j           L_8022C4FC
    // 0x8022C3F4: nop

        goto L_8022C4FC;
    // 0x8022C3F4: nop

L_8022C3F8:
    // 0x8022C3F8: lhu         $v0, 0x36E($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X36E);
    // 0x8022C3FC: lh          $v1, 0x56($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X56);
    // 0x8022C400: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
    // 0x8022C404: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C408: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C40C: andi        $v1, $v1, 0x3FF
    ctx->r3 = ctx->r3 & 0X3FF;
    // 0x8022C410: bne         $v1, $zero, L_8022C4FC
    if (ctx->r3 != 0) {
        // 0x8022C414: sh          $v0, 0x36E($s1)
        MEM_H(0X36E, ctx->r17) = ctx->r2;
            goto L_8022C4FC;
    }
    // 0x8022C414: sh          $v0, 0x36E($s1)
    MEM_H(0X36E, ctx->r17) = ctx->r2;
    // 0x8022C418: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C41C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022C420: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022C424: sh          $v0, 0x32C($s1)
    MEM_H(0X32C, ctx->r17) = ctx->r2;
L_8022C428:
    // 0x8022C428: lhu         $v0, 0x4($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X4);
    // 0x8022C42C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C430: sh          $v0, 0x4($s3)
    MEM_H(0X4, ctx->r19) = ctx->r2;
    // 0x8022C434: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C438: bgez        $v0, L_8022C4FC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C43C: nop
    
            goto L_8022C4FC;
    }
    // 0x8022C43C: nop

    // 0x8022C440: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022C444: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x8022C448: addiu       $s6, $zero, 0x9
    ctx->r22 = ADD32(0, 0X9);
    // 0x8022C44C: addiu       $s5, $zero, -0x7C0
    ctx->r21 = ADD32(0, -0X7C0);
L_8022C450:
    // 0x8022C450: jal         0x8004EFE4
    // 0x8022C454: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x8022C454: nop

    after_0:
    // 0x8022C458: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022C45C: beq         $s0, $zero, L_8022C4DC
    if (ctx->r16 == 0) {
        // 0x8022C460: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022C4DC;
    }
    // 0x8022C460: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C464: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022C468: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C46C: sb          $s4, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r20;
    // 0x8022C470: sb          $s6, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r22;
    // 0x8022C474: jal         0x8009A3B4
    // 0x8022C478: sb          $s4, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r20;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C478: sb          $s4, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r20;
    after_1:
    // 0x8022C47C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022C480: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022C484: jal         0x8009A3B4
    // 0x8022C488: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022C488: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8022C48C: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x8022C490: beq         $v0, $zero, L_8022C4AC
    if (ctx->r2 == 0) {
        // 0x8022C494: nop
    
            goto L_8022C4AC;
    }
    // 0x8022C494: nop

    // 0x8022C498: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022C49C: lhu         $v1, 0x46($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X46);
    // 0x8022C4A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C4A4: j           L_8022C4B8
    // 0x8022C4A8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
        goto L_8022C4B8;
    // 0x8022C4A8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
L_8022C4AC:
    // 0x8022C4AC: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x8022C4B0: lhu         $v1, 0x46($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X46);
    // 0x8022C4B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_8022C4B8:
    // 0x8022C4B8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022C4BC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022C4C0: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    // 0x8022C4C4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C4C8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022C4CC: addiu       $a3, $zero, 0x600
    ctx->r7 = ADD32(0, 0X600);
    // 0x8022C4D0: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x8022C4D4: jal         0x8004DBA0
    // 0x8022C4D8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_8004DBA0_28FA0(rdram, ctx);
        goto after_3;
    // 0x8022C4D8: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_3:
L_8022C4DC:
    // 0x8022C4DC: addiu       $v0, $s2, 0x1
    ctx->r2 = ADD32(ctx->r18, 0X1);
    // 0x8022C4E0: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022C4E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C4E8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C4EC: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8022C4F0: bne         $v0, $zero, L_8022C450
    if (ctx->r2 != 0) {
        // 0x8022C4F4: nop
    
            goto L_8022C450;
    }
    // 0x8022C4F4: nop

    // 0x8022C4F8: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
L_8022C4FC:
    // 0x8022C4FC: jal         0x8003E934
    // 0x8022C500: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x8022C500: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022C504: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022C508: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C50C: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022C510: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022C514: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022C518: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022C51C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022C520: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022C524: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022C528: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022C52C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022C530: jr          $ra
    // 0x8022C534: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022C534: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80236584_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236584: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80236588: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023658C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80236590: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80236594: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80236598: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023659C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802365A0: lbu         $v1, 0x9($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X9);
    // 0x802365A4: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x802365A8: beq         $v0, $zero, L_802366DC
    if (ctx->r2 == 0) {
        // 0x802365AC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802366DC;
    }
    // 0x802365AC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802365B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802365B4: addu        $at, $at, $v0
    gpr jr_addend_802365BC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802365B8: lw          $v0, -0x7030($at)
    ctx->r2 = ADD32(ctx->r1, -0X7030);
    // 0x802365BC: jr          $v0
    // 0x802365C0: nop

    switch (jr_addend_802365BC >> 2) {
        case 0: goto L_802365C4; break;
        case 1: goto L_802365F0; break;
        case 2: goto L_8023661C; break;
        case 3: goto L_8023663C; break;
        case 4: goto L_802366C0; break;
        default: switch_error(__func__, 0x802365BC, 0x80238FD0);
    }
    // 0x802365C0: nop

L_802365C4:
    // 0x802365C4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802365C8: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802365CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802365D0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802365D4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x802365D8: jal         0x8006033C
    // 0x802365DC: lw          $a0, -0x72B4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X72B4);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802365DC: lw          $a0, -0x72B4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X72B4);
    after_0:
    // 0x802365E0: beq         $v0, $zero, L_802366B0
    if (ctx->r2 == 0) {
        // 0x802365E4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802366B0;
    }
    // 0x802365E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802365E8: j           L_802366D8
    // 0x802365EC: nop

        goto L_802366D8;
    // 0x802365EC: nop

L_802365F0:
    // 0x802365F0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802365F4: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802365F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802365FC: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80236600: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80236604: jal         0x8006033C
    // 0x80236608: lw          $a0, -0x72B4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X72B4);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80236608: lw          $a0, -0x72B4($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X72B4);
    after_1:
    // 0x8023660C: beq         $v0, $zero, L_802366DC
    if (ctx->r2 == 0) {
        // 0x80236610: nop
    
            goto L_802366DC;
    }
    // 0x80236610: nop

    // 0x80236614: j           L_802366B0
    // 0x80236618: nop

        goto L_802366B0;
    // 0x80236618: nop

L_8023661C:
    // 0x8023661C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80236620: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80236624: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80236628: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8023662C: beq         $v0, $zero, L_802366B0
    if (ctx->r2 == 0) {
        // 0x80236630: nop
    
            goto L_802366B0;
    }
    // 0x80236630: nop

    // 0x80236634: j           L_802366DC
    // 0x80236638: nop

        goto L_802366DC;
    // 0x80236638: nop

L_8023663C:
    // 0x8023663C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80236640: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80236644: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x80236648: addiu       $s3, $s3, -0x72A8
    ctx->r19 = ADD32(ctx->r19, -0X72A8);
    // 0x8023664C: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
L_80236650:
    // 0x80236650: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x80236654: addu        $v0, $v0, $s3
    ctx->r2 = ADD32(ctx->r2, ctx->r19);
    // 0x80236658: jal         0x8006033C
    // 0x8023665C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8023665C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_2:
    // 0x80236660: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80236664: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x80236668: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8023666C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80236670: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236674: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80236678: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x8023667C: bne         $v0, $zero, L_80236650
    if (ctx->r2 != 0) {
        // 0x80236680: sll         $v0, $s0, 24
        ctx->r2 = S32(ctx->r16 << 24);
            goto L_80236650;
    }
    // 0x80236680: sll         $v0, $s0, 24
    ctx->r2 = S32(ctx->r16 << 24);
    // 0x80236684: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80236688: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x8023668C: jal         0x800616FC
    // 0x80236690: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_3;
    // 0x80236690: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    after_3:
    // 0x80236694: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80236698: bne         $s1, $v0, L_802366B0
    if (ctx->r17 != ctx->r2) {
        // 0x8023669C: nop
    
            goto L_802366B0;
    }
    // 0x8023669C: nop

    // 0x802366A0: jal         0x8006036C
    // 0x802366A4: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x802366A4: addiu       $a0, $zero, 0x2B
    ctx->r4 = ADD32(0, 0X2B);
    after_4:
    // 0x802366A8: jal         0x8006027C
    // 0x802366AC: nop

    func_8006027C_3B67C(rdram, ctx);
        goto after_5;
    // 0x802366AC: nop

    after_5:
L_802366B0:
    // 0x802366B0: lbu         $v0, 0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X9);
    // 0x802366B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802366B8: j           L_802366DC
    // 0x802366BC: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
        goto L_802366DC;
    // 0x802366BC: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
L_802366C0:
    // 0x802366C0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802366C4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802366C8: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x802366CC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802366D0: bne         $v0, $zero, L_802366DC
    if (ctx->r2 != 0) {
        // 0x802366D4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802366DC;
    }
    // 0x802366D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802366D8:
    // 0x802366D8: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
L_802366DC:
    // 0x802366DC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802366E0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802366E4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802366E8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802366EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802366F0: jr          $ra
    // 0x802366F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802366F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802288E8_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802288E8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802288EC: bne         $v0, $zero, L_80228900
    if (ctx->r2 != 0) {
        // 0x802288F0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80228900;
    }
    // 0x802288F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802288F4: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x802288F8: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x802288FC: sh          $zero, 0x330($a0)
    MEM_H(0X330, ctx->r4) = 0;
L_80228900:
    // 0x80228900: jr          $ra
    // 0x80228904: nop

    TRACE_RETURN()
    return;
    // 0x80228904: nop

;}
RECOMP_FUNC void func_802305BC_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802305BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802305C0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802305C4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802305C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802305CC: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802305D0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802305D4: beq         $v1, $v0, L_802305E8
    if (ctx->r3 == ctx->r2) {
        // 0x802305D8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802305E8;
    }
    // 0x802305D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802305DC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802305E0: bne         $v1, $v0, L_80230640
    if (ctx->r3 != ctx->r2) {
        // 0x802305E4: nop
    
            goto L_80230640;
    }
    // 0x802305E4: nop

L_802305E8:
    // 0x802305E8: lbu         $v0, 0x3B4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3B4);
    // 0x802305EC: lbu         $v1, 0xAD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAD);
    // 0x802305F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x802305F4: sb          $a0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r4;
    // 0x802305F8: andi        $v0, $v0, 0xFB
    ctx->r2 = ctx->r2 & 0XFB;
    // 0x802305FC: sb          $v0, 0x3B4($s0)
    MEM_B(0X3B4, ctx->r16) = ctx->r2;
    // 0x80230600: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230604: beq         $v1, $v0, L_80230624
    if (ctx->r3 == ctx->r2) {
        // 0x80230608: nop
    
            goto L_80230624;
    }
    // 0x80230608: nop

    // 0x8023060C: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
    // 0x80230610: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230614: sb          $a0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r4;
    // 0x80230618: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023061C: jal         0x80050294
    // 0x80230620: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80230620: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
L_80230624:
    // 0x80230624: lbu         $v1, 0x3B4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3B4);
    // 0x80230628: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023062C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80230630: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80230634: sh          $zero, 0x1D8($s0)
    MEM_H(0X1D8, ctx->r16) = 0;
    // 0x80230638: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8023063C: sb          $v1, 0x3B4($s0)
    MEM_B(0X3B4, ctx->r16) = ctx->r3;
L_80230640:
    // 0x80230640: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230644: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230648: jr          $ra
    // 0x8023064C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023064C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EB30_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EB30: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8022EB34: lb          $v0, 0xE($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XE);
    // 0x8022EB38: addiu       $a3, $a0, 0x348
    ctx->r7 = ADD32(ctx->r4, 0X348);
    // 0x8022EB3C: bne         $v0, $zero, L_8022EB64
    if (ctx->r2 != 0) {
        // 0x8022EB40: addiu       $a2, $a0, 0x64
        ctx->r6 = ADD32(ctx->r4, 0X64);
            goto L_8022EB64;
    }
    // 0x8022EB40: addiu       $a2, $a0, 0x64
    ctx->r6 = ADD32(ctx->r4, 0X64);
    // 0x8022EB44: lh          $v1, 0x56($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X56);
    // 0x8022EB48: lh          $v0, 0x380($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X380);
    // 0x8022EB4C: addiu       $v0, $v0, -0x400
    ctx->r2 = ADD32(ctx->r2, -0X400);
    // 0x8022EB50: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EB54: beq         $v1, $v0, L_8022EB7C
    if (ctx->r3 == ctx->r2) {
        // 0x8022EB58: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8022EB7C;
    }
    // 0x8022EB58: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8022EB5C: j           L_8022EB94
    // 0x8022EB60: addiu       $v0, $a1, -0x40
    ctx->r2 = ADD32(ctx->r5, -0X40);
        goto L_8022EB94;
    // 0x8022EB60: addiu       $v0, $a1, -0x40
    ctx->r2 = ADD32(ctx->r5, -0X40);
L_8022EB64:
    // 0x8022EB64: lh          $v1, 0x56($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X56);
    // 0x8022EB68: lh          $v0, 0x380($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X380);
    // 0x8022EB6C: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x8022EB70: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EB74: bne         $v1, $v0, L_8022EB90
    if (ctx->r3 != ctx->r2) {
        // 0x8022EB78: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8022EB90;
    }
    // 0x8022EB78: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
L_8022EB7C:
    // 0x8022EB7C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022EB80: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022EB84: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022EB88: j           L_8022EB98
    // 0x8022EB8C: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
        goto L_8022EB98;
    // 0x8022EB8C: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
L_8022EB90:
    // 0x8022EB90: addiu       $v0, $a1, 0x40
    ctx->r2 = ADD32(ctx->r5, 0X40);
L_8022EB94:
    // 0x8022EB94: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
L_8022EB98:
    // 0x8022EB98: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8022EB9C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022EBA0: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
    // 0x8022EBA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EBA8: sb          $v0, 0x3F($a3)
    MEM_B(0X3F, ctx->r7) = ctx->r2;
    // 0x8022EBAC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022EBB0: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x8022EBB4: sb          $v0, 0x1($a2)
    MEM_B(0X1, ctx->r6) = ctx->r2;
    // 0x8022EBB8: sb          $v0, 0x2($a2)
    MEM_B(0X2, ctx->r6) = ctx->r2;
    // 0x8022EBBC: jr          $ra
    // 0x8022EBC0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    TRACE_RETURN()
    return;
    // 0x8022EBC0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_8022ED6C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ED6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022ED70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022ED74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022ED78: jal         0x8005044C
    // 0x8022ED7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x8022ED7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022ED80: jal         0x80040F30
    // 0x8022ED84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022ED84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022ED88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ED8C: jal         0x8003E934
    // 0x8022ED90: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022ED90: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022ED94: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x8022ED98: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x8022ED9C: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8022EDA0: bnel        $v1, $zero, L_8022EDD4
    if (ctx->r3 != 0) {
        // 0x8022EDA4: sh          $v0, 0x16($s0)
        MEM_H(0X16, ctx->r16) = ctx->r2;
            goto L_8022EDD4;
    }
    goto skip_0;
    // 0x8022EDA4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    skip_0:
    // 0x8022EDA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EDAC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022EDB0: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022EDB4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022EDB8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022EDBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EDC0: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x8022EDC4: jal         0x80050294
    // 0x8022EDC8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022EDC8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    after_3:
    // 0x8022EDCC: j           L_8022EDDC
    // 0x8022EDD0: nop

        goto L_8022EDDC;
    // 0x8022EDD0: nop

L_8022EDD4:
    // 0x8022EDD4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EDD8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022EDDC:
    // 0x8022EDDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EDE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EDE4: jr          $ra
    // 0x8022EDE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EDE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022EDEC: nop

;}
RECOMP_FUNC void func_80236304_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236304: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x80236308: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x8023630C: lhu         $v1, 0x1A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X1A);
    // 0x80236310: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x80236314: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    // 0x80236318: lb          $v1, 0x3($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X3);
    // 0x8023631C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80236320: bgez        $v1, L_80236360
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80236324: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80236360;
    }
    // 0x80236324: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80236328: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023632C: bne         $v1, $v0, L_8023634C
    if (ctx->r3 != ctx->r2) {
        // 0x80236330: andi        $v0, $a1, 0x7F
        ctx->r2 = ctx->r5 & 0X7F;
            goto L_8023634C;
    }
    // 0x80236330: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x80236334: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x80236338: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8023633C: bne         $v1, $v0, L_8023636C
    if (ctx->r3 != ctx->r2) {
        // 0x80236340: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8023636C;
    }
    // 0x80236340: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80236344: j           L_80236390
    // 0x80236348: nop

        goto L_80236390;
    // 0x80236348: nop

L_8023634C:
    // 0x8023634C: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80236350: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236354: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236358: j           L_8023636C
    // 0x8023635C: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
        goto L_8023636C;
    // 0x8023635C: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
L_80236360:
    // 0x80236360: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80236364: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80236368: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_8023636C:
    // 0x8023636C: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x80236370: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x80236374: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80236378: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8023637C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80236380: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x80236384: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x80236388: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8023638C: sh          $v1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r3;
L_80236390:
    // 0x80236390: jr          $ra
    // 0x80236394: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80236394: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80236398: nop

    // 0x8023639C: nop

;}
RECOMP_FUNC void func_8023194C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023194C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231950: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231954: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231958: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023195C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231960: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80231964: lui         $v0, 0x12
    ctx->r2 = S32(0X12 << 16);
    // 0x80231968: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8023196C: beq         $v0, $zero, L_80231990
    if (ctx->r2 == 0) {
        // 0x80231970: addiu       $s1, $s0, 0x64
        ctx->r17 = ADD32(ctx->r16, 0X64);
            goto L_80231990;
    }
    // 0x80231970: addiu       $s1, $s0, 0x64
    ctx->r17 = ADD32(ctx->r16, 0X64);
    // 0x80231974: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80231978: lw          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BC8);
    // 0x8023197C: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80231980: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80231984: lui         $v1, 0x1D02
    ctx->r3 = S32(0X1D02 << 16);
    // 0x80231988: bne         $v0, $v1, L_802319CC
    if (ctx->r2 != ctx->r3) {
        // 0x8023198C: nop
    
            goto L_802319CC;
    }
    // 0x8023198C: nop

L_80231990:
    // 0x80231990: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231994: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231998: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023199C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802319A0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802319A4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802319A8: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802319AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802319B0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802319B4: jal         0x80050294
    // 0x802319B8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802319B8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x802319BC: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x802319C0: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x802319C4: j           L_802319D4
    // 0x802319C8: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
        goto L_802319D4;
    // 0x802319C8: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
L_802319CC:
    // 0x802319CC: jal         0x8005044C
    // 0x802319D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x802319D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_802319D4:
    // 0x802319D4: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802319D8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802319DC: bne         $v1, $v0, L_802319F4
    if (ctx->r3 != ctx->r2) {
        // 0x802319E0: addiu       $v0, $zero, -0x8000
        ctx->r2 = ADD32(0, -0X8000);
            goto L_802319F4;
    }
    // 0x802319E0: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x802319E4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802319E8: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
    // 0x802319EC: sb          $zero, 0x1($s1)
    MEM_B(0X1, ctx->r17) = 0;
    // 0x802319F0: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_802319F4:
    // 0x802319F4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802319F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802319FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231A00: jr          $ra
    // 0x80231A04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231A04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B970_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B970: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B974: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B978: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B97C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022B980: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022B984: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B988: lw          $v1, 0x33C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X33C);
    // 0x8022B98C: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022B990: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022B994: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8022B998: beq         $a0, $zero, L_8022BBF4
    if (ctx->r4 == 0) {
        // 0x8022B99C: addiu       $s2, $s0, 0x328
        ctx->r18 = ADD32(ctx->r16, 0X328);
            goto L_8022BBF4;
    }
    // 0x8022B99C: addiu       $s2, $s0, 0x328
    ctx->r18 = ADD32(ctx->r16, 0X328);
    // 0x8022B9A0: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x8022B9A4: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022B9A8: beql        $v0, $zero, L_8022BBEC
    if (ctx->r2 == 0) {
        // 0x8022B9AC: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_8022BBEC;
    }
    goto skip_0;
    // 0x8022B9AC: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x8022B9B0: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022B9B4: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022B9B8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022B9BC: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022B9C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B9C4: bgtz        $v0, L_8022BA04
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022B9C8: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022BA04;
    }
    // 0x8022B9C8: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022B9CC: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022B9D0: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022B9D4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8022B9D8: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x8022B9DC: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x8022B9E0: ori         $v0, $v0, 0x48
    ctx->r2 = ctx->r2 | 0X48;
    // 0x8022B9E4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022B9E8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022B9EC: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x8022B9F0: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x8022B9F4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022B9F8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022B9FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BA00: lbu         $a0, 0x9($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X9);
L_8022BA04:
    // 0x8022BA04: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x8022BA08: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022BA0C: beq         $v0, $zero, L_8022BB70
    if (ctx->r2 == 0) {
        // 0x8022BA10: lui         $v1, 0x2000
        ctx->r3 = S32(0X2000 << 16);
            goto L_8022BB70;
    }
    // 0x8022BA10: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x8022BA14: lhu         $v0, 0x332($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X332);
    // 0x8022BA18: lw          $v1, 0x33C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X33C);
    // 0x8022BA1C: addu        $a1, $v0, $a0
    ctx->r5 = ADD32(ctx->r2, ctx->r4);
    // 0x8022BA20: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x8022BA24: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022BA28: bne         $v1, $zero, L_8022BA90
    if (ctx->r3 != 0) {
        // 0x8022BA2C: sh          $a1, 0x332($s0)
        MEM_H(0X332, ctx->r16) = ctx->r5;
            goto L_8022BA90;
    }
    // 0x8022BA2C: sh          $a1, 0x332($s0)
    MEM_H(0X332, ctx->r16) = ctx->r5;
    // 0x8022BA30: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022BA34: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022BA38: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022BA3C: lh          $a0, 0x32E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X32E);
    // 0x8022BA40: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BA44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BA48: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8022BA4C: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x8022BA50: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BA54: lbu         $v1, 0x9($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9);
    // 0x8022BA58: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x8022BA5C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BA60: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022BA64: beq         $v0, $zero, L_8022BA90
    if (ctx->r2 == 0) {
        // 0x8022BA68: nop
    
            goto L_8022BA90;
    }
    // 0x8022BA68: nop

    // 0x8022BA6C: bnel        $a0, $zero, L_8022BBCC
    if (ctx->r4 != 0) {
        // 0x8022BA70: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022BBCC;
    }
    goto skip_1;
    // 0x8022BA70: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    skip_1:
    // 0x8022BA74: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BA78: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022BA7C: bnel        $v1, $v0, L_8022BA84
    if (ctx->r3 != ctx->r2) {
        // 0x8022BA80: sh          $zero, 0xA($s0)
        MEM_H(0XA, ctx->r16) = 0;
            goto L_8022BA84;
    }
    goto skip_2;
    // 0x8022BA80: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    skip_2:
L_8022BA84:
    // 0x8022BA84: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022BA88: j           L_8022BBC8
    // 0x8022BA8C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022BBC8;
    // 0x8022BA8C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022BA90:
    // 0x8022BA90: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BA94: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022BA98: beq         $v1, $v0, L_8022BBC8
    if (ctx->r3 == ctx->r2) {
        // 0x8022BA9C: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_8022BBC8;
    }
    // 0x8022BA9C: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8022BAA0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022BAA4: jal         0x8002A33C
    // 0x8022BAA8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022BAA8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8022BAAC: lhu         $v0, 0x22($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X22);
    // 0x8022BAB0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022BAB4: beq         $v0, $zero, L_8022BB04
    if (ctx->r2 == 0) {
        // 0x8022BAB8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022BB04;
    }
    // 0x8022BAB8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BABC: jal         0x8004EC38
    // 0x8022BAC0: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x8022BAC0: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    after_1:
    // 0x8022BAC4: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022BAC8: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8022BACC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BAD0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BAD4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022BAD8: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x8022BADC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022BAE0: slti        $v1, $v1, 0x800
    ctx->r3 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x8022BAE4: beq         $v1, $zero, L_8022BAFC
    if (ctx->r3 == 0) {
        // 0x8022BAE8: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8022BAFC;
    }
    // 0x8022BAE8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022BAEC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022BAF0: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022BAF4: j           L_8022BB64
    // 0x8022BAF8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8022BB64;
    // 0x8022BAF8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022BAFC:
    // 0x8022BAFC: j           L_8022BB50
    // 0x8022BB00: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_8022BB50;
    // 0x8022BB00: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_8022BB04:
    // 0x8022BB04: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022BB08: addiu       $a0, $a0, -0x7D74
    ctx->r4 = ADD32(ctx->r4, -0X7D74);
    // 0x8022BB0C: jal         0x8004EC38
    // 0x8022BB10: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    func_8004EC38_2A038(rdram, ctx);
        goto after_2;
    // 0x8022BB10: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    after_2:
    // 0x8022BB14: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x8022BB18: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8022BB1C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BB20: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022BB24: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022BB28: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x8022BB2C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022BB30: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8022BB34: beq         $v0, $zero, L_8022BB4C
    if (ctx->r2 == 0) {
        // 0x8022BB38: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022BB4C;
    }
    // 0x8022BB38: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022BB3C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022BB40: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022BB44: j           L_8022BB64
    // 0x8022BB48: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8022BB64;
    // 0x8022BB48: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022BB4C:
    // 0x8022BB4C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8022BB50:
    // 0x8022BB50: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022BB54: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8022BB58: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022BB5C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022BB60: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022BB64:
    // 0x8022BB64: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022BB68: j           L_8022BBD4
    // 0x8022BB6C: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
        goto L_8022BBD4;
    // 0x8022BB6C: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
L_8022BB70:
    // 0x8022BB70: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x8022BB74: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022BB78: bne         $v0, $zero, L_8022BBB8
    if (ctx->r2 != 0) {
        // 0x8022BB7C: nop
    
            goto L_8022BBB8;
    }
    // 0x8022BB7C: nop

    // 0x8022BB80: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022BB84: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022BB88: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022BB8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022BB90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022BB94: lh          $v1, 0x32E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X32E);
    // 0x8022BB98: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022BB9C: lh          $a0, 0x332($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X332);
    // 0x8022BBA0: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022BBA4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022BBA8: lbu         $v0, 0x9($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X9);
    // 0x8022BBAC: slt         $a0, $a0, $v0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022BBB0: bne         $a0, $zero, L_8022BBCC
    if (ctx->r4 != 0) {
        // 0x8022BBB4: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022BBCC;
    }
    // 0x8022BBB4: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_8022BBB8:
    // 0x8022BBB8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022BBBC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022BBC0: bne         $v1, $v0, L_8022BBCC
    if (ctx->r3 != ctx->r2) {
        // 0x8022BBC4: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_8022BBCC;
    }
    // 0x8022BBC4: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_8022BBC8:
    // 0x8022BBC8: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_8022BBCC:
    // 0x8022BBCC: jal         0x8002A33C
    // 0x8022BBD0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022BBD0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_8022BBD4:
    // 0x8022BBD4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022BBD8: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x8022BBDC: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022BBE0: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022BBE4: j           L_8022BBF4
    // 0x8022BBE8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
        goto L_8022BBF4;
    // 0x8022BBE8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
L_8022BBEC:
    // 0x8022BBEC: jal         0x8002A33C
    // 0x8022BBF0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022BBF0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
L_8022BBF4:
    // 0x8022BBF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022BBF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022BBFC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022BC00: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BC04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BC08: jr          $ra
    // 0x8022BC0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BC0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802266B0_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802266B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802266B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802266B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802266BC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802266C0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802266C4: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x802266C8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802266CC: bne         $v0, $zero, L_80226B10
    if (ctx->r2 != 0) {
        // 0x802266D0: addiu       $s1, $s0, 0x3E0
        ctx->r17 = ADD32(ctx->r16, 0X3E0);
            goto L_80226B10;
    }
    // 0x802266D0: addiu       $s1, $s0, 0x3E0
    ctx->r17 = ADD32(ctx->r16, 0X3E0);
    // 0x802266D4: lbu         $a0, 0x439($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X439);
    // 0x802266D8: jal         0x80053ED8
    // 0x802266DC: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_0;
    // 0x802266DC: nop

    after_0:
    // 0x802266E0: lh          $v1, 0x64($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X64);
    // 0x802266E4: bne         $v1, $zero, L_802266F4
    if (ctx->r3 != 0) {
        // 0x802266E8: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_802266F4;
    }
    // 0x802266E8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x802266EC: j           L_802266F8
    // 0x802266F0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_802266F8;
    // 0x802266F0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_802266F4:
    // 0x802266F4: addiu       $v0, $zero, -0x4
    ctx->r2 = ADD32(0, -0X4);
L_802266F8:
    // 0x802266F8: sh          $v0, 0x426($s0)
    MEM_H(0X426, ctx->r16) = ctx->r2;
    // 0x802266FC: lhu         $v0, 0x48($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X48);
    // 0x80226700: lhu         $a0, 0x46($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X46);
    // 0x80226704: lhu         $v1, 0x4C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4C);
    // 0x80226708: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022670C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226710: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226714: sh          $v1, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = ctx->r3;
    // 0x80226718: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022671C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80226720: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x80226724: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80226728: bne         $v1, $v0, L_80226744
    if (ctx->r3 != ctx->r2) {
        // 0x8022672C: addiu       $v0, $zero, 0x100
        ctx->r2 = ADD32(0, 0X100);
            goto L_80226744;
    }
    // 0x8022672C: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x80226730: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x80226734: bne         $v0, $zero, L_8022675C
    if (ctx->r2 != 0) {
        // 0x80226738: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022675C;
    }
    // 0x80226738: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022673C: j           L_8022675C
    // 0x80226740: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022675C;
    // 0x80226740: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80226744:
    // 0x80226744: bne         $v1, $v0, L_80226770
    if (ctx->r3 != ctx->r2) {
        // 0x80226748: nop
    
            goto L_80226770;
    }
    // 0x80226748: nop

    // 0x8022674C: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x80226750: bne         $v0, $zero, L_8022675C
    if (ctx->r2 != 0) {
        // 0x80226754: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022675C;
    }
    // 0x80226754: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80226758: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_8022675C:
    // 0x8022675C: sb          $v0, 0xAC($a2)
    MEM_B(0XAC, ctx->r6) = ctx->r2;
    // 0x80226760: lbu         $a1, 0xAC($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0XAC);
    // 0x80226764: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x80226768: jal         0x80050294
    // 0x8022676C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022676C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
L_80226770:
    // 0x80226770: lh          $v0, 0x64($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X64);
    // 0x80226774: bne         $v0, $zero, L_8022692C
    if (ctx->r2 != 0) {
        // 0x80226778: nop
    
            goto L_8022692C;
    }
    // 0x80226778: nop

    // 0x8022677C: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x80226780: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80226784: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226788: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022678C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226790: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80226794: lbu         $v1, -0x7F40($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X7F40);
    // 0x80226798: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022679C: bne         $v1, $v0, L_802267D4
    if (ctx->r3 != ctx->r2) {
        // 0x802267A0: nop
    
            goto L_802267D4;
    }
    // 0x802267A0: nop

    // 0x802267A4: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x802267A8: slti        $v0, $v0, 0xC00
    ctx->r2 = SIGNED(ctx->r2) < 0XC00 ? 1 : 0;
    // 0x802267AC: beq         $v0, $zero, L_80226AD8
    if (ctx->r2 == 0) {
        // 0x802267B0: nop
    
            goto L_80226AD8;
    }
    // 0x802267B0: nop

    // 0x802267B4: jal         0x80227A10
    // 0x802267B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227A10_ovl31(rdram, ctx);
        goto after_2;
    // 0x802267B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802267BC: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x802267C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802267C4: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x802267C8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802267CC: j           L_80226B04
    // 0x802267D0: addiu       $v1, $zero, 0xC00
    ctx->r3 = ADD32(0, 0XC00);
        goto L_80226B04;
    // 0x802267D0: addiu       $v1, $zero, 0xC00
    ctx->r3 = ADD32(0, 0XC00);
L_802267D4:
    // 0x802267D4: bne         $v1, $zero, L_8022680C
    if (ctx->r3 != 0) {
        // 0x802267D8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022680C;
    }
    // 0x802267D8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802267DC: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x802267E0: slti        $v0, $v0, 0x400
    ctx->r2 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x802267E4: bne         $v0, $zero, L_80226AD8
    if (ctx->r2 != 0) {
        // 0x802267E8: nop
    
            goto L_80226AD8;
    }
    // 0x802267E8: nop

    // 0x802267EC: jal         0x80227A10
    // 0x802267F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227A10_ovl31(rdram, ctx);
        goto after_3;
    // 0x802267F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802267F4: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x802267F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802267FC: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x80226800: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226804: j           L_80226B08
    // 0x80226808: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
        goto L_80226B08;
    // 0x80226808: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
L_8022680C:
    // 0x8022680C: bne         $v1, $v0, L_8022682C
    if (ctx->r3 != ctx->r2) {
        // 0x80226810: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022682C;
    }
    // 0x80226810: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226814: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x80226818: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8022681C: beq         $v0, $zero, L_80226AE8
    if (ctx->r2 == 0) {
        // 0x80226820: nop
    
            goto L_80226AE8;
    }
    // 0x80226820: nop

    // 0x80226824: j           L_80226AD8
    // 0x80226828: nop

        goto L_80226AD8;
    // 0x80226828: nop

L_8022682C:
    // 0x8022682C: bne         $v1, $v0, L_8022685C
    if (ctx->r3 != ctx->r2) {
        // 0x80226830: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8022685C;
    }
    // 0x80226830: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226834: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x80226838: slti        $v0, $v0, 0xC01
    ctx->r2 = SIGNED(ctx->r2) < 0XC01 ? 1 : 0;
    // 0x8022683C: bne         $v0, $zero, L_80226AD8
    if (ctx->r2 != 0) {
        // 0x80226840: nop
    
            goto L_80226AD8;
    }
    // 0x80226840: nop

    // 0x80226844: jal         0x80227A10
    // 0x80226848: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227A10_ovl31(rdram, ctx);
        goto after_4;
    // 0x80226848: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022684C: sb          $zero, 0x58($s1)
    MEM_B(0X58, ctx->r17) = 0;
    // 0x80226850: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226854: j           L_80226B04
    // 0x80226858: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
        goto L_80226B04;
    // 0x80226858: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
L_8022685C:
    // 0x8022685C: bne         $v1, $v0, L_80226894
    if (ctx->r3 != ctx->r2) {
        // 0x80226860: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80226894;
    }
    // 0x80226860: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226864: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x80226868: slti        $v0, $v0, 0xC01
    ctx->r2 = SIGNED(ctx->r2) < 0XC01 ? 1 : 0;
    // 0x8022686C: bne         $v0, $zero, L_80226AD8
    if (ctx->r2 != 0) {
        // 0x80226870: nop
    
            goto L_80226AD8;
    }
    // 0x80226870: nop

    // 0x80226874: jal         0x80227A10
    // 0x80226878: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227A10_ovl31(rdram, ctx);
        goto after_5;
    // 0x80226878: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022687C: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x80226880: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226884: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x80226888: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022688C: j           L_80226B04
    // 0x80226890: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
        goto L_80226B04;
    // 0x80226890: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
L_80226894:
    // 0x80226894: bne         $v1, $v0, L_802268CC
    if (ctx->r3 != ctx->r2) {
        // 0x80226898: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_802268CC;
    }
    // 0x80226898: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022689C: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x802268A0: slti        $v0, $v0, 0xC00
    ctx->r2 = SIGNED(ctx->r2) < 0XC00 ? 1 : 0;
    // 0x802268A4: beq         $v0, $zero, L_80226AD8
    if (ctx->r2 == 0) {
        // 0x802268A8: nop
    
            goto L_80226AD8;
    }
    // 0x802268A8: nop

    // 0x802268AC: jal         0x80227A10
    // 0x802268B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227A10_ovl31(rdram, ctx);
        goto after_6;
    // 0x802268B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x802268B4: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x802268B8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802268BC: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x802268C0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802268C4: j           L_80226B04
    // 0x802268C8: addiu       $v1, $zero, 0xC00
    ctx->r3 = ADD32(0, 0XC00);
        goto L_80226B04;
    // 0x802268C8: addiu       $v1, $zero, 0xC00
    ctx->r3 = ADD32(0, 0XC00);
L_802268CC:
    // 0x802268CC: bne         $v1, $v0, L_80226900
    if (ctx->r3 != ctx->r2) {
        // 0x802268D0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80226900;
    }
    // 0x802268D0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x802268D4: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x802268D8: slti        $v0, $v0, 0x401
    ctx->r2 = SIGNED(ctx->r2) < 0X401 ? 1 : 0;
    // 0x802268DC: bne         $v0, $zero, L_80226AD8
    if (ctx->r2 != 0) {
        // 0x802268E0: nop
    
            goto L_80226AD8;
    }
    // 0x802268E0: nop

    // 0x802268E4: jal         0x80227A10
    // 0x802268E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227A10_ovl31(rdram, ctx);
        goto after_7;
    // 0x802268E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x802268EC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x802268F0: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x802268F4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802268F8: j           L_80226B08
    // 0x802268FC: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
        goto L_80226B08;
    // 0x802268FC: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
L_80226900:
    // 0x80226900: bne         $v1, $v0, L_80226B10
    if (ctx->r3 != ctx->r2) {
        // 0x80226904: nop
    
            goto L_80226B10;
    }
    // 0x80226904: nop

    // 0x80226908: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x8022690C: slti        $v0, $v0, 0x801
    ctx->r2 = SIGNED(ctx->r2) < 0X801 ? 1 : 0;
    // 0x80226910: bne         $v0, $zero, L_80226AD8
    if (ctx->r2 != 0) {
        // 0x80226914: nop
    
            goto L_80226AD8;
    }
    // 0x80226914: nop

    // 0x80226918: jal         0x80227A10
    // 0x8022691C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227A10_ovl31(rdram, ctx);
        goto after_8;
    // 0x8022691C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80226920: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x80226924: j           L_80226AF8
    // 0x80226928: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        goto L_80226AF8;
    // 0x80226928: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_8022692C:
    // 0x8022692C: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x80226930: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80226934: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226938: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8022693C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226940: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80226944: lbu         $v1, -0x7F40($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X7F40);
    // 0x80226948: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022694C: bne         $v1, $v0, L_80226984
    if (ctx->r3 != ctx->r2) {
        // 0x80226950: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80226984;
    }
    // 0x80226950: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226954: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x80226958: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x8022695C: beq         $v0, $zero, L_80226AD8
    if (ctx->r2 == 0) {
        // 0x80226960: nop
    
            goto L_80226AD8;
    }
    // 0x80226960: nop

    // 0x80226964: jal         0x80227A10
    // 0x80226968: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227A10_ovl31(rdram, ctx);
        goto after_9;
    // 0x80226968: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8022696C: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x80226970: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226974: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x80226978: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022697C: j           L_80226B04
    // 0x80226980: addiu       $v1, $zero, 0xC00
    ctx->r3 = ADD32(0, 0XC00);
        goto L_80226B04;
    // 0x80226980: addiu       $v1, $zero, 0xC00
    ctx->r3 = ADD32(0, 0XC00);
L_80226984:
    // 0x80226984: bne         $v1, $v0, L_802269BC
    if (ctx->r3 != ctx->r2) {
        // 0x80226988: nop
    
            goto L_802269BC;
    }
    // 0x80226988: nop

    // 0x8022698C: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x80226990: slti        $v0, $v0, 0x400
    ctx->r2 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x80226994: beq         $v0, $zero, L_80226AD8
    if (ctx->r2 == 0) {
        // 0x80226998: nop
    
            goto L_80226AD8;
    }
    // 0x80226998: nop

    // 0x8022699C: jal         0x80227A10
    // 0x802269A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227A10_ovl31(rdram, ctx);
        goto after_10;
    // 0x802269A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x802269A4: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x802269A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802269AC: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x802269B0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802269B4: j           L_80226B04
    // 0x802269B8: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
        goto L_80226B04;
    // 0x802269B8: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
L_802269BC:
    // 0x802269BC: bne         $v1, $zero, L_802269E8
    if (ctx->r3 != 0) {
        // 0x802269C0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802269E8;
    }
    // 0x802269C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802269C4: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x802269C8: slti        $v0, $v0, 0x401
    ctx->r2 = SIGNED(ctx->r2) < 0X401 ? 1 : 0;
    // 0x802269CC: bne         $v0, $zero, L_80226AD8
    if (ctx->r2 != 0) {
        // 0x802269D0: nop
    
            goto L_80226AD8;
    }
    // 0x802269D0: nop

    // 0x802269D4: jal         0x80227A10
    // 0x802269D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227A10_ovl31(rdram, ctx);
        goto after_11;
    // 0x802269D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x802269DC: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x802269E0: j           L_80226AF8
    // 0x802269E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        goto L_80226AF8;
    // 0x802269E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_802269E8:
    // 0x802269E8: bne         $v1, $v0, L_80226A1C
    if (ctx->r3 != ctx->r2) {
        // 0x802269EC: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80226A1C;
    }
    // 0x802269EC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802269F0: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x802269F4: slti        $v0, $v0, 0xC00
    ctx->r2 = SIGNED(ctx->r2) < 0XC00 ? 1 : 0;
    // 0x802269F8: beq         $v0, $zero, L_80226AD8
    if (ctx->r2 == 0) {
        // 0x802269FC: nop
    
            goto L_80226AD8;
    }
    // 0x802269FC: nop

    // 0x80226A00: jal         0x80227A10
    // 0x80226A04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227A10_ovl31(rdram, ctx);
        goto after_12;
    // 0x80226A04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x80226A08: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226A0C: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x80226A10: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226A14: j           L_80226B08
    // 0x80226A18: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
        goto L_80226B08;
    // 0x80226A18: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
L_80226A1C:
    // 0x80226A1C: bne         $v1, $v0, L_80226A54
    if (ctx->r3 != ctx->r2) {
        // 0x80226A20: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80226A54;
    }
    // 0x80226A20: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226A24: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x80226A28: slti        $v0, $v0, 0xC00
    ctx->r2 = SIGNED(ctx->r2) < 0XC00 ? 1 : 0;
    // 0x80226A2C: beq         $v0, $zero, L_80226AD8
    if (ctx->r2 == 0) {
        // 0x80226A30: nop
    
            goto L_80226AD8;
    }
    // 0x80226A30: nop

    // 0x80226A34: jal         0x80227A10
    // 0x80226A38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227A10_ovl31(rdram, ctx);
        goto after_13;
    // 0x80226A38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_13:
    // 0x80226A3C: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x80226A40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226A44: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x80226A48: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226A4C: j           L_80226B08
    // 0x80226A50: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
        goto L_80226B08;
    // 0x80226A50: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
L_80226A54:
    // 0x80226A54: bne         $v1, $v0, L_80226A8C
    if (ctx->r3 != ctx->r2) {
        // 0x80226A58: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80226A8C;
    }
    // 0x80226A58: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226A5C: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x80226A60: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x80226A64: beq         $v0, $zero, L_80226AD8
    if (ctx->r2 == 0) {
        // 0x80226A68: nop
    
            goto L_80226AD8;
    }
    // 0x80226A68: nop

    // 0x80226A6C: jal         0x80227A10
    // 0x80226A70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227A10_ovl31(rdram, ctx);
        goto after_14;
    // 0x80226A70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_14:
    // 0x80226A74: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x80226A78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226A7C: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x80226A80: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226A84: j           L_80226B04
    // 0x80226A88: addiu       $v1, $zero, 0xC00
    ctx->r3 = ADD32(0, 0XC00);
        goto L_80226B04;
    // 0x80226A88: addiu       $v1, $zero, 0xC00
    ctx->r3 = ADD32(0, 0XC00);
L_80226A8C:
    // 0x80226A8C: bne         $v1, $v0, L_80226AC0
    if (ctx->r3 != ctx->r2) {
        // 0x80226A90: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80226AC0;
    }
    // 0x80226A90: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80226A94: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x80226A98: slti        $v0, $v0, 0x400
    ctx->r2 = SIGNED(ctx->r2) < 0X400 ? 1 : 0;
    // 0x80226A9C: beq         $v0, $zero, L_80226AD8
    if (ctx->r2 == 0) {
        // 0x80226AA0: nop
    
            goto L_80226AD8;
    }
    // 0x80226AA0: nop

    // 0x80226AA4: jal         0x80227A10
    // 0x80226AA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227A10_ovl31(rdram, ctx);
        goto after_15;
    // 0x80226AA8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_15:
    // 0x80226AAC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80226AB0: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x80226AB4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226AB8: j           L_80226B04
    // 0x80226ABC: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
        goto L_80226B04;
    // 0x80226ABC: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
L_80226AC0:
    // 0x80226AC0: bne         $v1, $v0, L_80226B10
    if (ctx->r3 != ctx->r2) {
        // 0x80226AC4: nop
    
            goto L_80226B10;
    }
    // 0x80226AC4: nop

    // 0x80226AC8: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x80226ACC: slti        $v0, $v0, 0x401
    ctx->r2 = SIGNED(ctx->r2) < 0X401 ? 1 : 0;
    // 0x80226AD0: beq         $v0, $zero, L_80226AE8
    if (ctx->r2 == 0) {
        // 0x80226AD4: nop
    
            goto L_80226AE8;
    }
    // 0x80226AD4: nop

L_80226AD8:
    // 0x80226AD8: jal         0x80227970
    // 0x80226ADC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227970_ovl31(rdram, ctx);
        goto after_16;
    // 0x80226ADC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
    // 0x80226AE0: j           L_80226B10
    // 0x80226AE4: nop

        goto L_80226B10;
    // 0x80226AE4: nop

L_80226AE8:
    // 0x80226AE8: jal         0x80227A10
    // 0x80226AEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227A10_ovl31(rdram, ctx);
        goto after_17;
    // 0x80226AEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_17:
    // 0x80226AF0: lbu         $v0, 0x58($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X58);
    // 0x80226AF4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80226AF8:
    // 0x80226AF8: sb          $v0, 0x58($s1)
    MEM_B(0X58, ctx->r17) = ctx->r2;
    // 0x80226AFC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226B00: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
L_80226B04:
    // 0x80226B04: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80226B08:
    // 0x80226B08: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226B0C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80226B10:
    // 0x80226B10: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226B14: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226B18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226B1C: jr          $ra
    // 0x80226B20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226B20: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F9EC_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F9EC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022F9F0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022F9F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F9F8: addiu       $a0, $s0, 0x360
    ctx->r4 = ADD32(ctx->r16, 0X360);
    // 0x8022F9FC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022FA00: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022FA04: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022FA08: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022FA0C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022FA10: jal         0x800540D0
    // 0x8022FA14: addiu       $s2, $s0, 0x1D8
    ctx->r18 = ADD32(ctx->r16, 0X1D8);
    func_800540D0_2F4D0(rdram, ctx);
        goto after_0;
    // 0x8022FA14: addiu       $s2, $s0, 0x1D8
    ctx->r18 = ADD32(ctx->r16, 0X1D8);
    after_0:
    // 0x8022FA18: bne         $v0, $zero, L_8022FA2C
    if (ctx->r2 != 0) {
        // 0x8022FA1C: nop
    
            goto L_8022FA2C;
    }
    // 0x8022FA1C: nop

    // 0x8022FA20: lbu         $v0, 0x3B4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3B4);
    // 0x8022FA24: j           L_8022FA34
    // 0x8022FA28: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
        goto L_8022FA34;
    // 0x8022FA28: andi        $v0, $v0, 0xEF
    ctx->r2 = ctx->r2 & 0XEF;
L_8022FA2C:
    // 0x8022FA2C: lbu         $v0, 0x3B4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3B4);
    // 0x8022FA30: ori         $v0, $v0, 0x10
    ctx->r2 = ctx->r2 | 0X10;
L_8022FA34:
    // 0x8022FA34: sb          $v0, 0x3B4($s0)
    MEM_B(0X3B4, ctx->r16) = ctx->r2;
    // 0x8022FA38: lhu         $v0, 0x66($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X66);
    // 0x8022FA3C: beq         $v0, $zero, L_8022FA48
    if (ctx->r2 == 0) {
        // 0x8022FA40: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022FA48;
    }
    // 0x8022FA40: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022FA44: sh          $v0, 0x66($s1)
    MEM_H(0X66, ctx->r17) = ctx->r2;
L_8022FA48:
    // 0x8022FA48: lw          $v1, 0x8($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X8);
    // 0x8022FA4C: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8022FA50: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8022FA54: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x8022FA58: beq         $a0, $zero, L_8022FBA4
    if (ctx->r4 == 0) {
        // 0x8022FA5C: nop
    
            goto L_8022FBA4;
    }
    // 0x8022FA5C: nop

    // 0x8022FA60: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022FA64: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x8022FA68: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022FA6C: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022FA70: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FA74: bgtz        $v0, L_8022FAB8
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022FA78: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_8022FAB8;
    }
    // 0x8022FA78: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x8022FA7C: lbu         $v0, 0x6C($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6C);
    // 0x8022FA80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FA84: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022FA88: andi        $v0, $v0, 0xF7
    ctx->r2 = ctx->r2 & 0XF7;
    // 0x8022FA8C: sb          $v0, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r2;
    // 0x8022FA90: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022FA94: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022FA98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FA9C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022FAA0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022FAA4: jal         0x80050294
    // 0x8022FAA8: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022FAA8: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
    after_1:
    // 0x8022FAAC: sh          $zero, 0x0($s2)
    MEM_H(0X0, ctx->r18) = 0;
    // 0x8022FAB0: j           L_8022FBA4
    // 0x8022FAB4: sb          $zero, 0x5($s2)
    MEM_B(0X5, ctx->r18) = 0;
        goto L_8022FBA4;
    // 0x8022FAB4: sb          $zero, 0x5($s2)
    MEM_B(0X5, ctx->r18) = 0;
L_8022FAB8:
    // 0x8022FAB8: lhu         $v0, 0x66($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X66);
    // 0x8022FABC: lbu         $a1, 0x6C($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X6C);
    // 0x8022FAC0: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x8022FAC4: andi        $v0, $a1, 0x4
    ctx->r2 = ctx->r5 & 0X4;
    // 0x8022FAC8: bne         $v0, $zero, L_8022FB48
    if (ctx->r2 != 0) {
        // 0x8022FACC: sh          $a0, 0x66($s1)
        MEM_H(0X66, ctx->r17) = ctx->r4;
            goto L_8022FB48;
    }
    // 0x8022FACC: sh          $a0, 0x66($s1)
    MEM_H(0X66, ctx->r17) = ctx->r4;
    // 0x8022FAD0: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022FAD4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022FAD8: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022FADC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FAE0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FAE4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022FAE8: lbu         $v0, 0x9($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X9);
    // 0x8022FAEC: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
    // 0x8022FAF0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022FAF4: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022FAF8: bne         $v1, $zero, L_8022FB4C
    if (ctx->r3 != 0) {
        // 0x8022FAFC: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_8022FB4C;
    }
    // 0x8022FAFC: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x8022FB00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FB04: ori         $v0, $a1, 0x4
    ctx->r2 = ctx->r5 | 0X4;
    // 0x8022FB08: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022FB0C: sb          $v0, 0x6C($s1)
    MEM_B(0X6C, ctx->r17) = ctx->r2;
    // 0x8022FB10: sh          $zero, 0x66($s1)
    MEM_H(0X66, ctx->r17) = 0;
    // 0x8022FB14: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022FB18: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022FB1C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FB20: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022FB24: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022FB28: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022FB2C: jal         0x80050294
    // 0x8022FB30: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022FB30: sb          $v1, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r3;
    after_2:
    // 0x8022FB34: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x8022FB38: jal         0x8002A33C
    // 0x8022FB3C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x8022FB3C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x8022FB40: j           L_8022FBA0
    // 0x8022FB44: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
        goto L_8022FBA0;
    // 0x8022FB44: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_8022FB48:
    // 0x8022FB48: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_8022FB4C:
    // 0x8022FB4C: jal         0x8002A33C
    // 0x8022FB50: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022FB50: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
    // 0x8022FB54: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022FB58: xori        $v1, $v0, 0x2
    ctx->r3 = ctx->r2 ^ 0X2;
    // 0x8022FB5C: sltu        $v1, $zero, $v1
    ctx->r3 = 0 < ctx->r3 ? 1 : 0;
    // 0x8022FB60: xori        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 ^ 0X4;
    // 0x8022FB64: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8022FB68: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022FB6C: beq         $v1, $zero, L_8022FB9C
    if (ctx->r3 == 0) {
        // 0x8022FB70: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022FB9C;
    }
    // 0x8022FB70: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022FB74: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022FB78: bne         $v1, $zero, L_8022FB9C
    if (ctx->r3 != 0) {
        // 0x8022FB7C: sb          $v0, 0x9($s0)
        MEM_B(0X9, ctx->r16) = ctx->r2;
            goto L_8022FB9C;
    }
    // 0x8022FB7C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022FB80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FB84: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022FB88: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022FB8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FB90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FB94: jal         0x80050294
    // 0x8022FB98: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022FB98: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_5:
L_8022FB9C:
    // 0x8022FB9C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
L_8022FBA0:
    // 0x8022FBA0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8022FBA4:
    // 0x8022FBA4: lbu         $v0, 0x6C($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6C);
    // 0x8022FBA8: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022FBAC: beq         $v0, $zero, L_8022FBE0
    if (ctx->r2 == 0) {
        // 0x8022FBB0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022FBE0;
    }
    // 0x8022FBB0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022FBB4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022FBB8: beq         $v1, $v0, L_8022FBE0
    if (ctx->r3 == ctx->r2) {
        // 0x8022FBBC: nop
    
            goto L_8022FBE0;
    }
    // 0x8022FBBC: nop

    // 0x8022FBC0: lw          $v0, 0x60($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X60);
    // 0x8022FBC4: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022FBC8: bne         $v0, $zero, L_8022FBDC
    if (ctx->r2 != 0) {
        // 0x8022FBCC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022FBDC;
    }
    // 0x8022FBCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FBD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FBD4: bne         $v1, $v0, L_8022FBE0
    if (ctx->r3 != ctx->r2) {
        // 0x8022FBD8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022FBE0;
    }
    // 0x8022FBD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022FBDC:
    // 0x8022FBDC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022FBE0:
    // 0x8022FBE0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022FBE4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022FBE8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022FBEC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022FBF0: lw          $v0, -0x7AD4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7AD4);
    // 0x8022FBF4: jalr        $v0
    // 0x8022FBF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x8022FBF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022FBFC: jal         0x8005044C
    // 0x8022FC00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_7;
    // 0x8022FC00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022FC04: lbu         $v0, 0xA6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA6);
    // 0x8022FC08: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022FC0C: beq         $v0, $zero, L_8022FC1C
    if (ctx->r2 == 0) {
        // 0x8022FC10: addiu       $a0, $zero, 0x1BD
        ctx->r4 = ADD32(0, 0X1BD);
            goto L_8022FC1C;
    }
    // 0x8022FC10: addiu       $a0, $zero, 0x1BD
    ctx->r4 = ADD32(0, 0X1BD);
    // 0x8022FC14: jal         0x8002A33C
    // 0x8022FC18: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x8022FC18: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_8:
L_8022FC1C:
    // 0x8022FC1C: jal         0x80040F30
    // 0x8022FC20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_9;
    // 0x8022FC20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8022FC24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FC28: jal         0x8003E934
    // 0x8022FC2C: sw          $v0, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_10;
    // 0x8022FC2C: sw          $v0, 0x60($s1)
    MEM_W(0X60, ctx->r17) = ctx->r2;
    after_10:
    // 0x8022FC30: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022FC34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FC38: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022FC3C: lbu         $v0, 0x6C($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6C);
    // 0x8022FC40: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022FC44: beq         $v0, $zero, L_8022FC98
    if (ctx->r2 == 0) {
        // 0x8022FC48: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022FC98;
    }
    // 0x8022FC48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FC4C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022FC50: beq         $v1, $v0, L_8022FC98
    if (ctx->r3 == ctx->r2) {
        // 0x8022FC54: nop
    
            goto L_8022FC98;
    }
    // 0x8022FC54: nop

    // 0x8022FC58: lw          $v0, 0x60($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X60);
    // 0x8022FC5C: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022FC60: beq         $v0, $zero, L_8022FC98
    if (ctx->r2 == 0) {
        // 0x8022FC64: nop
    
            goto L_8022FC98;
    }
    // 0x8022FC64: nop

    // 0x8022FC68: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FC6C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022FC70: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022FC74: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
    // 0x8022FC78: lh          $v0, 0x56($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X56);
    // 0x8022FC7C: lh          $v1, 0x5E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X5E);
    // 0x8022FC80: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022FC84: blez        $v0, L_8022FC94
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022FC88: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022FC94;
    }
    // 0x8022FC88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FC8C: j           L_8022FC98
    // 0x8022FC90: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
        goto L_8022FC98;
    // 0x8022FC90: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
L_8022FC94:
    // 0x8022FC94: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
L_8022FC98:
    // 0x8022FC98: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022FC9C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022FCA0: beq         $v0, $zero, L_8022FCB8
    if (ctx->r2 == 0) {
        // 0x8022FCA4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022FCB8;
    }
    // 0x8022FCA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FCA8: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    // 0x8022FCAC: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022FCB0: jal         0x8003B564
    // 0x8022FCB4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_11;
    // 0x8022FCB4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_11:
L_8022FCB8:
    // 0x8022FCB8: lbu         $v0, 0x6C($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6C);
    // 0x8022FCBC: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022FCC0: beq         $v0, $zero, L_8022FD1C
    if (ctx->r2 == 0) {
        // 0x8022FCC4: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022FD1C;
    }
    // 0x8022FCC4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022FCC8: lhu         $v0, 0x180($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X180);
    // 0x8022FCCC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022FCD0: lhu         $v0, 0x182($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X182);
    // 0x8022FCD4: addiu       $v0, $v0, -0x2E
    ctx->r2 = ADD32(ctx->r2, -0X2E);
    // 0x8022FCD8: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x8022FCDC: lhu         $v0, 0x184($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X184);
    // 0x8022FCE0: addiu       $a1, $zero, 0xE0
    ctx->r5 = ADD32(0, 0XE0);
    // 0x8022FCE4: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x8022FCE8: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022FCEC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FCF0: addiu       $v0, $a0, 0x8
    ctx->r2 = ADD32(ctx->r4, 0X8);
    // 0x8022FCF4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022FCF8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022FCFC: lb          $v1, 0x73($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X73);
    // 0x8022FD00: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022FD04: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x8022FD08: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022FD0C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022FD10: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022FD14: jal         0x80051E18
    // 0x8022FD18: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_12;
    // 0x8022FD18: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_12:
L_8022FD1C:
    // 0x8022FD1C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022FD20: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022FD24: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022FD28: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022FD2C: jr          $ra
    // 0x8022FD30: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022FD30: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023709C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023709C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802370A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802370A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802370A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802370AC: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802370B0: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x802370B4: beq         $v0, $zero, L_80237148
    if (ctx->r2 == 0) {
        // 0x802370B8: addiu       $a0, $s0, 0x308
        ctx->r4 = ADD32(ctx->r16, 0X308);
            goto L_80237148;
    }
    // 0x802370B8: addiu       $a0, $s0, 0x308
    ctx->r4 = ADD32(ctx->r16, 0X308);
    // 0x802370BC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802370C0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802370C4: addu        $at, $at, $v0
    gpr jr_addend_802370CC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802370C8: lw          $v0, -0x6FD0($at)
    ctx->r2 = ADD32(ctx->r1, -0X6FD0);
    // 0x802370CC: jr          $v0
    // 0x802370D0: nop

    switch (jr_addend_802370CC >> 2) {
        case 0: goto L_802370D4; break;
        case 1: goto L_802370EC; break;
        case 2: goto L_8023710C; break;
        case 3: goto L_802370EC; break;
        case 4: goto L_8023710C; break;
        case 5: goto L_802370EC; break;
        case 6: goto L_8023710C; break;
        case 7: goto L_80237134; break;
        default: switch_error(__func__, 0x802370CC, 0x80239030);
    }
    // 0x802370D0: nop

L_802370D4:
    // 0x802370D4: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x802370D8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802370DC: beq         $v0, $zero, L_80237148
    if (ctx->r2 == 0) {
        // 0x802370E0: nop
    
            goto L_80237148;
    }
    // 0x802370E0: nop

    // 0x802370E4: j           L_80237124
    // 0x802370E8: nop

        goto L_80237124;
    // 0x802370E8: nop

L_802370EC:
    // 0x802370EC: jal         0x802373D4
    // 0x802370F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802373D4_ovl31(rdram, ctx);
        goto after_0;
    // 0x802370F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802370F4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802370F8: beq         $v0, $zero, L_80237148
    if (ctx->r2 == 0) {
        // 0x802370FC: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_80237148;
    }
    // 0x802370FC: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80237100: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80237104: j           L_80237128
    // 0x80237108: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_80237128;
    // 0x80237108: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8023710C:
    // 0x8023710C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80237110: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80237114: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80237118: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023711C: bne         $v0, $zero, L_80237148
    if (ctx->r2 != 0) {
        // 0x80237120: nop
    
            goto L_80237148;
    }
    // 0x80237120: nop

L_80237124:
    // 0x80237124: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
L_80237128:
    // 0x80237128: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023712C: j           L_80237148
    // 0x80237130: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80237148;
    // 0x80237130: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80237134:
    // 0x80237134: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237138: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023713C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80237140: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80237144: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80237148:
    // 0x80237148: jal         0x802372AC
    // 0x8023714C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802372AC_ovl31(rdram, ctx);
        goto after_1;
    // 0x8023714C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237150: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237154: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237158: jr          $ra
    // 0x8023715C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023715C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022553C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022553C: jr          $ra
    // 0x80225540: nop

    TRACE_RETURN()
    return;
    // 0x80225540: nop

;}
RECOMP_FUNC void func_8022DC54_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DC54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022DC58: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022DC5C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DC60: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022DC64: lw          $v0, 0xC4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC4);
    // 0x8022DC68: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022DC6C: beq         $v0, $zero, L_8022DD30
    if (ctx->r2 == 0) {
        // 0x8022DC70: addiu       $v1, $zero, 0x50
        ctx->r3 = ADD32(0, 0X50);
            goto L_8022DD30;
    }
    // 0x8022DC70: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
    // 0x8022DC74: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022DC78: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022DC7C: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022DC80: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022DC84: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8022DC88: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022DC8C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022DC90: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022DC94: sh          $v0, 0x380($s0)
    MEM_H(0X380, ctx->r16) = ctx->r2;
    // 0x8022DC98: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022DC9C: bne         $v0, $zero, L_8022DCA8
    if (ctx->r2 != 0) {
        // 0x8022DCA0: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_8022DCA8;
    }
    // 0x8022DCA0: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022DCA4: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_8022DCA8:
    // 0x8022DCA8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022DCAC: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022DCB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DCB4: jal         0x80050294
    // 0x8022DCB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022DCB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022DCBC: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x8022DCC0: lh          $v0, 0x380($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X380);
    // 0x8022DCC4: bne         $a0, $v0, L_8022DD0C
    if (ctx->r4 != ctx->r2) {
        // 0x8022DCC8: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8022DD0C;
    }
    // 0x8022DCC8: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x8022DCCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DCD0: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x8022DCD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022DCD8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DCDC: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
    // 0x8022DCE0: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022DCE4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022DCE8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022DCEC: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8022DCF0: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x8022DCF4: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022DCF8: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x8022DCFC: jal         0x80050294
    // 0x8022DD00: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022DD00: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022DD04: j           L_8022DD20
    // 0x8022DD08: nop

        goto L_8022DD20;
    // 0x8022DD08: nop

L_8022DD0C:
    // 0x8022DD0C: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8022DD10: bne         $v0, $zero, L_8022DD1C
    if (ctx->r2 != 0) {
        // 0x8022DD14: addiu       $v0, $v1, -0x80
        ctx->r2 = ADD32(ctx->r3, -0X80);
            goto L_8022DD1C;
    }
    // 0x8022DD14: addiu       $v0, $v1, -0x80
    ctx->r2 = ADD32(ctx->r3, -0X80);
    // 0x8022DD18: addiu       $v0, $v1, 0x80
    ctx->r2 = ADD32(ctx->r3, 0X80);
L_8022DD1C:
    // 0x8022DD1C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022DD20:
    // 0x8022DD20: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022DD24: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022DD28: j           L_8022DD8C
    // 0x8022DD2C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8022DD8C;
    // 0x8022DD2C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022DD30:
    // 0x8022DD30: lb          $v0, 0x385($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X385);
    // 0x8022DD34: beq         $v0, $zero, L_8022DD5C
    if (ctx->r2 == 0) {
        // 0x8022DD38: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022DD5C;
    }
    // 0x8022DD38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DD3C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022DD40: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DD44: jal         0x8004DA90
    // 0x8022DD48: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022DD48: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022DD4C: lbu         $v0, 0x385($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X385);
    // 0x8022DD50: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DD54: j           L_8022DD8C
    // 0x8022DD58: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
        goto L_8022DD8C;
    // 0x8022DD58: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
L_8022DD5C:
    // 0x8022DD5C: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8022DD60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DD64: beq         $v1, $v0, L_8022DD80
    if (ctx->r3 == ctx->r2) {
        // 0x8022DD68: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_8022DD80;
    }
    // 0x8022DD68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022DD6C: lh          $a1, 0x44($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X44);
    // 0x8022DD70: jal         0x8004DA90
    // 0x8022DD74: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022DD74: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x8022DD78: j           L_8022DD8C
    // 0x8022DD7C: nop

        goto L_8022DD8C;
    // 0x8022DD7C: nop

L_8022DD80:
    // 0x8022DD80: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8022DD84: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022DD88: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022DD8C:
    // 0x8022DD8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022DD90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022DD94: jr          $ra
    // 0x8022DD98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022DD98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F688_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F688: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F68C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F690: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F694: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F698: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022F69C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x8022F6A0: bnel        $v0, $zero, L_8022F6CC
    if (ctx->r2 != 0) {
        // 0x8022F6A4: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_8022F6CC;
    }
    goto skip_0;
    // 0x8022F6A4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_0:
    // 0x8022F6A8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022F6AC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F6B0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022F6B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F6B8: jal         0x800502EC
    // 0x8022F6BC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    func_800502EC_2B6EC(rdram, ctx);
        goto after_0;
    // 0x8022F6BC: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022F6C0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F6C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F6C8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022F6CC:
    // 0x8022F6CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F6D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F6D4: jr          $ra
    // 0x8022F6D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F6D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EE98_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EE98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EE9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EEA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022EEA4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022EEA8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EEAC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022EEB0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022EEB4: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022EEB8: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022EEBC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022EEC0: jal         0x8004D5D4
    // 0x8022EEC4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022EEC4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022EEC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EECC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022EED0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022EED4: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022EED8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022EEDC: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022EEE0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022EEE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022EEE8: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    // 0x8022EEEC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022EEF0: sb          $zero, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = 0;
    // 0x8022EEF4: jal         0x800502EC
    // 0x8022EEF8: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    func_800502EC_2B6EC(rdram, ctx);
        goto after_1;
    // 0x8022EEF8: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    after_1:
    // 0x8022EEFC: lbu         $a0, 0xD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XD);
    // 0x8022EF00: jal         0x80053ED8
    // 0x8022EF04: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_2;
    // 0x8022EF04: nop

    after_2:
    // 0x8022EF08: addiu       $a0, $s0, 0x160
    ctx->r4 = ADD32(ctx->r16, 0X160);
    // 0x8022EF0C: lbu         $a1, 0x3($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X3);
    // 0x8022EF10: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x8022EF14: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022EF18: sll         $a1, $a1, 5
    ctx->r5 = S32(ctx->r5 << 5);
    // 0x8022EF1C: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    // 0x8022EF20: jal         0x8009A3B4
    // 0x8022EF24: addiu       $a1, $a1, 0x208
    ctx->r5 = ADD32(ctx->r5, 0X208);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022EF24: addiu       $a1, $a1, 0x208
    ctx->r5 = ADD32(ctx->r5, 0X208);
    after_3:
    // 0x8022EF28: lbu         $a1, 0x3($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X3);
    // 0x8022EF2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022EF30: sll         $a1, $a1, 5
    ctx->r5 = S32(ctx->r5 << 5);
    // 0x8022EF34: addiu       $a1, $a1, 0x208
    ctx->r5 = ADD32(ctx->r5, 0X208);
    // 0x8022EF38: jal         0x80051364
    // 0x8022EF3C: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    func_80051364_2C764(rdram, ctx);
        goto after_4;
    // 0x8022EF3C: addu        $a1, $s1, $a1
    ctx->r5 = ADD32(ctx->r17, ctx->r5);
    after_4:
    // 0x8022EF40: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022EF44: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x8022EF48: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x8022EF4C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022EF50: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022EF54: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022EF58: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022EF5C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022EF60: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8022EF64: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022EF68: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x8022EF6C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022EF70: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022EF74: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x8022EF78: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022EF7C: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x8022EF80: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x8022EF84: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8022EF88: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022EF8C: lbu         $v1, 0xA($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XA);
    // 0x8022EF90: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022EF94: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022EF98: sb          $v1, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r3;
    // 0x8022EF9C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022EFA0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022EFA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EFA8: jr          $ra
    // 0x8022EFAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022EFAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E91C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E91C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E920: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E924: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022E928: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022E92C: jal         0x8004F144
    // 0x8022E930: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022E930: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022E934: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E938: beq         $v1, $zero, L_8022E974
    if (ctx->r3 == 0) {
        // 0x8022E93C: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022E974;
    }
    // 0x8022E93C: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022E940: addiu       $s0, $s1, 0x180
    ctx->r16 = ADD32(ctx->r17, 0X180);
    // 0x8022E944: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E948: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022E94C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022E950: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022E954: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022E958: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022E95C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E960: jal         0x8009A3B4
    // 0x8022E964: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022E964: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_1:
    // 0x8022E968: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E96C: jal         0x8007A1B8
    // 0x8022E970: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x8022E970: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_8022E974:
    // 0x8022E974: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022E978: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022E97C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    // 0x8022E980: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022E984: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022E988: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022E98C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E990: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E994: jr          $ra
    // 0x8022E998: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E998: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023346C_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023346C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80233470: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80233474: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233478: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023347C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80233480: lbu         $v1, 0xF($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XF);
    // 0x80233484: sh          $zero, 0x9A($s0)
    MEM_H(0X9A, ctx->r16) = 0;
    // 0x80233488: ori         $v0, $v0, 0x22
    ctx->r2 = ctx->r2 | 0X22;
    // 0x8023348C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80233490: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80233494: bne         $v0, $zero, L_802334DC
    if (ctx->r2 != 0) {
        // 0x80233498: andi        $v0, $v1, 0x8
        ctx->r2 = ctx->r3 & 0X8;
            goto L_802334DC;
    }
    // 0x80233498: andi        $v0, $v1, 0x8
    ctx->r2 = ctx->r3 & 0X8;
    // 0x8023349C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x802334A0: addiu       $v1, $zero, 0x40
    ctx->r3 = ADD32(0, 0X40);
    // 0x802334A4: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x802334A8: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x802334AC: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x802334B0: bne         $v0, $zero, L_802334C4
    if (ctx->r2 != 0) {
        // 0x802334B4: sb          $v1, 0x97($s0)
        MEM_B(0X97, ctx->r16) = ctx->r3;
            goto L_802334C4;
    }
    // 0x802334B4: sb          $v1, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r3;
    // 0x802334B8: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x802334BC: j           L_802334CC
    // 0x802334C0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
        goto L_802334CC;
    // 0x802334C0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_802334C4:
    // 0x802334C4: lui         $v0, 0x2C60
    ctx->r2 = S32(0X2C60 << 16);
    // 0x802334C8: ori         $v0, $v0, 0x60C0
    ctx->r2 = ctx->r2 | 0X60C0;
L_802334CC:
    // 0x802334CC: sw          $v0, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r2;
    // 0x802334D0: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x802334D4: j           L_8023352C
    // 0x802334D8: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
        goto L_8023352C;
    // 0x802334D8: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
L_802334DC:
    // 0x802334DC: bne         $v0, $zero, L_80233500
    if (ctx->r2 != 0) {
        // 0x802334E0: nop
    
            goto L_80233500;
    }
    // 0x802334E0: nop

    // 0x802334E4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802334E8: lbu         $v0, -0x79B0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X79B0);
    // 0x802334EC: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x802334F0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802334F4: lbu         $v0, -0x79AF($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X79AF);
    // 0x802334F8: j           L_80233518
    // 0x802334FC: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_80233518;
    // 0x802334FC: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80233500:
    // 0x80233500: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80233504: lbu         $v0, -0x79A4($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X79A4);
    // 0x80233508: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x8023350C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80233510: lbu         $v0, -0x79A3($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X79A3);
    // 0x80233514: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_80233518:
    // 0x80233518: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x8023351C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80233520: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80233524: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80233528: sw          $v1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r3;
L_8023352C:
    // 0x8023352C: sw          $v0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r2;
    // 0x80233530: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80233534: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x80233538: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8023353C: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80233540: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80233544: sh          $v1, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r3;
    // 0x80233548: sh          $a0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r4;
    // 0x8023354C: bne         $v0, $zero, L_80233578
    if (ctx->r2 != 0) {
        // 0x80233550: sh          $a1, 0x94($s0)
        MEM_H(0X94, ctx->r16) = ctx->r5;
            goto L_80233578;
    }
    // 0x80233550: sh          $a1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r5;
    // 0x80233554: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80233558: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x8023355C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80233560: bne         $v0, $zero, L_80233570
    if (ctx->r2 != 0) {
        // 0x80233564: sh          $v1, 0x98($s0)
        MEM_H(0X98, ctx->r16) = ctx->r3;
            goto L_80233570;
    }
    // 0x80233564: sh          $v1, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r3;
    // 0x80233568: j           L_80233584
    // 0x8023356C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
        goto L_80233584;
    // 0x8023356C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80233570:
    // 0x80233570: j           L_80233584
    // 0x80233574: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
        goto L_80233584;
    // 0x80233574: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
L_80233578:
    // 0x80233578: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023357C: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x80233580: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80233584:
    // 0x80233584: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80233588: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8023358C: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80233590: bne         $v0, $zero, L_8023359C
    if (ctx->r2 != 0) {
        // 0x80233594: addiu       $v0, $zero, 0x4B
        ctx->r2 = ADD32(0, 0X4B);
            goto L_8023359C;
    }
    // 0x80233594: addiu       $v0, $zero, 0x4B
    ctx->r2 = ADD32(0, 0X4B);
    // 0x80233598: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
L_8023359C:
    // 0x8023359C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802335A0: lhu         $a1, 0x98($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X98);
    // 0x802335A4: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x802335A8: addiu       $v0, $s0, 0xC0
    ctx->r2 = ADD32(ctx->r16, 0XC0);
    // 0x802335AC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802335B0: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x802335B4: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x802335B8: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x802335BC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802335C0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802335C4: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x802335C8: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x802335CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802335D0: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x802335D4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802335D8: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x802335DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802335E0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802335E4: jal         0x80051E18
    // 0x802335E8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x802335E8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x802335EC: jal         0x8003F754
    // 0x802335F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003F754_1AB54(rdram, ctx);
        goto after_1;
    // 0x802335F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802335F4: bne         $v0, $zero, L_80233604
    if (ctx->r2 != 0) {
        // 0x802335F8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80233604;
    }
    // 0x802335F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802335FC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80233600: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80233604:
    // 0x80233604: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80233608: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8023360C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80233610: jr          $ra
    // 0x80233614: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80233614: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022D9E4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D9E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D9E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D9EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D9F0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D9F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D9F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D9FC: jal         0x80050294
    // 0x8022DA00: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022DA00: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    after_0:
    // 0x8022DA04: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022DA08: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x8022DA0C: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8022DA10: sb          $v0, 0x1DE($s0)
    MEM_B(0X1DE, ctx->r16) = ctx->r2;
    // 0x8022DA14: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DA18: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022DA1C: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x8022DA20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DA24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DA28: jr          $ra
    // 0x8022DA2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DA2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AB68_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AB68: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022AB6C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022AB70: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022AB74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022AB78: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022AB7C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AB80: lw          $v0, 0x33C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X33C);
    // 0x8022AB84: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022AB88: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022AB8C: beq         $v0, $zero, L_8022AB98
    if (ctx->r2 == 0) {
        // 0x8022AB90: addiu       $s2, $s1, 0x328
        ctx->r18 = ADD32(ctx->r17, 0X328);
            goto L_8022AB98;
    }
    // 0x8022AB90: addiu       $s2, $s1, 0x328
    ctx->r18 = ADD32(ctx->r17, 0X328);
    // 0x8022AB94: sh          $zero, 0x330($s1)
    MEM_H(0X330, ctx->r17) = 0;
L_8022AB98:
    // 0x8022AB98: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022AB9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ABA0: beq         $v1, $v0, L_8022AC54
    if (ctx->r3 == ctx->r2) {
        // 0x8022ABA4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022AC54;
    }
    // 0x8022ABA4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022ABA8: beql        $v0, $zero, L_8022ABC0
    if (ctx->r2 == 0) {
        // 0x8022ABAC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022ABC0;
    }
    goto skip_0;
    // 0x8022ABAC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022ABB0: beq         $v1, $zero, L_8022ABD0
    if (ctx->r3 == 0) {
        // 0x8022ABB4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022ABD0;
    }
    // 0x8022ABB4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ABB8: j           L_8022AE10
    // 0x8022ABBC: nop

        goto L_8022AE10;
    // 0x8022ABBC: nop

L_8022ABC0:
    // 0x8022ABC0: beq         $v1, $v0, L_8022ADE4
    if (ctx->r3 == ctx->r2) {
        // 0x8022ABC4: nop
    
            goto L_8022ADE4;
    }
    // 0x8022ABC4: nop

    // 0x8022ABC8: j           L_8022AE10
    // 0x8022ABCC: nop

        goto L_8022AE10;
    // 0x8022ABCC: nop

L_8022ABD0:
    // 0x8022ABD0: lh          $a0, 0x56($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X56);
    // 0x8022ABD4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022ABD8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022ABDC: jal         0x800324B4
    // 0x8022ABE0: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x8022ABE0: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022ABE4: lh          $a0, 0x56($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X56);
    // 0x8022ABE8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022ABEC: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x8022ABF0: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x8022ABF4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022ABF8: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x8022ABFC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022AC00: jal         0x80032498
    // 0x8022AC04: sh          $v0, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = ctx->r2;
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x8022AC04: sh          $v0, 0x4E($s1)
    MEM_H(0X4E, ctx->r17) = ctx->r2;
    after_1:
    // 0x8022AC08: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x8022AC0C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022AC10: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022AC14: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022AC18: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x8022AC1C: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x8022AC20: addiu       $v0, $zero, 0x73
    ctx->r2 = ADD32(0, 0X73);
    // 0x8022AC24: sh          $v0, 0x32C($s1)
    MEM_H(0X32C, ctx->r17) = ctx->r2;
    // 0x8022AC28: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8022AC2C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022AC30: lh          $v1, 0x32E($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X32E);
    // 0x8022AC34: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8022AC38: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x8022AC3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022AC40: lhu         $v0, 0x328($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X328);
    // 0x8022AC44: lbu         $v1, 0xA($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XA);
    // 0x8022AC48: andi        $v0, $v0, 0xFFF7
    ctx->r2 = ctx->r2 & 0XFFF7;
    // 0x8022AC4C: sh          $v0, 0x328($s1)
    MEM_H(0X328, ctx->r17) = ctx->r2;
    // 0x8022AC50: sh          $v1, 0x330($s1)
    MEM_H(0X330, ctx->r17) = ctx->r3;
L_8022AC54:
    // 0x8022AC54: lb          $v1, 0xA6($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XA6);
    // 0x8022AC58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AC5C: bne         $v1, $v0, L_8022AC6C
    if (ctx->r3 != ctx->r2) {
        // 0x8022AC60: addiu       $a0, $zero, 0xB5
        ctx->r4 = ADD32(0, 0XB5);
            goto L_8022AC6C;
    }
    // 0x8022AC60: addiu       $a0, $zero, 0xB5
    ctx->r4 = ADD32(0, 0XB5);
    // 0x8022AC64: jal         0x8002A33C
    // 0x8022AC68: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022AC68: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
L_8022AC6C:
    // 0x8022AC6C: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022AC70: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022AC74: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022AC78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AC7C: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022AC80: bltz        $a0, L_8022AC98
    if (SIGNED(ctx->r4) < 0) {
        // 0x8022AC84: lui         $v1, 0x200
        ctx->r3 = S32(0X200 << 16);
            goto L_8022AC98;
    }
    // 0x8022AC84: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022AC88: lw          $v0, 0x14($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X14);
    // 0x8022AC8C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022AC90: beq         $v0, $zero, L_8022ACB0
    if (ctx->r2 == 0) {
        // 0x8022AC94: nop
    
            goto L_8022ACB0;
    }
    // 0x8022AC94: nop

L_8022AC98:
    // 0x8022AC98: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AC9C: sh          $zero, 0x8($s2)
    MEM_H(0X8, ctx->r18) = 0;
    // 0x8022ACA0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022ACA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022ACA8: j           L_8022ADE4
    // 0x8022ACAC: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
        goto L_8022ADE4;
    // 0x8022ACAC: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
L_8022ACB0:
    // 0x8022ACB0: lh          $v0, 0x6E($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6E);
    // 0x8022ACB4: bgtzl       $v0, L_8022ACC8
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022ACB8: slti        $v0, $a0, 0x64
        ctx->r2 = SIGNED(ctx->r4) < 0X64 ? 1 : 0;
            goto L_8022ACC8;
    }
    goto skip_1;
    // 0x8022ACB8: slti        $v0, $a0, 0x64
    ctx->r2 = SIGNED(ctx->r4) < 0X64 ? 1 : 0;
    skip_1:
    // 0x8022ACBC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022ACC0: j           L_8022AE0C
    // 0x8022ACC4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
        goto L_8022AE0C;
    // 0x8022ACC4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
L_8022ACC8:
    // 0x8022ACC8: beq         $v0, $zero, L_8022AD40
    if (ctx->r2 == 0) {
        // 0x8022ACCC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022AD40;
    }
    // 0x8022ACCC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022ACD0: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x8022ACD4: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x8022ACD8: lh          $s0, 0x16($s1)
    ctx->r16 = MEM_H(ctx->r17, 0X16);
    // 0x8022ACDC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022ACE0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022ACE4: jal         0x8003E934
    // 0x8022ACE8: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x8022ACE8: sw          $v1, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r3;
    after_3:
    // 0x8022ACEC: beq         $s0, $v0, L_8022AD1C
    if (ctx->r16 == ctx->r2) {
        // 0x8022ACF0: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_8022AD1C;
    }
    // 0x8022ACF0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022ACF4: lh          $v0, 0x46($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X46);
    // 0x8022ACF8: lw          $v1, 0x20($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X20);
    // 0x8022ACFC: lhu         $a0, 0x46($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X46);
    // 0x8022AD00: lhu         $a1, 0x4E($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X4E);
    // 0x8022AD04: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AD08: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022AD0C: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8022AD10: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x8022AD14: j           L_8022AD20
    // 0x8022AD18: sh          $a0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r4;
        goto L_8022AD20;
    // 0x8022AD18: sh          $a0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r4;
L_8022AD1C:
    // 0x8022AD1C: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
L_8022AD20:
    // 0x8022AD20: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022AD24: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x8022AD28: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x8022AD2C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022AD30: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AD34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022AD38: jal         0x8004DD04
    // 0x8022AD3C: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    func_8004DD04_29104(rdram, ctx);
        goto after_4;
    // 0x8022AD3C: sw          $v1, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r3;
    after_4:
L_8022AD40:
    // 0x8022AD40: jal         0x80040F30
    // 0x8022AD44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x8022AD44: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_5:
    // 0x8022AD48: beq         $v0, $zero, L_8022AE10
    if (ctx->r2 == 0) {
        // 0x8022AD4C: sw          $v0, 0x48($s2)
        MEM_W(0X48, ctx->r18) = ctx->r2;
            goto L_8022AE10;
    }
    // 0x8022AD4C: sw          $v0, 0x48($s2)
    MEM_W(0X48, ctx->r18) = ctx->r2;
    // 0x8022AD50: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x8022AD54: beq         $v0, $zero, L_8022AD64
    if (ctx->r2 == 0) {
        // 0x8022AD58: addiu       $a0, $zero, 0xDE
        ctx->r4 = ADD32(0, 0XDE);
            goto L_8022AD64;
    }
    // 0x8022AD58: addiu       $a0, $zero, 0xDE
    ctx->r4 = ADD32(0, 0XDE);
    // 0x8022AD5C: jal         0x8002A33C
    // 0x8022AD60: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x8022AD60: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_6:
L_8022AD64:
    // 0x8022AD64: lw          $v1, 0x48($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X48);
    // 0x8022AD68: andi        $v0, $v1, 0x100
    ctx->r2 = ctx->r3 & 0X100;
    // 0x8022AD6C: beql        $v0, $zero, L_8022AD88
    if (ctx->r2 == 0) {
        // 0x8022AD70: andi        $v0, $v1, 0x200
        ctx->r2 = ctx->r3 & 0X200;
            goto L_8022AD88;
    }
    goto skip_2;
    // 0x8022AD70: andi        $v0, $v1, 0x200
    ctx->r2 = ctx->r3 & 0X200;
    skip_2:
    // 0x8022AD74: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x8022AD78: bltzl       $v0, L_8022AD80
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022AD7C: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022AD80;
    }
    goto skip_3;
    // 0x8022AD7C: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_3:
L_8022AD80:
    // 0x8022AD80: j           L_8022AD9C
    // 0x8022AD84: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
        goto L_8022AD9C;
    // 0x8022AD84: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
L_8022AD88:
    // 0x8022AD88: beq         $v0, $zero, L_8022ADA0
    if (ctx->r2 == 0) {
        // 0x8022AD8C: nop
    
            goto L_8022ADA0;
    }
    // 0x8022AD8C: nop

    // 0x8022AD90: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x8022AD94: bltzl       $v0, L_8022AD9C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022AD98: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022AD9C;
    }
    goto skip_4;
    // 0x8022AD98: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_4:
L_8022AD9C:
    // 0x8022AD9C: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_8022ADA0:
    // 0x8022ADA0: lw          $v1, 0x48($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X48);
    // 0x8022ADA4: andi        $v0, $v1, 0x400
    ctx->r2 = ctx->r3 & 0X400;
    // 0x8022ADA8: beq         $v0, $zero, L_8022ADC8
    if (ctx->r2 == 0) {
        // 0x8022ADAC: andi        $v0, $v1, 0x800
        ctx->r2 = ctx->r3 & 0X800;
            goto L_8022ADC8;
    }
    // 0x8022ADAC: andi        $v0, $v1, 0x800
    ctx->r2 = ctx->r3 & 0X800;
    // 0x8022ADB0: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x8022ADB4: bltzl       $v0, L_8022ADBC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022ADB8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022ADBC;
    }
    goto skip_5;
    // 0x8022ADB8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_5:
L_8022ADBC:
    // 0x8022ADBC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022ADC0: j           L_8022AE10
    // 0x8022ADC4: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
        goto L_8022AE10;
    // 0x8022ADC4: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
L_8022ADC8:
    // 0x8022ADC8: beq         $v0, $zero, L_8022AE10
    if (ctx->r2 == 0) {
        // 0x8022ADCC: nop
    
            goto L_8022AE10;
    }
    // 0x8022ADCC: nop

    // 0x8022ADD0: lh          $v0, 0x48($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X48);
    // 0x8022ADD4: bltzl       $v0, L_8022ADDC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022ADD8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022ADDC;
    }
    goto skip_6;
    // 0x8022ADD8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_6:
L_8022ADDC:
    // 0x8022ADDC: j           L_8022AE10
    // 0x8022ADE0: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
        goto L_8022AE10;
    // 0x8022ADE0: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
L_8022ADE4:
    // 0x8022ADE4: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022ADE8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022ADEC: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022ADF0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022ADF4: bgez        $v0, L_8022AE10
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022ADF8: nop
    
            goto L_8022AE10;
    }
    // 0x8022ADF8: nop

    // 0x8022ADFC: sh          $zero, 0x6E($s1)
    MEM_H(0X6E, ctx->r17) = 0;
    // 0x8022AE00: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022AE04: sh          $zero, 0x38($s2)
    MEM_H(0X38, ctx->r18) = 0;
    // 0x8022AE08: ori         $v0, $v0, 0x41
    ctx->r2 = ctx->r2 | 0X41;
L_8022AE0C:
    // 0x8022AE0C: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8022AE10:
    // 0x8022AE10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022AE14: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022AE18: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022AE1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AE20: jr          $ra
    // 0x8022AE24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AE24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022DFDC_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DFDC: lb          $v1, 0xA6($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA6);
    // 0x8022DFE0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DFE4: bne         $v1, $v0, L_8022DFF0
    if (ctx->r3 != ctx->r2) {
        // 0x8022DFE8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022DFF0;
    }
    // 0x8022DFE8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DFEC: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022DFF0:
    // 0x8022DFF0: jr          $ra
    // 0x8022DFF4: nop

    TRACE_RETURN()
    return;
    // 0x8022DFF4: nop

;}
RECOMP_FUNC void func_802282B4_ovl31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802282B4: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x802282B8: beq         $v1, $zero, L_802282D4
    if (ctx->r3 == 0) {
        // 0x802282BC: addiu       $a1, $a0, 0x328
        ctx->r5 = ADD32(ctx->r4, 0X328);
            goto L_802282D4;
    }
    // 0x802282BC: addiu       $a1, $a0, 0x328
    ctx->r5 = ADD32(ctx->r4, 0X328);
    // 0x802282C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802282C4: beq         $v1, $v0, L_802282EC
    if (ctx->r3 == ctx->r2) {
        // 0x802282C8: nop
    
            goto L_802282EC;
    }
    // 0x802282C8: nop

    // 0x802282CC: j           L_80228310
    // 0x802282D0: nop

        goto L_80228310;
    // 0x802282D0: nop

L_802282D4:
    // 0x802282D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802282D8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x802282DC: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x802282E0: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x802282E4: sh          $v0, 0x32C($a0)
    MEM_H(0X32C, ctx->r4) = ctx->r2;
    // 0x802282E8: sh          $zero, 0x330($a0)
    MEM_H(0X330, ctx->r4) = 0;
L_802282EC:
    // 0x802282EC: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x802282F0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802282F4: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x802282F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802282FC: bgez        $v0, L_80228310
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228300: nop
    
            goto L_80228310;
    }
    // 0x80228300: nop

    // 0x80228304: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80228308: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022830C: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80228310:
    // 0x80228310: jr          $ra
    // 0x80228314: nop

    TRACE_RETURN()
    return;
    // 0x80228314: nop

;}
RECOMP_FUNC void func_80225CCC_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225CCC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225CD0: bne         $v0, $zero, L_80225D00
    if (ctx->r2 != 0) {
        // 0x80225CD4: nop
    
            goto L_80225D00;
    }
    // 0x80225CD4: nop

    // 0x80225CD8: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80225CDC: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225CE0: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
    // 0x80225CE4: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225CE8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225CEC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80225CF0: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80225CF4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225CF8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225CFC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80225D00:
    // 0x80225D00: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225D04: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x80225D08: bne         $v1, $v0, L_80225D20
    if (ctx->r3 != ctx->r2) {
        // 0x80225D0C: nop
    
            goto L_80225D20;
    }
    // 0x80225D0C: nop

    // 0x80225D10: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80225D14: lbu         $v0, 0xA($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA);
    // 0x80225D18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225D1C: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
L_80225D20:
    // 0x80225D20: jr          $ra
    // 0x80225D24: nop

    TRACE_RETURN()
    return;
    // 0x80225D24: nop

;}
RECOMP_FUNC void func_802260EC_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802260EC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802260F0: bne         $v0, $zero, L_802261E4
    if (ctx->r2 != 0) {
        // 0x802260F4: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_802261E4;
    }
    // 0x802260F4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802260F8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802260FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226100: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226104: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80226108: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022610C: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80226110: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226114: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226118: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x8022611C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226120: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226124: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80226128: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022612C: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80226130: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226134: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80226138: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022613C: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80226140: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226144: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226148: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022614C: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226150: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226154: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80226158: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x8022615C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80226160: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x80226164: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226168: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8022616C: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80226170: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80226174: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226178: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8022617C: lw          $a1, 0x30($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X30);
    // 0x80226180: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80226184: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226188: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x8022618C: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x80226190: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80226194: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226198: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8022619C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802261A0: sh          $v0, 0x15C($a1)
    MEM_H(0X15C, ctx->r5) = ctx->r2;
    // 0x802261A4: sh          $v0, 0x15A($a1)
    MEM_H(0X15A, ctx->r5) = ctx->r2;
    // 0x802261A8: sh          $v0, 0x158($a1)
    MEM_H(0X158, ctx->r5) = ctx->r2;
    // 0x802261AC: lui         $v0, 0xFED4
    ctx->r2 = S32(0XFED4 << 16);
    // 0x802261B0: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x802261B4: lui         $v0, 0xFE70
    ctx->r2 = S32(0XFE70 << 16);
    // 0x802261B8: sw          $v0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r2;
    // 0x802261BC: addiu       $v0, $zero, 0xDAC
    ctx->r2 = ADD32(0, 0XDAC);
    // 0x802261C0: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x802261C4: addiu       $v0, $zero, -0xC8
    ctx->r2 = ADD32(0, -0XC8);
    // 0x802261C8: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x802261CC: sw          $zero, 0x24($a1)
    MEM_W(0X24, ctx->r5) = 0;
    // 0x802261D0: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802261D4: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x802261D8: sh          $zero, 0x4($sp)
    MEM_H(0X4, ctx->r29) = 0;
    // 0x802261DC: sh          $zero, 0x0($sp)
    MEM_H(0X0, ctx->r29) = 0;
    // 0x802261E0: sh          $v0, 0x2($sp)
    MEM_H(0X2, ctx->r29) = ctx->r2;
L_802261E4:
    // 0x802261E4: jr          $ra
    // 0x802261E8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x802261E8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80226AD4_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226AD4: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80226AD8: lui         $v1, 0xFFF3
    ctx->r3 = S32(0XFFF3 << 16);
    // 0x80226ADC: ori         $v1, $v1, 0x6886
    ctx->r3 = ctx->r3 | 0X6886;
    // 0x80226AE0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226AE4: jr          $ra
    // 0x80226AE8: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80226AE8: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
    // 0x80226AEC: nop

;}
RECOMP_FUNC void func_80226A48_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226A48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226A4C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226A50: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80226A54: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226A58: jal         0x8004DA90
    // 0x80226A5C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80226A5C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80226A60: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226A64: jr          $ra
    // 0x80226A68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226A68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022898C_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022898C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80228990: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80228994: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80228998: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022899C: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x802289A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802289A4: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x802289A8: lw          $a1, 0x1C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1C);
    // 0x802289AC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802289B0: jal         0x8003BA58
    // 0x802289B4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003BA58_16E58(rdram, ctx);
        goto after_0;
    // 0x802289B4: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x802289B8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802289BC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x802289C0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802289C4: jal         0x8003BB80
    // 0x802289C8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003BB80_16F80(rdram, ctx);
        goto after_1;
    // 0x802289C8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802289CC: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x802289D0: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    // 0x802289D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802289D8: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x802289DC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802289E0: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x802289E4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802289E8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802289EC: lbu         $v1, -0x56EF($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X56EF);
    // 0x802289F0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802289F4: bne         $v0, $v1, L_80228A14
    if (ctx->r2 != ctx->r3) {
        // 0x802289F8: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80228A14;
    }
    // 0x802289F8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802289FC: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x80228A00: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x80228A04: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80228A08: bne         $v1, $v0, L_80228A14
    if (ctx->r3 != ctx->r2) {
        // 0x80228A0C: sb          $zero, 0xC($s1)
        MEM_B(0XC, ctx->r17) = 0;
            goto L_80228A14;
    }
    // 0x80228A0C: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x80228A10: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_80228A14:
    // 0x80228A14: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x80228A18: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80228A1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228A20: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80228A24: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80228A28: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228A2C: lbu         $v1, -0x5718($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X5718);
    // 0x80228A30: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x80228A34: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x80228A38: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80228A3C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228A40: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80228A44: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80228A48: addiu       $v0, $v0, 0x2F
    ctx->r2 = ADD32(ctx->r2, 0X2F);
    // 0x80228A4C: sb          $v1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r3;
    // 0x80228A50: sb          $v0, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r2;
    // 0x80228A54: sb          $v1, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r3;
    // 0x80228A58: jal         0x8003BC68
    // 0x80228A5C: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x80228A5C: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    after_2:
    // 0x80228A60: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80228A64: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80228A68: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80228A6C: jr          $ra
    // 0x80228A70: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80228A70: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80228A74: nop

    // 0x80228A78: nop

    // 0x80228A7C: nop

;}
RECOMP_FUNC void func_8022534C_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022534C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225350: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80225354: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80225358: lw          $v1, -0x6FBC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6FBC);
    // 0x8022535C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225360: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225364: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225368: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022536C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80225370: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80225374: jalr        $v0
    // 0x80225378: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225378: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_0:
    // 0x8022537C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225380: jr          $ra
    // 0x80225384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225384: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802265E8_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802265E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802265EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802265F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802265F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802265F8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802265FC: bnel        $v0, $zero, L_80226644
    if (ctx->r2 != 0) {
        // 0x80226600: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_80226644;
    }
    goto skip_0;
    // 0x80226600: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    skip_0:
    // 0x80226604: jal         0x8004D5D4
    // 0x80226608: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226608: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x8022660C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226610: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226614: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226618: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022661C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80226620: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80226624: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80226628: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022662C: jal         0x80050294
    // 0x80226630: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80226630: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x80226634: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226638: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022663C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80226640: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
L_80226644:
    // 0x80226644: jal         0x8004DD04
    // 0x80226648: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x80226648: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022664C: jal         0x8005044C
    // 0x80226650: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x80226650: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80226654: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80226658: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022665C: beq         $v0, $zero, L_80226674
    if (ctx->r2 == 0) {
        // 0x80226660: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226674;
    }
    // 0x80226660: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226664: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x80226668: addiu       $a2, $zero, 0x2AB
    ctx->r6 = ADD32(0, 0X2AB);
    // 0x8022666C: jal         0x8003B564
    // 0x80226670: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x80226670: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_80226674:
    // 0x80226674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226678: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022667C: jr          $ra
    // 0x80226680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226BCC_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226BCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226BD0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226BD4: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x80226BD8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226BDC: sh          $v0, 0x15C($a0)
    MEM_H(0X15C, ctx->r4) = ctx->r2;
    // 0x80226BE0: sh          $v0, 0x15A($a0)
    MEM_H(0X15A, ctx->r4) = ctx->r2;
    // 0x80226BE4: sh          $v0, 0x158($a0)
    MEM_H(0X158, ctx->r4) = ctx->r2;
    // 0x80226BE8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80226BEC: sh          $v0, 0x15E($a0)
    MEM_H(0X15E, ctx->r4) = ctx->r2;
    // 0x80226BF0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80226BF4: jal         0x80226AF0
    // 0x80226BF8: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    func_80226AF0_ovl32(rdram, ctx);
        goto after_0;
    // 0x80226BF8: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
    after_0:
    // 0x80226BFC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226C00: jr          $ra
    // 0x80226C04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226C04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225C6C_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C6C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225C70: bne         $v0, $zero, L_80225C90
    if (ctx->r2 != 0) {
        // 0x80225C74: addiu       $v1, $zero, 0x2
        ctx->r3 = ADD32(0, 0X2);
            goto L_80225C90;
    }
    // 0x80225C74: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80225C78: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x80225C7C: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80225C80: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80225C84: lw          $v0, 0x30($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X30);
    // 0x80225C88: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x80225C8C: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80225C90:
    // 0x80225C90: jr          $ra
    // 0x80225C94: nop

    TRACE_RETURN()
    return;
    // 0x80225C94: nop

;}
RECOMP_FUNC void func_80226AF0_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226AF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226AF4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226AF8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226AFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226B00: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80226B04: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80226B08: beq         $v1, $v0, L_80226B18
    if (ctx->r3 == ctx->r2) {
        // 0x80226B0C: nop
    
            goto L_80226B18;
    }
    // 0x80226B0C: nop

    // 0x80226B10: jal         0x8004D5D4
    // 0x80226B14: addiu       $a1, $s0, 0xE
    ctx->r5 = ADD32(ctx->r16, 0XE);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226B14: addiu       $a1, $s0, 0xE
    ctx->r5 = ADD32(ctx->r16, 0XE);
    after_0:
L_80226B18:
    // 0x80226B18: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80226B1C: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80226B20: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80226B24: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x80226B28: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226B2C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226B30: lw          $v0, -0x69A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X69A0);
    // 0x80226B34: jalr        $v0
    // 0x80226B38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80226B38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80226B3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226B40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226B44: jr          $ra
    // 0x80226B48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226B48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802283B4_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802283B4: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x802283B8: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x802283BC: lhu         $v1, 0x1A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X1A);
    // 0x802283C0: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x802283C4: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    // 0x802283C8: lb          $v1, 0x3($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X3);
    // 0x802283CC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802283D0: bgez        $v1, L_80228410
    if (SIGNED(ctx->r3) >= 0) {
        // 0x802283D4: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80228410;
    }
    // 0x802283D4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x802283D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802283DC: bne         $v1, $v0, L_802283FC
    if (ctx->r3 != ctx->r2) {
        // 0x802283E0: andi        $v0, $a1, 0x7F
        ctx->r2 = ctx->r5 & 0X7F;
            goto L_802283FC;
    }
    // 0x802283E0: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x802283E4: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x802283E8: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x802283EC: bne         $v1, $v0, L_8022841C
    if (ctx->r3 != ctx->r2) {
        // 0x802283F0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022841C;
    }
    // 0x802283F0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802283F4: j           L_80228440
    // 0x802283F8: nop

        goto L_80228440;
    // 0x802283F8: nop

L_802283FC:
    // 0x802283FC: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x80228400: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228404: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228408: j           L_8022841C
    // 0x8022840C: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
        goto L_8022841C;
    // 0x8022840C: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
L_80228410:
    // 0x80228410: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80228414: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80228418: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_8022841C:
    // 0x8022841C: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x80228420: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x80228424: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x80228428: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8022842C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80228430: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x80228434: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x80228438: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022843C: sh          $v1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r3;
L_80228440:
    // 0x80228440: jr          $ra
    // 0x80228444: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80228444: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80228448: nop

    // 0x8022844C: nop

;}
RECOMP_FUNC void func_80226C48_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226C48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226C4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226C50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226C54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226C58: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226C5C: bne         $v0, $zero, L_80226C78
    if (ctx->r2 != 0) {
        // 0x80226C60: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80226C78;
    }
    // 0x80226C60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226C64: jal         0x80050294
    // 0x80226C68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80226C68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80226C6C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226C70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226C74: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226C78:
    // 0x80226C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226C7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226C80: jr          $ra
    // 0x80226C84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226C84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802279C0_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802279C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802279C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802279C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802279CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802279D0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802279D4: bne         $v0, $zero, L_802279F0
    if (ctx->r2 != 0) {
        // 0x802279D8: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_802279F0;
    }
    // 0x802279D8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x802279DC: jal         0x80050294
    // 0x802279E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802279E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802279E4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802279E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802279EC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802279F0:
    // 0x802279F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802279F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802279F8: jr          $ra
    // 0x802279FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802279FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226A90_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226A90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226A94: lui         $a1, 0xFFFD
    ctx->r5 = S32(0XFFFD << 16);
    // 0x80226A98: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226A9C: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80226AA0: lhu         $v1, 0x56($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X56);
    // 0x80226AA4: ori         $a1, $a1, 0x38E4
    ctx->r5 = ctx->r5 | 0X38E4;
    // 0x80226AA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226AAC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80226AB0: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80226AB4: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x80226AB8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80226ABC: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x80226AC0: jal         0x8004DA90
    // 0x80226AC4: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80226AC4: sh          $v1, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r3;
    after_0:
    // 0x80226AC8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226ACC: jr          $ra
    // 0x80226AD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226AD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226A40_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226A40: jr          $ra
    // 0x80226A44: nop

    TRACE_RETURN()
    return;
    // 0x80226A44: nop

;}
RECOMP_FUNC void func_80227124_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227124: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227128: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022712C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227134: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80227138: bne         $v0, $zero, L_8022718C
    if (ctx->r2 != 0) {
        // 0x8022713C: nop
    
            goto L_8022718C;
    }
    // 0x8022713C: nop

    // 0x80227140: jal         0x8004D5D4
    // 0x80227144: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227144: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80227148: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022714C: addiu       $v0, $v0, -0x66DC
    ctx->r2 = ADD32(ctx->r2, -0X66DC);
    // 0x80227150: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227154: sw          $v0, -0x55F0($at)
    MEM_W(-0X55F0, ctx->r1) = ctx->r2;
    // 0x80227158: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022715C: addiu       $v0, $v0, -0x664C
    ctx->r2 = ADD32(ctx->r2, -0X664C);
    // 0x80227160: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227164: sw          $v0, -0x55EC($at)
    MEM_W(-0X55EC, ctx->r1) = ctx->r2;
    // 0x80227168: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022716C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227170: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227174: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227178: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022717C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227180: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227184: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227188: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_8022718C:
    // 0x8022718C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227190: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227194: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227198: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022719C: lw          $v0, -0x65BC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X65BC);
    // 0x802271A0: jalr        $v0
    // 0x802271A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x802271A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802271A8: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x802271AC: bne         $v0, $zero, L_802271C4
    if (ctx->r2 != 0) {
        // 0x802271B0: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_802271C4;
    }
    // 0x802271B0: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802271B4: jal         0x8004DD04
    // 0x802271B8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x802271B8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x802271BC: jal         0x8005044C
    // 0x802271C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x802271C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_802271C4:
    // 0x802271C4: jal         0x80226E98
    // 0x802271C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226E98_ovl32(rdram, ctx);
        goto after_4;
    // 0x802271C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802271CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802271D0: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x802271D4: addiu       $a2, $zero, 0x2AB
    ctx->r6 = ADD32(0, 0X2AB);
    // 0x802271D8: jal         0x8003B564
    // 0x802271DC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_5;
    // 0x802271DC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x802271E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802271E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802271E8: jr          $ra
    // 0x802271EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802271EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226D08_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D08: lhu         $v0, 0x58($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X58);
    // 0x80226D0C: addiu       $v0, $v0, 0x11C
    ctx->r2 = ADD32(ctx->r2, 0X11C);
    // 0x80226D10: jr          $ra
    // 0x80226D14: sh          $v0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80226D14: sh          $v0, 0x58($a0)
    MEM_H(0X58, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80225340_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225340: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225344: jr          $ra
    // 0x80225348: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80225348: sw          $zero, -0x359C($at)
    MEM_W(-0X359C, ctx->r1) = 0;
;}
RECOMP_FUNC void func_802261EC_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802261EC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802261F0: bne         $v0, $zero, L_8022628C
    if (ctx->r2 != 0) {
        // 0x802261F4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022628C;
    }
    // 0x802261F4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802261F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802261FC: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226200: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80226204: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226208: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022620C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226210: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226214: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80226218: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022621C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226220: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80226224: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226228: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x8022622C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226230: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80226234: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226238: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x8022623C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226240: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226244: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226248: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8022624C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226250: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80226254: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80226258: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022625C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226260: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226264: sh          $v0, 0x15C($v1)
    MEM_H(0X15C, ctx->r3) = ctx->r2;
    // 0x80226268: sh          $v0, 0x15A($v1)
    MEM_H(0X15A, ctx->r3) = ctx->r2;
    // 0x8022626C: sh          $v0, 0x158($v1)
    MEM_H(0X158, ctx->r3) = ctx->r2;
    // 0x80226270: lui         $v0, 0xFEA2
    ctx->r2 = S32(0XFEA2 << 16);
    // 0x80226274: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80226278: lui         $v0, 0xFA0
    ctx->r2 = S32(0XFA0 << 16);
    // 0x8022627C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80226280: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x80226284: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80226288: sh          $zero, 0x56($v1)
    MEM_H(0X56, ctx->r3) = 0;
L_8022628C:
    // 0x8022628C: jr          $ra
    // 0x80226290: nop

    TRACE_RETURN()
    return;
    // 0x80226290: nop

    // 0x80226294: nop

    // 0x80226298: nop

    // 0x8022629C: nop

;}
RECOMP_FUNC void func_80225E4C_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E4C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225E50: bne         $v0, $zero, L_80225E74
    if (ctx->r2 != 0) {
        // 0x80225E54: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80225E74;
    }
    // 0x80225E54: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225E58: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80225E5C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225E60: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225E64: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80225E68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225E6C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225E70: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80225E74:
    // 0x80225E74: jr          $ra
    // 0x80225E78: nop

    TRACE_RETURN()
    return;
    // 0x80225E78: nop

;}
RECOMP_FUNC void func_80228604_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228604: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80228608: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022860C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80228610: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80228614: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80228618: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8022861C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80228620: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80228624: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228628: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022862C: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x80228630: bne         $v0, $zero, L_802286DC
    if (ctx->r2 != 0) {
        // 0x80228634: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_802286DC;
    }
    // 0x80228634: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80228638: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x8022863C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80228640: lb          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC8);
    // 0x80228644: addiu       $s6, $zero, 0x6
    ctx->r22 = ADD32(0, 0X6);
    // 0x80228648: lui         $s5, 0x8023
    ctx->r21 = S32(0X8023 << 16);
    // 0x8022864C: addiu       $s5, $s5, -0x5740
    ctx->r21 = ADD32(ctx->r21, -0X5740);
    // 0x80228650: xori        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 ^ 0X2;
    // 0x80228654: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80228658: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022865C: andi        $s4, $v0, 0x5
    ctx->r20 = ctx->r2 & 0X5;
L_80228660:
    // 0x80228660: jal         0x8004F228
    // 0x80228664: nop

    func_8004F228_2A628(rdram, ctx);
        goto after_0;
    // 0x80228664: nop

    after_0:
    // 0x80228668: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022866C: beql        $s0, $zero, L_802286C0
    if (ctx->r16 == 0) {
        // 0x80228670: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802286C0;
    }
    goto skip_0;
    // 0x80228670: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x80228674: addu        $v0, $s1, $s4
    ctx->r2 = ADD32(ctx->r17, ctx->r20);
    // 0x80228678: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022867C: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x80228680: sb          $s3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r19;
    // 0x80228684: sb          $s6, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r22;
    // 0x80228688: sb          $s1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r17;
    // 0x8022868C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80228690: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80228694: sb          $s3, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r19;
    // 0x80228698: jal         0x80071A70
    // 0x8022869C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_80071A70_4CE70(rdram, ctx);
        goto after_1;
    // 0x8022869C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_1:
    // 0x802286A0: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802286A4: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x802286A8: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x802286AC: beq         $v0, $zero, L_802286C0
    if (ctx->r2 == 0) {
        // 0x802286B0: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_802286C0;
    }
    // 0x802286B0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x802286B4: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x802286B8: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x802286BC: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_802286C0:
    // 0x802286C0: slti        $v0, $s1, 0x5
    ctx->r2 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
    // 0x802286C4: bne         $v0, $zero, L_80228660
    if (ctx->r2 != 0) {
        // 0x802286C8: nop
    
            goto L_80228660;
    }
    // 0x802286C8: nop

    // 0x802286CC: jal         0x8004F62C
    // 0x802286D0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_2;
    // 0x802286D0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x802286D4: j           L_802286F8
    // 0x802286D8: nop

        goto L_802286F8;
    // 0x802286D8: nop

L_802286DC:
    // 0x802286DC: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x802286E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802286E4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802286E8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802286EC: lw          $v0, -0x56C4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X56C4);
    // 0x802286F0: jalr        $v0
    // 0x802286F4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802286F4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
L_802286F8:
    // 0x802286F8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802286FC: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80228700: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80228704: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80228708: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022870C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228710: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228714: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228718: jr          $ra
    // 0x8022871C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022871C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80225D28_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D28: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225D2C: bne         $v0, $zero, L_80225D54
    if (ctx->r2 != 0) {
        // 0x80225D30: nop
    
            goto L_80225D54;
    }
    // 0x80225D30: nop

    // 0x80225D34: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80225D38: lbu         $v0, 0xA($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XA);
    // 0x80225D3C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225D40: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
    // 0x80225D44: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80225D48: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80225D4C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80225D50: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
L_80225D54:
    // 0x80225D54: jr          $ra
    // 0x80225D58: nop

    TRACE_RETURN()
    return;
    // 0x80225D58: nop

;}
RECOMP_FUNC void func_80225388_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225388: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022538C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225390: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225394: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225398: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022539C: bne         $v0, $zero, L_802253B8
    if (ctx->r2 != 0) {
        // 0x802253A0: nop
    
            goto L_802253B8;
    }
    // 0x802253A0: nop

    // 0x802253A4: jal         0x80060690
    // 0x802253A8: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    func_80060690_3BA90(rdram, ctx);
        goto after_0;
    // 0x802253A8: addiu       $a0, $zero, 0x4C
    ctx->r4 = ADD32(0, 0X4C);
    after_0:
    // 0x802253AC: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802253B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802253B4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802253B8:
    // 0x802253B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802253BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802253C0: jr          $ra
    // 0x802253C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802253C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802253C8: nop

    // 0x802253CC: nop

;}
RECOMP_FUNC void func_802267F8_ovl32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802267F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802267FC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226800: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226804: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226808: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8022680C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80226810: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x80226814: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226818: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022681C: jal         0x8004EFE4
    // 0x80226820: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x80226820: addu        $s0, $a3, $zero
    ctx->r16 = ADD32(ctx->r7, 0);
    after_0:
    // 0x80226824: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80226828: beq         $a0, $zero, L_80226860
    if (ctx->r4 == 0) {
        // 0x8022682C: addiu       $v0, $zero, 0x38
        ctx->r2 = ADD32(0, 0X38);
            goto L_80226860;
    }
    // 0x8022682C: addiu       $v0, $zero, 0x38
    ctx->r2 = ADD32(0, 0X38);
    // 0x80226830: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80226834: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x80226838: sb          $s0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r16;
    // 0x8022683C: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x80226840: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x80226844: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80226848: sw          $v0, 0xD0($a0)
    MEM_W(0XD0, ctx->r4) = ctx->r2;
    // 0x8022684C: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x80226850: sh          $zero, 0xE0($a0)
    MEM_H(0XE0, ctx->r4) = 0;
    // 0x80226854: sh          $s2, 0xE2($a0)
    MEM_H(0XE2, ctx->r4) = ctx->r18;
    // 0x80226858: sh          $s3, 0xE4($a0)
    MEM_H(0XE4, ctx->r4) = ctx->r19;
    // 0x8022685C: sw          $v0, 0xD8($a0)
    MEM_W(0XD8, ctx->r4) = ctx->r2;
L_80226860:
    // 0x80226860: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80226864: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80226868: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022686C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226870: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226874: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226878: jr          $ra
    // 0x8022687C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022687C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
