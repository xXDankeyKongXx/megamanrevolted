#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80039FBC_153BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80039FBC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80039FC0: lw          $v1, 0x55A0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X55A0);
    // 0x80039FC4: sltu        $v1, $a0, $v1
    ctx->r3 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x80039FC8: bne         $v1, $zero, L_80039FD4
    if (ctx->r3 != 0) {
        // 0x80039FCC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80039FD4;
    }
    // 0x80039FCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80039FD0: lw          $v0, 0x18($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X18);
L_80039FD4:
    // 0x80039FD4: jr          $ra
    // 0x80039FD8: nop

    TRACE_RETURN()
    return;
    // 0x80039FD8: nop

    // 0x80039FDC: nop

;}
RECOMP_FUNC void func_800942A4_6F6A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800942A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800942A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800942AC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800942B0: lw          $s0, 0xC($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XC);
    // 0x800942B4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x800942B8: jal         0x800996C0
    // 0x800942BC: addiu       $a0, $a0, 0x58F8
    ctx->r4 = ADD32(ctx->r4, 0X58F8);
    osContStartReadData_recomp(rdram, ctx);
        goto after_0;
    // 0x800942BC: addiu       $a0, $a0, 0x58F8
    ctx->r4 = ADD32(ctx->r4, 0X58F8);
    after_0:
    // 0x800942C0: bne         $v0, $zero, L_8009430C
    if (ctx->r2 != 0) {
        // 0x800942C4: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8009430C;
    }
    // 0x800942C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800942C8: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x800942CC: addiu       $a0, $a0, 0x58F8
    ctx->r4 = ADD32(ctx->r4, 0X58F8);
    // 0x800942D0: jal         0x8009A5E0
    // 0x800942D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_1;
    // 0x800942D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x800942D8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x800942DC: addiu       $a0, $a0, -0x2658
    ctx->r4 = ADD32(ctx->r4, -0X2658);
    // 0x800942E0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800942E4: jal         0x8009A710
    // 0x800942E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x800942E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x800942EC: jal         0x80099748
    // 0x800942F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    osContGetReadData_recomp(rdram, ctx);
        goto after_3;
    // 0x800942F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x800942F4: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x800942F8: addiu       $a0, $a0, -0x2658
    ctx->r4 = ADD32(ctx->r4, -0X2658);
    // 0x800942FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80094300: jal         0x8009A5E0
    // 0x80094304: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x80094304: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80094308: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8009430C:
    // 0x8009430C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80094310: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80094314: jr          $ra
    // 0x80094318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80094318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80027334_2734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80027334: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80027338: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002733C: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x80027340: subu        $a1, $a1, $a0
    ctx->r5 = SUB32(ctx->r5, ctx->r4);
    // 0x80027344: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80027348: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8002734C: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x80027350: and         $a1, $a1, $v0
    ctx->r5 = ctx->r5 & ctx->r2;
    // 0x80027354: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x80027358: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8002735C: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80027360: addiu       $a1, $a1, 0x4F70
    ctx->r5 = ADD32(ctx->r5, 0X4F70);
    // 0x80027364: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80027368: lui         $a2, 0x800D
    ctx->r6 = S32(0X800D << 16);
    // 0x8002736C: addiu       $a2, $a2, 0x3A18
    ctx->r6 = ADD32(ctx->r6, 0X3A18);
    // 0x80027370: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80027374: jal         0x80026C80
    // 0x80027378: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_80026C80_2080(rdram, ctx);
        goto after_0;
    // 0x80027378: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x8002737C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80027380: jr          $ra
    // 0x80027384: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80027384: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8003077C_BB7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003077C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80030780: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80030784: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80030788: addu        $t4, $a1, $zero
    ctx->r12 = ADD32(ctx->r5, 0);
    // 0x8003078C: addu        $t3, $zero, $zero
    ctx->r11 = ADD32(0, 0);
    // 0x80030790: addu        $t1, $s0, $zero
    ctx->r9 = ADD32(ctx->r16, 0);
    // 0x80030794: addiu       $t2, $sp, 0x10
    ctx->r10 = ADD32(ctx->r29, 0X10);
    // 0x80030798: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
L_8003079C:
    // 0x8003079C: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x800307A0: addu        $a3, $t2, $zero
    ctx->r7 = ADD32(ctx->r10, 0);
    // 0x800307A4: addu        $a2, $t4, $zero
    ctx->r6 = ADD32(ctx->r12, 0);
L_800307A8:
    // 0x800307A8: lh          $v1, 0x0($t1)
    ctx->r3 = MEM_H(ctx->r9, 0X0);
    // 0x800307AC: lh          $v0, 0x0($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X0);
    // 0x800307B0: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800307B4: mflo        $v1
    ctx->r3 = lo;
    // 0x800307B8: lh          $a1, 0x2($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X2);
    // 0x800307BC: lh          $v0, 0x6($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X6);
    // 0x800307C0: mult        $a1, $v0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800307C4: mflo        $a1
    ctx->r5 = lo;
    // 0x800307C8: lh          $a0, 0x4($t1)
    ctx->r4 = MEM_H(ctx->r9, 0X4);
    // 0x800307CC: lh          $v0, 0xC($a2)
    ctx->r2 = MEM_H(ctx->r6, 0XC);
    // 0x800307D0: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800307D4: mflo        $a0
    ctx->r4 = lo;
    // 0x800307D8: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x800307DC: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x800307E0: slti        $v0, $t0, 0x3
    ctx->r2 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x800307E4: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x800307E8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x800307EC: sra         $v1, $v1, 12
    ctx->r3 = S32(SIGNED(ctx->r3) >> 12);
    // 0x800307F0: sh          $v1, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r3;
    // 0x800307F4: bne         $v0, $zero, L_800307A8
    if (ctx->r2 != 0) {
        // 0x800307F8: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_800307A8;
    }
    // 0x800307F8: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x800307FC: addiu       $t1, $t1, 0x6
    ctx->r9 = ADD32(ctx->r9, 0X6);
    // 0x80030800: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x80030804: slti        $v0, $t3, 0x3
    ctx->r2 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x80030808: bne         $v0, $zero, L_8003079C
    if (ctx->r2 != 0) {
        // 0x8003080C: addiu       $t2, $t2, 0x6
        ctx->r10 = ADD32(ctx->r10, 0X6);
            goto L_8003079C;
    }
    // 0x8003080C: addiu       $t2, $t2, 0x6
    ctx->r10 = ADD32(ctx->r10, 0X6);
    // 0x80030810: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80030814: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80030818: jal         0x8009A3B4
    // 0x8003081C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8003081C: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_0:
    // 0x80030820: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x80030824: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80030828: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8003082C: jr          $ra
    // 0x80030830: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80030830: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800869D0_61DD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800869D0: addiu       $sp, $sp, -0xD8
    ctx->r29 = ADD32(ctx->r29, -0XD8);
    // 0x800869D4: sw          $a0, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r4;
    // 0x800869D8: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x800869DC: lh          $a0, -0x3420($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3420);
    // 0x800869E0: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800869E4: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x800869E8: sw          $ra, 0xD4($sp)
    MEM_W(0XD4, ctx->r29) = ctx->r31;
    // 0x800869EC: sw          $fp, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->r30;
    // 0x800869F0: sw          $s7, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r23;
    // 0x800869F4: sw          $s6, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r22;
    // 0x800869F8: sw          $s5, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r21;
    // 0x800869FC: sw          $s4, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r20;
    // 0x80086A00: sw          $s3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r19;
    // 0x80086A04: sw          $s2, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r18;
    // 0x80086A08: sw          $s1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r17;
    // 0x80086A0C: sw          $s0, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r16;
    // 0x80086A10: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    // 0x80086A14: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80086A18: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80086A1C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086A20: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x80086A24: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80086A28: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80086A2C: addiu       $v0, $v0, -0x1660
    ctx->r2 = ADD32(ctx->r2, -0X1660);
    // 0x80086A30: jal         0x800281C8
    // 0x80086A34: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    func_800281C8_35C8(rdram, ctx);
        goto after_0;
    // 0x80086A34: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    after_0:
    // 0x80086A38: beq         $v0, $zero, L_80086F34
    if (ctx->r2 == 0) {
        // 0x80086A3C: sw          $v0, 0x7C($sp)
        MEM_W(0X7C, ctx->r29) = ctx->r2;
            goto L_80086F34;
    }
    // 0x80086A3C: sw          $v0, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r2;
    // 0x80086A40: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x80086A44: lh          $t1, 0x4($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4);
    // 0x80086A48: sw          $t1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r9;
    // 0x80086A4C: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x80086A50: lh          $v0, 0x6($t1)
    ctx->r2 = MEM_H(ctx->r9, 0X6);
    // 0x80086A54: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80086A58: slt         $v0, $t1, $v0
    ctx->r2 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80086A5C: beq         $v0, $zero, L_80086F34
    if (ctx->r2 == 0) {
        // 0x80086A60: addiu       $s1, $zero, -0x1
        ctx->r17 = ADD32(0, -0X1);
            goto L_80086F34;
    }
    // 0x80086A60: addiu       $s1, $zero, -0x1
    ctx->r17 = ADD32(0, -0X1);
    // 0x80086A64: addiu       $t1, $sp, 0x10
    ctx->r9 = ADD32(ctx->r29, 0X10);
    // 0x80086A68: sw          $t1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r9;
    // 0x80086A6C: addiu       $t1, $sp, 0x38
    ctx->r9 = ADD32(ctx->r29, 0X38);
    // 0x80086A70: sw          $t1, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r9;
L_80086A74:
    // 0x80086A74: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x80086A78: lh          $s6, 0x0($t1)
    ctx->r22 = MEM_H(ctx->r9, 0X0);
    // 0x80086A7C: lh          $v0, 0x2($t1)
    ctx->r2 = MEM_H(ctx->r9, 0X2);
    // 0x80086A80: slt         $v0, $s6, $v0
    ctx->r2 = SIGNED(ctx->r22) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80086A84: beq         $v0, $zero, L_80086F1C
    if (ctx->r2 == 0) {
        // 0x80086A88: nop
    
            goto L_80086F1C;
    }
    // 0x80086A88: nop

    // 0x80086A8C: addiu       $t1, $sp, 0x18
    ctx->r9 = ADD32(ctx->r29, 0X18);
    // 0x80086A90: sw          $t1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r9;
    // 0x80086A94: sll         $s7, $s6, 2
    ctx->r23 = S32(ctx->r22 << 2);
L_80086A98:
    // 0x80086A98: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80086A9C: sll         $v0, $t1, 5
    ctx->r2 = S32(ctx->r9 << 5);
    // 0x80086AA0: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x80086AA4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80086AA8: lui         $t1, 0x8018
    ctx->r9 = S32(0X8018 << 16);
    // 0x80086AAC: addiu       $t1, $t1, -0x3C20
    ctx->r9 = ADD32(ctx->r9, -0X3C20);
    // 0x80086AB0: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x80086AB4: lhu         $a0, 0x0($v0)
    ctx->r4 = MEM_HU(ctx->r2, 0X0);
    // 0x80086AB8: andi        $a1, $a0, 0xFFFF
    ctx->r5 = ctx->r4 & 0XFFFF;
    // 0x80086ABC: beq         $a1, $zero, L_80086F00
    if (ctx->r5 == 0) {
        // 0x80086AC0: nop
    
            goto L_80086F00;
    }
    // 0x80086AC0: nop

    // 0x80086AC4: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80086AC8: sll         $v1, $t1, 2
    ctx->r3 = S32(ctx->r9 << 2);
    // 0x80086ACC: bltzl       $v1, L_80086AD4
    if (SIGNED(ctx->r3) < 0) {
        // 0x80086AD0: addiu       $v1, $v1, 0x3
        ctx->r3 = ADD32(ctx->r3, 0X3);
            goto L_80086AD4;
    }
    goto skip_0;
    // 0x80086AD0: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    skip_0:
L_80086AD4:
    // 0x80086AD4: addu        $v0, $s7, $zero
    ctx->r2 = ADD32(ctx->r23, 0);
    // 0x80086AD8: bgez        $s7, L_80086AE4
    if (SIGNED(ctx->r23) >= 0) {
        // 0x80086ADC: sra         $v1, $v1, 2
        ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
            goto L_80086AE4;
    }
    // 0x80086ADC: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x80086AE0: addiu       $v0, $s7, 0x3
    ctx->r2 = ADD32(ctx->r23, 0X3);
L_80086AE4:
    // 0x80086AE4: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x80086AE8: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80086AEC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80086AF0: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80086AF4: lui         $t1, 0x8018
    ctx->r9 = S32(0X8018 << 16);
    // 0x80086AF8: addiu       $t1, $t1, -0x3C20
    ctx->r9 = ADD32(ctx->r9, -0X3C20);
    // 0x80086AFC: addu        $v1, $v1, $t1
    ctx->r3 = ADD32(ctx->r3, ctx->r9);
    // 0x80086B00: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80086B04: beq         $v0, $zero, L_80086F00
    if (ctx->r2 == 0) {
        // 0x80086B08: andi        $fp, $a0, 0xFF
        ctx->r30 = ctx->r4 & 0XFF;
            goto L_80086F00;
    }
    // 0x80086B08: andi        $fp, $a0, 0xFF
    ctx->r30 = ctx->r4 & 0XFF;
    // 0x80086B0C: srl         $v0, $a1, 13
    ctx->r2 = S32(U32(ctx->r5) >> 13);
    // 0x80086B10: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80086B14: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x80086B18: andi        $v0, $a0, 0x1F00
    ctx->r2 = ctx->r4 & 0X1F00;
    // 0x80086B1C: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80086B20: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80086B24: sll         $v1, $fp, 3
    ctx->r3 = S32(ctx->r30 << 3);
    // 0x80086B28: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
    // 0x80086B2C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80086B30: addiu       $v0, $v0, 0x46B8
    ctx->r2 = ADD32(ctx->r2, 0X46B8);
    // 0x80086B34: beq         $s1, $fp, L_80086DFC
    if (ctx->r17 == ctx->r30) {
        // 0x80086B38: addu        $s0, $v1, $v0
        ctx->r16 = ADD32(ctx->r3, ctx->r2);
            goto L_80086DFC;
    }
    // 0x80086B38: addu        $s0, $v1, $v0
    ctx->r16 = ADD32(ctx->r3, ctx->r2);
    // 0x80086B3C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80086B40: lw          $v0, -0x6F10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F10);
    // 0x80086B44: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x80086B48: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x80086B4C: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80086B50: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80086B54: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80086B58: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80086B5C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086B60: andi        $a0, $a1, 0x3F
    ctx->r4 = ctx->r5 & 0X3F;
    // 0x80086B64: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    // 0x80086B68: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x80086B6C: jal         0x80087248
    // 0x80086B70: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_80087248_62648(rdram, ctx);
        goto after_1;
    // 0x80086B70: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_1:
    // 0x80086B74: lui         $a1, 0xF500
    ctx->r5 = S32(0XF500 << 16);
    // 0x80086B78: ori         $a1, $a1, 0x100
    ctx->r5 = ctx->r5 | 0X100;
    // 0x80086B7C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80086B80: lw          $a0, -0x6F10($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X6F10);
    // 0x80086B84: lui         $a2, 0x703
    ctx->r6 = S32(0X703 << 16);
    // 0x80086B88: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x80086B8C: addiu       $v1, $a0, 0x8
    ctx->r3 = ADD32(ctx->r4, 0X8);
    // 0x80086B90: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80086B94: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x80086B98: lui         $v1, 0xFD10
    ctx->r3 = S32(0XFD10 << 16);
    // 0x80086B9C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x80086BA0: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x80086BA4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80086BA8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086BAC: lui         $v0, 0xE800
    ctx->r2 = S32(0XE800 << 16);
    // 0x80086BB0: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    // 0x80086BB4: addiu       $v0, $a0, 0x18
    ctx->r2 = ADD32(ctx->r4, 0X18);
    // 0x80086BB8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80086BBC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086BC0: lui         $v0, 0x700
    ctx->r2 = S32(0X700 << 16);
    // 0x80086BC4: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x80086BC8: addiu       $v0, $a0, 0x20
    ctx->r2 = ADD32(ctx->r4, 0X20);
    // 0x80086BCC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80086BD0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086BD4: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x80086BD8: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x80086BDC: addiu       $v0, $a0, 0x28
    ctx->r2 = ADD32(ctx->r4, 0X28);
    // 0x80086BE0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80086BE4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086BE8: lui         $v0, 0xF000
    ctx->r2 = S32(0XF000 << 16);
    // 0x80086BEC: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x80086BF0: addiu       $v0, $a0, 0x30
    ctx->r2 = ADD32(ctx->r4, 0X30);
    // 0x80086BF4: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x80086BF8: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x80086BFC: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x80086C00: sw          $a1, 0x10($a0)
    MEM_W(0X10, ctx->r4) = ctx->r5;
    // 0x80086C04: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x80086C08: sw          $a2, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r6;
    // 0x80086C0C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80086C10: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086C14: sw          $t1, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r9;
    // 0x80086C18: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x80086C1C: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80086C20: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80086C24: sh          $v0, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r2;
    // 0x80086C28: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80086C2C: andi        $v0, $v0, 0x38
    ctx->r2 = ctx->r2 & 0X38;
    // 0x80086C30: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x80086C34: sh          $v0, 0x60($sp)
    MEM_H(0X60, ctx->r29) = ctx->r2;
    // 0x80086C38: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80086C3C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80086C40: sh          $v0, 0x5A($sp)
    MEM_H(0X5A, ctx->r29) = ctx->r2;
    // 0x80086C44: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80086C48: andi        $v0, $v0, 0x38
    ctx->r2 = ctx->r2 & 0X38;
    // 0x80086C4C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x80086C50: sh          $v0, 0x62($sp)
    MEM_H(0X62, ctx->r29) = ctx->r2;
    // 0x80086C54: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80086C58: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80086C5C: sh          $v0, 0x5C($sp)
    MEM_H(0X5C, ctx->r29) = ctx->r2;
    // 0x80086C60: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x80086C64: andi        $v0, $v0, 0x38
    ctx->r2 = ctx->r2 & 0X38;
    // 0x80086C68: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x80086C6C: sh          $v0, 0x64($sp)
    MEM_H(0X64, ctx->r29) = ctx->r2;
    // 0x80086C70: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
    // 0x80086C74: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80086C78: sh          $v0, 0x5E($sp)
    MEM_H(0X5E, ctx->r29) = ctx->r2;
    // 0x80086C7C: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
    // 0x80086C80: addiu       $a0, $zero, 0x400
    ctx->r4 = ADD32(0, 0X400);
    // 0x80086C84: andi        $v0, $v0, 0x38
    ctx->r2 = ctx->r2 & 0X38;
    // 0x80086C88: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x80086C8C: jal         0x800281C8
    // 0x80086C90: sh          $v0, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r2;
    func_800281C8_35C8(rdram, ctx);
        goto after_2;
    // 0x80086C90: sh          $v0, 0x66($sp)
    MEM_H(0X66, ctx->r29) = ctx->r2;
    after_2:
    // 0x80086C94: addu        $s5, $v0, $zero
    ctx->r21 = ADD32(ctx->r2, 0);
    // 0x80086C98: beq         $s5, $zero, L_80086F40
    if (ctx->r21 == 0) {
        // 0x80086C9C: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_80086F40;
    }
    // 0x80086C9C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80086CA0: lw          $s4, 0xAC($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XAC);
L_80086CA4:
    // 0x80086CA4: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x80086CA8: lh          $v1, 0x50($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X50);
    // 0x80086CAC: lh          $v0, 0x48($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X48);
    // 0x80086CB0: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x80086CB4: lw          $a1, -0x15DC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X15DC);
    // 0x80086CB8: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80086CBC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80086CC0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80086CC4: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80086CC8: lw          $a0, 0x24($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X24);
    // 0x80086CCC: srl         $v0, $s2, 31
    ctx->r2 = S32(U32(ctx->r18) >> 31);
    // 0x80086CD0: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x80086CD4: sra         $v0, $v0, 1
    ctx->r2 = S32(SIGNED(ctx->r2) >> 1);
    // 0x80086CD8: sll         $v1, $v0, 8
    ctx->r3 = S32(ctx->r2 << 8);
    // 0x80086CDC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80086CE0: subu        $v0, $s2, $v0
    ctx->r2 = SUB32(ctx->r18, ctx->r2);
    // 0x80086CE4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80086CE8: addu        $s1, $v1, $v0
    ctx->r17 = ADD32(ctx->r3, ctx->r2);
    // 0x80086CEC: addu        $s0, $a1, $a0
    ctx->r16 = ADD32(ctx->r5, ctx->r4);
L_80086CF0:
    // 0x80086CF0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80086CF4: addu        $a1, $s5, $s1
    ctx->r5 = ADD32(ctx->r21, ctx->r17);
    // 0x80086CF8: jal         0x80099F90
    // 0x80086CFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    bcopy_recomp(rdram, ctx);
        goto after_3;
    // 0x80086CFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80086D00: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x80086D04: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80086D08: slti        $v0, $s3, 0x10
    ctx->r2 = SIGNED(ctx->r19) < 0X10 ? 1 : 0;
    // 0x80086D0C: bne         $v0, $zero, L_80086CF0
    if (ctx->r2 != 0) {
        // 0x80086D10: addiu       $s0, $s0, 0x8
        ctx->r16 = ADD32(ctx->r16, 0X8);
            goto L_80086CF0;
    }
    // 0x80086D10: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80086D14: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80086D18: slti        $v0, $s2, 0x4
    ctx->r2 = SIGNED(ctx->r18) < 0X4 ? 1 : 0;
    // 0x80086D1C: bne         $v0, $zero, L_80086CA4
    if (ctx->r2 != 0) {
        // 0x80086D20: addiu       $s4, $s4, 0x2
        ctx->r20 = ADD32(ctx->r20, 0X2);
            goto L_80086CA4;
    }
    // 0x80086D20: addiu       $s4, $s4, 0x2
    ctx->r20 = ADD32(ctx->r20, 0X2);
    // 0x80086D24: lui         $a0, 0x701
    ctx->r4 = S32(0X701 << 16);
    // 0x80086D28: ori         $a0, $a0, 0x4050
    ctx->r4 = ctx->r4 | 0X4050;
    // 0x80086D2C: lui         $a1, 0x70F
    ctx->r5 = S32(0X70F << 16);
    // 0x80086D30: ori         $a1, $a1, 0xF400
    ctx->r5 = ctx->r5 | 0XF400;
    // 0x80086D34: lui         $a3, 0xF540
    ctx->r7 = S32(0XF540 << 16);
    // 0x80086D38: ori         $a3, $a3, 0x400
    ctx->r7 = ctx->r7 | 0X400;
    // 0x80086D3C: lui         $a2, 0x1
    ctx->r6 = S32(0X1 << 16);
    // 0x80086D40: ori         $a2, $a2, 0x4050
    ctx->r6 = ctx->r6 | 0X4050;
    // 0x80086D44: lui         $t0, 0x7
    ctx->r8 = S32(0X7 << 16);
    // 0x80086D48: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80086D4C: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80086D50: ori         $t0, $t0, 0xC07C
    ctx->r8 = ctx->r8 | 0XC07C;
    // 0x80086D54: addu        $s1, $fp, $zero
    ctx->r17 = ADD32(ctx->r30, 0);
    // 0x80086D58: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80086D5C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80086D60: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086D64: lui         $v0, 0xFD50
    ctx->r2 = S32(0XFD50 << 16);
    // 0x80086D68: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80086D6C: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x80086D70: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80086D74: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086D78: lui         $v0, 0xF550
    ctx->r2 = S32(0XF550 << 16);
    // 0x80086D7C: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x80086D80: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x80086D84: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80086D88: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086D8C: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x80086D90: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x80086D94: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x80086D98: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80086D9C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086DA0: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x80086DA4: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x80086DA8: addiu       $v0, $v1, 0x28
    ctx->r2 = ADD32(ctx->r3, 0X28);
    // 0x80086DAC: lui         $t1, 0xE700
    ctx->r9 = S32(0XE700 << 16);
    // 0x80086DB0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80086DB4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086DB8: addiu       $v0, $v1, 0x30
    ctx->r2 = ADD32(ctx->r3, 0X30);
    // 0x80086DBC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80086DC0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086DC4: addiu       $v0, $v1, 0x38
    ctx->r2 = ADD32(ctx->r3, 0X38);
    // 0x80086DC8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80086DCC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086DD0: lui         $v0, 0xF200
    ctx->r2 = S32(0XF200 << 16);
    // 0x80086DD4: sw          $s5, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r21;
    // 0x80086DD8: sw          $a0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r4;
    // 0x80086DDC: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x80086DE0: sw          $a1, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r5;
    // 0x80086DE4: sw          $t1, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r9;
    // 0x80086DE8: sw          $zero, 0x24($v1)
    MEM_W(0X24, ctx->r3) = 0;
    // 0x80086DEC: sw          $a3, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r7;
    // 0x80086DF0: sw          $a2, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = ctx->r6;
    // 0x80086DF4: sw          $v0, 0x30($v1)
    MEM_W(0X30, ctx->r3) = ctx->r2;
    // 0x80086DF8: sw          $t0, 0x34($v1)
    MEM_W(0X34, ctx->r3) = ctx->r8;
L_80086DFC:
    // 0x80086DFC: jal         0x8002C654
    // 0x80086E00: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    func_8002C654_7A54(rdram, ctx);
        goto after_4;
    // 0x80086E00: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    after_4:
    // 0x80086E04: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x80086E08: beq         $t1, $zero, L_80086E1C
    if (ctx->r9 == 0) {
        // 0x80086E0C: addiu       $a0, $t1, 0x2
        ctx->r4 = ADD32(ctx->r9, 0X2);
            goto L_80086E1C;
    }
    // 0x80086E0C: addiu       $a0, $t1, 0x2
    ctx->r4 = ADD32(ctx->r9, 0X2);
    // 0x80086E10: lw          $a1, 0x9C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X9C);
    // 0x80086E14: jal         0x800319B4
    // 0x80086E18: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_5;
    // 0x80086E18: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_5:
L_80086E1C:
    // 0x80086E1C: lw          $a1, 0x9C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X9C);
    // 0x80086E20: lw          $a2, 0xA4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA4);
    // 0x80086E24: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x80086E28: jal         0x800306F0
    // 0x80086E2C: addiu       $a0, $a0, 0x4760
    ctx->r4 = ADD32(ctx->r4, 0X4760);
    func_800306F0_BAF0(rdram, ctx);
        goto after_6;
    // 0x80086E2C: addiu       $a0, $a0, 0x4760
    ctx->r4 = ADD32(ctx->r4, 0X4760);
    after_6:
    // 0x80086E30: lhu         $t1, 0x96($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X96);
    // 0x80086E34: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x80086E38: addiu       $a0, $a0, 0x4760
    ctx->r4 = ADD32(ctx->r4, 0X4760);
    // 0x80086E3C: sll         $v0, $s6, 11
    ctx->r2 = S32(ctx->r22 << 11);
    // 0x80086E40: sh          $t1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r9;
    // 0x80086E44: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80086E48: addiu       $v0, $v0, -0x7BFF
    ctx->r2 = ADD32(ctx->r2, -0X7BFF);
    // 0x80086E4C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80086E50: sw          $zero, 0x68($sp)
    MEM_W(0X68, ctx->r29) = 0;
    // 0x80086E54: sll         $v0, $t1, 11
    ctx->r2 = S32(ctx->r9 << 11);
    // 0x80086E58: addiu       $v0, $v0, -0x7BFF
    ctx->r2 = ADD32(ctx->r2, -0X7BFF);
    // 0x80086E5C: jal         0x80031E5C
    // 0x80086E60: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_80031E5C_D25C(rdram, ctx);
        goto after_7;
    // 0x80086E60: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_7:
    // 0x80086E64: lui         $a0, 0x801D
    ctx->r4 = S32(0X801D << 16);
    // 0x80086E68: jal         0x80031E94
    // 0x80086E6C: addiu       $a0, $a0, 0x4760
    ctx->r4 = ADD32(ctx->r4, 0X4760);
    func_80031E94_D294(rdram, ctx);
        goto after_8;
    // 0x80086E6C: addiu       $a0, $a0, 0x4760
    ctx->r4 = ADD32(ctx->r4, 0X4760);
    after_8:
    // 0x80086E70: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80086E74: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80086E78: jal         0x80032068
    // 0x80086E7C: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    func_80032068_D468(rdram, ctx);
        goto after_9;
    // 0x80086E7C: addiu       $a2, $sp, 0x68
    ctx->r6 = ADD32(ctx->r29, 0X68);
    after_9:
    // 0x80086E80: lw          $a0, 0xA4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA4);
    // 0x80086E84: jal         0x8002C5A4
    // 0x80086E88: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    func_8002C5A4_79A4(rdram, ctx);
        goto after_10;
    // 0x80086E88: lw          $a1, 0x7C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X7C);
    after_10:
    // 0x80086E8C: lui         $a0, 0xDA38
    ctx->r4 = S32(0XDA38 << 16);
    // 0x80086E90: ori         $a0, $a0, 0x3
    ctx->r4 = ctx->r4 | 0X3;
    // 0x80086E94: lui         $a1, 0x100
    ctx->r5 = S32(0X100 << 16);
    // 0x80086E98: ori         $a1, $a1, 0x4008
    ctx->r5 = ctx->r5 | 0X4008;
    // 0x80086E9C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80086EA0: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80086EA4: lw          $t1, 0x7C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X7C);
    // 0x80086EA8: lui         $a2, 0x600
    ctx->r6 = S32(0X600 << 16);
    // 0x80086EAC: ori         $a2, $a2, 0x402
    ctx->r6 = ctx->r6 | 0X402;
    // 0x80086EB0: sw          $t1, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r9;
    // 0x80086EB4: addiu       $t1, $t1, 0x40
    ctx->r9 = ADD32(ctx->r9, 0X40);
    // 0x80086EB8: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80086EBC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80086EC0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086EC4: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x80086EC8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80086ECC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086ED0: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80086ED4: addiu       $v0, $v0, -0x16A0
    ctx->r2 = ADD32(ctx->r2, -0X16A0);
    // 0x80086ED8: sw          $t1, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r9;
    // 0x80086EDC: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x80086EE0: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x80086EE4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80086EE8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80086EEC: addiu       $v0, $zero, 0x604
    ctx->r2 = ADD32(0, 0X604);
    // 0x80086EF0: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x80086EF4: sw          $a1, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r5;
    // 0x80086EF8: sw          $a2, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r6;
    // 0x80086EFC: sw          $v0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r2;
L_80086F00:
    // 0x80086F00: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
    // 0x80086F04: lh          $v0, 0x2($t1)
    ctx->r2 = MEM_H(ctx->r9, 0X2);
    // 0x80086F08: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
    // 0x80086F0C: slt         $v0, $s6, $v0
    ctx->r2 = SIGNED(ctx->r22) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80086F10: bne         $v0, $zero, L_80086A98
    if (ctx->r2 != 0) {
        // 0x80086F14: addiu       $s7, $s7, 0x4
        ctx->r23 = ADD32(ctx->r23, 0X4);
            goto L_80086A98;
    }
    // 0x80086F14: addiu       $s7, $s7, 0x4
    ctx->r23 = ADD32(ctx->r23, 0X4);
    // 0x80086F18: lw          $t1, 0x74($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X74);
L_80086F1C:
    // 0x80086F1C: lh          $v0, 0x6($t1)
    ctx->r2 = MEM_H(ctx->r9, 0X6);
    // 0x80086F20: lw          $t1, 0x84($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X84);
    // 0x80086F24: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80086F28: slt         $v0, $t1, $v0
    ctx->r2 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80086F2C: bne         $v0, $zero, L_80086A74
    if (ctx->r2 != 0) {
        // 0x80086F30: sw          $t1, 0x84($sp)
        MEM_W(0X84, ctx->r29) = ctx->r9;
            goto L_80086A74;
    }
    // 0x80086F30: sw          $t1, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r9;
L_80086F34:
    // 0x80086F34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80086F38: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80086F3C: sw          $v0, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = ctx->r2;
L_80086F40:
    // 0x80086F40: lw          $ra, 0xD4($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XD4);
    // 0x80086F44: lw          $fp, 0xD0($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XD0);
    // 0x80086F48: lw          $s7, 0xCC($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XCC);
    // 0x80086F4C: lw          $s6, 0xC8($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XC8);
    // 0x80086F50: lw          $s5, 0xC4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XC4);
    // 0x80086F54: lw          $s4, 0xC0($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XC0);
    // 0x80086F58: lw          $s3, 0xBC($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XBC);
    // 0x80086F5C: lw          $s2, 0xB8($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XB8);
    // 0x80086F60: lw          $s1, 0xB4($sp)
    ctx->r17 = MEM_W(ctx->r29, 0XB4);
    // 0x80086F64: lw          $s0, 0xB0($sp)
    ctx->r16 = MEM_W(ctx->r29, 0XB0);
    // 0x80086F68: jr          $ra
    // 0x80086F6C: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
    TRACE_RETURN()
    return;
    // 0x80086F6C: addiu       $sp, $sp, 0xD8
    ctx->r29 = ADD32(ctx->r29, 0XD8);
;}
RECOMP_FUNC void func_80047198_22598(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80047198: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004719C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800471A0: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x800471A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800471A8: beq         $v1, $v0, L_800471D4
    if (ctx->r3 == ctx->r2) {
        // 0x800471AC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_800471D4;
    }
    // 0x800471AC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x800471B0: bne         $v0, $zero, L_8004724C
    if (ctx->r2 != 0) {
        // 0x800471B4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8004724C;
    }
    // 0x800471B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800471B8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x800471BC: beq         $v1, $v0, L_800471FC
    if (ctx->r3 == ctx->r2) {
        // 0x800471C0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_800471FC;
    }
    // 0x800471C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800471C4: beq         $v1, $v0, L_8004721C
    if (ctx->r3 == ctx->r2) {
        // 0x800471C8: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8004721C;
    }
    // 0x800471C8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800471CC: j           L_8004724C
    // 0x800471D0: nop

        goto L_8004724C;
    // 0x800471D0: nop

L_800471D4:
    // 0x800471D4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800471D8: lb          $v0, -0x3BC6($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC6);
    // 0x800471DC: bne         $v0, $zero, L_8004724C
    if (ctx->r2 != 0) {
        // 0x800471E0: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8004724C;
    }
    // 0x800471E0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800471E4: jal         0x8006033C
    // 0x800471E8: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x800471E8: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    after_0:
    // 0x800471EC: beq         $v0, $zero, L_80047248
    if (ctx->r2 == 0) {
        // 0x800471F0: addiu       $a0, $zero, 0x1B
        ctx->r4 = ADD32(0, 0X1B);
            goto L_80047248;
    }
    // 0x800471F0: addiu       $a0, $zero, 0x1B
    ctx->r4 = ADD32(0, 0X1B);
    // 0x800471F4: j           L_80047238
    // 0x800471F8: nop

        goto L_80047238;
    // 0x800471F8: nop

L_800471FC:
    // 0x800471FC: jal         0x8006033C
    // 0x80047200: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80047200: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_1:
    // 0x80047204: bne         $v0, $zero, L_8004724C
    if (ctx->r2 != 0) {
        // 0x80047208: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8004724C;
    }
    // 0x80047208: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8004720C: jal         0x8006036C
    // 0x80047210: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x80047210: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_2:
    // 0x80047214: j           L_80047238
    // 0x80047218: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
        goto L_80047238;
    // 0x80047218: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
L_8004721C:
    // 0x8004721C: jal         0x8006033C
    // 0x80047220: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80047220: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    after_3:
    // 0x80047224: bne         $v0, $zero, L_8004724C
    if (ctx->r2 != 0) {
        // 0x80047228: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8004724C;
    }
    // 0x80047228: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8004722C: jal         0x8006036C
    // 0x80047230: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80047230: addiu       $a0, $zero, 0x29
    ctx->r4 = ADD32(0, 0X29);
    after_4:
    // 0x80047234: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
L_80047238:
    // 0x80047238: jal         0x80060690
    // 0x8004723C: nop

    func_80060690_3BA90(rdram, ctx);
        goto after_5;
    // 0x8004723C: nop

    after_5:
    // 0x80047240: j           L_8004724C
    // 0x80047244: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004724C;
    // 0x80047244: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80047248:
    // 0x80047248: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8004724C:
    // 0x8004724C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80047250: jr          $ra
    // 0x80047254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80047254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80047258: nop

    // 0x8004725C: nop

;}
RECOMP_FUNC void func_800289A8_3DA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800289A8: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x800289AC: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x800289B0: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x800289B4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800289B8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x800289BC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x800289C0: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800289C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800289C8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800289CC: jr          $ra
    // 0x800289D0: sb          $zero, 0x4899($at)
    MEM_B(0X4899, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x800289D0: sb          $zero, 0x4899($at)
    MEM_B(0X4899, ctx->r1) = 0;
;}
RECOMP_FUNC void func_8008CD1C_6811C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008CD1C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008CD20: blez        $a2, L_8008CD48
    if (SIGNED(ctx->r6) <= 0) {
        // 0x8008CD24: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8008CD48;
    }
    // 0x8008CD24: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8008CD28:
    // 0x8008CD28: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8008CD2C: beq         $v0, $zero, L_8008CD3C
    if (ctx->r2 == 0) {
        // 0x8008CD30: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_8008CD3C;
    }
    // 0x8008CD30: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8008CD34: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8008CD38: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_8008CD3C:
    // 0x8008CD3C: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8008CD40: bne         $v0, $zero, L_8008CD28
    if (ctx->r2 != 0) {
        // 0x8008CD44: addiu       $a0, $a0, 0x4
        ctx->r4 = ADD32(ctx->r4, 0X4);
            goto L_8008CD28;
    }
    // 0x8008CD44: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_8008CD48:
    // 0x8008CD48: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8008CD4C: jr          $ra
    // 0x8008CD50: nop

    TRACE_RETURN()
    return;
    // 0x8008CD50: nop

;}
RECOMP_FUNC void _frexpf(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80097718: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8009771C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x80097720: nop

    // 0x80097724: c.eq.d      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.d == ctx->f0.d;
    // 0x80097728: nop

    // 0x8009772C: nop

    // 0x80097730: bc1f        L_80097740
    if (!c1cs) {
        // 0x80097734: sw          $zero, 0x0($a2)
        MEM_W(0X0, ctx->r6) = 0;
            goto L_80097740;
    }
    // 0x80097734: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x80097738: j           L_800977F0
    // 0x8009773C: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
        goto L_800977F0;
    // 0x8009773C: mov.d       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.d = ctx->f12.d;
L_80097740:
    // 0x80097740: c.lt.d      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.d < ctx->f12.d;
    // 0x80097744: nop

    // 0x80097748: nop

    // 0x8009774C: bc1t        L_80097758
    if (c1cs) {
        // 0x80097750: mov.d       $f2, $f12
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.d = ctx->f12.d;
            goto L_80097758;
    }
    // 0x80097750: mov.d       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    ctx->f2.d = ctx->f12.d;
    // 0x80097754: neg.d       $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.d); 
    ctx->f2.d = -ctx->f12.d;
L_80097758:
    // 0x80097758: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009775C: ldc1        $f0, 0x3048($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X3048);
    // 0x80097760: c.le.d      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.d <= ctx->f2.d;
    // 0x80097764: nop

    // 0x80097768: bc1f        L_80097798
    if (!c1cs) {
        // 0x8009776C: nop
    
            goto L_80097798;
    }
    // 0x8009776C: nop

    // 0x80097770: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80097774: ldc1        $f4, 0x3050($at)
    CHECK_FR(ctx, 4);
    ctx->f4.u64 = LD(ctx->r1, 0X3050);
L_80097778:
    // 0x80097778: nop

    // 0x8009777C: mul.d       $f2, $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f4.d); 
    ctx->f2.d = MUL_D(ctx->f2.d, ctx->f4.d);
    // 0x80097780: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80097784: c.le.d      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.d <= ctx->f2.d;
    // 0x80097788: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8009778C: nop

    // 0x80097790: bc1t        L_80097778
    if (c1cs) {
        // 0x80097794: sw          $v0, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r2;
            goto L_80097778;
    }
    // 0x80097794: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_80097798:
    // 0x80097798: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8009779C: ldc1        $f0, 0x3058($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X3058);
    // 0x800977A0: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x800977A4: nop

    // 0x800977A8: bc1f        L_800977CC
    if (!c1cs) {
        // 0x800977AC: nop
    
            goto L_800977CC;
    }
    // 0x800977AC: nop

L_800977B0:
    // 0x800977B0: add.d       $f2, $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = ctx->f2.d + ctx->f2.d;
    // 0x800977B4: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x800977B8: c.lt.d      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.d < ctx->f0.d;
    // 0x800977BC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800977C0: nop

    // 0x800977C4: bc1t        L_800977B0
    if (c1cs) {
        // 0x800977C8: sw          $v0, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r2;
            goto L_800977B0;
    }
    // 0x800977C8: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
L_800977CC:
    // 0x800977CC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x800977D0: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x800977D4: nop

    // 0x800977D8: c.lt.d      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.d < ctx->f12.d;
    // 0x800977DC: nop

    // 0x800977E0: nop

    // 0x800977E4: bc1t        L_800977F0
    if (c1cs) {
        // 0x800977E8: mov.d       $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
            goto L_800977F0;
    }
    // 0x800977E8: mov.d       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.d = ctx->f2.d;
    // 0x800977EC: neg.d       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = -ctx->f0.d;
L_800977F0:
    // 0x800977F0: jr          $ra
    // 0x800977F4: nop

    TRACE_RETURN()
    return;
    // 0x800977F4: nop

;}
RECOMP_FUNC void func_8006FDAC_4B1AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006FDAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006FDB0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8006FDB4: lhu         $v1, 0x128($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X128);
    // 0x8006FDB8: lhu         $a3, 0x12A($a0)
    ctx->r7 = MEM_HU(ctx->r4, 0X12A);
    // 0x8006FDBC: lhu         $v0, 0x11C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X11C);
    // 0x8006FDC0: or          $v1, $v1, $a3
    ctx->r3 = ctx->r3 | ctx->r7;
    // 0x8006FDC4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006FDC8: beq         $v0, $zero, L_8006FDE8
    if (ctx->r2 == 0) {
        // 0x8006FDCC: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_8006FDE8;
    }
    // 0x8006FDCC: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x8006FDD0: beql        $v0, $v1, L_8006FDEC
    if (ctx->r2 == ctx->r3) {
        // 0x8006FDD4: sh          $zero, 0xB4($a0)
        MEM_H(0XB4, ctx->r4) = 0;
            goto L_8006FDEC;
    }
    goto skip_0;
    // 0x8006FDD4: sh          $zero, 0xB4($a0)
    MEM_H(0XB4, ctx->r4) = 0;
    skip_0:
    // 0x8006FDD8: jal         0x8006FEB4
    // 0x8006FDDC: nop

    func_8006FEB4_4B2B4(rdram, ctx);
        goto after_0;
    // 0x8006FDDC: nop

    after_0:
    // 0x8006FDE0: j           L_8006FDEC
    // 0x8006FDE4: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
        goto L_8006FDEC;
    // 0x8006FDE4: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
L_8006FDE8:
    // 0x8006FDE8: sh          $zero, 0xB4($a0)
    MEM_H(0XB4, ctx->r4) = 0;
L_8006FDEC:
    // 0x8006FDEC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8006FDF0: addu        $v0, $t0, $zero
    ctx->r2 = ADD32(ctx->r8, 0);
    // 0x8006FDF4: jr          $ra
    // 0x8006FDF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006FDF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void __cosf_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80099C10: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x80099C14: lw          $v0, 0x0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X0);
    // 0x80099C18: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x80099C1C: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x80099C20: slti        $v0, $v0, 0x136
    ctx->r2 = SIGNED(ctx->r2) < 0X136 ? 1 : 0;
    // 0x80099C24: beq         $v0, $zero, L_80099D34
    if (ctx->r2 == 0) {
        // 0x80099C28: nop
    
            goto L_80099D34;
    }
    // 0x80099C28: nop

    // 0x80099C2C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80099C30: nop

    // 0x80099C34: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    // 0x80099C38: nop

    // 0x80099C3C: nop

    // 0x80099C40: bc1t        L_80099C4C
    if (c1cs) {
        // 0x80099C44: mov.s       $f4, $f12
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.fl = ctx->f12.fl;
            goto L_80099C4C;
    }
    // 0x80099C44: mov.s       $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.fl = ctx->f12.fl;
    // 0x80099C48: neg.s       $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = -ctx->f12.fl;
L_80099C4C:
    // 0x80099C4C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099C50: ldc1        $f0, 0x31B8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X31B8);
    // 0x80099C54: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80099C58: mul.d       $f0, $f6, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = MUL_D(ctx->f6.d, ctx->f0.d);
    // 0x80099C5C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099C60: ldc1        $f2, 0x31D8($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X31D8);
    // 0x80099C64: add.d       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f4.d = ctx->f0.d + ctx->f2.d;
    // 0x80099C68: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80099C6C: mtc1        $zero, $f1
    ctx->f_odd[(1 - 1) * 2] = 0;
    // 0x80099C70: nop

    // 0x80099C74: c.le.d      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.d <= ctx->f4.d;
    // 0x80099C78: nop

    // 0x80099C7C: nop

    // 0x80099C80: bc1fl       L_80099C8C
    if (!c1cs) {
        // 0x80099C84: sub.d       $f0, $f4, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f4.d - ctx->f2.d;
            goto L_80099C8C;
    }
    goto skip_0;
    // 0x80099C84: sub.d       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f4.d - ctx->f2.d;
    skip_0:
    // 0x80099C88: add.d       $f0, $f4, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f4.d + ctx->f2.d;
L_80099C8C:
    // 0x80099C8C: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x80099C90: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x80099C94: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099C98: ldc1        $f0, 0x31E0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X31E0);
    // 0x80099C9C: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x80099CA0: nop

    // 0x80099CA4: cvt.d.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.d = CVT_D_W(ctx->f4.u32l);
    // 0x80099CA8: sub.d       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = ctx->f4.d - ctx->f0.d;
    // 0x80099CAC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099CB0: ldc1        $f2, 0x31C0($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X31C0);
    // 0x80099CB4: mul.d       $f2, $f4, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f2.d); 
    ctx->f2.d = MUL_D(ctx->f4.d, ctx->f2.d);
    // 0x80099CB8: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099CBC: ldc1        $f0, 0x31C8($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X31C8);
    // 0x80099CC0: mul.d       $f0, $f4, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f0.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x80099CC4: sub.d       $f6, $f6, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f2.d); 
    ctx->f6.d = ctx->f6.d - ctx->f2.d;
    // 0x80099CC8: sub.d       $f6, $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f0.d); 
    ctx->f6.d = ctx->f6.d - ctx->f0.d;
    // 0x80099CCC: mul.d       $f4, $f6, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f6.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f6.d);
    // 0x80099CD0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099CD4: ldc1        $f0, 0x31B0($at)
    CHECK_FR(ctx, 0);
    ctx->f0.u64 = LD(ctx->r1, 0X31B0);
    // 0x80099CD8: mul.d       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f4.d);
    // 0x80099CDC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099CE0: ldc1        $f2, 0x31A8($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X31A8);
    // 0x80099CE4: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x80099CE8: mul.d       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f4.d);
    // 0x80099CEC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099CF0: ldc1        $f2, 0x31A0($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X31A0);
    // 0x80099CF4: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x80099CF8: mul.d       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = MUL_D(ctx->f0.d, ctx->f4.d);
    // 0x80099CFC: nop

    // 0x80099D00: mul.d       $f4, $f6, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f4.d = MUL_D(ctx->f6.d, ctx->f4.d);
    // 0x80099D04: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099D08: ldc1        $f2, 0x3198($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X3198);
    // 0x80099D0C: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x80099D10: mul.d       $f4, $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f0.d); 
    ctx->f4.d = MUL_D(ctx->f4.d, ctx->f0.d);
    // 0x80099D14: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80099D18: bne         $v0, $zero, L_80099D28
    if (ctx->r2 != 0) {
        // 0x80099D1C: add.d       $f0, $f6, $f4
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = ctx->f6.d + ctx->f4.d;
            goto L_80099D28;
    }
    // 0x80099D1C: add.d       $f0, $f6, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f4.d); 
    ctx->f0.d = ctx->f6.d + ctx->f4.d;
    // 0x80099D20: j           L_80099D58
    // 0x80099D24: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
        goto L_80099D58;
    // 0x80099D24: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
L_80099D28:
    // 0x80099D28: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x80099D2C: j           L_80099D58
    // 0x80099D30: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
        goto L_80099D58;
    // 0x80099D30: neg.s       $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = -ctx->f0.fl;
L_80099D34:
    // 0x80099D34: c.eq.s      $f12, $f12
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f12.fl == ctx->f12.fl;
    // 0x80099D38: nop

    // 0x80099D3C: bc1f        L_80099D50
    if (!c1cs) {
        // 0x80099D40: nop
    
            goto L_80099D50;
    }
    // 0x80099D40: nop

    // 0x80099D44: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099D48: j           L_80099D58
    // 0x80099D4C: lwc1        $f0, 0x31D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X31D0);
        goto L_80099D58;
    // 0x80099D4C: lwc1        $f0, 0x31D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X31D0);
L_80099D50:
    // 0x80099D50: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80099D54: lwc1        $f0, 0x32D0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X32D0);
L_80099D58:
    // 0x80099D58: jr          $ra
    // 0x80099D5C: nop

    TRACE_RETURN()
    return;
    // 0x80099D5C: nop

;}
RECOMP_FUNC void func_80035470_10870(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035470: jr          $ra
    // 0x80035474: nop

    TRACE_RETURN()
    return;
    // 0x80035474: nop

;}
RECOMP_FUNC void func_8007F2D4_5A6D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007F2D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007F2D8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8007F2DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8007F2E0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8007F2E4:
    // 0x8007F2E4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007F2E8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8007F2EC: sw          $zero, -0x44D0($at)
    MEM_W(-0X44D0, ctx->r1) = 0;
    // 0x8007F2F0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007F2F4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8007F2F8: sw          $zero, -0x44CC($at)
    MEM_W(-0X44CC, ctx->r1) = 0;
    // 0x8007F2FC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8007F300: slti        $v0, $a0, 0x40
    ctx->r2 = SIGNED(ctx->r4) < 0X40 ? 1 : 0;
    // 0x8007F304: bne         $v0, $zero, L_8007F2E4
    if (ctx->r2 != 0) {
        // 0x8007F308: addiu       $v1, $v1, 0xC
        ctx->r3 = ADD32(ctx->r3, 0XC);
            goto L_8007F2E4;
    }
    // 0x8007F308: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
    // 0x8007F30C: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8007F310: addiu       $a0, $a0, -0x3E00
    ctx->r4 = ADD32(ctx->r4, -0X3E00);
    // 0x8007F314: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007F318: sw          $zero, -0x41D0($at)
    MEM_W(-0X41D0, ctx->r1) = 0;
    // 0x8007F31C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007F320: sh          $zero, -0x3E08($at)
    MEM_H(-0X3E08, ctx->r1) = 0;
    // 0x8007F324: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007F328: sh          $zero, -0x3E06($at)
    MEM_H(-0X3E06, ctx->r1) = 0;
    // 0x8007F32C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007F330: sh          $zero, -0x3E04($at)
    MEM_H(-0X3E04, ctx->r1) = 0;
    // 0x8007F334: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007F338: sh          $zero, -0x3E02($at)
    MEM_H(-0X3E02, ctx->r1) = 0;
    // 0x8007F33C: jal         0x8009A2B0
    // 0x8007F340: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x8007F340: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    after_0:
    // 0x8007F344: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8007F348: addiu       $a0, $a0, -0x3D90
    ctx->r4 = ADD32(ctx->r4, -0X3D90);
    // 0x8007F34C: jal         0x8009A2B0
    // 0x8007F350: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x8007F350: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x8007F354: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8007F358: jr          $ra
    // 0x8007F35C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007F35C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8005044C_2B84C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005044C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80050450: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80050454: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80050458: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8005045C: lbu         $v0, 0xA5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA5);
    // 0x80050460: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    // 0x80050464: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80050468: sb          $v0, 0xA5($s0)
    MEM_B(0XA5, ctx->r16) = ctx->r2;
    // 0x8005046C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80050470: bne         $v0, $zero, L_800504CC
    if (ctx->r2 != 0) {
        // 0x80050474: nop
    
            goto L_800504CC;
    }
    // 0x80050474: nop

    // 0x80050478: lb          $a1, 0x3($a0)
    ctx->r5 = MEM_B(ctx->r4, 0X3);
    // 0x8005047C: bgez        $a1, L_800504B8
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80050480: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_800504B8;
    }
    // 0x80050480: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    // 0x80050484: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80050488: bne         $a1, $v0, L_8005049C
    if (ctx->r5 != ctx->r2) {
        // 0x8005048C: andi        $v1, $v1, 0x7F
        ctx->r3 = ctx->r3 & 0X7F;
            goto L_8005049C;
    }
    // 0x8005048C: andi        $v1, $v1, 0x7F
    ctx->r3 = ctx->r3 & 0X7F;
    // 0x80050490: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x80050494: j           L_800504CC
    // 0x80050498: sb          $v0, 0xA5($s0)
    MEM_B(0XA5, ctx->r16) = ctx->r2;
        goto L_800504CC;
    // 0x80050498: sb          $v0, 0xA5($s0)
    MEM_B(0XA5, ctx->r16) = ctx->r2;
L_8005049C:
    // 0x8005049C: lw          $v0, 0x94($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X94);
    // 0x800504A0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x800504A4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800504A8: sw          $v0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r2;
    // 0x800504AC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x800504B0: j           L_800504CC
    // 0x800504B4: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
        goto L_800504CC;
    // 0x800504B4: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
L_800504B8:
    // 0x800504B8: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x800504BC: addiu       $v1, $v0, 0x8
    ctx->r3 = ADD32(ctx->r2, 0X8);
    // 0x800504C0: sw          $v1, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r3;
    // 0x800504C4: lw          $v0, 0x8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X8);
    // 0x800504C8: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
