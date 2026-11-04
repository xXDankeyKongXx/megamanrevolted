#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8003BA58_16E58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003BA58: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8003BA5C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8003BA60: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8003BA64: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8003BA68: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8003BA6C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8003BA70: addu        $s4, $a2, $zero
    ctx->r20 = ADD32(ctx->r6, 0);
    // 0x8003BA74: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8003BA78: addu        $s2, $a3, $zero
    ctx->r18 = ADD32(ctx->r7, 0);
    // 0x8003BA7C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8003BA80: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8003BA84: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8003BA88: jal         0x8009A2B0
    // 0x8003BA8C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x8003BA8C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x8003BA90: beq         $s1, $zero, L_8003BB50
    if (ctx->r17 == 0) {
        // 0x8003BA94: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8003BB50;
    }
    // 0x8003BA94: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8003BA98: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8003BA9C: lw          $v0, 0x55A0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X55A0);
    // 0x8003BAA0: lui         $v1, 0xAAAA
    ctx->r3 = S32(0XAAAA << 16);
    // 0x8003BAA4: ori         $v1, $v1, 0xAAAB
    ctx->r3 = ctx->r3 | 0XAAAB;
    // 0x8003BAA8: subu        $v0, $s1, $v0
    ctx->r2 = SUB32(ctx->r17, ctx->r2);
    // 0x8003BAAC: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003BAB0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x8003BAB4: lw          $a0, -0x2660($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2660);
    // 0x8003BAB8: mfhi        $t0
    ctx->r8 = hi;
    // 0x8003BABC: srl         $v1, $t0, 5
    ctx->r3 = S32(U32(ctx->r8) >> 5);
    // 0x8003BAC0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8003BAC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8003BAC8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8003BACC: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
    // 0x8003BAD0: sll         $v0, $s4, 2
    ctx->r2 = S32(ctx->r20 << 2);
    // 0x8003BAD4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8003BAD8: lw          $s0, 0xC($v0)
    ctx->r16 = MEM_W(ctx->r2, 0XC);
    // 0x8003BADC: sll         $v0, $s2, 2
    ctx->r2 = S32(ctx->r18 << 2);
    // 0x8003BAE0: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8003BAE4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8003BAE8: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8003BAEC: addu        $s0, $a0, $v0
    ctx->r16 = ADD32(ctx->r4, ctx->r2);
    // 0x8003BAF0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8003BAF4: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8003BAF8: beq         $v0, $zero, L_8003BB4C
    if (ctx->r2 == 0) {
        // 0x8003BAFC: sll         $v0, $s4, 1
        ctx->r2 = S32(ctx->r20 << 1);
            goto L_8003BB4C;
    }
    // 0x8003BAFC: sll         $v0, $s4, 1
    ctx->r2 = S32(ctx->r20 << 1);
    // 0x8003BB00: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8003BB04: lhu         $v1, 0x0($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X0);
    // 0x8003BB08: sb          $v1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r3;
    // 0x8003BB0C: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8003BB10: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8003BB14: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8003BB18: jal         0x80039F18
    // 0x8003BB1C: sb          $v0, 0x11($sp)
    MEM_B(0X11, ctx->r29) = ctx->r2;
    func_80039F18_15318(rdram, ctx);
        goto after_1;
    // 0x8003BB1C: sb          $v0, 0x11($sp)
    MEM_B(0X11, ctx->r29) = ctx->r2;
    after_1:
    // 0x8003BB20: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8003BB24: lw          $v0, 0xC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XC);
    // 0x8003BB28: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8003BB2C: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x8003BB30: lui         $v1, 0x800C
    ctx->r3 = S32(0X800C << 16);
    // 0x8003BB34: lw          $v1, -0x265C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X265C);
    // 0x8003BB38: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8003BB3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8003BB40: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x8003BB44: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x8003BB48: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
L_8003BB4C:
    // 0x8003BB4C: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
L_8003BB50:
    // 0x8003BB50: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8003BB54: jal         0x8009A3B4
    // 0x8003BB58: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8003BB58: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8003BB5C: addu        $v0, $s3, $zero
    ctx->r2 = ADD32(ctx->r19, 0);
    // 0x8003BB60: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8003BB64: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8003BB68: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8003BB6C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8003BB70: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8003BB74: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8003BB78: jr          $ra
    // 0x8003BB7C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8003BB7C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80034B54_FF54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034B54: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034B58: sb          $a0, 0x434A($at)
    MEM_B(0X434A, ctx->r1) = ctx->r4;
    // 0x80034B5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034B60: jr          $ra
    // 0x80034B64: sb          $a1, 0x434B($at)
    MEM_B(0X434B, ctx->r1) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80034B64: sb          $a1, 0x434B($at)
    MEM_B(0X434B, ctx->r1) = ctx->r5;
;}
RECOMP_FUNC void func_80056F3C_3233C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80056F3C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80056F40: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x80056F44: addiu       $t1, $t1, 0x49B0
    ctx->r9 = ADD32(ctx->r9, 0X49B0);
    // 0x80056F48: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80056F4C: addiu       $t2, $zero, 0x1F
    ctx->r10 = ADD32(0, 0X1F);
    // 0x80056F50: subu        $v0, $t2, $a3
    ctx->r2 = SUB32(ctx->r10, ctx->r7);
L_80056F54:
    // 0x80056F54: blez        $v0, L_80056FD8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80056F58: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80056FD8;
    }
    // 0x80056F58: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80056F5C: addiu       $v0, $zero, 0x1F
    ctx->r2 = ADD32(0, 0X1F);
    // 0x80056F60: subu        $t0, $v0, $a3
    ctx->r8 = SUB32(ctx->r2, ctx->r7);
    // 0x80056F64: addu        $a1, $t1, $a0
    ctx->r5 = ADD32(ctx->r9, ctx->r4);
L_80056F68:
    // 0x80056F68: lbu         $v0, 0x455($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X455);
    // 0x80056F6C: beql        $v0, $zero, L_80056FCC
    if (ctx->r2 == 0) {
        // 0x80056F70: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_80056FCC;
    }
    goto skip_0;
    // 0x80056F70: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x80056F74: lbu         $a2, 0x454($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X454);
    // 0x80056F78: andi        $v1, $a2, 0xFF
    ctx->r3 = ctx->r6 & 0XFF;
    // 0x80056F7C: beq         $v1, $zero, L_80056FB4
    if (ctx->r3 == 0) {
        // 0x80056F80: addiu       $v1, $v1, -0x1
        ctx->r3 = ADD32(ctx->r3, -0X1);
            goto L_80056FB4;
    }
    // 0x80056F80: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80056F84: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80056F88: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80056F8C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80056F90: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80056F94: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80056F98: lb          $v1, -0x1CB6($at)
    ctx->r3 = MEM_B(ctx->r1, -0X1CB6);
    // 0x80056F9C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80056FA0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80056FA4: lb          $v0, -0x1CB6($at)
    ctx->r2 = MEM_B(ctx->r1, -0X1CB6);
    // 0x80056FA8: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80056FAC: beql        $v1, $zero, L_80056FCC
    if (ctx->r3 == 0) {
        // 0x80056FB0: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_80056FCC;
    }
    goto skip_1;
    // 0x80056FB0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_1:
L_80056FB4:
    // 0x80056FB4: addiu       $v1, $a0, 0x1
    ctx->r3 = ADD32(ctx->r4, 0X1);
    // 0x80056FB8: addu        $v1, $t1, $v1
    ctx->r3 = ADD32(ctx->r9, ctx->r3);
    // 0x80056FBC: lbu         $v0, 0x454($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X454);
    // 0x80056FC0: sb          $v0, 0x454($a1)
    MEM_B(0X454, ctx->r5) = ctx->r2;
    // 0x80056FC4: sb          $a2, 0x454($v1)
    MEM_B(0X454, ctx->r3) = ctx->r6;
    // 0x80056FC8: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_80056FCC:
    // 0x80056FCC: slt         $v0, $a0, $t0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80056FD0: bne         $v0, $zero, L_80056F68
    if (ctx->r2 != 0) {
        // 0x80056FD4: addu        $a1, $t1, $a0
        ctx->r5 = ADD32(ctx->r9, ctx->r4);
            goto L_80056F68;
    }
    // 0x80056FD4: addu        $a1, $t1, $a0
    ctx->r5 = ADD32(ctx->r9, ctx->r4);
L_80056FD8:
    // 0x80056FD8: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x80056FDC: slti        $v0, $a3, 0x1F
    ctx->r2 = SIGNED(ctx->r7) < 0X1F ? 1 : 0;
    // 0x80056FE0: bne         $v0, $zero, L_80056F54
    if (ctx->r2 != 0) {
        // 0x80056FE4: subu        $v0, $t2, $a3
        ctx->r2 = SUB32(ctx->r10, ctx->r7);
            goto L_80056F54;
    }
    // 0x80056FE4: subu        $v0, $t2, $a3
    ctx->r2 = SUB32(ctx->r10, ctx->r7);
    // 0x80056FE8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x80056FEC: jr          $ra
    // 0x80056FF0: nop

    TRACE_RETURN()
    return;
    // 0x80056FF0: nop

;}
RECOMP_FUNC void func_80053530_2E930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80053530: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x80053534: lw          $v0, -0x1B68($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1B68);
    // 0x80053538: bne         $a0, $v0, L_80053548
    if (ctx->r4 != ctx->r2) {
        // 0x8005353C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80053548;
    }
    // 0x8005353C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80053540: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80053544: sw          $v0, -0x4994($at)
    MEM_W(-0X4994, ctx->r1) = ctx->r2;
L_80053548:
    // 0x80053548: jr          $ra
    // 0x8005354C: nop

    TRACE_RETURN()
    return;
    // 0x8005354C: nop

;}
RECOMP_FUNC void func_80086F70_62370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80086F70: addiu       $v1, $zero, 0x27F
    ctx->r3 = ADD32(0, 0X27F);
    // 0x80086F74: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80086F78: addiu       $v0, $v0, -0x2A14
    ctx->r2 = ADD32(ctx->r2, -0X2A14);
L_80086F7C:
    // 0x80086F7C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80086F80: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80086F84: bgez        $v1, L_80086F7C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80086F88: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_80086F7C;
    }
    // 0x80086F88: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80086F8C: jr          $ra
    // 0x80086F90: nop

    TRACE_RETURN()
    return;
    // 0x80086F90: nop

