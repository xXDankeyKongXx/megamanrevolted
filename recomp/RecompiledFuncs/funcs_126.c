#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022569C_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022569C: jr          $ra
    // 0x802256A0: nop

    TRACE_RETURN()
    return;
    // 0x802256A0: nop

;}
RECOMP_FUNC void func_80225604_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225604: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225608: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022560C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225610: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225614: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225618: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022561C: beq         $v0, $zero, L_80225640
    if (ctx->r2 == 0) {
        // 0x80225620: nop
    
            goto L_80225640;
    }
    // 0x80225620: nop

    // 0x80225624: bltz        $v1, L_80225640
    if (SIGNED(ctx->r3) < 0) {
        // 0x80225628: nop
    
            goto L_80225640;
    }
    // 0x80225628: nop

    // 0x8022562C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225630: jal         0x800607C4
    // 0x80225634: addiu       $a0, $a0, -0x5D04
    ctx->r4 = ADD32(ctx->r4, -0X5D04);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225634: addiu       $a0, $a0, -0x5D04
    ctx->r4 = ADD32(ctx->r4, -0X5D04);
    after_0:
    // 0x80225638: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022563C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225640:
    // 0x80225640: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225644: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225648: jr          $ra
    // 0x8022564C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022564C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022554C_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022554C: lbu         $v1, 0x4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X4);
    // 0x80225550: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225554: beq         $v0, $zero, L_80225568
    if (ctx->r2 == 0) {
        // 0x80225558: nop
    
            goto L_80225568;
    }
    // 0x80225558: nop

    // 0x8022555C: bltz        $v1, L_80225568
    if (SIGNED(ctx->r3) < 0) {
        // 0x80225560: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80225568;
    }
    // 0x80225560: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225564: sb          $v0, 0x4($a0)
    MEM_B(0X4, ctx->r4) = ctx->r2;
L_80225568:
    // 0x80225568: jr          $ra
    // 0x8022556C: nop

    TRACE_RETURN()
    return;
    // 0x8022556C: nop

;}
RECOMP_FUNC void func_8022832C_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022832C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228330: lw          $a1, 0x4B34($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4B34);
    // 0x80228334: bne         $a1, $a0, L_80228388
    if (ctx->r5 != ctx->r4) {
        // 0x80228338: addiu       $a2, $a0, 0x348
        ctx->r6 = ADD32(ctx->r4, 0X348);
            goto L_80228388;
    }
    // 0x80228338: addiu       $a2, $a0, 0x348
    ctx->r6 = ADD32(ctx->r4, 0X348);
    // 0x8022833C: lbu         $v1, 0x2($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X2);
    // 0x80228340: addiu       $v0, $zero, 0x34
    ctx->r2 = ADD32(0, 0X34);
    // 0x80228344: bne         $v1, $v0, L_80228354
    if (ctx->r3 != ctx->r2) {
        // 0x80228348: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_80228354;
    }
    // 0x80228348: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022834C: j           L_80228370
    // 0x80228350: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_80228370;
    // 0x80228350: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80228354:
    // 0x80228354: bne         $v1, $v0, L_80228364
    if (ctx->r3 != ctx->r2) {
        // 0x80228358: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_80228364;
    }
    // 0x80228358: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022835C: j           L_80228370
    // 0x80228360: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
        goto L_80228370;
    // 0x80228360: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80228364:
    // 0x80228364: bne         $v1, $v0, L_80228370
    if (ctx->r3 != ctx->r2) {
        // 0x80228368: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80228370;
    }
    // 0x80228368: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022836C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80228370:
    // 0x80228370: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80228374: lhu         $v0, 0x0($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X0);
    // 0x80228378: sb          $zero, 0x3($a2)
    MEM_B(0X3, ctx->r6) = 0;
    // 0x8022837C: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x80228380: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x80228384: sh          $v0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r2;
L_80228388:
    // 0x80228388: jr          $ra
    // 0x8022838C: nop

    TRACE_RETURN()
    return;
    // 0x8022838C: nop

;}
RECOMP_FUNC void func_80226F44_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226F44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226F48: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226F4C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80226F50: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226F54: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226F58: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226F5C: lw          $v0, -0x553C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X553C);
    // 0x80226F60: jalr        $v0
    // 0x80226F64: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226F64: nop

    after_0:
    // 0x80226F68: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226F6C: jr          $ra
    // 0x80226F70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226F70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802263EC_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802263EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802263F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802263F4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802263F8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802263FC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80226400: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226404: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226408: lbu         $s0, 0xD($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0XD);
    // 0x8022640C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226410: addiu       $v0, $v0, -0x5608
    ctx->r2 = ADD32(ctx->r2, -0X5608);
    // 0x80226414: andi        $s0, $s0, 0x30
    ctx->r16 = ctx->r16 & 0X30;
    // 0x80226418: jal         0x800A3450
    // 0x8022641C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022641C: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    after_0:
    // 0x80226420: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80226424: addu        $s0, $s0, $v0
    ctx->r16 = ADD32(ctx->r16, ctx->r2);
    // 0x80226428: lbu         $s3, 0x0($s0)
    ctx->r19 = MEM_BU(ctx->r16, 0X0);
    // 0x8022642C: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80226430: addiu       $s0, $s0, -0x55C8
    ctx->r16 = ADD32(ctx->r16, -0X55C8);
    // 0x80226434: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x80226438: beq         $v1, $zero, L_80226454
    if (ctx->r3 == 0) {
        // 0x8022643C: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_80226454;
    }
    // 0x8022643C: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x80226440: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226444: beq         $v1, $v0, L_80226474
    if (ctx->r3 == ctx->r2) {
        // 0x80226448: nop
    
            goto L_80226474;
    }
    // 0x80226448: nop

    // 0x8022644C: j           L_80226488
    // 0x80226450: nop

        goto L_80226488;
    // 0x80226450: nop

L_80226454:
    // 0x80226454: jal         0x80228438
    // 0x80226458: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    func_80228438_ovl17(rdram, ctx);
        goto after_1;
    // 0x80226458: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    after_1:
    // 0x8022645C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226460: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226464: jal         0x80228478
    // 0x80226468: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_80228478_ovl17(rdram, ctx);
        goto after_2;
    // 0x80226468: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_2:
    // 0x8022646C: j           L_802264E0
    // 0x80226470: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
        goto L_802264E0;
    // 0x80226470: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_80226474:
    // 0x80226474: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x80226478: jal         0x80228428
    // 0x8022647C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    func_80228428_ovl17(rdram, ctx);
        goto after_3;
    // 0x8022647C: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    after_3:
    // 0x80226480: j           L_802264E0
    // 0x80226484: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
        goto L_802264E0;
    // 0x80226484: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
L_80226488:
    // 0x80226488: lh          $v1, 0x16($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X16);
    // 0x8022648C: lh          $v0, 0x1E($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X1E);
    // 0x80226490: bne         $v1, $v0, L_802264A0
    if (ctx->r3 != ctx->r2) {
        // 0x80226494: nop
    
            goto L_802264A0;
    }
    // 0x80226494: nop

    // 0x80226498: j           L_802264E0
    // 0x8022649C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
        goto L_802264E0;
    // 0x8022649C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_802264A0:
    // 0x802264A0: lbu         $a0, 0x2($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X2);
    // 0x802264A4: jal         0x80228438
    // 0x802264A8: nop

    func_80228438_ovl17(rdram, ctx);
        goto after_4;
    // 0x802264A8: nop

    after_4:
    // 0x802264AC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x802264B0: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x802264B4: beq         $v0, $zero, L_802264C8
    if (ctx->r2 == 0) {
        // 0x802264B8: nop
    
            goto L_802264C8;
    }
    // 0x802264B8: nop

    // 0x802264BC: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x802264C0: j           L_802264D8
    // 0x802264C4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
        goto L_802264D8;
    // 0x802264C4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_802264C8:
    // 0x802264C8: lhu         $v0, 0xA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XA);
    // 0x802264CC: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x802264D0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802264D4: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
L_802264D8:
    // 0x802264D8: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x802264DC: addiu       $s0, $s0, -0x55A8
    ctx->r16 = ADD32(ctx->r16, -0X55A8);
L_802264E0:
    // 0x802264E0: jal         0x800A3450
    // 0x802264E4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x802264E4: nop

    after_5:
    // 0x802264E8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802264EC: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x802264F0: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x802264F4: andi        $v1, $s3, 0xFF
    ctx->r3 = ctx->r19 & 0XFF;
    // 0x802264F8: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x802264FC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226500: beq         $v1, $v0, L_80226518
    if (ctx->r3 == ctx->r2) {
        // 0x80226504: nop
    
            goto L_80226518;
    }
    // 0x80226504: nop

    // 0x80226508: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022650C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226510: addu        $v0, $s3, $v0
    ctx->r2 = ADD32(ctx->r19, ctx->r2);
    // 0x80226514: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_80226518:
    // 0x80226518: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022651C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80226520: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226524: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226528: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022652C: jr          $ra
    // 0x80226530: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226530: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802256E4_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802256E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802256E8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802256EC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802256F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802256F4: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802256F8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802256FC: beq         $v0, $zero, L_80225720
    if (ctx->r2 == 0) {
        // 0x80225700: nop
    
            goto L_80225720;
    }
    // 0x80225700: nop

    // 0x80225704: bltz        $v1, L_80225720
    if (SIGNED(ctx->r3) < 0) {
        // 0x80225708: nop
    
            goto L_80225720;
    }
    // 0x80225708: nop

    // 0x8022570C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225710: jal         0x800607C4
    // 0x80225714: addiu       $a0, $a0, -0x5D04
    ctx->r4 = ADD32(ctx->r4, -0X5D04);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225714: addiu       $a0, $a0, -0x5D04
    ctx->r4 = ADD32(ctx->r4, -0X5D04);
    after_0:
    // 0x80225718: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022571C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225720:
    // 0x80225720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225724: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225728: jr          $ra
    // 0x8022572C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022572C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228C0C_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228C0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228C10: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228C14: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228C18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80228C1C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228C20: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228C24: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80228C28: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80228C2C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80228C30: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80228C34: beq         $v0, $zero, L_80228D54
    if (ctx->r2 == 0) {
        // 0x80228C38: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80228D54;
    }
    // 0x80228C38: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228C3C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228C40: addu        $at, $at, $v0
    gpr jr_addend_80228C48 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228C44: lw          $v0, -0x5380($at)
    ctx->r2 = ADD32(ctx->r1, -0X5380);
    // 0x80228C48: jr          $v0
    // 0x80228C4C: nop

    switch (jr_addend_80228C48 >> 2) {
        case 0: goto L_80228C50; break;
        case 1: goto L_80228C60; break;
        case 2: goto L_80228C78; break;
        case 3: goto L_80228CE8; break;
        case 4: goto L_80228D18; break;
        default: switch_error(__func__, 0x80228C48, 0x8022AC80);
    }
    // 0x80228C4C: nop