L_800504CC:
    // 0x800504CC: jal         0x80051770
    // 0x800504D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_0;
    // 0x800504D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x800504D4: jal         0x80051248
    // 0x800504D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_1;
    // 0x800504D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x800504DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800504E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800504E4: jr          $ra
    // 0x800504E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800504E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80078CA8_540A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80078CA8: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80078CAC: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x80078CB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80078CB4: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x80078CB8: addiu       $s1, $sp, 0x18
    ctx->r17 = ADD32(ctx->r29, 0X18);
    // 0x80078CBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80078CC0: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x80078CC4: addiu       $s2, $s0, 0x18
    ctx->r18 = ADD32(ctx->r16, 0X18);
    // 0x80078CC8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80078CCC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80078CD0: jal         0x8009A3B4
    // 0x80078CD4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80078CD4: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_0:
    // 0x80078CD8: jal         0x800A3450
    // 0x80078CDC: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80078CDC: nop

    after_1:
    // 0x80078CE0: lhu         $v1, 0xE($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XE);
    // 0x80078CE4: andi        $a0, $v0, 0x7F
    ctx->r4 = ctx->r2 & 0X7F;
    // 0x80078CE8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80078CEC: addiu       $v1, $v1, 0x80
    ctx->r3 = ADD32(ctx->r3, 0X80);
    // 0x80078CF0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80078CF4: sh          $v1, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r3;
    // 0x80078CF8: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    // 0x80078CFC: lhu         $v1, 0xC($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0XC);
    // 0x80078D00: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80078D04: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80078D08: addiu       $v1, $v1, 0x40
    ctx->r3 = ADD32(ctx->r3, 0X40);
    // 0x80078D0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80078D10: sh          $v1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r3;
    // 0x80078D14: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x80078D18: jal         0x80031428
    // 0x80078D1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    func_80031428_C828(rdram, ctx);
        goto after_2;
    // 0x80078D1C: sh          $zero, 0x14($sp)
    MEM_H(0X14, ctx->r29) = 0;
    after_2:
    // 0x80078D20: lh          $v0, 0x3E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3E);
    // 0x80078D24: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80078D28: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80078D2C: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x80078D30: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80078D34: jal         0x80031DA8
    // 0x80078D38: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x80078D38: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    after_3:
    // 0x80078D3C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80078D40: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80078D44: jal         0x8009A3B4
    // 0x80078D48: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80078D48: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_4:
    // 0x80078D4C: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80078D50: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x80078D54: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x80078D58: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x80078D5C: jr          $ra
    // 0x80078D60: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80078D60: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8005F528_3A928(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005F528: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005F52C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8005F530: jal         0x8004F418
    // 0x8005F534: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8005F534: nop

    after_0:
    // 0x8005F538: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8005F53C: jr          $ra
    // 0x8005F540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005F540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005F544: nop

    // 0x8005F548: nop

    // 0x8005F54C: nop

;}
RECOMP_FUNC void func_800500C0_2B4C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800500C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800500C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800500C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800500CC: srl         $v1, $a1, 4
    ctx->r3 = S32(U32(ctx->r5) >> 4);
    // 0x800500D0: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x800500D4: beq         $v0, $zero, L_80050174
    if (ctx->r2 == 0) {
        // 0x800500D8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80050174;
    }
    // 0x800500D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800500DC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800500E0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800500E4: addu        $at, $at, $v0
    gpr jr_addend_800500EC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800500E8: lw          $v0, 0x2390($at)
    ctx->r2 = ADD32(ctx->r1, 0X2390);
    // 0x800500EC: jr          $v0
    // 0x800500F0: nop

    switch (jr_addend_800500EC >> 2) {
        case 0: goto L_800500F4; break;
        case 1: goto L_800500F4; break;
        case 2: goto L_800500F4; break;
        case 3: goto L_800500F4; break;
        case 4: goto L_8005010C; break;
        case 5: goto L_8005010C; break;
        case 6: goto L_80050140; break;
        case 7: goto L_80050140; break;
        case 8: goto L_80050174; break;
        default: switch_error(__func__, 0x800500EC, 0x800D2390);
    }
    // 0x800500F0: nop

L_800500F4:
    // 0x800500F4: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x800500F8: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800500FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80050100: lw          $v1, -0x6F00($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F00);
    // 0x80050104: j           L_80050188
    // 0x80050108: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
        goto L_80050188;
    // 0x80050108: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
L_8005010C:
    // 0x8005010C: lb          $v0, 0x170($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X170);
    // 0x80050110: beq         $v0, $zero, L_8005012C
    if (ctx->r2 == 0) {
        // 0x80050114: sll         $v0, $a1, 2
        ctx->r2 = S32(ctx->r5 << 2);
            goto L_8005012C;
    }
    // 0x80050114: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x80050118: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8005011C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80050120: lw          $v1, -0x4480($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4480);
    // 0x80050124: j           L_80050188
    // 0x80050128: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
        goto L_80050188;
    // 0x80050128: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
L_8005012C:
    // 0x8005012C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80050130: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80050134: lw          $v1, -0x4900($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4900);
    // 0x80050138: j           L_80050188
    // 0x8005013C: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
        goto L_80050188;
    // 0x8005013C: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
L_80050140:
    // 0x80050140: lb          $v0, 0x171($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X171);
    // 0x80050144: beq         $v0, $zero, L_80050160
    if (ctx->r2 == 0) {
        // 0x80050148: sll         $v0, $a1, 2
        ctx->r2 = S32(ctx->r5 << 2);
            goto L_80050160;
    }
    // 0x80050148: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x8005014C: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80050150: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80050154: lw          $v1, -0x3C00($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3C00);
    // 0x80050158: j           L_80050188
    // 0x8005015C: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
        goto L_80050188;
    // 0x8005015C: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
L_80050160:
    // 0x80050160: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80050164: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80050168: lw          $v1, -0x4080($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X4080);
    // 0x8005016C: j           L_80050188
    // 0x80050170: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
        goto L_80050188;
    // 0x80050170: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
L_80050174:
    // 0x80050174: sll         $v0, $a1, 2
    ctx->r2 = S32(ctx->r5 << 2);
    // 0x80050178: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8005017C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80050180: lw          $v1, -0x5400($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X5400);
    // 0x80050184: sll         $v0, $a2, 3
    ctx->r2 = S32(ctx->r6 << 3);
L_80050188:
    // 0x80050188: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
    // 0x8005018C: sw          $v1, 0x94($s0)
    MEM_W(0X94, ctx->r16) = ctx->r3;
    // 0x80050190: sw          $v0, 0x98($s0)
    MEM_W(0X98, ctx->r16) = ctx->r2;
    // 0x80050194: sb          $a1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r5;
    // 0x80050198: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8005019C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x800501A0: jal         0x800508D4
    // 0x800501A4: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    func_800508D4_2BCD4(rdram, ctx);
        goto after_0;
    // 0x800501A4: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    after_0:
    // 0x800501A8: jal         0x80050578
    // 0x800501AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80050578_2B978(rdram, ctx);
        goto after_1;
    // 0x800501AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x800501B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800501B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800501B8: jr          $ra
    // 0x800501BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800501BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8007BD74_57174(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007BD74: jr          $ra
    // 0x8007BD78: nop

    TRACE_RETURN()
    return;
    // 0x8007BD78: nop

;}
RECOMP_FUNC void func_80078B58_53F58(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80078B58: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x80078B5C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80078B60: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x80078B64: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80078B68: bne         $v0, $zero, L_80078B7C
    if (ctx->r2 != 0) {
        // 0x80078B6C: nop
    
            goto L_80078B7C;
    }
    // 0x80078B6C: nop

    // 0x80078B70: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80078B74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80078B78: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80078B7C:
    // 0x80078B7C: jr          $ra
    // 0x80078B80: nop

    TRACE_RETURN()
    return;
    // 0x80078B80: nop

;}
RECOMP_FUNC void func_8006255C_3D95C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006255C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80062560: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80062564: lw          $v1, 0x0($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X0);
    // 0x80062568: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x8006256C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80062570: beq         $v0, $zero, L_8006258C
    if (ctx->r2 == 0) {
        // 0x80062574: nop
    
            goto L_8006258C;
    }
    // 0x80062574: nop

    // 0x80062578: lui         $v0, 0xFDFF
    ctx->r2 = S32(0XFDFF << 16);
    // 0x8006257C: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80062580: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80062584: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x80062588: sb          $zero, 0x7D($a0)
    MEM_B(0X7D, ctx->r4) = 0;
L_8006258C:
    // 0x8006258C: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x80062590: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x80062594: sb          $v0, 0x7C($a0)
    MEM_B(0X7C, ctx->r4) = ctx->r2;
    // 0x80062598: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8006259C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x800625A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800625A4: lw          $v0, 0x750($at)
    ctx->r2 = MEM_W(ctx->r1, 0X750);
    // 0x800625A8: jalr        $v0
    // 0x800625AC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x800625AC: nop

    after_0:
    // 0x800625B0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800625B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800625B8: jr          $ra
    // 0x800625BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800625BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8005BEB0_372B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005BEB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005BEB4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8005BEB8: jal         0x8005AAA8
    // 0x8005BEBC: nop

    func_8005AAA8_35EA8(rdram, ctx);
        goto after_0;
    // 0x8005BEBC: nop

    after_0:
    // 0x8005BEC0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8005BEC4: jr          $ra
    // 0x8005BEC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005BEC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80030354_B754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80030354: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80030358: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003035C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80030360: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80030364: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80030368: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x8003036C: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
    // 0x80030370: and         $v0, $a0, $v1
    ctx->r2 = ctx->r4 & ctx->r3;
    // 0x80030374: beq         $v0, $v1, L_80030500
    if (ctx->r2 == ctx->r3) {
        // 0x80030378: srl         $v1, $a0, 8
        ctx->r3 = S32(U32(ctx->r4) >> 8);
            goto L_80030500;
    }
    // 0x80030378: srl         $v1, $a0, 8
    ctx->r3 = S32(U32(ctx->r4) >> 8);
    // 0x8003037C: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x80030380: or          $s0, $v1, $v0
    ctx->r16 = ctx->r3 | ctx->r2;
    // 0x80030384: sll         $s2, $a1, 24
    ctx->r18 = S32(ctx->r5 << 24);
    // 0x80030388: sll         $s1, $a2, 24
    ctx->r17 = S32(ctx->r6 << 24);
L_8003038C:
    // 0x8003038C: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
    // 0x80030390: andi        $v1, $v0, 0xFC
    ctx->r3 = ctx->r2 & 0XFC;
    // 0x80030394: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80030398: beq         $v1, $v0, L_800304A4
    if (ctx->r3 == ctx->r2) {
        // 0x8003039C: slti        $v0, $v1, 0x61
        ctx->r2 = SIGNED(ctx->r3) < 0X61 ? 1 : 0;
            goto L_800304A4;
    }
    // 0x8003039C: slti        $v0, $v1, 0x61
    ctx->r2 = SIGNED(ctx->r3) < 0X61 ? 1 : 0;
    // 0x800303A0: beq         $v0, $zero, L_800303E4
    if (ctx->r2 == 0) {
        // 0x800303A4: addiu       $v0, $zero, 0x2C
        ctx->r2 = ADD32(0, 0X2C);
            goto L_800303E4;
    }
    // 0x800303A4: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x800303A8: beq         $v1, $v0, L_8003046C
    if (ctx->r3 == ctx->r2) {
        // 0x800303AC: slti        $v0, $v1, 0x2D
        ctx->r2 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
            goto L_8003046C;
    }
    // 0x800303AC: slti        $v0, $v1, 0x2D
    ctx->r2 = SIGNED(ctx->r3) < 0X2D ? 1 : 0;
    // 0x800303B0: beq         $v0, $zero, L_800303C8
    if (ctx->r2 == 0) {
        // 0x800303B4: addiu       $v0, $zero, 0x28
        ctx->r2 = ADD32(0, 0X28);
            goto L_800303C8;
    }
    // 0x800303B4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x800303B8: beq         $v1, $v0, L_8003045C
    if (ctx->r3 == ctx->r2) {
        // 0x800303BC: sra         $a0, $s2, 24
        ctx->r4 = S32(SIGNED(ctx->r18) >> 24);
            goto L_8003045C;
    }
    // 0x800303BC: sra         $a0, $s2, 24
    ctx->r4 = S32(SIGNED(ctx->r18) >> 24);
    // 0x800303C0: j           L_800304E0
    // 0x800303C4: nop

        goto L_800304E0;
    // 0x800303C4: nop

L_800303C8:
    // 0x800303C8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x800303CC: beq         $v1, $v0, L_80030480
    if (ctx->r3 == ctx->r2) {
        // 0x800303D0: addiu       $v0, $zero, 0x38
        ctx->r2 = ADD32(0, 0X38);
            goto L_80030480;
    }
    // 0x800303D0: addiu       $v0, $zero, 0x38
    ctx->r2 = ADD32(0, 0X38);
    // 0x800303D4: beq         $v1, $v0, L_80030494
    if (ctx->r3 == ctx->r2) {
        // 0x800303D8: sra         $a0, $s2, 24
        ctx->r4 = S32(SIGNED(ctx->r18) >> 24);
            goto L_80030494;
    }
    // 0x800303D8: sra         $a0, $s2, 24
    ctx->r4 = S32(SIGNED(ctx->r18) >> 24);
    // 0x800303DC: j           L_800304E0
    // 0x800303E0: nop

        goto L_800304E0;
    // 0x800303E0: nop

L_800303E4:
    // 0x800303E4: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x800303E8: beq         $v1, $v0, L_80030448
    if (ctx->r3 == ctx->r2) {
        // 0x800303EC: slti        $v0, $v1, 0xC1
        ctx->r2 = SIGNED(ctx->r3) < 0XC1 ? 1 : 0;
            goto L_80030448;
    }
    // 0x800303EC: slti        $v0, $v1, 0xC1
    ctx->r2 = SIGNED(ctx->r3) < 0XC1 ? 1 : 0;
    // 0x800303F0: beq         $v0, $zero, L_80030410
    if (ctx->r2 == 0) {
        // 0x800303F4: addiu       $v0, $zero, 0x64
        ctx->r2 = ADD32(0, 0X64);
            goto L_80030410;
    }
    // 0x800303F4: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x800303F8: beq         $v1, $v0, L_800304B8
    if (ctx->r3 == ctx->r2) {
        // 0x800303FC: addiu       $v0, $zero, 0x74
        ctx->r2 = ADD32(0, 0X74);
            goto L_800304B8;
    }
    // 0x800303FC: addiu       $v0, $zero, 0x74
    ctx->r2 = ADD32(0, 0X74);
    // 0x80030400: beq         $v1, $v0, L_800304CC
    if (ctx->r3 == ctx->r2) {
        // 0x80030404: sra         $a0, $s2, 24
        ctx->r4 = S32(SIGNED(ctx->r18) >> 24);
            goto L_800304CC;
    }
    // 0x80030404: sra         $a0, $s2, 24
    ctx->r4 = S32(SIGNED(ctx->r18) >> 24);
    // 0x80030408: j           L_800304E0
    // 0x8003040C: nop

        goto L_800304E0;
    // 0x8003040C: nop

L_80030410:
    // 0x80030410: addiu       $v0, $zero, 0xD0
    ctx->r2 = ADD32(0, 0XD0);
    // 0x80030414: beq         $v1, $v0, L_80030434
    if (ctx->r3 == ctx->r2) {
        // 0x80030418: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_80030434;
    }
    // 0x80030418: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8003041C: bne         $v1, $v0, L_800304E0
    if (ctx->r3 != ctx->r2) {
        // 0x80030420: sra         $a0, $s2, 24
        ctx->r4 = S32(SIGNED(ctx->r18) >> 24);
            goto L_800304E0;
    }
    // 0x80030420: sra         $a0, $s2, 24
    ctx->r4 = S32(SIGNED(ctx->r18) >> 24);
    // 0x80030424: lui         $a2, 0x8003
    ctx->r6 = S32(0X8003 << 16);
    // 0x80030428: addiu       $a2, $a2, 0x6B0
    ctx->r6 = ADD32(ctx->r6, 0X6B0);
    // 0x8003042C: j           L_800304D8
    // 0x80030430: sra         $a1, $s1, 24
    ctx->r5 = S32(SIGNED(ctx->r17) >> 24);
        goto L_800304D8;
    // 0x80030430: sra         $a1, $s1, 24
    ctx->r5 = S32(SIGNED(ctx->r17) >> 24);
L_80030434:
    // 0x80030434: sra         $a0, $s2, 24
    ctx->r4 = S32(SIGNED(ctx->r18) >> 24);
    // 0x80030438: lui         $a2, 0x8003
    ctx->r6 = S32(0X8003 << 16);
    // 0x8003043C: addiu       $a2, $a2, -0x1704
    ctx->r6 = ADD32(ctx->r6, -0X1704);
    // 0x80030440: j           L_800304D8
    // 0x80030444: sra         $a1, $s1, 24
    ctx->r5 = S32(SIGNED(ctx->r17) >> 24);
        goto L_800304D8;
    // 0x80030444: sra         $a1, $s1, 24
    ctx->r5 = S32(SIGNED(ctx->r17) >> 24);
L_80030448:
    // 0x80030448: sra         $a0, $s2, 24
    ctx->r4 = S32(SIGNED(ctx->r18) >> 24);
    // 0x8003044C: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x80030450: addiu       $a2, $a2, 0x61E0
    ctx->r6 = ADD32(ctx->r6, 0X61E0);
    // 0x80030454: j           L_800304D8
    // 0x80030458: sra         $a1, $s1, 24
    ctx->r5 = S32(SIGNED(ctx->r17) >> 24);
        goto L_800304D8;
    // 0x80030458: sra         $a1, $s1, 24
    ctx->r5 = S32(SIGNED(ctx->r17) >> 24);
L_8003045C:
    // 0x8003045C: lui         $a2, 0x8003
    ctx->r6 = S32(0X8003 << 16);
    // 0x80030460: addiu       $a2, $a2, -0x5C4
    ctx->r6 = ADD32(ctx->r6, -0X5C4);
    // 0x80030464: j           L_800304D8
    // 0x80030468: sra         $a1, $s1, 24
    ctx->r5 = S32(SIGNED(ctx->r17) >> 24);
        goto L_800304D8;
    // 0x80030468: sra         $a1, $s1, 24
    ctx->r5 = S32(SIGNED(ctx->r17) >> 24);
L_8003046C:
    // 0x8003046C: sra         $a0, $s2, 24
    ctx->r4 = S32(SIGNED(ctx->r18) >> 24);
    // 0x80030470: lui         $a2, 0x8003
    ctx->r6 = S32(0X8003 << 16);
    // 0x80030474: addiu       $a2, $a2, -0x1E94
    ctx->r6 = ADD32(ctx->r6, -0X1E94);
    // 0x80030478: j           L_800304D8
    // 0x8003047C: sra         $a1, $s1, 24
    ctx->r5 = S32(SIGNED(ctx->r17) >> 24);
        goto L_800304D8;
    // 0x8003047C: sra         $a1, $s1, 24
    ctx->r5 = S32(SIGNED(ctx->r17) >> 24);
L_80030480:
    // 0x80030480: sra         $a0, $s2, 24
    ctx->r4 = S32(SIGNED(ctx->r18) >> 24);
    // 0x80030484: lui         $a2, 0x8003
    ctx->r6 = S32(0X8003 << 16);
    // 0x80030488: addiu       $a2, $a2, -0x4D4
    ctx->r6 = ADD32(ctx->r6, -0X4D4);
    // 0x8003048C: j           L_800304D8
    // 0x80030490: sra         $a1, $s1, 24
    ctx->r5 = S32(SIGNED(ctx->r17) >> 24);
        goto L_800304D8;
    // 0x80030490: sra         $a1, $s1, 24
    ctx->r5 = S32(SIGNED(ctx->r17) >> 24);
L_80030494:
    // 0x80030494: lui         $a2, 0x8003
    ctx->r6 = S32(0X8003 << 16);
    // 0x80030498: addiu       $a2, $a2, -0x1270
    ctx->r6 = ADD32(ctx->r6, -0X1270);
    // 0x8003049C: j           L_800304D8
    // 0x800304A0: sra         $a1, $s1, 24
    ctx->r5 = S32(SIGNED(ctx->r17) >> 24);
        goto L_800304D8;
    // 0x800304A0: sra         $a1, $s1, 24
    ctx->r5 = S32(SIGNED(ctx->r17) >> 24);
L_800304A4:
    // 0x800304A4: sra         $a0, $s2, 24
    ctx->r4 = S32(SIGNED(ctx->r18) >> 24);
    // 0x800304A8: lui         $a2, 0x8003
    ctx->r6 = S32(0X8003 << 16);
    // 0x800304AC: addiu       $a2, $a2, -0x3E4
    ctx->r6 = ADD32(ctx->r6, -0X3E4);
    // 0x800304B0: j           L_800304D8
    // 0x800304B4: sra         $a1, $s1, 24
    ctx->r5 = S32(SIGNED(ctx->r17) >> 24);
        goto L_800304D8;
    // 0x800304B4: sra         $a1, $s1, 24
    ctx->r5 = S32(SIGNED(ctx->r17) >> 24);
L_800304B8:
    // 0x800304B8: sra         $a0, $s2, 24
    ctx->r4 = S32(SIGNED(ctx->r18) >> 24);
    // 0x800304BC: lui         $a2, 0x8003
    ctx->r6 = S32(0X8003 << 16);
    // 0x800304C0: addiu       $a2, $a2, -0x34E0
    ctx->r6 = ADD32(ctx->r6, -0X34E0);
    // 0x800304C4: j           L_800304D8
    // 0x800304C8: sra         $a1, $s1, 24
    ctx->r5 = S32(SIGNED(ctx->r17) >> 24);
        goto L_800304D8;
    // 0x800304C8: sra         $a1, $s1, 24
    ctx->r5 = S32(SIGNED(ctx->r17) >> 24);
L_800304CC:
    // 0x800304CC: sra         $a1, $s1, 24
    ctx->r5 = S32(SIGNED(ctx->r17) >> 24);
    // 0x800304D0: lui         $a2, 0x8003
    ctx->r6 = S32(0X8003 << 16);
    // 0x800304D4: addiu       $a2, $a2, -0x33A8
    ctx->r6 = ADD32(ctx->r6, -0X33A8);
L_800304D8:
    // 0x800304D8: jal         0x800283A8
    // 0x800304DC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_800283A8_37A8(rdram, ctx);
        goto after_0;
    // 0x800304DC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_0:
L_800304E0:
    // 0x800304E0: lw          $a3, 0x0($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X0);
    // 0x800304E4: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
    // 0x800304E8: and         $v0, $a3, $v1
    ctx->r2 = ctx->r7 & ctx->r3;
    // 0x800304EC: beq         $v0, $v1, L_80030500
    if (ctx->r2 == ctx->r3) {
        // 0x800304F0: srl         $v1, $a3, 8
        ctx->r3 = S32(U32(ctx->r7) >> 8);
            goto L_80030500;
    }
    // 0x800304F0: srl         $v1, $a3, 8
    ctx->r3 = S32(U32(ctx->r7) >> 8);
    // 0x800304F4: lui         $v0, 0x8000
    ctx->r2 = S32(0X8000 << 16);
    // 0x800304F8: j           L_8003038C
    // 0x800304FC: or          $s0, $v1, $v0
    ctx->r16 = ctx->r3 | ctx->r2;
        goto L_8003038C;
    // 0x800304FC: or          $s0, $v1, $v0
    ctx->r16 = ctx->r3 | ctx->r2;
L_80030500:
    // 0x80030500: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80030504: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80030508: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8003050C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80030510: jr          $ra
    // 0x80030514: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80030514: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8009CCA0_780A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8009CCA0: lui         $t0, 0x3F80
    ctx->r8 = S32(0X3F80 << 16);
    // 0x8009CCA4: sw          $t0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r8;
    // 0x8009CCA8: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x8009CCAC: sw          $zero, 0x8($a0)
    MEM_W(0X8, ctx->r4) = 0;
    // 0x8009CCB0: sw          $zero, 0xC($a0)
    MEM_W(0XC, ctx->r4) = 0;
    // 0x8009CCB4: sw          $zero, 0x10($a0)
    MEM_W(0X10, ctx->r4) = 0;
    // 0x8009CCB8: sw          $t0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r8;
    // 0x8009CCBC: sw          $zero, 0x18($a0)
    MEM_W(0X18, ctx->r4) = 0;
    // 0x8009CCC0: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x8009CCC4: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x8009CCC8: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x8009CCCC: sw          $t0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r8;
    // 0x8009CCD0: sw          $zero, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = 0;
    // 0x8009CCD4: sw          $zero, 0x30($a0)
    MEM_W(0X30, ctx->r4) = 0;
    // 0x8009CCD8: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x8009CCDC: sw          $zero, 0x38($a0)
    MEM_W(0X38, ctx->r4) = 0;
    // 0x8009CCE0: jr          $ra
    // 0x8009CCE4: sw          $t0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r8;
    TRACE_RETURN()
    return;
    // 0x8009CCE4: sw          $t0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r8;
    // 0x8009CCE8: nop

    // 0x8009CCEC: nop

    // 0x8009CCF0: nop

    // 0x8009CCF4: nop

    // 0x8009CCF8: nop

    // 0x8009CCFC: nop

;}
RECOMP_FUNC void func_8007C108_57508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007C108: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007C10C: lw          $v0, -0x41D0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X41D0);
    // 0x8007C110: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007C114: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8007C118: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x8007C11C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8007C120: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8007C124: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8007C128: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x8007C12C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8007C130: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x8007C134: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8007C138: addu        $s1, $a3, $zero
    ctx->r17 = ADD32(ctx->r7, 0);
    // 0x8007C13C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8007C140: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8007C144: blez        $v0, L_8007C1C8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8007C148: sw          $s4, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r20;
            goto L_8007C1C8;
    }
    // 0x8007C148: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8007C14C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8007C150:
    // 0x8007C150: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007C154: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007C158: lw          $v0, -0x44D0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X44D0);
    // 0x8007C15C: bne         $v0, $s0, L_8007C1B4
    if (ctx->r2 != ctx->r16) {
        // 0x8007C160: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8007C1B4;
    }
    // 0x8007C160: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8007C164: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007C168: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007C16C: lbu         $v0, -0x44C8($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X44C8);
    // 0x8007C170: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x8007C174: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007C178: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007C17C: lbu         $v0, -0x44C7($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X44C7);
    // 0x8007C180: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x8007C184: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007C188: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007C18C: lbu         $v0, -0x44C6($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X44C6);
    // 0x8007C190: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8007C194: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007C198: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007C19C: lbu         $v0, -0x44C5($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X44C5);
    // 0x8007C1A0: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x8007C1A4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007C1A8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007C1AC: j           L_8007C42C
    // 0x8007C1B0: lw          $v0, -0x44CC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X44CC);
        goto L_8007C42C;
    // 0x8007C1B0: lw          $v0, -0x44CC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X44CC);
L_8007C1B4:
    // 0x8007C1B4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007C1B8: lw          $v0, -0x41D0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X41D0);
    // 0x8007C1BC: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8007C1C0: bne         $v0, $zero, L_8007C150
    if (ctx->r2 != 0) {
        // 0x8007C1C4: addiu       $v1, $v1, 0xC
        ctx->r3 = ADD32(ctx->r3, 0XC);
            goto L_8007C150;
    }
    // 0x8007C1C4: addiu       $v1, $v1, 0xC
    ctx->r3 = ADD32(ctx->r3, 0XC);
L_8007C1C8:
    // 0x8007C1C8: jal         0x800281C8
    // 0x8007C1CC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_800281C8_35C8(rdram, ctx);
        goto after_0;
    // 0x8007C1CC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_0:
    // 0x8007C1D0: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x8007C1D4: beq         $s4, $zero, L_8007C428
    if (ctx->r20 == 0) {
        // 0x8007C1D8: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_8007C428;
    }
    // 0x8007C1D8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8007C1DC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8007C1E0: jal         0x8009A3B4
    // 0x8007C1E4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8007C1E4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8007C1E8: addiu       $a0, $s4, 0x10
    ctx->r4 = ADD32(ctx->r20, 0X10);
    // 0x8007C1EC: addiu       $a1, $s0, 0x10
    ctx->r5 = ADD32(ctx->r16, 0X10);
    // 0x8007C1F0: jal         0x8009A3B4
    // 0x8007C1F4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8007C1F4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8007C1F8: addiu       $a0, $s4, 0x20
    ctx->r4 = ADD32(ctx->r20, 0X20);
    // 0x8007C1FC: addiu       $a1, $s0, 0x20
    ctx->r5 = ADD32(ctx->r16, 0X20);
    // 0x8007C200: jal         0x8009A3B4
    // 0x8007C204: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8007C204: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x8007C208: addiu       $a0, $s4, 0x30
    ctx->r4 = ADD32(ctx->r20, 0X30);
    // 0x8007C20C: addiu       $a1, $s0, 0x30
    ctx->r5 = ADD32(ctx->r16, 0X30);
    // 0x8007C210: jal         0x8009A3B4
    // 0x8007C214: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8007C214: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8007C218: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x8007C21C: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8007C220: lh          $a1, 0x28($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X28);
    // 0x8007C224: lh          $a2, 0x38($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X38);
    // 0x8007C228: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007C22C: bnel        $v0, $zero, L_8007C234
    if (ctx->r2 != 0) {
        // 0x8007C230: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8007C234;
    }
    goto skip_0;
    // 0x8007C230: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_0:
L_8007C234:
    // 0x8007C234: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007C238: bnel        $v0, $zero, L_8007C240
    if (ctx->r2 != 0) {
        // 0x8007C23C: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_8007C240;
    }
    goto skip_1;
    // 0x8007C23C: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    skip_1:
L_8007C240:
    // 0x8007C240: slt         $v0, $a2, $v1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007C244: bnel        $v0, $zero, L_8007C24C
    if (ctx->r2 != 0) {
        // 0x8007C248: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8007C24C;
    }
    goto skip_2;
    // 0x8007C248: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    skip_2:
L_8007C24C:
    // 0x8007C24C: sra         $v0, $v1, 6
    ctx->r2 = S32(SIGNED(ctx->r3) >> 6);
    // 0x8007C250: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x8007C254: lh          $v1, 0xA($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XA);
    // 0x8007C258: lh          $a0, 0x1A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X1A);
    // 0x8007C25C: lh          $a1, 0x2A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X2A);
    // 0x8007C260: lh          $a2, 0x3A($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X3A);
    // 0x8007C264: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007C268: bnel        $v0, $zero, L_8007C270
    if (ctx->r2 != 0) {
        // 0x8007C26C: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8007C270;
    }
    goto skip_3;
    // 0x8007C26C: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_3:
L_8007C270:
    // 0x8007C270: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007C274: bnel        $v0, $zero, L_8007C27C
    if (ctx->r2 != 0) {
        // 0x8007C278: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_8007C27C;
    }
    goto skip_4;
    // 0x8007C278: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    skip_4:
L_8007C27C:
    // 0x8007C27C: slt         $v0, $a2, $v1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8007C280: bnel        $v0, $zero, L_8007C288
    if (ctx->r2 != 0) {
        // 0x8007C284: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8007C288;
    }
    goto skip_5;
    // 0x8007C284: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    skip_5:
L_8007C288:
    // 0x8007C288: sra         $v0, $v1, 6
    ctx->r2 = S32(SIGNED(ctx->r3) >> 6);
    // 0x8007C28C: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x8007C290: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x8007C294: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8007C298: lh          $a1, 0x28($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X28);
    // 0x8007C29C: lh          $a2, 0x38($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X38);
    // 0x8007C2A0: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8007C2A4: bnel        $v0, $zero, L_8007C2AC
    if (ctx->r2 != 0) {
        // 0x8007C2A8: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8007C2AC;
    }
    goto skip_6;
    // 0x8007C2A8: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_6:
L_8007C2AC:
    // 0x8007C2AC: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8007C2B0: bnel        $v0, $zero, L_8007C2B8
    if (ctx->r2 != 0) {
        // 0x8007C2B4: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_8007C2B8;
    }
    goto skip_7;
    // 0x8007C2B4: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    skip_7:
L_8007C2B8:
    // 0x8007C2B8: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8007C2BC: bnel        $v0, $zero, L_8007C2C4
    if (ctx->r2 != 0) {
        // 0x8007C2C0: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8007C2C4;
    }
    goto skip_8;
    // 0x8007C2C0: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    skip_8:
L_8007C2C4:
    // 0x8007C2C4: sra         $v0, $v1, 6
    ctx->r2 = S32(SIGNED(ctx->r3) >> 6);
    // 0x8007C2C8: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8007C2CC: lh          $v1, 0xA($s0)
    ctx->r3 = MEM_H(ctx->r16, 0XA);
    // 0x8007C2D0: lh          $a0, 0x1A($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X1A);
    // 0x8007C2D4: lh          $a1, 0x2A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X2A);
    // 0x8007C2D8: lh          $a2, 0x3A($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X3A);
    // 0x8007C2DC: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8007C2E0: bnel        $v0, $zero, L_8007C2E8
    if (ctx->r2 != 0) {
        // 0x8007C2E4: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_8007C2E8;
    }
    goto skip_9;
    // 0x8007C2E4: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    skip_9:
L_8007C2E8:
    // 0x8007C2E8: slt         $v0, $v1, $a1
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8007C2EC: bnel        $v0, $zero, L_8007C2F4
    if (ctx->r2 != 0) {
        // 0x8007C2F0: addu        $v1, $a1, $zero
        ctx->r3 = ADD32(ctx->r5, 0);
            goto L_8007C2F4;
    }
    goto skip_10;
    // 0x8007C2F0: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
    skip_10:
L_8007C2F4:
    // 0x8007C2F4: slt         $v0, $v1, $a2
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x8007C2F8: bnel        $v0, $zero, L_8007C300
    if (ctx->r2 != 0) {
        // 0x8007C2FC: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8007C300;
    }
    goto skip_11;
    // 0x8007C2FC: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    skip_11:
L_8007C300:
    // 0x8007C300: sra         $v0, $v1, 6
    ctx->r2 = S32(SIGNED(ctx->r3) >> 6);
    // 0x8007C304: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x8007C308: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x8007C30C: addiu       $v1, $zero, -0x2
    ctx->r3 = ADD32(0, -0X2);
    // 0x8007C310: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8007C314: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x8007C318: lw          $v0, 0x0($s3)
    ctx->r2 = MEM_W(ctx->r19, 0X0);
    // 0x8007C31C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8007C320: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
    // 0x8007C324: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8007C328: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8007C32C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8007C330: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x8007C334: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8007C338: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
    // 0x8007C33C: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8007C340: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x8007C344: bne         $v1, $v0, L_8007C350
    if (ctx->r3 != ctx->r2) {
        // 0x8007C348: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_8007C350;
    }
    // 0x8007C348: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x8007C34C: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
L_8007C350:
    // 0x8007C350: lw          $v1, 0x0($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X0);
    // 0x8007C354: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x8007C358: bne         $v1, $v0, L_8007C364
    if (ctx->r3 != ctx->r2) {
        // 0x8007C35C: addiu       $v0, $v1, 0x2
        ctx->r2 = ADD32(ctx->r3, 0X2);
            goto L_8007C364;
    }
    // 0x8007C35C: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x8007C360: sw          $v0, 0x0($s5)
    MEM_W(0X0, ctx->r21) = ctx->r2;
L_8007C364:
    // 0x8007C364: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8007C368: lw          $v1, -0x41D0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X41D0);
    // 0x8007C36C: slti        $v0, $v1, 0x40
    ctx->r2 = SIGNED(ctx->r3) < 0X40 ? 1 : 0;
    // 0x8007C370: beq         $v0, $zero, L_8007C428
    if (ctx->r2 == 0) {
        // 0x8007C374: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_8007C428;
    }
    // 0x8007C374: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8007C378: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007C37C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007C380: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C384: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007C388: sw          $s0, -0x44D0($at)
    MEM_W(-0X44D0, ctx->r1) = ctx->r16;
    // 0x8007C38C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C390: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007C394: sw          $s4, -0x44CC($at)
    MEM_W(-0X44CC, ctx->r1) = ctx->r20;
    // 0x8007C398: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x8007C39C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C3A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007C3A4: sb          $v1, -0x44C8($at)
    MEM_B(-0X44C8, ctx->r1) = ctx->r3;
    // 0x8007C3A8: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8007C3AC: lw          $v1, -0x41D0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X41D0);
    // 0x8007C3B0: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8007C3B4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8007C3B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007C3BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007C3C0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C3C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007C3C8: sb          $a0, -0x44C7($at)
    MEM_B(-0X44C7, ctx->r1) = ctx->r4;
    // 0x8007C3CC: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8007C3D0: lw          $v1, -0x41D0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X41D0);
    // 0x8007C3D4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8007C3D8: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8007C3DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007C3E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007C3E4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C3E8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007C3EC: sb          $a0, -0x44C6($at)
    MEM_B(-0X44C6, ctx->r1) = ctx->r4;
    // 0x8007C3F0: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8007C3F4: lw          $v1, -0x41D0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X41D0);
    // 0x8007C3F8: lw          $a0, 0x0($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X0);
    // 0x8007C3FC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8007C400: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007C404: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007C408: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C40C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007C410: sb          $a0, -0x44C5($at)
    MEM_B(-0X44C5, ctx->r1) = ctx->r4;
    // 0x8007C414: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007C418: lw          $v0, -0x41D0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X41D0);
    // 0x8007C41C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007C420: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C424: sw          $v0, -0x41D0($at)
    MEM_W(-0X41D0, ctx->r1) = ctx->r2;
L_8007C428:
    // 0x8007C428: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
L_8007C42C:
    // 0x8007C42C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8007C430: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8007C434: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8007C438: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8007C43C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8007C440: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8007C444: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8007C448: jr          $ra
    // 0x8007C44C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8007C44C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80089EA0_652A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80089EA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80089EA4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80089EA8: jal         0x80093A20
    // 0x80089EAC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80093A20_6EE20(rdram, ctx);
        goto after_0;
    // 0x80089EAC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_0:
    // 0x80089EB0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x80089EB4: sw          $v0, 0x2BE8($at)
    MEM_W(0X2BE8, ctx->r1) = ctx->r2;
    // 0x80089EB8: bne         $v0, $zero, L_80089ED0
    if (ctx->r2 != 0) {
        // 0x80089EBC: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80089ED0;
    }
    // 0x80089EBC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80089EC0: jal         0x80093AB0
    // 0x80089EC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80093AB0_6EEB0(rdram, ctx);
        goto after_1;
    // 0x80089EC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80089EC8: jal         0x80089FA0
    // 0x80089ECC: nop

    func_80089FA0_653A0(rdram, ctx);
        goto after_2;
    // 0x80089ECC: nop

    after_2:
L_80089ED0:
    // 0x80089ED0: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80089ED4: lw          $v0, 0x2BE8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2BE8);
    // 0x80089ED8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80089EDC: jr          $ra
    // 0x80089EE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80089EE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80091DA4_6D1A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80091DA4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80091DA8: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x80091DAC: mtc1        $a0, $f0
    ctx->f0.u32l = ctx->r4;
    // 0x80091DB0: nop

    // 0x80091DB4: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    // 0x80091DB8: lwc1        $f2, 0x40($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0X40);
    // 0x80091DBC: cvt.s.w     $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    ctx->f2.fl = CVT_S_W(ctx->f2.u32l);
    // 0x80091DC0: mul.s       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f2.fl);
    // 0x80091DC4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80091DC8: ldc1        $f2, 0x2F00($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X2F00);
    // 0x80091DCC: cvt.d.s     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f0.d = CVT_D_S(ctx->f0.fl);
    // 0x80091DD0: div.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = DIV_D(ctx->f0.d, ctx->f2.d);
    // 0x80091DD4: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80091DD8: ldc1        $f2, 0x2F08($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, 0X2F08);
    // 0x80091DDC: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x80091DE0: cvt.s.d     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.d); 
    ctx->f0.fl = CVT_S_D(ctx->f0.d);
    // 0x80091DE4: trunc.w.s   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80091DE8: mfc1        $v1, $f2
    ctx->r3 = (int32_t)ctx->f2.u32l;
    // 0x80091DEC: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x80091DF0: jr          $ra
    // 0x80091DF4: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80091DF4: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80091DF8: nop

    // 0x80091DFC: nop

;}
RECOMP_FUNC void func_8007023C_4B63C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007023C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80070240: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80070244: addiu       $v0, $zero, 0x83
    ctx->r2 = ADD32(0, 0X83);
    // 0x80070248: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8007024C: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80070250: sb          $v0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r2;
    // 0x80070254: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80070258: beq         $a2, $v0, L_800702AC
    if (ctx->r6 == ctx->r2) {
        // 0x8007025C: sb          $zero, 0x3($a1)
        MEM_B(0X3, ctx->r5) = 0;
            goto L_800702AC;
    }
    // 0x8007025C: sb          $zero, 0x3($a1)
    MEM_B(0X3, ctx->r5) = 0;
    // 0x80070260: slti        $v0, $a2, 0x2
    ctx->r2 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
    // 0x80070264: beql        $v0, $zero, L_8007027C
    if (ctx->r2 == 0) {
        // 0x80070268: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8007027C;
    }
    goto skip_0;
    // 0x80070268: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8007026C: beq         $a2, $zero, L_8007028C
    if (ctx->r6 == 0) {
        // 0x80070270: nop
    
            goto L_8007028C;
    }
    // 0x80070270: nop

    // 0x80070274: j           L_800702E8
    // 0x80070278: nop

        goto L_800702E8;
    // 0x80070278: nop

L_8007027C:
    // 0x8007027C: beq         $a2, $v0, L_800702CC
    if (ctx->r6 == ctx->r2) {
        // 0x80070280: nop
    
            goto L_800702CC;
    }
    // 0x80070280: nop

    // 0x80070284: j           L_800702E8
    // 0x80070288: nop

        goto L_800702E8;
    // 0x80070288: nop

L_8007028C:
    // 0x8007028C: lhu         $v0, 0x14($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X14);
    // 0x80070290: sh          $v0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r2;
    // 0x80070294: lhu         $v0, 0x16($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X16);
    // 0x80070298: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8007029C: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x800702A0: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x800702A4: j           L_800702E8
    // 0x800702A8: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
        goto L_800702E8;
    // 0x800702A8: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
L_800702AC:
    // 0x800702AC: lhu         $v0, 0x418($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X418);
    // 0x800702B0: sh          $v0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r2;
    // 0x800702B4: lhu         $v0, 0x41A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X41A);
    // 0x800702B8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x800702BC: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x800702C0: lhu         $v0, 0x41C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X41C);
    // 0x800702C4: j           L_800702E8
    // 0x800702C8: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
        goto L_800702E8;
    // 0x800702C8: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
L_800702CC:
    // 0x800702CC: lhu         $v0, 0x400($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X400);
    // 0x800702D0: sh          $v0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r2;
    // 0x800702D4: lhu         $v0, 0x402($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X402);
    // 0x800702D8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x800702DC: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x800702E0: lhu         $v0, 0x404($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X404);
    // 0x800702E4: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
L_800702E8:
    // 0x800702E8: jr          $ra
    // 0x800702EC: nop

    TRACE_RETURN()
    return;
    // 0x800702EC: nop

;}
RECOMP_FUNC void func_80071060_4C460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80071060: sll         $v1, $a1, 2
    ctx->r3 = S32(ctx->r5 << 2);
    // 0x80071064: sll         $a1, $a1, 3
    ctx->r5 = S32(ctx->r5 << 3);
    // 0x80071068: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x8007106C: lb          $v0, 0x4F4($a0)
    ctx->r2 = MEM_B(ctx->r4, 0X4F4);
    // 0x80071070: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80071074: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80071078: lw          $v1, 0x351C($at)
    ctx->r3 = MEM_W(ctx->r1, 0X351C);
    // 0x8007107C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80071080: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80071084: jr          $ra
    // 0x80071088: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    TRACE_RETURN()
    return;
    // 0x80071088: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
;}
RECOMP_FUNC void func_800675D8_429D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800675D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800675DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x800675E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x800675E4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x800675E8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x800675EC: lw          $a2, 0x6C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X6C);
    // 0x800675F0: lbu         $s1, 0x1($a2)
    ctx->r17 = MEM_BU(ctx->r6, 0X1);
    // 0x800675F4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x800675F8: addu        $v1, $v1, $s1
    ctx->r3 = ADD32(ctx->r3, ctx->r17);
    // 0x800675FC: lbu         $v1, -0x6F90($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X6F90);
    // 0x80067600: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
    // 0x80067604: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x80067608: addu        $a3, $a3, $a0
    ctx->r7 = ADD32(ctx->r7, ctx->r4);
    // 0x8006760C: lw          $a3, 0xBC8($a3)
    ctx->r7 = MEM_W(ctx->r7, 0XBC8);
    // 0x80067610: sltiu       $v0, $v1, 0x4
    ctx->r2 = ctx->r3 < 0X4 ? 1 : 0;
    // 0x80067614: beq         $v0, $zero, L_80067634
    if (ctx->r2 == 0) {
        // 0x80067618: addiu       $a2, $a2, 0x7
        ctx->r6 = ADD32(ctx->r6, 0X7);
            goto L_80067634;
    }
    // 0x80067618: addiu       $a2, $a2, 0x7
    ctx->r6 = ADD32(ctx->r6, 0X7);
    // 0x8006761C: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80067620: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80067624: lw          $a1, -0x3BF0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X3BF0);
    // 0x80067628: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006762C: j           L_80067660
    // 0x80067630: subu        $a1, $a3, $a1
    ctx->r5 = SUB32(ctx->r7, ctx->r5);
        goto L_80067660;
    // 0x80067630: subu        $a1, $a3, $a1
    ctx->r5 = SUB32(ctx->r7, ctx->r5);
L_80067634:
    // 0x80067634: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80067638: addiu       $v0, $v0, -0x3BAD
    ctx->r2 = ADD32(ctx->r2, -0X3BAD);
    // 0x8006763C: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x80067640: lbu         $a1, 0x0($v1)
    ctx->r5 = MEM_BU(ctx->r3, 0X0);
    // 0x80067644: mult        $a1, $a3
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80067648: mflo        $a1
    ctx->r5 = lo;
    // 0x8006764C: addiu       $v0, $v0, -0x1F
    ctx->r2 = ADD32(ctx->r2, -0X1F);
    // 0x80067650: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80067654: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80067658: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006765C: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
L_80067660:
    // 0x80067660: jal         0x80069518
    // 0x80067664: nop

    func_80069518_44918(rdram, ctx);
        goto after_0;
    // 0x80067664: nop

    after_0:
    // 0x80067668: lhu         $v0, 0xC0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC0);
    // 0x8006766C: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x80067670: sh          $v1, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r3;
    // 0x80067674: lw          $v1, 0x6C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X6C);
    // 0x80067678: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8006767C: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x80067680: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80067684: sw          $v1, 0x4C($v0)
    MEM_W(0X4C, ctx->r2) = ctx->r3;
    // 0x80067688: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8006768C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80067690: lbu         $v0, -0x6F90($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6F90);
    // 0x80067694: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80067698: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8006769C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800676A0: lw          $v0, 0x2B7C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X2B7C);
    // 0x800676A4: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
    // 0x800676A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800676AC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x800676B0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800676B4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x800676B8: jr          $ra
    // 0x800676BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x800676BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800721F0_4D5F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800721F0: bltz        $a0, L_800722A0
    if (SIGNED(ctx->r4) < 0) {
        // 0x800721F4: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_800722A0;
    }
    // 0x800721F4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x800721F8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800721FC: lb          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC8);
    // 0x80072200: lui         $v1, 0x800B
    ctx->r3 = S32(0X800B << 16);
    // 0x80072204: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80072208: lb          $v1, 0x3580($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X3580);
    // 0x8007220C: bltz        $v1, L_80072294
    if (SIGNED(ctx->r3) < 0) {
        // 0x80072210: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_80072294;
    }
    // 0x80072210: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80072214: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80072218: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8007221C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80072220: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80072224: lhu         $v0, 0x5086($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X5086);
    // 0x80072228: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8007222C: beq         $v0, $zero, L_8007229C
    if (ctx->r2 == 0) {
        // 0x80072230: sll         $v1, $v1, 9
        ctx->r3 = S32(ctx->r3 << 9);
            goto L_8007229C;
    }
    // 0x80072230: sll         $v1, $v1, 9
    ctx->r3 = S32(ctx->r3 << 9);
    // 0x80072234: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80072238: addiu       $v0, $v0, -0x3590
    ctx->r2 = ADD32(ctx->r2, -0X3590);
    // 0x8007223C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80072240: sra         $v0, $a0, 4
    ctx->r2 = S32(SIGNED(ctx->r4) >> 4);
    // 0x80072244: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80072248: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007224C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80072250: andi        $v0, $a0, 0xF
    ctx->r2 = ctx->r4 & 0XF;
    // 0x80072254: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80072258: srlv        $v1, $v1, $v0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r2 & 31));
    // 0x8007225C: andi        $v1, $v1, 0x3
    ctx->r3 = ctx->r3 & 0X3;
    // 0x80072260: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80072264: beq         $v1, $v0, L_800722A0
    if (ctx->r3 == ctx->r2) {
        // 0x80072268: nop
    
            goto L_800722A0;
    }
    // 0x80072268: nop

    // 0x8007226C: beq         $v1, $zero, L_8007229C
    if (ctx->r3 == 0) {
        // 0x80072270: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8007229C;
    }
    // 0x80072270: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80072274: beq         $v1, $v0, L_8007228C
    if (ctx->r3 == ctx->r2) {
        // 0x80072278: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8007228C;
    }
    // 0x80072278: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8007227C: beq         $v1, $v0, L_800722A0
    if (ctx->r3 == ctx->r2) {
        // 0x80072280: nop
    
            goto L_800722A0;
    }
    // 0x80072280: nop

    // 0x80072284: j           L_800722A0
    // 0x80072288: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800722A0;
    // 0x80072288: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8007228C:
    // 0x8007228C: j           L_800722A0
    // 0x80072290: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_800722A0;
    // 0x80072290: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80072294:
    // 0x80072294: j           L_800722A0
    // 0x80072298: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800722A0;
    // 0x80072298: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8007229C:
    // 0x8007229C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_800722A0:
    // 0x800722A0: jr          $ra
    // 0x800722A4: nop

    TRACE_RETURN()
    return;
    // 0x800722A4: nop

;}
RECOMP_FUNC void func_8002C678_7A78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002C678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002C67C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002C680: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8002C684: addiu       $a1, $a1, -0x78E0
    ctx->r5 = ADD32(ctx->r5, -0X78E0);
    // 0x8002C688: jal         0x8009A3B4
    // 0x8002C68C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8002C68C: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_0:
    // 0x8002C690: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002C694: jr          $ra
    // 0x8002C698: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002C698: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80075760_50B60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80075760: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80075764: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80075768: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8007576C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80075770: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x80075774: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x80075778: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8007577C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80075780: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80075784: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80075788: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8007578C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80075790: lb          $v1, 0x6($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X6);
    // 0x80075794: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80075798: beq         $v1, $s0, L_80075834
    if (ctx->r3 == ctx->r16) {
        // 0x8007579C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80075834;
    }
    // 0x8007579C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x800757A0: beql        $v0, $zero, L_800757B8
    if (ctx->r2 == 0) {
        // 0x800757A4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_800757B8;
    }
    goto skip_0;
    // 0x800757A4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x800757A8: beq         $v1, $zero, L_800757D0
    if (ctx->r3 == 0) {
        // 0x800757AC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_800757D0;
    }
    // 0x800757AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800757B0: j           L_80075BCC
    // 0x800757B4: nop

        goto L_80075BCC;
    // 0x800757B4: nop

L_800757B8:
    // 0x800757B8: beq         $v1, $v0, L_80075B5C
    if (ctx->r3 == ctx->r2) {
        // 0x800757BC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80075B5C;
    }
    // 0x800757BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x800757C0: beq         $v1, $v0, L_80075BAC
    if (ctx->r3 == ctx->r2) {
        // 0x800757C4: lui         $v1, 0x8
        ctx->r3 = S32(0X8 << 16);
            goto L_80075BAC;
    }
    // 0x800757C4: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x800757C8: j           L_80075BCC
    // 0x800757CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80075BCC;
    // 0x800757CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800757D0:
    // 0x800757D0: jal         0x80061724
    // 0x800757D4: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_0;
    // 0x800757D4: nop

    after_0:
    // 0x800757D8: lb          $v0, 0x4($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X4);
    // 0x800757DC: bne         $v0, $s0, L_800757F0
    if (ctx->r2 != ctx->r16) {
        // 0x800757E0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_800757F0;
    }
    // 0x800757E0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x800757E4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800757E8: j           L_800757F8
    // 0x800757EC: lw          $a1, 0x280C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X280C);
        goto L_800757F8;
    // 0x800757EC: lw          $a1, 0x280C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X280C);
L_800757F0:
    // 0x800757F0: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800757F4: lw          $a1, 0x2860($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2860);
L_800757F8:
    // 0x800757F8: jal         0x80061510
    // 0x800757FC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_1;
    // 0x800757FC: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_1:
    // 0x80075800: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80075804: lw          $a1, 0x2820($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2820);
    // 0x80075808: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8007580C: jal         0x80061510
    // 0x80075810: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_2;
    // 0x80075810: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_2:
    // 0x80075814: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80075818: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x8007581C: sw          $v1, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r3;
    // 0x80075820: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80075824: jal         0x8007694C
    // 0x80075828: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    func_8007694C_51D4C(rdram, ctx);
        goto after_3;
    // 0x80075828: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    after_3:
    // 0x8007582C: j           L_80075BCC
    // 0x80075830: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80075BCC;
    // 0x80075830: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80075834:
    // 0x80075834: lw          $v0, 0xC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XC);
    // 0x80075838: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8007583C: bne         $v0, $zero, L_80075BC8
    if (ctx->r2 != 0) {
        // 0x80075840: sw          $v0, 0xC($s1)
        MEM_W(0XC, ctx->r17) = ctx->r2;
            goto L_80075BC8;
    }
    // 0x80075840: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x80075844: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x80075848: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8007584C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80075850: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x80075854: lui         $s6, 0x800B
    ctx->r22 = S32(0X800B << 16);
    // 0x80075858: addiu       $s6, $s6, 0x2F00
    ctx->r22 = ADD32(ctx->r22, 0X2F00);
    // 0x8007585C: lui         $fp, 0x800B
    ctx->r30 = S32(0X800B << 16);
    // 0x80075860: addiu       $fp, $fp, 0x2BFC
    ctx->r30 = ADD32(ctx->r30, 0X2BFC);
    // 0x80075864: lui         $s5, 0x800B
    ctx->r21 = S32(0X800B << 16);
    // 0x80075868: addiu       $s5, $s5, 0x2F20
    ctx->r21 = ADD32(ctx->r21, 0X2F20);
L_8007586C:
    // 0x8007586C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80075870: lbu         $a0, 0x469E($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X469E);
    // 0x80075874: sll         $v1, $s2, 16
    ctx->r3 = S32(ctx->r18 << 16);
    // 0x80075878: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8007587C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80075880: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80075884: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80075888: lw          $a1, 0x45E0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X45E0);
    // 0x8007588C: sll         $v1, $v1, 7
    ctx->r3 = S32(ctx->r3 << 7);
    // 0x80075890: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x80075894: addiu       $v0, $v0, -0x2E10
    ctx->r2 = ADD32(ctx->r2, -0X2E10);
    // 0x80075898: addu        $s0, $v1, $v0
    ctx->r16 = ADD32(ctx->r3, ctx->r2);
    // 0x8007589C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x800758A0: jal         0x80074020
    // 0x800758A4: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_80074020_4F420(rdram, ctx);
        goto after_4;
    // 0x800758A4: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_4:
    // 0x800758A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x800758AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800758B0: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800758B4: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x800758B8: beq         $v0, $zero, L_80075A60
    if (ctx->r2 == 0) {
        // 0x800758BC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80075A60;
    }
    // 0x800758BC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800758C0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x800758C4: addu        $at, $at, $v0
    gpr jr_addend_800758CC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800758C8: lw          $v0, 0x2B40($at)
    ctx->r2 = ADD32(ctx->r1, 0X2B40);
    // 0x800758CC: jr          $v0
    // 0x800758D0: nop

    switch (jr_addend_800758CC >> 2) {
        case 0: goto L_800758D4; break;
        case 1: goto L_800758E0; break;
        case 2: goto L_80075994; break;
        case 3: goto L_800759A0; break;
        case 4: goto L_80075A60; break;
        case 5: goto L_80075B08; break;
        default: switch_error(__func__, 0x800758CC, 0x800D2B40);
    }
    // 0x800758D0: nop