;}
RECOMP_FUNC void func_80085C68_61068(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80085C68: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80085C6C: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x80085C70: lui         $a3, 0x801A
    ctx->r7 = S32(0X801A << 16);
    // 0x80085C74: lw          $a3, 0x53D8($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X53D8);
    // 0x80085C78: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x80085C7C: sw          $s0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r16;
    // 0x80085C80: sw          $ra, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r31;
    // 0x80085C84: sw          $fp, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r30;
    // 0x80085C88: sw          $s7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r23;
    // 0x80085C8C: sw          $s6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r22;
    // 0x80085C90: sw          $s5, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r21;
    // 0x80085C94: sw          $s4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r20;
    // 0x80085C98: sw          $s3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r19;
    // 0x80085C9C: sw          $s2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r18;
    // 0x80085CA0: sw          $s1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r17;
    // 0x80085CA4: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x80085CA8: lui         $t0, 0xE700
    ctx->r8 = S32(0XE700 << 16);
    // 0x80085CAC: sw          $a3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r7;
    // 0x80085CB0: sw          $t0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r8;
    // 0x80085CB4: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80085CB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80085CBC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80085CC0: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x80085CC4: bne         $a3, $v0, L_800860E0
    if (ctx->r7 != ctx->r2) {
        // 0x80085CC8: addu        $s0, $a0, $zero
        ctx->r16 = ADD32(ctx->r4, 0);
            goto L_800860E0;
    }
    // 0x80085CC8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80085CCC: jal         0x800281C8
    // 0x80085CD0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_800281C8_35C8(rdram, ctx);
        goto after_0;
    // 0x80085CD0: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_0:
    // 0x80085CD4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80085CD8: beq         $s2, $zero, L_800860E0
    if (ctx->r18 == 0) {
        // 0x80085CDC: nop
    
            goto L_800860E0;
    }
    // 0x80085CDC: nop

    // 0x80085CE0: jal         0x800281C8
    // 0x80085CE4: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_800281C8_35C8(rdram, ctx);
        goto after_1;
    // 0x80085CE4: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_1:
    // 0x80085CE8: beq         $v0, $zero, L_800860E0
    if (ctx->r2 == 0) {
        // 0x80085CEC: sw          $v0, 0xA4($sp)
        MEM_W(0XA4, ctx->r29) = ctx->r2;
            goto L_800860E0;
    }
    // 0x80085CEC: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x80085CF0: lhu         $a3, 0x0($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X0);
    // 0x80085CF4: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80085CF8: lbu         $v1, 0xB61($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB61);
    // 0x80085CFC: sh          $a3, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r7;
    // 0x80085D00: lhu         $t0, 0x2($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X2);
    // 0x80085D04: sh          $t0, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r8;
    // 0x80085D08: lhu         $a3, 0x4($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X4);
    // 0x80085D0C: sh          $a3, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r7;
    // 0x80085D10: lhu         $t0, 0x6($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X6);
    // 0x80085D14: sh          $t0, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r8;
    // 0x80085D18: lhu         $a3, 0x8($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X8);
    // 0x80085D1C: sh          $a3, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r7;
    // 0x80085D20: lhu         $t0, 0xA($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0XA);
    // 0x80085D24: sh          $t0, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r8;
    // 0x80085D28: lbu         $s5, 0xC($s0)
    ctx->r21 = MEM_BU(ctx->r16, 0XC);
    // 0x80085D2C: lbu         $s4, 0xD($s0)
    ctx->r20 = MEM_BU(ctx->r16, 0XD);
    // 0x80085D30: lbu         $s3, 0xE($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0XE);
    // 0x80085D34: lbu         $s6, 0xF($s0)
    ctx->r22 = MEM_BU(ctx->r16, 0XF);
    // 0x80085D38: lbu         $s7, 0x10($s0)
    ctx->r23 = MEM_BU(ctx->r16, 0X10);
    // 0x80085D3C: lbu         $fp, 0x11($s0)
    ctx->r30 = MEM_BU(ctx->r16, 0X11);
    // 0x80085D40: lbu         $a0, 0x12($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X12);
    // 0x80085D44: lbu         $s0, 0x13($s0)
    ctx->r16 = MEM_BU(ctx->r16, 0X13);
    // 0x80085D48: beq         $v1, $zero, L_80085DC8
    if (ctx->r3 == 0) {
        // 0x80085D4C: sb          $s0, 0x9F($sp)
        MEM_B(0X9F, ctx->r29) = ctx->r16;
            goto L_80085DC8;
    }
    // 0x80085D4C: sb          $s0, 0x9F($sp)
    MEM_B(0X9F, ctx->r29) = ctx->r16;
    // 0x80085D50: lhu         $a3, 0x66($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X66);
    // 0x80085D54: lhu         $t0, 0x6E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X6E);
    // 0x80085D58: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x80085D5C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80085D60: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x80085D64: sh          $v0, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r2;
    // 0x80085D68: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x80085D6C: lhu         $a3, 0x76($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X76);
    // 0x80085D70: lhu         $t0, 0x7E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X7E);
    // 0x80085D74: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80085D78: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x80085D7C: sh          $v0, 0x6E($sp)
    MEM_H(0X6E, ctx->r29) = ctx->r2;
    // 0x80085D80: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x80085D84: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80085D88: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x80085D8C: sh          $v0, 0x76($sp)
    MEM_H(0X76, ctx->r29) = ctx->r2;
    // 0x80085D90: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x80085D94: lhu         $a3, 0x86($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X86);
    // 0x80085D98: lhu         $t0, 0x8E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X8E);
    // 0x80085D9C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80085DA0: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x80085DA4: sh          $v0, 0x7E($sp)
    MEM_H(0X7E, ctx->r29) = ctx->r2;
    // 0x80085DA8: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x80085DAC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80085DB0: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x80085DB4: sh          $v0, 0x86($sp)
    MEM_H(0X86, ctx->r29) = ctx->r2;
    // 0x80085DB8: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x80085DBC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80085DC0: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x80085DC4: sh          $v0, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r2;
L_80085DC8:
    // 0x80085DC8: andi        $a0, $a0, 0x2
    ctx->r4 = ctx->r4 & 0X2;
    // 0x80085DCC: sll         $v1, $s5, 1
    ctx->r3 = S32(ctx->r21 << 1);
    // 0x80085DD0: sltiu       $v0, $v1, 0x100
    ctx->r2 = ctx->r3 < 0X100 ? 1 : 0;
    // 0x80085DD4: bne         $v0, $zero, L_80085DE0
    if (ctx->r2 != 0) {
        // 0x80085DD8: sb          $a0, 0x97($sp)
        MEM_B(0X97, ctx->r29) = ctx->r4;
            goto L_80085DE0;
    }
    // 0x80085DD8: sb          $a0, 0x97($sp)
    MEM_B(0X97, ctx->r29) = ctx->r4;
    // 0x80085DDC: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_80085DE0:
    // 0x80085DE0: addu        $s5, $v1, $zero
    ctx->r21 = ADD32(ctx->r3, 0);
    // 0x80085DE4: sll         $v1, $s4, 1
    ctx->r3 = S32(ctx->r20 << 1);
    // 0x80085DE8: sltiu       $v0, $v1, 0x100
    ctx->r2 = ctx->r3 < 0X100 ? 1 : 0;
    // 0x80085DEC: beql        $v0, $zero, L_80085DF4
    if (ctx->r2 == 0) {
        // 0x80085DF0: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_80085DF4;
    }
    goto skip_0;
    // 0x80085DF0: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_0:
L_80085DF4:
    // 0x80085DF4: addu        $s4, $v1, $zero
    ctx->r20 = ADD32(ctx->r3, 0);
    // 0x80085DF8: sll         $v1, $s3, 1
    ctx->r3 = S32(ctx->r19 << 1);
    // 0x80085DFC: sltiu       $v0, $v1, 0x100
    ctx->r2 = ctx->r3 < 0X100 ? 1 : 0;
    // 0x80085E00: beql        $v0, $zero, L_80085E08
    if (ctx->r2 == 0) {
        // 0x80085E04: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_80085E08;
    }
    goto skip_1;
    // 0x80085E04: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_1:
L_80085E08:
    // 0x80085E08: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x80085E0C: sll         $v1, $s6, 1
    ctx->r3 = S32(ctx->r22 << 1);
    // 0x80085E10: sltiu       $v0, $v1, 0x100
    ctx->r2 = ctx->r3 < 0X100 ? 1 : 0;
    // 0x80085E14: beql        $v0, $zero, L_80085E1C
    if (ctx->r2 == 0) {
        // 0x80085E18: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_80085E1C;
    }
    goto skip_2;
    // 0x80085E18: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_2:
L_80085E1C:
    // 0x80085E1C: addu        $s6, $v1, $zero
    ctx->r22 = ADD32(ctx->r3, 0);
    // 0x80085E20: sll         $v1, $s7, 1
    ctx->r3 = S32(ctx->r23 << 1);
    // 0x80085E24: sltiu       $v0, $v1, 0x100
    ctx->r2 = ctx->r3 < 0X100 ? 1 : 0;
    // 0x80085E28: beql        $v0, $zero, L_80085E30
    if (ctx->r2 == 0) {
        // 0x80085E2C: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_80085E30;
    }
    goto skip_3;
    // 0x80085E2C: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_3:
L_80085E30:
    // 0x80085E30: addu        $s7, $v1, $zero
    ctx->r23 = ADD32(ctx->r3, 0);
    // 0x80085E34: sll         $v1, $fp, 1
    ctx->r3 = S32(ctx->r30 << 1);
    // 0x80085E38: sltiu       $v0, $v1, 0x100
    ctx->r2 = ctx->r3 < 0X100 ? 1 : 0;
    // 0x80085E3C: beql        $v0, $zero, L_80085E44
    if (ctx->r2 == 0) {
        // 0x80085E40: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_80085E44;
    }
    goto skip_4;
    // 0x80085E40: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_4:
L_80085E44:
    // 0x80085E44: addu        $fp, $v1, $zero
    ctx->r30 = ADD32(ctx->r3, 0);
    // 0x80085E48: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x80085E4C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80085E50: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x80085E54: addiu       $s0, $s0, 0x4760
    ctx->r16 = ADD32(ctx->r16, 0X4760);
    // 0x80085E58: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80085E5C: jal         0x8009A3B4
    // 0x80085E60: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80085E60: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_2:
    // 0x80085E64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80085E68: lhu         $a3, 0x66($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X66);
    // 0x80085E6C: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80085E70: lbu         $v1, 0xB61($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XB61);
    // 0x80085E74: lhu         $t0, 0x6E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X6E);
    // 0x80085E78: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x80085E7C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80085E80: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x80085E84: sh          $v0, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r2;
    // 0x80085E88: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x80085E8C: lhu         $a3, 0x76($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X76);
    // 0x80085E90: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80085E94: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x80085E98: sh          $v0, 0x52($sp)
    MEM_H(0X52, ctx->r29) = ctx->r2;
    // 0x80085E9C: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x80085EA0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80085EA4: sllv        $v0, $v0, $v1
    ctx->r2 = S32(ctx->r2 << (ctx->r3 & 31));
    // 0x80085EA8: jal         0x80031E5C
    // 0x80085EAC: sh          $v0, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r2;
    func_80031E5C_D25C(rdram, ctx);
        goto after_3;
    // 0x80085EAC: sh          $v0, 0x54($sp)
    MEM_H(0X54, ctx->r29) = ctx->r2;
    after_3:
    // 0x80085EB0: jal         0x80031E94
    // 0x80085EB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031E94_D294(rdram, ctx);
        goto after_4;
    // 0x80085EB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80085EB8: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80085EBC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80085EC0: jal         0x80032068
    // 0x80085EC4: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    func_80032068_D468(rdram, ctx);
        goto after_5;
    // 0x80085EC4: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_5:
    // 0x80085EC8: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    // 0x80085ECC: jal         0x8002C5A4
    // 0x80085ED0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C5A4_79A4(rdram, ctx);
        goto after_6;
    // 0x80085ED0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x80085ED4: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80085ED8: lw          $a1, -0x6F10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6F10);
    // 0x80085EDC: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x80085EE0: lw          $a0, 0x3C30($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3C30);
    // 0x80085EE4: lui         $v1, 0xDA38
    ctx->r3 = S32(0XDA38 << 16);
    // 0x80085EE8: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x80085EEC: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x80085EF0: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    // 0x80085EF4: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x80085EF8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80085EFC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80085F00: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80085F04: beq         $a0, $v0, L_80085F44
    if (ctx->r4 == ctx->r2) {
        // 0x80085F08: sw          $t0, 0x4($a1)
        MEM_W(0X4, ctx->r5) = ctx->r8;
            goto L_80085F44;
    }
    // 0x80085F08: sw          $t0, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r8;
    // 0x80085F0C: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x80085F10: lui         $a3, 0xE700
    ctx->r7 = S32(0XE700 << 16);
    // 0x80085F14: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80085F18: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80085F1C: addiu       $v0, $a1, 0x18
    ctx->r2 = ADD32(ctx->r5, 0X18);
    // 0x80085F20: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80085F24: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80085F28: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x80085F2C: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    // 0x80085F30: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80085F34: addiu       $v0, $v0, -0x1720
    ctx->r2 = ADD32(ctx->r2, -0X1720);
    // 0x80085F38: sw          $a3, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r7;
    // 0x80085F3C: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x80085F40: sw          $v0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r2;
L_80085F44:
    // 0x80085F44: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80085F48: jal         0x8009A2B0
    // 0x80085F4C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    bzero_recomp(rdram, ctx);
        goto after_7;
    // 0x80085F4C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_7:
    // 0x80085F50: lbu         $t0, 0x97($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X97);
    // 0x80085F54: beq         $t0, $zero, L_8008600C
    if (ctx->r8 == 0) {
        // 0x80085F58: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8008600C;
    }
    // 0x80085F58: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80085F5C: lbu         $a0, 0x9F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X9F);
    // 0x80085F60: beq         $a0, $zero, L_8008600C
    if (ctx->r4 == 0) {
        // 0x80085F64: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_8008600C;
    }
    // 0x80085F64: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80085F68: lw          $a3, 0xAC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XAC);
    // 0x80085F6C: beq         $a0, $a3, L_80085F7C
    if (ctx->r4 == ctx->r7) {
        // 0x80085F70: andi        $v1, $s5, 0xFF
        ctx->r3 = ctx->r21 & 0XFF;
            goto L_80085F7C;
    }
    // 0x80085F70: andi        $v1, $s5, 0xFF
    ctx->r3 = ctx->r21 & 0XFF;
    // 0x80085F74: j           L_8008600C
    // 0x80085F78: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_8008600C;
    // 0x80085F78: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_80085F7C:
    // 0x80085F7C: addiu       $v1, $v1, 0x80
    ctx->r3 = ADD32(ctx->r3, 0X80);
    // 0x80085F80: sltiu       $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 < 0XFF ? 1 : 0;
    // 0x80085F84: beql        $v0, $zero, L_80085F8C
    if (ctx->r2 == 0) {
        // 0x80085F88: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_80085F8C;
    }
    goto skip_5;
    // 0x80085F88: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_5:
L_80085F8C:
    // 0x80085F8C: addu        $s5, $v1, $zero
    ctx->r21 = ADD32(ctx->r3, 0);
    // 0x80085F90: andi        $v1, $s4, 0xFF
    ctx->r3 = ctx->r20 & 0XFF;
    // 0x80085F94: addiu       $v1, $v1, 0x60
    ctx->r3 = ADD32(ctx->r3, 0X60);
    // 0x80085F98: sltiu       $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 < 0XFF ? 1 : 0;
    // 0x80085F9C: beql        $v0, $zero, L_80085FA4
    if (ctx->r2 == 0) {
        // 0x80085FA0: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_80085FA4;
    }
    goto skip_6;
    // 0x80085FA0: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_6:
L_80085FA4:
    // 0x80085FA4: addu        $s4, $v1, $zero
    ctx->r20 = ADD32(ctx->r3, 0);
    // 0x80085FA8: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x80085FAC: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x80085FB0: sltiu       $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 < 0XFF ? 1 : 0;
    // 0x80085FB4: beql        $v0, $zero, L_80085FBC
    if (ctx->r2 == 0) {
        // 0x80085FB8: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_80085FBC;
    }
    goto skip_7;
    // 0x80085FB8: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_7:
L_80085FBC:
    // 0x80085FBC: addu        $s3, $v1, $zero
    ctx->r19 = ADD32(ctx->r3, 0);
    // 0x80085FC0: andi        $v1, $s6, 0xFF
    ctx->r3 = ctx->r22 & 0XFF;
    // 0x80085FC4: addiu       $v1, $v1, 0x80
    ctx->r3 = ADD32(ctx->r3, 0X80);
    // 0x80085FC8: sltiu       $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 < 0XFF ? 1 : 0;
    // 0x80085FCC: beql        $v0, $zero, L_80085FD4
    if (ctx->r2 == 0) {
        // 0x80085FD0: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_80085FD4;
    }
    goto skip_8;
    // 0x80085FD0: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_8:
L_80085FD4:
    // 0x80085FD4: addu        $s6, $v1, $zero
    ctx->r22 = ADD32(ctx->r3, 0);
    // 0x80085FD8: andi        $v1, $s7, 0xFF
    ctx->r3 = ctx->r23 & 0XFF;
    // 0x80085FDC: addiu       $v1, $v1, 0x60
    ctx->r3 = ADD32(ctx->r3, 0X60);
    // 0x80085FE0: sltiu       $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 < 0XFF ? 1 : 0;
    // 0x80085FE4: beql        $v0, $zero, L_80085FEC
    if (ctx->r2 == 0) {
        // 0x80085FE8: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_80085FEC;
    }
    goto skip_9;
    // 0x80085FE8: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_9:
L_80085FEC:
    // 0x80085FEC: addu        $s7, $v1, $zero
    ctx->r23 = ADD32(ctx->r3, 0);
    // 0x80085FF0: andi        $v1, $fp, 0xFF
    ctx->r3 = ctx->r30 & 0XFF;
    // 0x80085FF4: addiu       $v1, $v1, 0x20
    ctx->r3 = ADD32(ctx->r3, 0X20);
    // 0x80085FF8: sltiu       $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 < 0XFF ? 1 : 0;
    // 0x80085FFC: beql        $v0, $zero, L_80086004
    if (ctx->r2 == 0) {
        // 0x80086000: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_80086004;
    }
    goto skip_10;
    // 0x80086000: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    skip_10:
L_80086004:
    // 0x80086004: addu        $fp, $v1, $zero
    ctx->r30 = ADD32(ctx->r3, 0);
    // 0x80086008: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
L_8008600C:
    // 0x8008600C: sb          $s5, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r21;
    // 0x80086010: sb          $s4, 0xD($s2)
    MEM_B(0XD, ctx->r18) = ctx->r20;
    // 0x80086014: sb          $s3, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r19;
    // 0x80086018: sb          $v0, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r2;
    // 0x8008601C: sb          $s6, 0x1C($s2)
    MEM_B(0X1C, ctx->r18) = ctx->r22;
    // 0x80086020: sb          $s7, 0x1D($s2)
    MEM_B(0X1D, ctx->r18) = ctx->r23;
    // 0x80086024: sb          $fp, 0x1E($s2)
    MEM_B(0X1E, ctx->r18) = ctx->r30;
    // 0x80086028: sb          $v0, 0x1F($s2)
    MEM_B(0X1F, ctx->r18) = ctx->r2;
    // 0x8008602C: sh          $zero, 0x0($s2)
    MEM_H(0X0, ctx->r18) = 0;
    // 0x80086030: sh          $zero, 0x2($s2)
    MEM_H(0X2, ctx->r18) = 0;
    // 0x80086034: sh          $zero, 0x4($s2)
    MEM_H(0X4, ctx->r18) = 0;
    // 0x80086038: sh          $zero, 0x8($s2)
    MEM_H(0X8, ctx->r18) = 0;
    // 0x8008603C: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x80086040: lhu         $t0, 0x7E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X7E);
    // 0x80086044: lhu         $a3, 0x66($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X66);
    // 0x80086048: lui         $a1, 0x100
    ctx->r5 = S32(0X100 << 16);
    // 0x8008604C: subu        $v0, $t0, $a3
    ctx->r2 = SUB32(ctx->r8, ctx->r7);
    // 0x80086050: sh          $v0, 0x10($s2)
    MEM_H(0X10, ctx->r18) = ctx->r2;
    // 0x80086054: lhu         $t0, 0x86($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X86);
    // 0x80086058: lhu         $a3, 0x6E($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X6E);
    // 0x8008605C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80086060: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80086064: ori         $a1, $a1, 0x2004
    ctx->r5 = ctx->r5 | 0X2004;
    // 0x80086068: subu        $v0, $t0, $a3
    ctx->r2 = SUB32(ctx->r8, ctx->r7);
    // 0x8008606C: sh          $v0, 0x12($s2)
    MEM_H(0X12, ctx->r18) = ctx->r2;
    // 0x80086070: lhu         $t0, 0x8E($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X8E);
    // 0x80086074: lhu         $a3, 0x76($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X76);
    // 0x80086078: lui         $a0, 0x800
    ctx->r4 = S32(0X800 << 16);
    // 0x8008607C: ori         $a0, $a0, 0x200
    ctx->r4 = ctx->r4 | 0X200;
    // 0x80086080: subu        $v0, $t0, $a3
    ctx->r2 = SUB32(ctx->r8, ctx->r7);
    // 0x80086084: sh          $v0, 0x14($s2)
    MEM_H(0X14, ctx->r18) = ctx->r2;
    // 0x80086088: addiu       $v0, $zero, 0x7C0
    ctx->r2 = ADD32(0, 0X7C0);
    // 0x8008608C: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x80086090: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80086094: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80086098: sw          $v0, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = ctx->r2;
    // 0x8008609C: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x800860A0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800860A4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800860A8: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x800860AC: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x800860B0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x800860B4: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x800860B8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800860BC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800860C0: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x800860C4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800860C8: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x800860CC: sw          $s2, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r18;
    // 0x800860D0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800860D4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800860D8: sw          $a0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r4;
    // 0x800860DC: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
L_800860E0:
    // 0x800860E0: lw          $ra, 0xD4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD4);
    // 0x800860E4: lw          $fp, 0xD0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XD0);
    // 0x800860E8: lw          $s7, 0xCC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XCC);
    // 0x800860EC: lw          $s6, 0xC8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XC8);
    // 0x800860F0: lw          $s5, 0xC4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XC4);
    // 0x800860F4: lw          $s4, 0xC0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XC0);
    // 0x800860F8: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x800860FC: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x80086100: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x80086104: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x80086108: jr          $ra
    // 0x8008610C: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    TRACE_RETURN()
    return;
    // 0x8008610C: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_800701F0_4B5F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800701F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800701F4: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x800701F8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800701FC: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80070200: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80070204: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80070208: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8007020C: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x80070210: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80070214: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80070218: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x8007021C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80070220: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80070224: addiu       $a0, $a1, 0x38
    ctx->r4 = ADD32(ctx->r5, 0X38);
    // 0x80070228: jal         0x8009A3B4
    // 0x8007022C: addiu       $a1, $v0, 0x3A8
    ctx->r5 = ADD32(ctx->r2, 0X3A8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8007022C: addiu       $a1, $v0, 0x3A8
    ctx->r5 = ADD32(ctx->r2, 0X3A8);
    after_0:
    // 0x80070230: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80070234: jr          $ra
    // 0x80070238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80070238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80035420_10820(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035420: jr          $ra
    // 0x80035424: nop

    TRACE_RETURN()
    return;
    // 0x80035424: nop

;}
RECOMP_FUNC void func_80092E10_6E210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80092E10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80092E14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80092E18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80092E1C: jal         0x80092EB0
    // 0x80092E20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_80092EB0_6E2B0(rdram, ctx);
        goto after_0;
    // 0x80092E20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80092E24: jal         0x80094460
    // 0x80092E28: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_1;
    // 0x80092E28: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80092E2C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80092E30: sw          $s0, -0xEC0($at)
    MEM_W(-0XEC0, ctx->r1) = ctx->r16;
    // 0x80092E34: jal         0x80094460
    // 0x80092E38: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    osSetIntMask_recomp(rdram, ctx);
        goto after_2;
    // 0x80092E38: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_2:
    // 0x80092E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80092E40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80092E44: jr          $ra
    // 0x80092E48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80092E48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80092E4C: nop

;}
RECOMP_FUNC void func_80047260_22660(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80047260: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80047264: addiu       $v0, $v0, 0x4028
    ctx->r2 = ADD32(ctx->r2, 0X4028);
    // 0x80047268: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8004726C: sw          $v0, -0x25E0($at)
    MEM_W(-0X25E0, ctx->r1) = ctx->r2;
    // 0x80047270: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80047274: addiu       $v0, $v0, 0x76F0
    ctx->r2 = ADD32(ctx->r2, 0X76F0);
    // 0x80047278: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8004727C: jr          $ra
    // 0x80047280: sw          $v0, -0x72D4($at)
    MEM_W(-0X72D4, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80047280: sw          $v0, -0x72D4($at)
    MEM_W(-0X72D4, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_8008C544_67944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008C544: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8008C548: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008C54C: ldc1        $f4, 0x2D30($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X2D30);
    // 0x8008C550: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
L_8008C554:
    // 0x8008C554: lhu         $v1, 0xA4($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0XA4);
    // 0x8008C558: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x8008C55C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8008C560: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x8008C564: sh          $v1, 0xA4($a1)
    MEM_H(0XA4, ctx->r5) = ctx->r3;
    // 0x8008C568: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8008C56C: bne         $v1, $zero, L_8008C63C
    if (ctx->r3 != 0) {
        // 0x8008C570: sw          $v0, 0x18($a1)
        MEM_W(0X18, ctx->r5) = ctx->r2;
            goto L_8008C63C;
    }
    // 0x8008C570: sw          $v0, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r2;
    // 0x8008C574: lw          $v0, 0x34($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X34);
    // 0x8008C578: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x8008C57C: sw          $v1, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r3;
    // 0x8008C580: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x8008C584: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
    // 0x8008C588: sltiu       $v0, $a0, 0x80
    ctx->r2 = ctx->r4 < 0X80 ? 1 : 0;
    // 0x8008C58C: bne         $v0, $zero, L_8008C610
    if (ctx->r2 != 0) {
        // 0x8008C590: andi        $v0, $v1, 0x7F
        ctx->r2 = ctx->r3 & 0X7F;
            goto L_8008C610;
    }
    // 0x8008C590: andi        $v0, $v1, 0x7F
    ctx->r2 = ctx->r3 & 0X7F;
    // 0x8008C594: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x8008C598: nop

    // 0x8008C59C: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8008C5A0: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x8008C5A4: sub.d       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = ctx->f0.d - ctx->f4.d;
    // 0x8008C5A8: lwc1        $f2, 0x6C($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X6C);
    // 0x8008C5AC: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x8008C5B0: mul.s       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8008C5B4: lw          $v1, 0x34($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X34);
    // 0x8008C5B8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8008C5BC: sw          $v0, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r2;
    // 0x8008C5C0: swc1        $f0, 0x70($a1)
    MEM_W(0X70, ctx->r5) = ctx->f0.u32l;
    // 0x8008C5C4: swc1        $f2, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f2.u32l;
    // 0x8008C5C8: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x8008C5CC: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x8008C5D0: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8008C5D4: bne         $v0, $zero, L_8008C608
    if (ctx->r2 != 0) {
        // 0x8008C5D8: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_8008C608;
    }
    // 0x8008C5D8: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x8008C5DC: lw          $a0, 0x34($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X34);
    // 0x8008C5E0: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
    // 0x8008C5E4: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8008C5E8: sh          $v1, 0xA4($a1)
    MEM_H(0XA4, ctx->r5) = ctx->r3;
    // 0x8008C5EC: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8008C5F0: sw          $v0, 0x34($a1)
    MEM_W(0X34, ctx->r5) = ctx->r2;
    // 0x8008C5F4: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8008C5F8: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8008C5FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008C600: j           L_8008C63C
    // 0x8008C604: sh          $v0, 0xA4($a1)
    MEM_H(0XA4, ctx->r5) = ctx->r2;
        goto L_8008C63C;
    // 0x8008C604: sh          $v0, 0xA4($a1)
    MEM_H(0XA4, ctx->r5) = ctx->r2;
L_8008C608:
    // 0x8008C608: j           L_8008C63C
    // 0x8008C60C: sh          $v0, 0xA4($a1)
    MEM_H(0XA4, ctx->r5) = ctx->r2;
        goto L_8008C63C;
    // 0x8008C60C: sh          $v0, 0xA4($a1)
    MEM_H(0XA4, ctx->r5) = ctx->r2;
L_8008C610:
    // 0x8008C610: mtc1        $a0, $f0
    ctx->f0.u32l = ctx->r4;
    // 0x8008C614: nop

    // 0x8008C618: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8008C61C: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x8008C620: sub.d       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = ctx->f0.d - ctx->f4.d;
    // 0x8008C624: lwc1        $f2, 0x6C($a1)
    ctx->f2.u32l = MEM_W(ctx->r5, 0X6C);
    // 0x8008C628: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x8008C62C: mul.s       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8008C630: sh          $a2, 0xA4($a1)
    MEM_H(0XA4, ctx->r5) = ctx->r6;
    // 0x8008C634: swc1        $f0, 0x70($a1)
    MEM_W(0X70, ctx->r5) = ctx->f0.u32l;
    // 0x8008C638: swc1        $f2, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->f2.u32l;
L_8008C63C:
    // 0x8008C63C: lw          $v0, 0x18($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X18);
    // 0x8008C640: lw          $v1, 0xC($a1)
    ctx->r3 = MEM_W(ctx->r5, 0XC);
    // 0x8008C644: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8008C648: bltz        $v0, L_8008C554
    if (SIGNED(ctx->r2) < 0) {
        // 0x8008C64C: nop
    
            goto L_8008C554;
    }
    // 0x8008C64C: nop

    // 0x8008C650: jr          $ra
    // 0x8008C654: nop

    TRACE_RETURN()
    return;
    // 0x8008C654: nop

;}
RECOMP_FUNC void func_8008B314_66714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B314: jr          $ra
    // 0x8008B318: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    TRACE_RETURN()
    return;
    // 0x8008B318: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
;}
RECOMP_FUNC void func_8003B820_16C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B820: jr          $ra
    // 0x8003B824: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    TRACE_RETURN()
    return;
    // 0x8003B824: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
;}
RECOMP_FUNC void func_8008F080_6A480(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008F080: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8008F084: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008F088: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8008F08C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8008F090: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x8008F094: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8008F098: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x8008F09C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008F0A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008F0A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8008F0A8: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x8008F0AC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8008F0B0: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8008F0B4: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8008F0B8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8008F0BC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8008F0C0: jal         0x80098CC0
    // 0x8008F0C4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x8008F0C4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x8008F0C8: addu        $s3, $v0, $zero
    ctx->r19 = ADD32(ctx->r2, 0);
    // 0x8008F0CC: sw          $s3, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r19;
    // 0x8008F0D0: lbu         $v0, 0x1C($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X1C);
    // 0x8008F0D4: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x8008F0D8: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8008F0DC: beq         $v0, $zero, L_8008F13C
    if (ctx->r2 == 0) {
        // 0x8008F0E0: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8008F13C;
    }
    // 0x8008F0E0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8008F0E4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008F0E8: addu        $at, $at, $v0
    gpr jr_addend_8008F0F0 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8008F0EC: lw          $v0, 0x2E00($at)
    ctx->r2 = ADD32(ctx->r1, 0X2E00);
    // 0x8008F0F0: jr          $v0
    // 0x8008F0F4: nop

    switch (jr_addend_8008F0F0 >> 2) {
        case 0: goto L_8008F0F8; break;
        case 1: goto L_8008F104; break;
        case 2: goto L_8008F11C; break;
        case 3: goto L_8008F128; break;
        case 4: goto L_8008F110; break;
        case 5: goto L_8008F134; break;
        default: switch_error(__func__, 0x8008F0F0, 0x800D2E00);
    }
    // 0x8008F0F4: nop

L_8008F0F8:
    // 0x8008F0F8: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x8008F0FC: j           L_8008F144
    // 0x8008F100: addiu       $s2, $s2, -0x1190
    ctx->r18 = ADD32(ctx->r18, -0X1190);
        goto L_8008F144;
    // 0x8008F100: addiu       $s2, $s2, -0x1190
    ctx->r18 = ADD32(ctx->r18, -0X1190);
L_8008F104:
    // 0x8008F104: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x8008F108: j           L_8008F144
    // 0x8008F10C: addiu       $s2, $s2, -0x1128
    ctx->r18 = ADD32(ctx->r18, -0X1128);
        goto L_8008F144;
    // 0x8008F10C: addiu       $s2, $s2, -0x1128
    ctx->r18 = ADD32(ctx->r18, -0X1128);
L_8008F110:
    // 0x8008F110: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x8008F114: j           L_8008F144
    // 0x8008F118: addiu       $s2, $s2, -0x10A0
    ctx->r18 = ADD32(ctx->r18, -0X10A0);
        goto L_8008F144;
    // 0x8008F118: addiu       $s2, $s2, -0x10A0
    ctx->r18 = ADD32(ctx->r18, -0X10A0);
L_8008F11C:
    // 0x8008F11C: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x8008F120: j           L_8008F144
    // 0x8008F124: addiu       $s2, $s2, -0x1078
    ctx->r18 = ADD32(ctx->r18, -0X1078);
        goto L_8008F144;
    // 0x8008F124: addiu       $s2, $s2, -0x1078
    ctx->r18 = ADD32(ctx->r18, -0X1078);
L_8008F128:
    // 0x8008F128: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x8008F12C: j           L_8008F144
    // 0x8008F130: addiu       $s2, $s2, -0x1050
    ctx->r18 = ADD32(ctx->r18, -0X1050);
        goto L_8008F144;
    // 0x8008F130: addiu       $s2, $s2, -0x1050
    ctx->r18 = ADD32(ctx->r18, -0X1050);
L_8008F134:
    // 0x8008F134: j           L_8008F144
    // 0x8008F138: lw          $s2, 0x20($s6)
    ctx->r18 = MEM_W(ctx->r22, 0X20);
        goto L_8008F144;
    // 0x8008F138: lw          $s2, 0x20($s6)
    ctx->r18 = MEM_W(ctx->r22, 0X20);
L_8008F13C:
    // 0x8008F13C: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x8008F140: addiu       $s2, $s2, -0x1028
    ctx->r18 = ADD32(ctx->r18, -0X1028);
L_8008F144:
    // 0x8008F144: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8008F148: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008F14C: sb          $v0, 0x24($s3)
    MEM_B(0X24, ctx->r19) = ctx->r2;
    // 0x8008F150: lbu         $a3, 0x24($s3)
    ctx->r7 = MEM_BU(ctx->r19, 0X24);
    // 0x8008F154: lw          $v0, 0x4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X4);
    // 0x8008F158: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008F15C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x8008F160: sw          $v0, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r2;
    // 0x8008F164: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8008F168: jal         0x80098CC0
    // 0x8008F16C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_1;
    // 0x8008F16C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_1:
    // 0x8008F170: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008F174: sw          $v0, 0x20($s3)
    MEM_W(0X20, ctx->r19) = ctx->r2;
    // 0x8008F178: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8008F17C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8008F180: lw          $a3, 0x1C($s3)
    ctx->r7 = MEM_W(ctx->r19, 0X1C);
    // 0x8008F184: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008F188: jal         0x80098CC0
    // 0x8008F18C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x8008F18C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    after_2:
    // 0x8008F190: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    // 0x8008F194: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
    // 0x8008F198: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008F19C: sw          $v0, 0x14($s3)
    MEM_W(0X14, ctx->r19) = ctx->r2;
    // 0x8008F1A0: beq         $v1, $zero, L_8008F1D4
    if (ctx->r3 == 0) {
        // 0x8008F1A4: sw          $v0, 0x18($s3)
        MEM_W(0X18, ctx->r19) = ctx->r2;
            goto L_8008F1D4;
    }
    // 0x8008F1A4: sw          $v0, 0x18($s3)
    MEM_W(0X18, ctx->r19) = ctx->r2;
L_8008F1A8:
    // 0x8008F1A8: lw          $v1, 0x14($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X14);
    // 0x8008F1AC: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x8008F1B0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8008F1B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008F1B8: sh          $zero, 0x0($v0)
    MEM_H(0X0, ctx->r2) = 0;
    // 0x8008F1BC: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    // 0x8008F1C0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8008F1C4: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x8008F1C8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8008F1CC: bne         $v0, $zero, L_8008F1A8
    if (ctx->r2 != 0) {
        // 0x8008F1D0: nop
    
            goto L_8008F1A8;
    }
    // 0x8008F1D0: nop

L_8008F1D4:
    // 0x8008F1D4: lbu         $v0, 0x24($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X24);
    // 0x8008F1D8: beq         $v0, $zero, L_8008F444
    if (ctx->r2 == 0) {
        // 0x8008F1DC: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_8008F444;
    }
    // 0x8008F1DC: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x8008F1E0: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
L_8008F1E4:
    // 0x8008F1E4: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x8008F1E8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8008F1EC: lw          $a1, 0x20($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X20);
    // 0x8008F1F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8008F1F4: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x8008F1F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008F1FC: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8008F200: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8008F204: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8008F208: addu        $s0, $a1, $v1
    ctx->r16 = ADD32(ctx->r5, ctx->r3);
    // 0x8008F20C: addiu       $a1, $a0, 0x1
    ctx->r5 = ADD32(ctx->r4, 0X1);
    // 0x8008F210: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8008F214: andi        $v0, $a1, 0xFFFF
    ctx->r2 = ctx->r5 & 0XFFFF;
    // 0x8008F218: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008F21C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8008F220: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8008F224: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8008F228: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8008F22C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008F230: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8008F234: sw          $v1, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r3;
    // 0x8008F238: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8008F23C: addiu       $v0, $a1, 0x2
    ctx->r2 = ADD32(ctx->r5, 0X2);
    // 0x8008F240: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8008F244: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008F248: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8008F24C: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x8008F250: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8008F254: addiu       $v0, $a1, 0x3
    ctx->r2 = ADD32(ctx->r5, 0X3);
    // 0x8008F258: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8008F25C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008F260: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8008F264: sh          $v1, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r3;
    // 0x8008F268: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8008F26C: addiu       $s1, $a1, 0x4
    ctx->r17 = ADD32(ctx->r5, 0X4);
    // 0x8008F270: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x8008F274: andi        $v0, $s1, 0xFFFF
    ctx->r2 = ctx->r17 & 0XFFFF;
    // 0x8008F278: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008F27C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8008F280: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8008F284: beq         $v0, $zero, L_8008F394
    if (ctx->r2 == 0) {
        // 0x8008F288: addu        $v0, $s1, $zero
        ctx->r2 = ADD32(ctx->r17, 0);
            goto L_8008F394;
    }
    // 0x8008F288: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8008F28C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8008F290: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008F294: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8008F298: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8008F29C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8008F2A0: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8008F2A4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8008F2A8: div.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = DIV_S(ctx->f0.fl, ctx->f2.fl);
    // 0x8008F2AC: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x8008F2B0: add.d       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = ctx->f0.d + ctx->f0.d;
    // 0x8008F2B4: lwc1        $f2, 0x18($s6)
    ctx->f2.u32l = MEM_W(ctx->r22, 0X18);
    // 0x8008F2B8: cvt.d.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.d = CVT_D_W(ctx->f2.u32l);
    // 0x8008F2BC: div.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = DIV_D(ctx->f0.d, ctx->f2.d);
    // 0x8008F2C0: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    // 0x8008F2C4: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8008F2C8: addiu       $v0, $a1, 0x5
    ctx->r2 = ADD32(ctx->r5, 0X5);
    // 0x8008F2CC: addiu       $s1, $a1, 0x6
    ctx->r17 = ADD32(ctx->r5, 0X6);
    // 0x8008F2D0: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8008F2D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008F2D8: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8008F2DC: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x8008F2E0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008F2E4: ldc1        $f2, 0x2E18($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X2E18);
    // 0x8008F2E8: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x8008F2EC: nop

    // 0x8008F2F0: cvt.d.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.d = CVT_D_W(ctx->f4.u32l);
    // 0x8008F2F4: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x8008F2F8: swc1        $f0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f0.u32l;
    // 0x8008F2FC: lwc1        $f0, 0x0($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X0);
    // 0x8008F300: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x8008F304: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x8008F308: bgez        $a0, L_8008F31C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8008F30C: div.d       $f2, $f0, $f2
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = DIV_D(ctx->f0.d, ctx->f2.d);
            goto L_8008F31C;
    }
    // 0x8008F30C: div.d       $f2, $f0, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = DIV_D(ctx->f0.d, ctx->f2.d);
    // 0x8008F310: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008F314: ldc1        $f0, 0x2E20($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X2E20);
    // 0x8008F318: add.d       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f4.d + ctx->f0.d;