L_80228C50:
    // 0x80228C50: jal         0x80228EDC
    // 0x80228C54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80228EDC_ovl17(rdram, ctx);
        goto after_0;
    // 0x80228C54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80228C58: j           L_80228D08
    // 0x80228C5C: nop

        goto L_80228D08;
    // 0x80228C5C: nop

L_80228C60:
    // 0x80228C60: jal         0x80228F98
    // 0x80228C64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80228F98_ovl17(rdram, ctx);
        goto after_1;
    // 0x80228C64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80228C68: beq         $v0, $zero, L_80228D58
    if (ctx->r2 == 0) {
        // 0x80228C6C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228D58;
    }
    // 0x80228C6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228C70: j           L_80228D08
    // 0x80228C74: nop

        goto L_80228D08;
    // 0x80228C74: nop

L_80228C78:
    // 0x80228C78: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228C7C: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80228C80: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x80228C84: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80228C88: jal         0x8004F820
    // 0x80228C8C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80228C8C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x80228C90: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228C94: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228C98: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228C9C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228CA0: bne         $v0, $zero, L_80228D54
    if (ctx->r2 != 0) {
        // 0x80228CA4: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80228D54;
    }
    // 0x80228CA4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80228CA8: jal         0x8003516C
    // 0x80228CAC: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_3;
    // 0x80228CAC: nop

    after_3:
    // 0x80228CB0: bne         $v0, $zero, L_80228D58
    if (ctx->r2 != 0) {
        // 0x80228CB4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228D58;
    }
    // 0x80228CB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228CB8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80228CBC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80228CC0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228CC4: jal         0x800610AC
    // 0x80228CC8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_4;
    // 0x80228CC8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x80228CCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228CD0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80228CD4: jal         0x80050294
    // 0x80228CD8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80228CD8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80228CDC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80228CE0: j           L_80228D0C
    // 0x80228CE4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80228D0C;
    // 0x80228CE4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80228CE8:
    // 0x80228CE8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228CEC: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80228CF0: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80228CF4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228CF8: bne         $v0, $zero, L_80228D58
    if (ctx->r2 != 0) {
        // 0x80228CFC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228D58;
    }
    // 0x80228CFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228D00: jal         0x80034E3C
    // 0x80228D04: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_6;
    // 0x80228D04: nop

    after_6:
L_80228D08:
    // 0x80228D08: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
L_80228D0C:
    // 0x80228D0C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228D10: j           L_80228D54
    // 0x80228D14: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80228D54;
    // 0x80228D14: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80228D18:
    // 0x80228D18: jal         0x8003516C
    // 0x80228D1C: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_7;
    // 0x80228D1C: nop

    after_7:
    // 0x80228D20: bne         $v0, $zero, L_80228D58
    if (ctx->r2 != 0) {
        // 0x80228D24: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228D58;
    }
    // 0x80228D24: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228D28: lbu         $v0, 0xBD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XBD);
    // 0x80228D2C: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80228D30: addiu       $a0, $zero, 0x204
    ctx->r4 = ADD32(0, 0X204);
    // 0x80228D34: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80228D38: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80228D3C: sb          $v0, 0xBD($s1)
    MEM_B(0XBD, ctx->r17) = ctx->r2;
    // 0x80228D40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228D44: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x80228D48: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80228D4C: jal         0x8006036C
    // 0x80228D50: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    func_8006036C_3B76C(rdram, ctx);
        goto after_8;
    // 0x80228D50: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    after_8:
L_80228D54:
    // 0x80228D54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80228D58:
    // 0x80228D58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80228D5C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80228D60: jal         0x80047284
    // 0x80228D64: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_9;
    // 0x80228D64: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
    // 0x80228D68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80228D6C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228D70: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228D74: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228D78: jr          $ra
    // 0x80228D7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228D7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802261E0_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802261E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802261E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802261E8: jal         0x8004F418
    // 0x802261EC: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x802261EC: nop

    after_0:
    // 0x802261F0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802261F4: jr          $ra
    // 0x802261F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802261F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802276AC_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802276AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802276B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802276B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802276B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802276BC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802276C0: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x802276C4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802276C8: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802276CC: jal         0x8004F820
    // 0x802276D0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x802276D0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x802276D4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802276D8: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x802276DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802276E0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802276E4: bgez        $a0, L_80227708
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802276E8: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80227708;
    }
    // 0x802276E8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802276EC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802276F0: jal         0x80228428
    // 0x802276F4: nop

    func_80228428_ovl17(rdram, ctx);
        goto after_1;
    // 0x802276F4: nop

    after_1:
    // 0x802276F8: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x802276FC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227700: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80227704: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_80227708:
    // 0x80227708: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022770C: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80227710: bne         $v0, $zero, L_80227734
    if (ctx->r2 != 0) {
        // 0x80227714: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80227734;
    }
    // 0x80227714: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80227718: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022771C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80227720: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x80227724: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80227728: jal         0x80228428
    // 0x8022772C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    func_80228428_ovl17(rdram, ctx);
        goto after_2;
    // 0x8022772C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    after_2:
    // 0x80227730: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80227734:
    // 0x80227734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227738: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022773C: jr          $ra
    // 0x80227740: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227740: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802292D0_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802292D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802292D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802292D8: jal         0x8006033C
    // 0x802292DC: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802292DC: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    after_0:
    // 0x802292E0: bne         $v0, $zero, L_802292F0
    if (ctx->r2 != 0) {
        // 0x802292E4: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_802292F0;
    }
    // 0x802292E4: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x802292E8: j           L_80229300
    // 0x802292EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80229300;
    // 0x802292EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802292F0:
    // 0x802292F0: jal         0x80072168
    // 0x802292F4: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    func_80072168_4D568(rdram, ctx);
        goto after_1;
    // 0x802292F4: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_1:
    // 0x802292F8: xori        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 ^ 0X3;
    // 0x802292FC: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_80229300:
    // 0x80229300: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229304: jr          $ra
    // 0x80229308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8022930C: nop

;}
RECOMP_FUNC void func_80226534_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226534: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226538: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022653C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226540: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226544: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80226548: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022654C: jal         0x8004DA90
    // 0x80226550: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80226550: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80226554: lhu         $v0, 0x35E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X35E);
    // 0x80226558: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022655C: sh          $v0, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r2;
    // 0x80226560: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226564: bne         $v0, $zero, L_8022659C
    if (ctx->r2 != 0) {
        // 0x80226568: nop
    
            goto L_8022659C;
    }
    // 0x80226568: nop

    // 0x8022656C: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x80226570: beq         $v0, $zero, L_80226584
    if (ctx->r2 == 0) {
        // 0x80226574: nop
    
            goto L_80226584;
    }
    // 0x80226574: nop

    // 0x80226578: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x8022657C: j           L_8022658C
    // 0x80226580: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
        goto L_8022658C;
    // 0x80226580: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
L_80226584:
    // 0x80226584: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80226588: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
L_8022658C:
    // 0x8022658C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80226590: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80226594: j           L_802265EC
    // 0x80226598: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
        goto L_802265EC;
    // 0x80226598: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
L_8022659C:
    // 0x8022659C: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x802265A0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802265A4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802265A8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802265AC: bne         $v0, $zero, L_802265BC
    if (ctx->r2 != 0) {
        // 0x802265B0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802265BC;
    }
    // 0x802265B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802265B4: j           L_802265EC
    // 0x802265B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802265EC;
    // 0x802265B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802265BC:
    // 0x802265BC: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802265C0: jal         0x802284C4
    // 0x802265C4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_802284C4_ovl17(rdram, ctx);
        goto after_1;
    // 0x802265C4: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_1:
    // 0x802265C8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802265CC: beq         $v0, $zero, L_802265F0
    if (ctx->r2 == 0) {
        // 0x802265D0: nop
    
            goto L_802265F0;
    }
    // 0x802265D0: nop

    // 0x802265D4: jal         0x80228428
    // 0x802265D8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80228428_ovl17(rdram, ctx);
        goto after_2;
    // 0x802265D8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x802265DC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802265E0: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802265E4: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802265E8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_802265EC:
    // 0x802265EC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802265F0:
    // 0x802265F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802265F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802265F8: jr          $ra
    // 0x802265FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802265FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225C04_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225C08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225C0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225C10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225C14: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225C18: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225C1C: beq         $v0, $zero, L_80225C40
    if (ctx->r2 == 0) {
        // 0x80225C20: nop
    
            goto L_80225C40;
    }
    // 0x80225C20: nop

    // 0x80225C24: bltz        $v1, L_80225C40
    if (SIGNED(ctx->r3) < 0) {
        // 0x80225C28: nop
    
            goto L_80225C40;
    }
    // 0x80225C28: nop

    // 0x80225C2C: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225C30: jal         0x800607C4
    // 0x80225C34: addiu       $a0, $a0, -0x5C8C
    ctx->r4 = ADD32(ctx->r4, -0X5C8C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225C34: addiu       $a0, $a0, -0x5C8C
    ctx->r4 = ADD32(ctx->r4, -0X5C8C);
    after_0:
    // 0x80225C38: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225C3C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225C40:
    // 0x80225C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225C44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225C48: jr          $ra
    // 0x80225C4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225C4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225810_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225814: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225818: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022581C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225820: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225824: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225828: beq         $v0, $zero, L_8022584C
    if (ctx->r2 == 0) {
        // 0x8022582C: nop
    
            goto L_8022584C;
    }
    // 0x8022582C: nop

    // 0x80225830: bltz        $v1, L_8022584C
    if (SIGNED(ctx->r3) < 0) {
        // 0x80225834: nop
    
            goto L_8022584C;
    }
    // 0x80225834: nop

    // 0x80225838: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022583C: jal         0x800607C4
    // 0x80225840: addiu       $a0, $a0, -0x5CD4
    ctx->r4 = ADD32(ctx->r4, -0X5CD4);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225840: addiu       $a0, $a0, -0x5CD4
    ctx->r4 = ADD32(ctx->r4, -0X5CD4);
    after_0:
    // 0x80225844: addiu       $v0, $zero, 0xE1
    ctx->r2 = ADD32(0, 0XE1);
    // 0x80225848: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022584C:
    // 0x8022584C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225850: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225854: jr          $ra
    // 0x80225858: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225858: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802284C4_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802284C4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802284C8: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802284CC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802284D0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x802284D4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802284D8: lh          $v0, 0x56($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X56);
    // 0x802284DC: addu        $s0, $a2, $zero
    ctx->r16 = ADD32(ctx->r6, 0);
    // 0x802284E0: sll         $a2, $a1, 20
    ctx->r6 = S32(ctx->r5 << 20);
    // 0x802284E4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x802284E8: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x802284EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802284F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802284F4: jal         0x8004DC2C
    // 0x802284F8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x802284F8: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_0:
    // 0x802284FC: lh          $a1, 0x18($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X18);
    // 0x80228500: lhu         $a0, 0x14($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X14);
    // 0x80228504: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80228508: lhu         $v1, 0x49C4($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C4);
    // 0x8022850C: lh          $a2, 0x20($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X20);
    // 0x80228510: addu        $a0, $a0, $a1
    ctx->r4 = ADD32(ctx->r4, ctx->r5);
    // 0x80228514: subu        $a0, $a0, $v1
    ctx->r4 = SUB32(ctx->r4, ctx->r3);
    // 0x80228518: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x8022851C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80228520: lhu         $a1, 0x49C8($a1)
    ctx->r5 = MEM_HU(ctx->r5, 0X49C8);
    // 0x80228524: addu        $a0, $s0, $a0
    ctx->r4 = ADD32(ctx->r16, ctx->r4);
    // 0x80228528: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x8022852C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80228530: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80228534: addu        $v1, $s0, $v1
    ctx->r3 = ADD32(ctx->r16, ctx->r3);
    // 0x80228538: andi        $s0, $s0, 0xFFFF
    ctx->r16 = ctx->r16 & 0XFFFF;
    // 0x8022853C: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x80228540: slt         $a0, $a0, $s0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80228544: beq         $a0, $zero, L_80228554
    if (ctx->r4 == 0) {
        // 0x80228548: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80228554;
    }
    // 0x80228548: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8022854C: andi        $v0, $v1, 0xFFFF
    ctx->r2 = ctx->r3 & 0XFFFF;
    // 0x80228550: slt         $v0, $v0, $s0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r16) ? 1 : 0;
L_80228554:
    // 0x80228554: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80228558: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022855C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80228560: jr          $ra
    // 0x80228564: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80228564: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80228568: nop

    // 0x8022856C: nop

;}
RECOMP_FUNC void func_802268D4_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802268D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802268D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802268DC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802268E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802268E4: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x802268E8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802268EC: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802268F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802268F4: bne         $v0, $zero, L_80226960
    if (ctx->r2 != 0) {
        // 0x802268F8: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_80226960;
    }
    // 0x802268F8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802268FC: jal         0x802284C4
    // 0x80226900: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_802284C4_ovl17(rdram, ctx);
        goto after_0;
    // 0x80226900: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x80226904: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80226908: beq         $v0, $zero, L_8022695C
    if (ctx->r2 == 0) {
        // 0x8022690C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022695C;
    }
    // 0x8022690C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226910: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x80226914: lh          $v1, 0x35E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35E);
    // 0x80226918: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x8022691C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80226920: bne         $v1, $zero, L_80226930
    if (ctx->r3 != 0) {
        // 0x80226924: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80226930;
    }
    // 0x80226924: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80226928: j           L_80226960
    // 0x8022692C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
        goto L_80226960;
    // 0x8022692C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