L_800758D4:
    // 0x800758D4: sb          $s7, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r23;
    // 0x800758D8: j           L_80075B14
    // 0x800758DC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
        goto L_80075B14;
    // 0x800758DC: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_800758E0:
    // 0x800758E0: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x800758E4: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800758E8: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x800758EC: beq         $v0, $zero, L_8007598C
    if (ctx->r2 == 0) {
        // 0x800758F0: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_8007598C;
    }
    // 0x800758F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x800758F4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x800758F8: addu        $a2, $v0, $s6
    ctx->r6 = ADD32(ctx->r2, ctx->r22);
L_800758FC:
    // 0x800758FC: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x80075900: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80075904: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80075908: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x8007590C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80075910: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80075914: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80075918: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007591C: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x80075920: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80075924: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80075928: addiu       $v0, $a3, 0x1
    ctx->r2 = ADD32(ctx->r7, 0X1);
    // 0x8007592C: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80075930: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80075934: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80075938: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8007593C: slti        $v0, $v0, 0xD
    ctx->r2 = SIGNED(ctx->r2) < 0XD ? 1 : 0;
    // 0x80075940: bne         $v0, $zero, L_800758FC
    if (ctx->r2 != 0) {
        // 0x80075944: sb          $v1, 0x0($a1)
        MEM_B(0X0, ctx->r5) = ctx->r3;
            goto L_800758FC;
    }
    // 0x80075944: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x80075948: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8007594C: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80075950: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x80075954: addu        $a2, $v0, $s5
    ctx->r6 = ADD32(ctx->r2, ctx->r21);
L_80075958:
    // 0x80075958: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    // 0x8007595C: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80075960: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x80075964: addu        $v0, $s0, $v1
    ctx->r2 = ADD32(ctx->r16, ctx->r3);
    // 0x80075968: lbu         $a1, 0x1($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X1);
    // 0x8007596C: addiu       $v0, $a3, 0x1
    ctx->r2 = ADD32(ctx->r7, 0X1);
    // 0x80075970: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80075974: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80075978: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8007597C: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x80075980: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80075984: bne         $v0, $zero, L_80075958
    if (ctx->r2 != 0) {
        // 0x80075988: sb          $a1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r5;
            goto L_80075958;
    }
    // 0x80075988: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
L_8007598C:
    // 0x8007598C: j           L_80075B14
    // 0x80075990: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80075B14;
    // 0x80075990: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80075994:
    // 0x80075994: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80075998: j           L_80075BA0
    // 0x8007599C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
        goto L_80075BA0;
    // 0x8007599C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_800759A0:
    // 0x800759A0: addiu       $v0, $s4, 0x1
    ctx->r2 = ADD32(ctx->r20, 0X1);
    // 0x800759A4: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x800759A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800759AC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800759B0: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x800759B4: beq         $v0, $v1, L_80075B98
    if (ctx->r2 == ctx->r3) {
        // 0x800759B8: addu        $a3, $zero, $zero
        ctx->r7 = ADD32(0, 0);
            goto L_80075B98;
    }
    // 0x800759B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x800759BC: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x800759C0: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x800759C4: addu        $a2, $v0, $s6
    ctx->r6 = ADD32(ctx->r2, ctx->r22);
L_800759C8:
    // 0x800759C8: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    // 0x800759CC: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x800759D0: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x800759D4: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x800759D8: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x800759DC: lbu         $a1, 0x2BCC($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X2BCC);
    // 0x800759E0: addiu       $v0, $a3, 0x1
    ctx->r2 = ADD32(ctx->r7, 0X1);
    // 0x800759E4: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x800759E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x800759EC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800759F0: slti        $v0, $v0, 0xD
    ctx->r2 = SIGNED(ctx->r2) < 0XD ? 1 : 0;
    // 0x800759F4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x800759F8: bne         $v0, $zero, L_800759C8
    if (ctx->r2 != 0) {
        // 0x800759FC: sb          $a1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r5;
            goto L_800759C8;
    }
    // 0x800759FC: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x80075A00: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80075A04: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80075A08: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x80075A0C: addu        $t0, $v0, $s5
    ctx->r8 = ADD32(ctx->r2, ctx->r21);
L_80075A10:
    // 0x80075A10: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x80075A14: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80075A18: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x80075A1C: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80075A20: addu        $a2, $a2, $a0
    ctx->r6 = ADD32(ctx->r6, ctx->r4);
    // 0x80075A24: lbu         $a2, 0x2E64($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X2E64);
    // 0x80075A28: addiu       $v0, $a3, 0x1
    ctx->r2 = ADD32(ctx->r7, 0X1);
    // 0x80075A2C: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80075A30: addu        $v1, $s0, $a0
    ctx->r3 = ADD32(ctx->r16, ctx->r4);
    // 0x80075A34: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80075A38: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80075A3C: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x80075A40: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80075A44: sb          $a2, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r6;
    // 0x80075A48: bne         $v0, $zero, L_80075A10
    if (ctx->r2 != 0) {
        // 0x80075A4C: sb          $a2, 0x0($a1)
        MEM_B(0X0, ctx->r5) = ctx->r6;
            goto L_80075A10;
    }
    // 0x80075A4C: sb          $a2, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r6;
    // 0x80075A50: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80075A54: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80075A58: j           L_80075B14
    // 0x80075A5C: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
        goto L_80075B14;
    // 0x80075A5C: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80075A60:
    // 0x80075A60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80075A64: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80075A68: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x80075A6C: addu        $a2, $v0, $s6
    ctx->r6 = ADD32(ctx->r2, ctx->r22);
L_80075A70:
    // 0x80075A70: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    // 0x80075A74: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80075A78: lw          $a0, 0x0($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X0);
    // 0x80075A7C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80075A80: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80075A84: lbu         $a1, 0x2BE4($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X2BE4);
    // 0x80075A88: addiu       $v0, $a3, 0x1
    ctx->r2 = ADD32(ctx->r7, 0X1);
    // 0x80075A8C: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80075A90: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80075A94: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80075A98: slti        $v0, $v0, 0xD
    ctx->r2 = SIGNED(ctx->r2) < 0XD ? 1 : 0;
    // 0x80075A9C: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80075AA0: bne         $v0, $zero, L_80075A70
    if (ctx->r2 != 0) {
        // 0x80075AA4: sb          $a1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r5;
            goto L_80075A70;
    }
    // 0x80075AA4: sb          $a1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r5;
    // 0x80075AA8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80075AAC: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80075AB0: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x80075AB4: addu        $t0, $v0, $s5
    ctx->r8 = ADD32(ctx->r2, ctx->r21);
L_80075AB8:
    // 0x80075AB8: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x80075ABC: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80075AC0: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    // 0x80075AC4: lui         $a2, 0x800B
    ctx->r6 = S32(0X800B << 16);
    // 0x80075AC8: addu        $a2, $a2, $a0
    ctx->r6 = ADD32(ctx->r6, ctx->r4);
    // 0x80075ACC: lbu         $a2, 0x2E64($a2)
    ctx->r6 = MEM_BU(ctx->r6, 0X2E64);
    // 0x80075AD0: addiu       $v0, $a3, 0x1
    ctx->r2 = ADD32(ctx->r7, 0X1);
    // 0x80075AD4: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80075AD8: addu        $v1, $s0, $a0
    ctx->r3 = ADD32(ctx->r16, ctx->r4);
    // 0x80075ADC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80075AE0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80075AE4: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x80075AE8: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80075AEC: sb          $a2, 0x1($v1)
    MEM_B(0X1, ctx->r3) = ctx->r6;
    // 0x80075AF0: bne         $v0, $zero, L_80075AB8
    if (ctx->r2 != 0) {
        // 0x80075AF4: sb          $a2, 0x0($a1)
        MEM_B(0X0, ctx->r5) = ctx->r6;
            goto L_80075AB8;
    }
    // 0x80075AF4: sb          $a2, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r6;
    // 0x80075AF8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80075AFC: sb          $s7, 0x7($s1)
    MEM_B(0X7, ctx->r17) = ctx->r23;
    // 0x80075B00: j           L_80075B14
    // 0x80075B04: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80075B14;
    // 0x80075B04: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80075B08:
    // 0x80075B08: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80075B0C: j           L_80075BA0
    // 0x80075B10: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
        goto L_80075BA0;
    // 0x80075B10: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
L_80075B14:
    // 0x80075B14: addiu       $v0, $s2, 0x1
    ctx->r2 = ADD32(ctx->r18, 0X1);
    // 0x80075B18: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80075B1C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80075B20: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80075B24: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x80075B28: bne         $v0, $zero, L_8007586C
    if (ctx->r2 != 0) {
        // 0x80075B2C: sll         $v0, $s3, 16
        ctx->r2 = S32(ctx->r19 << 16);
            goto L_8007586C;
    }
    // 0x80075B2C: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x80075B30: lb          $v1, 0x4($s1)
    ctx->r3 = MEM_B(ctx->r17, 0X4);
    // 0x80075B34: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80075B38: xori        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 ^ 0X10;
    // 0x80075B3C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80075B40: xori        $v1, $v1, 0x2
    ctx->r3 = ctx->r3 ^ 0X2;
    // 0x80075B44: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x80075B48: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80075B4C: beq         $v1, $zero, L_80075B88
    if (ctx->r3 == 0) {
        // 0x80075B50: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80075B88;
    }
    // 0x80075B50: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80075B54: j           L_80075BA0
    // 0x80075B58: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
        goto L_80075BA0;
    // 0x80075B58: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
L_80075B5C:
    // 0x80075B5C: lb          $v0, 0x7($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X7);
    // 0x80075B60: bne         $v0, $zero, L_80075B78
    if (ctx->r2 != 0) {
        // 0x80075B64: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_80075B78;
    }
    // 0x80075B64: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80075B68: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80075B6C: sb          $zero, 0x599E($at)
    MEM_B(0X599E, ctx->r1) = 0;
    // 0x80075B70: j           L_80075BC0
    // 0x80075B74: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_80075BC0;
    // 0x80075B74: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80075B78:
    // 0x80075B78: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80075B7C: lw          $a1, 0x2858($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2858);
    // 0x80075B80: jal         0x80061510
    // 0x80075B84: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_5;
    // 0x80075B84: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_5:
L_80075B88:
    // 0x80075B88: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80075B8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80075B90: j           L_80075BC8
    // 0x80075B94: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
        goto L_80075BC8;
    // 0x80075B94: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_80075B98:
    // 0x80075B98: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80075B9C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_80075BA0:
    // 0x80075BA0: sb          $v1, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r3;
    // 0x80075BA4: j           L_80075BCC
    // 0x80075BA8: sh          $zero, 0x6($s1)
    MEM_H(0X6, ctx->r17) = 0;
        goto L_80075BCC;
    // 0x80075BA8: sh          $zero, 0x6($s1)
    MEM_H(0X6, ctx->r17) = 0;
L_80075BAC:
    // 0x80075BAC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80075BB0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80075BB4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80075BB8: beq         $v0, $zero, L_80075BC8
    if (ctx->r2 == 0) {
        // 0x80075BBC: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80075BC8;
    }
    // 0x80075BBC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_80075BC0:
    // 0x80075BC0: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x80075BC4: sh          $zero, 0x6($s1)
    MEM_H(0X6, ctx->r17) = 0;
L_80075BC8:
    // 0x80075BC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80075BCC:
    // 0x80075BCC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80075BD0: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x80075BD4: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x80075BD8: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80075BDC: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80075BE0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80075BE4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80075BE8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80075BEC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80075BF0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80075BF4: jr          $ra
    // 0x80075BF8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80075BF8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80036B50_11F50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036B50: jr          $ra
    // 0x80036B54: nop

    TRACE_RETURN()
    return;
    // 0x80036B54: nop

;}
RECOMP_FUNC void func_8008D28C_6868C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D28C: lbu         $a2, 0x0($a1)
    ctx->r6 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D290: andi        $v0, $a2, 0x80
    ctx->r2 = ctx->r6 & 0X80;
    // 0x8008D294: beq         $v0, $zero, L_8008D2B0
    if (ctx->r2 == 0) {
        // 0x8008D298: addiu       $a1, $a1, 0x1
        ctx->r5 = ADD32(ctx->r5, 0X1);
            goto L_8008D2B0;
    }
    // 0x8008D298: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D29C: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D2A0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D2A4: andi        $v0, $a2, 0x7F
    ctx->r2 = ctx->r6 & 0X7F;
    // 0x8008D2A8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8008D2AC: or          $a2, $v1, $v0
    ctx->r6 = ctx->r3 | ctx->r2;
L_8008D2B0:
    // 0x8008D2B0: sh          $a2, 0xAE($a0)
    MEM_H(0XAE, ctx->r4) = ctx->r6;
    // 0x8008D2B4: jr          $ra
    // 0x8008D2B8: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    TRACE_RETURN()
    return;
    // 0x8008D2B8: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_80072E08_4E208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80072E08: jr          $ra
    // 0x80072E0C: nop

    TRACE_RETURN()
    return;
    // 0x80072E0C: nop

;}
RECOMP_FUNC void func_8004EDC0_2A1C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004EDC0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004EDC4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8004EDC8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8004EDCC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004EDD0: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8004EDD4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004EDD8: sll         $s1, $a2, 16
    ctx->r17 = S32(ctx->r6 << 16);
    // 0x8004EDDC: sra         $s1, $s1, 16
    ctx->r17 = S32(SIGNED(ctx->r17) >> 16);
    // 0x8004EDE0: sll         $a1, $s1, 5
    ctx->r5 = S32(ctx->r17 << 5);
    // 0x8004EDE4: addu        $a1, $a1, $s2
    ctx->r5 = ADD32(ctx->r5, ctx->r18);
    // 0x8004EDE8: addiu       $a0, $s0, 0x8C
    ctx->r4 = ADD32(ctx->r16, 0X8C);
    // 0x8004EDEC: addiu       $a1, $a1, 0x240
    ctx->r5 = ADD32(ctx->r5, 0X240);
    // 0x8004EDF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004EDF4: jal         0x8009A3B4
    // 0x8004EDF8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8004EDF8: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_0:
    // 0x8004EDFC: lw          $v0, 0x88($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X88);
    // 0x8004EE00: addiu       $v1, $s1, 0x1
    ctx->r3 = ADD32(ctx->r17, 0X1);
    // 0x8004EE04: lw          $a0, 0x70($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X70);
    // 0x8004EE08: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8004EE0C: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8004EE10: sw          $v0, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r2;
    // 0x8004EE14: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8004EE18: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004EE1C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8004EE20: sw          $s2, 0xB8($s0)
    MEM_W(0XB8, ctx->r16) = ctx->r18;
    // 0x8004EE24: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8004EE28: sll         $v0, $s1, 3
    ctx->r2 = S32(ctx->r17 << 3);
    // 0x8004EE2C: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x8004EE30: sw          $a0, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r4;
    // 0x8004EE34: lhu         $v1, 0x180($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X180);
    // 0x8004EE38: sh          $v1, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r3;
    // 0x8004EE3C: sh          $v1, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r3;
    // 0x8004EE40: lhu         $v1, 0x182($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X182);
    // 0x8004EE44: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8004EE48: sh          $v1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r3;
    // 0x8004EE4C: lhu         $a1, 0x184($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X184);
    // 0x8004EE50: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8004EE54: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8004EE58: sll         $s1, $s1, 2
    ctx->r17 = S32(ctx->r17 << 2);
    // 0x8004EE5C: addu        $s2, $s2, $s1
    ctx->r18 = ADD32(ctx->r18, ctx->r17);
    // 0x8004EE60: sh          $a1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r5;
    // 0x8004EE64: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8004EE68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8004EE6C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8004EE70: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8004EE74: sh          $a1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r5;
    // 0x8004EE78: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8004EE7C: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8004EE80: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8004EE84: lbu         $v0, 0xF9($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XF9);
    // 0x8004EE88: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x8004EE8C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8004EE90: sb          $v0, 0xF9($s2)
    MEM_B(0XF9, ctx->r18) = ctx->r2;
    // 0x8004EE94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004EE98: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8004EE9C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004EEA0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004EEA4: jr          $ra
    // 0x8004EEA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8004EEA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8005AAA8_35EA8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005AAA8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005AAAC: lh          $v1, -0x3E36($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X3E36);
    // 0x8005AAB0: lui         $a3, 0x800B
    ctx->r7 = S32(0X800B << 16);
    // 0x8005AAB4: lw          $a3, -0x16D0($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X16D0);
    // 0x8005AAB8: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8005AABC: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8005AAC0: lui         $fp, 0x801C
    ctx->r30 = S32(0X801C << 16);
    // 0x8005AAC4: lw          $fp, -0x3DE0($fp)
    ctx->r30 = MEM_W(ctx->r30, -0X3DE0);
    // 0x8005AAC8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8005AACC: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8005AAD0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8005AAD4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8005AAD8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8005AADC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8005AAE0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8005AAE4: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8005AAE8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8005AAEC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x8005AAF0: beq         $v1, $zero, L_8005AB28
    if (ctx->r3 == 0) {
        // 0x8005AAF4: sw          $a3, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r7;
            goto L_8005AB28;
    }
    // 0x8005AAF4: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x8005AAF8: blezl       $v1, L_8005AB04
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8005AAFC: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8005AB04;
    }
    goto skip_0;
    // 0x8005AAFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    skip_0:
    // 0x8005AB00: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_8005AB04:
    // 0x8005AB04: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005AB08: sh          $v0, -0x3E36($at)
    MEM_H(-0X3E36, ctx->r1) = ctx->r2;
    // 0x8005AB0C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005AB10: lh          $v0, -0x3E36($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X3E36);
    // 0x8005AB14: bne         $v0, $zero, L_8005AB28
    if (ctx->r2 != 0) {
        // 0x8005AB18: addiu       $a0, $zero, 0x87
        ctx->r4 = ADD32(0, 0X87);
            goto L_8005AB28;
    }
    // 0x8005AB18: addiu       $a0, $zero, 0x87
    ctx->r4 = ADD32(0, 0X87);
    // 0x8005AB1C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005AB20: jal         0x8002A2F8
    // 0x8005AB24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x8005AB24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
L_8005AB28:
    // 0x8005AB28: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005AB2C: lbu         $v1, -0x3E3E($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3E3E);
    // 0x8005AB30: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8005AB34: bne         $v1, $v0, L_8005AC70
    if (ctx->r3 != ctx->r2) {
        // 0x8005AB38: nop
    
            goto L_8005AC70;
    }
    // 0x8005AB38: nop

    // 0x8005AB3C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005AB40: lbu         $v0, -0x3E3D($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3E3D);
    // 0x8005AB44: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x8005AB48: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x8005AB4C: beq         $v0, $zero, L_8005AC70
    if (ctx->r2 == 0) {
        // 0x8005AB50: addiu       $v1, $zero, 0x2E
        ctx->r3 = ADD32(0, 0X2E);
            goto L_8005AC70;
    }
    // 0x8005AB50: addiu       $v1, $zero, 0x2E
    ctx->r3 = ADD32(0, 0X2E);
    // 0x8005AB54: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8005AB58: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8005AB5C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8005AB60: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x8005AB64: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8005AB68: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8005AB6C: lui         $v0, 0x900
    ctx->r2 = S32(0X900 << 16);
    // 0x8005AB70: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8005AB74: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8005AB78: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x8005AB7C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8005AB80: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8005AB84: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8005AB88: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005AB8C: lhu         $v0, -0x2400($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2400);
    // 0x8005AB90: sb          $v1, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r3;
    // 0x8005AB94: srl         $v0, $v0, 5
    ctx->r2 = S32(U32(ctx->r2) >> 5);
    // 0x8005AB98: sb          $v0, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r2;
    // 0x8005AB9C: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
    // 0x8005ABA0: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
    // 0x8005ABA4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005ABA8: lhu         $v0, -0x3DDC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3DDC);
    // 0x8005ABAC: addiu       $v0, $v0, 0x11
    ctx->r2 = ADD32(ctx->r2, 0X11);
    // 0x8005ABB0: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x8005ABB4: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x8005ABB8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005ABBC: lhu         $v0, -0x3DDC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3DDC);
    // 0x8005ABC0: addiu       $v0, $v0, 0x31
    ctx->r2 = ADD32(ctx->r2, 0X31);
    // 0x8005ABC4: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    // 0x8005ABC8: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x8005ABCC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005ABD0: lh          $v1, -0x3DAA($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X3DAA);
    // 0x8005ABD4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8005ABD8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005ABDC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005ABE0: lhu         $v1, -0x3DDA($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3DDA);
    // 0x8005ABE4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8005ABE8: addiu       $v0, $v0, 0x60
    ctx->r2 = ADD32(ctx->r2, 0X60);
    // 0x8005ABEC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005ABF0: sh          $v1, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r3;
    // 0x8005ABF4: sh          $v1, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r3;
    // 0x8005ABF8: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8005ABFC: lh          $a0, -0x3DAA($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3DAA);
    // 0x8005AC00: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005AC04: lhu         $v1, -0x3DDA($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3DDA);
    // 0x8005AC08: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8005AC0C: sb          $v0, 0x24($a1)
    MEM_B(0X24, ctx->r5) = ctx->r2;
    // 0x8005AC10: sb          $v0, 0x14($a1)
    MEM_B(0X14, ctx->r5) = ctx->r2;
    // 0x8005AC14: addiu       $v0, $zero, 0xF8
    ctx->r2 = ADD32(0, 0XF8);
    // 0x8005AC18: sb          $v0, 0x15($a1)
    MEM_B(0X15, ctx->r5) = ctx->r2;
    // 0x8005AC1C: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x8005AC20: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8005AC24: sb          $v0, 0x25($a1)
    MEM_B(0X25, ctx->r5) = ctx->r2;
    // 0x8005AC28: sb          $v0, 0x1D($a1)
    MEM_B(0X1D, ctx->r5) = ctx->r2;
    // 0x8005AC2C: addiu       $v0, $zero, 0x3D09
    ctx->r2 = ADD32(0, 0X3D09);
    // 0x8005AC30: sh          $v0, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r2;
    // 0x8005AC34: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8005AC38: sb          $zero, 0x1C($a1)
    MEM_B(0X1C, ctx->r5) = 0;
    // 0x8005AC3C: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x8005AC40: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x8005AC44: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8005AC48: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8005AC4C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8005AC50: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005AC54: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005AC58: addiu       $v0, $v0, 0x68
    ctx->r2 = ADD32(ctx->r2, 0X68);
    // 0x8005AC5C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005AC60: sh          $v1, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r3;
    // 0x8005AC64: sh          $v1, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r3;
    // 0x8005AC68: jal         0x8002FD30
    // 0x8005AC6C: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_8002FD30_B130(rdram, ctx);
        goto after_1;
    // 0x8005AC6C: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_1:
L_8005AC70:
    // 0x8005AC70: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005AC74: lw          $v0, -0x3DE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3DE0);
    // 0x8005AC78: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005AC7C: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8005AC80: lbu         $a0, -0x14B0($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X14B0);
    // 0x8005AC84: jal         0x8006033C
    // 0x8005AC88: addiu       $a0, $a0, 0x4C0
    ctx->r4 = ADD32(ctx->r4, 0X4C0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x8005AC88: addiu       $a0, $a0, 0x4C0
    ctx->r4 = ADD32(ctx->r4, 0X4C0);
    after_2:
    // 0x8005AC8C: beq         $v0, $zero, L_8005AF08
    if (ctx->r2 == 0) {
        // 0x8005AC90: sll         $s0, $fp, 2
        ctx->r16 = S32(ctx->r30 << 2);
            goto L_8005AF08;
    }
    // 0x8005AC90: sll         $s0, $fp, 2
    ctx->r16 = S32(ctx->r30 << 2);
    // 0x8005AC94: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005AC98: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x8005AC9C: lbu         $v0, -0x14B0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X14B0);
    // 0x8005ACA0: addu        $s0, $s0, $fp
    ctx->r16 = ADD32(ctx->r16, ctx->r30);
    // 0x8005ACA4: sll         $s0, $s0, 2
    ctx->r16 = S32(ctx->r16 << 2);
    // 0x8005ACA8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8005ACAC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8005ACB0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005ACB4: lb          $v1, 0x4EA4($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X4EA4);
    // 0x8005ACB8: lui         $s1, 0x800B
    ctx->r17 = S32(0X800B << 16);
    // 0x8005ACBC: addiu       $s1, $s1, -0x1A70
    ctx->r17 = ADD32(ctx->r17, -0X1A70);
    // 0x8005ACC0: addu        $v0, $s0, $s1
    ctx->r2 = ADD32(ctx->r16, ctx->r17);
    // 0x8005ACC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005ACC8: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8005ACCC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005ACD0: jal         0x8005B568
    // 0x8005ACD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005B568_36968(rdram, ctx);
        goto after_3;
    // 0x8005ACD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8005ACD8: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005ACDC: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x8005ACE0: lbu         $v0, -0x14B0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X14B0);
    // 0x8005ACE4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8005ACE8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8005ACEC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005ACF0: lb          $v1, 0x4EA5($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X4EA5);
    // 0x8005ACF4: addiu       $v0, $s1, 0x4
    ctx->r2 = ADD32(ctx->r17, 0X4);
    // 0x8005ACF8: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8005ACFC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005AD00: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8005AD04: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x8005AD08: jal         0x8005B568
    // 0x8005AD0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005B568_36968(rdram, ctx);
        goto after_4;
    // 0x8005AD0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8005AD10: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005AD14: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x8005AD18: lbu         $v0, -0x14B0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X14B0);
    // 0x8005AD1C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8005AD20: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8005AD24: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005AD28: lb          $v1, 0x4EA6($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X4EA6);
    // 0x8005AD2C: addiu       $v0, $s1, 0x8
    ctx->r2 = ADD32(ctx->r17, 0X8);
    // 0x8005AD30: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8005AD34: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005AD38: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8005AD3C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x8005AD40: jal         0x8005B568
    // 0x8005AD44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005B568_36968(rdram, ctx);
        goto after_5;
    // 0x8005AD44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8005AD48: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005AD4C: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x8005AD50: lbu         $v0, -0x14B0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X14B0);
    // 0x8005AD54: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8005AD58: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8005AD5C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005AD60: lb          $v1, 0x4EA7($v1)
    ctx->r3 = MEM_B(ctx->r3, 0X4EA7);
    // 0x8005AD64: addiu       $v0, $s1, 0xC
    ctx->r2 = ADD32(ctx->r17, 0XC);
    // 0x8005AD68: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8005AD6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005AD70: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8005AD74: addiu       $a1, $zero, 0x24
    ctx->r5 = ADD32(0, 0X24);
    // 0x8005AD78: jal         0x8005B568
    // 0x8005AD7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005B568_36968(rdram, ctx);
        goto after_6;
    // 0x8005AD7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8005AD80: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005AD84: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x8005AD88: lbu         $v0, -0x14B0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X14B0);
    // 0x8005AD8C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8005AD90: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8005AD94: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005AD98: lb          $v0, 0x4EA8($at)
    ctx->r2 = MEM_B(ctx->r1, 0X4EA8);
    // 0x8005AD9C: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x8005ADA0: addu        $s0, $s0, $s1
    ctx->r16 = ADD32(ctx->r16, ctx->r17);
    // 0x8005ADA4: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x8005ADA8: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x8005ADAC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8005ADB0: jal         0x8005B568
    // 0x8005ADB4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005B568_36968(rdram, ctx);
        goto after_7;
    // 0x8005ADB4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8005ADB8: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8005ADBC: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8005ADC0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8005ADC4: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x8005ADC8: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8005ADCC: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8005ADD0: lui         $v0, 0x900
    ctx->r2 = S32(0X900 << 16);
    // 0x8005ADD4: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x8005ADD8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005ADDC: lh          $v1, -0x3E36($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X3E36);
    // 0x8005ADE0: bgez        $v1, L_8005ADF0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8005ADE4: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8005ADF0;
    }
    // 0x8005ADE4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8005ADE8: j           L_8005ADF4
    // 0x8005ADEC: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
        goto L_8005ADF4;
    // 0x8005ADEC: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