L_8008F31C:
    // 0x8008F31C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008F320: mul.d       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = MUL_D(ctx->f2.d, ctx->f4.d);
    // 0x8008F324: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008F328: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8008F32C: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8008F330: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x8008F334: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8008F338: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x8008F33C: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x8008F340: swc1        $f2, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->f2.u32l;
    // 0x8008F344: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x8008F348: swc1        $f0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f0.u32l;
    // 0x8008F34C: jal         0x80098CC0
    // 0x8008F350: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x8008F350: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x8008F354: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008F358: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008F35C: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x8008F360: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8008F364: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x8008F368: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8008F36C: jal         0x80098CC0
    // 0x8008F370: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_4;
    // 0x8008F370: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x8008F374: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8008F378: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
    // 0x8008F37C: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x8008F380: sw          $zero, 0x20($v0)
    MEM_W(0X20, ctx->r2) = 0;
    // 0x8008F384: lw          $v1, 0x24($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X24);
    // 0x8008F388: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008F38C: j           L_8008F39C
    // 0x8008F390: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
        goto L_8008F39C;
    // 0x8008F390: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
L_8008F394:
    // 0x8008F394: sw          $zero, 0x24($s0)
    MEM_W(0X24, ctx->r16) = 0;
    // 0x8008F398: addiu       $s1, $a1, 0x6
    ctx->r17 = ADD32(ctx->r5, 0X6);
L_8008F39C:
    // 0x8008F39C: andi        $v0, $s1, 0xFFFF
    ctx->r2 = ctx->r17 & 0XFFFF;
    // 0x8008F3A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008F3A4: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8008F3A8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8008F3AC: beq         $v0, $zero, L_8008F424
    if (ctx->r2 == 0) {
        // 0x8008F3B0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8008F424;
    }
    // 0x8008F3B0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008F3B4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008F3B8: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x8008F3BC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8008F3C0: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8008F3C4: jal         0x80098CC0
    // 0x8008F3C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_5;
    // 0x8008F3C8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x8008F3CC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8008F3D0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008F3D4: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x8008F3D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8008F3DC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8008F3E0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8008F3E4: jal         0x80098CC0
    // 0x8008F3E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    alHeapDBAlloc(rdram, ctx);
        goto after_6;
    // 0x8008F3E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_6:
    // 0x8008F3EC: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x8008F3F0: sw          $v0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r2;
    // 0x8008F3F4: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x8008F3F8: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8008F3FC: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8008F400: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8008F404: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8008F408: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8008F40C: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
    // 0x8008F410: lw          $a0, 0x20($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X20);
    // 0x8008F414: jal         0x80095A20
    // 0x8008F418: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    _init_lpfilter(rdram, ctx);
        goto after_7;
    // 0x8008F418: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    after_7:
    // 0x8008F41C: j           L_8008F42C
    // 0x8008F420: nop

        goto L_8008F42C;
    // 0x8008F420: nop

L_8008F424:
    // 0x8008F424: sw          $zero, 0x20($s0)
    MEM_W(0X20, ctx->r16) = 0;
    // 0x8008F428: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_8008F42C:
    // 0x8008F42C: lbu         $v1, 0x24($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X24);
    // 0x8008F430: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8008F434: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
    // 0x8008F438: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8008F43C: bne         $v0, $zero, L_8008F1E4
    if (ctx->r2 != 0) {
        // 0x8008F440: andi        $v0, $s4, 0xFFFF
        ctx->r2 = ctx->r20 & 0XFFFF;
            goto L_8008F1E4;
    }
    // 0x8008F440: andi        $v0, $s4, 0xFFFF
    ctx->r2 = ctx->r20 & 0XFFFF;
L_8008F444:
    // 0x8008F444: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8008F448: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8008F44C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8008F450: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8008F454: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8008F458: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8008F45C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8008F460: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008F464: jr          $ra
    // 0x8008F468: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8008F468: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80038550_13950(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80038550: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80038554: lw          $v0, -0x35C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X35C0);
    // 0x80038558: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003855C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80038560: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80038564: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80038568: beq         $v0, $zero, L_800387D8
    if (ctx->r2 == 0) {
        // 0x8003856C: sw          $s0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r16;
            goto L_800387D8;
    }
    // 0x8003856C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80038570: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80038574: lw          $v0, 0xB5C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XB5C);
    // 0x80038578: beq         $v0, $zero, L_800387D8
    if (ctx->r2 == 0) {
        // 0x8003857C: nop
    
            goto L_800387D8;
    }
    // 0x8003857C: nop

    // 0x80038580: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x80038584: lw          $v0, -0x2660($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2660);
    // 0x80038588: beq         $v0, $zero, L_800387D8
    if (ctx->r2 == 0) {
        // 0x8003858C: nop
    
            goto L_800387D8;
    }
    // 0x8003858C: nop

    // 0x80038590: jal         0x8008666C
    // 0x80038594: nop

    func_8008666C_61A6C(rdram, ctx);
        goto after_0;
    // 0x80038594: nop

    after_0:
    // 0x80038598: lui         $s0, 0x8018
    ctx->r16 = S32(0X8018 << 16);
    // 0x8003859C: addiu       $s0, $s0, -0x55E0
    ctx->r16 = ADD32(ctx->r16, -0X55E0);
    // 0x800385A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800385A4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800385A8: sw          $zero, -0x55EC($at)
    MEM_W(-0X55EC, ctx->r1) = 0;
    // 0x800385AC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x800385B0: sw          $zero, -0x55E8($at)
    MEM_W(-0X55E8, ctx->r1) = 0;
    // 0x800385B4: jal         0x8009A2B0
    // 0x800385B8: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x800385B8: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    after_1:
    // 0x800385BC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800385C0: lhu         $v0, -0x7386($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X7386);
    // 0x800385C4: lui         $t9, 0x801B
    ctx->r25 = S32(0X801B << 16);
    // 0x800385C8: lw          $t9, -0x35C0($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X35C0);
    // 0x800385CC: lui         $t8, 0x8021
    ctx->r24 = S32(0X8021 << 16);
    // 0x800385D0: lw          $t8, 0xB5C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0XB5C);
    // 0x800385D4: blez        $v0, L_800387D8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x800385D8: addu        $t4, $zero, $zero
        ctx->r12 = ADD32(0, 0);
            goto L_800387D8;
    }
    // 0x800385D8: addu        $t4, $zero, $zero
    ctx->r12 = ADD32(0, 0);
    // 0x800385DC: addu        $t2, $s0, $zero
    ctx->r10 = ADD32(ctx->r16, 0);
    // 0x800385E0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800385E4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x800385E8: lhu         $s0, 0x49AE($s0)
    ctx->r16 = MEM_HU(ctx->r16, 0X49AE);
    // 0x800385EC: lui         $t7, 0x8020
    ctx->r15 = S32(0X8020 << 16);
    // 0x800385F0: lw          $t7, 0x55A0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X55A0);
    // 0x800385F4: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x800385F8: andi        $s1, $s0, 0xFFFF
    ctx->r17 = ctx->r16 & 0XFFFF;
L_800385FC:
    // 0x800385FC: addu        $v1, $s0, $zero
    ctx->r3 = ADD32(ctx->r16, 0);
    // 0x80038600: beq         $s1, $zero, L_800387C0
    if (ctx->r17 == 0) {
        // 0x80038604: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_800387C0;
    }
    // 0x80038604: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80038608: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x8003860C: addu        $t1, $t6, $zero
    ctx->r9 = ADD32(ctx->r14, 0);
L_80038610:
    // 0x80038610: nop

    // 0x80038614: mult        $v1, $t4
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80038618: mflo        $v0
    ctx->r2 = lo;
    // 0x8003861C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80038620: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80038624: addu        $v0, $v0, $t9
    ctx->r2 = ADD32(ctx->r2, ctx->r25);
    // 0x80038628: lhu         $a1, 0x0($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X0);
    // 0x8003862C: andi        $a0, $a1, 0xFFFF
    ctx->r4 = ctx->r5 & 0XFFFF;
    // 0x80038630: beq         $a0, $zero, L_800387A8
    if (ctx->r4 == 0) {
        // 0x80038634: nop
    
            goto L_800387A8;
    }
    // 0x80038634: nop

    // 0x80038638: bgez        $a2, L_80038644
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8003863C: addu        $v0, $a2, $zero
        ctx->r2 = ADD32(ctx->r6, 0);
            goto L_80038644;
    }
    // 0x8003863C: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x80038640: addiu       $v0, $a2, 0x1F
    ctx->r2 = ADD32(ctx->r6, 0X1F);
L_80038644:
    // 0x80038644: sra         $a3, $v0, 5
    ctx->r7 = S32(SIGNED(ctx->r2) >> 5);
    // 0x80038648: addu        $v0, $t3, $a3
    ctx->r2 = ADD32(ctx->r11, ctx->r7);
    // 0x8003864C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80038650: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x80038654: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80038658: andi        $v0, $a2, 0x1F
    ctx->r2 = ctx->r6 & 0X1F;
    // 0x8003865C: sllv        $t0, $t5, $v0
    ctx->r8 = S32(ctx->r13 << (ctx->r2 & 31));
    // 0x80038660: and         $v1, $v1, $t0
    ctx->r3 = ctx->r3 & ctx->r8;
    // 0x80038664: bne         $v1, $zero, L_800387A8
    if (ctx->r3 != 0) {
        // 0x80038668: srl         $v0, $a1, 15
        ctx->r2 = S32(U32(ctx->r5) >> 15);
            goto L_800387A8;
    }
    // 0x80038668: srl         $v0, $a1, 15
    ctx->r2 = S32(U32(ctx->r5) >> 15);
    // 0x8003866C: bne         $v0, $zero, L_800387A8
    if (ctx->r2 != 0) {
        // 0x80038670: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_800387A8;
    }
    // 0x80038670: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80038674: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80038678: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8003867C: addu        $v0, $t8, $v0
    ctx->r2 = ADD32(ctx->r24, ctx->r2);
    // 0x80038680: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x80038684: beq         $v1, $zero, L_800387A8
    if (ctx->r3 == 0) {
        // 0x80038688: sltu        $v0, $v1, $t7
        ctx->r2 = ctx->r3 < ctx->r15 ? 1 : 0;
            goto L_800387A8;
    }
    // 0x80038688: sltu        $v0, $v1, $t7
    ctx->r2 = ctx->r3 < ctx->r15 ? 1 : 0;
    // 0x8003868C: bne         $v0, $zero, L_800387A8
    if (ctx->r2 != 0) {
        // 0x80038690: subu        $v1, $v1, $t7
        ctx->r3 = SUB32(ctx->r3, ctx->r15);
            goto L_800387A8;
    }
    // 0x80038690: subu        $v1, $v1, $t7
    ctx->r3 = SUB32(ctx->r3, ctx->r15);
    // 0x80038694: lui         $v0, 0xAAAA
    ctx->r2 = S32(0XAAAA << 16);
    // 0x80038698: ori         $v0, $v0, 0xAAAB
    ctx->r2 = ctx->r2 | 0XAAAB;
    // 0x8003869C: multu       $v1, $v0
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800386A0: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x800386A4: lw          $a0, -0x2660($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2660);
    // 0x800386A8: mfhi        $s2
    ctx->r18 = hi;
    // 0x800386AC: srl         $v1, $s2, 5
    ctx->r3 = S32(U32(ctx->r18) >> 5);
    // 0x800386B0: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800386B4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800386B8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800386BC: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x800386C0: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x800386C4: andi        $v1, $v0, 0xC000
    ctx->r3 = ctx->r2 & 0XC000;
    // 0x800386C8: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
    // 0x800386CC: beq         $v1, $v0, L_800386F8
    if (ctx->r3 == ctx->r2) {
        // 0x800386D0: slti        $v0, $v1, 0x4001
        ctx->r2 = SIGNED(ctx->r3) < 0X4001 ? 1 : 0;
            goto L_800386F8;
    }
    // 0x800386D0: slti        $v0, $v1, 0x4001
    ctx->r2 = SIGNED(ctx->r3) < 0X4001 ? 1 : 0;
    // 0x800386D4: bne         $v0, $zero, L_800387A8
    if (ctx->r2 != 0) {
        // 0x800386D8: ori         $v0, $zero, 0x8000
        ctx->r2 = 0 | 0X8000;
            goto L_800387A8;
    }
    // 0x800386D8: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x800386DC: beql        $v1, $v0, L_80038714
    if (ctx->r3 == ctx->r2) {
        // 0x800386E0: addiu       $v1, $a2, 0x1
        ctx->r3 = ADD32(ctx->r6, 0X1);
            goto L_80038714;
    }
    goto skip_0;
    // 0x800386E0: addiu       $v1, $a2, 0x1
    ctx->r3 = ADD32(ctx->r6, 0X1);
    skip_0:
    // 0x800386E4: ori         $v0, $zero, 0xC000
    ctx->r2 = 0 | 0XC000;
    // 0x800386E8: beq         $v1, $v0, L_80038748
    if (ctx->r3 == ctx->r2) {
        // 0x800386EC: addu        $v0, $t1, $a3
        ctx->r2 = ADD32(ctx->r9, ctx->r7);
            goto L_80038748;
    }
    // 0x800386EC: addu        $v0, $t1, $a3
    ctx->r2 = ADD32(ctx->r9, ctx->r7);
    // 0x800386F0: j           L_800387A8
    // 0x800386F4: nop

        goto L_800387A8;
    // 0x800386F4: nop

L_800386F8:
    // 0x800386F8: addu        $v1, $t1, $a3
    ctx->r3 = ADD32(ctx->r9, ctx->r7);
    // 0x800386FC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80038700: addu        $v1, $v1, $t2
    ctx->r3 = ADD32(ctx->r3, ctx->r10);
    // 0x80038704: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80038708: or          $v0, $v0, $t0
    ctx->r2 = ctx->r2 | ctx->r8;
    // 0x8003870C: j           L_800387A8
    // 0x80038710: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
        goto L_800387A8;
    // 0x80038710: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
L_80038714:
    // 0x80038714: bgez        $v1, L_80038720
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80038718: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_80038720;
    }
    // 0x80038718: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8003871C: addiu       $v0, $a2, 0x20
    ctx->r2 = ADD32(ctx->r6, 0X20);
L_80038720:
    // 0x80038720: sra         $v0, $v0, 5
    ctx->r2 = S32(SIGNED(ctx->r2) >> 5);
    // 0x80038724: addu        $v0, $t3, $v0
    ctx->r2 = ADD32(ctx->r11, ctx->r2);
    // 0x80038728: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8003872C: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x80038730: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80038734: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80038738: sllv        $v1, $t5, $v1
    ctx->r3 = S32(ctx->r13 << (ctx->r3 & 31));
    // 0x8003873C: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x80038740: j           L_800387A8
    // 0x80038744: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
        goto L_800387A8;
    // 0x80038744: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
L_80038748:
    // 0x80038748: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8003874C: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x80038750: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80038754: addiu       $a1, $a2, 0x1
    ctx->r5 = ADD32(ctx->r6, 0X1);
    // 0x80038758: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    // 0x8003875C: or          $v1, $v1, $t0
    ctx->r3 = ctx->r3 | ctx->r8;
    // 0x80038760: bgez        $a1, L_8003876C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80038764: sw          $v1, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r3;
            goto L_8003876C;
    }
    // 0x80038764: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x80038768: addiu       $a0, $a2, 0x20
    ctx->r4 = ADD32(ctx->r6, 0X20);
L_8003876C:
    // 0x8003876C: sra         $a0, $a0, 5
    ctx->r4 = S32(SIGNED(ctx->r4) >> 5);
    // 0x80038770: addu        $v0, $t3, $a0
    ctx->r2 = ADD32(ctx->r11, ctx->r4);
    // 0x80038774: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80038778: addu        $v0, $v0, $t2
    ctx->r2 = ADD32(ctx->r2, ctx->r10);
    // 0x8003877C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80038780: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x80038784: sllv        $a1, $t5, $a1
    ctx->r5 = S32(ctx->r13 << (ctx->r5 & 31));
    // 0x80038788: addu        $a0, $t1, $a0
    ctx->r4 = ADD32(ctx->r9, ctx->r4);
    // 0x8003878C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80038790: addu        $a0, $a0, $t2
    ctx->r4 = ADD32(ctx->r4, ctx->r10);
    // 0x80038794: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x80038798: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x8003879C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x800387A0: or          $v0, $v0, $a1
    ctx->r2 = ctx->r2 | ctx->r5;
    // 0x800387A4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_800387A8:
    // 0x800387A8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800387AC: lhu         $v1, 0x49AE($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49AE);
    // 0x800387B0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800387B4: slt         $v0, $a2, $v1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800387B8: bne         $v0, $zero, L_80038610
    if (ctx->r2 != 0) {
        // 0x800387BC: nop
    
            goto L_80038610;
    }
    // 0x800387BC: nop

L_800387C0:
    // 0x800387C0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800387C4: lhu         $v0, -0x7386($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X7386);
    // 0x800387C8: addiu       $t4, $t4, 0x1
    ctx->r12 = ADD32(ctx->r12, 0X1);
    // 0x800387CC: slt         $v0, $t4, $v0
    ctx->r2 = SIGNED(ctx->r12) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800387D0: bne         $v0, $zero, L_800385FC
    if (ctx->r2 != 0) {
        // 0x800387D4: addiu       $t6, $t6, 0x4
        ctx->r14 = ADD32(ctx->r14, 0X4);
            goto L_800385FC;
    }
    // 0x800387D4: addiu       $t6, $t6, 0x4
    ctx->r14 = ADD32(ctx->r14, 0X4);
L_800387D8:
    // 0x800387D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800387DC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800387E0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800387E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800387E8: jr          $ra
    // 0x800387EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x800387EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8008D2BC_686BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D2BC: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D2C0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D2C4: beq         $v0, $zero, L_8008D2D4
    if (ctx->r2 == 0) {
        // 0x8008D2C8: sb          $v0, 0xB8($a0)
        MEM_B(0XB8, ctx->r4) = ctx->r2;
            goto L_8008D2D4;
    }
    // 0x8008D2C8: sb          $v0, 0xB8($a0)
    MEM_B(0XB8, ctx->r4) = ctx->r2;
    // 0x8008D2CC: lwc1        $f0, 0x2C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X2C);
    // 0x8008D2D0: swc1        $f0, 0x50($a0)
    MEM_W(0X50, ctx->r4) = ctx->f0.u32l;
L_8008D2D4:
    // 0x8008D2D4: jr          $ra
    // 0x8008D2D8: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    TRACE_RETURN()
    return;
    // 0x8008D2D8: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_80028C90_4090(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028C90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80028C94: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80028C98: lui         $a0, 0x8003
    ctx->r4 = S32(0X8003 << 16);
    // 0x80028C9C: jal         0x80026810
    // 0x80028CA0: addiu       $a0, $a0, -0x7350
    ctx->r4 = ADD32(ctx->r4, -0X7350);
    func_80026810_1C10(rdram, ctx);
        goto after_0;
    // 0x80028CA0: addiu       $a0, $a0, -0x7350
    ctx->r4 = ADD32(ctx->r4, -0X7350);
    after_0:
    // 0x80028CA4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80028CA8: jr          $ra
    // 0x80028CAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80028CAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80034B34_FF34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034B34: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80034B38: lbu         $v1, 0x4350($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4350);
    // 0x80034B3C: beq         $v1, $zero, L_80034B4C
    if (ctx->r3 == 0) {
        // 0x80034B40: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80034B4C;
    }
    // 0x80034B40: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80034B44: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80034B48: lw          $v0, 0x435C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X435C);
