#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80229B9C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229B9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229BA0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229BA4: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x80229BA8: bne         $v0, $zero, L_80229BD0
    if (ctx->r2 != 0) {
        // 0x80229BAC: nop
    
            goto L_80229BD0;
    }
    // 0x80229BAC: nop

    // 0x80229BB0: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80229BB4: bne         $v0, $zero, L_80229BC0
    if (ctx->r2 != 0) {
        // 0x80229BB8: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80229BC0;
    }
    // 0x80229BB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229BBC: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80229BC0:
    // 0x80229BC0: jal         0x8022979C
    // 0x80229BC4: nop

    func_8022979C_ovl6(rdram, ctx);
        goto after_0;
    // 0x80229BC4: nop

    after_0:
    // 0x80229BC8: j           L_80229C54
    // 0x80229BCC: nop

        goto L_80229C54;
    // 0x80229BCC: nop

L_80229BD0:
    // 0x80229BD0: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80229BD4: bne         $v0, $zero, L_80229BF4
    if (ctx->r2 != 0) {
        // 0x80229BD8: nop
    
            goto L_80229BF4;
    }
    // 0x80229BD8: nop

    // 0x80229BDC: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x80229BE0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80229BE4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229BE8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229BEC: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80229BF0: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
L_80229BF4:
    // 0x80229BF4: lbu         $v0, 0xF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XF);
    // 0x80229BF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229BFC: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    // 0x80229C00: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80229C04: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80229C08: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80229C0C: bne         $v1, $v0, L_80229C24
    if (ctx->r3 != ctx->r2) {
        // 0x80229C10: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80229C24;
    }
    // 0x80229C10: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80229C14: jal         0x8004F5C4
    // 0x80229C18: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x80229C18: nop

    after_1:
    // 0x80229C1C: j           L_80229C54
    // 0x80229C20: nop

        goto L_80229C54;
    // 0x80229C20: nop

L_80229C24:
    // 0x80229C24: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80229C28: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229C2C: lw          $v1, -0x3B30($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3B30);
    // 0x80229C30: lhu         $v0, 0x24($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X24);
    // 0x80229C34: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80229C38: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
    // 0x80229C3C: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x80229C40: sltiu       $v0, $v0, 0x121
    ctx->r2 = ctx->r2 < 0X121 ? 1 : 0;
    // 0x80229C44: bne         $v0, $zero, L_80229C54
    if (ctx->r2 != 0) {
        // 0x80229C48: sw          $v1, 0x18($a0)
        MEM_W(0X18, ctx->r4) = ctx->r3;
            goto L_80229C54;
    }
    // 0x80229C48: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
    // 0x80229C4C: addiu       $v0, $zero, 0x120
    ctx->r2 = ADD32(0, 0X120);
    // 0x80229C50: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
L_80229C54:
    // 0x80229C54: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229C58: jr          $ra
    // 0x80229C5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229C5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022818C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022818C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228190: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228194: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80228198: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022819C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802281A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802281A4: lw          $v0, -0x3F1C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3F1C);
    // 0x802281A8: jalr        $v0
    // 0x802281AC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802281AC: nop

    after_0:
    // 0x802281B0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802281B4: jr          $ra
    // 0x802281B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802281B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802281BC: nop

;}
RECOMP_FUNC void func_802257EC_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802257EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802257F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802257F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802257F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802257FC: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80225800: bne         $v0, $zero, L_80225900
    if (ctx->r2 != 0) {
        // 0x80225804: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80225900;
    }
    // 0x80225804: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225808: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022580C: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225810: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225814: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225818: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022581C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225820: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225824: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80225828: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022582C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225830: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225834: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225838: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8022583C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225840: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225844: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225848: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022584C: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225850: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225854: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225858: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022585C: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225860: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225864: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225868: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022586C: sb          $v0, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = ctx->r2;
    // 0x80225870: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225874: sb          $v0, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = ctx->r2;
    // 0x80225878: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022587C: sb          $zero, 0x4660($at)
    MEM_B(0X4660, ctx->r1) = 0;
    // 0x80225880: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225884: sb          $zero, 0x45B8($at)
    MEM_B(0X45B8, ctx->r1) = 0;
    // 0x80225888: lw          $a0, 0x24($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X24);
    // 0x8022588C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80225890: lui         $v0, 0xF650
    ctx->r2 = S32(0XF650 << 16);
    // 0x80225894: sw          $v0, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->r2;
    // 0x80225898: lui         $v0, 0xFF9F
    ctx->r2 = S32(0XFF9F << 16);
    // 0x8022589C: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x802258A0: lui         $v0, 0xFF70
    ctx->r2 = S32(0XFF70 << 16);
    // 0x802258A4: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
    // 0x802258A8: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802258AC: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x802258B0: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x802258B4: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x802258B8: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x802258BC: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x802258C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802258C4: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x802258C8: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x802258CC: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802258D0: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x802258D4: lw          $v1, 0x30($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X30);
    // 0x802258D8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802258DC: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x802258E0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802258E4: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x802258E8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802258EC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x802258F0: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x802258F4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802258F8: jal         0x8004CB2C
    // 0x802258FC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x802258FC: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    after_0:
L_80225900:
    // 0x80225900: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80225904: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x80225908: bne         $v1, $v0, L_80225918
    if (ctx->r3 != ctx->r2) {
        // 0x8022590C: nop
    
            goto L_80225918;
    }
    // 0x8022590C: nop

    // 0x80225910: lw          $a0, 0x28($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X28);
    // 0x80225914: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
L_80225918:
    // 0x80225918: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022591C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225920: jr          $ra
    // 0x80225924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802286FC_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802286FC: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x80228700: lw          $v1, 0x98($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X98);
    // 0x80228704: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228708: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8022870C: lbu         $v1, 0x0($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X0);
    // 0x80228710: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x80228714: bne         $v1, $v0, L_80228728
    if (ctx->r3 != ctx->r2) {
        // 0x80228718: nop
    
            goto L_80228728;
    }
    // 0x80228718: nop

    // 0x8022871C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80228720: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228724: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80228728:
    // 0x80228728: jr          $ra
    // 0x8022872C: nop

    TRACE_RETURN()
    return;
    // 0x8022872C: nop

;}
RECOMP_FUNC void func_80229F18_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229F18: lui         $a1, 0x801A
    ctx->r5 = S32(0X801A << 16);
    // 0x80229F1C: lw          $a1, -0x5858($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5858);
    // 0x80229F20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229F24: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229F28: addiu       $v0, $a1, 0x28
    ctx->r2 = ADD32(ctx->r5, 0X28);
    // 0x80229F2C: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80229F30: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80229F34: addiu       $v0, $zero, 0x2C
    ctx->r2 = ADD32(0, 0X2C);
    // 0x80229F38: sb          $v0, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r2;
    // 0x80229F3C: lbu         $v1, 0x7($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X7);
    // 0x80229F40: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80229F44: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x80229F48: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80229F4C: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x80229F50: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80229F54: sb          $v0, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r2;
    // 0x80229F58: sb          $v0, 0x5($a1)
    MEM_B(0X5, ctx->r5) = ctx->r2;
    // 0x80229F5C: sb          $v0, 0x4($a1)
    MEM_B(0X4, ctx->r5) = ctx->r2;
    // 0x80229F60: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80229F64: sb          $v1, 0x7($a1)
    MEM_B(0X7, ctx->r5) = ctx->r3;
    // 0x80229F68: lhu         $v0, 0xA($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XA);
    // 0x80229F6C: lhu         $v1, 0x4($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X4);
    // 0x80229F70: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229F74: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80229F78: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80229F7C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80229F80: sh          $v0, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r2;
    // 0x80229F84: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x80229F88: lhu         $v0, 0xA($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0XA);
    // 0x80229F8C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229F90: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
    // 0x80229F94: sh          $v0, 0x10($a1)
    MEM_H(0X10, ctx->r5) = ctx->r2;
    // 0x80229F98: lhu         $v0, 0x8($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8);
    // 0x80229F9C: lhu         $v1, 0x6($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X6);
    // 0x80229FA0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229FA4: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80229FA8: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80229FAC: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80229FB0: sh          $v0, 0x12($a1)
    MEM_H(0X12, ctx->r5) = ctx->r2;
    // 0x80229FB4: sh          $v0, 0xA($a1)
    MEM_H(0XA, ctx->r5) = ctx->r2;
    // 0x80229FB8: lhu         $v0, 0x8($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8);
    // 0x80229FBC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229FC0: sh          $v0, 0x22($a1)
    MEM_H(0X22, ctx->r5) = ctx->r2;
    // 0x80229FC4: sh          $v0, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r2;
    // 0x80229FC8: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80229FCC: addiu       $v1, $zero, 0x1F
    ctx->r3 = ADD32(0, 0X1F);
    // 0x80229FD0: sb          $zero, 0x15($a1)
    MEM_B(0X15, ctx->r5) = 0;
    // 0x80229FD4: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
    // 0x80229FD8: sb          $v1, 0x25($a1)
    MEM_B(0X25, ctx->r5) = ctx->r3;
    // 0x80229FDC: sb          $v1, 0x1D($a1)
    MEM_B(0X1D, ctx->r5) = ctx->r3;
    // 0x80229FE0: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80229FE4: addiu       $v1, $v0, 0x20
    ctx->r3 = ADD32(ctx->r2, 0X20);
    // 0x80229FE8: addiu       $v0, $v0, 0x3F
    ctx->r2 = ADD32(ctx->r2, 0X3F);
    // 0x80229FEC: sb          $v1, 0x1C($a1)
    MEM_B(0X1C, ctx->r5) = ctx->r3;
    // 0x80229FF0: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
    // 0x80229FF4: sb          $v0, 0x24($a1)
    MEM_B(0X24, ctx->r5) = ctx->r2;
    // 0x80229FF8: sb          $v0, 0x14($a1)
    MEM_B(0X14, ctx->r5) = ctx->r2;
    // 0x80229FFC: addiu       $v0, $zero, 0x3C48
    ctx->r2 = ADD32(0, 0X3C48);
    // 0x8022A000: sh          $v0, 0xE($a1)
    MEM_H(0XE, ctx->r5) = ctx->r2;
    // 0x8022A004: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022A008: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x8022A00C: addiu       $v0, $zero, 0x2E
    ctx->r2 = ADD32(0, 0X2E);
    // 0x8022A010: sh          $v0, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r2;
    // 0x8022A014: jal         0x8002FD30
    // 0x8022A018: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    func_8002FD30_B130(rdram, ctx);
        goto after_0;
    // 0x8022A018: addiu       $a0, $a0, 0x80
    ctx->r4 = ADD32(ctx->r4, 0X80);
    after_0:
    // 0x8022A01C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A020: jr          $ra
    // 0x8022A024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A024: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022735C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022735C: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80227360: lui         $v1, 0xFFF3
    ctx->r3 = S32(0XFFF3 << 16);
    // 0x80227364: ori         $v1, $v1, 0x6886
    ctx->r3 = ctx->r3 | 0X6886;
    // 0x80227368: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022736C: jr          $ra
    // 0x80227370: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80227370: sw          $v0, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022921C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022921C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229220: addu        $t8, $a0, $zero
    ctx->r24 = ADD32(ctx->r4, 0);
    // 0x80229224: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229228: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022922C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229230: lb          $v0, 0xD($t8)
    ctx->r2 = MEM_B(ctx->r24, 0XD);
    // 0x80229234: beq         $v0, $zero, L_80229374
    if (ctx->r2 == 0) {
        // 0x80229238: nop
    
            goto L_80229374;
    }
    // 0x80229238: nop

    // 0x8022923C: lbu         $v0, 0x8($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X8);
    // 0x80229240: bne         $v0, $zero, L_8022936C
    if (ctx->r2 != 0) {
        // 0x80229244: addiu       $v0, $zero, 0x48
        ctx->r2 = ADD32(0, 0X48);
            goto L_8022936C;
    }
    // 0x80229244: addiu       $v0, $zero, 0x48
    ctx->r2 = ADD32(0, 0X48);