L_80226930:
    // 0x80226930: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226934: jal         0x80228438
    // 0x80226938: nop

    func_80228438_ovl17(rdram, ctx);
        goto after_1;
    // 0x80226938: nop

    after_1:
    // 0x8022693C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80226940: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226944: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80226948: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022694C: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80226950: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80226954: j           L_80226960
    // 0x80226958: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
        goto L_80226960;
    // 0x80226958: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
L_8022695C:
    // 0x8022695C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226960:
    // 0x80226960: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226964: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226968: jr          $ra
    // 0x8022696C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022696C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228428_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228428: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022842C: xori        $v0, $v0, 0x11
    ctx->r2 = ctx->r2 ^ 0X11;
    // 0x80228430: jr          $ra
    // 0x80228434: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    TRACE_RETURN()
    return;
    // 0x80228434: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_80228478_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228478: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022847C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228480: beq         $a1, $v0, L_802284AC
    if (ctx->r5 == ctx->r2) {
        // 0x80228484: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_802284AC;
    }
    // 0x80228484: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x80228488: lbu         $a0, 0x2($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2);
    // 0x8022848C: bne         $a0, $v0, L_8022849C
    if (ctx->r4 != ctx->r2) {
        // 0x80228490: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_8022849C;
    }
    // 0x80228490: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80228494: j           L_802284BC
    // 0x80228498: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_802284BC;
    // 0x80228498: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_8022849C:
    // 0x8022849C: bne         $a0, $v1, L_802284BC
    if (ctx->r4 != ctx->r3) {
        // 0x802284A0: addiu       $v0, $zero, 0x180
        ctx->r2 = ADD32(0, 0X180);
            goto L_802284BC;
    }
    // 0x802284A0: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x802284A4: j           L_802284BC
    // 0x802284A8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
        goto L_802284BC;
    // 0x802284A8: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
L_802284AC:
    // 0x802284AC: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x802284B0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802284B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802284B8: lbu         $v0, -0x5730($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X5730);
L_802284BC:
    // 0x802284BC: jr          $ra
    // 0x802284C0: nop

    TRACE_RETURN()
    return;
    // 0x802284C0: nop

;}
RECOMP_FUNC void func_8022898C_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022898C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228990: addiu       $a0, $zero, 0x211
    ctx->r4 = ADD32(0, 0X211);
    // 0x80228994: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80228998: jal         0x8006033C
    // 0x8022899C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022899C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x802289A0: bne         $v0, $zero, L_802289DC
    if (ctx->r2 != 0) {
        // 0x802289A4: addiu       $s0, $zero, 0xA
        ctx->r16 = ADD32(0, 0XA);
            goto L_802289DC;
    }
    // 0x802289A4: addiu       $s0, $zero, 0xA
    ctx->r16 = ADD32(0, 0XA);
    // 0x802289A8: jal         0x8006033C
    // 0x802289AC: addiu       $a0, $zero, 0x545
    ctx->r4 = ADD32(0, 0X545);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802289AC: addiu       $a0, $zero, 0x545
    ctx->r4 = ADD32(0, 0X545);
    after_1:
    // 0x802289B0: bne         $v0, $zero, L_802289DC
    if (ctx->r2 != 0) {
        // 0x802289B4: addiu       $s0, $zero, 0x8
        ctx->r16 = ADD32(0, 0X8);
            goto L_802289DC;
    }
    // 0x802289B4: addiu       $s0, $zero, 0x8
    ctx->r16 = ADD32(0, 0X8);
    // 0x802289B8: jal         0x8006033C
    // 0x802289BC: addiu       $a0, $zero, 0x209
    ctx->r4 = ADD32(0, 0X209);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x802289BC: addiu       $a0, $zero, 0x209
    ctx->r4 = ADD32(0, 0X209);
    after_2:
    // 0x802289C0: beq         $v0, $zero, L_802289D8
    if (ctx->r2 == 0) {
        // 0x802289C4: addiu       $s0, $zero, 0x7
        ctx->r16 = ADD32(0, 0X7);
            goto L_802289D8;
    }
    // 0x802289C4: addiu       $s0, $zero, 0x7
    ctx->r16 = ADD32(0, 0X7);
    // 0x802289C8: jal         0x8006036C
    // 0x802289CC: addiu       $a0, $zero, 0x20A
    ctx->r4 = ADD32(0, 0X20A);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x802289CC: addiu       $a0, $zero, 0x20A
    ctx->r4 = ADD32(0, 0X20A);
    after_3:
    // 0x802289D0: j           L_802289E0
    // 0x802289D4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_802289E0;
    // 0x802289D4: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_802289D8:
    // 0x802289D8: addiu       $s0, $zero, 0x5
    ctx->r16 = ADD32(0, 0X5);
L_802289DC:
    // 0x802289DC: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_802289E0:
    // 0x802289E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802289E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802289E8: jr          $ra
    // 0x802289EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802289EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802290C4_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802290C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802290C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802290CC: addiu       $s0, $zero, 0x23
    ctx->r16 = ADD32(0, 0X23);
    // 0x802290D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802290D4: jal         0x8006033C
    // 0x802290D8: addiu       $a0, $zero, 0x222
    ctx->r4 = ADD32(0, 0X222);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802290D8: addiu       $a0, $zero, 0x222
    ctx->r4 = ADD32(0, 0X222);
    after_0:
    // 0x802290DC: bne         $v0, $zero, L_802290F4
    if (ctx->r2 != 0) {
        // 0x802290E0: nop
    
            goto L_802290F4;
    }
    // 0x802290E0: nop

    // 0x802290E4: jal         0x8006036C
    // 0x802290E8: addiu       $a0, $zero, 0x222
    ctx->r4 = ADD32(0, 0X222);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x802290E8: addiu       $a0, $zero, 0x222
    ctx->r4 = ADD32(0, 0X222);
    after_1:
    // 0x802290EC: j           L_80229284
    // 0x802290F0: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
        goto L_80229284;
    // 0x802290F0: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
L_802290F4:
    // 0x802290F4: jal         0x80229294
    // 0x802290F8: nop

    func_80229294_ovl17(rdram, ctx);
        goto after_2;
    // 0x802290F8: nop

    after_2:
    // 0x802290FC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80229100: beq         $v0, $zero, L_80229284
    if (ctx->r2 == 0) {
        // 0x80229104: addiu       $v0, $zero, 0x23
        ctx->r2 = ADD32(0, 0X23);
            goto L_80229284;
    }
    // 0x80229104: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x80229108: jal         0x8006033C
    // 0x8022910C: addiu       $a0, $zero, 0x207
    ctx->r4 = ADD32(0, 0X207);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x8022910C: addiu       $a0, $zero, 0x207
    ctx->r4 = ADD32(0, 0X207);
    after_3:
    // 0x80229110: beq         $v0, $zero, L_80229130
    if (ctx->r2 == 0) {
        // 0x80229114: nop
    
            goto L_80229130;
    }
    // 0x80229114: nop

    // 0x80229118: jal         0x8006033C
    // 0x8022911C: addiu       $a0, $zero, 0x223
    ctx->r4 = ADD32(0, 0X223);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x8022911C: addiu       $a0, $zero, 0x223
    ctx->r4 = ADD32(0, 0X223);
    after_4:
    // 0x80229120: beq         $v0, $zero, L_802291A4
    if (ctx->r2 == 0) {
        // 0x80229124: addiu       $v0, $zero, 0x24
        ctx->r2 = ADD32(0, 0X24);
            goto L_802291A4;
    }
    // 0x80229124: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
    // 0x80229128: j           L_80229284
    // 0x8022912C: nop

        goto L_80229284;
    // 0x8022912C: nop