L_80034B4C:
    // 0x80034B4C: jr          $ra
    // 0x80034B50: nop

    TRACE_RETURN()
    return;
    // 0x80034B50: nop

;}
RECOMP_FUNC void func_80034D70_10170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034D70: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80034D74: addiu       $a1, $a1, 0x43B0
    ctx->r5 = ADD32(ctx->r5, 0X43B0);
    // 0x80034D78: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x80034D7C: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80034D80: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80034D84: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80034D88: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x80034D8C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80034D90: lw          $v0, 0x43B4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X43B4);
    // 0x80034D94: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80034D98: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034D9C: sw          $v0, 0x43B4($at)
    MEM_W(0X43B4, ctx->r1) = ctx->r2;
    // 0x80034DA0: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x80034DA4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80034DA8: lw          $v0, 0x43B8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X43B8);
    // 0x80034DAC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80034DB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034DB4: sw          $v0, 0x43B8($at)
    MEM_W(0X43B8, ctx->r1) = ctx->r2;
    // 0x80034DB8: lh          $v1, 0x0($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X0);
    // 0x80034DBC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80034DC0: lw          $v0, 0x43D0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X43D0);
    // 0x80034DC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80034DC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034DCC: sw          $v0, 0x43D0($at)
    MEM_W(0X43D0, ctx->r1) = ctx->r2;
    // 0x80034DD0: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x80034DD4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80034DD8: lw          $v0, 0x43D4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X43D4);
    // 0x80034DDC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80034DE0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034DE4: sw          $v0, 0x43D4($at)
    MEM_W(0X43D4, ctx->r1) = ctx->r2;
    // 0x80034DE8: lh          $v1, 0x4($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X4);
    // 0x80034DEC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80034DF0: lw          $v0, 0x43D8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X43D8);
    // 0x80034DF4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80034DF8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034DFC: jr          $ra
    // 0x80034E00: sw          $v0, 0x43D8($at)
    MEM_W(0X43D8, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80034E00: sw          $v0, 0x43D8($at)
    MEM_W(0X43D8, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_8008B58C_6698C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B58C: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008B590: lw          $v1, 0x4FC4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4FC4);
    // 0x8008B594: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008B598: lw          $v0, 0x4FC8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FC8);
    // 0x8008B59C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8008B5A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8008B5A4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8008B5A8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8008B5AC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8008B5B0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8008B5B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008B5B8: beq         $v1, $v0, L_8008B61C
    if (ctx->r3 == ctx->r2) {
        // 0x8008B5BC: sdc1        $f20, 0x28($sp)
        CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
            goto L_8008B61C;
    }
    // 0x8008B5BC: sdc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X28, ctx->r29);
L_8008B5C0:
    // 0x8008B5C0: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008B5C4: lw          $a0, 0x4FC4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4FC4);
    // 0x8008B5C8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008B5CC: lw          $v0, 0x4FD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FD0);
    // 0x8008B5D0: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x8008B5D4: jal         0x8008B474
    // 0x8008B5D8: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8008B474_66874(rdram, ctx);
        goto after_0;
    // 0x8008B5D8: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_0:
    // 0x8008B5DC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008B5E0: lw          $v0, 0x4FC4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FC4);
    // 0x8008B5E4: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008B5E8: lw          $v1, 0x4FCC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4FCC);
    // 0x8008B5EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8008B5F0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008B5F4: bne         $v0, $v1, L_8008B604
    if (ctx->r2 != ctx->r3) {
        // 0x8008B5F8: sw          $v0, 0x4FC4($at)
        MEM_W(0X4FC4, ctx->r1) = ctx->r2;
            goto L_8008B604;
    }
    // 0x8008B5F8: sw          $v0, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = ctx->r2;
    // 0x8008B5FC: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008B600: sw          $zero, 0x4FC4($at)
    MEM_W(0X4FC4, ctx->r1) = 0;
L_8008B604:
    // 0x8008B604: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008B608: lw          $v1, 0x4FC4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4FC4);
    // 0x8008B60C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008B610: lw          $v0, 0x4FC8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FC8);
    // 0x8008B614: bne         $v1, $v0, L_8008B5C0
    if (ctx->r3 != ctx->r2) {
        // 0x8008B618: nop
    
            goto L_8008B5C0;
    }
    // 0x8008B618: nop

L_8008B61C:
    // 0x8008B61C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008B620: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008B624: addiu       $s2, $zero, -0x4
    ctx->r18 = ADD32(0, -0X4);
    // 0x8008B628: lui         $s1, 0x8018
    ctx->r17 = S32(0X8018 << 16);
    // 0x8008B62C: lw          $s1, 0x4F8C($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X4F8C);
    // 0x8008B630: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8008B634: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8008B638: beq         $v0, $zero, L_8008B850
    if (ctx->r2 == 0) {
        // 0x8008B63C: nop
    
            goto L_8008B850;
    }
    // 0x8008B63C: nop

    // 0x8008B640: addiu       $s4, $zero, -0x1
    ctx->r20 = ADD32(0, -0X1);
    // 0x8008B644: addiu       $s0, $s1, 0xAA
    ctx->r16 = ADD32(ctx->r17, 0XAA);
    // 0x8008B648: addiu       $s3, $zero, -0x70
    ctx->r19 = ADD32(0, -0X70);
L_8008B64C:
    // 0x8008B64C: lw          $v0, -0xA6($s0)
    ctx->r2 = MEM_W(ctx->r16, -0XA6);
    // 0x8008B650: beql        $v0, $zero, L_8008B830
    if (ctx->r2 == 0) {
        // 0x8008B654: addiu       $s3, $s3, 0x1C
        ctx->r19 = ADD32(ctx->r19, 0X1C);
            goto L_8008B830;
    }
    goto skip_0;
    // 0x8008B654: addiu       $s3, $s3, 0x1C
    ctx->r19 = ADD32(ctx->r19, 0X1C);
    skip_0:
    // 0x8008B658: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8008B65C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8008B660: bnel        $v0, $zero, L_8008B830
    if (ctx->r2 != 0) {
        // 0x8008B664: addiu       $s3, $s3, 0x1C
        ctx->r19 = ADD32(ctx->r19, 0X1C);
            goto L_8008B830;
    }
    goto skip_1;
    // 0x8008B664: addiu       $s3, $s3, 0x1C
    ctx->r19 = ADD32(ctx->r19, 0X1C);
    skip_1:
    // 0x8008B668: lw          $v0, -0xA2($s0)
    ctx->r2 = MEM_W(ctx->r16, -0XA2);
    // 0x8008B66C: beq         $v0, $zero, L_8008B67C
    if (ctx->r2 == 0) {
        // 0x8008B670: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8008B67C;
    }
    // 0x8008B670: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8008B674: jal         0x8008BDC8
    // 0x8008B678: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8008BDC8_671C8(rdram, ctx);
        goto after_1;
    // 0x8008B678: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_1:
L_8008B67C:
    // 0x8008B67C: lhu         $v1, -0xE($s0)
    ctx->r3 = MEM_HU(ctx->r16, -0XE);
    // 0x8008B680: lw          $v0, -0x9E($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X9E);
    // 0x8008B684: lhu         $a0, -0x10($s0)
    ctx->r4 = MEM_HU(ctx->r16, -0X10);
    // 0x8008B688: addu        $v1, $v0, $v1
    ctx->r3 = ADD32(ctx->r2, ctx->r3);
    // 0x8008B68C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8008B690: beq         $a0, $v0, L_8008B6DC
    if (ctx->r4 == ctx->r2) {
        // 0x8008B694: sw          $v1, -0x9E($s0)
        MEM_W(-0X9E, ctx->r16) = ctx->r3;
            goto L_8008B6DC;
    }
    // 0x8008B694: sw          $v1, -0x9E($s0)
    MEM_W(-0X9E, ctx->r16) = ctx->r3;
    // 0x8008B698: lw          $v0, -0x6E($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X6E);
    // 0x8008B69C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8008B6A0: bgez        $v0, L_8008B6D0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8008B6A4: nop
    
            goto L_8008B6D0;
    }
    // 0x8008B6A4: nop

L_8008B6A8:
    // 0x8008B6A8: lw          $v0, -0xA6($s0)
    ctx->r2 = MEM_W(ctx->r16, -0XA6);
    // 0x8008B6AC: beq         $v0, $zero, L_8008B82C
    if (ctx->r2 == 0) {
        // 0x8008B6B0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8008B82C;
    }
    // 0x8008B6B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8008B6B4: jal         0x8008B87C
    // 0x8008B6B8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8008B87C_66C7C(rdram, ctx);
        goto after_2;
    // 0x8008B6B8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_2:
    // 0x8008B6BC: lw          $v0, -0x6E($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X6E);
    // 0x8008B6C0: lw          $v1, -0x9E($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X9E);
    // 0x8008B6C4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8008B6C8: bltz        $v0, L_8008B6A8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8008B6CC: nop
    
            goto L_8008B6A8;
    }
    // 0x8008B6CC: nop

L_8008B6D0:
    // 0x8008B6D0: lw          $v0, -0xA6($s0)
    ctx->r2 = MEM_W(ctx->r16, -0XA6);
    // 0x8008B6D4: beql        $v0, $zero, L_8008B830
    if (ctx->r2 == 0) {
        // 0x8008B6D8: addiu       $s3, $s3, 0x1C
        ctx->r19 = ADD32(ctx->r19, 0X1C);
            goto L_8008B830;
    }
    goto skip_2;
    // 0x8008B6D8: addiu       $s3, $s3, 0x1C
    ctx->r19 = ADD32(ctx->r19, 0X1C);
    skip_2:
L_8008B6DC:
    // 0x8008B6DC: lw          $v0, -0x72($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X72);
    // 0x8008B6E0: beq         $v0, $zero, L_8008B704
    if (ctx->r2 == 0) {
        // 0x8008B6E4: nop
    
            goto L_8008B704;
    }
    // 0x8008B6E4: nop

    // 0x8008B6E8: lw          $v0, -0x96($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X96);
    // 0x8008B6EC: lw          $v1, -0x9E($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X9E);
    // 0x8008B6F0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8008B6F4: bgez        $v0, L_8008B704
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8008B6F8: nop
    
            goto L_8008B704;
    }
    // 0x8008B6F8: nop

    // 0x8008B6FC: jal         0x8008C480
    // 0x8008B700: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8008C480_67880(rdram, ctx);
        goto after_3;
    // 0x8008B700: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
L_8008B704:
    // 0x8008B704: lw          $v0, -0x76($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X76);
    // 0x8008B708: beq         $v0, $zero, L_8008B72C
    if (ctx->r2 == 0) {
        // 0x8008B70C: nop
    
            goto L_8008B72C;
    }
    // 0x8008B70C: nop

    // 0x8008B710: lw          $v0, -0x92($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X92);
    // 0x8008B714: lw          $v1, -0x9E($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X9E);
    // 0x8008B718: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8008B71C: bgez        $v0, L_8008B72C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8008B720: nop
    
            goto L_8008B72C;
    }
    // 0x8008B720: nop

    // 0x8008B724: jal         0x8008C544
    // 0x8008B728: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8008C544_67944(rdram, ctx);
        goto after_4;
    // 0x8008B728: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
L_8008B72C:
    // 0x8008B72C: lw          $v0, -0x9A($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X9A);
    // 0x8008B730: beq         $v0, $s4, L_8008B778
    if (ctx->r2 == ctx->r20) {
        // 0x8008B734: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8008B778;
    }
    // 0x8008B734: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8008B738: bne         $v0, $s4, L_8008B778
    if (ctx->r2 != ctx->r20) {
        // 0x8008B73C: sw          $v0, -0x9A($s0)
        MEM_W(-0X9A, ctx->r16) = ctx->r2;
            goto L_8008B778;
    }
    // 0x8008B73C: sw          $v0, -0x9A($s0)
    MEM_W(-0X9A, ctx->r16) = ctx->r2;
    // 0x8008B740: lbu         $v0, 0x1F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1F);
    // 0x8008B744: sw          $zero, -0x72($s0)
    MEM_W(-0X72, ctx->r16) = 0;
    // 0x8008B748: sw          $zero, -0x76($s0)
    MEM_W(-0X76, ctx->r16) = 0;
    // 0x8008B74C: sw          $zero, -0x36($s0)
    MEM_W(-0X36, ctx->r16) = 0;
    // 0x8008B750: sw          $zero, -0x32($s0)
    MEM_W(-0X32, ctx->r16) = 0;
    // 0x8008B754: sw          $zero, -0x66($s0)
    MEM_W(-0X66, ctx->r16) = 0;
    // 0x8008B758: sw          $zero, -0xA2($s0)
    MEM_W(-0XA2, ctx->r16) = 0;
    // 0x8008B75C: beq         $v0, $zero, L_8008B818
    if (ctx->r2 == 0) {
        // 0x8008B760: sw          $zero, -0xA6($s0)
        MEM_W(-0XA6, ctx->r16) = 0;
            goto L_8008B818;
    }
    // 0x8008B760: sw          $zero, -0xA6($s0)
    MEM_W(-0XA6, ctx->r16) = 0;
    // 0x8008B764: sb          $zero, 0x1F($s0)
    MEM_B(0X1F, ctx->r16) = 0;
    // 0x8008B768: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008B76C: lw          $a0, 0x4F88($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4F88);
    // 0x8008B770: jal         0x80091820
    // 0x8008B774: addu        $a0, $a0, $s3
    ctx->r4 = ADD32(ctx->r4, ctx->r19);
    func_80091820_6CC20(rdram, ctx);
        goto after_5;
    // 0x8008B774: addu        $a0, $a0, $s3
    ctx->r4 = ADD32(ctx->r4, ctx->r19);
    after_5:
L_8008B778:
    // 0x8008B778: lbu         $v0, 0x1F($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1F);
    // 0x8008B77C: beq         $v0, $zero, L_8008B818
    if (ctx->r2 == 0) {
        // 0x8008B780: nop
    
            goto L_8008B818;
    }
    // 0x8008B780: nop

    // 0x8008B784: lbu         $v0, 0x19($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X19);
    // 0x8008B788: beq         $v0, $zero, L_8008B798
    if (ctx->r2 == 0) {
        // 0x8008B78C: nop
    
            goto L_8008B798;
    }
    // 0x8008B78C: nop

    // 0x8008B790: jal         0x8008C114
    // 0x8008B794: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8008C114_67514(rdram, ctx);
        goto after_6;
    // 0x8008B794: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_8008B798:
    // 0x8008B798: lbu         $v0, 0x2A($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2A);
    // 0x8008B79C: beq         $v0, $zero, L_8008B7C0
    if (ctx->r2 == 0) {
        // 0x8008B7A0: nop
    
            goto L_8008B7C0;
    }
    // 0x8008B7A0: nop

    // 0x8008B7A4: lw          $v0, -0x16($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X16);
    // 0x8008B7A8: lw          $v1, -0x9E($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X9E);
    // 0x8008B7AC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8008B7B0: bgez        $v0, L_8008B7C0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8008B7B4: nop
    
            goto L_8008B7C0;
    }
    // 0x8008B7B4: nop

    // 0x8008B7B8: jal         0x8008C30C
    // 0x8008B7BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8008C30C_6770C(rdram, ctx);
        goto after_7;
    // 0x8008B7BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
L_8008B7C0:
    // 0x8008B7C0: lbu         $v0, 0x2B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2B);
    // 0x8008B7C4: beq         $v0, $zero, L_8008B7D8
    if (ctx->r2 == 0) {
        // 0x8008B7C8: lwc1        $f20, -0x7A($s0)
        ctx->f20.u32l = MEM_W(ctx->r16, -0X7A);
            goto L_8008B7D8;
    }
    // 0x8008B7C8: lwc1        $f20, -0x7A($s0)
    ctx->f20.u32l = MEM_W(ctx->r16, -0X7A);
    // 0x8008B7CC: jal         0x8008C41C
    // 0x8008B7D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8008C41C_6781C(rdram, ctx);
        goto after_8;
    // 0x8008B7D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
    // 0x8008B7D4: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
L_8008B7D8:
    // 0x8008B7D8: lbu         $v0, 0x24($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X24);
    // 0x8008B7DC: beq         $v0, $zero, L_8008B7F0
    if (ctx->r2 == 0) {
        // 0x8008B7E0: nop
    
            goto L_8008B7F0;
    }
    // 0x8008B7E0: nop

    // 0x8008B7E4: jal         0x8008C3C4
    // 0x8008B7E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8008C3C4_677C4(rdram, ctx);
        goto after_9;
    // 0x8008B7E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_9:
    // 0x8008B7EC: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
L_8008B7F0:
    // 0x8008B7F0: lw          $v0, -0xA2($s0)
    ctx->r2 = MEM_W(ctx->r16, -0XA2);
    // 0x8008B7F4: bne         $v0, $zero, L_8008B818
    if (ctx->r2 != 0) {
        // 0x8008B7F8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8008B818;
    }
    // 0x8008B7F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8008B7FC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x8008B800: nop

    // 0x8008B804: jal         0x8008BF98
    // 0x8008B808: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8008BF98_67398(rdram, ctx);
        goto after_10;
    // 0x8008B808: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_10:
    // 0x8008B80C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8008B810: jal         0x8008BE44
    // 0x8008B814: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_8008BE44_67244(rdram, ctx);
        goto after_11;
    // 0x8008B814: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_11:
L_8008B818:
    // 0x8008B818: lw          $v0, -0x9E($s0)
    ctx->r2 = MEM_W(ctx->r16, -0X9E);
    // 0x8008B81C: lw          $v1, -0x6A($s0)
    ctx->r3 = MEM_W(ctx->r16, -0X6A);
    // 0x8008B820: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8008B824: srl         $v0, $v0, 8
    ctx->r2 = S32(U32(ctx->r2) >> 8);
    // 0x8008B828: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_8008B82C:
    // 0x8008B82C: addiu       $s3, $s3, 0x1C
    ctx->r19 = ADD32(ctx->r19, 0X1C);
L_8008B830:
    // 0x8008B830: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8008B834: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008B838: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008B83C: addiu       $s0, $s0, 0x13C
    ctx->r16 = ADD32(ctx->r16, 0X13C);
    // 0x8008B840: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x8008B844: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8008B848: bne         $v0, $zero, L_8008B64C
    if (ctx->r2 != 0) {
        // 0x8008B84C: addiu       $s1, $s1, 0x13C
        ctx->r17 = ADD32(ctx->r17, 0X13C);
            goto L_8008B64C;
    }
    // 0x8008B84C: addiu       $s1, $s1, 0x13C
    ctx->r17 = ADD32(ctx->r17, 0X13C);
L_8008B850:
    // 0x8008B850: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008B854: lw          $v0, 0x4F98($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F98);
    // 0x8008B858: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8008B85C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8008B860: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8008B864: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8008B868: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8008B86C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008B870: ldc1        $f20, 0x28($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X28);
    // 0x8008B874: jr          $ra
    // 0x8008B878: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8008B878: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80091B10_6CF10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80091B10: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80091B14: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x80091B18: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80091B1C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80091B20: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x80091B24: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x80091B28: addu        $s6, $a1, $zero
    ctx->r22 = ADD32(ctx->r5, 0);
    // 0x80091B2C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80091B30: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x80091B34: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80091B38: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80091B3C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80091B40: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80091B44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80091B48: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80091B4C: addu        $s2, $s5, $zero
    ctx->r18 = ADD32(ctx->r21, 0);
    // 0x80091B50: bne         $a0, $zero, L_80091B60
    if (ctx->r4 != 0) {
        // 0x80091B54: addu        $s3, $a2, $zero
        ctx->r19 = ADD32(ctx->r6, 0);
            goto L_80091B60;
    }
    // 0x80091B54: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x80091B58: j           L_80091C4C
    // 0x80091B5C: sw          $zero, 0x0($s6)
    MEM_W(0X0, ctx->r22) = 0;
        goto L_80091C4C;
    // 0x80091B5C: sw          $zero, 0x0($s6)
    MEM_W(0X0, ctx->r22) = 0;
L_80091B60:
    // 0x80091B60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80091B64: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    // 0x80091B68: lw          $v0, 0x20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X20);
    // 0x80091B6C: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80091B70: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80091B74: beq         $v0, $zero, L_80091BD0
    if (ctx->r2 == 0) {
        // 0x80091B78: nop
    
            goto L_80091BD0;
    }
    // 0x80091B78: nop

    // 0x80091B7C: addiu       $s4, $zero, -0x10
    ctx->r20 = ADD32(0, -0X10);
L_80091B80:
    // 0x80091B80: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80091B84: lw          $v1, -0xEEC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XEEC);
    // 0x80091B88: and         $v0, $a0, $s4
    ctx->r2 = ctx->r4 & ctx->r20;
    // 0x80091B8C: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80091B90: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x80091B94: jalr        $v0
    // 0x80091B98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80091B98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80091B9C: jal         0x80091D54
    // 0x80091BA0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_80091D54_6D154(rdram, ctx);
        goto after_1;
    // 0x80091BA0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80091BA4: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80091BA8: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80091BAC: lw          $a0, -0xEEC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XEEC);
    // 0x80091BB0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80091BB4: sw          $v1, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r3;
    // 0x80091BB8: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80091BBC: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80091BC0: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80091BC4: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80091BC8: bne         $v0, $zero, L_80091B80
    if (ctx->r2 != 0) {
        // 0x80091BCC: nop
    
            goto L_80091B80;
    }
    // 0x80091BCC: nop

L_80091BD0:
    // 0x80091BD0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80091BD4: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x80091BD8: lw          $v1, 0x1C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X1C);
    // 0x80091BDC: addiu       $a0, $zero, -0x10
    ctx->r4 = ADD32(0, -0X10);
    // 0x80091BE0: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x80091BE4: blez        $s1, L_80091C3C
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80091BE8: sw          $v1, 0x1C($v0)
        MEM_W(0X1C, ctx->r2) = ctx->r3;
            goto L_80091C3C;
    }
    // 0x80091BE8: sw          $v1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r3;
L_80091BEC:
    // 0x80091BEC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x80091BF0: lw          $v1, -0xEEC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0XEEC);
    // 0x80091BF4: lw          $s0, 0x44($v1)
    ctx->r16 = MEM_W(ctx->r3, 0X44);
    // 0x80091BF8: slt         $v0, $s1, $s0
    ctx->r2 = SIGNED(ctx->r17) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80091BFC: bnel        $v0, $zero, L_80091C04
    if (ctx->r2 != 0) {
        // 0x80091C00: addu        $s0, $s1, $zero
        ctx->r16 = ADD32(ctx->r17, 0);
            goto L_80091C04;
    }
    goto skip_0;
    // 0x80091C00: addu        $s0, $s1, $zero
    ctx->r16 = ADD32(ctx->r17, 0);
    skip_0:
L_80091C04:
    // 0x80091C04: lw          $a0, 0x20($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X20);
    // 0x80091C08: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80091C0C: jal         0x80091E00
    // 0x80091C10: sw          $s3, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r19;
    func_80091E00_6D200(rdram, ctx);
        goto after_2;
    // 0x80091C10: sw          $s3, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r19;
    after_2:
    // 0x80091C14: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80091C18: lw          $a0, -0xEEC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0XEEC);
    // 0x80091C1C: subu        $s1, $s1, $s0
    ctx->r17 = SUB32(ctx->r17, ctx->r16);
    // 0x80091C20: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80091C24: lw          $v1, 0x20($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X20);
    // 0x80091C28: sll         $v0, $s0, 2
    ctx->r2 = S32(ctx->r16 << 2);
    // 0x80091C2C: addu        $s3, $s3, $v0
    ctx->r19 = ADD32(ctx->r19, ctx->r2);
    // 0x80091C30: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80091C34: bgtz        $s1, L_80091BEC
    if (SIGNED(ctx->r17) > 0) {
        // 0x80091C38: sw          $v1, 0x20($a0)
        MEM_W(0X20, ctx->r4) = ctx->r3;
            goto L_80091BEC;
    }
    // 0x80091C38: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
L_80091C3C:
    // 0x80091C3C: subu        $v0, $s2, $s5
    ctx->r2 = SUB32(ctx->r18, ctx->r21);
    // 0x80091C40: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x80091C44: jal         0x80091CBC
    // 0x80091C48: sw          $v0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r2;
    func_80091CBC_6D0BC(rdram, ctx);
        goto after_3;
    // 0x80091C48: sw          $v0, 0x0($s6)
    MEM_W(0X0, ctx->r22) = ctx->r2;
    after_3:
L_80091C4C:
    // 0x80091C4C: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x80091C50: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80091C54: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80091C58: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80091C5C: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80091C60: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80091C64: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80091C68: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80091C6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80091C70: jr          $ra
    // 0x80091C74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80091C74: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80035430_10830(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035430: jr          $ra
    // 0x80035434: nop

    TRACE_RETURN()
    return;
    // 0x80035434: nop

;}
RECOMP_FUNC void func_8004A44C_2584C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A44C: beq         $a0, $zero, L_8004A488
    if (ctx->r4 == 0) {
        // 0x8004A450: nop
    
            goto L_8004A488;
    }
    // 0x8004A450: nop

    // 0x8004A454: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8004A458: addiu       $v1, $v1, -0x3991
    ctx->r3 = ADD32(ctx->r3, -0X3991);
    // 0x8004A45C: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8004A460: beq         $v0, $zero, L_8004A488
    if (ctx->r2 == 0) {
        // 0x8004A464: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8004A488;
    }
    // 0x8004A464: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8004A468: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x8004A46C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8004A470: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A474: sb          $v1, -0x3993($at)
    MEM_B(-0X3993, ctx->r1) = ctx->r3;
    // 0x8004A478: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8004A47C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A480: j           L_8004A494
    // 0x8004A484: sb          $v1, -0x3997($at)
    MEM_B(-0X3997, ctx->r1) = ctx->r3;
        goto L_8004A494;
    // 0x8004A484: sb          $v1, -0x3997($at)
    MEM_B(-0X3997, ctx->r1) = ctx->r3;
L_8004A488:
    // 0x8004A488: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004A48C: lbu         $v0, -0x3991($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3991);
    // 0x8004A490: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_8004A494:
    // 0x8004A494: jr          $ra
    // 0x8004A498: nop

    TRACE_RETURN()
    return;
    // 0x8004A498: nop

;}
RECOMP_FUNC void func_800546A0_2FAA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800546A0: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x800546A4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x800546A8: lhu         $v0, 0x56EE($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X56EE);
    // 0x800546AC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800546B0: lbu         $a0, -0x2338($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2338);
    // 0x800546B4: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x800546B8: lbu         $a1, -0x2337($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X2337);
    // 0x800546BC: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x800546C0: lbu         $a2, -0x2336($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X2336);
    // 0x800546C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800546C8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x800546CC: jal         0x8005471C
    // 0x800546D0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8005471C_2FB1C(rdram, ctx);
        goto after_0;
    // 0x800546D0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x800546D4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x800546D8: jr          $ra
    // 0x800546DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800546DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8006F708_4AB08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006F708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006F70C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006F710: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006F714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006F718: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006F71C: bne         $v0, $zero, L_8006F73C
    if (ctx->r2 != 0) {
        // 0x8006F720: addiu       $a1, $zero, 0x35
        ctx->r5 = ADD32(0, 0X35);
            goto L_8006F73C;
    }
    // 0x8006F720: addiu       $a1, $zero, 0x35
    ctx->r5 = ADD32(0, 0X35);
    // 0x8006F724: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006F728: jal         0x8006FB90
    // 0x8006F72C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_0;
    // 0x8006F72C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8006F730: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006F734: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006F738: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006F73C:
    // 0x8006F73C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006F740: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006F744: jr          $ra
    // 0x8006F748: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006F748: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800324D0_D8D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800324D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800324D4: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x800324D8: bne         $a0, $zero, L_800324E8
    if (ctx->r4 != 0) {
        // 0x800324DC: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_800324E8;
    }
    // 0x800324DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800324E0: j           L_80032504
    // 0x800324E4: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
        goto L_80032504;
    // 0x800324E4: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
L_800324E8:
    // 0x800324E8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x800324EC: beql        $a0, $v0, L_80032504
    if (ctx->r4 == ctx->r2) {
        // 0x800324F0: addiu       $v0, $zero, -0x1000
        ctx->r2 = ADD32(0, -0X1000);
            goto L_80032504;
    }
    goto skip_0;
    // 0x800324F0: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    skip_0:
    // 0x800324F4: jal         0x80099D60
    // 0x800324F8: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    coss(rdram, ctx);
        goto after_0;
    // 0x800324F8: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    after_0:
    // 0x800324FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80032500: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80032504:
    // 0x80032504: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80032508: jr          $ra
    // 0x8003250C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003250C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80049F5C_2535C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80049F5C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80049F60: lw          $v0, -0x38B0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X38B0);
    // 0x80049F64: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x80049F68: beq         $v0, $zero, L_8004A004
    if (ctx->r2 == 0) {
        // 0x80049F6C: addu        $t1, $zero, $zero
        ctx->r9 = ADD32(0, 0);
            goto L_8004A004;
    }
    // 0x80049F6C: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x80049F70: addiu       $t0, $zero, 0x48
    ctx->r8 = ADD32(0, 0X48);
L_80049F74:
    // 0x80049F74: addu        $v1, $t0, $zero
    ctx->r3 = ADD32(ctx->r8, 0);
    // 0x80049F78: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80049F7C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80049F80: lb          $v0, -0x39A0($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X39A0);
    // 0x80049F84: beq         $v0, $zero, L_80049FA0
    if (ctx->r2 == 0) {
        // 0x80049F88: addiu       $t1, $t1, 0x1
        ctx->r9 = ADD32(ctx->r9, 0X1);
            goto L_80049FA0;
    }
    // 0x80049F88: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80049F8C: sltiu       $v0, $t1, 0x3
    ctx->r2 = ctx->r9 < 0X3 ? 1 : 0;
    // 0x80049F90: bne         $v0, $zero, L_80049F74
    if (ctx->r2 != 0) {
        // 0x80049F94: addiu       $t0, $v1, 0x24
        ctx->r8 = ADD32(ctx->r3, 0X24);
            goto L_80049F74;
    }
    // 0x80049F94: addiu       $t0, $v1, 0x24
    ctx->r8 = ADD32(ctx->r3, 0X24);
    // 0x80049F98: j           L_8004A004
    // 0x80049F9C: nop

        goto L_8004A004;
    // 0x80049F9C: nop

L_80049FA0:
    // 0x80049FA0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80049FA4: lw          $v0, -0x38B0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X38B0);
    // 0x80049FA8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80049FAC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80049FB0: sh          $a1, -0x3988($at)
    MEM_H(-0X3988, ctx->r1) = ctx->r5;
    // 0x80049FB4: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80049FB8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80049FBC: sh          $a2, -0x3986($at)
    MEM_H(-0X3986, ctx->r1) = ctx->r6;
    // 0x80049FC0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80049FC4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80049FC8: sw          $a0, -0x3980($at)
    MEM_W(-0X3980, ctx->r1) = ctx->r4;
    // 0x80049FCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80049FD0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80049FD4: sw          $v0, -0x38B0($at)
    MEM_W(-0X38B0, ctx->r1) = ctx->r2;
    // 0x80049FD8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80049FDC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80049FE0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80049FE4: sb          $v0, -0x39A0($at)
    MEM_B(-0X39A0, ctx->r1) = ctx->r2;
    // 0x80049FE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80049FEC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80049FF0: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80049FF4: sb          $a3, -0x3994($at)
    MEM_B(-0X3994, ctx->r1) = ctx->r7;
    // 0x80049FF8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80049FFC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8004A000: sb          $v0, -0x3993($at)
    MEM_B(-0X3993, ctx->r1) = ctx->r2;
L_8004A004:
    // 0x8004A004: jr          $ra
    // 0x8004A008: nop

    TRACE_RETURN()
    return;
    // 0x8004A008: nop

;}
RECOMP_FUNC void func_800912A4_6C6A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800912A4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800912A8: lw          $v0, -0xEF0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEF0);
    // 0x800912AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800912B0: beq         $v0, $zero, L_800912D0
    if (ctx->r2 == 0) {
        // 0x800912B4: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_800912D0;
    }
    // 0x800912B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800912B8: jal         0x80091510
    // 0x800912BC: nop

    func_80091510_6C910(rdram, ctx);
        goto after_0;
    // 0x800912BC: nop

    after_0:
    // 0x800912C0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800912C4: sw          $zero, -0xEF0($at)
    MEM_W(-0XEF0, ctx->r1) = 0;
    // 0x800912C8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800912CC: sw          $zero, -0xEEC($at)
    MEM_W(-0XEEC, ctx->r1) = 0;
L_800912D0:
    // 0x800912D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800912D4: jr          $ra
    // 0x800912D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800912D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800912DC: nop

;}
RECOMP_FUNC void func_8004A614_25A14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A614: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8004A618: beq         $a0, $zero, L_8004A6AC
    if (ctx->r4 == 0) {
        // 0x8004A61C: sw          $zero, -0x2F38($at)
        MEM_W(-0X2F38, ctx->r1) = 0;
            goto L_8004A6AC;
    }
    // 0x8004A61C: sw          $zero, -0x2F38($at)
    MEM_W(-0X2F38, ctx->r1) = 0;
    // 0x8004A620: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8004A624: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8004A628: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x8004A62C: addiu       $a3, $a3, -0x3BC8
    ctx->r7 = ADD32(ctx->r7, -0X3BC8);
    // 0x8004A630: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x8004A634: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8004A638:
    // 0x8004A638: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8004A63C: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8004A640: lbu         $v1, -0x3550($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3550);
    // 0x8004A644: beq         $v1, $t0, L_8004A6AC
    if (ctx->r3 == ctx->r8) {
        // 0x8004A648: nop
    
            goto L_8004A6AC;
    }
    // 0x8004A648: nop

    // 0x8004A64C: lb          $v0, 0x0($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X0);
    // 0x8004A650: bnel        $v1, $v0, L_8004A6A0
    if (ctx->r3 != ctx->r2) {
        // 0x8004A654: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_8004A6A0;
    }
    goto skip_0;
    // 0x8004A654: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_0:
    // 0x8004A658: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x8004A65C: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8004A660: lbu         $v1, -0x354F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X354F);
    // 0x8004A664: lb          $v0, 0x1($a3)
    ctx->r2 = MEM_B(ctx->r7, 0X1);
    // 0x8004A668: bnel        $v1, $v0, L_8004A6A0
    if (ctx->r3 != ctx->r2) {
        // 0x8004A66C: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_8004A6A0;
    }
    goto skip_1;
    // 0x8004A66C: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    skip_1:
    // 0x8004A670: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8004A674: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8004A678: lw          $v0, -0x354C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X354C);
    // 0x8004A67C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8004A680: sw          $t1, -0x2F38($at)
    MEM_W(-0X2F38, ctx->r1) = ctx->r9;
    // 0x8004A684: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004A688: sw          $a0, 0x5598($at)
    MEM_W(0X5598, ctx->r1) = ctx->r4;
    // 0x8004A68C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8004A690: sw          $a2, 0x4978($at)
    MEM_W(0X4978, ctx->r1) = ctx->r6;
    // 0x8004A694: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8004A698: j           L_8004A6AC
    // 0x8004A69C: sw          $v0, -0x2610($at)
    MEM_W(-0X2610, ctx->r1) = ctx->r2;
        goto L_8004A6AC;
    // 0x8004A69C: sw          $v0, -0x2610($at)
    MEM_W(-0X2610, ctx->r1) = ctx->r2;
L_8004A6A0:
    // 0x8004A6A0: slti        $v0, $a2, 0x40
    ctx->r2 = SIGNED(ctx->r6) < 0X40 ? 1 : 0;
    // 0x8004A6A4: bne         $v0, $zero, L_8004A638
    if (ctx->r2 != 0) {
        // 0x8004A6A8: addiu       $a1, $a1, 0xC
        ctx->r5 = ADD32(ctx->r5, 0XC);
            goto L_8004A638;
    }
    // 0x8004A6A8: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
L_8004A6AC:
    // 0x8004A6AC: jr          $ra
    // 0x8004A6B0: nop

    TRACE_RETURN()
    return;
    // 0x8004A6B0: nop

;}
RECOMP_FUNC void func_80070FC0_4C3C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80070FC0: addiu       $a3, $a0, 0x4F4
    ctx->r7 = ADD32(ctx->r4, 0X4F4);
    // 0x80070FC4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80070FC8: addiu       $a0, $a0, 0x4FA
    ctx->r4 = ADD32(ctx->r4, 0X4FA);
    // 0x80070FCC: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80070FD0: addiu       $a1, $a1, 0x351C
    ctx->r5 = ADD32(ctx->r5, 0X351C);
L_80070FD4:
    // 0x80070FD4: sb          $zero, 0x0($a3)
    MEM_B(0X0, ctx->r7) = 0;
    // 0x80070FD8: sb          $zero, -0x5($a0)
    MEM_B(-0X5, ctx->r4) = 0;
    // 0x80070FDC: lb          $v0, -0x5($a0)
    ctx->r2 = MEM_B(ctx->r4, -0X5);
    // 0x80070FE0: sb          $zero, -0x4($a0)
    MEM_B(-0X4, ctx->r4) = 0;
    // 0x80070FE4: sb          $zero, -0x3($a0)
    MEM_B(-0X3, ctx->r4) = 0;
    // 0x80070FE8: sb          $zero, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = 0;
    // 0x80070FEC: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x80070FF0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80070FF4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80070FF8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80070FFC: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x80071000: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80071004: addiu       $a3, $a3, 0x8
    ctx->r7 = ADD32(ctx->r7, 0X8);
    // 0x80071008: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x8007100C: slti        $v0, $a2, 0x10
    ctx->r2 = SIGNED(ctx->r6) < 0X10 ? 1 : 0;
    // 0x80071010: bne         $v0, $zero, L_80070FD4
    if (ctx->r2 != 0) {
        // 0x80071014: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_80070FD4;
    }
    // 0x80071014: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80071018: jr          $ra
    // 0x8007101C: nop

    TRACE_RETURN()
    return;
    // 0x8007101C: nop

;}
RECOMP_FUNC void func_800475D4_229D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800475D4: addiu       $sp, $sp, -0x100
    ctx->r29 = ADD32(ctx->r29, -0X100);
    // 0x800475D8: sw          $fp, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->r30;
    // 0x800475DC: lw          $fp, 0x114($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X114);
    // 0x800475E0: sw          $s3, 0xE4($sp)
    MEM_W(0XE4, ctx->r29) = ctx->r19;
    // 0x800475E4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x800475E8: sw          $s2, 0xE0($sp)
    MEM_W(0XE0, ctx->r29) = ctx->r18;
    // 0x800475EC: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x800475F0: sw          $s7, 0xF4($sp)
    MEM_W(0XF4, ctx->r29) = ctx->r23;
    // 0x800475F4: addu        $s7, $a2, $zero
    ctx->r23 = ADD32(ctx->r6, 0);
    // 0x800475F8: sw          $s4, 0xE8($sp)
    MEM_W(0XE8, ctx->r29) = ctx->r20;
    // 0x800475FC: addiu       $s4, $sp, 0x68
    ctx->r20 = ADD32(ctx->r29, 0X68);
    // 0x80047600: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80047604: sw          $ra, 0xFC($sp)
    MEM_W(0XFC, ctx->r29) = ctx->r31;
    // 0x80047608: sw          $s6, 0xF0($sp)
    MEM_W(0XF0, ctx->r29) = ctx->r22;
    // 0x8004760C: sw          $s5, 0xEC($sp)
    MEM_W(0XEC, ctx->r29) = ctx->r21;
    // 0x80047610: sw          $s1, 0xDC($sp)
    MEM_W(0XDC, ctx->r29) = ctx->r17;
    // 0x80047614: sw          $s0, 0xD8($sp)
    MEM_W(0XD8, ctx->r29) = ctx->r16;
    // 0x80047618: lb          $t6, 0x74($s2)
    ctx->r14 = MEM_B(ctx->r18, 0X74);
    // 0x8004761C: addiu       $s5, $sp, 0x78
    ctx->r21 = ADD32(ctx->r29, 0X78);
    // 0x80047620: addu        $a2, $s5, $zero
    ctx->r6 = ADD32(ctx->r21, 0);
    // 0x80047624: jal         0x80048B40
    // 0x80047628: sw          $t6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r14;
    func_80048B40_23F40(rdram, ctx);
        goto after_0;
    // 0x80047628: sw          $t6, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r14;
    after_0:
    // 0x8004762C: lw          $a0, 0x78($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X78);
    // 0x80047630: jal         0x80040EEC
    // 0x80047634: nop

    func_80040EEC_1C2EC(rdram, ctx);
        goto after_1;
    // 0x80047634: nop

    after_1:
    // 0x80047638: jal         0x8004DA68
    // 0x8004763C: lbu         $a0, 0x1($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X1);
    func_8004DA68_28E68(rdram, ctx);
        goto after_2;
    // 0x8004763C: lbu         $a0, 0x1($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X1);
    after_2:
    // 0x80047640: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80047644: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80047648: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x8004764C: addu        $a3, $fp, $zero
    ctx->r7 = ADD32(ctx->r30, 0);
    // 0x80047650: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80047654: sll         $s6, $v0, 15
    ctx->r22 = S32(ctx->r2 << 15);
    // 0x80047658: jal         0x80047C8C
    // 0x8004765C: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    func_80047C8C_2308C(rdram, ctx);
        goto after_3;
    // 0x8004765C: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    after_3:
    // 0x80047660: bne         $v0, $zero, L_800477B0
    if (ctx->r2 != 0) {
        // 0x80047664: addiu       $s1, $sp, 0x38
        ctx->r17 = ADD32(ctx->r29, 0X38);
            goto L_800477B0;
    }
    // 0x80047664: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
    // 0x80047668: lb          $v0, 0x76($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X76);
    // 0x8004766C: beq         $v0, $zero, L_80047B0C
    if (ctx->r2 == 0) {
        // 0x80047670: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80047B0C;
    }
    // 0x80047670: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80047674: lw          $v0, 0xC0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC0);
    // 0x80047678: bne         $s7, $v0, L_80047B0C
    if (ctx->r23 != ctx->r2) {
        // 0x8004767C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80047B0C;
    }
    // 0x8004767C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80047680: lh          $v0, 0x44($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X44);
    // 0x80047684: sw          $v0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r2;
    // 0x80047688: lh          $v0, 0x46($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X46);
    // 0x8004768C: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    // 0x80047690: lh          $v0, 0x48($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X48);
    // 0x80047694: bne         $fp, $zero, L_80047708
    if (ctx->r30 != 0) {
        // 0x80047698: sw          $v0, 0xA0($sp)
        MEM_W(0XA0, ctx->r29) = ctx->r2;
            goto L_80047708;
    }
    // 0x80047698: sw          $v0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r2;
    // 0x8004769C: lhu         $v1, 0x54($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X54);
    // 0x800476A0: lhu         $v0, 0x54($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X54);
    // 0x800476A4: subu        $a1, $v1, $v0
    ctx->r5 = SUB32(ctx->r3, ctx->r2);
    // 0x800476A8: sh          $a1, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r5;
    // 0x800476AC: lhu         $v1, 0x56($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X56);
    // 0x800476B0: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x800476B4: subu        $a0, $v1, $v0
    ctx->r4 = SUB32(ctx->r3, ctx->r2);
    // 0x800476B8: sh          $a0, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r4;
    // 0x800476BC: lhu         $v1, 0x58($s3)
    ctx->r3 = MEM_HU(ctx->r19, 0X58);
    // 0x800476C0: lhu         $v0, 0x58($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X58);
    // 0x800476C4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x800476C8: sh          $v1, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r3;
    // 0x800476CC: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
    // 0x800476D0: bnel        $v0, $zero, L_80047700
    if (ctx->r2 != 0) {
        // 0x800476D4: addiu       $a0, $sp, 0xB8
        ctx->r4 = ADD32(ctx->r29, 0XB8);
            goto L_80047700;
    }
    goto skip_0;
    // 0x800476D4: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    skip_0:
    // 0x800476D8: lhu         $v0, 0x114($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X114);
    // 0x800476DC: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x800476E0: sh          $v0, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r2;
    // 0x800476E4: lhu         $v0, 0x116($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X116);
    // 0x800476E8: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x800476EC: sh          $v0, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r2;
    // 0x800476F0: lhu         $v0, 0x118($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X118);
    // 0x800476F4: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x800476F8: sh          $v0, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r2;
    // 0x800476FC: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
L_80047700:
    // 0x80047700: j           L_80047730
    // 0x80047704: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
        goto L_80047730;
    // 0x80047704: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
L_80047708:
    // 0x80047708: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
    // 0x8004770C: bne         $v0, $zero, L_80047754
    if (ctx->r2 != 0) {
        // 0x80047710: addiu       $a0, $sp, 0xB8
        ctx->r4 = ADD32(ctx->r29, 0XB8);
            goto L_80047754;
    }
    // 0x80047710: addiu       $a0, $sp, 0xB8
    ctx->r4 = ADD32(ctx->r29, 0XB8);
    // 0x80047714: lhu         $v0, 0x114($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X114);
    // 0x80047718: sh          $v0, 0xB8($sp)
    MEM_H(0XB8, ctx->r29) = ctx->r2;
    // 0x8004771C: lhu         $v0, 0x116($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X116);
    // 0x80047720: sh          $v0, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r2;
    // 0x80047724: lhu         $v0, 0x118($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X118);
    // 0x80047728: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8004772C: sh          $v0, 0xBC($sp)
    MEM_H(0XBC, ctx->r29) = ctx->r2;
L_80047730:
    // 0x80047730: jal         0x80031600
    // 0x80047734: nop

    func_80031600_CA00(rdram, ctx);
        goto after_4;
    // 0x80047734: nop

    after_4:
    // 0x80047738: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8004773C: addiu       $a1, $sp, 0x98
    ctx->r5 = ADD32(ctx->r29, 0X98);
    // 0x80047740: addiu       $a2, $sp, 0xA8
    ctx->r6 = ADD32(ctx->r29, 0XA8);
    // 0x80047744: sw          $zero, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = 0;
    // 0x80047748: sw          $zero, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = 0;
    // 0x8004774C: jal         0x8004DD50
    // 0x80047750: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    func_8004DD50_29150(rdram, ctx);
        goto after_5;
    // 0x80047750: sw          $zero, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = 0;
    after_5:
L_80047754:
    // 0x80047754: lw          $v1, 0x98($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X98);
    // 0x80047758: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x8004775C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80047760: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x80047764: lw          $v1, 0xA0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XA0);
    // 0x80047768: lhu         $v0, 0x48($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X48);
    // 0x8004776C: lb          $a0, 0x74($s2)
    ctx->r4 = MEM_B(ctx->r18, 0X74);
    // 0x80047770: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80047774: beq         $a0, $zero, L_8004778C
    if (ctx->r4 == 0) {
        // 0x80047778: sh          $v0, 0x48($s2)
        MEM_H(0X48, ctx->r18) = ctx->r2;
            goto L_8004778C;
    }
    // 0x80047778: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
    // 0x8004777C: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x80047780: lhu         $v0, 0x46($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X46);
    // 0x80047784: j           L_8004779C
    // 0x80047788: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
        goto L_8004779C;
    // 0x80047788: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_8004778C:
    // 0x8004778C: lhu         $v0, 0x46($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X46);
    // 0x80047790: lw          $v1, 0x9C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X9C);
    // 0x80047794: addiu       $v0, $v0, -0x200
    ctx->r2 = ADD32(ctx->r2, -0X200);
    // 0x80047798: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_8004779C:
    // 0x8004779C: sh          $v0, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r2;
    // 0x800477A0: addiu       $v0, $zero, 0x4000
    ctx->r2 = ADD32(0, 0X4000);
    // 0x800477A4: sb          $zero, 0x76($s2)
    MEM_B(0X76, ctx->r18) = 0;
    // 0x800477A8: j           L_80047B0C
    // 0x800477AC: sw          $zero, 0xC0($s2)
    MEM_W(0XC0, ctx->r18) = 0;
        goto L_80047B0C;
    // 0x800477AC: sw          $zero, 0xC0($s2)
    MEM_W(0XC0, ctx->r18) = 0;
L_800477B0:
    // 0x800477B0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800477B4: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x800477B8: jal         0x8009A3B4
    // 0x800477BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x800477BC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x800477C0: addiu       $s0, $sp, 0x48
    ctx->r16 = ADD32(ctx->r29, 0X48);
    // 0x800477C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800477C8: addiu       $a1, $s2, 0x34
    ctx->r5 = ADD32(ctx->r18, 0X34);
    // 0x800477CC: jal         0x8009A3B4
    // 0x800477D0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x800477D0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_7:
    // 0x800477D4: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x800477D8: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x800477DC: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x800477E0: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x800477E4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800477E8: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x800477EC: lw          $a1, 0x68($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X68);
    // 0x800477F0: lw          $t3, 0x78($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X78);
    // 0x800477F4: lw          $a2, 0x6C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X6C);
    // 0x800477F8: lw          $t4, 0x7C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X7C);
    // 0x800477FC: lw          $a3, 0x70($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X70);
    // 0x80047800: lw          $t5, 0x80($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X80);
    // 0x80047804: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x80047808: subu        $v1, $v1, $t1
    ctx->r3 = SUB32(ctx->r3, ctx->r9);
    // 0x8004780C: subu        $a0, $a0, $t2
    ctx->r4 = SUB32(ctx->r4, ctx->r10);
    // 0x80047810: subu        $a1, $a1, $t3
    ctx->r5 = SUB32(ctx->r5, ctx->r11);
    // 0x80047814: subu        $a2, $a2, $t4
    ctx->r6 = SUB32(ctx->r6, ctx->r12);
    // 0x80047818: subu        $a3, $a3, $t5
    ctx->r7 = SUB32(ctx->r7, ctx->r13);
    // 0x8004781C: sw          $v0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r2;
    // 0x80047820: sw          $v1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r3;
    // 0x80047824: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x80047828: sw          $a1, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r5;
    // 0x8004782C: sw          $a2, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r6;
    // 0x80047830: sw          $a3, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r7;
    // 0x80047834: lbu         $v0, 0x74($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X74);
    // 0x80047838: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8004783C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80047840: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80047844: sb          $v0, 0x296($at)
    MEM_B(0X296, ctx->r1) = ctx->r2;
    // 0x80047848: lbu         $v0, 0x76($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X76);
    // 0x8004784C: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x80047850: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x80047854: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80047858: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x8004785C: sb          $v0, 0x5480($at)
    MEM_B(0X5480, ctx->r1) = ctx->r2;
    // 0x80047860: jal         0x80048994
    // 0x80047864: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    func_80048994_23D94(rdram, ctx);
        goto after_8;
    // 0x80047864: addu        $a3, $s5, $zero
    ctx->r7 = ADD32(ctx->r21, 0);
    after_8:
    // 0x80047868: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8004786C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80047870: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x80047874: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80047878: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    // 0x8004787C: jal         0x800480A0
    // 0x80047880: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    func_800480A0_234A0(rdram, ctx);
        goto after_9;
    // 0x80047880: sw          $s6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r22;
    after_9:
    // 0x80047884: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80047888: blez        $s0, L_80047A50
    if (SIGNED(ctx->r16) <= 0) {
        // 0x8004788C: nop
    
            goto L_80047A50;
    }
    // 0x8004788C: nop

    // 0x80047890: lw          $v1, 0x58($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X58);
    // 0x80047894: beq         $v1, $zero, L_800478AC
    if (ctx->r3 == 0) {
        // 0x80047898: nop
    
            goto L_800478AC;
    }
    // 0x80047898: nop

    // 0x8004789C: lw          $v0, 0x88($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X88);
    // 0x800478A0: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x800478A4: bgez        $v0, L_800478E8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x800478A8: nop
    
            goto L_800478E8;
    }
    // 0x800478A8: nop

L_800478AC:
    // 0x800478AC: lw          $v0, 0x88($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X88);
    // 0x800478B0: subu        $a0, $v0, $v1
    ctx->r4 = SUB32(ctx->r2, ctx->r3);
    // 0x800478B4: bltz        $a0, L_800478C8
    if (SIGNED(ctx->r4) < 0) {
        // 0x800478B8: subu        $v1, $v1, $v0
        ctx->r3 = SUB32(ctx->r3, ctx->r2);
            goto L_800478C8;
    }
    // 0x800478B8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x800478BC: lui         $v0, 0xFFF8
    ctx->r2 = S32(0XFFF8 << 16);
    // 0x800478C0: j           L_800478D0
    // 0x800478C4: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
        goto L_800478D0;
    // 0x800478C4: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
L_800478C8:
    // 0x800478C8: lui         $v0, 0xFFF8
    ctx->r2 = S32(0XFFF8 << 16);
    // 0x800478CC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
L_800478D0:
    // 0x800478D0: lw          $v0, 0x58($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X58);
    // 0x800478D4: bltzl       $v0, L_800478DC
    if (SIGNED(ctx->r2) < 0) {
        // 0x800478D8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_800478DC;
    }
    goto skip_1;
    // 0x800478D8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_1:
L_800478DC:
    // 0x800478DC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800478E0: bne         $v0, $zero, L_800479AC
    if (ctx->r2 != 0) {
        // 0x800478E4: nop
    
            goto L_800479AC;
    }
    // 0x800478E4: nop

L_800478E8:
    // 0x800478E8: lw          $v1, 0x5C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X5C);
    // 0x800478EC: beq         $v1, $zero, L_80047904
    if (ctx->r3 == 0) {
        // 0x800478F0: nop
    
            goto L_80047904;
    }
    // 0x800478F0: nop

    // 0x800478F4: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x800478F8: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x800478FC: bgez        $v0, L_80047940
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80047900: nop
    
            goto L_80047940;
    }
    // 0x80047900: nop

L_80047904:
    // 0x80047904: lw          $v0, 0x8C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X8C);
    // 0x80047908: subu        $a0, $v0, $v1
    ctx->r4 = SUB32(ctx->r2, ctx->r3);
    // 0x8004790C: bltz        $a0, L_80047920
    if (SIGNED(ctx->r4) < 0) {
        // 0x80047910: subu        $v1, $v1, $v0
        ctx->r3 = SUB32(ctx->r3, ctx->r2);
            goto L_80047920;
    }
    // 0x80047910: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80047914: lui         $v0, 0xFFF8
    ctx->r2 = S32(0XFFF8 << 16);
    // 0x80047918: j           L_80047928
    // 0x8004791C: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
        goto L_80047928;
    // 0x8004791C: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
L_80047920:
    // 0x80047920: lui         $v0, 0xFFF8
    ctx->r2 = S32(0XFFF8 << 16);
    // 0x80047924: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
L_80047928:
    // 0x80047928: lw          $v0, 0x5C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X5C);
    // 0x8004792C: bltzl       $v0, L_80047934
    if (SIGNED(ctx->r2) < 0) {
        // 0x80047930: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80047934;
    }
    goto skip_2;
    // 0x80047930: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_2:
L_80047934:
    // 0x80047934: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80047938: bne         $v0, $zero, L_800479AC
    if (ctx->r2 != 0) {
        // 0x8004793C: nop
    
            goto L_800479AC;
    }
    // 0x8004793C: nop

L_80047940:
    // 0x80047940: lw          $v1, 0x60($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X60);
    // 0x80047944: beq         $v1, $zero, L_8004795C
    if (ctx->r3 == 0) {
        // 0x80047948: nop
    
            goto L_8004795C;
    }
    // 0x80047948: nop

    // 0x8004794C: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x80047950: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x80047954: bgez        $v0, L_80047A18
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80047958: nop
    
            goto L_80047A18;
    }
    // 0x80047958: nop

L_8004795C:
    // 0x8004795C: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x80047960: subu        $a0, $v0, $v1
    ctx->r4 = SUB32(ctx->r2, ctx->r3);
    // 0x80047964: bltz        $a0, L_80047978
    if (SIGNED(ctx->r4) < 0) {
        // 0x80047968: subu        $v1, $v1, $v0
        ctx->r3 = SUB32(ctx->r3, ctx->r2);
            goto L_80047978;
    }
    // 0x80047968: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8004796C: lui         $v0, 0xFFF8
    ctx->r2 = S32(0XFFF8 << 16);
    // 0x80047970: j           L_80047980
    // 0x80047974: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
        goto L_80047980;
    // 0x80047974: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
L_80047978:
    // 0x80047978: lui         $v0, 0xFFF8
    ctx->r2 = S32(0XFFF8 << 16);
    // 0x8004797C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
L_80047980:
    // 0x80047980: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x80047984: bltzl       $v0, L_800479A0
    if (SIGNED(ctx->r2) < 0) {
        // 0x80047988: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_800479A0;
    }
    goto skip_3;
    // 0x80047988: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_3:
    // 0x8004798C: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80047990: beq         $v0, $zero, L_80047A18
    if (ctx->r2 == 0) {
        // 0x80047994: nop
    
            goto L_80047A18;
    }
    // 0x80047994: nop

    // 0x80047998: j           L_800479AC
    // 0x8004799C: nop

        goto L_800479AC;
    // 0x8004799C: nop

L_800479A0:
    // 0x800479A0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800479A4: beq         $v0, $zero, L_80047A18
    if (ctx->r2 == 0) {
        // 0x800479A8: nop
    
            goto L_80047A18;
    }
    // 0x800479A8: nop

L_800479AC:
    // 0x800479AC: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
    // 0x800479B0: bne         $v0, $zero, L_80047A18
    if (ctx->r2 != 0) {
        // 0x800479B4: nop
    
            goto L_80047A18;
    }
    // 0x800479B4: nop

    // 0x800479B8: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x800479BC: lb          $v0, 0x5480($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X5480);
    // 0x800479C0: bne         $v0, $zero, L_80047A18
    if (ctx->r2 != 0) {
        // 0x800479C4: nop
    
            goto L_80047A18;
    }
    // 0x800479C4: nop

    // 0x800479C8: lw          $t6, 0x110($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X110);
    // 0x800479CC: lw          $v1, 0x188($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X188);
    // 0x800479D0: andi        $v0, $t6, 0xFF
    ctx->r2 = ctx->r14 & 0XFF;
    // 0x800479D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800479D8: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x800479DC: and         $v0, $t6, $v0
    ctx->r2 = ctx->r14 & ctx->r2;
    // 0x800479E0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x800479E4: sw          $v1, 0x188($s2)
    MEM_W(0X188, ctx->r18) = ctx->r3;
    // 0x800479E8: lh          $v0, 0x56($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X56);
    // 0x800479EC: lh          $v1, 0x56($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X56);
    // 0x800479F0: lh          $a0, 0x116($s2)
    ctx->r4 = MEM_H(ctx->r18, 0X116);
    // 0x800479F4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800479F8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800479FC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80047A00: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x80047A04: sra         $v0, $v0, 10
    ctx->r2 = S32(SIGNED(ctx->r2) >> 10);
    // 0x80047A08: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80047A0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80047A10: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80047A14: sb          $v0, 0x71($s2)
    MEM_B(0X71, ctx->r18) = ctx->r2;
L_80047A18:
    // 0x80047A18: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80047A1C: lb          $v0, 0x296($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X296);
    // 0x80047A20: bne         $v0, $zero, L_80047A58
    if (ctx->r2 != 0) {
        // 0x80047A24: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80047A58;
    }
    // 0x80047A24: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80047A28: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80047A2C: lb          $v0, 0x5480($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X5480);
    // 0x80047A30: beq         $v0, $zero, L_80047A58
    if (ctx->r2 == 0) {
        // 0x80047A34: nop
    
            goto L_80047A58;
    }
    // 0x80047A34: nop

    // 0x80047A38: sb          $v1, 0x74($s2)
    MEM_B(0X74, ctx->r18) = ctx->r3;
    // 0x80047A3C: lui         $v0, 0x8019
    ctx->r2 = S32(0X8019 << 16);
    // 0x80047A40: lbu         $v0, 0x5480($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X5480);
    // 0x80047A44: sw          $s7, 0xC0($s2)
    MEM_W(0XC0, ctx->r18) = ctx->r23;
    // 0x80047A48: j           L_80047A58
    // 0x80047A4C: sb          $v0, 0x76($s2)
    MEM_B(0X76, ctx->r18) = ctx->r2;
        goto L_80047A58;
    // 0x80047A4C: sb          $v0, 0x76($s2)
    MEM_B(0X76, ctx->r18) = ctx->r2;
L_80047A50:
    // 0x80047A50: bltz        $s0, L_80047B0C
    if (SIGNED(ctx->r16) < 0) {
        // 0x80047A54: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80047B0C;
    }
    // 0x80047A54: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80047A58:
    // 0x80047A58: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x80047A5C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80047A60: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80047A64: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x80047A68: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x80047A6C: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    // 0x80047A70: addu        $a3, $fp, $zero
    ctx->r7 = ADD32(ctx->r30, 0);
    // 0x80047A74: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x80047A78: jal         0x80047C8C
    // 0x80047A7C: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    func_80047C8C_2308C(rdram, ctx);
        goto after_10;
    // 0x80047A7C: sw          $s6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r22;
    after_10:
    // 0x80047A80: beq         $v0, $zero, L_80047ADC
    if (ctx->r2 == 0) {
        // 0x80047A84: lui         $v0, 0xFFFC
        ctx->r2 = S32(0XFFFC << 16);
            goto L_80047ADC;
    }
    // 0x80047A84: lui         $v0, 0xFFFC
    ctx->r2 = S32(0XFFFC << 16);
    // 0x80047A88: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80047A8C: lw          $v1, -0x211C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X211C);
    // 0x80047A90: lw          $a0, 0x20($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X20);
    // 0x80047A94: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80047A98: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80047A9C: beq         $v0, $zero, L_80047AD0
    if (ctx->r2 == 0) {
        // 0x80047AA0: lui         $v0, 0x20
        ctx->r2 = S32(0X20 << 16);
            goto L_80047AD0;
    }
    // 0x80047AA0: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x80047AA4: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x80047AA8: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80047AAC: beq         $v0, $zero, L_80047AD0
    if (ctx->r2 == 0) {
        // 0x80047AB0: nop
    
            goto L_80047AD0;
    }
    // 0x80047AB0: nop

    // 0x80047AB4: lb          $v0, 0x74($s2)
    ctx->r2 = MEM_B(ctx->r18, 0X74);
    // 0x80047AB8: bne         $v0, $zero, L_80047AD0
    if (ctx->r2 != 0) {
        // 0x80047ABC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80047AD0;
    }
    // 0x80047ABC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80047AC0: sw          $v1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r3;
    // 0x80047AC4: sb          $v0, 0x76($s2)
    MEM_B(0X76, ctx->r18) = ctx->r2;
    // 0x80047AC8: j           L_80047AFC
    // 0x80047ACC: sw          $s7, 0xC0($s2)
    MEM_W(0XC0, ctx->r18) = ctx->r23;
        goto L_80047AFC;
    // 0x80047ACC: sw          $s7, 0xC0($s2)
    MEM_W(0XC0, ctx->r18) = ctx->r23;
L_80047AD0:
    // 0x80047AD0: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x80047AD4: j           L_80047AFC
    // 0x80047AD8: sw          $v0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r2;
        goto L_80047AFC;
    // 0x80047AD8: sw          $v0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r2;
L_80047ADC:
    // 0x80047ADC: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x80047AE0: lb          $v1, 0x76($s2)
    ctx->r3 = MEM_B(ctx->r18, 0X76);
    // 0x80047AE4: beq         $v1, $zero, L_80047AFC
    if (ctx->r3 == 0) {
        // 0x80047AE8: sw          $v0, 0x20($s2)
        MEM_W(0X20, ctx->r18) = ctx->r2;
            goto L_80047AFC;
    }
    // 0x80047AE8: sw          $v0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r2;
    // 0x80047AEC: lbu         $t6, 0xCF($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0XCF);
    // 0x80047AF0: sb          $zero, 0x76($s2)
    MEM_B(0X76, ctx->r18) = 0;
    // 0x80047AF4: sw          $zero, 0xC0($s2)
    MEM_W(0XC0, ctx->r18) = 0;
    // 0x80047AF8: sb          $t6, 0x74($s2)
    MEM_B(0X74, ctx->r18) = ctx->r14;
L_80047AFC:
    // 0x80047AFC: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x80047B00: jal         0x8004DD04
    // 0x80047B04: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_11;
    // 0x80047B04: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_11:
    // 0x80047B08: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_80047B0C:
    // 0x80047B0C: lw          $ra, 0xFC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XFC);
    // 0x80047B10: lw          $fp, 0xF8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XF8);
    // 0x80047B14: lw          $s7, 0xF4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XF4);
    // 0x80047B18: lw          $s6, 0xF0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XF0);
    // 0x80047B1C: lw          $s5, 0xEC($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XEC);
    // 0x80047B20: lw          $s4, 0xE8($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XE8);
    // 0x80047B24: lw          $s3, 0xE4($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XE4);
    // 0x80047B28: lw          $s2, 0xE0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XE0);
    // 0x80047B2C: lw          $s1, 0xDC($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XDC);
    // 0x80047B30: lw          $s0, 0xD8($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XD8);
    // 0x80047B34: jr          $ra
    // 0x80047B38: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
    TRACE_RETURN()
    return;
    // 0x80047B38: addiu       $sp, $sp, 0x100
    ctx->r29 = ADD32(ctx->r29, 0X100);
;}
RECOMP_FUNC void func_8005F6B4_3AAB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005F6B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005F6B8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8005F6BC: lw          $v1, 0x4390($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4390);
    // 0x8005F6C0: lui         $t0, 0x8020
    ctx->r8 = S32(0X8020 << 16);
    // 0x8005F6C4: lw          $t0, 0x4394($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X4394);
    // 0x8005F6C8: lui         $t1, 0x8020
    ctx->r9 = S32(0X8020 << 16);
    // 0x8005F6CC: lw          $t1, 0x4398($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4398);
    // 0x8005F6D0: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8005F6D4: lw          $a3, 0x4358($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X4358);
    // 0x8005F6D8: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8005F6DC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8005F6E0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005F6E4: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    // 0x8005F6E8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8005F6EC: lw          $v0, 0x4354($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4354);
    // 0x8005F6F0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8005F6F4: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8005F6F8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005F6FC: sw          $a0, 0xA70($at)
    MEM_W(0XA70, ctx->r1) = ctx->r4;
    // 0x8005F700: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8005F704: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005F708: sw          $a1, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = ctx->r5;
    // 0x8005F70C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005F710: sw          $a2, 0xA78($at)
    MEM_W(0XA78, ctx->r1) = ctx->r6;
    // 0x8005F714: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005F718: sw          $zero, 0xA58($at)
    MEM_W(0XA58, ctx->r1) = 0;
    // 0x8005F71C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005F720: sw          $zero, 0xA54($at)
    MEM_W(0XA54, ctx->r1) = 0;
    // 0x8005F724: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005F728: sw          $zero, 0xA50($at)
    MEM_W(0XA50, ctx->r1) = 0;
    // 0x8005F72C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005F730: sw          $zero, 0xA28($at)
    MEM_W(0XA28, ctx->r1) = 0;
    // 0x8005F734: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005F738: sw          $zero, 0xA24($at)
    MEM_W(0XA24, ctx->r1) = 0;
    // 0x8005F73C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005F740: sw          $zero, 0xA20($at)
    MEM_W(0XA20, ctx->r1) = 0;
    // 0x8005F744: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005F748: sw          $zero, 0x9F8($at)
    MEM_W(0X9F8, ctx->r1) = 0;
    // 0x8005F74C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005F750: sw          $zero, 0x9F4($at)
    MEM_W(0X9F4, ctx->r1) = 0;
    // 0x8005F754: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005F758: sw          $zero, 0x9F0($at)
    MEM_W(0X9F0, ctx->r1) = 0;
    // 0x8005F75C: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005F760: sb          $zero, 0x9D8($at)
    MEM_B(0X9D8, ctx->r1) = 0;
    // 0x8005F764: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8005F768: sll         $t0, $t0, 16
    ctx->r8 = S32(ctx->r8 << 16);
    // 0x8005F76C: sll         $t1, $t1, 16
    ctx->r9 = S32(ctx->r9 << 16);
    // 0x8005F770: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005F774: sw          $v1, 0x9E0($at)
    MEM_W(0X9E0, ctx->r1) = ctx->r3;
    // 0x8005F778: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8005F77C: lw          $v1, 0x435C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X435C);
    // 0x8005F780: andi        $a3, $a3, 0xFFF
    ctx->r7 = ctx->r7 & 0XFFF;
    // 0x8005F784: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8005F788: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8005F78C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8005F790: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005F794: sw          $t0, 0x9E4($at)
    MEM_W(0X9E4, ctx->r1) = ctx->r8;
    // 0x8005F798: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005F79C: sw          $t1, 0x9E8($at)
    MEM_W(0X9E8, ctx->r1) = ctx->r9;
    // 0x8005F7A0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005F7A4: sw          $a3, 0xA10($at)
    MEM_W(0XA10, ctx->r1) = ctx->r7;
    // 0x8005F7A8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005F7AC: sw          $v0, 0xA18($at)
    MEM_W(0XA18, ctx->r1) = ctx->r2;
    // 0x8005F7B0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8005F7B4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8005F7B8: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8005F7BC: sw          $v1, 0xA14($at)
    MEM_W(0XA14, ctx->r1) = ctx->r3;
    // 0x8005F7C0: jal         0x80034904
    // 0x8005F7C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80034904_FD04(rdram, ctx);
        goto after_0;
    // 0x8005F7C4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x8005F7C8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8005F7CC: jr          $ra
    // 0x8005F7D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005F7D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80030834_BC34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80030834: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80030838: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8003083C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80030840: addu        $t3, $zero, $zero
    ctx->r11 = ADD32(0, 0);
    // 0x80030844: addu        $t1, $a0, $zero
    ctx->r9 = ADD32(ctx->r4, 0);
    // 0x80030848: addiu       $t2, $sp, 0x10
    ctx->r10 = ADD32(ctx->r29, 0X10);
    // 0x8003084C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