L_80229248:
    // 0x80229248: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022924C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229250: sb          $zero, -0x3670($at)
    MEM_B(-0X3670, ctx->r1) = 0;
    // 0x80229254: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80229258: bgez        $v0, L_80229248
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022925C: lui         $s1, 0x102
        ctx->r17 = S32(0X102 << 16);
            goto L_80229248;
    }
    // 0x8022925C: lui         $s1, 0x102
    ctx->r17 = S32(0X102 << 16);
    // 0x80229260: ori         $s1, $s1, 0x50
    ctx->r17 = ctx->r17 | 0X50;
    // 0x80229264: lui         $s0, 0x2820
    ctx->r16 = S32(0X2820 << 16);
    // 0x80229268: ori         $s0, $s0, 0x2020
    ctx->r16 = ctx->r16 | 0X2020;
    // 0x8022926C: lui         $t7, 0x101
    ctx->r15 = S32(0X101 << 16);
    // 0x80229270: ori         $t7, $t7, 0x1E
    ctx->r15 = ctx->r15 | 0X1E;
    // 0x80229274: lui         $t6, 0x828
    ctx->r14 = S32(0X828 << 16);
    // 0x80229278: ori         $t6, $t6, 0x2828
    ctx->r14 = ctx->r14 | 0X2828;
    // 0x8022927C: lui         $t5, 0x101
    ctx->r13 = S32(0X101 << 16);
    // 0x80229280: ori         $t5, $t5, 0xFFEC
    ctx->r13 = ctx->r13 | 0XFFEC;
    // 0x80229284: lui         $t4, 0x410
    ctx->r12 = S32(0X410 << 16);
    // 0x80229288: ori         $t4, $t4, 0x1010
    ctx->r12 = ctx->r12 | 0X1010;
    // 0x8022928C: lui         $t3, 0x102
    ctx->r11 = S32(0X102 << 16);
    // 0x80229290: ori         $t3, $t3, 0xFFE2
    ctx->r11 = ctx->r11 | 0XFFE2;
    // 0x80229294: lui         $t2, 0x838
    ctx->r10 = S32(0X838 << 16);
    // 0x80229298: ori         $t2, $t2, 0x3838
    ctx->r10 = ctx->r10 | 0X3838;
    // 0x8022929C: lui         $t1, 0x101
    ctx->r9 = S32(0X101 << 16);
    // 0x802292A0: ori         $t1, $t1, 0xFFCE
    ctx->r9 = ctx->r9 | 0XFFCE;
    // 0x802292A4: lui         $t0, 0xA40
    ctx->r8 = S32(0XA40 << 16);
    // 0x802292A8: ori         $t0, $t0, 0x4040
    ctx->r8 = ctx->r8 | 0X4040;
    // 0x802292AC: lui         $a3, 0x102
    ctx->r7 = S32(0X102 << 16);
    // 0x802292B0: ori         $a3, $a3, 0xFF9C
    ctx->r7 = ctx->r7 | 0XFF9C;
    // 0x802292B4: lui         $a2, 0x1220
    ctx->r6 = S32(0X1220 << 16);
    // 0x802292B8: ori         $a2, $a2, 0x2020
    ctx->r6 = ctx->r6 | 0X2020;
    // 0x802292BC: lui         $a1, 0x101
    ctx->r5 = S32(0X101 << 16);
    // 0x802292C0: ori         $a1, $a1, 0xFF7E
    ctx->r5 = ctx->r5 | 0XFF7E;
    // 0x802292C4: lui         $a0, 0x1A10
    ctx->r4 = S32(0X1A10 << 16);
    // 0x802292C8: ori         $a0, $a0, 0x1010
    ctx->r4 = ctx->r4 | 0X1010;
    // 0x802292CC: lui         $v1, 0x102
    ctx->r3 = S32(0X102 << 16);
    // 0x802292D0: ori         $v1, $v1, 0xFF6A
    ctx->r3 = ctx->r3 | 0XFF6A;
    // 0x802292D4: lui         $v0, 0x2428
    ctx->r2 = S32(0X2428 << 16);
    // 0x802292D8: ori         $v0, $v0, 0x2828
    ctx->r2 = ctx->r2 | 0X2828;
    // 0x802292DC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802292E0: sw          $s1, -0x3670($at)
    MEM_W(-0X3670, ctx->r1) = ctx->r17;
    // 0x802292E4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802292E8: sw          $s0, -0x366C($at)
    MEM_W(-0X366C, ctx->r1) = ctx->r16;
    // 0x802292EC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802292F0: sw          $t7, -0x3668($at)
    MEM_W(-0X3668, ctx->r1) = ctx->r15;
    // 0x802292F4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802292F8: sw          $t6, -0x3664($at)
    MEM_W(-0X3664, ctx->r1) = ctx->r14;
    // 0x802292FC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229300: sw          $t5, -0x3660($at)
    MEM_W(-0X3660, ctx->r1) = ctx->r13;
    // 0x80229304: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229308: sw          $t4, -0x365C($at)
    MEM_W(-0X365C, ctx->r1) = ctx->r12;
    // 0x8022930C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229310: sw          $t3, -0x3658($at)
    MEM_W(-0X3658, ctx->r1) = ctx->r11;
    // 0x80229314: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229318: sw          $t2, -0x3654($at)
    MEM_W(-0X3654, ctx->r1) = ctx->r10;
    // 0x8022931C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229320: sw          $t1, -0x3650($at)
    MEM_W(-0X3650, ctx->r1) = ctx->r9;
    // 0x80229324: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229328: sw          $t0, -0x364C($at)
    MEM_W(-0X364C, ctx->r1) = ctx->r8;
    // 0x8022932C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229330: sw          $a3, -0x3648($at)
    MEM_W(-0X3648, ctx->r1) = ctx->r7;
    // 0x80229334: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229338: sw          $a2, -0x3644($at)
    MEM_W(-0X3644, ctx->r1) = ctx->r6;
    // 0x8022933C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229340: sw          $a1, -0x3640($at)
    MEM_W(-0X3640, ctx->r1) = ctx->r5;
    // 0x80229344: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229348: sw          $a0, -0x363C($at)
    MEM_W(-0X363C, ctx->r1) = ctx->r4;
    // 0x8022934C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229350: sw          $v1, -0x3638($at)
    MEM_W(-0X3638, ctx->r1) = ctx->r3;
    // 0x80229354: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229358: sw          $v0, -0x3634($at)
    MEM_W(-0X3634, ctx->r1) = ctx->r2;
    // 0x8022935C: lbu         $v0, 0x8($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X8);
    // 0x80229360: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229364: j           L_80229374
    // 0x80229368: sb          $v0, 0x8($t8)
    MEM_B(0X8, ctx->r24) = ctx->r2;
        goto L_80229374;
    // 0x80229368: sb          $v0, 0x8($t8)
    MEM_B(0X8, ctx->r24) = ctx->r2;
L_8022936C:
    // 0x8022936C: jal         0x80229040
    // 0x80229370: addu        $a0, $t8, $zero
    ctx->r4 = ADD32(ctx->r24, 0);
    func_80229040_ovl6(rdram, ctx);
        goto after_0;
    // 0x80229370: addu        $a0, $t8, $zero
    ctx->r4 = ADD32(ctx->r24, 0);
    after_0:
L_80229374:
    // 0x80229374: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229378: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022937C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229380: jr          $ra
    // 0x80229384: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229384: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80229388: nop

    // 0x8022938C: nop

;}
RECOMP_FUNC void func_80227E60_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227E60: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80227E64: lw          $v0, 0x20($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X20);
    // 0x80227E68: lw          $a0, 0x98($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X98);
    // 0x80227E6C: lui         $v1, 0x3
    ctx->r3 = S32(0X3 << 16);
    // 0x80227E70: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227E74: sw          $v0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r2;
    // 0x80227E78: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80227E7C: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x80227E80: bne         $v1, $v0, L_80227E94
    if (ctx->r3 != ctx->r2) {
        // 0x80227E84: nop
    
            goto L_80227E94;
    }
    // 0x80227E84: nop

    // 0x80227E88: lbu         $v0, 0xA($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XA);
    // 0x80227E8C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227E90: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
L_80227E94:
    // 0x80227E94: jr          $ra
    // 0x80227E98: nop

    TRACE_RETURN()
    return;
    // 0x80227E98: nop

;}
RECOMP_FUNC void func_8022A028_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A028: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A02C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A030: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A034: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A038: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022A03C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022A040: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022A044: jal         0x8004F144
    // 0x8022A048: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022A048: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    after_0:
    // 0x8022A04C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022A050: beq         $a0, $zero, L_8022A07C
    if (ctx->r4 == 0) {
        // 0x8022A054: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A07C;
    }
    // 0x8022A054: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A058: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x8022A05C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8022A060: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A064: sb          $v1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r3;
    // 0x8022A068: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x8022A06C: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x8022A070: sh          $s0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r16;
    // 0x8022A074: sh          $s1, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r17;
    // 0x8022A078: sh          $s2, 0x26($a0)
    MEM_H(0X26, ctx->r4) = ctx->r18;
L_8022A07C:
    // 0x8022A07C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A080: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A084: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A088: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A08C: jr          $ra
    // 0x8022A090: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A090: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022ACE4_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ACE4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022ACE8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022ACEC: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022ACF0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8022ACF4: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8022ACF8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8022ACFC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022AD00: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022AD04: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022AD08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AD0C: lb          $v0, 0xF($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XF);
    // 0x8022AD10: bne         $v0, $zero, L_8022ADBC
    if (ctx->r2 != 0) {
        // 0x8022AD14: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_8022ADBC;
    }
    // 0x8022AD14: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022AD18: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x8022AD1C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022AD20: lb          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC8);
    // 0x8022AD24: addiu       $s6, $zero, 0x6
    ctx->r22 = ADD32(0, 0X6);
    // 0x8022AD28: lui         $s5, 0x8023
    ctx->r21 = S32(0X8023 << 16);
    // 0x8022AD2C: addiu       $s5, $s5, -0x37D0
    ctx->r21 = ADD32(ctx->r21, -0X37D0);
    // 0x8022AD30: xori        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 ^ 0X2;
    // 0x8022AD34: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8022AD38: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022AD3C: andi        $s4, $v0, 0x5
    ctx->r20 = ctx->r2 & 0X5;
L_8022AD40:
    // 0x8022AD40: jal         0x8004F228
    // 0x8022AD44: nop

    func_8004F228_2A628(rdram, ctx);
        goto after_0;
    // 0x8022AD44: nop

    after_0:
    // 0x8022AD48: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022AD4C: beql        $s0, $zero, L_8022ADA0
    if (ctx->r16 == 0) {
        // 0x8022AD50: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8022ADA0;
    }
    goto skip_0;
    // 0x8022AD50: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x8022AD54: addu        $v0, $s1, $s4
    ctx->r2 = ADD32(ctx->r17, ctx->r20);
    // 0x8022AD58: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AD5C: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x8022AD60: sb          $s3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r19;
    // 0x8022AD64: sb          $s6, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r22;
    // 0x8022AD68: sb          $s1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r17;
    // 0x8022AD6C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022AD70: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022AD74: sb          $s3, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r19;
    // 0x8022AD78: jal         0x80071A70
    // 0x8022AD7C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_80071A70_4CE70(rdram, ctx);
        goto after_1;
    // 0x8022AD7C: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_1:
    // 0x8022AD80: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022AD84: lbu         $v0, 0x6($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X6);
    // 0x8022AD88: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x8022AD8C: beq         $v0, $zero, L_8022ADA0
    if (ctx->r2 == 0) {
        // 0x8022AD90: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_8022ADA0;
    }
    // 0x8022AD90: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x8022AD94: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022AD98: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8022AD9C: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
L_8022ADA0:
    // 0x8022ADA0: slti        $v0, $s1, 0x5
    ctx->r2 = SIGNED(ctx->r17) < 0X5 ? 1 : 0;
    // 0x8022ADA4: bne         $v0, $zero, L_8022AD40
    if (ctx->r2 != 0) {
        // 0x8022ADA8: nop
    
            goto L_8022AD40;
    }
    // 0x8022ADA8: nop

    // 0x8022ADAC: jal         0x8004F62C
    // 0x8022ADB0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_2;
    // 0x8022ADB0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x8022ADB4: j           L_8022ADD8
    // 0x8022ADB8: nop

        goto L_8022ADD8;
    // 0x8022ADB8: nop

L_8022ADBC:
    // 0x8022ADBC: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8022ADC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022ADC4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022ADC8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022ADCC: lw          $v0, -0x3754($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3754);
    // 0x8022ADD0: jalr        $v0
    // 0x8022ADD4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8022ADD4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
L_8022ADD8:
    // 0x8022ADD8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8022ADDC: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8022ADE0: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8022ADE4: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022ADE8: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022ADEC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022ADF0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022ADF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ADF8: jr          $ra
    // 0x8022ADFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022ADFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80226E14_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E14: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226E18: bne         $v0, $zero, L_80226E48
    if (ctx->r2 != 0) {
        // 0x80226E1C: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80226E48;
    }
    // 0x80226E1C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80226E20: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80226E24: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226E28: lui         $v0, 0xF6C0
    ctx->r2 = S32(0XF6C0 << 16);
    // 0x80226E2C: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80226E30: lui         $v0, 0xFF9F
    ctx->r2 = S32(0XFF9F << 16);
    // 0x80226E34: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80226E38: lui         $v0, 0xFE62
    ctx->r2 = S32(0XFE62 << 16);
    // 0x80226E3C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80226E40: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80226E44: sh          $zero, 0x56($v1)
    MEM_H(0X56, ctx->r3) = 0;
L_80226E48:
    // 0x80226E48: jr          $ra
    // 0x80226E4C: nop

    TRACE_RETURN()
    return;
    // 0x80226E4C: nop

;}
RECOMP_FUNC void func_8022A304_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A304: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022A308: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8022A30C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022A310: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022A314: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8022A318: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8022A31C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022A320: lhu         $v0, 0x1E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1E);
    // 0x8022A324: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A328: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
    // 0x8022A32C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A330: bgtz        $v0, L_8022A348
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022A334: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_8022A348;
    }
    // 0x8022A334: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8022A338: jal         0x8004F5C4
    // 0x8022A33C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8022A33C: nop

    after_0:
    // 0x8022A340: j           L_8022A3AC
    // 0x8022A344: nop

        goto L_8022A3AC;
    // 0x8022A344: nop

L_8022A348:
    // 0x8022A348: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x8022A34C: addiu       $s1, $s1, -0x3B00
    ctx->r17 = ADD32(ctx->r17, -0X3B00);
    // 0x8022A350: addiu       $s0, $s1, 0xA
    ctx->r16 = ADD32(ctx->r17, 0XA);
L_8022A354:
    // 0x8022A354: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022A358: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    // 0x8022A35C: lhu         $v0, 0x1C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1C);
    // 0x8022A360: lhu         $v1, -0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, -0X6);
    // 0x8022A364: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A368: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8022A36C: lhu         $v0, 0x1E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X1E);
    // 0x8022A370: lhu         $v1, -0x4($s0)
    ctx->r3 = MEM_HU(ctx->r16, -0X4);
    // 0x8022A374: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A378: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    // 0x8022A37C: lhu         $v0, -0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, -0X2);
    // 0x8022A380: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022A384: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x8022A388: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x8022A38C: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022A390: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8022A394: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x8022A398: jal         0x80229F18
    // 0x8022A39C: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    func_80229F18_ovl6(rdram, ctx);
        goto after_1;
    // 0x8022A39C: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022A3A0: slti        $v0, $s3, 0x4
    ctx->r2 = SIGNED(ctx->r19) < 0X4 ? 1 : 0;
    // 0x8022A3A4: bne         $v0, $zero, L_8022A354
    if (ctx->r2 != 0) {
        // 0x8022A3A8: nop
    
            goto L_8022A354;
    }
    // 0x8022A3A8: nop

L_8022A3AC:
    // 0x8022A3AC: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022A3B0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8022A3B4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8022A3B8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022A3BC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022A3C0: jr          $ra
    // 0x8022A3C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022A3C4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8022A3C8: nop

    // 0x8022A3CC: nop