L_80229130:
    // 0x80229130: jal         0x8006033C
    // 0x80229134: addiu       $a0, $zero, 0x206
    ctx->r4 = ADD32(0, 0X206);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x80229134: addiu       $a0, $zero, 0x206
    ctx->r4 = ADD32(0, 0X206);
    after_5:
    // 0x80229138: beq         $v0, $zero, L_80229174
    if (ctx->r2 == 0) {
        // 0x8022913C: nop
    
            goto L_80229174;
    }
    // 0x8022913C: nop

    // 0x80229140: jal         0x8006033C
    // 0x80229144: addiu       $a0, $zero, 0x205
    ctx->r4 = ADD32(0, 0X205);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x80229144: addiu       $a0, $zero, 0x205
    ctx->r4 = ADD32(0, 0X205);
    after_6:
    // 0x80229148: bne         $v0, $zero, L_8022915C
    if (ctx->r2 != 0) {
        // 0x8022914C: addiu       $s0, $zero, 0x4
        ctx->r16 = ADD32(0, 0X4);
            goto L_8022915C;
    }
    // 0x8022914C: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x80229150: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x80229154: jal         0x8006036C
    // 0x80229158: addiu       $a0, $zero, 0x24B
    ctx->r4 = ADD32(0, 0X24B);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x80229158: addiu       $a0, $zero, 0x24B
    ctx->r4 = ADD32(0, 0X24B);
    after_7:
L_8022915C:
    // 0x8022915C: jal         0x8006036C
    // 0x80229160: addiu       $a0, $zero, 0x207
    ctx->r4 = ADD32(0, 0X207);
    func_8006036C_3B76C(rdram, ctx);
        goto after_8;
    // 0x80229160: addiu       $a0, $zero, 0x207
    ctx->r4 = ADD32(0, 0X207);
    after_8:
    // 0x80229164: jal         0x8006036C
    // 0x80229168: addiu       $a0, $zero, 0x223
    ctx->r4 = ADD32(0, 0X223);
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x80229168: addiu       $a0, $zero, 0x223
    ctx->r4 = ADD32(0, 0X223);
    after_9:
    // 0x8022916C: j           L_80229284
    // 0x80229170: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
        goto L_80229284;
    // 0x80229170: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_80229174:
    // 0x80229174: jal         0x8006033C
    // 0x80229178: addiu       $a0, $zero, 0x204
    ctx->r4 = ADD32(0, 0X204);
    func_8006033C_3B73C(rdram, ctx);
        goto after_10;
    // 0x80229178: addiu       $a0, $zero, 0x204
    ctx->r4 = ADD32(0, 0X204);
    after_10:
    // 0x8022917C: bne         $v0, $zero, L_80229284
    if (ctx->r2 != 0) {
        // 0x80229180: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229284;
    }
    // 0x80229180: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229184: jal         0x8006036C
    // 0x80229188: addiu       $a0, $zero, 0x204
    ctx->r4 = ADD32(0, 0X204);
    func_8006036C_3B76C(rdram, ctx);
        goto after_11;
    // 0x80229188: addiu       $a0, $zero, 0x204
    ctx->r4 = ADD32(0, 0X204);
    after_11:
    // 0x8022918C: jal         0x8006036C
    // 0x80229190: addiu       $a0, $zero, 0x236
    ctx->r4 = ADD32(0, 0X236);
    func_8006036C_3B76C(rdram, ctx);
        goto after_12;
    // 0x80229190: addiu       $a0, $zero, 0x236
    ctx->r4 = ADD32(0, 0X236);
    after_12:
    // 0x80229194: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80229198: sb          $zero, -0x3BA0($at)
    MEM_B(-0X3BA0, ctx->r1) = 0;
    // 0x8022919C: j           L_80229284
    // 0x802291A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80229284;
    // 0x802291A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802291A4:
    // 0x802291A4: jal         0x802292D0
    // 0x802291A8: nop

    func_802292D0_ovl17(rdram, ctx);
        goto after_13;
    // 0x802291A8: nop

    after_13:
    // 0x802291AC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802291B0: beq         $v0, $zero, L_80229284
    if (ctx->r2 == 0) {
        // 0x802291B4: addiu       $v0, $zero, 0x23
        ctx->r2 = ADD32(0, 0X23);
            goto L_80229284;
    }
    // 0x802291B4: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x802291B8: jal         0x8006033C
    // 0x802291BC: addiu       $a0, $zero, 0x211
    ctx->r4 = ADD32(0, 0X211);
    func_8006033C_3B73C(rdram, ctx);
        goto after_14;
    // 0x802291BC: addiu       $a0, $zero, 0x211
    ctx->r4 = ADD32(0, 0X211);
    after_14:
    // 0x802291C0: beq         $v0, $zero, L_802291E0
    if (ctx->r2 == 0) {
        // 0x802291C4: nop
    
            goto L_802291E0;
    }
    // 0x802291C4: nop

    // 0x802291C8: jal         0x8006033C
    // 0x802291CC: addiu       $a0, $zero, 0x223
    ctx->r4 = ADD32(0, 0X223);
    func_8006033C_3B73C(rdram, ctx);
        goto after_15;
    // 0x802291CC: addiu       $a0, $zero, 0x223
    ctx->r4 = ADD32(0, 0X223);
    after_15:
    // 0x802291D0: beq         $v0, $zero, L_80229260
    if (ctx->r2 == 0) {
        // 0x802291D4: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80229260;
    }
    // 0x802291D4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x802291D8: j           L_80229284
    // 0x802291DC: nop

        goto L_80229284;
    // 0x802291DC: nop

L_802291E0:
    // 0x802291E0: jal         0x8006033C
    // 0x802291E4: addiu       $a0, $zero, 0x545
    ctx->r4 = ADD32(0, 0X545);
    func_8006033C_3B73C(rdram, ctx);
        goto after_16;
    // 0x802291E4: addiu       $a0, $zero, 0x545
    ctx->r4 = ADD32(0, 0X545);
    after_16:
    // 0x802291E8: beq         $v0, $zero, L_80229250
    if (ctx->r2 == 0) {
        // 0x802291EC: nop
    
            goto L_80229250;
    }
    // 0x802291EC: nop

    // 0x802291F0: jal         0x80060590
    // 0x802291F4: addiu       $a0, $zero, 0x20A
    ctx->r4 = ADD32(0, 0X20A);
    func_80060590_3B990(rdram, ctx);
        goto after_17;
    // 0x802291F4: addiu       $a0, $zero, 0x20A
    ctx->r4 = ADD32(0, 0X20A);
    after_17:
    // 0x802291F8: jal         0x80060590
    // 0x802291FC: addiu       $a0, $zero, 0x20B
    ctx->r4 = ADD32(0, 0X20B);
    func_80060590_3B990(rdram, ctx);
        goto after_18;
    // 0x802291FC: addiu       $a0, $zero, 0x20B
    ctx->r4 = ADD32(0, 0X20B);
    after_18:
    // 0x80229200: jal         0x80060590
    // 0x80229204: addiu       $a0, $zero, 0x20C
    ctx->r4 = ADD32(0, 0X20C);
    func_80060590_3B990(rdram, ctx);
        goto after_19;
    // 0x80229204: addiu       $a0, $zero, 0x20C
    ctx->r4 = ADD32(0, 0X20C);
    after_19:
    // 0x80229208: jal         0x80060590
    // 0x8022920C: addiu       $a0, $zero, 0x20D
    ctx->r4 = ADD32(0, 0X20D);
    func_80060590_3B990(rdram, ctx);
        goto after_20;
    // 0x8022920C: addiu       $a0, $zero, 0x20D
    ctx->r4 = ADD32(0, 0X20D);
    after_20:
    // 0x80229210: jal         0x80060590
    // 0x80229214: addiu       $a0, $zero, 0x20E
    ctx->r4 = ADD32(0, 0X20E);
    func_80060590_3B990(rdram, ctx);
        goto after_21;
    // 0x80229214: addiu       $a0, $zero, 0x20E
    ctx->r4 = ADD32(0, 0X20E);
    after_21:
    // 0x80229218: jal         0x80060590
    // 0x8022921C: addiu       $a0, $zero, 0x545
    ctx->r4 = ADD32(0, 0X545);
    func_80060590_3B990(rdram, ctx);
        goto after_22;
    // 0x8022921C: addiu       $a0, $zero, 0x545
    ctx->r4 = ADD32(0, 0X545);
    after_22:
    // 0x80229220: jal         0x80060C1C
    // 0x80229224: addiu       $a0, $zero, 0x2E7
    ctx->r4 = ADD32(0, 0X2E7);
    func_80060C1C_3C01C(rdram, ctx);
        goto after_23;
    // 0x80229224: addiu       $a0, $zero, 0x2E7
    ctx->r4 = ADD32(0, 0X2E7);
    after_23:
    // 0x80229228: jal         0x80060D38
    // 0x8022922C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80060D38_3C138(rdram, ctx);
        goto after_24;
    // 0x8022922C: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_24:
    // 0x80229230: jal         0x8006036C
    // 0x80229234: addiu       $a0, $zero, 0x211
    ctx->r4 = ADD32(0, 0X211);
    func_8006036C_3B76C(rdram, ctx);
        goto after_25;
    // 0x80229234: addiu       $a0, $zero, 0x211
    ctx->r4 = ADD32(0, 0X211);
    after_25:
    // 0x80229238: jal         0x8006036C
    // 0x8022923C: addiu       $a0, $zero, 0x223
    ctx->r4 = ADD32(0, 0X223);
    func_8006036C_3B76C(rdram, ctx);
        goto after_26;
    // 0x8022923C: addiu       $a0, $zero, 0x223
    ctx->r4 = ADD32(0, 0X223);
    after_26:
    // 0x80229240: jal         0x8006036C
    // 0x80229244: addiu       $a0, $zero, 0x568
    ctx->r4 = ADD32(0, 0X568);
    func_8006036C_3B76C(rdram, ctx);
        goto after_27;
    // 0x80229244: addiu       $a0, $zero, 0x568
    ctx->r4 = ADD32(0, 0X568);
    after_27:
    // 0x80229248: j           L_80229284
    // 0x8022924C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_80229284;
    // 0x8022924C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_80229250:
    // 0x80229250: jal         0x8006036C
    // 0x80229254: addiu       $a0, $zero, 0x209
    ctx->r4 = ADD32(0, 0X209);
    func_8006036C_3B76C(rdram, ctx);
        goto after_28;
    // 0x80229254: addiu       $a0, $zero, 0x209
    ctx->r4 = ADD32(0, 0X209);
    after_28:
    // 0x80229258: j           L_80229284
    // 0x8022925C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_80229284;
    // 0x8022925C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_80229260:
    // 0x80229260: jal         0x8006033C
    // 0x80229264: addiu       $a0, $zero, 0x214
    ctx->r4 = ADD32(0, 0X214);
    func_8006033C_3B73C(rdram, ctx);
        goto after_29;
    // 0x80229264: addiu       $a0, $zero, 0x214
    ctx->r4 = ADD32(0, 0X214);
    after_29:
    // 0x80229268: beq         $v0, $zero, L_80229284
    if (ctx->r2 == 0) {
        // 0x8022926C: addu        $v0, $s0, $zero
        ctx->r2 = ADD32(ctx->r16, 0);
            goto L_80229284;
    }
    // 0x8022926C: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x80229270: jal         0x8006033C
    // 0x80229274: addiu       $a0, $zero, 0x223
    ctx->r4 = ADD32(0, 0X223);
    func_8006033C_3B73C(rdram, ctx);
        goto after_30;
    // 0x80229274: addiu       $a0, $zero, 0x223
    ctx->r4 = ADD32(0, 0X223);
    after_30:
    // 0x80229278: bnel        $v0, $zero, L_80229280
    if (ctx->r2 != 0) {
        // 0x8022927C: addiu       $s0, $zero, 0xB
        ctx->r16 = ADD32(0, 0XB);
            goto L_80229280;
    }
    goto skip_0;
    // 0x8022927C: addiu       $s0, $zero, 0xB
    ctx->r16 = ADD32(0, 0XB);
    skip_0:
L_80229280:
    // 0x80229280: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
L_80229284:
    // 0x80229284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229288: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022928C: jr          $ra
    // 0x80229290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802255BC_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802255BC: jr          $ra
    // 0x802255C0: nop

    TRACE_RETURN()
    return;
    // 0x802255C0: nop

;}
RECOMP_FUNC void func_80227ED4_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227ED4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227ED8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227EDC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227EE0: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80227EE4: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80227EE8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227EEC: jal         0x8003516C
    // 0x80227EF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003516C_1056C(rdram, ctx);
        goto after_0;
    // 0x80227EF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80227EF4: bne         $v0, $zero, L_80227F18
    if (ctx->r2 != 0) {
        // 0x80227EF8: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80227F18;
    }
    // 0x80227EF8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227EFC: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80227F00: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80227F04: jal         0x800610AC
    // 0x80227F08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x80227F08: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80227F0C: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227F10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227F14: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_80227F18:
    // 0x80227F18: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227F1C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x80227F20: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227F24: jal         0x8004F820
    // 0x80227F28: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80227F28: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x80227F2C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80227F30: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80227F34: sb          $a0, 0x11B($s0)
    MEM_B(0X11B, ctx->r16) = ctx->r4;
    // 0x80227F38: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227F3C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80227F40: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80227F44: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227F48: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227F4C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227F50: jr          $ra
    // 0x80227F54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227F54: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802259C8_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802259C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802259CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802259D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802259D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802259D8: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802259DC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802259E0: beq         $v0, $zero, L_80225A04
    if (ctx->r2 == 0) {
        // 0x802259E4: nop
    
            goto L_80225A04;
    }
    // 0x802259E4: nop

    // 0x802259E8: bltz        $v1, L_80225A04
    if (SIGNED(ctx->r3) < 0) {
        // 0x802259EC: nop
    
            goto L_80225A04;
    }
    // 0x802259EC: nop

    // 0x802259F0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802259F4: jal         0x800607C4
    // 0x802259F8: addiu       $a0, $a0, -0x5CCC
    ctx->r4 = ADD32(ctx->r4, -0X5CCC);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802259F8: addiu       $a0, $a0, -0x5CCC
    ctx->r4 = ADD32(ctx->r4, -0X5CCC);
    after_0:
    // 0x802259FC: addiu       $v0, $zero, 0xE1
    ctx->r2 = ADD32(0, 0XE1);
    // 0x80225A00: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225A04:
    // 0x80225A04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225A08: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225A0C: jr          $ra
    // 0x80225A10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225A10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227CF8_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227CF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227CFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227D00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227D04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227D08: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80227D0C: bgez        $v0, L_80227D40
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227D10: nop
    
            goto L_80227D40;
    }
    // 0x80227D10: nop

    // 0x80227D14: jal         0x80228428
    // 0x80227D18: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80228428_ovl17(rdram, ctx);
        goto after_0;
    // 0x80227D18: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x80227D1C: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80227D20: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x80227D24: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x80227D28: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227D2C: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80227D30: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x80227D34: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80227D38: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x80227D3C: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_80227D40:
    // 0x80227D40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227D44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227D48: jr          $ra
    // 0x80227D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227D4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228F98_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228F98: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228F9C: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x80228FA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228FA4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228FA8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80228FAC: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80228FB0: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x80228FB4: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x80228FB8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80228FBC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228FC0: bne         $v0, $s1, L_802290A4
    if (ctx->r2 != ctx->r17) {
        // 0x80228FC4: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_802290A4;
    }
    // 0x80228FC4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228FC8: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80228FCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228FD0: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80228FD4: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x80228FD8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228FDC: jal         0x8004F820
    // 0x80228FE0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80228FE0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_0:
    // 0x80228FE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228FE8: bgez        $v0, L_80229014
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80228FEC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229014;
    }
    // 0x80228FEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228FF0: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80228FF4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228FF8: jal         0x8004F820
    // 0x80228FFC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80228FFC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x80229000: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229004: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229008: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022900C: j           L_8022902C
    // 0x80229010: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022902C;
    // 0x80229010: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80229014:
    // 0x80229014: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80229018: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022901C: jal         0x8004F820
    // 0x80229020: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80229020: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80229024: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229028: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022902C:
    // 0x8022902C: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
    // 0x80229030: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x80229034: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x80229038: sw          $zero, 0x184($s3)
    MEM_W(0X184, ctx->r19) = 0;
    // 0x8022903C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80229040: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x80229044: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x80229048: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    // 0x8022904C: lh          $v0, 0x180($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X180);
    // 0x80229050: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x80229054: addiu       $s0, $s0, -0x5340
    ctx->r16 = ADD32(ctx->r16, -0X5340);
    // 0x80229058: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x8022905C: lh          $v0, 0x182($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X182);
    // 0x80229060: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x80229064: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229068: sw          $v0, -0x533C($at)
    MEM_W(-0X533C, ctx->r1) = ctx->r2;
    // 0x8022906C: lh          $v0, 0x184($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X184);
    // 0x80229070: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x80229074: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229078: sw          $v0, -0x5338($at)
    MEM_W(-0X5338, ctx->r1) = ctx->r2;
    // 0x8022907C: jal         0x8004EC38
    // 0x80229080: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x80229080: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x80229084: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229088: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022908C: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x80229090: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80229094: jal         0x80034FCC
    // 0x80229098: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_4;
    // 0x80229098: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_4:
    // 0x8022909C: j           L_802290A8
    // 0x802290A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802290A8;
    // 0x802290A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802290A4:
    // 0x802290A4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802290A8:
    // 0x802290A8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802290AC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802290B0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802290B4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802290B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802290BC: jr          $ra
    // 0x802290C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802290C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80226600_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226600: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x80226604: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226608: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022660C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226610: bne         $v0, $zero, L_8022661C
    if (ctx->r2 != 0) {
        // 0x80226614: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022661C;
    }
    // 0x80226614: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226618: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022661C:
    // 0x8022661C: jr          $ra
    // 0x80226620: nop

    TRACE_RETURN()
    return;
    // 0x80226620: nop

;}
RECOMP_FUNC void func_8022861C_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022861C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228620: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228624: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228628: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022862C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228630: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228634: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80228638: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022863C: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80228640: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80228644: beq         $v0, $zero, L_8022878C
    if (ctx->r2 == 0) {
        // 0x80228648: addiu       $a0, $s0, 0x348
        ctx->r4 = ADD32(ctx->r16, 0X348);
            goto L_8022878C;
    }
    // 0x80228648: addiu       $a0, $s0, 0x348
    ctx->r4 = ADD32(ctx->r16, 0X348);
    // 0x8022864C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80228650: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228654: addu        $at, $at, $v0
    gpr jr_addend_8022865C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80228658: lw          $v0, -0x53B0($at)
    ctx->r2 = ADD32(ctx->r1, -0X53B0);
    // 0x8022865C: jr          $v0
    // 0x80228660: nop

    switch (jr_addend_8022865C >> 2) {
        case 0: goto L_80228664; break;
        case 1: goto L_80228678; break;
        case 2: goto L_80228694; break;
        case 3: goto L_80228710; break;
        case 4: goto L_80228734; break;
        default: switch_error(__func__, 0x8022865C, 0x8022AC50);
    }
    // 0x80228660: nop

L_80228664:
    // 0x80228664: jal         0x802287B8
    // 0x80228668: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802287B8_ovl17(rdram, ctx);
        goto after_0;
    // 0x80228668: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022866C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80228670: j           L_80228788
    // 0x80228674: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80228788;
    // 0x80228674: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80228678:
    // 0x80228678: jal         0x80228860
    // 0x8022867C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80228860_ovl17(rdram, ctx);
        goto after_1;
    // 0x8022867C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80228680: beq         $v0, $zero, L_80228790
    if (ctx->r2 == 0) {
        // 0x80228684: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228790;
    }
    // 0x80228684: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228688: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022868C: j           L_80228788
    // 0x80228690: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80228788;
    // 0x80228690: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80228694:
    // 0x80228694: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228698: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022869C: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x802286A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802286A4: jal         0x8004F820
    // 0x802286A8: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802286A8: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_2:
    // 0x802286AC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802286B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802286B4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802286B8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802286BC: bne         $v0, $zero, L_8022878C
    if (ctx->r2 != 0) {
        // 0x802286C0: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022878C;
    }
    // 0x802286C0: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802286C4: jal         0x8003516C
    // 0x802286C8: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_3;
    // 0x802286C8: nop

    after_3:
    // 0x802286CC: bne         $v0, $zero, L_80228790
    if (ctx->r2 != 0) {
        // 0x802286D0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228790;
    }
    // 0x802286D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802286D4: jal         0x8022898C
    // 0x802286D8: nop

    func_8022898C_ovl17(rdram, ctx);
        goto after_4;
    // 0x802286D8: nop

    after_4:
    // 0x802286DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802286E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802286E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802286E8: jal         0x800610AC
    // 0x802286EC: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_5;
    // 0x802286EC: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    after_5:
    // 0x802286F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802286F4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802286F8: jal         0x80050294
    // 0x802286FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x802286FC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80228700: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80228704: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80228708: j           L_80228788
    // 0x8022870C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80228788;
    // 0x8022870C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80228710:
    // 0x80228710: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80228714: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80228718: bne         $v0, $zero, L_80228790
    if (ctx->r2 != 0) {
        // 0x8022871C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228790;
    }
    // 0x8022871C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228720: jal         0x80034E3C
    // 0x80228724: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_7;
    // 0x80228724: nop

    after_7:
    // 0x80228728: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022872C: j           L_80228788
    // 0x80228730: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80228788;
    // 0x80228730: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80228734:
    // 0x80228734: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    // 0x80228738: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022873C: jal         0x8004FA7C
    // 0x80228740: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_8;
    // 0x80228740: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_8:
    // 0x80228744: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80228748: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022874C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228750: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228754: bne         $v0, $zero, L_8022878C
    if (ctx->r2 != 0) {
        // 0x80228758: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022878C;
    }
    // 0x80228758: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022875C: jal         0x8003516C
    // 0x80228760: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_9;
    // 0x80228760: nop

    after_9:
    // 0x80228764: bne         $v0, $zero, L_80228790
    if (ctx->r2 != 0) {
        // 0x80228768: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228790;
    }
    // 0x80228768: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022876C: lbu         $v0, 0xBD($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XBD);
    // 0x80228770: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x80228774: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80228778: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022877C: sb          $v0, 0xBD($s2)
    MEM_B(0XBD, ctx->r18) = ctx->r2;
    // 0x80228780: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228784: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