L_80030850:
    // 0x80030850: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x80030854: addu        $a3, $t2, $zero
    ctx->r7 = ADD32(ctx->r10, 0);
    // 0x80030858: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
L_8003085C:
    // 0x8003085C: lh          $v1, 0x0($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X0);
    // 0x80030860: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x80030864: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030868: mflo        $v1
    ctx->r3 = lo;
    // 0x8003086C: lh          $a1, 0x2($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X2);
    // 0x80030870: lh          $v0, 0x6($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X6);
    // 0x80030874: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030878: mflo        $a1
    ctx->r5 = lo;
    // 0x8003087C: lh          $a0, 0x4($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X4);
    // 0x80030880: lh          $v0, 0xC($a2)
    ctx->r2 = MEM_H(ctx->r6, 0XC);
    // 0x80030884: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80030888: mflo        $a0
    ctx->r4 = lo;
    // 0x8003088C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80030890: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80030894: slti        $v0, $t0, 0x3
    ctx->r2 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x80030898: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8003089C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800308A0: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x800308A4: sh          $v1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r3;
    // 0x800308A8: bne         $v0, $zero, L_8003085C
    if (ctx->r2 != 0) {
        // 0x800308AC: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_8003085C;
    }
    // 0x800308AC: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x800308B0: addiu       $t1, $t1, 0x6
    ctx->r9 = ADD32(ctx->r9, 0X6);
    // 0x800308B4: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x800308B8: slti        $v0, $t3, 0x3
    ctx->r2 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x800308BC: bne         $v0, $zero, L_80030850
    if (ctx->r2 != 0) {
        // 0x800308C0: addiu       $t2, $t2, 0x6
        ctx->r10 = ADD32(ctx->r10, 0X6);
            goto L_80030850;
    }
    // 0x800308C0: addiu       $t2, $t2, 0x6
    ctx->r10 = ADD32(ctx->r10, 0X6);
    // 0x800308C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800308C8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x800308CC: jal         0x8009A3B4
    // 0x800308D0: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x800308D0: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_0:
    // 0x800308D4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x800308D8: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x800308DC: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x800308E0: jr          $ra
    // 0x800308E4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x800308E4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80036BBC_11FBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036BBC: jr          $ra
    // 0x80036BC0: nop

    TRACE_RETURN()
    return;
    // 0x80036BC0: nop

;}
RECOMP_FUNC void func_8003B7D8_16BD8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B7D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003B7DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8003B7E0: jal         0x800893E4
    // 0x8003B7E4: nop

    func_800893E4_647E4(rdram, ctx);
        goto after_0;
    // 0x8003B7E4: nop

    after_0:
    // 0x8003B7E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8003B7EC: jr          $ra
    // 0x8003B7F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8003B7F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800868C0_61CC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800868C0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800868C4: lw          $v0, -0x15DC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X15DC);
    // 0x800868C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800868CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800868D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800868D4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x800868D8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x800868DC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800868E0: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x800868E4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x800868E8: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x800868EC: beq         $v0, $zero, L_80086980
    if (ctx->r2 == 0) {
        // 0x800868F0: sw          $ra, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r31;
            goto L_80086980;
    }
    // 0x800868F0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x800868F4: jal         0x800281C8
    // 0x800868F8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800281C8_35C8(rdram, ctx);
        goto after_0;
    // 0x800868F8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x800868FC: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80086900: beq         $a3, $zero, L_80086980
    if (ctx->r7 == 0) {
        // 0x80086904: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_80086980;
    }
    // 0x80086904: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x80086908: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8008690C: bltzl       $v0, L_80086914
    if (SIGNED(ctx->r2) < 0) {
        // 0x80086910: addiu       $v0, $v0, 0x3
        ctx->r2 = ADD32(ctx->r2, 0X3);
            goto L_80086914;
    }
    goto skip_0;
    // 0x80086910: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    skip_0:
L_80086914:
    // 0x80086914: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x80086918: sh          $v0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r2;
    // 0x8008691C: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80086920: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80086924: bltzl       $v0, L_8008692C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80086928: addiu       $v0, $v0, 0x3
        ctx->r2 = ADD32(ctx->r2, 0X3);
            goto L_8008692C;
    }
    goto skip_1;
    // 0x80086928: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    skip_1:
L_8008692C:
    // 0x8008692C: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x80086930: sh          $v0, 0x4($a3)
    MEM_H(0X4, ctx->r7) = ctx->r2;
    // 0x80086934: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80086938: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8008693C: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
    // 0x80086940: bltzl       $v0, L_80086948
    if (SIGNED(ctx->r2) < 0) {
        // 0x80086944: addiu       $v0, $v1, 0x7
        ctx->r2 = ADD32(ctx->r3, 0X7);
            goto L_80086948;
    }
    goto skip_2;
    // 0x80086944: addiu       $v0, $v1, 0x7
    ctx->r2 = ADD32(ctx->r3, 0X7);
    skip_2:
L_80086948:
    // 0x80086948: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8008694C: sh          $v0, 0x2($a3)
    MEM_H(0X2, ctx->r7) = ctx->r2;
    // 0x80086950: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x80086954: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80086958: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
    // 0x8008695C: bltzl       $v0, L_80086964
    if (SIGNED(ctx->r2) < 0) {
        // 0x80086960: addiu       $v0, $v1, 0x7
        ctx->r2 = ADD32(ctx->r3, 0X7);
            goto L_80086964;
    }
    goto skip_3;
    // 0x80086960: addiu       $v0, $v1, 0x7
    ctx->r2 = ADD32(ctx->r3, 0X7);
    skip_3:
L_80086964:
    // 0x80086964: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x80086968: sh          $v0, 0x6($a3)
    MEM_H(0X6, ctx->r7) = ctx->r2;
    // 0x8008696C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80086970: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x80086974: addiu       $a2, $a2, 0x69D0
    ctx->r6 = ADD32(ctx->r6, 0X69D0);
    // 0x80086978: jal         0x800283A8
    // 0x8008697C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800283A8_37A8(rdram, ctx);
        goto after_1;
    // 0x8008697C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_1:
L_80086980:
    // 0x80086980: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80086984: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80086988: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8008698C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80086990: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80086994: jr          $ra
    // 0x80086998: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80086998: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800A35A0_7E9A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800A35A0: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x800A35A4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x800A35A8: beq         $v0, $zero, L_800A35F4
    if (ctx->r2 == 0) {
        // 0x800A35AC: addu        $a2, $a0, $zero
        ctx->r6 = ADD32(ctx->r4, 0);
            goto L_800A35F4;
    }
    // 0x800A35AC: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x800A35B0: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x800A35B4: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x800A35B8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800A35BC: beq         $v0, $zero, L_800A3660
    if (ctx->r2 == 0) {
        // 0x800A35C0: addiu       $a2, $a0, 0x1
        ctx->r6 = ADD32(ctx->r4, 0X1);
            goto L_800A3660;
    }
    // 0x800A35C0: addiu       $a2, $a0, 0x1
    ctx->r6 = ADD32(ctx->r4, 0X1);
L_800A35C4:
    // 0x800A35C4: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x800A35C8: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x800A35CC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800A35D0: bne         $v0, $zero, L_800A35C4
    if (ctx->r2 != 0) {
        // 0x800A35D4: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_800A35C4;
    }
    // 0x800A35D4: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x800A35D8: j           L_800A3660
    // 0x800A35DC: nop

        goto L_800A3660;
    // 0x800A35DC: nop

L_800A35E0:
    // 0x800A35E0: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x800A35E4: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x800A35E8: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800A35EC: beq         $v0, $zero, L_800A3660
    if (ctx->r2 == 0) {
        // 0x800A35F0: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_800A3660;
    }
    // 0x800A35F0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
L_800A35F4:
    // 0x800A35F4: andi        $v0, $a2, 0x3
    ctx->r2 = ctx->r6 & 0X3;
    // 0x800A35F8: bne         $v0, $zero, L_800A35E0
    if (ctx->r2 != 0) {
        // 0x800A35FC: nop
    
            goto L_800A35E0;
    }
    // 0x800A35FC: nop

L_800A3600:
    // 0x800A3600: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x800A3604: lui         $v0, 0xFF00
    ctx->r2 = S32(0XFF00 << 16);
    // 0x800A3608: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x800A360C: bne         $v0, $zero, L_800A361C
    if (ctx->r2 != 0) {
        // 0x800A3610: addiu       $a1, $a1, 0x4
        ctx->r5 = ADD32(ctx->r5, 0X4);
            goto L_800A361C;
    }
    // 0x800A3610: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x800A3614: j           L_800A3660
    // 0x800A3618: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
        goto L_800A3660;
    // 0x800A3618: sb          $zero, 0x0($a2)
    MEM_B(0X0, ctx->r6) = 0;
L_800A361C:
    // 0x800A361C: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x800A3620: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x800A3624: bne         $v0, $zero, L_800A3638
    if (ctx->r2 != 0) {
        // 0x800A3628: andi        $v0, $v1, 0xFF00
        ctx->r2 = ctx->r3 & 0XFF00;
            goto L_800A3638;
    }
    // 0x800A3628: andi        $v0, $v1, 0xFF00
    ctx->r2 = ctx->r3 & 0XFF00;
    // 0x800A362C: srl         $v0, $v1, 16
    ctx->r2 = S32(U32(ctx->r3) >> 16);
    // 0x800A3630: j           L_800A3660
    // 0x800A3634: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
        goto L_800A3660;
    // 0x800A3634: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_800A3638:
    // 0x800A3638: beq         $v0, $zero, L_800A3658
    if (ctx->r2 == 0) {
        // 0x800A363C: srl         $v0, $v1, 16
        ctx->r2 = S32(U32(ctx->r3) >> 16);
            goto L_800A3658;
    }
    // 0x800A363C: srl         $v0, $v1, 16
    ctx->r2 = S32(U32(ctx->r3) >> 16);
    // 0x800A3640: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x800A3644: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x800A3648: bne         $v0, $zero, L_800A3600
    if (ctx->r2 != 0) {
        // 0x800A364C: addiu       $a2, $a2, 0x4
        ctx->r6 = ADD32(ctx->r6, 0X4);
            goto L_800A3600;
    }
    // 0x800A364C: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x800A3650: j           L_800A3660
    // 0x800A3654: nop

        goto L_800A3660;
    // 0x800A3654: nop

L_800A3658:
    // 0x800A3658: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
    // 0x800A365C: sb          $zero, 0x2($a2)
    MEM_B(0X2, ctx->r6) = 0;
L_800A3660:
    // 0x800A3660: jr          $ra
    // 0x800A3664: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    TRACE_RETURN()
    return;
    // 0x800A3664: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x800A3668: nop

    // 0x800A366C: nop

    // 0x800A3670: nop

;}
RECOMP_FUNC void func_80035490_10890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035490: jr          $ra
    // 0x80035494: nop

    TRACE_RETURN()
    return;
    // 0x80035494: nop

;}
RECOMP_FUNC void func_80069754_44B54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80069754: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80069758: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8006975C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80069760: beq         $a1, $v0, L_800697B4
    if (ctx->r5 == ctx->r2) {
        // 0x80069764: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_800697B4;
    }
    // 0x80069764: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x80069768: beq         $a1, $zero, L_80069780
    if (ctx->r5 == 0) {
        // 0x8006976C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80069780;
    }
    // 0x8006976C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80069770: beq         $a1, $v0, L_800697E8
    if (ctx->r5 == ctx->r2) {
        // 0x80069774: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_800697E8;
    }
    // 0x80069774: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80069778: j           L_80069814
    // 0x8006977C: nop

        goto L_80069814;
    // 0x8006977C: nop

L_80069780:
    // 0x80069780: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80069784: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80069788: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8006978C: lhu         $v0, 0xC34($at)
    ctx->r2 = MEM_HU(ctx->r1, 0XC34);
    // 0x80069790: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80069794: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80069798: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8006979C: lw          $a1, 0x27F0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X27F0);
    // 0x800697A0: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x800697A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800697A8: sb          $v1, 0x6B39($at)
    MEM_B(0X6B39, ctx->r1) = ctx->r3;
    // 0x800697AC: j           L_8006980C
    // 0x800697B0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
        goto L_8006980C;
    // 0x800697B0: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
L_800697B4:
    // 0x800697B4: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x800697B8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800697BC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800697C0: lhu         $v0, 0xC34($at)
    ctx->r2 = MEM_HU(ctx->r1, 0XC34);
    // 0x800697C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800697C8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800697CC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x800697D0: lw          $a1, 0x27F4($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X27F4);
    // 0x800697D4: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x800697D8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800697DC: sw          $v1, -0x2378($at)
    MEM_W(-0X2378, ctx->r1) = ctx->r3;
    // 0x800697E0: j           L_8006980C
    // 0x800697E4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
        goto L_8006980C;
    // 0x800697E4: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
L_800697E8:
    // 0x800697E8: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800697EC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800697F0: lhu         $v0, 0xC34($at)
    ctx->r2 = MEM_HU(ctx->r1, 0XC34);
    // 0x800697F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800697F8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800697FC: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80069800: lw          $a1, 0x27EC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X27EC);
    // 0x80069804: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x80069808: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
L_8006980C:
    // 0x8006980C: jal         0x80061510
    // 0x80069810: nop

    func_80061510_3C910(rdram, ctx);
        goto after_0;
    // 0x80069810: nop

    after_0:
L_80069814:
    // 0x80069814: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80069818: jr          $ra
    // 0x8006981C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006981C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008EE10_6A210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008EE10: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008EE14: beq         $a2, $zero, L_8008EE30
    if (ctx->r6 == 0) {
        // 0x8008EE18: addiu       $v0, $a2, -0x1
        ctx->r2 = ADD32(ctx->r6, -0X1);
            goto L_8008EE30;
    }
    // 0x8008EE18: addiu       $v0, $a2, -0x1
    ctx->r2 = ADD32(ctx->r6, -0X1);
    // 0x8008EE1C: addiu       $v1, $zero, -0x1
    ctx->r3 = ADD32(0, -0X1);
L_8008EE20:
    // 0x8008EE20: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x8008EE24: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8008EE28: bne         $v0, $v1, L_8008EE20
    if (ctx->r2 != ctx->r3) {
        // 0x8008EE2C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8008EE20;
    }
    // 0x8008EE2C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_8008EE30:
    // 0x8008EE30: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8008EE34: jr          $ra
    // 0x8008EE38: nop

    TRACE_RETURN()
    return;
    // 0x8008EE38: nop

;}
RECOMP_FUNC void __scExec(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009B294: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009B298: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8009B29C: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8009B2A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8009B2A4: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8009B2A8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8009B2AC: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x8009B2B0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8009B2B4: beq         $s1, $zero, L_8009B304
    if (ctx->r17 == 0) {
        // 0x8009B2B8: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_8009B304;
    }
    // 0x8009B2B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8009B2BC: lw          $v1, 0x10($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X10);
    // 0x8009B2C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8009B2C4: bne         $v1, $v0, L_8009B2D4
    if (ctx->r3 != ctx->r2) {
        // 0x8009B2C8: nop
    
            goto L_8009B2D4;
    }
    // 0x8009B2C8: nop

    // 0x8009B2CC: jal         0x800995F0
    // 0x8009B2D0: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_0;
    // 0x8009B2D0: nop

    after_0:
L_8009B2D4:
    // 0x8009B2D4: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x8009B2D8: addiu       $s0, $s1, 0x10
    ctx->r16 = ADD32(ctx->r17, 0X10);
    // 0x8009B2DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8009B2E0: addiu       $v1, $zero, -0x31
    ctx->r3 = ADD32(0, -0X31);
    // 0x8009B2E4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8009B2E8: jal         0x8009A8F0
    // 0x8009B2EC: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    osSpTaskLoad_recomp(rdram, ctx);
        goto after_1;
    // 0x8009B2EC: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    after_1:
    // 0x8009B2F0: jal         0x8009AAFC
    // 0x8009B2F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osSpTaskStartGo_recomp(rdram, ctx);
        goto after_2;
    // 0x8009B2F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8009B2F8: bne         $s1, $s2, L_8009B304
    if (ctx->r17 != ctx->r18) {
        // 0x8009B2FC: sw          $s1, 0x274($s3)
        MEM_W(0X274, ctx->r19) = ctx->r17;
            goto L_8009B304;
    }
    // 0x8009B2FC: sw          $s1, 0x274($s3)
    MEM_W(0X274, ctx->r19) = ctx->r17;
    // 0x8009B300: sw          $s2, 0x278($s3)
    MEM_W(0X278, ctx->r19) = ctx->r18;
L_8009B304:
    // 0x8009B304: sltu        $v1, $zero, $s2
    ctx->r3 = 0 < ctx->r18 ? 1 : 0;
    // 0x8009B308: xor         $v0, $s2, $s1
    ctx->r2 = ctx->r18 ^ ctx->r17;
    // 0x8009B30C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8009B310: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8009B314: beq         $v1, $zero, L_8009B348
    if (ctx->r3 == 0) {
        // 0x8009B318: nop
    
            goto L_8009B348;
    }
    // 0x8009B318: nop

    // 0x8009B31C: lw          $v0, 0x3C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X3C);
    // 0x8009B320: lw          $a0, 0x38($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X38);
    // 0x8009B324: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x8009B328: jal         0x800A1580
    // 0x8009B32C: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    osDpSetNextBuffer_recomp(rdram, ctx);
        goto after_3;
    // 0x8009B32C: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    after_3:
    // 0x8009B330: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8009B334: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009B338: sw          $v0, -0x29C($at)
    MEM_W(-0X29C, ctx->r1) = ctx->r2;
    // 0x8009B33C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009B340: sw          $zero, -0x298($at)
    MEM_W(-0X298, ctx->r1) = 0;
    // 0x8009B344: sw          $s2, 0x278($s3)
    MEM_W(0X278, ctx->r19) = ctx->r18;
L_8009B348:
    // 0x8009B348: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8009B34C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8009B350: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8009B354: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8009B358: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8009B35C: jr          $ra
    // 0x8009B360: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8009B360: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800712E4_4C6E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800712E4: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x800712E8: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x800712EC: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x800712F0: andi        $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 & 0XFFFF;
    // 0x800712F4: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x800712F8: sll         $s0, $a2, 1
    ctx->r16 = S32(ctx->r6 << 1);
    // 0x800712FC: addu        $s0, $s0, $a2
    ctx->r16 = ADD32(ctx->r16, ctx->r6);
    // 0x80071300: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x80071304: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x80071308: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x8007130C: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x80071310: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x80071314: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x80071318: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x8007131C: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x80071320: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x80071324: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80071328: lui         $s1, 0x801B
    ctx->r17 = S32(0X801B << 16);
    // 0x8007132C: addu        $s1, $s1, $s0
    ctx->r17 = ADD32(ctx->r17, ctx->r16);
    // 0x80071330: lw          $s1, 0x5088($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X5088);
    // 0x80071334: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80071338: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8007133C: jal         0x8009A3B4
    // 0x80071340: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80071340: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    after_0:
    // 0x80071344: addiu       $s2, $sp, 0x10
    ctx->r18 = ADD32(ctx->r29, 0X10);
    // 0x80071348: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8007134C: lw          $v0, 0x14($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X14);
    // 0x80071350: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80071354: addiu       $a1, $a1, 0x5080
    ctx->r5 = ADD32(ctx->r5, 0X5080);
    // 0x80071358: addu        $a1, $s0, $a1
    ctx->r5 = ADD32(ctx->r16, ctx->r5);
    // 0x8007135C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80071360: sll         $v1, $v0, 16
    ctx->r3 = S32(ctx->r2 << 16);
    // 0x80071364: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x80071368: or          $s4, $v1, $v0
    ctx->r20 = ctx->r3 | ctx->r2;
    // 0x8007136C: andi        $fp, $s4, 0xFFFF
    ctx->r30 = ctx->r20 & 0XFFFF;
    // 0x80071370: jal         0x8009A3B4
    // 0x80071374: srl         $s4, $s4, 17
    ctx->r20 = S32(U32(ctx->r20) >> 17);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80071374: srl         $s4, $s4, 17
    ctx->r20 = S32(U32(ctx->r20) >> 17);
    after_1:
    // 0x80071378: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x8007137C: addiu       $a1, $zero, 0x3E8
    ctx->r5 = ADD32(0, 0X3E8);
    // 0x80071380: lhu         $v0, 0x10($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X10);
    // 0x80071384: lhu         $a3, 0x18($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X18);
    // 0x80071388: lhu         $v1, 0x1A($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1A);
    // 0x8007138C: addiu       $a2, $zero, 0x1388
    ctx->r6 = ADD32(0, 0X1388);
    // 0x80071390: lhu         $t0, 0x1C($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X1C);
    // 0x80071394: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80071398: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8007139C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x800713A0: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x800713A4: lhu         $a3, 0x14($sp)
    ctx->r7 = MEM_HU(ctx->r29, 0X14);
    // 0x800713A8: sra         $v1, $v1, 17
    ctx->r3 = S32(SIGNED(ctx->r3) >> 17);
    // 0x800713AC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800713B0: addu        $a3, $a3, $t0
    ctx->r7 = ADD32(ctx->r7, ctx->r8);
    // 0x800713B4: sh          $a3, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r7;
    // 0x800713B8: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    // 0x800713BC: jal         0x8003491C
    // 0x800713C0: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    func_8003491C_FD1C(rdram, ctx);
        goto after_2;
    // 0x800713C0: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    after_2:
    // 0x800713C4: addiu       $v0, $s3, -0x1
    ctx->r2 = ADD32(ctx->r19, -0X1);
    // 0x800713C8: addiu       $a0, $zero, 0x1000
    ctx->r4 = ADD32(0, 0X1000);
    // 0x800713CC: srav        $t1, $a0, $v0
    ctx->r9 = S32(SIGNED(ctx->r4) >> (ctx->r2 & 31));
    // 0x800713D0: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x800713D4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800713D8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x800713DC: sllv        $s6, $v1, $v0
    ctx->r22 = S32(ctx->r3 << (ctx->r2 & 31));
    // 0x800713E0: addiu       $v0, $t1, -0x1
    ctx->r2 = ADD32(ctx->r9, -0X1);
    // 0x800713E4: srav        $a0, $a0, $v0
    ctx->r4 = S32(SIGNED(ctx->r4) >> (ctx->r2 & 31));
    // 0x800713E8: sllv        $s7, $v1, $v0
    ctx->r23 = S32(ctx->r3 << (ctx->r2 & 31));
    // 0x800713EC: beq         $s3, $zero, L_800714DC
    if (ctx->r19 == 0) {
        // 0x800713F0: sw          $a0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r4;
            goto L_800714DC;
    }
    // 0x800713F0: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    // 0x800713F4: beq         $s6, $zero, L_800714DC
    if (ctx->r22 == 0) {
        // 0x800713F8: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_800714DC;
    }
    // 0x800713F8: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x800713FC: xori        $v0, $s6, 0x1
    ctx->r2 = ctx->r22 ^ 0X1;
    // 0x80071400: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80071404: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80071408: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x8007140C: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
L_80071410:
    // 0x80071410: jal         0x8004F144
    // 0x80071414: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x80071414: nop

    after_3:
    // 0x80071418: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8007141C: beq         $s1, $zero, L_800714C8
    if (ctx->r17 == 0) {
        // 0x80071420: addiu       $t1, $zero, 0x5
        ctx->r9 = ADD32(0, 0X5);
            goto L_800714C8;
    }
    // 0x80071420: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x80071424: sb          $t1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r9;
    // 0x80071428: addiu       $t1, $zero, 0x80
    ctx->r9 = ADD32(0, 0X80);
    // 0x8007142C: sb          $t1, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r9;
    // 0x80071430: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80071434: jal         0x800A3450
    // 0x80071438: sb          $t1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r9;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80071438: sb          $t1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r9;
    after_4:
    // 0x8007143C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80071440: andi        $v0, $s0, 0x1F
    ctx->r2 = ctx->r16 & 0X1F;
    // 0x80071444: lw          $t1, 0x4C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4C);
    // 0x80071448: subu        $s2, $s5, $v0
    ctx->r18 = SUB32(ctx->r21, ctx->r2);
    // 0x8007144C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80071450: jal         0x80032498
    // 0x80071454: and         $s4, $s4, $t1
    ctx->r20 = ctx->r20 & ctx->r9;
    func_80032498_D898(rdram, ctx);
        goto after_5;
    // 0x80071454: and         $s4, $s4, $t1
    ctx->r20 = ctx->r20 & ctx->r9;
    after_5:
    // 0x80071458: nop

    // 0x8007145C: mult        $v0, $s4
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80071460: mflo        $v0
    ctx->r2 = lo;
    // 0x80071464: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x80071468: srl         $v1, $s0, 7
    ctx->r3 = S32(U32(ctx->r16) >> 7);
    // 0x8007146C: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x80071470: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80071474: addiu       $a1, $a1, -0x100
    ctx->r5 = ADD32(ctx->r5, -0X100);
    // 0x80071478: srl         $v1, $fp, 1
    ctx->r3 = S32(U32(ctx->r30) >> 1);
    // 0x8007147C: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80071480: mflo        $a1
    ctx->r5 = lo;
    // 0x80071484: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x80071488: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x8007148C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80071490: sh          $v1, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r3;
    // 0x80071494: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x80071498: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8007149C: srl         $a1, $a1, 8
    ctx->r5 = S32(U32(ctx->r5) >> 8);
    // 0x800714A0: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x800714A4: jal         0x800324B4
    // 0x800714A8: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_6;
    // 0x800714A8: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    after_6:
    // 0x800714AC: nop

    // 0x800714B0: mult        $v0, $s4
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800714B4: mflo        $v0
    ctx->r2 = lo;
    // 0x800714B8: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x800714BC: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x800714C0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800714C4: sh          $v1, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r3;
L_800714C8:
    // 0x800714C8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x800714CC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800714D0: sltu        $v0, $s3, $s6
    ctx->r2 = ctx->r19 < ctx->r22 ? 1 : 0;
    // 0x800714D4: bne         $v0, $zero, L_80071410
    if (ctx->r2 != 0) {
        // 0x800714D8: addu        $s5, $s5, $t1
        ctx->r21 = ADD32(ctx->r21, ctx->r9);
            goto L_80071410;
    }
    // 0x800714D8: addu        $s5, $s5, $t1
    ctx->r21 = ADD32(ctx->r21, ctx->r9);
L_800714DC:
    // 0x800714DC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800714E0: beq         $t1, $zero, L_800715C8
    if (ctx->r9 == 0) {
        // 0x800714E4: nop
    
            goto L_800715C8;
    }
    // 0x800714E4: nop

    // 0x800714E8: beq         $s7, $zero, L_800715C8
    if (ctx->r23 == 0) {
        // 0x800714EC: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_800715C8;
    }
    // 0x800714EC: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x800714F0: xori        $v0, $s7, 0x1
    ctx->r2 = ctx->r23 ^ 0X1;
    // 0x800714F4: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x800714F8: negu        $s6, $v0
    ctx->r22 = SUB32(0, ctx->r2);
    // 0x800714FC: addu        $s5, $zero, $zero
    ctx->r21 = ADD32(0, 0);
L_80071500:
    // 0x80071500: jal         0x8004F144
    // 0x80071504: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_7;
    // 0x80071504: nop

    after_7:
    // 0x80071508: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8007150C: beq         $s1, $zero, L_800715B4
    if (ctx->r17 == 0) {
        // 0x80071510: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_800715B4;
    }
    // 0x80071510: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80071514: sb          $t1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r9;
    // 0x80071518: addiu       $t1, $zero, 0x83
    ctx->r9 = ADD32(0, 0X83);
    // 0x8007151C: sb          $t1, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r9;
    // 0x80071520: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80071524: jal         0x800A3450
    // 0x80071528: sb          $t1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r9;
    func_800A3450_7E850(rdram, ctx);
        goto after_8;
    // 0x80071528: sb          $t1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r9;
    after_8:
    // 0x8007152C: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80071530: andi        $v0, $s0, 0x1F
    ctx->r2 = ctx->r16 & 0X1F;
    // 0x80071534: subu        $s2, $s5, $v0
    ctx->r18 = SUB32(ctx->r21, ctx->r2);
    // 0x80071538: and         $s4, $s4, $s6
    ctx->r20 = ctx->r20 & ctx->r22;
    // 0x8007153C: jal         0x80032498
    // 0x80071540: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_80032498_D898(rdram, ctx);
        goto after_9;
    // 0x80071540: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_9:
    // 0x80071544: nop

    // 0x80071548: mult        $v0, $s4
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007154C: mflo        $v0
    ctx->r2 = lo;
    // 0x80071550: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x80071554: srl         $v1, $s0, 7
    ctx->r3 = S32(U32(ctx->r16) >> 7);
    // 0x80071558: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x8007155C: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80071560: addiu       $a1, $a1, -0x100
    ctx->r5 = ADD32(ctx->r5, -0X100);
    // 0x80071564: srl         $v1, $fp, 1
    ctx->r3 = S32(U32(ctx->r30) >> 1);
    // 0x80071568: mult        $a1, $v1
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8007156C: mflo        $a1
    ctx->r5 = lo;
    // 0x80071570: lhu         $v1, 0x10($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X10);
    // 0x80071574: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x80071578: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8007157C: sh          $v1, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r3;
    // 0x80071580: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x80071584: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80071588: srl         $a1, $a1, 8
    ctx->r5 = S32(U32(ctx->r5) >> 8);
    // 0x8007158C: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80071590: jal         0x800324B4
    // 0x80071594: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_10;
    // 0x80071594: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    after_10:
    // 0x80071598: nop

    // 0x8007159C: mult        $v0, $s4
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r20)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800715A0: mflo        $v0
    ctx->r2 = lo;
    // 0x800715A4: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x800715A8: srl         $v0, $v0, 12
    ctx->r2 = S32(U32(ctx->r2) >> 12);
    // 0x800715AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x800715B0: sh          $v1, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r3;