L_8005ADF0:
    // 0x8005ADF0: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
L_8005ADF4:
    // 0x8005ADF4: sll         $s2, $v0, 3
    ctx->r18 = S32(ctx->r2 << 3);
    // 0x8005ADF8: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x8005ADFC: sb          $v0, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r2;
    // 0x8005AE00: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x8005AE04: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005AE08: addiu       $v1, $v1, -0x3DDC
    ctx->r3 = ADD32(ctx->r3, -0X3DDC);
    // 0x8005AE0C: sb          $v0, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r2;
    // 0x8005AE10: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
    // 0x8005AE14: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
    // 0x8005AE18: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8005AE1C: addiu       $v0, $v0, 0x1A
    ctx->r2 = ADD32(ctx->r2, 0X1A);
    // 0x8005AE20: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x8005AE24: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x8005AE28: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8005AE2C: addiu       $v0, $v0, 0x62
    ctx->r2 = ADD32(ctx->r2, 0X62);
    // 0x8005AE30: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    // 0x8005AE34: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x8005AE38: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005AE3C: lhu         $v0, -0x3DDA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3DDA);
    // 0x8005AE40: addiu       $v0, $v0, 0x51
    ctx->r2 = ADD32(ctx->r2, 0X51);
    // 0x8005AE44: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    // 0x8005AE48: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x8005AE4C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005AE50: lhu         $v0, -0x3DDA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3DDA);
    // 0x8005AE54: addiu       $v0, $v0, 0x58
    ctx->r2 = ADD32(ctx->r2, 0X58);
    // 0x8005AE58: sh          $v0, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r2;
    // 0x8005AE5C: sh          $v0, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r2;
    // 0x8005AE60: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005AE64: lw          $v0, -0x3DE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3DE0);
    // 0x8005AE68: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005AE6C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005AE70: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005AE74: lbu         $v0, -0x1430($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X1430);
    // 0x8005AE78: sb          $v0, 0x1C($a1)
    MEM_B(0X1C, ctx->r5) = ctx->r2;
    // 0x8005AE7C: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x8005AE80: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005AE84: lw          $v0, -0x3DE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3DE0);
    // 0x8005AE88: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005AE8C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005AE90: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005AE94: lbu         $v0, -0x1430($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X1430);
    // 0x8005AE98: addiu       $v0, $v0, 0x48
    ctx->r2 = ADD32(ctx->r2, 0X48);
    // 0x8005AE9C: sb          $v0, 0x24($a1)
    MEM_B(0X24, ctx->r5) = ctx->r2;
    // 0x8005AEA0: sb          $v0, 0x14($a1)
    MEM_B(0X14, ctx->r5) = ctx->r2;
    // 0x8005AEA4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005AEA8: lw          $v0, -0x3DE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3DE0);
    // 0x8005AEAC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005AEB0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005AEB4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005AEB8: lbu         $v0, -0x142F($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X142F);
    // 0x8005AEBC: sb          $v0, 0x15($a1)
    MEM_B(0X15, ctx->r5) = ctx->r2;
    // 0x8005AEC0: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x8005AEC4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005AEC8: lw          $v0, -0x3DE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3DE0);
    // 0x8005AECC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005AED0: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005AED4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005AED8: lbu         $v0, -0x142F($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X142F);
    // 0x8005AEDC: addiu       $v1, $zero, 0x3D08
    ctx->r3 = ADD32(0, 0X3D08);
    // 0x8005AEE0: sh          $v1, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r3;
    // 0x8005AEE4: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x8005AEE8: sb          $v0, 0x25($a1)
    MEM_B(0X25, ctx->r5) = ctx->r2;
    // 0x8005AEEC: sb          $v0, 0x1D($a1)
    MEM_B(0X1D, ctx->r5) = ctx->r2;
    // 0x8005AEF0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8005AEF4: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x8005AEF8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005AEFC: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005AF00: jal         0x8002FD30
    // 0x8005AF04: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_8002FD30_B130(rdram, ctx);
        goto after_8;
    // 0x8005AF04: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_8:
L_8005AF08:
    // 0x8005AF08: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005AF0C: lbu         $v1, -0x3E3E($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3E3E);
    // 0x8005AF10: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8005AF14: bne         $v1, $v0, L_8005AF98
    if (ctx->r3 != ctx->r2) {
        // 0x8005AF18: nop
    
            goto L_8005AF98;
    }
    // 0x8005AF18: nop

    // 0x8005AF1C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005AF20: lbu         $v0, -0x3E3D($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3E3D);
    // 0x8005AF24: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x8005AF28: sltiu       $v0, $v0, 0x3
    ctx->r2 = ctx->r2 < 0X3 ? 1 : 0;
    // 0x8005AF2C: beq         $v0, $zero, L_8005AF98
    if (ctx->r2 == 0) {
        // 0x8005AF30: nop
    
            goto L_8005AF98;
    }
    // 0x8005AF30: nop

    // 0x8005AF34: lui         $v0, 0x800B
    ctx->r2 = S32(0X800B << 16);
    // 0x8005AF38: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x8005AF3C: lbu         $v0, -0x14B0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X14B0);
    // 0x8005AF40: lui         $a2, 0x801C
    ctx->r6 = S32(0X801C << 16);
    // 0x8005AF44: lh          $a2, -0x3DAA($a2)
    ctx->r6 = MEM_H(ctx->r6, -0X3DAA);
    // 0x8005AF48: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8005AF4C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8005AF50: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8005AF54: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005AF58: lbu         $v1, 0x4EA4($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4EA4);
    // 0x8005AF5C: sll         $v0, $fp, 2
    ctx->r2 = S32(ctx->r30 << 2);
    // 0x8005AF60: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x8005AF64: addu        $v0, $a2, $v0
    ctx->r2 = ADD32(ctx->r6, ctx->r2);
    // 0x8005AF68: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8005AF6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005AF70: lui         $s2, 0x800B
    ctx->r18 = S32(0X800B << 16);
    // 0x8005AF74: addu        $s2, $s2, $v0
    ctx->r18 = ADD32(ctx->r18, ctx->r2);
    // 0x8005AF78: lbu         $s2, -0x1A6F($s2)
    ctx->r18 = MEM_BU(ctx->r18, -0X1A6F);
    // 0x8005AF7C: beq         $s2, $zero, L_8005AF98
    if (ctx->r18 == 0) {
        // 0x8005AF80: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8005AF98;
    }
    // 0x8005AF80: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8005AF84: sll         $a1, $a2, 1
    ctx->r5 = S32(ctx->r6 << 1);
    // 0x8005AF88: addu        $a1, $a1, $a2
    ctx->r5 = ADD32(ctx->r5, ctx->r6);
    // 0x8005AF8C: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8005AF90: jal         0x8005B568
    // 0x8005AF94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8005B568_36968(rdram, ctx);
        goto after_9;
    // 0x8005AF94: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
L_8005AF98:
    // 0x8005AF98: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8005AF9C: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8005AFA0: lui         $s5, 0x900
    ctx->r21 = S32(0X900 << 16);
    // 0x8005AFA4: addiu       $s4, $zero, 0x2C
    ctx->r20 = ADD32(0, 0X2C);
    // 0x8005AFA8: addiu       $s0, $zero, 0x80
    ctx->r16 = ADD32(0, 0X80);
    // 0x8005AFAC: lui         $s3, 0x801C
    ctx->r19 = S32(0X801C << 16);
    // 0x8005AFB0: addiu       $s3, $s3, -0x3DDC
    ctx->r19 = ADD32(ctx->r19, -0X3DDC);
    // 0x8005AFB4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8005AFB8: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x8005AFBC: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8005AFC0: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8005AFC4: sw          $s5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r21;
    // 0x8005AFC8: sb          $s4, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r20;
    // 0x8005AFCC: sb          $s0, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r16;
    // 0x8005AFD0: sb          $s0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r16;
    // 0x8005AFD4: sb          $s0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r16;
    // 0x8005AFD8: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8005AFDC: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x8005AFE0: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x8005AFE4: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8005AFE8: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x8005AFEC: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    // 0x8005AFF0: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x8005AFF4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005AFF8: lhu         $v0, -0x3DDA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3DDA);
    // 0x8005AFFC: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    // 0x8005B000: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x8005B004: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005B008: lhu         $v0, -0x3DDA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3DDA);
    // 0x8005B00C: addiu       $s6, $zero, 0x5D
    ctx->r22 = ADD32(0, 0X5D);
    // 0x8005B010: sb          $zero, 0x1C($a1)
    MEM_B(0X1C, ctx->r5) = 0;
    // 0x8005B014: sb          $zero, 0xC($a1)
    MEM_B(0XC, ctx->r5) = 0;
    // 0x8005B018: sb          $s0, 0x24($a1)
    MEM_B(0X24, ctx->r5) = ctx->r16;
    // 0x8005B01C: sb          $s0, 0x14($a1)
    MEM_B(0X14, ctx->r5) = ctx->r16;
    // 0x8005B020: sb          $zero, 0x15($a1)
    MEM_B(0X15, ctx->r5) = 0;
    // 0x8005B024: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
    // 0x8005B028: sb          $s6, 0x25($a1)
    MEM_B(0X25, ctx->r5) = ctx->r22;
    // 0x8005B02C: sb          $s6, 0x1D($a1)
    MEM_B(0X1D, ctx->r5) = ctx->r22;
    // 0x8005B030: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005B034: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005B038: addiu       $s7, $zero, 0xC
    ctx->r23 = ADD32(0, 0XC);
    // 0x8005B03C: addiu       $a3, $zero, 0x3D09
    ctx->r7 = ADD32(0, 0X3D09);
    // 0x8005B040: sh          $a3, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r7;
    // 0x8005B044: sh          $s7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r23;
    // 0x8005B048: addiu       $v0, $v0, 0x5D
    ctx->r2 = ADD32(ctx->r2, 0X5D);
    // 0x8005B04C: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x8005B050: sh          $v0, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r2;
    // 0x8005B054: jal         0x8002FD30
    // 0x8005B058: sh          $v0, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r2;
    func_8002FD30_B130(rdram, ctx);
        goto after_10;
    // 0x8005B058: sh          $v0, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r2;
    after_10:
    // 0x8005B05C: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8005B060: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8005B064: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8005B068: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x8005B06C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8005B070: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8005B074: sw          $s5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r21;
    // 0x8005B078: sb          $s4, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r20;
    // 0x8005B07C: sb          $s0, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r16;
    // 0x8005B080: sb          $s0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r16;
    // 0x8005B084: sb          $s0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r16;
    // 0x8005B088: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8005B08C: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x8005B090: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x8005B094: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x8005B098: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8005B09C: addiu       $v0, $v0, 0xC8
    ctx->r2 = ADD32(ctx->r2, 0XC8);
    // 0x8005B0A0: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    // 0x8005B0A4: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x8005B0A8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005B0AC: lhu         $v0, -0x3DDA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3DDA);
    // 0x8005B0B0: addiu       $s2, $zero, 0xC8
    ctx->r18 = ADD32(0, 0XC8);
    // 0x8005B0B4: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
    // 0x8005B0B8: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    // 0x8005B0BC: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x8005B0C0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005B0C4: lhu         $v1, -0x3DDA($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3DDA);
    // 0x8005B0C8: addiu       $s1, $zero, 0x34
    ctx->r17 = ADD32(0, 0X34);
    // 0x8005B0CC: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8005B0D0: sb          $s0, 0x1C($a1)
    MEM_B(0X1C, ctx->r5) = ctx->r16;
    // 0x8005B0D4: sb          $s0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r16;
    // 0x8005B0D8: sb          $s2, 0x24($a1)
    MEM_B(0X24, ctx->r5) = ctx->r18;
    // 0x8005B0DC: sb          $s2, 0x14($a1)
    MEM_B(0X14, ctx->r5) = ctx->r18;
    // 0x8005B0E0: sb          $v0, 0x15($a1)
    MEM_B(0X15, ctx->r5) = ctx->r2;
    // 0x8005B0E4: sb          $v0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r2;
    // 0x8005B0E8: sb          $s1, 0x25($a1)
    MEM_B(0X25, ctx->r5) = ctx->r17;
    // 0x8005B0EC: sb          $s1, 0x1D($a1)
    MEM_B(0X1D, ctx->r5) = ctx->r17;
    // 0x8005B0F0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005B0F4: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005B0F8: addiu       $a3, $zero, 0x3D09
    ctx->r7 = ADD32(0, 0X3D09);
    // 0x8005B0FC: sh          $a3, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r7;
    // 0x8005B100: sh          $s7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r23;
    // 0x8005B104: addiu       $v1, $v1, 0x34
    ctx->r3 = ADD32(ctx->r3, 0X34);
    // 0x8005B108: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x8005B10C: sh          $v1, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r3;
    // 0x8005B110: jal         0x8002FD30
    // 0x8005B114: sh          $v1, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r3;
    func_8002FD30_B130(rdram, ctx);
        goto after_11;
    // 0x8005B114: sh          $v1, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r3;
    after_11:
    // 0x8005B118: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8005B11C: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8005B120: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8005B124: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x8005B128: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8005B12C: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8005B130: sw          $s5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r21;
    // 0x8005B134: sb          $s4, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r20;
    // 0x8005B138: sb          $s0, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r16;
    // 0x8005B13C: sb          $s0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r16;
    // 0x8005B140: sb          $s0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r16;
    // 0x8005B144: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8005B148: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x8005B14C: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x8005B150: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x8005B154: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8005B158: addiu       $v0, $v0, 0xC8
    ctx->r2 = ADD32(ctx->r2, 0XC8);
    // 0x8005B15C: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    // 0x8005B160: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x8005B164: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005B168: lhu         $v0, -0x3DDA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3DDA);
    // 0x8005B16C: addiu       $v0, $v0, 0x34
    ctx->r2 = ADD32(ctx->r2, 0X34);
    // 0x8005B170: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    // 0x8005B174: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x8005B178: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005B17C: lhu         $v1, -0x3DDA($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3DDA);
    // 0x8005B180: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x8005B184: sb          $s0, 0x1C($a1)
    MEM_B(0X1C, ctx->r5) = ctx->r16;
    // 0x8005B188: sb          $s0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r16;
    // 0x8005B18C: sb          $s2, 0x24($a1)
    MEM_B(0X24, ctx->r5) = ctx->r18;
    // 0x8005B190: sb          $s2, 0x14($a1)
    MEM_B(0X14, ctx->r5) = ctx->r18;
    // 0x8005B194: sb          $s1, 0x15($a1)
    MEM_B(0X15, ctx->r5) = ctx->r17;
    // 0x8005B198: sb          $s1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r17;
    // 0x8005B19C: sb          $v0, 0x25($a1)
    MEM_B(0X25, ctx->r5) = ctx->r2;
    // 0x8005B1A0: sb          $v0, 0x1D($a1)
    MEM_B(0X1D, ctx->r5) = ctx->r2;
    // 0x8005B1A4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005B1A8: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005B1AC: addiu       $a3, $zero, 0x3D09
    ctx->r7 = ADD32(0, 0X3D09);
    // 0x8005B1B0: sh          $a3, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r7;
    // 0x8005B1B4: sh          $s7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r23;
    // 0x8005B1B8: addiu       $v1, $v1, 0x50
    ctx->r3 = ADD32(ctx->r3, 0X50);
    // 0x8005B1BC: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x8005B1C0: sh          $v1, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r3;
    // 0x8005B1C4: jal         0x8002FD30
    // 0x8005B1C8: sh          $v1, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r3;
    func_8002FD30_B130(rdram, ctx);
        goto after_12;
    // 0x8005B1C8: sh          $v1, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r3;
    after_12:
    // 0x8005B1CC: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8005B1D0: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8005B1D4: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8005B1D8: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x8005B1DC: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8005B1E0: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8005B1E4: sw          $s5, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r21;
    // 0x8005B1E8: sb          $s4, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r20;
    // 0x8005B1EC: sb          $s0, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r16;
    // 0x8005B1F0: sb          $s0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r16;
    // 0x8005B1F4: sb          $s0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r16;
    // 0x8005B1F8: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8005B1FC: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8005B200: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x8005B204: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x8005B208: lhu         $v0, 0x0($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X0);
    // 0x8005B20C: addiu       $v0, $v0, 0x3A
    ctx->r2 = ADD32(ctx->r2, 0X3A);
    // 0x8005B210: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    // 0x8005B214: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x8005B218: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005B21C: lhu         $v0, -0x3DDA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3DDA);
    // 0x8005B220: addiu       $v0, $v0, 0x5D
    ctx->r2 = ADD32(ctx->r2, 0X5D);
    // 0x8005B224: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    // 0x8005B228: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x8005B22C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005B230: lhu         $v1, -0x3DDA($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3DDA);
    // 0x8005B234: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8005B238: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8005B23C: sb          $v0, 0x1C($a1)
    MEM_B(0X1C, ctx->r5) = ctx->r2;
    // 0x8005B240: sb          $v0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r2;
    // 0x8005B244: addiu       $v0, $zero, 0x3A
    ctx->r2 = ADD32(0, 0X3A);
    // 0x8005B248: sb          $v0, 0x24($a1)
    MEM_B(0X24, ctx->r5) = ctx->r2;
    // 0x8005B24C: sb          $v0, 0x14($a1)
    MEM_B(0X14, ctx->r5) = ctx->r2;
    // 0x8005B250: addiu       $v0, $zero, 0x9C
    ctx->r2 = ADD32(0, 0X9C);
    // 0x8005B254: sb          $s6, 0x15($a1)
    MEM_B(0X15, ctx->r5) = ctx->r22;
    // 0x8005B258: sb          $s6, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r22;
    // 0x8005B25C: sb          $v0, 0x25($a1)
    MEM_B(0X25, ctx->r5) = ctx->r2;
    // 0x8005B260: sb          $v0, 0x1D($a1)
    MEM_B(0X1D, ctx->r5) = ctx->r2;
    // 0x8005B264: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005B268: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005B26C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8005B270: addiu       $s4, $s3, 0x24
    ctx->r20 = ADD32(ctx->r19, 0X24);
    // 0x8005B274: addiu       $a3, $zero, 0x3D09
    ctx->r7 = ADD32(0, 0X3D09);
    // 0x8005B278: sh          $a3, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r7;
    // 0x8005B27C: sh          $s7, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r23;
    // 0x8005B280: addiu       $v1, $v1, 0x9C
    ctx->r3 = ADD32(ctx->r3, 0X9C);
    // 0x8005B284: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    // 0x8005B288: sh          $v1, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r3;
    // 0x8005B28C: jal         0x8002FD30
    // 0x8005B290: sh          $v1, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r3;
    func_8002FD30_B130(rdram, ctx);
        goto after_13;
    // 0x8005B290: sh          $v1, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r3;
    after_13:
L_8005B294:
    // 0x8005B294: bnel        $s2, $fp, L_8005B350
    if (ctx->r18 != ctx->r30) {
        // 0x8005B298: sb          $zero, 0x958($s1)
        MEM_B(0X958, ctx->r17) = 0;
            goto L_8005B350;
    }
    goto skip_1;
    // 0x8005B298: sb          $zero, 0x958($s1)
    MEM_B(0X958, ctx->r17) = 0;
    skip_1:
    // 0x8005B29C: lh          $v0, 0x0($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X0);
    // 0x8005B2A0: blezl       $v0, L_8005B350
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8005B2A4: sb          $zero, 0x958($s1)
        MEM_B(0X958, ctx->r17) = 0;
            goto L_8005B350;
    }
    goto skip_2;
    // 0x8005B2A4: sb          $zero, 0x958($s1)
    MEM_B(0X958, ctx->r17) = 0;
    skip_2:
    // 0x8005B2A8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005B2AC: lw          $v0, -0x3DE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3DE0);
    // 0x8005B2B0: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005B2B4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8005B2B8: lbu         $a0, -0x14B0($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X14B0);
    // 0x8005B2BC: jal         0x8006033C
    // 0x8005B2C0: addiu       $a0, $a0, 0x4C0
    ctx->r4 = ADD32(ctx->r4, 0X4C0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_14;
    // 0x8005B2C0: addiu       $a0, $a0, 0x4C0
    ctx->r4 = ADD32(ctx->r4, 0X4C0);
    after_14:
    // 0x8005B2C4: beql        $v0, $zero, L_8005B354
    if (ctx->r2 == 0) {
        // 0x8005B2C8: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8005B354;
    }
    goto skip_3;
    // 0x8005B2C8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_3:
    // 0x8005B2CC: lh          $v0, -0x5A($s3)
    ctx->r2 = MEM_H(ctx->r19, -0X5A);
    // 0x8005B2D0: beql        $v0, $zero, L_8005B308
    if (ctx->r2 == 0) {
        // 0x8005B2D4: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8005B308;
    }
    goto skip_4;
    // 0x8005B2D4: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    skip_4:
    // 0x8005B2D8: bgtz        $v0, L_8005B2E4
    if (SIGNED(ctx->r2) > 0) {
        // 0x8005B2DC: addu        $a1, $v0, $zero
        ctx->r5 = ADD32(ctx->r2, 0);
            goto L_8005B2E4;
    }
    // 0x8005B2DC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8005B2E0: negu        $a1, $v0
    ctx->r5 = SUB32(0, ctx->r2);
L_8005B2E4:
    // 0x8005B2E4: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8005B2E8: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x8005B2EC: sll         $a1, $v0, 3
    ctx->r5 = S32(ctx->r2 << 3);
    // 0x8005B2F0: sll         $v1, $v0, 19
    ctx->r3 = S32(ctx->r2 << 19);
    // 0x8005B2F4: sll         $v0, $v0, 11
    ctx->r2 = S32(ctx->r2 << 11);
    // 0x8005B2F8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8005B2FC: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x8005B300: j           L_8005B310
    // 0x8005B304: sw          $v1, 0x998($s1)
    MEM_W(0X998, ctx->r17) = ctx->r3;
        goto L_8005B310;
    // 0x8005B304: sw          $v1, 0x998($s1)
    MEM_W(0X998, ctx->r17) = ctx->r3;
L_8005B308:
    // 0x8005B308: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8005B30C: sw          $v0, 0x998($s1)
    MEM_W(0X998, ctx->r17) = ctx->r2;
L_8005B310:
    // 0x8005B310: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8005B314: addiu       $s0, $s1, 0x970
    ctx->r16 = ADD32(ctx->r17, 0X970);
    // 0x8005B318: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8005B31C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8005B320: jal         0x80031428
    // 0x8005B324: sb          $v0, 0x958($s1)
    MEM_B(0X958, ctx->r17) = ctx->r2;
    func_80031428_C828(rdram, ctx);
        goto after_15;
    // 0x8005B324: sb          $v0, 0x958($s1)
    MEM_B(0X958, ctx->r17) = ctx->r2;
    after_15:
    // 0x8005B328: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8005B32C: jal         0x80031DA8
    // 0x8005B330: addiu       $a1, $s4, -0x10
    ctx->r5 = ADD32(ctx->r20, -0X10);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_16;
    // 0x8005B330: addiu       $a1, $s4, -0x10
    ctx->r5 = ADD32(ctx->r20, -0X10);
    after_16:
    // 0x8005B334: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005B338: lhu         $v0, -0x3DB6($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3DB6);
    // 0x8005B33C: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
    // 0x8005B340: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005B344: sh          $v0, -0x3DB6($at)
    MEM_H(-0X3DB6, ctx->r1) = ctx->r2;
    // 0x8005B348: j           L_8005B354
    // 0x8005B34C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8005B354;
    // 0x8005B34C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8005B350:
    // 0x8005B350: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8005B354:
    // 0x8005B354: slti        $v0, $s2, 0xD
    ctx->r2 = SIGNED(ctx->r18) < 0XD ? 1 : 0;
    // 0x8005B358: bne         $v0, $zero, L_8005B294
    if (ctx->r2 != 0) {
        // 0x8005B35C: addiu       $s1, $s1, 0x5C
        ctx->r17 = ADD32(ctx->r17, 0X5C);
            goto L_8005B294;
    }
    // 0x8005B35C: addiu       $s1, $s1, 0x5C
    ctx->r17 = ADD32(ctx->r17, 0X5C);
    // 0x8005B360: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8005B364: lui         $s3, 0x801C
    ctx->r19 = S32(0X801C << 16);
    // 0x8005B368: addiu       $s3, $s3, -0x3E36
    ctx->r19 = ADD32(ctx->r19, -0X3E36);
    // 0x8005B36C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
L_8005B370:
    // 0x8005B370: subu        $v0, $s2, $fp
    ctx->r2 = SUB32(ctx->r18, ctx->r30);
    // 0x8005B374: slti        $v0, $v0, 0x7
    ctx->r2 = SIGNED(ctx->r2) < 0X7 ? 1 : 0;
    // 0x8005B378: bne         $v0, $zero, L_8005B384
    if (ctx->r2 != 0) {
        // 0x8005B37C: addu        $a1, $s2, $zero
        ctx->r5 = ADD32(ctx->r18, 0);
            goto L_8005B384;
    }
    // 0x8005B37C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8005B380: addiu       $a1, $s2, -0xD
    ctx->r5 = ADD32(ctx->r18, -0XD);
L_8005B384:
    // 0x8005B384: subu        $v0, $a1, $fp
    ctx->r2 = SUB32(ctx->r5, ctx->r30);
    // 0x8005B388: slti        $v0, $v0, -0x6
    ctx->r2 = SIGNED(ctx->r2) < -0X6 ? 1 : 0;
    // 0x8005B38C: bnel        $v0, $zero, L_8005B394
    if (ctx->r2 != 0) {
        // 0x8005B390: addiu       $a1, $s2, 0xD
        ctx->r5 = ADD32(ctx->r18, 0XD);
            goto L_8005B394;
    }
    goto skip_5;
    // 0x8005B390: addiu       $a1, $s2, 0xD
    ctx->r5 = ADD32(ctx->r18, 0XD);
    skip_5:
L_8005B394:
    // 0x8005B394: lh          $v1, 0x0($s3)
    ctx->r3 = MEM_H(ctx->r19, 0X0);
    // 0x8005B398: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x8005B39C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8005B3A0: subu        $v0, $fp, $a1
    ctx->r2 = SUB32(ctx->r30, ctx->r5);
    // 0x8005B3A4: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8005B3A8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8005B3AC: addiu       $v1, $v1, -0x97
    ctx->r3 = ADD32(ctx->r3, -0X97);
    // 0x8005B3B0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8005B3B4: sh          $v1, 0x4E6($s1)
    MEM_H(0X4E6, ctx->r17) = ctx->r3;
    // 0x8005B3B8: jal         0x8002C69C
    // 0x8005B3BC: sh          $v1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r3;
    func_8002C69C_7A9C(rdram, ctx);
        goto after_17;
    // 0x8005B3BC: sh          $v1, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r3;
    after_17:
    // 0x8005B3C0: lh          $a0, 0x0($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X0);
    // 0x8005B3C4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8005B3C8: jal         0x800319B4
    // 0x8005B3CC: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    func_800319B4_CDB4(rdram, ctx);
        goto after_18;
    // 0x8005B3CC: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    after_18:
    // 0x8005B3D0: addiu       $s0, $s1, 0x4C4
    ctx->r16 = ADD32(ctx->r17, 0X4C4);
    // 0x8005B3D4: jal         0x8002C69C
    // 0x8005B3D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C69C_7A9C(rdram, ctx);
        goto after_19;
    // 0x8005B3D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_19:
    // 0x8005B3DC: lh          $a0, 0x0($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X0);
    // 0x8005B3E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8005B3E4: jal         0x800319B4
    // 0x8005B3E8: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    func_800319B4_CDB4(rdram, ctx);
        goto after_20;
    // 0x8005B3E8: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    after_20:
    // 0x8005B3EC: bne         $s2, $fp, L_8005B408
    if (ctx->r18 != ctx->r30) {
        // 0x8005B3F0: addiu       $v0, $zero, 0x4040
        ctx->r2 = ADD32(0, 0X4040);
            goto L_8005B408;
    }
    // 0x8005B3F0: addiu       $v0, $zero, 0x4040
    ctx->r2 = ADD32(0, 0X4040);
    // 0x8005B3F4: lh          $v0, 0x0($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X0);
    // 0x8005B3F8: bnel        $v0, $zero, L_8005B408
    if (ctx->r2 != 0) {
        // 0x8005B3FC: addiu       $v0, $zero, 0x4040
        ctx->r2 = ADD32(0, 0X4040);
            goto L_8005B408;
    }
    goto skip_6;
    // 0x8005B3FC: addiu       $v0, $zero, 0x4040
    ctx->r2 = ADD32(0, 0X4040);
    skip_6:
    // 0x8005B400: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8005B404: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_8005B408:
    // 0x8005B408: sw          $v0, 0x4EC($s1)
    MEM_W(0X4EC, ctx->r17) = ctx->r2;
    // 0x8005B40C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8005B410: slti        $v0, $s2, 0xD
    ctx->r2 = SIGNED(ctx->r18) < 0XD ? 1 : 0;
    // 0x8005B414: bne         $v0, $zero, L_8005B370
    if (ctx->r2 != 0) {
        // 0x8005B418: addiu       $s1, $s1, 0x5C
        ctx->r17 = ADD32(ctx->r17, 0X5C);
            goto L_8005B370;
    }
    // 0x8005B418: addiu       $s1, $s1, 0x5C
    ctx->r17 = ADD32(ctx->r17, 0X5C);
    // 0x8005B41C: lw          $a3, 0x14($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X14);
    // 0x8005B420: jal         0x8002C69C
    // 0x8005B424: addiu       $a0, $a3, 0xE1C
    ctx->r4 = ADD32(ctx->r7, 0XE1C);
    func_8002C69C_7A9C(rdram, ctx);
        goto after_21;
    // 0x8005B424: addiu       $a0, $a3, 0xE1C
    ctx->r4 = ADD32(ctx->r7, 0XE1C);
    after_21:
    // 0x8005B428: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8005B42C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
L_8005B430:
    // 0x8005B430: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8005B434: addiu       $a1, $a1, -0x3DD8
    ctx->r5 = ADD32(ctx->r5, -0X3DD8);
    // 0x8005B438: jal         0x80031DA8
    // 0x8005B43C: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_22;
    // 0x8005B43C: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    after_22:
    // 0x8005B440: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x8005B444: andi        $v0, $a1, 0x2
    ctx->r2 = ctx->r5 & 0X2;
    // 0x8005B448: beq         $v0, $zero, L_8005B45C
    if (ctx->r2 == 0) {
        // 0x8005B44C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8005B45C;
    }
    // 0x8005B44C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8005B450: sll         $a1, $a1, 24
    ctx->r5 = S32(ctx->r5 << 24);
    // 0x8005B454: jal         0x8003AB60
    // 0x8005B458: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    func_8003AB60_15F60(rdram, ctx);
        goto after_23;
    // 0x8005B458: sra         $a1, $a1, 24
    ctx->r5 = S32(SIGNED(ctx->r5) >> 24);
    after_23:
L_8005B45C:
    // 0x8005B45C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8005B460: slti        $v0, $s2, 0x28
    ctx->r2 = SIGNED(ctx->r18) < 0X28 ? 1 : 0;
    // 0x8005B464: bne         $v0, $zero, L_8005B430
    if (ctx->r2 != 0) {
        // 0x8005B468: addiu       $s0, $s0, 0x5C
        ctx->r16 = ADD32(ctx->r16, 0X5C);
            goto L_8005B430;
    }
    // 0x8005B468: addiu       $s0, $s0, 0x5C
    ctx->r16 = ADD32(ctx->r16, 0X5C);
    // 0x8005B46C: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x8005B470: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x8005B474: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005B478: addiu       $v1, $v1, -0x3DDC
    ctx->r3 = ADD32(ctx->r3, -0X3DDC);
    // 0x8005B47C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8005B480: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x8005B484: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x8005B488: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x8005B48C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8005B490: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x8005B494: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8005B498: sb          $v0, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r2;
    // 0x8005B49C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005B4A0: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
    // 0x8005B4A4: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
    // 0x8005B4A8: sb          $v0, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r2;
    // 0x8005B4AC: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8005B4B0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8005B4B4: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x8005B4B8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005B4BC: lhu         $v0, -0x3DDA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3DDA);
    // 0x8005B4C0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8005B4C4: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x8005B4C8: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8005B4CC: addiu       $v0, $v0, 0x70
    ctx->r2 = ADD32(ctx->r2, 0X70);
    // 0x8005B4D0: sh          $v0, 0xC($a1)
    MEM_H(0XC, ctx->r5) = ctx->r2;
    // 0x8005B4D4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005B4D8: lhu         $v0, -0x3DDA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3DDA);
    // 0x8005B4DC: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8005B4E0: sh          $v0, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r2;
    // 0x8005B4E4: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8005B4E8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8005B4EC: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x8005B4F0: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8005B4F4: lhu         $v0, -0x3DDA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3DDA);
    // 0x8005B4F8: addiu       $v0, $v0, 0x50
    ctx->r2 = ADD32(ctx->r2, 0X50);
    // 0x8005B4FC: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    // 0x8005B500: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8005B504: addiu       $v0, $v0, 0x70
    ctx->r2 = ADD32(ctx->r2, 0X70);
    // 0x8005B508: sh          $v0, 0x14($a1)
    MEM_H(0X14, ctx->r5) = ctx->r2;
    // 0x8005B50C: lbu         $v0, 0x7($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X7);
    // 0x8005B510: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8005B514: lhu         $v1, -0x3DDA($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X3DDA);
    // 0x8005B518: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8005B51C: sb          $v0, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r2;
    // 0x8005B520: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8005B524: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8005B528: addiu       $v1, $v1, 0x50
    ctx->r3 = ADD32(ctx->r3, 0X50);
    // 0x8005B52C: sh          $v1, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r3;
    // 0x8005B530: jal         0x800302C8
    // 0x8005B534: addiu       $a0, $a0, 0x98
    ctx->r4 = ADD32(ctx->r4, 0X98);
    func_800302C8_B6C8(rdram, ctx);
        goto after_24;
    // 0x8005B534: addiu       $a0, $a0, 0x98
    ctx->r4 = ADD32(ctx->r4, 0X98);
    after_24:
    // 0x8005B538: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8005B53C: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8005B540: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8005B544: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8005B548: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8005B54C: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8005B550: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8005B554: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8005B558: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8005B55C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8005B560: jr          $ra
    // 0x8005B564: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8005B564: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8002C6C0_7AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002C6C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002C6C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002C6C8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8002C6CC: addiu       $a1, $a1, -0x78A0
    ctx->r5 = ADD32(ctx->r5, -0X78A0);
    // 0x8002C6D0: jal         0x8009A3B4
    // 0x8002C6D4: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8002C6D4: addiu       $a2, $zero, 0x14
    ctx->r6 = ADD32(0, 0X14);
    after_0:
    // 0x8002C6D8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002C6DC: jr          $ra
    // 0x8002C6E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002C6E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002C6E4: nop

    // 0x8002C6E8: nop

    // 0x8002C6EC: nop

;}
RECOMP_FUNC void func_8005F01C_3A41C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005F01C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8005F020: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8005F024: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8005F028: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8005F02C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8005F030: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8005F034: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8005F038: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8005F03C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x8005F040: lbu         $v0, 0x13($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X13);
    // 0x8005F044: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8005F048: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8005F04C: jal         0x8009A3B4
    // 0x8005F050: sb          $v0, 0x14($s1)
    MEM_B(0X14, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8005F050: sb          $v0, 0x14($s1)
    MEM_B(0X14, ctx->r17) = ctx->r2;
    after_0:
    // 0x8005F054: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8005F058: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8005F05C: jal         0x8009A3B4
    // 0x8005F060: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8005F060: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8005F064: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8005F068: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8005F06C: jal         0x8009A3B4
    // 0x8005F070: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8005F070: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8005F074: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x8005F078: bne         $v0, $zero, L_8005F094
    if (ctx->r2 != 0) {
        // 0x8005F07C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8005F094;
    }
    // 0x8005F07C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8005F080: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8005F084: jal         0x8005EB40
    // 0x8005F088: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8005EB40_39F40(rdram, ctx);
        goto after_3;
    // 0x8005F088: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8005F08C: j           L_8005F09C
    // 0x8005F090: nop

        goto L_8005F09C;
    // 0x8005F090: nop

L_8005F094:
    // 0x8005F094: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8005F098: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
L_8005F09C:
    // 0x8005F09C: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8005F0A0: lhu         $a0, 0x4C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4C);
    // 0x8005F0A4: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x8005F0A8: lhu         $a1, 0x4E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X4E);
    // 0x8005F0AC: lhu         $a3, 0x48($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X48);
    // 0x8005F0B0: lhu         $a2, 0x50($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X50);
    // 0x8005F0B4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8005F0B8: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x8005F0BC: addu        $a3, $a3, $a2
    ctx->r7 = ADD32(ctx->r7, ctx->r6);
    // 0x8005F0C0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8005F0C4: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x8005F0C8: sh          $a3, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r7;
    // 0x8005F0CC: lbu         $v0, 0x12($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X12);
    // 0x8005F0D0: beq         $v0, $zero, L_8005F130
    if (ctx->r2 == 0) {
        // 0x8005F0D4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8005F130;
    }
    // 0x8005F0D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8005F0D8: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x8005F0DC: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8005F0E0: lh          $a0, 0x48($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X48);
    // 0x8005F0E4: lw          $a1, 0x24($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X24);
    // 0x8005F0E8: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x8005F0EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005F0F0: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x8005F0F4: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x8005F0F8: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x8005F0FC: sll         $a0, $a0, 12
    ctx->r4 = S32(ctx->r4 << 12);
    // 0x8005F100: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x8005F104: sw          $a1, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r5;
    // 0x8005F108: lh          $a0, 0x24($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X24);
    // 0x8005F10C: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x8005F110: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005F114: lh          $v0, 0x1C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1C);
    // 0x8005F118: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8005F11C: lh          $v1, 0x20($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X20);
    // 0x8005F120: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
    // 0x8005F124: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8005F128: j           L_8005F144
    // 0x8005F12C: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
        goto L_8005F144;
    // 0x8005F12C: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
L_8005F130:
    // 0x8005F130: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8005F134: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8005F138: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8005F13C: jal         0x8004DA90
    // 0x8005F140: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x8005F140: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    after_4:
L_8005F144:
    // 0x8005F144: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8005F148: lhu         $v1, 0x8($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X8);
    // 0x8005F14C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005F150: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8005F154: lhu         $v0, 0x158($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X158);
    // 0x8005F158: lhu         $v1, 0xA($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XA);
    // 0x8005F15C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005F160: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8005F164: lhu         $v0, 0x15A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X15A);
    // 0x8005F168: lhu         $v1, 0xC($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XC);
    // 0x8005F16C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005F170: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8005F174: lhu         $v0, 0x15C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X15C);
    // 0x8005F178: lhu         $v1, 0xE($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XE);
    // 0x8005F17C: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    // 0x8005F180: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005F184: beq         $a0, $zero, L_8005F250
    if (ctx->r4 == 0) {
        // 0x8005F188: sh          $v0, 0x15C($s0)
        MEM_H(0X15C, ctx->r16) = ctx->r2;
            goto L_8005F250;
    }
    // 0x8005F188: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8005F18C: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x8005F190: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8005F194: beq         $v0, $zero, L_8005F250
    if (ctx->r2 == 0) {
        // 0x8005F198: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8005F250;
    }
    // 0x8005F198: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8005F19C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005F1A0: addu        $at, $at, $v0
    gpr jr_addend_8005F1A8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005F1A4: lw          $v0, 0x27D8($at)
    ctx->r2 = ADD32(ctx->r1, 0X27D8);
    // 0x8005F1A8: jr          $v0
    // 0x8005F1AC: nop

    switch (jr_addend_8005F1A8 >> 2) {
        case 0: goto L_8005F1B0; break;
        case 1: goto L_8005F1D8; break;
        case 2: goto L_8005F200; break;
        case 3: goto L_8005F234; break;
        case 4: goto L_8005F23C; break;
        default: switch_error(__func__, 0x8005F1A8, 0x800D27D8);
    }
    // 0x8005F1AC: nop

L_8005F1B0:
    // 0x8005F1B0: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8005F1B4: bne         $v0, $zero, L_8005F228
    if (ctx->r2 != 0) {
        // 0x8005F1B8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8005F228;
    }
    // 0x8005F1B8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8005F1BC: addiu       $a0, $zero, 0xD6
    ctx->r4 = ADD32(0, 0XD6);
    // 0x8005F1C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005F1C4: jal         0x8002A2F8
    // 0x8005F1C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_5;
    // 0x8005F1C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8005F1CC: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8005F1D0: j           L_8005F250
    // 0x8005F1D4: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
        goto L_8005F250;
    // 0x8005F1D4: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
L_8005F1D8:
    // 0x8005F1D8: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8005F1DC: bne         $v0, $zero, L_8005F228
    if (ctx->r2 != 0) {
        // 0x8005F1E0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8005F228;
    }
    // 0x8005F1E0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8005F1E4: addiu       $a0, $zero, 0xD7
    ctx->r4 = ADD32(0, 0XD7);
    // 0x8005F1E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005F1EC: jal         0x8002A2F8
    // 0x8005F1F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_6;
    // 0x8005F1F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x8005F1F4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8005F1F8: j           L_8005F250
    // 0x8005F1FC: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
        goto L_8005F250;
    // 0x8005F1FC: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
L_8005F200:
    // 0x8005F200: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8005F204: bne         $v0, $zero, L_8005F228
    if (ctx->r2 != 0) {
        // 0x8005F208: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8005F228;
    }
    // 0x8005F208: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8005F20C: addiu       $a0, $zero, 0xD7
    ctx->r4 = ADD32(0, 0XD7);
    // 0x8005F210: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005F214: jal         0x8002A2F8
    // 0x8005F218: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_7;
    // 0x8005F218: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8005F21C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8005F220: j           L_8005F250
    // 0x8005F224: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
        goto L_8005F250;
    // 0x8005F224: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
L_8005F228:
    // 0x8005F228: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8005F22C: j           L_8005F250
    // 0x8005F230: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
        goto L_8005F250;
    // 0x8005F230: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
L_8005F234:
    // 0x8005F234: j           L_8005F240
    // 0x8005F238: addiu       $a0, $zero, 0xDA
    ctx->r4 = ADD32(0, 0XDA);
        goto L_8005F240;
    // 0x8005F238: addiu       $a0, $zero, 0xDA
    ctx->r4 = ADD32(0, 0XDA);
L_8005F23C:
    // 0x8005F23C: addiu       $a0, $zero, 0xD9
    ctx->r4 = ADD32(0, 0XD9);
L_8005F240:
    // 0x8005F240: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8005F244: jal         0x8002A2F8
    // 0x8005F248: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8002A2F8_56F8(rdram, ctx);
        goto after_8;
    // 0x8005F248: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_8:
    // 0x8005F24C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_8005F250:
    // 0x8005F250: lbu         $v1, 0x13($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X13);
    // 0x8005F254: lbu         $v0, 0x14($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X14);
    // 0x8005F258: bnel        $v1, $v0, L_8005F260
    if (ctx->r3 != ctx->r2) {
        // 0x8005F25C: sb          $v1, 0x110($s0)
        MEM_B(0X110, ctx->r16) = ctx->r3;
            goto L_8005F260;
    }
    goto skip_0;
    // 0x8005F25C: sb          $v1, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r3;
    skip_0:
L_8005F260:
    // 0x8005F260: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8005F264: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8005F268: beq         $v0, $a1, L_8005F280
    if (ctx->r2 == ctx->r5) {
        // 0x8005F26C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8005F280;
    }
    // 0x8005F26C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8005F270: jal         0x80050294
    // 0x8005F274: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_9;
    // 0x8005F274: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_9:
    // 0x8005F278: j           L_8005F288
    // 0x8005F27C: nop

        goto L_8005F288;
    // 0x8005F27C: nop

L_8005F280:
    // 0x8005F280: jal         0x8005044C
    // 0x8005F284: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_10;
    // 0x8005F284: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
L_8005F288:
    // 0x8005F288: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8005F28C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8005F290: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8005F294: jr          $ra
    // 0x8005F298: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8005F298: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void Graph_ThreadStop(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
;}
RECOMP_FUNC void func_8008B4F4_668F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B4F4: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8008B4F8: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008B4FC: lw          $a0, 0x4FC8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4FC8);
    // 0x8008B500: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008B504: lw          $v1, 0x4FCC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4FCC);
    // 0x8008B508: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8008B50C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8008B510: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8008B514: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x8008B518: bne         $v1, $zero, L_8008B524
    if (ctx->r3 != 0) {
        // 0x8008B51C: nop
    
            goto L_8008B524;
    }
    // 0x8008B51C: nop

    // 0x8008B520: break       7
    do_break(2148054304);
L_8008B524:
    // 0x8008B524: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008B528: bne         $v1, $at, L_8008B53C
    if (ctx->r3 != ctx->r1) {
        // 0x8008B52C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8008B53C;
    }
    // 0x8008B52C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8008B530: bne         $v0, $at, L_8008B53C
    if (ctx->r2 != ctx->r1) {
        // 0x8008B534: nop
    
            goto L_8008B53C;
    }
    // 0x8008B534: nop

    // 0x8008B538: break       6
    do_break(2148054328);
L_8008B53C:
    // 0x8008B53C: mfhi        $s0
    ctx->r16 = hi;
    // 0x8008B540: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008B544: lw          $v0, 0x4FC4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FC4);
    // 0x8008B548: beq         $s0, $v0, L_8008B578
    if (ctx->r16 == ctx->r2) {
        // 0x8008B54C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8008B578;
    }
    // 0x8008B54C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008B550: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008B554: lw          $v0, 0x4FD0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FD0);
    // 0x8008B558: sll         $a0, $a0, 3
    ctx->r4 = S32(ctx->r4 << 3);
    // 0x8008B55C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8008B560: jal         0x8008EE3C
    // 0x8008B564: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_8008EE3C_6A23C(rdram, ctx);
        goto after_0;
    // 0x8008B564: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_0:
    // 0x8008B568: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008B56C: sw          $s0, 0x4FC8($at)
    MEM_W(0X4FC8, ctx->r1) = ctx->r16;
    // 0x8008B570: j           L_8008B57C
    // 0x8008B574: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8008B57C;
    // 0x8008B574: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8008B578:
    // 0x8008B578: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8008B57C:
    // 0x8008B57C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008B580: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8008B584: jr          $ra
    // 0x8008B588: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8008B588: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80078C74_54074(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80078C74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80078C78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80078C7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80078C80: addiu       $a0, $zero, 0xCF
    ctx->r4 = ADD32(0, 0XCF);
    // 0x80078C84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80078C88: jal         0x8002A33C
    // 0x80078C8C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80078C8C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_0:
    // 0x80078C90: jal         0x8004F5C4
    // 0x80078C94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x80078C94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80078C98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80078C9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80078CA0: jr          $ra
    // 0x80078CA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80078CA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80047F2C_2332C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80047F2C: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x80047F30: sw          $s3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r19;
    // 0x80047F34: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80047F38: sw          $s2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r18;
    // 0x80047F3C: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80047F40: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
    // 0x80047F44: sw          $fp, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r30;
    // 0x80047F48: addu        $fp, $a3, $zero
    ctx->r30 = ADD32(ctx->r7, 0);
    // 0x80047F4C: sw          $s4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r20;
    // 0x80047F50: addiu       $s4, $sp, 0x58
    ctx->r20 = ADD32(ctx->r29, 0X58);
    // 0x80047F54: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x80047F58: sw          $s6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r22;
    // 0x80047F5C: addiu       $s6, $sp, 0x68
    ctx->r22 = ADD32(ctx->r29, 0X68);
    // 0x80047F60: addu        $a2, $s6, $zero
    ctx->r6 = ADD32(ctx->r22, 0);
    // 0x80047F64: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x80047F68: sw          $ra, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r31;
    // 0x80047F6C: sw          $s7, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r23;
    // 0x80047F70: sw          $s5, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r21;
    // 0x80047F74: sw          $s1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r17;
    // 0x80047F78: jal         0x80048B40
    // 0x80047F7C: sw          $s0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r16;
    func_80048B40_23F40(rdram, ctx);
        goto after_0;
    // 0x80047F7C: sw          $s0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r16;
    after_0:
    // 0x80047F80: lw          $a0, 0x78($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X78);
    // 0x80047F84: jal         0x80040EEC
    // 0x80047F88: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    func_80040EEC_1C2EC(rdram, ctx);
        goto after_1;
    // 0x80047F88: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    after_1:
    // 0x80047F8C: lbu         $a0, 0x1($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X1);
    // 0x80047F90: jal         0x8004DA68
    // 0x80047F94: nop

    func_8004DA68_28E68(rdram, ctx);
        goto after_2;
    // 0x80047F94: nop

    after_2:
    // 0x80047F98: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80047F9C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x80047FA0: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x80047FA4: addu        $a3, $fp, $zero
    ctx->r7 = ADD32(ctx->r30, 0);
    // 0x80047FA8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80047FAC: sll         $s5, $v0, 15
    ctx->r21 = S32(ctx->r2 << 15);
    // 0x80047FB0: jal         0x80047C8C
    // 0x80047FB4: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    func_80047C8C_2308C(rdram, ctx);
        goto after_3;
    // 0x80047FB4: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    after_3:
    // 0x80047FB8: beq         $v0, $zero, L_8004806C
    if (ctx->r2 == 0) {
        // 0x80047FBC: addiu       $s1, $sp, 0x38
        ctx->r17 = ADD32(ctx->r29, 0X38);
            goto L_8004806C;
    }
    // 0x80047FBC: addiu       $s1, $sp, 0x38
    ctx->r17 = ADD32(ctx->r29, 0X38);
    // 0x80047FC0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80047FC4: addiu       $s7, $s2, 0x1C
    ctx->r23 = ADD32(ctx->r18, 0X1C);
    // 0x80047FC8: addu        $a1, $s7, $zero
    ctx->r5 = ADD32(ctx->r23, 0);
    // 0x80047FCC: jal         0x8009A3B4
    // 0x80047FD0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80047FD0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x80047FD4: addiu       $s0, $sp, 0x48
    ctx->r16 = ADD32(ctx->r29, 0X48);
    // 0x80047FD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80047FDC: addiu       $a1, $s2, 0x34
    ctx->r5 = ADD32(ctx->r18, 0X34);
    // 0x80047FE0: jal         0x8009A3B4
    // 0x80047FE4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80047FE4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x80047FE8: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80047FEC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80047FF0: addu        $a2, $s4, $zero
    ctx->r6 = ADD32(ctx->r20, 0);
    // 0x80047FF4: addu        $a3, $s6, $zero
    ctx->r7 = ADD32(ctx->r22, 0);
    // 0x80047FF8: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x80047FFC: jal         0x80048994
    // 0x80048000: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80048994_23D94(rdram, ctx);
        goto after_6;
    // 0x80048000: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_6:
    // 0x80048004: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x80048008: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8004800C: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x80048010: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x80048014: sw          $fp, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r30;
    // 0x80048018: jal         0x800480A0
    // 0x8004801C: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    func_800480A0_234A0(rdram, ctx);
        goto after_7;
    // 0x8004801C: sw          $s5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r21;
    after_7:
    // 0x80048020: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80048024: beq         $s0, $zero, L_8004806C
    if (ctx->r16 == 0) {
        // 0x80048028: andi        $v0, $s0, 0x300
        ctx->r2 = ctx->r16 & 0X300;
            goto L_8004806C;
    }
    // 0x80048028: andi        $v0, $s0, 0x300
    ctx->r2 = ctx->r16 & 0X300;
    // 0x8004802C: beq         $v0, $zero, L_80048040
    if (ctx->r2 == 0) {
        // 0x80048030: andi        $v0, $s0, 0xC00
        ctx->r2 = ctx->r16 & 0XC00;
            goto L_80048040;
    }
    // 0x80048030: andi        $v0, $s0, 0xC00
    ctx->r2 = ctx->r16 & 0XC00;
    // 0x80048034: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x80048038: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x8004803C: andi        $v0, $s0, 0xC00
    ctx->r2 = ctx->r16 & 0XC00;
L_80048040:
    // 0x80048040: beq         $v0, $zero, L_80048054
    if (ctx->r2 == 0) {
        // 0x80048044: andi        $v0, $s0, 0x3000
        ctx->r2 = ctx->r16 & 0X3000;
            goto L_80048054;
    }
    // 0x80048044: andi        $v0, $s0, 0x3000
    ctx->r2 = ctx->r16 & 0X3000;
    // 0x80048048: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x8004804C: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x80048050: andi        $v0, $s0, 0x3000
    ctx->r2 = ctx->r16 & 0X3000;
L_80048054:
    // 0x80048054: beq         $v0, $zero, L_80048064
    if (ctx->r2 == 0) {
        // 0x80048058: addu        $a0, $s7, $zero
        ctx->r4 = ADD32(ctx->r23, 0);
            goto L_80048064;
    }
    // 0x80048058: addu        $a0, $s7, $zero
    ctx->r4 = ADD32(ctx->r23, 0);
    // 0x8004805C: lw          $v0, 0x3C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X3C);
    // 0x80048060: sw          $v0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r2;
L_80048064:
    // 0x80048064: jal         0x8004DD04
    // 0x80048068: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_8;
    // 0x80048068: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_8:
L_8004806C:
    // 0x8004806C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x80048070: lw          $ra, 0xAC($sp)
    ctx->r31 = MEM_W(ctx->r29, 0XAC);
    // 0x80048074: lw          $fp, 0xA8($sp)
    ctx->r30 = MEM_W(ctx->r29, 0XA8);
    // 0x80048078: lw          $s7, 0xA4($sp)
    ctx->r23 = MEM_W(ctx->r29, 0XA4);
    // 0x8004807C: lw          $s6, 0xA0($sp)
    ctx->r22 = MEM_W(ctx->r29, 0XA0);
    // 0x80048080: lw          $s5, 0x9C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X9C);
    // 0x80048084: lw          $s4, 0x98($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X98);
    // 0x80048088: lw          $s3, 0x94($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X94);
    // 0x8004808C: lw          $s2, 0x90($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X90);
    // 0x80048090: lw          $s1, 0x8C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8C);
    // 0x80048094: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x80048098: jr          $ra
    // 0x8004809C: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    TRACE_RETURN()
    return;
    // 0x8004809C: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_80061110_3C510(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80061110: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80061114: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80061118: lui         $s1, 0x801B
    ctx->r17 = S32(0X801B << 16);
    // 0x8006111C: addiu       $s1, $s1, -0x2414
    ctx->r17 = ADD32(ctx->r17, -0X2414);
    // 0x80061120: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80061124: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80061128: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x8006112C: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80061130: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80061134: beq         $v0, $zero, L_80061364
    if (ctx->r2 == 0) {
        // 0x80061138: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80061364;
    }
    // 0x80061138: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006113C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80061140: lb          $a0, -0x2412($a0)
    ctx->r4 = MEM_B(ctx->r4, -0X2412);
    // 0x80061144: beq         $a0, $v0, L_800611E0
    if (ctx->r4 == ctx->r2) {
        // 0x80061148: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_800611E0;
    }
    // 0x80061148: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x8006114C: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x80061150: beql        $v0, $zero, L_80061168
    if (ctx->r2 == 0) {
        // 0x80061154: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80061168;
    }
    goto skip_0;
    // 0x80061154: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80061158: beq         $a0, $zero, L_80061180
    if (ctx->r4 == 0) {
        // 0x8006115C: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_80061180;
    }
    // 0x8006115C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80061160: j           L_80061364
    // 0x80061164: nop

        goto L_80061364;
    // 0x80061164: nop

L_80061168:
    // 0x80061168: beq         $a0, $v0, L_800612AC
    if (ctx->r4 == ctx->r2) {
        // 0x8006116C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_800612AC;
    }
    // 0x8006116C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80061170: beq         $a0, $v0, L_800612E4
    if (ctx->r4 == ctx->r2) {
        // 0x80061174: nop
    
            goto L_800612E4;
    }
    // 0x80061174: nop

    // 0x80061178: j           L_80061364
    // 0x8006117C: nop

        goto L_80061364;
    // 0x8006117C: nop

L_80061180:
    // 0x80061180: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80061184: lbu         $a0, -0x2410($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2410);
    // 0x80061188: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x8006118C: lbu         $a1, -0x240F($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X240F);
    // 0x80061190: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80061194: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80061198: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8006119C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800611A0: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x800611A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800611A8: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x800611AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800611B0: sb          $zero, 0x4DFD($at)
    MEM_B(0X4DFD, ctx->r1) = 0;
    // 0x800611B4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800611B8: jal         0x800616FC
    // 0x800611BC: sb          $v1, -0x2412($at)
    MEM_B(-0X2412, ctx->r1) = ctx->r3;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_0;
    // 0x800611BC: sb          $v1, -0x2412($at)
    MEM_B(-0X2412, ctx->r1) = ctx->r3;
    after_0:
    // 0x800611C0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800611C4: lbu         $v0, -0x2413($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2413);
    // 0x800611C8: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x800611CC: beq         $v0, $zero, L_80061364
    if (ctx->r2 == 0) {
        // 0x800611D0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80061364;
    }
    // 0x800611D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800611D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800611D8: j           L_80061364
    // 0x800611DC: sb          $v0, 0x4DF9($at)
    MEM_B(0X4DF9, ctx->r1) = ctx->r2;
        goto L_80061364;
    // 0x800611DC: sb          $v0, 0x4DF9($at)
    MEM_B(0X4DF9, ctx->r1) = ctx->r2;
L_800611E0:
    // 0x800611E0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800611E4: lbu         $v0, -0x2413($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2413);
    // 0x800611E8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x800611EC: beq         $v0, $zero, L_80061200
    if (ctx->r2 == 0) {
        // 0x800611F0: nop
    
            goto L_80061200;
    }
    // 0x800611F0: nop

    // 0x800611F4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x800611F8: j           L_80061208
    // 0x800611FC: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
        goto L_80061208;
    // 0x800611FC: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
L_80061200:
    // 0x80061200: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80061204: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_80061208:
    // 0x80061208: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8006120C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80061210: addiu       $v0, $v0, -0xB
    ctx->r2 = ADD32(ctx->r2, -0XB);
    // 0x80061214: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80061218: beq         $v0, $zero, L_80061228
    if (ctx->r2 == 0) {
        // 0x8006121C: nop
    
            goto L_80061228;
    }
    // 0x8006121C: nop

    // 0x80061220: jal         0x80061724
    // 0x80061224: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_1;
    // 0x80061224: nop

    after_1:
L_80061228:
    // 0x80061228: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x8006122C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80061230: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x80061234: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80061238: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8006123C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80061240: lw          $v0, 0x740($at)
    ctx->r2 = MEM_W(ctx->r1, 0X740);
    // 0x80061244: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80061248: bne         $v1, $zero, L_80061364
    if (ctx->r3 != 0) {
        // 0x8006124C: nop
    
            goto L_80061364;
    }
    // 0x8006124C: nop

    // 0x80061250: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x80061254: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80061258: bne         $v0, $zero, L_8006126C
    if (ctx->r2 != 0) {
        // 0x8006125C: nop
    
            goto L_8006126C;
    }
    // 0x8006125C: nop

    // 0x80061260: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80061264: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80061268: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8006126C:
    // 0x8006126C: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x80061270: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80061274: bne         $v0, $zero, L_80061294
    if (ctx->r2 != 0) {
        // 0x80061278: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80061294;
    }
    // 0x80061278: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8006127C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80061280: bne         $v1, $v0, L_80061294
    if (ctx->r3 != ctx->r2) {
        // 0x80061284: nop
    
            goto L_80061294;
    }
    // 0x80061284: nop

    // 0x80061288: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006128C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80061290: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80061294:
    // 0x80061294: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x80061298: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8006129C: bnel        $v0, $zero, L_800612A4
    if (ctx->r2 != 0) {
        // 0x800612A0: sb          $zero, 0x449($s0)
        MEM_B(0X449, ctx->r16) = 0;
            goto L_800612A4;
    }
    goto skip_1;
    // 0x800612A0: sb          $zero, 0x449($s0)
    MEM_B(0X449, ctx->r16) = 0;
    skip_1:
L_800612A4:
    // 0x800612A4: j           L_80061364
    // 0x800612A8: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
        goto L_80061364;
    // 0x800612A8: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_800612AC:
    // 0x800612AC: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x800612B0: lbu         $a0, -0x2410($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X2410);
    // 0x800612B4: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x800612B8: lbu         $a1, -0x240F($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X240F);
    // 0x800612BC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x800612C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800612C4: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x800612C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x800612CC: sb          $zero, 0x4DFD($at)
    MEM_B(0X4DFD, ctx->r1) = 0;
    // 0x800612D0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800612D4: jal         0x800616FC
    // 0x800612D8: sb          $v0, -0x2412($at)
    MEM_B(-0X2412, ctx->r1) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_2;
    // 0x800612D8: sb          $v0, -0x2412($at)
    MEM_B(-0X2412, ctx->r1) = ctx->r2;
    after_2:
    // 0x800612DC: j           L_80061364
    // 0x800612E0: nop

        goto L_80061364;
    // 0x800612E0: nop

L_800612E4:
    // 0x800612E4: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x800612E8: lbu         $v0, -0x2413($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2413);
    // 0x800612EC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x800612F0: beq         $v0, $zero, L_80061304
    if (ctx->r2 == 0) {
        // 0x800612F4: nop
    
            goto L_80061304;
    }
    // 0x800612F4: nop

    // 0x800612F8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x800612FC: j           L_8006130C
    // 0x80061300: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
        goto L_8006130C;
    // 0x80061300: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
L_80061304:
    // 0x80061304: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80061308: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_8006130C:
    // 0x8006130C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80061310: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80061314: addiu       $v0, $v0, -0xB
    ctx->r2 = ADD32(ctx->r2, -0XB);
    // 0x80061318: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x8006131C: beq         $v0, $zero, L_8006132C
    if (ctx->r2 == 0) {
        // 0x80061320: nop
    
            goto L_8006132C;
    }
    // 0x80061320: nop

    // 0x80061324: jal         0x80061724
    // 0x80061328: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_3;
    // 0x80061328: nop

    after_3:
L_8006132C:
    // 0x8006132C: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x80061330: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80061334: lw          $v1, 0x3FF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X3FF0);
    // 0x80061338: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8006133C: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80061340: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80061344: lw          $v0, 0x740($at)
    ctx->r2 = MEM_W(ctx->r1, 0X740);
    // 0x80061348: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8006134C: bne         $v1, $zero, L_80061364
    if (ctx->r3 != 0) {
        // 0x80061350: nop
    
            goto L_80061364;
    }
    // 0x80061350: nop

    // 0x80061354: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80061358: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x8006135C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80061360: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80061364:
    // 0x80061364: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80061368: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8006136C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80061370: jr          $ra
    // 0x80061374: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80061374: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80061378: nop

    // 0x8006137C: nop

;}
RECOMP_FUNC void func_80035498_10898(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80035498: jr          $ra
    // 0x8003549C: nop

    TRACE_RETURN()
    return;
    // 0x8003549C: nop

;}
RECOMP_FUNC void func_800788E0_53CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800788E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800788E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800788E8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x800788EC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x800788F0: lui         $at, 0x800C
    ctx->r1 = S32(0X800C << 16);
    // 0x800788F4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x800788F8: lw          $v0, -0x31C4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X31C4);
    // 0x800788FC: jalr        $v0
    // 0x80078900: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80078900: nop

    after_0:
    // 0x80078904: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80078908: jr          $ra
    // 0x8007890C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007890C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800780B8_534B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800780B8: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x800780BC: lbu         $v1, 0x3($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X3);
    // 0x800780C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800780C4: beq         $v1, $v0, L_800780FC
    if (ctx->r3 == ctx->r2) {
        // 0x800780C8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_800780FC;
    }
    // 0x800780C8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x800780CC: beq         $v0, $zero, L_80078118
    if (ctx->r2 == 0) {
        // 0x800780D0: lui         $a1, 0x4
        ctx->r5 = S32(0X4 << 16);
            goto L_80078118;
    }
    // 0x800780D0: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    // 0x800780D4: bne         $v1, $zero, L_80078118
    if (ctx->r3 != 0) {
        // 0x800780D8: nop
    
            goto L_80078118;
    }
    // 0x800780D8: nop

    // 0x800780DC: lui         $a1, 0xFFFB
    ctx->r5 = S32(0XFFFB << 16);
    // 0x800780E0: ori         $a1, $a1, 0xFBFC
    ctx->r5 = ctx->r5 | 0XFBFC;
    // 0x800780E4: lhu         $v0, 0x1E($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X1E);
    // 0x800780E8: lhu         $v1, 0x24($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X24);
    // 0x800780EC: lw          $a0, 0x18($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X18);
    // 0x800780F0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x800780F4: j           L_80078130
    // 0x800780F8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
        goto L_80078130;
    // 0x800780F8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
L_800780FC:
    // 0x800780FC: lui         $v0, 0xFFFB
    ctx->r2 = S32(0XFFFB << 16);
    // 0x80078100: lhu         $v1, 0x24($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X24);
    // 0x80078104: lw          $a0, 0x18($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X18);
    // 0x80078108: ori         $v0, $v0, 0xFBFC
    ctx->r2 = ctx->r2 | 0XFBFC;
    // 0x8007810C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80078110: j           L_80078138
    // 0x80078114: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
        goto L_80078138;
    // 0x80078114: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
L_80078118:
    // 0x80078118: lhu         $v0, 0x1E($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X1E);
    // 0x8007811C: lhu         $v1, 0x24($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X24);
    // 0x80078120: lw          $a0, 0x18($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X18);
    // 0x80078124: ori         $a1, $a1, 0x404
    ctx->r5 = ctx->r5 | 0X404;
    // 0x80078128: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x8007812C: addiu       $v1, $v1, 0x6
    ctx->r3 = ADD32(ctx->r3, 0X6);
L_80078130:
    // 0x80078130: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80078134: sh          $v0, 0x1E($a2)
    MEM_H(0X1E, ctx->r6) = ctx->r2;
L_80078138:
    // 0x80078138: sh          $v1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r3;
    // 0x8007813C: sw          $a0, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r4;
    // 0x80078140: lbu         $v0, 0xB($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XB);
    // 0x80078144: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80078148: sb          $v0, 0xB($a2)
    MEM_B(0XB, ctx->r6) = ctx->r2;
    // 0x8007814C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80078150: bne         $v0, $zero, L_80078184
    if (ctx->r2 != 0) {
        // 0x80078154: nop
    
            goto L_80078184;
    }
    // 0x80078154: nop

    // 0x80078158: lbu         $v0, 0x3($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X3);
    // 0x8007815C: lbu         $v1, 0x8($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X8);
    // 0x80078160: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80078164: lui         $a0, 0x800C
    ctx->r4 = S32(0X800C << 16);
    // 0x80078168: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8007816C: lbu         $a0, -0x332F($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X332F);
    // 0x80078170: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80078174: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80078178: sb          $v1, 0x8($a2)
    MEM_B(0X8, ctx->r6) = ctx->r3;
    // 0x8007817C: sb          $v0, 0x22($a2)
    MEM_B(0X22, ctx->r6) = ctx->r2;
    // 0x80078180: sb          $a0, 0xB($a2)
    MEM_B(0XB, ctx->r6) = ctx->r4;
L_80078184:
    // 0x80078184: jr          $ra
    // 0x80078188: nop

    TRACE_RETURN()
    return;
    // 0x80078188: nop

;}
RECOMP_FUNC void func_80028850_3C50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028850: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80028854: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80028858: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8002885C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80028860: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80028864: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80028868: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8002886C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80028870: addiu       $v1, $v1, 0x47F0
    ctx->r3 = ADD32(ctx->r3, 0X47F0);
    // 0x80028874: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80028878: sb          $a1, 0xA4($v0)
    MEM_B(0XA4, ctx->r2) = ctx->r5;
    // 0x8002887C: sb          $a2, 0xA5($v0)
    MEM_B(0XA5, ctx->r2) = ctx->r6;
    // 0x80028880: jr          $ra
    // 0x80028884: sb          $a3, 0xA6($v0)
    MEM_B(0XA6, ctx->r2) = ctx->r7;
    TRACE_RETURN()
    return;
    // 0x80028884: sb          $a3, 0xA6($v0)
    MEM_B(0XA6, ctx->r2) = ctx->r7;
;}
RECOMP_FUNC void func_8008EF54_6A354(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008EF54: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008EF58: lw          $v1, 0x520C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X520C);
    // 0x8008EF5C: addiu       $v0, $v1, 0xB8
    ctx->r2 = ADD32(ctx->r3, 0XB8);
    // 0x8008EF60: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x8008EF64: beq         $v0, $zero, L_8008EF90
    if (ctx->r2 == 0) {
        // 0x8008EF68: sltu        $v0, $a0, $v1
        ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
            goto L_8008EF90;
    }
    // 0x8008EF68: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x8008EF6C: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008EF70: lw          $v0, -0x11A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X11A0);
    // 0x8008EF74: beq         $v0, $zero, L_8008EFC4
    if (ctx->r2 == 0) {
        // 0x8008EF78: nop
    
            goto L_8008EFC4;
    }
    // 0x8008EF78: nop

    // 0x8008EF7C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008EF80: lw          $v0, 0x5204($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5204);
    // 0x8008EF84: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008EF88: j           L_8008EFCC
    // 0x8008EF8C: sw          $zero, -0x11A0($at)
    MEM_W(-0X11A0, ctx->r1) = 0;
        goto L_8008EFCC;
    // 0x8008EF8C: sw          $zero, -0x11A0($at)
    MEM_W(-0X11A0, ctx->r1) = 0;
L_8008EF90:
    // 0x8008EF90: beq         $v0, $zero, L_8008EFBC
    if (ctx->r2 == 0) {
        // 0x8008EF94: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8008EFBC;
    }
    // 0x8008EF94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008EF98: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8008EF9C: lw          $v0, -0x11A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X11A0);
    // 0x8008EFA0: beq         $v0, $zero, L_8008EFC4
    if (ctx->r2 == 0) {
        // 0x8008EFA4: nop
    
            goto L_8008EFC4;
    }
    // 0x8008EFA4: nop

    // 0x8008EFA8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008EFAC: lw          $v0, 0x5208($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5208);
    // 0x8008EFB0: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008EFB4: j           L_8008EFCC
    // 0x8008EFB8: sw          $zero, -0x11A0($at)
    MEM_W(-0X11A0, ctx->r1) = 0;
        goto L_8008EFCC;
    // 0x8008EFB8: sw          $zero, -0x11A0($at)
    MEM_W(-0X11A0, ctx->r1) = 0;
L_8008EFBC:
    // 0x8008EFBC: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8008EFC0: sw          $v0, -0x11A0($at)
    MEM_W(-0X11A0, ctx->r1) = ctx->r2;
L_8008EFC4:
    // 0x8008EFC4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008EFC8: lw          $v0, 0x5200($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5200);
L_8008EFCC:
    // 0x8008EFCC: jr          $ra
    // 0x8008EFD0: nop

    TRACE_RETURN()
    return;
    // 0x8008EFD0: nop

    // 0x8008EFD4: nop

    // 0x8008EFD8: nop

    // 0x8008EFDC: nop

;}
RECOMP_FUNC void func_8006D598_48998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006D598: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006D59C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006D5A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006D5A4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8006D5A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8006D5AC: jal         0x8006C6D8
    // 0x8006D5B0: lhu         $s1, 0x11C($s0)
    ctx->r17 = MEM_HU(ctx->r16, 0X11C);
    func_8006C6D8_47AD8(rdram, ctx);
        goto after_0;
    // 0x8006D5B0: lhu         $s1, 0x11C($s0)
    ctx->r17 = MEM_HU(ctx->r16, 0X11C);
    after_0:
    // 0x8006D5B4: bne         $v0, $zero, L_8006D7D8
    if (ctx->r2 != 0) {
        // 0x8006D5B8: nop
    
            goto L_8006D7D8;
    }
    // 0x8006D5B8: nop

    // 0x8006D5BC: lhu         $a0, 0x124($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X124);
    // 0x8006D5C0: lhu         $v1, 0x126($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X126);
    // 0x8006D5C4: lhu         $a1, 0x12C($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X12C);
    // 0x8006D5C8: lhu         $v0, 0x12E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X12E);
    // 0x8006D5CC: lhu         $a2, 0x13C($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X13C);
    // 0x8006D5D0: or          $a0, $a0, $v1
    ctx->r4 = ctx->r4 | ctx->r3;
    // 0x8006D5D4: or          $a1, $a1, $v0
    ctx->r5 = ctx->r5 | ctx->r2;
    // 0x8006D5D8: lhu         $v0, 0x138($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X138);
    // 0x8006D5DC: lhu         $v1, 0x13A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X13A);
    // 0x8006D5E0: or          $a0, $a0, $a1
    ctx->r4 = ctx->r4 | ctx->r5;
    // 0x8006D5E4: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8006D5E8: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
    // 0x8006D5EC: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8006D5F0: and         $v0, $s1, $v0
    ctx->r2 = ctx->r17 & ctx->r2;
    // 0x8006D5F4: beq         $v0, $zero, L_8006D7D0
    if (ctx->r2 == 0) {
        // 0x8006D5F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006D7D0;
    }
    // 0x8006D5F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006D5FC: jal         0x8006CC14
    // 0x8006D600: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8006CC14_48014(rdram, ctx);
        goto after_1;
    // 0x8006D600: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_1:
    // 0x8006D604: bnel        $v0, $zero, L_8006D7D4
    if (ctx->r2 != 0) {
        // 0x8006D608: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_8006D7D4;
    }
    goto skip_0;
    // 0x8006D608: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_0:
    // 0x8006D60C: lhu         $v1, 0x11E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11E);
    // 0x8006D610: lhu         $v0, 0x138($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X138);
    // 0x8006D614: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D618: beq         $v0, $zero, L_8006D630
    if (ctx->r2 == 0) {
        // 0x8006D61C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006D630;
    }
    // 0x8006D61C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006D620: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8006D624: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006D628: j           L_8006D634
    // 0x8006D62C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8006D634;
    // 0x8006D62C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006D630:
    // 0x8006D630: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8006D634:
    // 0x8006D634: bne         $v1, $zero, L_8006D7D8
    if (ctx->r3 != 0) {
        // 0x8006D638: nop
    
            goto L_8006D7D8;
    }
    // 0x8006D638: nop

    // 0x8006D63C: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006D640: lhu         $v0, 0x124($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X124);
    // 0x8006D644: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D648: beq         $v0, $zero, L_8006D678
    if (ctx->r2 == 0) {
        // 0x8006D64C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006D678;
    }
    // 0x8006D64C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006D650: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006D654: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D658: bne         $v0, $zero, L_8006D678
    if (ctx->r2 != 0) {
        // 0x8006D65C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006D678;
    }
    // 0x8006D65C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006D660: lbu         $v1, 0x112($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X112);
    // 0x8006D664: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006D668: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006D66C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006D670: sb          $zero, 0x112($s0)
    MEM_B(0X112, ctx->r16) = 0;
    // 0x8006D674: sb          $v1, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r3;
L_8006D678:
    // 0x8006D678: bne         $a0, $zero, L_8006D7D8
    if (ctx->r4 != 0) {
        // 0x8006D67C: nop
    
            goto L_8006D7D8;
    }
    // 0x8006D67C: nop

    // 0x8006D680: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006D684: lhu         $v0, 0x126($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X126);
    // 0x8006D688: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D68C: beq         $v0, $zero, L_8006D6BC
    if (ctx->r2 == 0) {
        // 0x8006D690: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8006D6BC;
    }
    // 0x8006D690: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8006D694: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006D698: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D69C: bne         $v0, $zero, L_8006D6BC
    if (ctx->r2 != 0) {
        // 0x8006D6A0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006D6BC;
    }
    // 0x8006D6A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006D6A4: lbu         $v1, 0x112($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X112);
    // 0x8006D6A8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8006D6AC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006D6B0: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006D6B4: sb          $v0, 0x112($s0)
    MEM_B(0X112, ctx->r16) = ctx->r2;
    // 0x8006D6B8: sb          $v1, 0x113($s0)
    MEM_B(0X113, ctx->r16) = ctx->r3;
L_8006D6BC:
    // 0x8006D6BC: bne         $a0, $zero, L_8006D7D8
    if (ctx->r4 != 0) {
        // 0x8006D6C0: nop
    
            goto L_8006D7D8;
    }
    // 0x8006D6C0: nop

    // 0x8006D6C4: lb          $v0, 0x174($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X174);
    // 0x8006D6C8: andi        $v0, $v0, 0xC0
    ctx->r2 = ctx->r2 & 0XC0;
    // 0x8006D6CC: bnel        $v0, $zero, L_8006D7D4
    if (ctx->r2 != 0) {
        // 0x8006D6D0: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_8006D7D4;
    }
    goto skip_1;
    // 0x8006D6D0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_1:
    // 0x8006D6D4: lb          $v0, 0x177($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X177);
    // 0x8006D6D8: bnel        $v0, $zero, L_8006D7D4
    if (ctx->r2 != 0) {
        // 0x8006D6DC: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_8006D7D4;
    }
    goto skip_2;
    // 0x8006D6DC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_2:
    // 0x8006D6E0: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006D6E4: lhu         $v0, 0x124($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X124);
    // 0x8006D6E8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D6EC: beql        $v0, $zero, L_8006D718
    if (ctx->r2 == 0) {
        // 0x8006D6F0: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8006D718;
    }
    goto skip_3;
    // 0x8006D6F0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_3:
    // 0x8006D6F4: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006D6F8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D6FC: beq         $v0, $zero, L_8006D714
    if (ctx->r2 == 0) {
        // 0x8006D700: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006D714;
    }
    // 0x8006D700: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006D704: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006D708: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006D70C: j           L_8006D718
    // 0x8006D710: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_8006D718;
    // 0x8006D710: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006D714:
    // 0x8006D714: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8006D718:
    // 0x8006D718: bne         $v1, $zero, L_8006D7D8
    if (ctx->r3 != 0) {
        // 0x8006D71C: nop
    
            goto L_8006D7D8;
    }
    // 0x8006D71C: nop

    // 0x8006D720: lhu         $v1, 0x11C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X11C);
    // 0x8006D724: lhu         $v0, 0x126($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X126);
    // 0x8006D728: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D72C: beql        $v0, $zero, L_8006D75C
    if (ctx->r2 == 0) {
        // 0x8006D730: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_8006D75C;
    }
    goto skip_4;
    // 0x8006D730: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    skip_4:
    // 0x8006D734: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006D738: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8006D73C: beq         $v0, $zero, L_8006D758
    if (ctx->r2 == 0) {
        // 0x8006D740: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8006D758;
    }
    // 0x8006D740: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8006D744: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006D748: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006D74C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006D750: j           L_8006D75C
    // 0x8006D754: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
        goto L_8006D75C;
    // 0x8006D754: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_8006D758:
    // 0x8006D758: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_8006D75C:
    // 0x8006D75C: bne         $v1, $zero, L_8006D7D8
    if (ctx->r3 != 0) {
        // 0x8006D760: nop
    
            goto L_8006D7D8;
    }
    // 0x8006D760: nop

    // 0x8006D764: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8006D768: beq         $v0, $zero, L_8006D7A0
    if (ctx->r2 == 0) {
        // 0x8006D76C: nop
    
            goto L_8006D7A0;
    }
    // 0x8006D76C: nop

    // 0x8006D770: lhu         $v0, 0x124($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X124);
    // 0x8006D774: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006D778: beql        $v0, $zero, L_8006D7D4
    if (ctx->r2 == 0) {
        // 0x8006D77C: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_8006D7D4;
    }
    goto skip_5;
    // 0x8006D77C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_5:
    // 0x8006D780: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006D784: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006D788: bne         $v0, $zero, L_8006D7D8
    if (ctx->r2 != 0) {
        // 0x8006D78C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006D7D8;
    }
    // 0x8006D78C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006D790: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006D794: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006D798: j           L_8006D7D8
    // 0x8006D79C: sb          $zero, 0x112($s0)
    MEM_B(0X112, ctx->r16) = 0;
        goto L_8006D7D8;
    // 0x8006D79C: sb          $zero, 0x112($s0)
    MEM_B(0X112, ctx->r16) = 0;
L_8006D7A0:
    // 0x8006D7A0: lhu         $v0, 0x126($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X126);
    // 0x8006D7A4: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006D7A8: beql        $v0, $zero, L_8006D7D4
    if (ctx->r2 == 0) {
        // 0x8006D7AC: sb          $zero, 0x9($s0)
        MEM_B(0X9, ctx->r16) = 0;
            goto L_8006D7D4;
    }
    goto skip_6;
    // 0x8006D7AC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    skip_6:
    // 0x8006D7B0: lhu         $v0, 0x134($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X134);
    // 0x8006D7B4: and         $v0, $v0, $s1
    ctx->r2 = ctx->r2 & ctx->r17;
    // 0x8006D7B8: bne         $v0, $zero, L_8006D7D8
    if (ctx->r2 != 0) {
        // 0x8006D7BC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006D7D8;
    }
    // 0x8006D7BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8006D7C0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8006D7C4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8006D7C8: j           L_8006D7D8
    // 0x8006D7CC: sb          $v0, 0x112($s0)
    MEM_B(0X112, ctx->r16) = ctx->r2;
        goto L_8006D7D8;
    // 0x8006D7CC: sb          $v0, 0x112($s0)
    MEM_B(0X112, ctx->r16) = ctx->r2;
L_8006D7D0:
    // 0x8006D7D0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_8006D7D4:
    // 0x8006D7D4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8006D7D8:
    // 0x8006D7D8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8006D7DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8006D7E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006D7E4: jr          $ra
    // 0x8006D7E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8006D7E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