L_80228788:
    // 0x80228788: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022878C:
    // 0x8022878C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80228790:
    // 0x80228790: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80228794: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80228798: jal         0x80047284
    // 0x8022879C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x8022879C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
    // 0x802287A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802287A4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802287A8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802287AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802287B0: jr          $ra
    // 0x802287B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802287B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225784_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225784: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225788: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022578C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225790: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225794: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225798: bne         $v0, $zero, L_802257B4
    if (ctx->r2 != 0) {
        // 0x8022579C: nop
    
            goto L_802257B4;
    }
    // 0x8022579C: nop

    // 0x802257A0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802257A4: jal         0x800607C4
    // 0x802257A8: addiu       $a0, $a0, -0x5CE4
    ctx->r4 = ADD32(ctx->r4, -0X5CE4);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802257A8: addiu       $a0, $a0, -0x5CE4
    ctx->r4 = ADD32(ctx->r4, -0X5CE4);
    after_0:
    // 0x802257AC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802257B0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802257B4:
    // 0x802257B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802257B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802257BC: jr          $ra
    // 0x802257C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802257C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225CDC_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225CDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225CE0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225CE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225CE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225CEC: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225CF0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225CF4: beq         $v0, $zero, L_80225D18
    if (ctx->r2 == 0) {
        // 0x80225CF8: nop
    
            goto L_80225D18;
    }
    // 0x80225CF8: nop

    // 0x80225CFC: bltz        $v1, L_80225D18
    if (SIGNED(ctx->r3) < 0) {
        // 0x80225D00: nop
    
            goto L_80225D18;
    }
    // 0x80225D00: nop

    // 0x80225D04: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225D08: jal         0x800607C4
    // 0x80225D0C: addiu       $a0, $a0, -0x5C84
    ctx->r4 = ADD32(ctx->r4, -0X5C84);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225D0C: addiu       $a0, $a0, -0x5C84
    ctx->r4 = ADD32(ctx->r4, -0X5C84);
    after_0:
    // 0x80225D10: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225D14: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225D18:
    // 0x80225D18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225D1C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225D20: jr          $ra
    // 0x80225D24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225D24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227370_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227370: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x80227374: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227378: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022737C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227380: bne         $v0, $zero, L_8022738C
    if (ctx->r2 != 0) {
        // 0x80227384: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022738C;
    }
    // 0x80227384: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227388: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022738C:
    // 0x8022738C: jr          $ra
    // 0x80227390: nop

    TRACE_RETURN()
    return;
    // 0x80227390: nop

;}
RECOMP_FUNC void func_80225348_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225348: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022534C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225350: jal         0x8006033C
    // 0x80225354: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225354: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_0:
    // 0x80225358: bne         $v0, $zero, L_80225384
    if (ctx->r2 != 0) {
        // 0x8022535C: nop
    
            goto L_80225384;
    }
    // 0x8022535C: nop

    // 0x80225360: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225364: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80225368: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022536C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225370: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225374: lw          $v0, -0x6750($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6750);
    // 0x80225378: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x8022537C: jalr        $v0
    // 0x80225380: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80225380: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_1:
L_80225384:
    // 0x80225384: jal         0x8006033C
    // 0x80225388: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80225388: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_2:
    // 0x8022538C: beq         $v0, $zero, L_802253CC
    if (ctx->r2 == 0) {
        // 0x80225390: nop
    
            goto L_802253CC;
    }
    // 0x80225390: nop

    // 0x80225394: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225398: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x8022539C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802253A0: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x802253A4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802253A8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802253AC: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x802253B0: lw          $v1, -0x6790($at)
    ctx->r3 = MEM_W(ctx->r1, -0X6790);
    // 0x802253B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802253B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802253BC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802253C0: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x802253C4: jalr        $v0
    // 0x802253C8: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802253C8: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_3:
L_802253CC:
    // 0x802253CC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802253D0: jr          $ra
    // 0x802253D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802253D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226A10_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226A10: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226A14: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226A18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226A1C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226A20: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80226A24: addiu       $s1, $s1, -0x556C
    ctx->r17 = ADD32(ctx->r17, -0X556C);
    // 0x80226A28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226A2C: jal         0x800A3450
    // 0x80226A30: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80226A30: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x80226A34: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80226A38: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80226A3C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80226A40: lbu         $v1, -0x557C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X557C);
    // 0x80226A44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226A48: beq         $v1, $v0, L_80226AE8
    if (ctx->r3 == ctx->r2) {
        // 0x80226A4C: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_80226AE8;
    }
    // 0x80226A4C: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x80226A50: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80226A54: beql        $v0, $zero, L_80226A6C
    if (ctx->r2 == 0) {
        // 0x80226A58: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226A6C;
    }
    goto skip_0;
    // 0x80226A58: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80226A5C: beq         $v1, $zero, L_80226A7C
    if (ctx->r3 == 0) {
        // 0x80226A60: nop
    
            goto L_80226A7C;
    }
    // 0x80226A60: nop

    // 0x80226A64: j           L_80226B34
    // 0x80226A68: nop

        goto L_80226B34;
    // 0x80226A68: nop

L_80226A6C:
    // 0x80226A6C: beq         $v1, $v0, L_80226B08
    if (ctx->r3 == ctx->r2) {
        // 0x80226A70: nop
    
            goto L_80226B08;
    }
    // 0x80226A70: nop

    // 0x80226A74: j           L_80226B34
    // 0x80226A78: nop

        goto L_80226B34;
    // 0x80226A78: nop

L_80226A7C:
    // 0x80226A7C: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x80226A80: bne         $v0, $zero, L_80226A94
    if (ctx->r2 != 0) {
        // 0x80226A84: nop
    
            goto L_80226A94;
    }
    // 0x80226A84: nop

    // 0x80226A88: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226A8C: j           L_80226A9C
    // 0x80226A90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80226A9C;
    // 0x80226A90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80226A94:
    // 0x80226A94: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226A98: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_80226A9C:
    // 0x80226A9C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226AA0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80226AA4: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80226AA8: beq         $v0, $zero, L_80226AC4
    if (ctx->r2 == 0) {
        // 0x80226AAC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226AC4;
    }
    // 0x80226AAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226AB0: jal         0x80228478
    // 0x80226AB4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80228478_ovl17(rdram, ctx);
        goto after_1;
    // 0x80226AB4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80226AB8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80226ABC: j           L_80226AD8
    // 0x80226AC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80226AD8;
    // 0x80226AC0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80226AC4:
    // 0x80226AC4: jal         0x80228478
    // 0x80226AC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80228478_ovl17(rdram, ctx);
        goto after_2;
    // 0x80226AC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80226ACC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226AD0: jal         0x80228438
    // 0x80226AD4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_80228438_ovl17(rdram, ctx);
        goto after_3;
    // 0x80226AD4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_3:
L_80226AD8:
    // 0x80226AD8: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x80226ADC: addiu       $s1, $s1, -0x556C
    ctx->r17 = ADD32(ctx->r17, -0X556C);
    // 0x80226AE0: j           L_80226B34
    // 0x80226AE4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80226B34;
    // 0x80226AE4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_80226AE8:
    // 0x80226AE8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226AEC: jal         0x80228428
    // 0x80226AF0: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    func_80228428_ovl17(rdram, ctx);
        goto after_4;
    // 0x80226AF0: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    after_4:
    // 0x80226AF4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226AF8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226AFC: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x80226B00: j           L_80226B34
    // 0x80226B04: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_80226B34;
    // 0x80226B04: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80226B08:
    // 0x80226B08: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80226B0C: jal         0x80228438
    // 0x80226B10: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    func_80228438_ovl17(rdram, ctx);
        goto after_5;
    // 0x80226B10: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    after_5:
    // 0x80226B14: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80226B18: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80226B1C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226B20: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x80226B24: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80226B28: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80226B2C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
    // 0x80226B30: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226B34:
    // 0x80226B34: jal         0x800A3450
    // 0x80226B38: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x80226B38: nop

    after_6:
    // 0x80226B3C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80226B40: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x80226B44: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x80226B48: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x80226B4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226B50: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226B54: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226B58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226B5C: jr          $ra
    // 0x80226B60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226B60: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225570_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225570: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225574: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225578: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022557C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225580: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225584: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225588: beq         $v0, $zero, L_802255AC
    if (ctx->r2 == 0) {
        // 0x8022558C: nop
    
            goto L_802255AC;
    }
    // 0x8022558C: nop

    // 0x80225590: bltz        $v1, L_802255AC
    if (SIGNED(ctx->r3) < 0) {
        // 0x80225594: nop
    
            goto L_802255AC;
    }
    // 0x80225594: nop

    // 0x80225598: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022559C: jal         0x800607C4
    // 0x802255A0: addiu       $a0, $a0, -0x5CD4
    ctx->r4 = ADD32(ctx->r4, -0X5CD4);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802255A0: addiu       $a0, $a0, -0x5CD4
    ctx->r4 = ADD32(ctx->r4, -0X5CD4);
    after_0:
    // 0x802255A4: addiu       $v0, $zero, 0xE1
    ctx->r2 = ADD32(0, 0XE1);
    // 0x802255A8: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802255AC:
    // 0x802255AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802255B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802255B4: jr          $ra
    // 0x802255B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802255B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227FFC_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227FFC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80228000: lb          $v1, -0x3C18($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3C18);
    // 0x80228004: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228008: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022800C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228010: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228014: bne         $v1, $v0, L_8022803C
    if (ctx->r3 != ctx->r2) {
        // 0x80228018: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022803C;
    }
    // 0x80228018: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022801C: jal         0x80061724
    // 0x80228020: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_0;
    // 0x80228020: nop

    after_0:
    // 0x80228024: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80228028: jal         0x800616FC
    // 0x8022802C: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_1;
    // 0x8022802C: addiu       $a1, $zero, 0xDC
    ctx->r5 = ADD32(0, 0XDC);
    after_1:
    // 0x80228030: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x80228034: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228038: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022803C:
    // 0x8022803C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80228040: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228044: jr          $ra
    // 0x80228048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226624_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226624: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226628: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022662C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226630: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226634: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80226638: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022663C: jal         0x8004FA7C
    // 0x80226640: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80226640: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80226644: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x80226648: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8022664C: bne         $v0, $zero, L_80226678
    if (ctx->r2 != 0) {
        // 0x80226650: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226678;
    }
    // 0x80226650: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226654: lhu         $a0, 0x35C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X35C);
    // 0x80226658: lhu         $v1, 0x366($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X366);
    // 0x8022665C: lhu         $a1, 0x35E($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X35E);
    // 0x80226660: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80226664: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226668: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022666C: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80226670: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
    // 0x80226674: sh          $v1, 0x35E($s0)
    MEM_H(0X35E, ctx->r16) = ctx->r3;