;}
RECOMP_FUNC void func_80227CA0_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227CA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227CA4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227CA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227CAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227CB0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80227CB4: bne         $v0, $zero, L_80227D70
    if (ctx->r2 != 0) {
        // 0x80227CB8: nop
    
            goto L_80227D70;
    }
    // 0x80227CB8: nop

    // 0x80227CBC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80227CC0: bne         $v0, $zero, L_80227D30
    if (ctx->r2 != 0) {
        // 0x80227CC4: nop
    
            goto L_80227D30;
    }
    // 0x80227CC4: nop

    // 0x80227CC8: jal         0x8004D5D4
    // 0x80227CCC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227CCC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80227CD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227CD4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80227CD8: jal         0x80050294
    // 0x80227CDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80227CDC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80227CE0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227CE4: addiu       $v0, $v0, -0x3FE8
    ctx->r2 = ADD32(ctx->r2, -0X3FE8);
    // 0x80227CE8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227CEC: sw          $v0, -0x36A0($at)
    MEM_W(-0X36A0, ctx->r1) = ctx->r2;
    // 0x80227CF0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227CF4: addiu       $v0, $v0, -0x3FA4
    ctx->r2 = ADD32(ctx->r2, -0X3FA4);
    // 0x80227CF8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227CFC: sw          $v0, -0x369C($at)
    MEM_W(-0X369C, ctx->r1) = ctx->r2;
    // 0x80227D00: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80227D04: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80227D08: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80227D0C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80227D10: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227D14: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227D18: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80227D1C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80227D20: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227D24: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227D28: j           L_80227D68
    // 0x80227D2C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
        goto L_80227D68;
    // 0x80227D2C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_80227D30:
    // 0x80227D30: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227D34: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227D38: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227D3C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227D40: lw          $v0, -0x3F0C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3F0C);
    // 0x80227D44: jalr        $v0
    // 0x80227D48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80227D48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80227D4C: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80227D50: bne         $v0, $zero, L_80227D68
    if (ctx->r2 != 0) {
        // 0x80227D54: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_80227D68;
    }
    // 0x80227D54: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80227D58: jal         0x8004DD04
    // 0x80227D5C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_3;
    // 0x80227D5C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
    // 0x80227D60: jal         0x8005044C
    // 0x80227D64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x80227D64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80227D68:
    // 0x80227D68: jal         0x80227B38
    // 0x80227D6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227B38_ovl6(rdram, ctx);
        goto after_5;
    // 0x80227D6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
L_80227D70:
    // 0x80227D70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227D74: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227D78: jr          $ra
    // 0x80227D7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227D7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227530_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227530: jr          $ra
    // 0x80227534: nop

    TRACE_RETURN()
    return;
    // 0x80227534: nop

;}
RECOMP_FUNC void func_8022A5F0_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A5F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A5F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A5F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A5FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A600: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022A604: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A608: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A60C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A610: lw          $v0, -0x3908($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3908);
    // 0x8022A614: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022A618: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x8022A61C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022A620: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x8022A624: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8022A628: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022A62C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022A630: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022A634: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8022A638: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022A63C: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x8022A640: jal         0x8022AA94
    // 0x8022A644: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    func_8022AA94_ovl6(rdram, ctx);
        goto after_0;
    // 0x8022A644: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022A648: beq         $v0, $zero, L_8022A65C
    if (ctx->r2 == 0) {
        // 0x8022A64C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022A65C;
    }
    // 0x8022A64C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A650: jal         0x8004F62C
    // 0x8022A654: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x8022A654: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022A658: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022A65C:
    // 0x8022A65C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022A660: jal         0x8022A6DC
    // 0x8022A664: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A6DC_ovl6(rdram, ctx);
        goto after_2;
    // 0x8022A664: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022A668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A66C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A670: jr          $ra
    // 0x8022A674: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A674: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226B80_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226B84: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80226B88: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226B8C: bne         $v0, $zero, L_80226BD0
    if (ctx->r2 != 0) {
        // 0x80226B90: nop
    
            goto L_80226BD0;
    }
    // 0x80226B90: nop

    // 0x80226B94: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80226B98: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226B9C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80226BA0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226BA4: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226BA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226BAC: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226BB0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226BB4: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80226BB8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226BBC: sb          $zero, 0x44D8($at)
    MEM_B(0X44D8, ctx->r1) = 0;
    // 0x80226BC0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226BC4: sb          $v0, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = ctx->r2;
    // 0x80226BC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226BCC: sb          $v0, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = ctx->r2;
L_80226BD0:
    // 0x80226BD0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80226BD4: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80226BD8: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x80226BDC: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80226BE0: bne         $v0, $v1, L_80226C00
    if (ctx->r2 != ctx->r3) {
        // 0x80226BE4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226C00;
    }
    // 0x80226BE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226BE8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80226BEC: lw          $a0, 0x30($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X30);
    // 0x80226BF0: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x80226BF4: addiu       $a2, $zero, -0x64
    ctx->r6 = ADD32(0, -0X64);
    // 0x80226BF8: jal         0x80229D40
    // 0x80226BFC: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    func_80229D40_ovl6(rdram, ctx);
        goto after_0;
    // 0x80226BFC: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    after_0:
L_80226C00:
    // 0x80226C00: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80226C04: jr          $ra
    // 0x80226C08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226C08: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228B00_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228B00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228B04: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228B08: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228B0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228B10: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80228B14: bne         $v0, $zero, L_80228B74
    if (ctx->r2 != 0) {
        // 0x80228B18: nop
    
            goto L_80228B74;
    }
    // 0x80228B18: nop

    // 0x80228B1C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228B20: bne         $v0, $zero, L_80228B58
    if (ctx->r2 != 0) {
        // 0x80228B24: nop
    
            goto L_80228B58;
    }
    // 0x80228B24: nop

    // 0x80228B28: jal         0x8004D5D4
    // 0x80228B2C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80228B2C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80228B30: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228B34: addiu       $v1, $zero, 0x200
    ctx->r3 = ADD32(0, 0X200);
    // 0x80228B38: sh          $v1, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r3;
    // 0x80228B3C: sh          $v1, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r3;
    // 0x80228B40: sh          $v1, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r3;
    // 0x80228B44: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80228B48: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80228B4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228B50: j           L_80228B74
    // 0x80228B54: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80228B74;
    // 0x80228B54: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80228B58:
    // 0x80228B58: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80228B5C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228B60: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228B64: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228B68: lw          $v0, -0x3B70($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3B70);
    // 0x80228B6C: jalr        $v0
    // 0x80228B70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80228B70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80228B74:
    // 0x80228B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228B78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228B7C: jr          $ra
    // 0x80228B80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228B80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228F48_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228F48: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80228F4C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80228F50: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80228F54: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80228F58: lbu         $s4, 0x4F($sp)
    ctx->r20 = MEM_BU(ctx->r29, 0X4F);
    // 0x80228F5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80228F60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228F64: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80228F68: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x80228F6C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80228F70: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x80228F74: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80228F78: addu        $s5, $a3, $zero
    ctx->r21 = ADD32(ctx->r7, 0);
    // 0x80228F7C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80228F80: jal         0x8004F144
    // 0x80228F84: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80228F84: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x80228F88: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80228F8C: beq         $s1, $zero, L_80229014
    if (ctx->r17 == 0) {
        // 0x80228F90: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229014;
    }
    // 0x80228F90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228F94: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80228F98: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
    // 0x80228F9C: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    // 0x80228FA0: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x80228FA4: sb          $s2, 0xE($s1)
    MEM_B(0XE, ctx->r17) = ctx->r18;
    // 0x80228FA8: sb          $s3, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r19;
    // 0x80228FAC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80228FB0: sh          $v0, 0x1C($s1)
    MEM_H(0X1C, ctx->r17) = ctx->r2;
    // 0x80228FB4: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x80228FB8: sh          $v0, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r2;
    // 0x80228FBC: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80228FC0: sh          $s5, 0x26($s1)
    MEM_H(0X26, ctx->r17) = ctx->r21;
    // 0x80228FC4: beq         $s4, $zero, L_80228FD8
    if (ctx->r20 == 0) {
        // 0x80228FC8: sh          $v0, 0x20($s1)
        MEM_H(0X20, ctx->r17) = ctx->r2;
            goto L_80228FD8;
    }
    // 0x80228FC8: sh          $v0, 0x20($s1)
    MEM_H(0X20, ctx->r17) = ctx->r2;
    // 0x80228FCC: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80228FD0: j           L_80228FE0
    // 0x80228FD4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
        goto L_80228FE0;
    // 0x80228FD4: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
L_80228FD8:
    // 0x80228FD8: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80228FDC: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
L_80228FE0:
    // 0x80228FE0: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x80228FE4: sw          $s6, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r22;
    // 0x80228FE8: sll         $v0, $s5, 16
    ctx->r2 = S32(ctx->r21 << 16);
    // 0x80228FEC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228FF0: blez        $v0, L_80229014
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80228FF4: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_80229014;
    }
    // 0x80228FF4: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x80228FF8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
L_80228FFC:
    // 0x80228FFC: jal         0x80228DB8
    // 0x80229000: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80228DB8_ovl6(rdram, ctx);
        goto after_1;
    // 0x80229000: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x80229004: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80229008: slt         $v0, $s0, $s2
    ctx->r2 = SIGNED(ctx->r16) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x8022900C: bne         $v0, $zero, L_80228FFC
    if (ctx->r2 != 0) {
        // 0x80229010: nop
    
            goto L_80228FFC;
    }
    // 0x80229010: nop

L_80229014:
    // 0x80229014: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x80229018: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022901C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80229020: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80229024: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80229028: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022902C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80229030: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80229034: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80229038: jr          $ra
    // 0x8022903C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022903C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022886C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022886C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228870: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228874: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228878: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022887C: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x80228880: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80228884: bne         $v0, $zero, L_802288A0
    if (ctx->r2 != 0) {
        // 0x80228888: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_802288A0;
    }
    // 0x80228888: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022888C: jal         0x80050294
    // 0x80228890: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228890: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228894: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228898: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022889C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802288A0:
    // 0x802288A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802288A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802288A8: jr          $ra
    // 0x802288AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802288AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227F54_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227F54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227F58: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227F5C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227F60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227F64: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227F68: bne         $v0, $zero, L_80227F84
    if (ctx->r2 != 0) {
        // 0x80227F6C: addiu       $a1, $zero, 0x14
        ctx->r5 = ADD32(0, 0X14);
            goto L_80227F84;
    }
    // 0x80227F6C: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80227F70: jal         0x80050294
    // 0x80227F74: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227F74: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80227F78: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227F7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227F80: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227F84:
    // 0x80227F84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227F88: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227F8C: jr          $ra
    // 0x80227F90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227F90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022892C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022892C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228930: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228934: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022893C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228940: bne         $v0, $zero, L_8022895C
    if (ctx->r2 != 0) {
        // 0x80228944: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_8022895C;
    }
    // 0x80228944: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80228948: jal         0x80050294
    // 0x8022894C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022894C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228950: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228954: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228958: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022895C:
    // 0x8022895C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228960: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228964: jr          $ra
    // 0x80228968: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228968: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228A8C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228A8C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80228A90: lw          $v0, 0x24($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X24);
    // 0x80228A94: lw          $a0, 0x98($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X98);
    // 0x80228A98: lui         $v1, 0x2C
    ctx->r3 = S32(0X2C << 16);
    // 0x80228A9C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228AA0: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x80228AA4: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80228AA8: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x80228AAC: bne         $v1, $v0, L_80228AC0
    if (ctx->r3 != ctx->r2) {
        // 0x80228AB0: nop
    
            goto L_80228AC0;
    }
    // 0x80228AB0: nop

    // 0x80228AB4: lbu         $v0, 0xA($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XA);
    // 0x80228AB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228ABC: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
L_80228AC0:
    // 0x80228AC0: jr          $ra
    // 0x80228AC4: nop

    TRACE_RETURN()
    return;
    // 0x80228AC4: nop

;}
RECOMP_FUNC void func_8022883C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022883C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228840: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228844: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80228848: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022884C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228850: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228854: lw          $v0, -0x3C94($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3C94);
    // 0x80228858: jalr        $v0
    // 0x8022885C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022885C: nop

    after_0:
    // 0x80228860: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228864: jr          $ra
    // 0x80228868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228868: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AF84_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AF84: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022AF88: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022AF8C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022AF90: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022AF94: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x8022AF98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AF9C: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022AFA0: lw          $a1, 0x1C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1C);
    // 0x8022AFA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AFA8: jal         0x8003BA58
    // 0x8022AFAC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003BA58_16E58(rdram, ctx);
        goto after_0;
    // 0x8022AFAC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x8022AFB0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022AFB4: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8022AFB8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AFBC: jal         0x8003BB80
    // 0x8022AFC0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003BB80_16F80(rdram, ctx);
        goto after_1;
    // 0x8022AFC0: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022AFC4: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x8022AFC8: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    // 0x8022AFCC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AFD0: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x8022AFD4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022AFD8: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x8022AFDC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022AFE0: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022AFE4: lbu         $v1, -0x378B($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X378B);
    // 0x8022AFE8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022AFEC: bne         $v0, $v1, L_8022B00C
    if (ctx->r2 != ctx->r3) {
        // 0x8022AFF0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022B00C;
    }
    // 0x8022AFF0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022AFF4: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x8022AFF8: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x8022AFFC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B000: bne         $v1, $v0, L_8022B00C
    if (ctx->r3 != ctx->r2) {
        // 0x8022B004: sb          $zero, 0xC($s1)
        MEM_B(0XC, ctx->r17) = 0;
            goto L_8022B00C;
    }
    // 0x8022B004: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x8022B008: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_8022B00C:
    // 0x8022B00C: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8022B010: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8022B014: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B018: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022B01C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022B020: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B024: lbu         $v1, -0x37A8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X37A8);
    // 0x8022B028: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x8022B02C: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x8022B030: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022B034: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B038: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022B03C: addiu       $v1, $v0, 0x2E
    ctx->r3 = ADD32(ctx->r2, 0X2E);
    // 0x8022B040: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B044: sb          $v1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r3;
    // 0x8022B048: sb          $v1, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r3;
    // 0x8022B04C: sb          $v0, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r2;
    // 0x8022B050: jal         0x8003BC68
    // 0x8022B054: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x8022B054: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022B058: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022B05C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022B060: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022B064: jr          $ra
    // 0x8022B068: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022B068: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80228C08_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228C0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228C10: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228C18: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228C1C: bne         $v0, $zero, L_80228C3C
    if (ctx->r2 != 0) {
        // 0x80228C20: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80228C3C;
    }
    // 0x80228C20: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80228C24: jal         0x80050294
    // 0x80228C28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228C28: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228C2C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228C30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228C34: j           L_80228C60
    // 0x80228C38: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80228C60;
    // 0x80228C38: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228C3C:
    // 0x80228C3C: jal         0x8005044C
    // 0x80228C40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80228C40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80228C44: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x80228C48: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80228C4C: addiu       $v0, $zero, 0x47
    ctx->r2 = ADD32(0, 0X47);
    // 0x80228C50: bne         $v1, $v0, L_80228C64
    if (ctx->r3 != ctx->r2) {
        // 0x80228C54: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_80228C64;
    }
    // 0x80228C54: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80228C58: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80228C5C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80228C60:
    // 0x80228C60: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