L_800715B4:
    // 0x800715B4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800715B8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x800715BC: sltu        $v0, $s3, $s7
    ctx->r2 = ctx->r19 < ctx->r23 ? 1 : 0;
    // 0x800715C0: bne         $v0, $zero, L_80071500
    if (ctx->r2 != 0) {
        // 0x800715C4: addu        $s5, $s5, $t1
        ctx->r21 = ADD32(ctx->r21, ctx->r9);
            goto L_80071500;
    }
    // 0x800715C4: addu        $s5, $s5, $t1
    ctx->r21 = ADD32(ctx->r21, ctx->r9);
L_800715C8:
    // 0x800715C8: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x800715CC: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x800715D0: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x800715D4: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x800715D8: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x800715DC: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x800715E0: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x800715E4: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x800715E8: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x800715EC: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x800715F0: jr          $ra
    // 0x800715F4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x800715F4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
;}
RECOMP_FUNC void func_80087394_62794(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80087394: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x80087398: addu        $t0, $a1, $zero
    ctx->r8 = ADD32(ctx->r5, 0);
    // 0x8008739C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x800873A0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x800873A4: bltz        $a0, L_800873E0
    if (SIGNED(ctx->r4) < 0) {
        // 0x800873A8: addu        $a3, $a2, $zero
        ctx->r7 = ADD32(ctx->r6, 0);
            goto L_800873E0;
    }
    // 0x800873A8: addu        $a3, $a2, $zero
    ctx->r7 = ADD32(ctx->r6, 0);
    // 0x800873AC: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x800873B0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800873B4: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x800873B8: slti        $v0, $v0, 0x141
    ctx->r2 = SIGNED(ctx->r2) < 0X141 ? 1 : 0;
    // 0x800873BC: beq         $v0, $zero, L_800873E4
    if (ctx->r2 == 0) {
        // 0x800873C0: sll         $v1, $v1, 16
        ctx->r3 = S32(ctx->r3 << 16);
            goto L_800873E4;
    }
    // 0x800873C0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x800873C4: addiu       $v0, $a1, -0xF0
    ctx->r2 = ADD32(ctx->r5, -0XF0);
    // 0x800873C8: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x800873CC: sltiu       $v0, $v0, 0x11
    ctx->r2 = ctx->r2 < 0X11 ? 1 : 0;
    // 0x800873D0: beq         $v0, $zero, L_800873E8
    if (ctx->r2 == 0) {
        // 0x800873D4: sra         $a0, $v1, 16
        ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
            goto L_800873E8;
    }
    // 0x800873D4: sra         $a0, $v1, 16
    ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
    // 0x800873D8: j           L_80087418
    // 0x800873DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80087418;
    // 0x800873DC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800873E0:
    // 0x800873E0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
L_800873E4:
    // 0x800873E4: sra         $a0, $v1, 16
    ctx->r4 = S32(SIGNED(ctx->r3) >> 16);
L_800873E8:
    // 0x800873E8: bltz        $a0, L_80087418
    if (SIGNED(ctx->r4) < 0) {
        // 0x800873EC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80087418;
    }
    // 0x800873EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800873F0: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    // 0x800873F4: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x800873F8: addu        $v1, $a0, $v1
    ctx->r3 = ADD32(ctx->r4, ctx->r3);
    // 0x800873FC: slti        $v1, $v1, 0x141
    ctx->r3 = SIGNED(ctx->r3) < 0X141 ? 1 : 0;
    // 0x80087400: beq         $v1, $zero, L_80087418
    if (ctx->r3 == 0) {
        // 0x80087404: addiu       $v1, $t0, -0x1F0
        ctx->r3 = ADD32(ctx->r8, -0X1F0);
            goto L_80087418;
    }
    // 0x80087404: addiu       $v1, $t0, -0x1F0
    ctx->r3 = ADD32(ctx->r8, -0X1F0);
    // 0x80087408: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8008740C: sltiu       $v1, $v1, 0x11
    ctx->r3 = ctx->r3 < 0X11 ? 1 : 0;
    // 0x80087410: bnel        $v1, $zero, L_80087418
    if (ctx->r3 != 0) {
        // 0x80087414: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80087418;
    }
    goto skip_0;
    // 0x80087414: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
L_80087418:
    // 0x80087418: jr          $ra
    // 0x8008741C: nop

    TRACE_RETURN()
    return;
    // 0x8008741C: nop

;}
RECOMP_FUNC void func_800387FC_13BFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800387FC: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80038800: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80038804: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80038808: sw          $v0, -0x55F0($at)
    MEM_W(-0X55F0, ctx->r1) = ctx->r2;
    // 0x8003880C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80038810: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80038814: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80038818: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8003881C: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80038820: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80038824: sw          $zero, -0x4DE0($at)
    MEM_W(-0X4DE0, ctx->r1) = 0;
    // 0x80038828: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8003882C: sw          $zero, -0x4DDC($at)
    MEM_W(-0X4DDC, ctx->r1) = 0;
    // 0x80038830: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80038834: sw          $v0, -0x4DD8($at)
    MEM_W(-0X4DD8, ctx->r1) = ctx->r2;
    // 0x80038838: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8003883C: jal         0x80032FC0
    // 0x80038840: sw          $v0, -0x4DD4($at)
    MEM_W(-0X4DD4, ctx->r1) = ctx->r2;
    func_80032FC0_E3C0(rdram, ctx);
        goto after_0;
    // 0x80038840: sw          $v0, -0x4DD4($at)
    MEM_W(-0X4DD4, ctx->r1) = ctx->r2;
    after_0:
    // 0x80038844: jal         0x800281C8
    // 0x80038848: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    func_800281C8_35C8(rdram, ctx);
        goto after_1;
    // 0x80038848: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    after_1:
    // 0x8003884C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80038850: beq         $s2, $zero, L_8003891C
    if (ctx->r18 == 0) {
        // 0x80038854: addiu       $s1, $sp, 0x40
        ctx->r17 = ADD32(ctx->r29, 0X40);
            goto L_8003891C;
    }
    // 0x80038854: addiu       $s1, $sp, 0x40
    ctx->r17 = ADD32(ctx->r29, 0X40);
    // 0x80038858: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8003885C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80038860: addiu       $a1, $a1, 0x1E04
    ctx->r5 = ADD32(ctx->r5, 0X1E04);
    // 0x80038864: jal         0x8009A3B4
    // 0x80038868: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80038868: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8003886C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80038870: jal         0x8009A2B0
    // 0x80038874: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    bzero_recomp(rdram, ctx);
        goto after_3;
    // 0x80038874: addiu       $a1, $zero, 0x48
    ctx->r5 = ADD32(0, 0X48);
    after_3:
    // 0x80038878: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x8003887C: addiu       $s0, $s0, 0x4760
    ctx->r16 = ADD32(ctx->r16, 0X4760);
    // 0x80038880: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80038884: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80038888: jal         0x800308E8
    // 0x8003888C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_800308E8_BCE8(rdram, ctx);
        goto after_4;
    // 0x8003888C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x80038890: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x80038894: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80038898: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8003889C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x800388A0: lui         $t0, 0x801D
    ctx->r8 = S32(0X801D << 16);
    // 0x800388A4: lw          $t0, 0x4774($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X4774);
    // 0x800388A8: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x800388AC: lui         $t1, 0x801D
    ctx->r9 = S32(0X801D << 16);
    // 0x800388B0: lw          $t1, 0x4778($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4778);
    // 0x800388B4: lw          $a3, 0x38($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X38);
    // 0x800388B8: lui         $t2, 0x801D
    ctx->r10 = S32(0X801D << 16);
    // 0x800388BC: lw          $t2, 0x477C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X477C);
    // 0x800388C0: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    // 0x800388C4: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x800388C8: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x800388CC: addu        $a3, $a3, $t2
    ctx->r7 = ADD32(ctx->r7, ctx->r10);
    // 0x800388D0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800388D4: sw          $v1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r3;
    // 0x800388D8: jal         0x8009A3B4
    // 0x800388DC: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x800388DC: sw          $a3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r7;
    after_5:
    // 0x800388E0: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x800388E4: lw          $v1, 0x34($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X34);
    // 0x800388E8: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x800388EC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800388F0: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x800388F4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800388F8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x800388FC: jal         0x8002C5A4
    // 0x80038900: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_8002C5A4_79A4(rdram, ctx);
        goto after_6;
    // 0x80038900: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_6:
    // 0x80038904: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80038908: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8003890C: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x80038910: addiu       $a2, $a2, -0xD58
    ctx->r6 = ADD32(ctx->r6, -0XD58);
    // 0x80038914: jal         0x800283A8
    // 0x80038918: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    func_800283A8_37A8(rdram, ctx);
        goto after_7;
    // 0x80038918: addu        $a3, $s2, $zero
    ctx->r7 = ADD32(ctx->r18, 0);
    after_7:
L_8003891C:
    // 0x8003891C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80038920: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80038924: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80038928: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8003892C: jr          $ra
    // 0x80038930: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80038930: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8005D4CC_388CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005D4CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005D4D0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8005D4D4: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x8005D4D8: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x8005D4DC: beq         $v0, $zero, L_8005D4EC
    if (ctx->r2 == 0) {
        // 0x8005D4E0: sb          $v0, 0x3($a0)
        MEM_B(0X3, ctx->r4) = ctx->r2;
            goto L_8005D4EC;
    }
    // 0x8005D4E0: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x8005D4E4: j           L_8005D4F0
    // 0x8005D4E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8005D4F0;
    // 0x8005D4E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8005D4EC:
    // 0x8005D4EC: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8005D4F0:
    // 0x8005D4F0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005D4F4: sb          $v0, -0x3BC8($at)
    MEM_B(-0X3BC8, ctx->r1) = ctx->r2;
    // 0x8005D4F8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005D4FC: sb          $zero, -0x3BC7($at)
    MEM_B(-0X3BC7, ctx->r1) = 0;
    // 0x8005D500: addiu       $v0, $zero, -0x80
    ctx->r2 = ADD32(0, -0X80);
    // 0x8005D504: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005D508: sb          $v0, -0x3B96($at)
    MEM_B(-0X3B96, ctx->r1) = ctx->r2;
    // 0x8005D50C: lui         $a0, 0x8004
    ctx->r4 = S32(0X8004 << 16);
    // 0x8005D510: jal         0x800292E8
    // 0x8005D514: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    func_800292E8_46E8(rdram, ctx);
        goto after_0;
    // 0x8005D514: addiu       $a0, $a0, -0x1E48
    ctx->r4 = ADD32(ctx->r4, -0X1E48);
    after_0:
    // 0x8005D518: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8005D51C: jr          $ra
    // 0x8005D520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005D520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006577C_40B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006577C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80065780: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80065784: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x80065788: addiu       $a3, $a3, -0x3B94
    ctx->r7 = ADD32(ctx->r7, -0X3B94);
L_8006578C:
    // 0x8006578C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80065790: lbu         $v1, -0x11D0($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X11D0);
    // 0x80065794: lw          $a0, 0x6C($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X6C);
    // 0x80065798: sll         $v0, $a1, 1
    ctx->r2 = S32(ctx->r5 << 1);
    // 0x8006579C: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x800657A0: addu        $v1, $v1, $a3
    ctx->r3 = ADD32(ctx->r3, ctx->r7);
    // 0x800657A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800657A8: lhu         $v0, 0x4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4);
    // 0x800657AC: addu        $a0, $a1, $a0
    ctx->r4 = ADD32(ctx->r5, ctx->r4);
    // 0x800657B0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x800657B4: sb          $v0, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r2;
    // 0x800657B8: sltiu       $v0, $a1, 0x3
    ctx->r2 = ctx->r5 < 0X3 ? 1 : 0;
    // 0x800657BC: bne         $v0, $zero, L_8006578C
    if (ctx->r2 != 0) {
        // 0x800657C0: nop
    
            goto L_8006578C;
    }
    // 0x800657C0: nop

    // 0x800657C4: lw          $v0, 0x6C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X6C);
    // 0x800657C8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800657CC: sw          $v0, 0x6C($a2)
    MEM_W(0X6C, ctx->r6) = ctx->r2;
    // 0x800657D0: jr          $ra
    // 0x800657D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x800657D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_800596B8_34AB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800596B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800596BC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800596C0: jal         0x80059710
    // 0x800596C4: nop

    func_80059710_34B10(rdram, ctx);
        goto after_0;
    // 0x800596C4: nop

    after_0:
    // 0x800596C8: jal         0x8005974C
    // 0x800596CC: nop

    func_8005974C_34B4C(rdram, ctx);
        goto after_1;
    // 0x800596CC: nop

    after_1:
    // 0x800596D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800596D4: jr          $ra
    // 0x800596D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800596D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8008B38C_6678C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B38C: bne         $a0, $zero, L_8008B3A8
    if (ctx->r4 != 0) {
        // 0x8008B390: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_8008B3A8;
    }
    // 0x8008B390: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008B394: j           L_8008B3FC
    // 0x8008B398: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8008B3FC;
    // 0x8008B398: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8008B39C:
    // 0x8008B39C: lw          $v0, 0x20($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X20);
    // 0x8008B3A0: j           L_8008B3FC
    // 0x8008B3A4: nop

        goto L_8008B3FC;
    // 0x8008B3A4: nop

L_8008B3A8:
    // 0x8008B3A8: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008B3AC: lw          $v1, 0x4F84($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4F84);
    // 0x8008B3B0: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008B3B4: lw          $v0, 0x4F8C($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F8C);
    // 0x8008B3B8: blez        $v1, L_8008B3F8
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8008B3BC: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8008B3F8;
    }
    // 0x8008B3BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008B3C0: addu        $a2, $v1, $zero
    ctx->r6 = ADD32(ctx->r3, 0);
    // 0x8008B3C4: addiu       $v1, $v0, 0x78
    ctx->r3 = ADD32(ctx->r2, 0X78);
L_8008B3C8:
    // 0x8008B3C8: lw          $v0, -0x34($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X34);
    // 0x8008B3CC: bnel        $v0, $a0, L_8008B3EC
    if (ctx->r2 != ctx->r4) {
        // 0x8008B3D0: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8008B3EC;
    }
    goto skip_0;
    // 0x8008B3D0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    skip_0:
    // 0x8008B3D4: lw          $v0, -0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X4);
    // 0x8008B3D8: bne         $v0, $zero, L_8008B39C
    if (ctx->r2 != 0) {
        // 0x8008B3DC: nop
    
            goto L_8008B39C;
    }
    // 0x8008B3DC: nop

    // 0x8008B3E0: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8008B3E4: j           L_8008B3FC
    // 0x8008B3E8: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
        goto L_8008B3FC;
    // 0x8008B3E8: lw          $v0, 0x14($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X14);
L_8008B3EC:
    // 0x8008B3EC: slt         $v0, $a1, $a2
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8008B3F0: bne         $v0, $zero, L_8008B3C8
    if (ctx->r2 != 0) {
        // 0x8008B3F4: addiu       $v1, $v1, 0x13C
        ctx->r3 = ADD32(ctx->r3, 0X13C);
            goto L_8008B3C8;
    }
    // 0x8008B3F4: addiu       $v1, $v1, 0x13C
    ctx->r3 = ADD32(ctx->r3, 0X13C);
L_8008B3F8:
    // 0x8008B3F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8008B3FC:
    // 0x8008B3FC: jr          $ra
    // 0x8008B400: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8008B400: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80037D70_13170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80037D70: jr          $ra
    // 0x80037D74: nop

    TRACE_RETURN()
    return;
    // 0x80037D74: nop

    // 0x80037D78: nop

    // 0x80037D7C: nop

;}
RECOMP_FUNC void func_800290C8_44C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800290C8: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x800290CC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x800290D0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800290D4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800290D8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800290DC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x800290E0: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800290E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800290E8: sb          $zero, -0x46CF($at)
    MEM_B(-0X46CF, ctx->r1) = 0;
    // 0x800290EC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800290F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800290F4: sb          $zero, -0x46D0($at)
    MEM_B(-0X46D0, ctx->r1) = 0;
    // 0x800290F8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x800290FC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80029100: sh          $v1, -0x46CE($at)
    MEM_H(-0X46CE, ctx->r1) = ctx->r3;
    // 0x80029104: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80029108: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8002910C: jr          $ra
    // 0x80029110: sw          $a1, -0x4510($at)
    MEM_W(-0X4510, ctx->r1) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80029110: sw          $a1, -0x4510($at)
    MEM_W(-0X4510, ctx->r1) = ctx->r5;
;}