L_80226678:
    // 0x80226678: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022667C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80226680: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80226684: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80226688: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022668C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226690: jr          $ra
    // 0x80226694: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226694: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227430_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227434: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227438: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022743C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227440: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x80227444: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80227448: jal         0x8004FA7C
    // 0x8022744C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022744C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x80227450: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80227454: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x80227458: bne         $v0, $zero, L_80227468
    if (ctx->r2 != 0) {
        // 0x8022745C: nop
    
            goto L_80227468;
    }
    // 0x8022745C: nop

    // 0x80227460: lhu         $v0, 0x366($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X366);
    // 0x80227464: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227468:
    // 0x80227468: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022746C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227470: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227474: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80227478: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022747C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227480: jr          $ra
    // 0x80227484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227484: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226E08_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E08: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x80226E0C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226E10: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x80226E14: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226E18: bne         $v0, $zero, L_80226E24
    if (ctx->r2 != 0) {
        // 0x80226E1C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226E24;
    }
    // 0x80226E1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226E20: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80226E24:
    // 0x80226E24: jr          $ra
    // 0x80226E28: nop

    TRACE_RETURN()
    return;
    // 0x80226E28: nop

;}
RECOMP_FUNC void func_80227744_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227744: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227748: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022774C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227750: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227754: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227758: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022775C: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80227760: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    // 0x80227764: jal         0x8004FA7C
    // 0x80227768: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80227768: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022776C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80227770: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x80227774: beq         $v0, $zero, L_80227808
    if (ctx->r2 == 0) {
        // 0x80227778: nop
    
            goto L_80227808;
    }
    // 0x80227778: nop

    // 0x8022777C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227780: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80227784: bne         $v0, $zero, L_80227808
    if (ctx->r2 != 0) {
        // 0x80227788: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80227808;
    }
    // 0x80227788: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022778C: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x80227790: beq         $v1, $v0, L_802277A8
    if (ctx->r3 == ctx->r2) {
        // 0x80227794: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802277A8;
    }
    // 0x80227794: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80227798: beq         $v1, $v0, L_802277D8
    if (ctx->r3 == ctx->r2) {
        // 0x8022779C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802277D8;
    }
    // 0x8022779C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802277A0: j           L_802277FC
    // 0x802277A4: nop

        goto L_802277FC;
    // 0x802277A4: nop

L_802277A8:
    // 0x802277A8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802277AC: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x802277B0: bne         $v0, $zero, L_802277FC
    if (ctx->r2 != 0) {
        // 0x802277B4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802277FC;
    }
    // 0x802277B4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802277B8: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x802277BC: bne         $v0, $zero, L_802277FC
    if (ctx->r2 != 0) {
        // 0x802277C0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802277FC;
    }
    // 0x802277C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802277C4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802277C8: bne         $v1, $v0, L_802277FC
    if (ctx->r3 != ctx->r2) {
        // 0x802277CC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802277FC;
    }
    // 0x802277CC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802277D0: j           L_802277FC
    // 0x802277D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802277FC;
    // 0x802277D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802277D8:
    // 0x802277D8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802277DC: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x802277E0: beq         $v0, $zero, L_802277F8
    if (ctx->r2 == 0) {
        // 0x802277E4: slti        $v0, $v1, 0x4
        ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
            goto L_802277F8;
    }
    // 0x802277E4: slti        $v0, $v1, 0x4
    ctx->r2 = SIGNED(ctx->r3) < 0X4 ? 1 : 0;
    // 0x802277E8: bne         $v0, $zero, L_802277FC
    if (ctx->r2 != 0) {
        // 0x802277EC: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802277FC;
    }
    // 0x802277EC: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x802277F0: j           L_802277FC
    // 0x802277F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802277FC;
    // 0x802277F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802277F8:
    // 0x802277F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802277FC:
    // 0x802277FC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227800: beq         $v0, $zero, L_8022782C
    if (ctx->r2 == 0) {
        // 0x80227804: nop
    
            goto L_8022782C;
    }
    // 0x80227804: nop