L_80228C64:
    // 0x80228C64: jal         0x8004DD04
    // 0x80228C68: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x80228C68: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x80228C6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228C70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228C74: jr          $ra
    // 0x80228C78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228C78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A678_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A67C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A680: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A684: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A688: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022A68C: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8022A690: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A694: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022A698: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022A69C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022A6A0: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022A6A4: beq         $v1, $zero, L_8022A6C4
    if (ctx->r3 == 0) {
        // 0x8022A6A8: nop
    
            goto L_8022A6C4;
    }
    // 0x8022A6A8: nop

    // 0x8022A6AC: jal         0x8022AA94
    // 0x8022A6B0: nop

    func_8022AA94_ovl6(rdram, ctx);
        goto after_0;
    // 0x8022A6B0: nop

    after_0:
    // 0x8022A6B4: beq         $v0, $zero, L_8022A6C4
    if (ctx->r2 == 0) {
        // 0x8022A6B8: nop
    
            goto L_8022A6C4;
    }
    // 0x8022A6B8: nop

    // 0x8022A6BC: jal         0x8004F62C
    // 0x8022A6C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x8022A6C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022A6C4:
    // 0x8022A6C4: jal         0x8022A6DC
    // 0x8022A6C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022A6DC_ovl6(rdram, ctx);
        goto after_2;
    // 0x8022A6C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022A6CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A6D0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A6D4: jr          $ra
    // 0x8022A6D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A6D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226E50_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E50: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80226E54: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80226E58: bne         $v0, $zero, L_80226EB4
    if (ctx->r2 != 0) {
        // 0x80226E5C: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_80226EB4;
    }
    // 0x80226E5C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80226E60: lui         $v1, 0xAE
    ctx->r3 = S32(0XAE << 16);
    // 0x80226E64: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80226E68: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226E6C: sh          $v0, 0x4612($at)
    MEM_H(0X4612, ctx->r1) = ctx->r2;
    // 0x80226E70: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80226E74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226E78: sb          $zero, 0x4580($at)
    MEM_B(0X4580, ctx->r1) = 0;
    // 0x80226E7C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226E80: sb          $a0, 0x45F0($at)
    MEM_B(0X45F0, ctx->r1) = ctx->r4;
    // 0x80226E84: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226E88: sw          $zero, 0x45F4($at)
    MEM_W(0X45F4, ctx->r1) = 0;
    // 0x80226E8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226E90: sw          $v1, 0x45F8($at)
    MEM_W(0X45F8, ctx->r1) = ctx->r3;
    // 0x80226E94: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226E98: sb          $a0, 0x4628($at)
    MEM_B(0X4628, ctx->r1) = ctx->r4;
    // 0x80226E9C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226EA0: sw          $zero, 0x462C($at)
    MEM_W(0X462C, ctx->r1) = 0;
    // 0x80226EA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226EA8: sw          $v1, 0x4630($at)
    MEM_W(0X4630, ctx->r1) = ctx->r3;
    // 0x80226EAC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226EB0: sh          $v0, 0x464A($at)
    MEM_H(0X464A, ctx->r1) = ctx->r2;
L_80226EB4:
    // 0x80226EB4: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80226EB8: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x80226EBC: bne         $v1, $v0, L_80226ECC
    if (ctx->r3 != ctx->r2) {
        // 0x80226EC0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226ECC;
    }
    // 0x80226EC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226EC4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226EC8: sb          $v0, -0x36C4($at)
    MEM_B(-0X36C4, ctx->r1) = ctx->r2;
L_80226ECC:
    // 0x80226ECC: jr          $ra
    // 0x80226ED0: nop

    TRACE_RETURN()
    return;
    // 0x80226ED0: nop

;}
RECOMP_FUNC void func_80228A2C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228A2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228A30: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228A34: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228A38: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80228A3C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228A40: jal         0x80050294
    // 0x80228A44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228A44: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228A48: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228A4C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228A50: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228A54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228A58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228A5C: jr          $ra
    // 0x80228A60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228A60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227DBC_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227DBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227DC0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227DC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227DC8: lui         $v1, 0x2
    ctx->r3 = S32(0X2 << 16);
    // 0x80227DCC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227DD0: lw          $v0, 0x20($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X20);
    // 0x80227DD4: lw          $a0, 0x98($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X98);
    // 0x80227DD8: ori         $v1, $v1, 0x3333
    ctx->r3 = ctx->r3 | 0X3333;
    // 0x80227DDC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227DE0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80227DE4: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80227DE8: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x80227DEC: bne         $v1, $v0, L_80227E00
    if (ctx->r3 != ctx->r2) {
        // 0x80227DF0: nop
    
            goto L_80227E00;
    }
    // 0x80227DF0: nop

    // 0x80227DF4: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80227DF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227DFC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80227E00:
    // 0x80227E00: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80227E04: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227E08: bne         $v1, $v0, L_80227E28
    if (ctx->r3 != ctx->r2) {
        // 0x80227E0C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227E28;
    }
    // 0x80227E0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227E10: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x80227E14: jal         0x80050294
    // 0x80227E18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227E18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80227E1C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227E20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227E24: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227E28:
    // 0x80227E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227E2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227E30: jr          $ra
    // 0x80227E34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227E34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AE9C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AE9C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022AEA0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022AEA4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022AEA8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022AEAC: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x8022AEB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AEB4: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022AEB8: lw          $a1, 0x1C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X1C);
    // 0x8022AEBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AEC0: jal         0x8003BA58
    // 0x8022AEC4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    func_8003BA58_16E58(rdram, ctx);
        goto after_0;
    // 0x8022AEC4: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_0:
    // 0x8022AEC8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022AECC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8022AED0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AED4: jal         0x8003BB80
    // 0x8022AED8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003BB80_16F80(rdram, ctx);
        goto after_1;
    // 0x8022AED8: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022AEDC: lbu         $v0, 0xC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XC);
    // 0x8022AEE0: lb          $a0, 0xD($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XD);
    // 0x8022AEE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AEE8: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x8022AEEC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022AEF0: sll         $v1, $a0, 1
    ctx->r3 = S32(ctx->r4 << 1);
    // 0x8022AEF4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022AEF8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022AEFC: lbu         $v1, -0x37A7($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X37A7);
    // 0x8022AF00: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022AF04: bne         $v0, $v1, L_8022AF24
    if (ctx->r2 != ctx->r3) {
        // 0x8022AF08: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8022AF24;
    }
    // 0x8022AF08: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022AF0C: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x8022AF10: lb          $v1, 0xD($s1)
    ctx->r3 = MEM_B(ctx->r17, 0XD);
    // 0x8022AF14: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022AF18: bne         $v1, $v0, L_8022AF24
    if (ctx->r3 != ctx->r2) {
        // 0x8022AF1C: sb          $zero, 0xC($s1)
        MEM_B(0XC, ctx->r17) = 0;
            goto L_8022AF24;
    }
    // 0x8022AF1C: sb          $zero, 0xC($s1)
    MEM_B(0XC, ctx->r17) = 0;
    // 0x8022AF20: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_8022AF24:
    // 0x8022AF24: lb          $v0, 0xD($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XD);
    // 0x8022AF28: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8022AF2C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022AF30: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022AF34: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022AF38: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022AF3C: lbu         $v1, -0x37A8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X37A8);
    // 0x8022AF40: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x8022AF44: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x8022AF48: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022AF4C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022AF50: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022AF54: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x8022AF58: addiu       $v0, $v0, 0x2E
    ctx->r2 = ADD32(ctx->r2, 0X2E);
    // 0x8022AF5C: sb          $v1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r3;
    // 0x8022AF60: sb          $v0, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r2;
    // 0x8022AF64: sb          $v1, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r3;
    // 0x8022AF68: jal         0x8003BC68
    // 0x8022AF6C: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x8022AF6C: sb          $v0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022AF70: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022AF74: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022AF78: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022AF7C: jr          $ra
    // 0x8022AF80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022AF80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022AA94_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AA94: lhu         $v0, 0x18($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X18);
    // 0x8022AA98: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x8022AA9C: lhu         $v1, 0x1A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X1A);
    // 0x8022AAA0: sh          $v0, 0x14($a0)
    MEM_H(0X14, ctx->r4) = ctx->r2;
    // 0x8022AAA4: sh          $v1, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r3;
    // 0x8022AAA8: lb          $v1, 0x3($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X3);
    // 0x8022AAAC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8022AAB0: bgez        $v1, L_8022AAF0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8022AAB4: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8022AAF0;
    }
    // 0x8022AAB4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8022AAB8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022AABC: bne         $v1, $v0, L_8022AADC
    if (ctx->r3 != ctx->r2) {
        // 0x8022AAC0: andi        $v0, $a1, 0x7F
        ctx->r2 = ctx->r5 & 0X7F;
            goto L_8022AADC;
    }
    // 0x8022AAC0: andi        $v0, $a1, 0x7F
    ctx->r2 = ctx->r5 & 0X7F;
    // 0x8022AAC4: lb          $v1, 0xC($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XC);
    // 0x8022AAC8: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8022AACC: bne         $v1, $v0, L_8022AAFC
    if (ctx->r3 != ctx->r2) {
        // 0x8022AAD0: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8022AAFC;
    }
    // 0x8022AAD0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022AAD4: j           L_8022AB20
    // 0x8022AAD8: nop

        goto L_8022AB20;
    // 0x8022AAD8: nop

L_8022AADC:
    // 0x8022AADC: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x8022AAE0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AAE4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022AAE8: j           L_8022AAFC
    // 0x8022AAEC: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
        goto L_8022AAFC;
    // 0x8022AAEC: sw          $v1, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r3;
L_8022AAF0:
    // 0x8022AAF0: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x8022AAF4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022AAF8: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_8022AAFC:
    // 0x8022AAFC: lw          $a1, 0x20($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X20);
    // 0x8022AB00: lbu         $v0, 0x2($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X2);
    // 0x8022AB04: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x8022AB08: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8022AB0C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8022AB10: sh          $v0, 0x18($a0)
    MEM_H(0X18, ctx->r4) = ctx->r2;
    // 0x8022AB14: lbu         $v1, 0x1($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X1);
    // 0x8022AB18: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022AB1C: sh          $v1, 0x1A($a0)
    MEM_H(0X1A, ctx->r4) = ctx->r3;
L_8022AB20:
    // 0x8022AB20: jr          $ra
    // 0x8022AB24: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8022AB24: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    // 0x8022AB28: nop

    // 0x8022AB2C: nop

;}
RECOMP_FUNC void func_8022979C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022979C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x802297A0: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x802297A4: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x802297A8: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x802297AC: lw          $s1, 0x28($a0)
    ctx->r17 = MEM_W(ctx->r4, 0X28);
    // 0x802297B0: lhu         $v0, 0x2C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2C);
    // 0x802297B4: lhu         $s0, 0x56($s1)
    ctx->r16 = MEM_HU(ctx->r17, 0X56);
    // 0x802297B8: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x802297BC: lhu         $v0, 0x2E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X2E);
    // 0x802297C0: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x802297C4: lhu         $v0, 0x30($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X30);
    // 0x802297C8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802297CC: jal         0x8002C654
    // 0x802297D0: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x802297D0: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    after_0:
    // 0x802297D4: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x802297D8: sra         $a0, $s0, 16
    ctx->r4 = S32(SIGNED(ctx->r16) >> 16);
    // 0x802297DC: jal         0x800319B4
    // 0x802297E0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x802297E0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x802297E4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802297E8: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x802297EC: jal         0x80031270
    // 0x802297F0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_80031270_C670(rdram, ctx);
        goto after_2;
    // 0x802297F0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_2:
    // 0x802297F4: jal         0x8004F144
    // 0x802297F8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x802297F8: nop

    after_3:
    // 0x802297FC: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x80229800: beq         $a1, $zero, L_802298A8
    if (ctx->r5 == 0) {
        // 0x80229804: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_802298A8;
    }
    // 0x80229804: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80229808: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022980C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229810: sb          $a0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r4;
    // 0x80229814: sb          $v1, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r3;
    // 0x80229818: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x8022981C: sb          $v1, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r3;
    // 0x80229820: sb          $a0, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r4;
    // 0x80229824: sb          $zero, 0xE($a1)
    MEM_B(0XE, ctx->r5) = 0;
    // 0x80229828: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x8022982C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80229830: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x80229834: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x80229838: bnel        $v1, $v0, L_8022984C
    if (ctx->r3 != ctx->r2) {
        // 0x8022983C: lui         $v0, 0x3C88
        ctx->r2 = S32(0X3C88 << 16);
            goto L_8022984C;
    }
    goto skip_0;
    // 0x8022983C: lui         $v0, 0x3C88
    ctx->r2 = S32(0X3C88 << 16);
    skip_0:
    // 0x80229840: lui         $v0, 0x3CC8
    ctx->r2 = S32(0X3CC8 << 16);
    // 0x80229844: j           L_80229850
    // 0x80229848: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
        goto L_80229850;
    // 0x80229848: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
L_8022984C:
    // 0x8022984C: ori         $v0, $v0, 0x26
    ctx->r2 = ctx->r2 | 0X26;
L_80229850:
    // 0x80229850: sw          $v0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r2;
    // 0x80229854: addiu       $v0, $zero, 0x90
    ctx->r2 = ADD32(0, 0X90);
    // 0x80229858: sh          $v0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r2;
    // 0x8022985C: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80229860: sb          $v0, 0x22($a1)
    MEM_B(0X22, ctx->r5) = ctx->r2;
    // 0x80229864: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80229868: sb          $v0, 0x23($a1)
    MEM_B(0X23, ctx->r5) = ctx->r2;
    // 0x8022986C: lh          $v1, 0x1C($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X1C);
    // 0x80229870: lhu         $v0, 0x38($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X38);
    // 0x80229874: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229878: sh          $v0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r2;
    // 0x8022987C: lh          $v1, 0x20($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X20);
    // 0x80229880: lhu         $v0, 0x3A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3A);
    // 0x80229884: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229888: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x8022988C: lh          $a0, 0x24($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X24);
    // 0x80229890: lhu         $v0, 0x3C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3C);
    // 0x80229894: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x80229898: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022989C: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x802298A0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802298A4: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
L_802298A8:
    // 0x802298A8: jal         0x8004F144
    // 0x802298AC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_4;
    // 0x802298AC: nop

    after_4:
    // 0x802298B0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802298B4: beq         $a1, $zero, L_8022995C
    if (ctx->r5 == 0) {
        // 0x802298B8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022995C;
    }
    // 0x802298B8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x802298BC: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    // 0x802298C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802298C4: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x802298C8: sb          $a0, 0x2($a1)
    MEM_B(0X2, ctx->r5) = ctx->r4;
    // 0x802298CC: sb          $v0, 0x3($a1)
    MEM_B(0X3, ctx->r5) = ctx->r2;
    // 0x802298D0: sb          $a0, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r4;
    // 0x802298D4: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
    // 0x802298D8: sb          $v1, 0xE($a1)
    MEM_B(0XE, ctx->r5) = ctx->r3;
    // 0x802298DC: sb          $zero, 0xF($a1)
    MEM_B(0XF, ctx->r5) = 0;
    // 0x802298E0: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802298E4: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x802298E8: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x802298EC: bnel        $v1, $v0, L_80229900
    if (ctx->r3 != ctx->r2) {
        // 0x802298F0: lui         $v0, 0x3C88
        ctx->r2 = S32(0X3C88 << 16);
            goto L_80229900;
    }
    goto skip_1;
    // 0x802298F0: lui         $v0, 0x3C88
    ctx->r2 = S32(0X3C88 << 16);
    skip_1:
    // 0x802298F4: lui         $v0, 0x3CC8
    ctx->r2 = S32(0X3CC8 << 16);
    // 0x802298F8: j           L_80229904
    // 0x802298FC: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
        goto L_80229904;
    // 0x802298FC: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
L_80229900:
    // 0x80229900: ori         $v0, $v0, 0x26
    ctx->r2 = ctx->r2 | 0X26;
L_80229904:
    // 0x80229904: sw          $v0, 0x14($a1)
    MEM_W(0X14, ctx->r5) = ctx->r2;
    // 0x80229908: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
    // 0x8022990C: sh          $v0, 0x24($a1)
    MEM_H(0X24, ctx->r5) = ctx->r2;
    // 0x80229910: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80229914: sb          $v0, 0x22($a1)
    MEM_B(0X22, ctx->r5) = ctx->r2;
    // 0x80229918: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022991C: sb          $v0, 0x23($a1)
    MEM_B(0X23, ctx->r5) = ctx->r2;
    // 0x80229920: lh          $v1, 0x1C($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X1C);
    // 0x80229924: lhu         $v0, 0x38($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X38);
    // 0x80229928: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022992C: sh          $v0, 0x1C($a1)
    MEM_H(0X1C, ctx->r5) = ctx->r2;
    // 0x80229930: lh          $v1, 0x20($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X20);
    // 0x80229934: lhu         $v0, 0x3A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3A);
    // 0x80229938: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022993C: sh          $v0, 0x1E($a1)
    MEM_H(0X1E, ctx->r5) = ctx->r2;
    // 0x80229940: lh          $a0, 0x24($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X24);
    // 0x80229944: lhu         $v0, 0x3C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3C);
    // 0x80229948: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x8022994C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x80229950: sw          $v1, 0x18($a1)
    MEM_W(0X18, ctx->r5) = ctx->r3;
    // 0x80229954: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80229958: sh          $v0, 0x20($a1)
    MEM_H(0X20, ctx->r5) = ctx->r2;
L_8022995C:
    // 0x8022995C: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x80229960: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80229964: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80229968: jr          $ra
    // 0x8022996C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8022996C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_802279F0_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802279F0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802279F4: lw          $v0, -0x36B0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X36B0);
    // 0x802279F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802279FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227A00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227A04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227A08: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    // 0x80227A0C: bgtz        $a0, L_80227A30
    if (SIGNED(ctx->r4) > 0) {
        // 0x80227A10: sll         $a0, $a0, 2
        ctx->r4 = S32(ctx->r4 << 2);
            goto L_80227A30;
    }
    // 0x80227A10: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80227A14: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227A18: addiu       $v0, $v0, -0x36B0
    ctx->r2 = ADD32(ctx->r2, -0X36B0);
    // 0x80227A1C: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80227A20: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227A24: sh          $zero, -0x36AC($at)
    MEM_H(-0X36AC, ctx->r1) = 0;
    // 0x80227A28: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80227A2C: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_80227A30:
    // 0x80227A30: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80227A34: addiu       $a1, $a1, -0x36AC
    ctx->r5 = ADD32(ctx->r5, -0X36AC);
    // 0x80227A38: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80227A3C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80227A40: lw          $a0, -0x36B0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X36B0);
    // 0x80227A44: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227A48: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x80227A4C: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x80227A50: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227A54: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227A58: bne         $v0, $v1, L_80227A94
    if (ctx->r2 != ctx->r3) {
        // 0x80227A5C: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_80227A94;
    }
    // 0x80227A5C: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
    // 0x80227A60: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227A64: sw          $v0, -0x36B0($at)
    MEM_W(-0X36B0, ctx->r1) = ctx->r2;
    // 0x80227A68: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x80227A6C: lbu         $a0, 0x4($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4);
    // 0x80227A70: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80227A74: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80227A78: jal         0x8003B85C
    // 0x80227A7C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80227A7C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x80227A80: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80227A84: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80227A88: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x80227A8C: jal         0x8003B840
    // 0x80227A90: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80227A90: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80227A94:
    // 0x80227A94: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227A98: lw          $v0, -0x36A8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X36A8);
    // 0x80227A9C: lh          $a0, 0x2($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X2);
    // 0x80227AA0: bgtz        $a0, L_80227AC4
    if (SIGNED(ctx->r4) > 0) {
        // 0x80227AA4: sll         $a0, $a0, 2
        ctx->r4 = S32(ctx->r4 << 2);
            goto L_80227AC4;
    }
    // 0x80227AA4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80227AA8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227AAC: addiu       $v0, $v0, -0x36A8
    ctx->r2 = ADD32(ctx->r2, -0X36A8);
    // 0x80227AB0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80227AB4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227AB8: sh          $zero, -0x36A4($at)
    MEM_H(-0X36A4, ctx->r1) = 0;
    // 0x80227ABC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80227AC0: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
L_80227AC4:
    // 0x80227AC4: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x80227AC8: addiu       $a1, $a1, -0x36A4
    ctx->r5 = ADD32(ctx->r5, -0X36A4);
    // 0x80227ACC: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80227AD0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80227AD4: lw          $a0, -0x36A8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X36A8);
    // 0x80227AD8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227ADC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
    // 0x80227AE0: lh          $v1, 0x2($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X2);
    // 0x80227AE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227AE8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227AEC: bne         $v0, $v1, L_80227B28
    if (ctx->r2 != ctx->r3) {
        // 0x80227AF0: addiu       $v0, $a0, 0x4
        ctx->r2 = ADD32(ctx->r4, 0X4);
            goto L_80227B28;
    }
    // 0x80227AF0: addiu       $v0, $a0, 0x4
    ctx->r2 = ADD32(ctx->r4, 0X4);
    // 0x80227AF4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227AF8: sw          $v0, -0x36A8($at)
    MEM_W(-0X36A8, ctx->r1) = ctx->r2;
    // 0x80227AFC: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x80227B00: lbu         $a0, 0x4($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X4);
    // 0x80227B04: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80227B08: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80227B0C: jal         0x8003B85C
    // 0x80227B10: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80227B10: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x80227B14: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80227B18: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x80227B1C: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80227B20: jal         0x8003B840
    // 0x80227B24: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80227B24: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_80227B28:
    // 0x80227B28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227B2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227B30: jr          $ra
    // 0x80227B34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227B34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229E74_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229E74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80229E78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229E7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229E80: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229E84: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80229E88: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80229E8C: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x80229E90: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80229E94: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80229E98: jal         0x8004F144
    // 0x80229E9C: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80229E9C: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    after_0:
    // 0x80229EA0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80229EA4: beq         $a0, $zero, L_80229EF8
    if (ctx->r4 == 0) {
        // 0x80229EA8: addiu       $v1, $zero, 0x7
        ctx->r3 = ADD32(0, 0X7);
            goto L_80229EF8;
    }
    // 0x80229EA8: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x80229EAC: sb          $v1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r3;
    // 0x80229EB0: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x80229EB4: lbu         $v1, 0x6($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X6);
    // 0x80229EB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229EBC: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80229EC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229EC4: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x80229EC8: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80229ECC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229ED0: sw          $v0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r2;
    // 0x80229ED4: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80229ED8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229EDC: sw          $v0, 0x30($a0)
    MEM_W(0X30, ctx->r4) = ctx->r2;
    // 0x80229EE0: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x80229EE4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229EE8: sw          $s0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r16;
    // 0x80229EEC: sw          $v0, 0x34($a0)
    MEM_W(0X34, ctx->r4) = ctx->r2;
    // 0x80229EF0: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x80229EF4: sb          $v1, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r3;
L_80229EF8:
    // 0x80229EF8: addu        $v0, $a0, $zero
    ctx->r2 = ADD32(ctx->r4, 0);
    // 0x80229EFC: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80229F00: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80229F04: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229F08: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229F0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229F10: jr          $ra
    // 0x80229F14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229F14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802271E4_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802271E4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802271E8: ldc1        $f2, -0x3720($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X3720);
    // 0x802271EC: lwc1        $f0, 0x1C($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X1C);
    // 0x802271F0: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x802271F4: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x802271F8: lhu         $v0, 0x46($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X46);
    // 0x802271FC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80227200: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x80227204: swc1        $f2, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = ctx->f2.u32l;
    // 0x80227208: sh          $v0, 0x0($sp)
    MEM_H(0X0, ctx->r29) = ctx->r2;
    // 0x8022720C: lhu         $v0, 0x44($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X44);
    // 0x80227210: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227214: ldc1        $f2, -0x3718($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X3718);
    // 0x80227218: sh          $v0, 0x2($sp)
    MEM_H(0X2, ctx->r29) = ctx->r2;
    // 0x8022721C: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80227220: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x80227224: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x80227228: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x8022722C: swc1        $f2, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f2.u32l;
    // 0x80227230: lhu         $v0, 0x2($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2);
    // 0x80227234: lhu         $v1, 0x4A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X4A);
    // 0x80227238: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022723C: ldc1        $f2, -0x3710($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X3710);
    // 0x80227240: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
    // 0x80227244: lhu         $v0, 0x0($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X0);
    // 0x80227248: sh          $v0, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r2;
    // 0x8022724C: sh          $v1, 0x0($sp)
    MEM_H(0X0, ctx->r29) = ctx->r3;
    // 0x80227250: lhu         $v0, 0x48($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X48);
    // 0x80227254: sh          $v0, 0x2($sp)
    MEM_H(0X2, ctx->r29) = ctx->r2;
    // 0x80227258: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8022725C: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x80227260: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x80227264: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x80227268: swc1        $f2, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f2.u32l;
    // 0x8022726C: lhu         $v0, 0x2($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2);
    // 0x80227270: lhu         $v1, 0x4E($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X4E);
    // 0x80227274: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227278: ldc1        $f2, -0x3708($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X3708);
    // 0x8022727C: sh          $v0, 0x48($a0)
    MEM_H(0X48, ctx->r4) = ctx->r2;
    // 0x80227280: lhu         $v0, 0x0($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X0);
    // 0x80227284: sh          $v0, 0x4A($a0)
    MEM_H(0X4A, ctx->r4) = ctx->r2;
    // 0x80227288: sh          $v1, 0x0($sp)
    MEM_H(0X0, ctx->r29) = ctx->r3;
    // 0x8022728C: lhu         $v0, 0x4C($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4C);
    // 0x80227290: sh          $v0, 0x2($sp)
    MEM_H(0X2, ctx->r29) = ctx->r2;
    // 0x80227294: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80227298: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x8022729C: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x802272A0: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x802272A4: swc1        $f2, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f2.u32l;
    // 0x802272A8: lhu         $v0, 0x2($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2);
    // 0x802272AC: sh          $v0, 0x4C($a0)
    MEM_H(0X4C, ctx->r4) = ctx->r2;
    // 0x802272B0: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x802272B4: lhu         $v1, 0x0($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X0);
    // 0x802272B8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802272BC: sh          $v1, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = ctx->r3;
    // 0x802272C0: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x802272C4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802272C8: bne         $v0, $zero, L_802272DC
    if (ctx->r2 != 0) {
        // 0x802272CC: nop
    
            goto L_802272DC;
    }
    // 0x802272CC: nop

    // 0x802272D0: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802272D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802272D8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_802272DC:
    // 0x802272DC: jr          $ra
    // 0x802272E0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x802272E0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80227538_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227538: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022753C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80227540: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227544: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80227548: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022754C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80227550: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227554: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227558: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022755C: lw          $v0, -0x414C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X414C);
    // 0x80227560: jalr        $v0
    // 0x80227564: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80227564: nop

    after_0:
    // 0x80227568: lhu         $v0, 0x46($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X46);
    // 0x8022756C: lhu         $v1, 0x4A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4A);
    // 0x80227570: lhu         $a2, 0x4E($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X4E);
    // 0x80227574: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80227578: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022757C: sh          $v0, 0x54($s1)
    MEM_H(0X54, ctx->r17) = ctx->r2;
    // 0x80227580: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x80227584: jal         0x8004DD04
    // 0x80227588: sh          $a2, 0x58($s1)
    MEM_H(0X58, ctx->r17) = ctx->r6;
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80227588: sh          $a2, 0x58($s1)
    MEM_H(0X58, ctx->r17) = ctx->r6;
    after_1:
    // 0x8022758C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80227590: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x80227594: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80227598: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022759C: bne         $v0, $v1, L_802275D4
    if (ctx->r2 != ctx->r3) {
        // 0x802275A0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_802275D4;
    }
    // 0x802275A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802275A4: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x802275A8: addiu       $a2, $zero, -0x64
    ctx->r6 = ADD32(0, -0X64);
    // 0x802275AC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802275B0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x802275B4: jal         0x80229D40
    // 0x802275B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80229D40_ovl6(rdram, ctx);
        goto after_2;
    // 0x802275B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_2:
    // 0x802275BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802275C0: addiu       $a1, $zero, -0x190
    ctx->r5 = ADD32(0, -0X190);
    // 0x802275C4: addiu       $a2, $zero, -0x64
    ctx->r6 = ADD32(0, -0X64);
    // 0x802275C8: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    // 0x802275CC: jal         0x80229D40
    // 0x802275D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_80229D40_ovl6(rdram, ctx);
        goto after_3;
    // 0x802275D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_3:
L_802275D4:
    // 0x802275D4: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802275D8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802275DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802275E0: jr          $ra
    // 0x802275E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802275E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225150_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225150: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225154: addiu       $v0, $v0, -0x4E3C
    ctx->r2 = ADD32(ctx->r2, -0X4E3C);
    // 0x80225158: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022515C: sw          $v0, 0x4020($at)
    MEM_W(0X4020, ctx->r1) = ctx->r2;
    // 0x80225160: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225164: addiu       $v0, $v0, -0x4D9C
    ctx->r2 = ADD32(ctx->r2, -0X4D9C);
    // 0x80225168: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022516C: sw          $v0, -0x22A0($at)
    MEM_W(-0X22A0, ctx->r1) = ctx->r2;
    // 0x80225170: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225174: addiu       $v0, $v0, -0x4D7C
    ctx->r2 = ADD32(ctx->r2, -0X4D7C);
    // 0x80225178: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022517C: sw          $v0, -0x26A8($at)
    MEM_W(-0X26A8, ctx->r1) = ctx->r2;
    // 0x80225180: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225184: addiu       $v0, $v0, -0x4D78
    ctx->r2 = ADD32(ctx->r2, -0X4D78);
    // 0x80225188: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022518C: sw          $v0, -0xBD8($at)
    MEM_W(-0XBD8, ctx->r1) = ctx->r2;
    // 0x80225190: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225194: addiu       $v0, $v0, -0x4D54
    ctx->r2 = ADD32(ctx->r2, -0X4D54);
    // 0x80225198: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022519C: sw          $v0, 0xC68($at)
    MEM_W(0XC68, ctx->r1) = ctx->r2;
    // 0x802251A0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802251A4: addiu       $v0, $v0, -0x4D38
    ctx->r2 = ADD32(ctx->r2, -0X4D38);
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
RECOMP_FUNC void func_80228308_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228308: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022830C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228310: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228314: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80228318: lw          $a0, -0x3680($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3680);
    // 0x8022831C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228320: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228324: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80228328: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8022832C: addiu       $s1, $s1, -0x3A50
    ctx->r17 = ADD32(ctx->r17, -0X3A50);
    // 0x80228330: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80228334: beq         $v1, $v0, L_802283C0
    if (ctx->r3 == ctx->r2) {
        // 0x80228338: nop
    
            goto L_802283C0;
    }
    // 0x80228338: nop

    // 0x8022833C: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80228340: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80228344: lhu         $v0, -0x3A48($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3A48);
    // 0x80228348: bne         $v1, $v0, L_802283C0
    if (ctx->r3 != ctx->r2) {
        // 0x8022834C: nop
    
            goto L_802283C0;
    }
    // 0x8022834C: nop

    // 0x80228350: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80228354: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80228358: lw          $v0, -0x3A34($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A34);
    // 0x8022835C: bne         $v1, $v0, L_802283C0
    if (ctx->r3 != ctx->r2) {
        // 0x80228360: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_802283C0;
    }
    // 0x80228360: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80228364: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80228368: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022836C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228370: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228374: lw          $v0, -0x3E0C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3E0C);
    // 0x80228378: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022837C: sh          $zero, -0x368C($at)
    MEM_H(-0X368C, ctx->r1) = 0;
    // 0x80228380: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228384: sw          $v0, -0x3690($at)
    MEM_W(-0X3690, ctx->r1) = ctx->r2;
    // 0x80228388: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8022838C: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80228390: jal         0x8003B85C
    // 0x80228394: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80228394: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80228398: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x8022839C: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x802283A0: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x802283A4: jal         0x8003B840
    // 0x802283A8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x802283A8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x802283AC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802283B0: lw          $v0, -0x3680($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3680);
    // 0x802283B4: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x802283B8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802283BC: sw          $v0, -0x3680($at)
    MEM_W(-0X3680, ctx->r1) = ctx->r2;
L_802283C0:
    // 0x802283C0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802283C4: lw          $a0, -0x367C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X367C);
    // 0x802283C8: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x802283CC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802283D0: beq         $v1, $v0, L_80228454
    if (ctx->r3 == ctx->r2) {
        // 0x802283D4: nop
    
            goto L_80228454;
    }
    // 0x802283D4: nop

    // 0x802283D8: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x802283DC: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x802283E0: bne         $v1, $v0, L_80228454
    if (ctx->r3 != ctx->r2) {
        // 0x802283E4: nop
    
            goto L_80228454;
    }
    // 0x802283E4: nop

    // 0x802283E8: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x802283EC: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x802283F0: bne         $v1, $v0, L_80228454
    if (ctx->r3 != ctx->r2) {
        // 0x802283F4: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80228454;
    }
    // 0x802283F4: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x802283F8: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x802283FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228400: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228404: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228408: lw          $v0, -0x3DE4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3DE4);
    // 0x8022840C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228410: sh          $zero, -0x3684($at)
    MEM_H(-0X3684, ctx->r1) = 0;
    // 0x80228414: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228418: sw          $v0, -0x3688($at)
    MEM_W(-0X3688, ctx->r1) = ctx->r2;
    // 0x8022841C: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80228420: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80228424: jal         0x8003B85C
    // 0x80228428: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80228428: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x8022842C: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80228430: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x80228434: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80228438: jal         0x8003B840
    // 0x8022843C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8022843C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x80228440: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80228444: lw          $v0, -0x367C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X367C);
    // 0x80228448: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x8022844C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228450: sw          $v0, -0x367C($at)
    MEM_W(-0X367C, ctx->r1) = ctx->r2;
L_80228454:
    // 0x80228454: jal         0x802281C0
    // 0x80228458: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802281C0_ovl6(rdram, ctx);
        goto after_4;
    // 0x80228458: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022845C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228460: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228464: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228468: jr          $ra
    // 0x8022846C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022846C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022734C_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022734C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80227350: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227354: jr          $ra
    // 0x80227358: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80227358: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_802260C4_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802260C4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802260C8: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x802260CC: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x802260D0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802260D4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802260D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802260DC: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802260E0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802260E4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802260E8: jal         0x8005F6B4
    // 0x802260EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_0;
    // 0x802260EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x802260F0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802260F4: addiu       $v0, $v0, -0x4A10
    ctx->r2 = ADD32(ctx->r2, -0X4A10);
    // 0x802260F8: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x802260FC: addiu       $s0, $s0, -0x430C
    ctx->r16 = ADD32(ctx->r16, -0X430C);
    // 0x80226100: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226104: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80226108: jal         0x8005FA7C
    // 0x8022610C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x8022610C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80226110: jal         0x8005FA7C
    // 0x80226114: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x80226114: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x80226118: jal         0x8005FA7C
    // 0x8022611C: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x8022611C: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_3:
    // 0x80226120: jal         0x8005FA7C
    // 0x80226124: addiu       $a0, $s0, 0x3C
    ctx->r4 = ADD32(ctx->r16, 0X3C);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_4;
    // 0x80226124: addiu       $a0, $s0, 0x3C
    ctx->r4 = ADD32(ctx->r16, 0X3C);
    after_4:
    // 0x80226128: jal         0x8005FA7C
    // 0x8022612C: addiu       $a0, $s0, 0x50
    ctx->r4 = ADD32(ctx->r16, 0X50);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_5;
    // 0x8022612C: addiu       $a0, $s0, 0x50
    ctx->r4 = ADD32(ctx->r16, 0X50);
    after_5:
    // 0x80226130: jal         0x8004F144
    // 0x80226134: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_6;
    // 0x80226134: nop

    after_6:
    // 0x80226138: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022613C: beq         $v1, $zero, L_8022616C
    if (ctx->r3 == 0) {
        // 0x80226140: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022616C;
    }
    // 0x80226140: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226144: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226148: sw          $v1, -0x36D0($at)
    MEM_W(-0X36D0, ctx->r1) = ctx->r3;
    // 0x8022614C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226150: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80226154: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80226158: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x8022615C: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80226160: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80226164: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80226168: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
L_8022616C:
    // 0x8022616C: jal         0x8004F228
    // 0x80226170: nop

    func_8004F228_2A628(rdram, ctx);
        goto after_7;
    // 0x80226170: nop

    after_7:
    // 0x80226174: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80226178: beq         $a0, $zero, L_8022619C
    if (ctx->r4 == 0) {
        // 0x8022617C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022619C;
    }
    // 0x8022617C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226180: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80226184: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x80226188: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022618C: sb          $v1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r3;
    // 0x80226190: sb          $zero, 0xF($a0)
    MEM_B(0XF, ctx->r4) = 0;
    // 0x80226194: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80226198: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
L_8022619C:
    // 0x8022619C: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x802261A0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x802261A4: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_802261A8:
    // 0x802261A8: jal         0x8004F228
    // 0x802261AC: nop

    func_8004F228_2A628(rdram, ctx);
        goto after_8;
    // 0x802261AC: nop

    after_8:
    // 0x802261B0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802261B4: beql        $a0, $zero, L_802261DC
    if (ctx->r4 == 0) {
        // 0x802261B8: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_802261DC;
    }
    goto skip_0;
    // 0x802261B8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x802261BC: lbu         $v1, 0x6($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X6);
    // 0x802261C0: addiu       $v0, $s0, 0xA
    ctx->r2 = ADD32(ctx->r16, 0XA);
    // 0x802261C4: sb          $s2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r18;
    // 0x802261C8: sb          $s1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r17;
    // 0x802261CC: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x802261D0: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x802261D4: sb          $v1, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r3;
    // 0x802261D8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_802261DC:
    // 0x802261DC: slti        $v0, $s0, 0x4
    ctx->r2 = SIGNED(ctx->r16) < 0X4 ? 1 : 0;
    // 0x802261E0: bne         $v0, $zero, L_802261A8
    if (ctx->r2 != 0) {
        // 0x802261E4: nop
    
            goto L_802261A8;
    }
    // 0x802261E4: nop

    // 0x802261E8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802261EC: addiu       $v0, $v0, -0x42A8
    ctx->r2 = ADD32(ctx->r2, -0X42A8);
    // 0x802261F0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802261F4: sb          $zero, -0x36C4($at)
    MEM_B(-0X36C4, ctx->r1) = 0;
    // 0x802261F8: sw          $v0, 0xA4($s3)
    MEM_W(0XA4, ctx->r19) = ctx->r2;
    // 0x802261FC: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80226200: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80226204: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80226208: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022620C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80226210: jr          $ra
    // 0x80226214: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80226214: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80229690_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229690: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80229694: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80229698: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022969C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x802296A0: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x802296A4: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x802296A8: lw          $s1, 0x28($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X28);
    // 0x802296AC: lhu         $v0, 0x2C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2C);
    // 0x802296B0: lhu         $s0, 0x56($s1)
    ctx->r16 = MEM_HU(ctx->r17, 0X56);
    // 0x802296B4: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x802296B8: lhu         $v0, 0x2E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2E);
    // 0x802296BC: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x802296C0: lhu         $v0, 0x30($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X30);
    // 0x802296C4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802296C8: jal         0x8002C654
    // 0x802296CC: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x802296CC: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    after_0:
    // 0x802296D0: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x802296D4: sra         $a0, $s0, 16
    ctx->r4 = S32(SIGNED(ctx->r16) >> 16);
    // 0x802296D8: jal         0x800319B4
    // 0x802296DC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x802296DC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x802296E0: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802296E4: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x802296E8: jal         0x80031270
    // 0x802296EC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_80031270_C670(rdram, ctx);
        goto after_2;
    // 0x802296EC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_2:
    // 0x802296F0: lh          $v1, 0x1C($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X1C);
    // 0x802296F4: lhu         $v0, 0x38($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X38);
    // 0x802296F8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802296FC: sh          $v0, 0x1C($s2)
    MEM_H(0X1C, ctx->r18) = ctx->r2;
    // 0x80229700: lh          $v1, 0x20($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X20);
    // 0x80229704: lhu         $v0, 0x3A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3A);
    // 0x80229708: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022970C: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
    // 0x80229710: lh          $a0, 0x24($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X24);
    // 0x80229714: lhu         $v1, 0x26($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X26);
    // 0x80229718: lhu         $v0, 0x3C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3C);
    // 0x8022971C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80229720: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80229724: sh          $v1, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r3;
    // 0x80229728: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8022972C: sh          $v0, 0x20($s2)
    MEM_H(0X20, ctx->r18) = ctx->r2;
    // 0x80229730: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229734: beql        $v1, $v0, L_8022973C
    if (ctx->r3 == ctx->r2) {
        // 0x80229738: sh          $zero, 0x26($s2)
        MEM_H(0X26, ctx->r18) = 0;
            goto L_8022973C;
    }
    goto skip_0;
    // 0x80229738: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    skip_0:
L_8022973C:
    // 0x8022973C: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x80229740: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229744: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80229748: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022974C: lbu         $v1, -0x3B40($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3B40);
    // 0x80229750: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x80229754: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229758: sb          $v1, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r3;
    // 0x8022975C: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80229760: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80229764: lbu         $v1, -0x3B3F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X3B3F);
    // 0x80229768: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x8022976C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229770: sb          $v1, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r3;
    // 0x80229774: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229778: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022977C: lhu         $v0, -0x3B3E($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X3B3E);
    // 0x80229780: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x80229784: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80229788: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8022978C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80229790: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80229794: jr          $ra
    // 0x80229798: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x80229798: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80226EF8_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226EF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226EFC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226F00: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226F04: bne         $v0, $zero, L_80226FBC
    if (ctx->r2 != 0) {
        // 0x80226F08: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80226FBC;
    }
    // 0x80226F08: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226F0C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F10: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226F14: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226F18: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F1C: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80226F20: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F24: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80226F28: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226F2C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F30: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226F34: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F38: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80226F3C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226F40: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F44: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80226F48: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F4C: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80226F50: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F54: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80226F58: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F5C: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80226F60: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F64: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226F68: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F6C: sb          $zero, 0x4510($at)
    MEM_B(0X4510, ctx->r1) = 0;
    // 0x80226F70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F74: sb          $zero, 0x4548($at)
    MEM_B(0X4548, ctx->r1) = 0;
    // 0x80226F78: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F7C: sb          $v0, 0x4580($at)
    MEM_B(0X4580, ctx->r1) = ctx->r2;
    // 0x80226F80: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226F84: sh          $zero, 0x45A2($at)
    MEM_H(0X45A2, ctx->r1) = 0;
    // 0x80226F88: lw          $v1, 0x30($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X30);
    // 0x80226F8C: lui         $v0, 0x7D0
    ctx->r2 = S32(0X7D0 << 16);
    // 0x80226F90: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    // 0x80226F94: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80226F98: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80226F9C: lui         $v0, 0xFA88
    ctx->r2 = S32(0XFA88 << 16);
    // 0x80226FA0: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80226FA4: lui         $v0, 0xE890
    ctx->r2 = S32(0XE890 << 16);
    // 0x80226FA8: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80226FAC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226FB0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226FB4: jal         0x8004CB2C
    // 0x80226FB8: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80226FB8: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    after_0:
L_80226FBC:
    // 0x80226FBC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226FC0: jr          $ra
    // 0x80226FC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226FC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227088_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227088: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022708C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80227090: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80227094: bne         $v0, $zero, L_802270C4
    if (ctx->r2 != 0) {
        // 0x80227098: addiu       $v0, $zero, 0x9
        ctx->r2 = ADD32(0, 0X9);
            goto L_802270C4;
    }
    // 0x80227098: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022709C: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x802270A0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802270A4: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802270A8: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x802270AC: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802270B0: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802270B4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802270B8: sb          $zero, -0x36C4($at)
    MEM_B(-0X36C4, ctx->r1) = 0;
    // 0x802270BC: jal         0x80054660
    // 0x802270C0: addiu       $a0, $zero, 0xAA
    ctx->r4 = ADD32(0, 0XAA);
    func_80054660_2FA60(rdram, ctx);
        goto after_0;
    // 0x802270C0: addiu       $a0, $zero, 0xAA
    ctx->r4 = ADD32(0, 0XAA);
    after_0:
L_802270C4:
    // 0x802270C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802270C8: jr          $ra
    // 0x802270CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802270CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802269A8_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269A8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802269AC: bne         $v0, $zero, L_802269BC
    if (ctx->r2 != 0) {
        // 0x802269B0: addiu       $v0, $zero, -0x50
        ctx->r2 = ADD32(0, -0X50);
            goto L_802269BC;
    }
    // 0x802269B0: addiu       $v0, $zero, -0x50
    ctx->r2 = ADD32(0, -0X50);
    // 0x802269B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802269B8: sh          $v0, 0x4450($at)
    MEM_H(0X4450, ctx->r1) = ctx->r2;
L_802269BC:
    // 0x802269BC: jr          $ra
    // 0x802269C0: nop

    TRACE_RETURN()
    return;
    // 0x802269C0: nop

;}
RECOMP_FUNC void func_80228184_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228184: jr          $ra
    // 0x80228188: nop

    TRACE_RETURN()
    return;
    // 0x80228188: nop

;}
RECOMP_FUNC void func_8022A6DC_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A6DC: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x8022A6E0: sw          $s3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r19;
    // 0x8022A6E4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8022A6E8: sw          $ra, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r31;
    // 0x8022A6EC: sw          $s6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r22;
    // 0x8022A6F0: sw          $s5, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r21;
    // 0x8022A6F4: sw          $s4, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r20;
    // 0x8022A6F8: sw          $s2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r18;
    // 0x8022A6FC: sw          $s1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r17;
    // 0x8022A700: sw          $s0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r16;
    // 0x8022A704: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x8022A708: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x8022A70C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022A710: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A714: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022A718: lui         $s5, 0x8023
    ctx->r21 = S32(0X8023 << 16);
    // 0x8022A71C: addu        $s5, $s5, $v0
    ctx->r21 = ADD32(ctx->r21, ctx->r2);
    // 0x8022A720: lhu         $s5, -0x389C($s5)
    ctx->r21 = MEM_HU(ctx->r21, -0X389C);
    // 0x8022A724: addiu       $a2, $sp, 0x1A
    ctx->r6 = ADD32(ctx->r29, 0X1A);
    // 0x8022A728: lui         $s6, 0x8023
    ctx->r22 = S32(0X8023 << 16);
    // 0x8022A72C: addu        $s6, $s6, $v0
    ctx->r22 = ADD32(ctx->r22, ctx->r2);
    // 0x8022A730: lhu         $s6, -0x389A($s6)
    ctx->r22 = MEM_HU(ctx->r22, -0X389A);
    // 0x8022A734: jal         0x800874D0
    // 0x8022A738: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    func_800874D0_628D0(rdram, ctx);
        goto after_0;
    // 0x8022A738: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    after_0:
    // 0x8022A73C: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x8022A740: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x8022A744: lh          $a2, 0x1A($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1A);
    // 0x8022A748: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022A74C: addiu       $a0, $a0, -0x3620
    ctx->r4 = ADD32(ctx->r4, -0X3620);
    // 0x8022A750: sll         $a3, $s6, 16
    ctx->r7 = S32(ctx->r22 << 16);
    // 0x8022A754: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022A758: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A75C: lbu         $v1, -0x37F8($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X37F8);
    // 0x8022A760: sra         $a3, $a3, 16
    ctx->r7 = S32(SIGNED(ctx->r7) >> 16);
    // 0x8022A764: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A768: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022A76C: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x8022A770: jal         0x80086F94
    // 0x8022A774: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80086F94_62394(rdram, ctx);
        goto after_1;
    // 0x8022A774: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_1:
    // 0x8022A778: lbu         $v1, 0x3($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X3);
    // 0x8022A77C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022A780: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A784: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022A788: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A78C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A790: lhu         $v0, -0x3898($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X3898);
    // 0x8022A794: beq         $v0, $zero, L_8022A9B0
    if (ctx->r2 == 0) {
        // 0x8022A798: addu        $s4, $zero, $zero
        ctx->r20 = ADD32(0, 0);
            goto L_8022A9B0;
    }
    // 0x8022A798: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
L_8022A79C:
    // 0x8022A79C: bgez        $s6, L_8022A7A8
    if (SIGNED(ctx->r22) >= 0) {
        // 0x8022A7A0: addu        $v0, $s6, $zero
        ctx->r2 = ADD32(ctx->r22, 0);
            goto L_8022A7A8;
    }
    // 0x8022A7A0: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x8022A7A4: addiu       $v0, $s6, 0xF
    ctx->r2 = ADD32(ctx->r22, 0XF);
L_8022A7A8:
    // 0x8022A7A8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8022A7AC: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022A7B0: beq         $v0, $zero, L_8022AA6C
    if (ctx->r2 == 0) {
        // 0x8022A7B4: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_8022AA6C;
    }
    // 0x8022A7B4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8022A7B8: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8022A7BC: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x8022A7C0: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x8022A7C4: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x8022A7C8: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8022A7CC: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8022A7D0: jal         0x800874D0
    // 0x8022A7D4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_2;
    // 0x8022A7D4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_2:
    // 0x8022A7D8: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8022A7DC: jal         0x80087248
    // 0x8022A7E0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_3;
    // 0x8022A7E0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_3:
    // 0x8022A7E4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022A7E8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8022A7EC: lh          $v0, 0x18($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X18);
    // 0x8022A7F0: lh          $a0, 0x1A($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X1A);
    // 0x8022A7F4: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8022A7F8: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8022A7FC: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8022A800: jal         0x800874D0
    // 0x8022A804: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_4;
    // 0x8022A804: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_4:
    // 0x8022A808: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8022A80C: jal         0x80087248
    // 0x8022A810: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_5;
    // 0x8022A810: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_5:
    // 0x8022A814: addu        $v1, $s5, $zero
    ctx->r3 = ADD32(ctx->r21, 0);
    // 0x8022A818: bgez        $s5, L_8022A824
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8022A81C: addu        $s2, $v0, $zero
        ctx->r18 = ADD32(ctx->r2, 0);
            goto L_8022A824;
    }
    // 0x8022A81C: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x8022A820: addiu       $v1, $s5, 0xFF
    ctx->r3 = ADD32(ctx->r21, 0XFF);
L_8022A824:
    // 0x8022A824: addu        $a0, $s5, $s0
    ctx->r4 = ADD32(ctx->r21, ctx->r16);
    // 0x8022A828: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8022A82C: jal         0x800874D0
    // 0x8022A830: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_6;
    // 0x8022A830: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_6:
    // 0x8022A834: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8022A838: jal         0x80087248
    // 0x8022A83C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_7;
    // 0x8022A83C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_7:
    // 0x8022A840: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022A844: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x8022A848: sltiu       $v1, $s2, 0x1
    ctx->r3 = ctx->r18 < 0X1 ? 1 : 0;
    // 0x8022A84C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022A850: bnel        $v0, $zero, L_8022A79C
    if (ctx->r2 != 0) {
        // 0x8022A854: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8022A79C;
    }
    goto skip_0;
    // 0x8022A854: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_0:
    // 0x8022A858: beq         $a1, $zero, L_8022A9A8
    if (ctx->r5 == 0) {
        // 0x8022A85C: addu        $t7, $zero, $zero
        ctx->r15 = ADD32(0, 0);
            goto L_8022A9A8;
    }
    // 0x8022A85C: addu        $t7, $zero, $zero
    ctx->r15 = ADD32(0, 0);
    // 0x8022A860: addu        $t6, $a1, $zero
    ctx->r14 = ADD32(ctx->r5, 0);
    // 0x8022A864: addu        $t5, $s2, $zero
    ctx->r13 = ADD32(ctx->r18, 0);
    // 0x8022A868: addu        $t4, $s1, $zero
    ctx->r12 = ADD32(ctx->r17, 0);
L_8022A86C:
    // 0x8022A86C: lhu         $t1, 0x0($t4)
    ctx->r9 = MEM_HU(ctx->r12, 0X0);
    // 0x8022A870: lhu         $v1, 0x0($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0X0);
    // 0x8022A874: lb          $t3, 0xD($s3)
    ctx->r11 = MEM_B(ctx->r19, 0XD);
    // 0x8022A878: andi        $a2, $t1, 0xFFFF
    ctx->r6 = ctx->r9 & 0XFFFF;
    // 0x8022A87C: srl         $t2, $a2, 11
    ctx->r10 = S32(U32(ctx->r6) >> 11);
    // 0x8022A880: srl         $a3, $v1, 11
    ctx->r7 = S32(U32(ctx->r3) >> 11);
    // 0x8022A884: subu        $a3, $a3, $t2
    ctx->r7 = SUB32(ctx->r7, ctx->r10);
    // 0x8022A888: mult        $a3, $t3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A88C: mflo        $a3
    ctx->r7 = lo;
    // 0x8022A890: lb          $a1, 0xC($s3)
    ctx->r5 = MEM_B(ctx->r19, 0XC);
    // 0x8022A894: nop

    // 0x8022A898: div         $zero, $a3, $a1
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r5)));
    // 0x8022A89C: bne         $a1, $zero, L_8022A8A8
    if (ctx->r5 != 0) {
        // 0x8022A8A0: nop
    
            goto L_8022A8A8;
    }
    // 0x8022A8A0: nop

    // 0x8022A8A4: break       7
    do_break(2149755044);
L_8022A8A8:
    // 0x8022A8A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022A8AC: bne         $a1, $at, L_8022A8C0
    if (ctx->r5 != ctx->r1) {
        // 0x8022A8B0: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8022A8C0;
    }
    // 0x8022A8B0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022A8B4: bne         $a3, $at, L_8022A8C0
    if (ctx->r7 != ctx->r1) {
        // 0x8022A8B8: nop
    
            goto L_8022A8C0;
    }
    // 0x8022A8B8: nop

    // 0x8022A8BC: break       6
    do_break(2149755068);
L_8022A8C0:
    // 0x8022A8C0: mflo        $a3
    ctx->r7 = lo;
    // 0x8022A8C4: sra         $t0, $a2, 6
    ctx->r8 = S32(SIGNED(ctx->r6) >> 6);
    // 0x8022A8C8: andi        $t0, $t0, 0x1F
    ctx->r8 = ctx->r8 & 0X1F;
    // 0x8022A8CC: sra         $v0, $v1, 6
    ctx->r2 = S32(SIGNED(ctx->r3) >> 6);
    // 0x8022A8D0: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022A8D4: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x8022A8D8: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A8DC: mflo        $v0
    ctx->r2 = lo;
    // 0x8022A8E0: nop

    // 0x8022A8E4: nop

    // 0x8022A8E8: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x8022A8EC: bne         $a1, $zero, L_8022A8F8
    if (ctx->r5 != 0) {
        // 0x8022A8F0: nop
    
            goto L_8022A8F8;
    }
    // 0x8022A8F0: nop

    // 0x8022A8F4: break       7
    do_break(2149755124);
L_8022A8F8:
    // 0x8022A8F8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022A8FC: bne         $a1, $at, L_8022A910
    if (ctx->r5 != ctx->r1) {
        // 0x8022A900: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8022A910;
    }
    // 0x8022A900: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022A904: bne         $v0, $at, L_8022A910
    if (ctx->r2 != ctx->r1) {
        // 0x8022A908: nop
    
            goto L_8022A910;
    }
    // 0x8022A908: nop

    // 0x8022A90C: break       6
    do_break(2149755148);
L_8022A910:
    // 0x8022A910: mflo        $v0
    ctx->r2 = lo;
    // 0x8022A914: sra         $a2, $a2, 1
    ctx->r6 = S32(SIGNED(ctx->r6) >> 1);
    // 0x8022A918: andi        $a2, $a2, 0x1F
    ctx->r6 = ctx->r6 & 0X1F;
    // 0x8022A91C: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8022A920: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8022A924: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x8022A928: mult        $v1, $t3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022A92C: mflo        $v1
    ctx->r3 = lo;
    // 0x8022A930: nop

    // 0x8022A934: nop

    // 0x8022A938: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x8022A93C: bne         $a1, $zero, L_8022A948
    if (ctx->r5 != 0) {
        // 0x8022A940: nop
    
            goto L_8022A948;
    }
    // 0x8022A940: nop

    // 0x8022A944: break       7
    do_break(2149755204);
L_8022A948:
    // 0x8022A948: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8022A94C: bne         $a1, $at, L_8022A960
    if (ctx->r5 != ctx->r1) {
        // 0x8022A950: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8022A960;
    }
    // 0x8022A950: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8022A954: bne         $v1, $at, L_8022A960
    if (ctx->r3 != ctx->r1) {
        // 0x8022A958: nop
    
            goto L_8022A960;
    }
    // 0x8022A958: nop

    // 0x8022A95C: break       6
    do_break(2149755228);
L_8022A960:
    // 0x8022A960: mflo        $v1
    ctx->r3 = lo;
    // 0x8022A964: addiu       $t5, $t5, 0x2
    ctx->r13 = ADD32(ctx->r13, 0X2);
    // 0x8022A968: addiu       $t4, $t4, 0x2
    ctx->r12 = ADD32(ctx->r12, 0X2);
    // 0x8022A96C: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    // 0x8022A970: andi        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 & 0X1;
    // 0x8022A974: addu        $t2, $t2, $a3
    ctx->r10 = ADD32(ctx->r10, ctx->r7);
    // 0x8022A978: sll         $t2, $t2, 11
    ctx->r10 = S32(ctx->r10 << 11);
    // 0x8022A97C: or          $t1, $t1, $t2
    ctx->r9 = ctx->r9 | ctx->r10;
    // 0x8022A980: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x8022A984: sll         $t0, $t0, 6
    ctx->r8 = S32(ctx->r8 << 6);
    // 0x8022A988: or          $t1, $t1, $t0
    ctx->r9 = ctx->r9 | ctx->r8;
    // 0x8022A98C: slti        $v0, $t7, 0x10
    ctx->r2 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x8022A990: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8022A994: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x8022A998: or          $t1, $t1, $a2
    ctx->r9 = ctx->r9 | ctx->r6;
    // 0x8022A99C: sh          $t1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r9;
    // 0x8022A9A0: bne         $v0, $zero, L_8022A86C
    if (ctx->r2 != 0) {
        // 0x8022A9A4: addiu       $t6, $t6, 0x2
        ctx->r14 = ADD32(ctx->r14, 0X2);
            goto L_8022A86C;
    }
    // 0x8022A9A4: addiu       $t6, $t6, 0x2
    ctx->r14 = ADD32(ctx->r14, 0X2);