L_80227808:
    // 0x80227808: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x8022780C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227810: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80227814: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80227818: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022781C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227820: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80227824: j           L_8022783C
    // 0x80227828: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022783C;
    // 0x80227828: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022782C:
    // 0x8022782C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227830: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80227834: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80227838: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022783C:
    // 0x8022783C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227840: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227844: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227848: jr          $ra
    // 0x8022784C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022784C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225EB0_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225EB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225EB4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225EB8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80225EBC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225EC0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225EC4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225EC8: lw          $v0, -0x56B4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X56B4);
    // 0x80225ECC: jalr        $v0
    // 0x80225ED0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225ED0: nop

    after_0:
    // 0x80225ED4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80225ED8: jr          $ra
    // 0x80225EDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225EDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228140_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228140: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80228144: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228148: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022814C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228150: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80228154: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228158: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022815C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80228160: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x80228164: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80228168: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022816C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80228170: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80228174: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x80228178: lhu         $t0, 0x56($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X56);
    // 0x8022817C: lbu         $t1, 0xAC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XAC);
    // 0x80228180: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80228184: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80228188: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022818C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80228190: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x80228194: sh          $t0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r8;
    // 0x80228198: jal         0x8004F820
    // 0x8022819C: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022819C: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    after_0:
    // 0x802281A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802281A4: bgez        $v0, L_802281D4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802281A8: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_802281D4;
    }
    // 0x802281A8: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x802281AC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802281B0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802281B4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802281B8: jal         0x8004F820
    // 0x802281BC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802281BC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x802281C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802281C4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802281C8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802281CC: j           L_802281F0
    // 0x802281D0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_802281F0;
    // 0x802281D0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_802281D4:
    // 0x802281D4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802281D8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802281DC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802281E0: jal         0x8004F820
    // 0x802281E4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802281E4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x802281E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802281EC: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_802281F0:
    // 0x802281F0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802281F4: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x802281F8: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x802281FC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80228200: jal         0x800610AC
    // 0x80228204: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_3;
    // 0x80228204: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80228208: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022820C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80228210: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228214: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228218: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022821C: jr          $ra
    // 0x80228220: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80228220: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80227B64_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227B64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227B68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227B6C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227B70: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80227B74: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80227B78: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227B7C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227B80: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227B84: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x80227B88: addiu       $a1, $zero, 0xFA
    ctx->r5 = ADD32(0, 0XFA);
    // 0x80227B8C: addiu       $a2, $zero, 0xC8
    ctx->r6 = ADD32(0, 0XC8);
    // 0x80227B90: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    // 0x80227B94: jal         0x802284C4
    // 0x80227B98: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    func_802284C4_ovl17(rdram, ctx);
        goto after_0;
    // 0x80227B98: sb          $v1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r3;
    after_0:
    // 0x80227B9C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80227BA0: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80227BA4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80227BA8: beq         $v0, $zero, L_80227C3C
    if (ctx->r2 == 0) {
        // 0x80227BAC: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80227C3C;
    }
    // 0x80227BAC: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80227BB0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x80227BB4: jal         0x80228428
    // 0x80227BB8: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    func_80228428_ovl17(rdram, ctx);
        goto after_1;
    // 0x80227BB8: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80227BBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227BC0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227BC4: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x80227BC8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227BCC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80227BD0: jal         0x8004F820
    // 0x80227BD4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80227BD4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_2:
    // 0x80227BD8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227BDC: bgez        $v0, L_80227C08
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227BE0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80227C08;
    }
    // 0x80227BE0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227BE4: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227BE8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227BEC: jal         0x8004F820
    // 0x80227BF0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80227BF0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x80227BF4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227BF8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227BFC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80227C00: j           L_80227C20
    // 0x80227C04: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_80227C20;
    // 0x80227C04: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_80227C08:
    // 0x80227C08: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227C0C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227C10: jal         0x8004F820
    // 0x80227C14: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x80227C14: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_4:
    // 0x80227C18: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227C1C: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_80227C20:
    // 0x80227C20: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x80227C24: sh          $v1, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r3;
    // 0x80227C28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227C2C: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x80227C30: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80227C34: j           L_80227C84
    // 0x80227C38: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
        goto L_80227C84;
    // 0x80227C38: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80227C3C:
    // 0x80227C3C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227C40: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227C44: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x80227C48: jal         0x8004F820
    // 0x80227C4C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x80227C4C: addiu       $a3, $zero, 0x20
    ctx->r7 = ADD32(0, 0X20);
    after_5:
    // 0x80227C50: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227C54: slt         $v0, $zero, $v0
    ctx->r2 = SIGNED(0) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80227C58: beq         $v0, $zero, L_80227C68
    if (ctx->r2 == 0) {
        // 0x80227C5C: sh          $v0, 0x34E($s0)
        MEM_H(0X34E, ctx->r16) = ctx->r2;
            goto L_80227C68;
    }
    // 0x80227C5C: sh          $v0, 0x34E($s0)
    MEM_H(0X34E, ctx->r16) = ctx->r2;
    // 0x80227C60: j           L_80227C6C
    // 0x80227C64: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_80227C6C;
    // 0x80227C64: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80227C68:
    // 0x80227C68: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_80227C6C:
    // 0x80227C6C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227C70: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227C74: sb          $v0, 0x3($s3)
    MEM_B(0X3, ctx->r19) = ctx->r2;
    // 0x80227C78: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80227C7C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227C80: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80227C84:
    // 0x80227C84: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227C88: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227C8C: jal         0x800610AC
    // 0x80227C90: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    func_800610AC_3C4AC(rdram, ctx);
        goto after_6;
    // 0x80227C90: andi        $a3, $v0, 0xFF
    ctx->r7 = ctx->r2 & 0XFF;
    after_6:
    // 0x80227C94: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80227C98: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80227C9C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227CA0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227CA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227CA8: jr          $ra
    // 0x80227CAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80227CAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802256A4_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802256A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802256A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802256AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802256B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802256B4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802256B8: bne         $v0, $zero, L_802256D4
    if (ctx->r2 != 0) {
        // 0x802256BC: nop
    
            goto L_802256D4;
    }
    // 0x802256BC: nop

    // 0x802256C0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802256C4: jal         0x800607C4
    // 0x802256C8: addiu       $a0, $a0, -0x5D1C
    ctx->r4 = ADD32(ctx->r4, -0X5D1C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802256C8: addiu       $a0, $a0, -0x5D1C
    ctx->r4 = ADD32(ctx->r4, -0X5D1C);
    after_0:
    // 0x802256CC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802256D0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802256D4:
    // 0x802256D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802256D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802256DC: jr          $ra
    // 0x802256E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802256E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226074_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226074: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226078: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022607C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226080: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226084: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226088: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022608C: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80226090: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226094: lhu         $a2, 0x368($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X368);
    // 0x80226098: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022609C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802260A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802260A4: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802260A8: addiu       $v1, $v1, -0x5C10
    ctx->r3 = ADD32(ctx->r3, -0X5C10);
    // 0x802260AC: jal         0x802284C4
    // 0x802260B0: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    func_802284C4_ovl17(rdram, ctx);
        goto after_0;
    // 0x802260B0: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    after_0:
    // 0x802260B4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802260B8: beq         $v0, $zero, L_802261C8
    if (ctx->r2 == 0) {
        // 0x802260BC: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_802261C8;
    }
    // 0x802260BC: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x802260C0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802260C4: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x802260C8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802260CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802260D0: jal         0x8009A3B4
    // 0x802260D4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802260D4: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_1:
    // 0x802260D8: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802260DC: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802260E0: jal         0x8009A3B4
    // 0x802260E4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802260E4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x802260E8: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802260EC: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802260F0: jal         0x8009A3B4
    // 0x802260F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802260F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x802260F8: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x802260FC: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80226100: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80226104: beq         $v0, $zero, L_80226114
    if (ctx->r2 == 0) {
        // 0x80226108: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_80226114;
    }
    // 0x80226108: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022610C: jal         0x8022832C
    // 0x80226110: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022832C_ovl17(rdram, ctx);
        goto after_4;
    // 0x80226110: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80226114:
    // 0x80226114: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226118: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022611C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226120: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226124: lw          $v0, -0x56A8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X56A8);
    // 0x80226128: jalr        $v0
    // 0x8022612C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x8022612C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80226130: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80226134: andi        $v0, $v0, 0x20
    ctx->r2 = ctx->r2 & 0X20;
    // 0x80226138: bne         $v0, $zero, L_80226154
    if (ctx->r2 != 0) {
        // 0x8022613C: nop
    
            goto L_80226154;
    }
    // 0x8022613C: nop

    // 0x80226140: jal         0x8003E934
    // 0x80226144: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80226144: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80226148: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022614C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226150: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80226154:
    // 0x80226154: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80226158: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022615C: beq         $v0, $a1, L_80226174
    if (ctx->r2 == ctx->r5) {
        // 0x80226160: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226174;
    }
    // 0x80226160: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226164: jal         0x80050294
    // 0x80226168: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x80226168: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x8022616C: j           L_8022617C
    // 0x80226170: nop

        goto L_8022617C;
    // 0x80226170: nop

L_80226174:
    // 0x80226174: jal         0x8005044C
    // 0x80226178: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_8;
    // 0x80226178: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_8022617C:
    // 0x8022617C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80226180: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80226184: beq         $v0, $zero, L_802261A0
    if (ctx->r2 == 0) {
        // 0x80226188: nop
    
            goto L_802261A0;
    }
    // 0x80226188: nop

    // 0x8022618C: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x80226190: lw          $a2, 0x4($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X4);
    // 0x80226194: lw          $a3, 0x8($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X8);
    // 0x80226198: jal         0x8003B564
    // 0x8022619C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x8022619C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_802261A0:
    // 0x802261A0: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x802261A4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x802261A8: beq         $v0, $zero, L_802261B8
    if (ctx->r2 == 0) {
        // 0x802261AC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802261B8;
    }
    // 0x802261AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802261B0: j           L_802261BC
    // 0x802261B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_802261BC;
    // 0x802261B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_802261B8:
    // 0x802261B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_802261BC:
    // 0x802261BC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x802261C0: jal         0x80047284
    // 0x802261C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_10;
    // 0x802261C4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_802261C8:
    // 0x802261C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802261CC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802261D0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802261D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802261D8: jr          $ra
    // 0x802261DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802261DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228298_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228298: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022829C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802282A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802282A4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802282A8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802282AC: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x802282B0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802282B4: jal         0x8004FA7C
    // 0x802282B8: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802282B8: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x802282BC: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x802282C0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802282C4: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x802282C8: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802282CC: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x802282D0: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x802282D4: beq         $v1, $zero, L_80228308
    if (ctx->r3 == 0) {
        // 0x802282D8: nop
    
            goto L_80228308;
    }
    // 0x802282D8: nop

    // 0x802282DC: jal         0x80228428
    // 0x802282E0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_80228428_ovl17(rdram, ctx);
        goto after_1;
    // 0x802282E0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_1:
    // 0x802282E4: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x802282E8: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x802282EC: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x802282F0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802282F4: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x802282F8: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x802282FC: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80228300: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x80228304: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_80228308:
    // 0x80228308: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022830C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80228310: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228314: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80228318: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022831C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228320: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228324: jr          $ra
    // 0x80228328: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228328: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802254B8_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802254B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802254BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802254C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802254C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802254C8: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x802254CC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802254D0: beq         $v0, $zero, L_802254F4
    if (ctx->r2 == 0) {
        // 0x802254D4: nop
    
            goto L_802254F4;
    }
    // 0x802254D4: nop

    // 0x802254D8: bltz        $v1, L_802254F4
    if (SIGNED(ctx->r3) < 0) {
        // 0x802254DC: nop
    
            goto L_802254F4;
    }
    // 0x802254DC: nop

    // 0x802254E0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802254E4: jal         0x800607C4
    // 0x802254E8: addiu       $a0, $a0, -0x5CEC
    ctx->r4 = ADD32(ctx->r4, -0X5CEC);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802254E8: addiu       $a0, $a0, -0x5CEC
    ctx->r4 = ADD32(ctx->r4, -0X5CEC);
    after_0:
    // 0x802254EC: addiu       $v0, $zero, 0xE1
    ctx->r2 = ADD32(0, 0XE1);
    // 0x802254F0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
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
RECOMP_FUNC void func_80227394_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227394: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227398: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022739C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802273A0: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x802273A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802273A8: jal         0x802284C4
    // 0x802273AC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_802284C4_ovl17(rdram, ctx);
        goto after_0;
    // 0x802273AC: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x802273B0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802273B4: beq         $v0, $zero, L_802273E0
    if (ctx->r2 == 0) {
        // 0x802273B8: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_802273E0;
    }
    // 0x802273B8: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x802273BC: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x802273C0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802273C4: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802273C8: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x802273CC: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x802273D0: jal         0x80228428
    // 0x802273D4: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    func_80228428_ovl17(rdram, ctx);
        goto after_1;
    // 0x802273D4: sh          $a1, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r5;
    after_1:
    // 0x802273D8: j           L_80227420
    // 0x802273DC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_80227420;
    // 0x802273DC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_802273E0:
    // 0x802273E0: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x802273E4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802273E8: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x802273EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802273F0: bne         $v0, $zero, L_80227400
    if (ctx->r2 != 0) {
        // 0x802273F4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227400;
    }
    // 0x802273F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802273F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802273FC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227400:
    // 0x80227400: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80227404: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227408: jal         0x8004DA90
    // 0x8022740C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022740C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80227410: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227414: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80227418: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022741C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80227420:
    // 0x80227420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227424: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227428: jr          $ra
    // 0x8022742C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022742C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225C50_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225C54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225C58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225C5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225C60: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x80225C64: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80225C68: beq         $v0, $zero, L_80225C8C
    if (ctx->r2 == 0) {
        // 0x80225C6C: nop
    
            goto L_80225C8C;
    }
    // 0x80225C6C: nop

    // 0x80225C70: bltz        $v1, L_80225C8C
    if (SIGNED(ctx->r3) < 0) {
        // 0x80225C74: nop
    
            goto L_80225C8C;
    }
    // 0x80225C74: nop

    // 0x80225C78: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225C7C: jal         0x800607C4
    // 0x80225C80: addiu       $a0, $a0, -0x5CB4
    ctx->r4 = ADD32(ctx->r4, -0X5CB4);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225C80: addiu       $a0, $a0, -0x5CB4
    ctx->r4 = ADD32(ctx->r4, -0X5CB4);
    after_0:
    // 0x80225C84: addiu       $v0, $zero, 0xE1
    ctx->r2 = ADD32(0, 0XE1);
    // 0x80225C88: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225C8C:
    // 0x80225C8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225C90: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225C94: jr          $ra
    // 0x80225C98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225C98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802255C4_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802255C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802255C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802255CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802255D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802255D4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802255D8: bne         $v0, $zero, L_802255F4
    if (ctx->r2 != 0) {
        // 0x802255DC: nop
    
            goto L_802255F4;
    }
    // 0x802255DC: nop

    // 0x802255E0: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802255E4: jal         0x800607C4
    // 0x802255E8: addiu       $a0, $a0, -0x5D1C
    ctx->r4 = ADD32(ctx->r4, -0X5D1C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x802255E8: addiu       $a0, $a0, -0x5D1C
    ctx->r4 = ADD32(ctx->r4, -0X5D1C);
    after_0:
    // 0x802255EC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802255F0: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802255F4:
    // 0x802255F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802255F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802255FC: jr          $ra
    // 0x80225600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802269AC_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802269AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802269B0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802269B4: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802269B8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802269BC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802269C0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802269C4: lw          $v0, -0x5598($at)
    ctx->r2 = MEM_W(ctx->r1, -0X5598);
    // 0x802269C8: jalr        $v0
    // 0x802269CC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802269CC: nop

    after_0:
    // 0x802269D0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802269D4: jr          $ra
    // 0x802269D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802269D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022804C_ovl17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022804C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228050: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228054: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228058: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022805C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228060: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228064: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x80228068: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022806C: jal         0x8004FA7C
    // 0x80228070: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x80228070: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x80228074: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80228078: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022807C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80228080: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x80228084: beq         $v0, $zero, L_8022809C
    if (ctx->r2 == 0) {
        // 0x80228088: nop
    
            goto L_8022809C;
    }
    // 0x80228088: nop

    // 0x8022808C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80228090: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80228094: beq         $v0, $zero, L_802280E8
    if (ctx->r2 == 0) {
        // 0x80228098: nop
    
            goto L_802280E8;
    }
    // 0x80228098: nop

L_8022809C:
    // 0x8022809C: jal         0x8003516C
    // 0x802280A0: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x802280A0: nop

    after_1:
    // 0x802280A4: bne         $v0, $zero, L_802280E8
    if (ctx->r2 != 0) {
        // 0x802280A8: nop
    
            goto L_802280E8;
    }
    // 0x802280A8: nop

    // 0x802280AC: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x802280B0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802280B4: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x802280B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802280BC: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x802280C0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802280C4: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x802280C8: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x802280CC: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x802280D0: lbu         $a0, 0x34A($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X34A);
    // 0x802280D4: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802280D8: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x802280DC: sb          $a0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r4;
    // 0x802280E0: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x802280E4: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_802280E8:
    // 0x802280E8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x802280EC: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x802280F0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802280F4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802280F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802280FC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228100: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228104: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228108: jr          $ra
    // 0x8022810C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022810C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