L_8022A9A8:
    // 0x8022A9A8: j           L_8022A79C
    // 0x8022A9AC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8022A79C;
    // 0x8022A9AC: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8022A9B0:
    // 0x8022A9B0: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x8022A9B4: bne         $v0, $zero, L_8022AA6C
    if (ctx->r2 != 0) {
        // 0x8022A9B8: nop
    
            goto L_8022AA6C;
    }
    // 0x8022A9B8: nop

L_8022A9BC:
    // 0x8022A9BC: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x8022A9C0: bltzl       $v0, L_8022A9C8
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022A9C4: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_8022A9C8;
    }
    goto skip_1;
    // 0x8022A9C4: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_1:
L_8022A9C8:
    // 0x8022A9C8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8022A9CC: slt         $v0, $s4, $v0
    ctx->r2 = SIGNED(ctx->r20) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022A9D0: beq         $v0, $zero, L_8022AA6C
    if (ctx->r2 == 0) {
        // 0x8022A9D4: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_8022AA6C;
    }
    // 0x8022A9D4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8022A9D8: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8022A9DC: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x8022A9E0: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x8022A9E4: sll         $s0, $s4, 4
    ctx->r16 = S32(ctx->r20 << 4);
    // 0x8022A9E8: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8022A9EC: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8022A9F0: jal         0x800874D0
    // 0x8022A9F4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_8;
    // 0x8022A9F4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_8:
    // 0x8022A9F8: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8022A9FC: jal         0x80087248
    // 0x8022AA00: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_9;
    // 0x8022AA00: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_9:
    // 0x8022AA04: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022AA08: bgez        $s5, L_8022AA14
    if (SIGNED(ctx->r21) >= 0) {
        // 0x8022AA0C: addu        $v0, $s5, $zero
        ctx->r2 = ADD32(ctx->r21, 0);
            goto L_8022AA14;
    }
    // 0x8022AA0C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x8022AA10: addiu       $v0, $s5, 0xFF
    ctx->r2 = ADD32(ctx->r21, 0XFF);
L_8022AA14:
    // 0x8022AA14: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8022AA18: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022AA1C: subu        $v1, $s5, $v0
    ctx->r3 = SUB32(ctx->r21, ctx->r2);
    // 0x8022AA20: addu        $a0, $s0, $v1
    ctx->r4 = ADD32(ctx->r16, ctx->r3);
    // 0x8022AA24: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022AA28: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8022AA2C: jal         0x800874D0
    // 0x8022AA30: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_10;
    // 0x8022AA30: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_10:
    // 0x8022AA34: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8022AA38: jal         0x80087248
    // 0x8022AA3C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_11;
    // 0x8022AA3C: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_11:
    // 0x8022AA40: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022AA44: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x8022AA48: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x8022AA4C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022AA50: bnel        $v0, $zero, L_8022A9BC
    if (ctx->r2 != 0) {
        // 0x8022AA54: addiu       $s4, $s4, 0x1
        ctx->r20 = ADD32(ctx->r20, 0X1);
            goto L_8022A9BC;
    }
    goto skip_2;
    // 0x8022AA54: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    skip_2:
    // 0x8022AA58: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AA5C: jal         0x80099F90
    // 0x8022AA60: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    bcopy_recomp(rdram, ctx);
        goto after_12;
    // 0x8022AA60: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_12:
    // 0x8022AA64: j           L_8022A9BC
    // 0x8022AA68: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
        goto L_8022A9BC;
    // 0x8022AA68: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
L_8022AA6C:
    // 0x8022AA6C: lw          $ra, 0x64($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X64);
    // 0x8022AA70: lw          $s6, 0x60($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X60);
    // 0x8022AA74: lw          $s5, 0x5C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X5C);
    // 0x8022AA78: lw          $s4, 0x58($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X58);
    // 0x8022AA7C: lw          $s3, 0x54($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X54);
    // 0x8022AA80: lw          $s2, 0x50($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X50);
    // 0x8022AA84: lw          $s1, 0x4C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X4C);
    // 0x8022AA88: lw          $s0, 0x48($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X48);
    // 0x8022AA8C: jr          $ra
    // 0x8022AA90: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    TRACE_RETURN()
    return;
    // 0x8022AA90: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80225928_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225928: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022592C: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80225930: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225934: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80225938: bne         $v0, $zero, L_80225A40
    if (ctx->r2 != 0) {
        // 0x8022593C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80225A40;
    }
    // 0x8022593C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225940: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225944: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80225948: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022594C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225950: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225954: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225958: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022595C: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x80225960: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225964: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80225968: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022596C: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80225970: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225974: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80225978: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022597C: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80225980: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225984: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225988: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022598C: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225990: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225994: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80225998: lw          $a0, 0x30($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X30);
    // 0x8022599C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802259A0: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x802259A4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802259A8: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x802259AC: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x802259B0: sw          $zero, 0x24($a0)
    MEM_W(0X24, ctx->r4) = 0;
    // 0x802259B4: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x802259B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259BC: sb          $v0, 0x4580($at)
    MEM_B(0X4580, ctx->r1) = ctx->r2;
    // 0x802259C0: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x802259C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259C8: sb          $zero, 0x4468($at)
    MEM_B(0X4468, ctx->r1) = 0;
    // 0x802259CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259D0: sb          $zero, 0x4430($at)
    MEM_B(0X4430, ctx->r1) = 0;
    // 0x802259D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259D8: sw          $zero, 0x4588($at)
    MEM_W(0X4588, ctx->r1) = 0;
    // 0x802259DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259E0: sw          $zero, 0x4584($at)
    MEM_W(0X4584, ctx->r1) = 0;
    // 0x802259E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802259E8: sh          $v0, 0x45A2($at)
    MEM_H(0X45A2, ctx->r1) = ctx->r2;
    // 0x802259EC: lw          $a0, 0x24($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X24);
    // 0x802259F0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x802259F4: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x802259F8: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802259FC: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80225A00: lw          $a0, 0x28($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X28);
    // 0x80225A04: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80225A08: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225A0C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80225A10: lw          $a0, 0x2C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X2C);
    // 0x80225A14: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80225A18: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225A1C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80225A20: lw          $a0, 0x34($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X34);
    // 0x80225A24: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80225A28: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80225A2C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80225A30: lw          $a0, 0x30($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X30);
    // 0x80225A34: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80225A38: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80225A3C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_80225A40:
    // 0x80225A40: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225A44: addiu       $a0, $a0, 0x45A2
    ctx->r4 = ADD32(ctx->r4, 0X45A2);
    // 0x80225A48: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x80225A4C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80225A50: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x80225A54: addiu       $v0, $v0, -0x6
    ctx->r2 = ADD32(ctx->r2, -0X6);
    // 0x80225A58: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x80225A5C: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
    // 0x80225A60: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80225A64: bne         $v1, $v0, L_80225A84
    if (ctx->r3 != ctx->r2) {
        // 0x80225A68: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225A84;
    }
    // 0x80225A68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225A6C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80225A70: lw          $a0, 0x30($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X30);
    // 0x80225A74: addiu       $a1, $zero, 0x190
    ctx->r5 = ADD32(0, 0X190);
    // 0x80225A78: addiu       $a2, $zero, -0x64
    ctx->r6 = ADD32(0, -0X64);
    // 0x80225A7C: jal         0x80229D40
    // 0x80225A80: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    func_80229D40_ovl6(rdram, ctx);
        goto after_0;
    // 0x80225A80: addiu       $a3, $zero, 0x12C
    ctx->r7 = ADD32(0, 0X12C);
    after_0:
L_80225A84:
    // 0x80225A84: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225A88: jr          $ra
    // 0x80225A8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225A8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802251B4_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802251B4: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802251B8: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802251BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802251C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802251C4: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x802251C8: beq         $v0, $zero, L_802251E4
    if (ctx->r2 == 0) {
        // 0x802251CC: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_802251E4;
    }
    // 0x802251CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802251D0: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802251D4: lw          $a0, 0x984($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X984);
    // 0x802251D8: lui         $a1, 0x8023
    ctx->r5 = S32(0X8023 << 16);
    // 0x802251DC: j           L_802251EC
    // 0x802251E0: addiu       $a1, $a1, -0x4A38
    ctx->r5 = ADD32(ctx->r5, -0X4A38);
        goto L_802251EC;
    // 0x802251E0: addiu       $a1, $a1, -0x4A38
    ctx->r5 = ADD32(ctx->r5, -0X4A38);
L_802251E4:
    // 0x802251E4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802251E8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_802251EC:
    // 0x802251EC: jal         0x80037D80
    // 0x802251F0: nop

    func_80037D80_13180(rdram, ctx);
        goto after_0;
    // 0x802251F0: nop

    after_0:
    // 0x802251F4: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x802251F8: addiu       $s0, $s0, -0x3BC7
    ctx->r16 = ADD32(ctx->r16, -0X3BC7);
    // 0x802251FC: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x80225200: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80225204: lb          $a1, 0x47CD($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X47CD);
    // 0x80225208: lui         $a2, 0x8021
    ctx->r6 = S32(0X8021 << 16);
    // 0x8022520C: addiu       $a2, $a2, 0xCB4
    ctx->r6 = ADD32(ctx->r6, 0XCB4);
    // 0x80225210: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x80225214: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80225218: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022521C: lbu         $v1, 0x2($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X2);
    // 0x80225220: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225224: addu        $a0, $a0, $t3
    ctx->r4 = ADD32(ctx->r4, ctx->r11);
    // 0x80225228: lw          $a0, -0x4CB0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4CB0);
    // 0x8022522C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225230: sh          $v1, 0x49AE($at)
    MEM_H(0X49AE, ctx->r1) = ctx->r3;
    // 0x80225234: lbu         $a3, 0x3($v0)
    ctx->r7 = MEM_BU(ctx->r2, 0X3);
    // 0x80225238: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8022523C: sh          $a3, -0x7386($at)
    MEM_H(-0X7386, ctx->r1) = ctx->r7;
    // 0x80225240: lbu         $t0, 0x0($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X0);
    // 0x80225244: lui         $t1, 0x7FE9
    ctx->r9 = S32(0X7FE9 << 16);
    // 0x80225248: ori         $t1, $t1, 0xC000
    ctx->r9 = ctx->r9 | 0XC000;
    // 0x8022524C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225250: sb          $t0, 0x6B40($at)
    MEM_B(0X6B40, ctx->r1) = ctx->r8;
    // 0x80225254: lbu         $t2, 0x1($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X1);
    // 0x80225258: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8022525C: addiu       $a2, $a2, -0x4
    ctx->r6 = ADD32(ctx->r6, -0X4);
    // 0x80225260: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80225264: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225268: sb          $v1, -0x35BC($at)
    MEM_B(-0X35BC, ctx->r1) = ctx->r3;
    // 0x8022526C: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x80225270: srl         $v0, $v0, 1
    ctx->r2 = S32(U32(ctx->r2) >> 1);
    // 0x80225274: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80225278: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8022527C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80225280: sw          $v0, -0x35C0($at)
    MEM_W(-0X35C0, ctx->r1) = ctx->r2;
    // 0x80225284: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80225288: addiu       $v0, $v0, 0x5080
    ctx->r2 = ADD32(ctx->r2, 0X5080);
    // 0x8022528C: addu        $a3, $a3, $t2
    ctx->r7 = ADD32(ctx->r7, ctx->r10);
    // 0x80225290: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225294: sw          $v0, 0xB5C($at)
    MEM_W(0XB5C, ctx->r1) = ctx->r2;
    // 0x80225298: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022529C: sb          $t2, -0x39A6($at)
    MEM_B(-0X39A6, ctx->r1) = ctx->r10;
    // 0x802252A0: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x802252A4: sb          $a3, 0x53D4($at)
    MEM_B(0X53D4, ctx->r1) = ctx->r7;
    // 0x802252A8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802252AC: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x802252B0: lw          $v0, -0x4C88($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X4C88);
    // 0x802252B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802252B8: jal         0x8004C790
    // 0x802252BC: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    func_8004C790_27B90(rdram, ctx);
        goto after_1;
    // 0x802252BC: sw          $v0, 0x6B44($at)
    MEM_W(0X6B44, ctx->r1) = ctx->r2;
    after_1:
    // 0x802252C0: lb          $v0, 0x0($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X0);
    // 0x802252C4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802252C8: addiu       $a0, $a0, -0x4C48
    ctx->r4 = ADD32(ctx->r4, -0X4C48);
    // 0x802252CC: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x802252D0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802252D4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802252D8: lw          $v1, -0x4A48($at)
    ctx->r3 = MEM_W(ctx->r1, -0X4A48);
    // 0x802252DC: sll         $a1, $v0, 1
    ctx->r5 = S32(ctx->r2 << 1);
    // 0x802252E0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252E4: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x802252E8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802252EC: addiu       $v0, $v0, -0x4C78
    ctx->r2 = ADD32(ctx->r2, -0X4C78);
    // 0x802252F0: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802252F4: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x802252F8: jal         0x80054FB8
    // 0x802252FC: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80054FB8_303B8(rdram, ctx);
        goto after_2;
    // 0x802252FC: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_2:
    // 0x80225300: jal         0x8004A614
    // 0x80225304: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_8004A614_25A14(rdram, ctx);
        goto after_3;
    // 0x80225304: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_3:
    // 0x80225308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022530C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225310: jr          $ra
    // 0x80225314: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225314: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80225318: nop

    // 0x8022531C: nop

;}
RECOMP_FUNC void func_80228094_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228094: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228098: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022809C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802280A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802280A4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802280A8: bne         $v0, $zero, L_802280C4
    if (ctx->r2 != 0) {
        // 0x802280AC: addiu       $a1, $zero, 0x19
        ctx->r5 = ADD32(0, 0X19);
            goto L_802280C4;
    }
    // 0x802280AC: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    // 0x802280B0: jal         0x80050294
    // 0x802280B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802280B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802280B8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802280BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802280C0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802280C4:
    // 0x802280C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802280C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802280CC: jr          $ra
    // 0x802280D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802280D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227E38_ovl6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227E38: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x80227E3C: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80227E40: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80227E44: bne         $v1, $v0, L_80227E58
    if (ctx->r3 != ctx->r2) {
        // 0x80227E48: nop
    
            goto L_80227E58;
    }
    // 0x80227E48: nop

    // 0x80227E4C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80227E50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227E54: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80227E58:
    // 0x80227E58: jr          $ra
    // 0x80227E5C: nop

    TRACE_RETURN()
    return;
    // 0x80227E5C: nop

;}
