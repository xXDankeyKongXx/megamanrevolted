#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8006F5E0_4A9E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006F5E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8006F5E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8006F5E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8006F5EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8006F5F0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8006F5F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8006F5F8: beq         $v1, $v0, L_8006F670
    if (ctx->r3 == ctx->r2) {
        // 0x8006F5FC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8006F670;
    }
    // 0x8006F5FC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8006F600: beql        $v0, $zero, L_8006F618
    if (ctx->r2 == 0) {
        // 0x8006F604: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8006F618;
    }
    goto skip_0;
    // 0x8006F604: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8006F608: beq         $v1, $zero, L_8006F630
    if (ctx->r3 == 0) {
        // 0x8006F60C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8006F630;
    }
    // 0x8006F60C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006F610: j           L_8006F670
    // 0x8006F614: nop

        goto L_8006F670;
    // 0x8006F614: nop

L_8006F618:
    // 0x8006F618: beq         $v1, $v0, L_8006F638
    if (ctx->r3 == ctx->r2) {
        // 0x8006F61C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8006F638;
    }
    // 0x8006F61C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8006F620: beq         $v1, $v0, L_8006F65C
    if (ctx->r3 == ctx->r2) {
        // 0x8006F624: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_8006F65C;
    }
    // 0x8006F624: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8006F628: j           L_8006F670
    // 0x8006F62C: nop

        goto L_8006F670;
    // 0x8006F62C: nop

L_8006F630:
    // 0x8006F630: j           L_8006F640
    // 0x8006F634: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
        goto L_8006F640;
    // 0x8006F634: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
L_8006F638:
    // 0x8006F638: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8006F63C: addiu       $a1, $zero, 0x31
    ctx->r5 = ADD32(0, 0X31);
L_8006F640:
    // 0x8006F640: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8006F644: jal         0x8006FB90
    // 0x8006F648: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8006FB90_4AF90(rdram, ctx);
        goto after_0;
    // 0x8006F648: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8006F64C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8006F650: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8006F654: j           L_8006F670
    // 0x8006F658: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8006F670;
    // 0x8006F658: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8006F65C:
    // 0x8006F65C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8006F660: bne         $v1, $v0, L_8006F670
    if (ctx->r3 != ctx->r2) {
        // 0x8006F664: nop
    
            goto L_8006F670;
    }
    // 0x8006F664: nop

    // 0x8006F668: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8006F66C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8006F670:
    // 0x8006F670: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8006F674: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8006F678: jr          $ra
    // 0x8006F67C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8006F67C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8005C820_37C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005C820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005C824: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005C828: lui         $s0, 0x801C
    ctx->r16 = S32(0X801C << 16);
    // 0x8005C82C: addiu       $s0, $s0, -0x3E3E
    ctx->r16 = ADD32(ctx->r16, -0X3E3E);
    // 0x8005C830: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005C834: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8005C838: beq         $v1, $zero, L_8005C850
    if (ctx->r3 == 0) {
        // 0x8005C83C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8005C850;
    }
    // 0x8005C83C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8005C840: beq         $v1, $v0, L_8005C868
    if (ctx->r3 == ctx->r2) {
        // 0x8005C844: nop
    
            goto L_8005C868;
    }
    // 0x8005C844: nop

    // 0x8005C848: j           L_8005C880
    // 0x8005C84C: nop

        goto L_8005C880;
    // 0x8005C84C: nop

L_8005C850:
    // 0x8005C850: jal         0x800755D4
    // 0x8005C854: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800755D4_509D4(rdram, ctx);
        goto after_0;
    // 0x8005C854: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8005C858: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8005C85C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005C860: j           L_8005C880
    // 0x8005C864: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
        goto L_8005C880;
    // 0x8005C864: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
L_8005C868:
    // 0x8005C868: jal         0x80061724
    // 0x8005C86C: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_1;
    // 0x8005C86C: nop

    after_1:
    // 0x8005C870: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005C874: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8005C878: sb          $v0, -0x3E3F($at)
    MEM_B(-0X3E3F, ctx->r1) = ctx->r2;
    // 0x8005C87C: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_8005C880:
    // 0x8005C880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005C884: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8005C888: jr          $ra
    // 0x8005C88C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005C88C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8003B3F8_167F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003B3F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8003B3FC: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x8003B400: lbu         $fp, 0x4B($sp)
    ctx->r30 = MEM_BU(ctx->r29, 0X4B);
    // 0x8003B404: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8003B408: lui         $s2, 0x801B
    ctx->r18 = S32(0X801B << 16);
    // 0x8003B40C: lw          $s2, -0x6F9C($s2)
    ctx->r18 = MEM_W(ctx->r18, -0X6F9C);
    // 0x8003B410: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8003B414: lbu         $s6, 0x4F($sp)
    ctx->r22 = MEM_BU(ctx->r29, 0X4F);
    // 0x8003B418: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8003B41C: lbu         $s7, 0x53($sp)
    ctx->r23 = MEM_BU(ctx->r29, 0X53);
    // 0x8003B420: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8003B424: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8003B428: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8003B42C: addu        $s4, $a1, $zero
    ctx->r20 = ADD32(ctx->r5, 0);
    // 0x8003B430: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8003B434: addu        $s5, $a2, $zero
    ctx->r21 = ADD32(ctx->r6, 0);
    // 0x8003B438: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8003B43C: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x8003B440: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8003B444: sltiu       $v0, $s2, 0x40
    ctx->r2 = ctx->r18 < 0X40 ? 1 : 0;
    // 0x8003B448: beq         $v0, $zero, L_8003B534
    if (ctx->r2 == 0) {
        // 0x8003B44C: sw          $s1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r17;
            goto L_8003B534;
    }
    // 0x8003B44C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8003B450: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8003B454: sll         $s1, $s2, 4
    ctx->r17 = S32(ctx->r18 << 4);
    // 0x8003B458: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B45C: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x8003B460: sh          $v0, -0x1140($at)
    MEM_H(-0X1140, ctx->r1) = ctx->r2;
    // 0x8003B464: lb          $v0, 0x76($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X76);
    // 0x8003B468: beq         $v0, $zero, L_8003B478
    if (ctx->r2 == 0) {
        // 0x8003B46C: nop
    
            goto L_8003B478;
    }
    // 0x8003B46C: nop

    // 0x8003B470: j           L_8003B494
    // 0x8003B474: lh          $a1, 0x16($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16);
        goto L_8003B494;
    // 0x8003B474: lh          $a1, 0x16($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16);
L_8003B478:
    // 0x8003B478: jal         0x8003E934
    // 0x8003B47C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_0;
    // 0x8003B47C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8003B480: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8003B484: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8003B488: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8003B48C: bnel        $v0, $zero, L_8003B494
    if (ctx->r2 != 0) {
        // 0x8003B490: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8003B494;
    }
    goto skip_0;
    // 0x8003B490: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    skip_0:
L_8003B494:
    // 0x8003B494: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B498: addu        $at, $at, $s1
    ctx->r1 = ADD32(ctx->r1, ctx->r17);
    // 0x8003B49C: sh          $a1, -0x113E($at)
    MEM_H(-0X113E, ctx->r1) = ctx->r5;
    // 0x8003B4A0: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8003B4A4: sll         $a0, $s2, 4
    ctx->r4 = S32(ctx->r18 << 4);
    // 0x8003B4A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B4AC: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8003B4B0: sh          $v0, -0x113C($at)
    MEM_H(-0X113C, ctx->r1) = ctx->r2;
    // 0x8003B4B4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8003B4B8: sll         $v0, $s3, 14
    ctx->r2 = S32(ctx->r19 << 14);
    // 0x8003B4BC: or          $v0, $s4, $v0
    ctx->r2 = ctx->r20 | ctx->r2;
    // 0x8003B4C0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B4C4: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8003B4C8: sh          $v0, -0x1138($at)
    MEM_H(-0X1138, ctx->r1) = ctx->r2;
    // 0x8003B4CC: sra         $v0, $s5, 6
    ctx->r2 = S32(SIGNED(ctx->r21) >> 6);
    // 0x8003B4D0: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x8003B4D4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8003B4D8: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8003B4DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B4E0: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8003B4E4: sh          $v1, -0x113A($at)
    MEM_H(-0X113A, ctx->r1) = ctx->r3;
    // 0x8003B4E8: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8003B4EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B4F0: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8003B4F4: sb          $fp, -0x1134($at)
    MEM_B(-0X1134, ctx->r1) = ctx->r30;
    // 0x8003B4F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B4FC: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8003B500: sb          $s6, -0x1133($at)
    MEM_B(-0X1133, ctx->r1) = ctx->r22;
    // 0x8003B504: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B508: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8003B50C: sb          $s7, -0x1132($at)
    MEM_B(-0X1132, ctx->r1) = ctx->r23;
    // 0x8003B510: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8003B514: lw          $v0, -0x6F9C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6F9C);
    // 0x8003B518: subu        $v1, $a1, $v1
    ctx->r3 = SUB32(ctx->r5, ctx->r3);
    // 0x8003B51C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8003B520: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003B524: addu        $at, $at, $a0
    ctx->r1 = ADD32(ctx->r1, ctx->r4);
    // 0x8003B528: sh          $v1, -0x1136($at)
    MEM_H(-0X1136, ctx->r1) = ctx->r3;
    // 0x8003B52C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8003B530: sw          $v0, -0x6F9C($at)
    MEM_W(-0X6F9C, ctx->r1) = ctx->r2;
L_8003B534:
    // 0x8003B534: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8003B538: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x8003B53C: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8003B540: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8003B544: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8003B548: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8003B54C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8003B550: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8003B554: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8003B558: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8003B55C: jr          $ra
    // 0x8003B560: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8003B560: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80028220_3620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80028220: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80028224: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80028228: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8002822C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80028230: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80028234: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80028238: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8002823C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80028240: addiu       $v1, $v1, 0x47F0
    ctx->r3 = ADD32(ctx->r3, 0X47F0);
    // 0x80028244: addu        $t1, $v0, $v1
    ctx->r9 = ADD32(ctx->r2, ctx->r3);
    // 0x80028248: lb          $v0, 0xAA($t1)
    ctx->r2 = MEM_B(ctx->r9, 0XAA);
    // 0x8002824C: beq         $v0, $zero, L_800283A0
    if (ctx->r2 == 0) {
        // 0x80028250: lhu         $t0, 0x12($sp)
        ctx->r8 = MEM_HU(ctx->r29, 0X12);
            goto L_800283A0;
    }
    // 0x80028250: lhu         $t0, 0x12($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X12);
    // 0x80028254: lui         $v0, 0x800A
    ctx->r2 = S32(0X800A << 16);
    // 0x80028258: lw          $v0, 0x6CA8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6CA8);
    // 0x8002825C: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80028260: beq         $v0, $zero, L_80028298
    if (ctx->r2 == 0) {
        // 0x80028264: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80028298;
    }
    // 0x80028264: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80028268: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x8002826C: lw          $a0, 0x6FA8($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6FA8);
    // 0x80028270: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80028274: lw          $v0, 0x6FAC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6FAC);
    // 0x80028278: addiu       $v1, $a0, 0x18
    ctx->r3 = ADD32(ctx->r4, 0X18);
    // 0x8002827C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80028280: beq         $v0, $zero, L_80028290
    if (ctx->r2 == 0) {
        // 0x80028284: nop
    
            goto L_80028290;
    }
    // 0x80028284: nop

    // 0x80028288: j           L_80028298
    // 0x8002828C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
        goto L_80028298;
    // 0x8002828C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
L_80028290:
    // 0x80028290: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x80028294: sw          $v1, 0x6FA8($at)
    MEM_W(0X6FA8, ctx->r1) = ctx->r3;
L_80028298:
    // 0x80028298: beq         $a0, $zero, L_800283A0
    if (ctx->r4 == 0) {
        // 0x8002829C: sll         $v0, $a1, 24
        ctx->r2 = S32(ctx->r5 << 24);
            goto L_800283A0;
    }
    // 0x8002829C: sll         $v0, $a1, 24
    ctx->r2 = S32(ctx->r5 << 24);
    // 0x800282A0: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x800282A4: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x800282A8: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x800282AC: sw          $zero, 0x4($a0)
    MEM_W(0X4, ctx->r4) = 0;
    // 0x800282B0: sw          $a2, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r6;
    // 0x800282B4: sb          $a1, 0x10($a0)
    MEM_B(0X10, ctx->r4) = ctx->r5;
    // 0x800282B8: sw          $a3, 0xC($a0)
    MEM_W(0XC, ctx->r4) = ctx->r7;
    // 0x800282BC: sh          $t0, 0x12($a0)
    MEM_H(0X12, ctx->r4) = ctx->r8;
    // 0x800282C0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x800282C4: beql        $v1, $zero, L_8002839C
    if (ctx->r3 == 0) {
        // 0x800282C8: sw          $a0, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r4;
            goto L_8002839C;
    }
    goto skip_0;
    // 0x800282C8: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    skip_0:
    // 0x800282CC: lw          $v0, 0x40($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X40);
    // 0x800282D0: beq         $v1, $v0, L_80028310
    if (ctx->r3 == ctx->r2) {
        // 0x800282D4: addu        $t2, $zero, $zero
        ctx->r10 = ADD32(0, 0);
            goto L_80028310;
    }
    // 0x800282D4: addu        $t2, $zero, $zero
    ctx->r10 = ADD32(0, 0);
    // 0x800282D8: andi        $a3, $t0, 0xFFFF
    ctx->r7 = ctx->r8 & 0XFFFF;
    // 0x800282DC: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
L_800282E0:
    // 0x800282E0: lhu         $v0, 0x12($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X12);
    // 0x800282E4: sltu        $v0, $v0, $a3
    ctx->r2 = ctx->r2 < ctx->r7 ? 1 : 0;
    // 0x800282E8: bne         $v0, $zero, L_800282FC
    if (ctx->r2 != 0) {
        // 0x800282EC: sll         $v0, $a1, 24
        ctx->r2 = S32(ctx->r5 << 24);
            goto L_800282FC;
    }
    // 0x800282EC: sll         $v0, $a1, 24
    ctx->r2 = S32(ctx->r5 << 24);
    // 0x800282F0: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x800282F4: bne         $v1, $a2, L_800282E0
    if (ctx->r3 != ctx->r6) {
        // 0x800282F8: nop
    
            goto L_800282E0;
    }
    // 0x800282F8: nop

L_800282FC:
    // 0x800282FC: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x80028300: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x80028304: lw          $v0, 0x40($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X40);
    // 0x80028308: bne         $v1, $v0, L_80028320
    if (ctx->r3 != ctx->r2) {
        // 0x8002830C: nop
    
            goto L_80028320;
    }
    // 0x8002830C: nop

L_80028310:
    // 0x80028310: lhu         $v0, 0x12($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X12);
    // 0x80028314: sltu        $v0, $v0, $t0
    ctx->r2 = ctx->r2 < ctx->r8 ? 1 : 0;
    // 0x80028318: beql        $v0, $zero, L_80028320
    if (ctx->r2 == 0) {
        // 0x8002831C: addiu       $t2, $zero, 0x1
        ctx->r10 = ADD32(0, 0X1);
            goto L_80028320;
    }
    goto skip_1;
    // 0x8002831C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    skip_1:
L_80028320:
    // 0x80028320: bnel        $t2, $zero, L_80028364
    if (ctx->r10 != 0) {
        // 0x80028324: sw          $v1, 0x4($a0)
        MEM_W(0X4, ctx->r4) = ctx->r3;
            goto L_80028364;
    }
    goto skip_2;
    // 0x80028324: sw          $v1, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r3;
    skip_2:
    // 0x80028328: sw          $v1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r3;
    // 0x8002832C: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x80028330: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x80028334: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x80028338: bnel        $v0, $zero, L_80028340
    if (ctx->r2 != 0) {
        // 0x8002833C: sw          $a0, 0x0($v0)
        MEM_W(0X0, ctx->r2) = ctx->r4;
            goto L_80028340;
    }
    goto skip_3;
    // 0x8002833C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    skip_3:
L_80028340:
    // 0x80028340: sll         $v0, $a1, 24
    ctx->r2 = S32(ctx->r5 << 24);
    // 0x80028344: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x80028348: addu        $a1, $v0, $t1
    ctx->r5 = ADD32(ctx->r2, ctx->r9);
    // 0x8002834C: sw          $a0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r4;
    // 0x80028350: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80028354: beql        $v1, $v0, L_800283A0
    if (ctx->r3 == ctx->r2) {
        // 0x80028358: sw          $a0, 0x0($a1)
        MEM_W(0X0, ctx->r5) = ctx->r4;
            goto L_800283A0;
    }
    goto skip_4;
    // 0x80028358: sw          $a0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r4;
    skip_4:
    // 0x8002835C: j           L_800283A0
    // 0x80028360: nop

        goto L_800283A0;
    // 0x80028360: nop

L_80028364:
    // 0x80028364: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80028368: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x8002836C: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80028370: bnel        $v0, $zero, L_80028378
    if (ctx->r2 != 0) {
        // 0x80028374: sw          $a0, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r4;
            goto L_80028378;
    }
    goto skip_5;
    // 0x80028374: sw          $a0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r4;
    skip_5:
L_80028378:
    // 0x80028378: sll         $v0, $a1, 24
    ctx->r2 = S32(ctx->r5 << 24);
    // 0x8002837C: sra         $v0, $v0, 22
    ctx->r2 = S32(SIGNED(ctx->r2) >> 22);
    // 0x80028380: addu        $a1, $v0, $t1
    ctx->r5 = ADD32(ctx->r2, ctx->r9);
    // 0x80028384: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x80028388: lw          $v0, 0x40($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X40);
    // 0x8002838C: beql        $v1, $v0, L_800283A0
    if (ctx->r3 == ctx->r2) {
        // 0x80028390: sw          $a0, 0x40($a1)
        MEM_W(0X40, ctx->r5) = ctx->r4;
            goto L_800283A0;
    }
    goto skip_6;
    // 0x80028390: sw          $a0, 0x40($a1)
    MEM_W(0X40, ctx->r5) = ctx->r4;
    skip_6:
    // 0x80028394: j           L_800283A0
    // 0x80028398: nop

        goto L_800283A0;
    // 0x80028398: nop

L_8002839C:
    // 0x8002839C: sw          $a0, 0x40($v0)
    MEM_W(0X40, ctx->r2) = ctx->r4;
L_800283A0:
    // 0x800283A0: jr          $ra
    // 0x800283A4: nop

    TRACE_RETURN()
    return;
    // 0x800283A4: nop

;}
RECOMP_FUNC void func_80071654_4CA54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80071654: andi        $a0, $a0, 0xFFFF
    ctx->r4 = ctx->r4 & 0XFFFF;
    // 0x80071658: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8007165C: sltu        $v0, $v0, $a0
    ctx->r2 = ctx->r2 < ctx->r4 ? 1 : 0;
    // 0x80071660: bne         $v0, $zero, L_80071684
    if (ctx->r2 != 0) {
        // 0x80071664: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80071684;
    }
    // 0x80071664: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80071668: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8007166C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80071670: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80071674: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80071678: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8007167C: lhu         $v0, 0x5086($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X5086);
    // 0x80071680: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_80071684:
    // 0x80071684: jr          $ra
    // 0x80071688: nop

    TRACE_RETURN()
    return;
    // 0x80071688: nop

;}
RECOMP_FUNC void func_8004E130_29530(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004E130: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004E134: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8004E138: lh          $v0, 0x56($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X56);
    // 0x8004E13C: jal         0x8004E150
    // 0x8004E140: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004E150_29550(rdram, ctx);
        goto after_0;
    // 0x8004E140: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_0:
    // 0x8004E144: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8004E148: jr          $ra
    // 0x8004E14C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8004E14C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80030334_B734(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80030334: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80030338: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8003033C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80030340: jal         0x80030354
    // 0x80030344: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80030354_B754(rdram, ctx);
        goto after_0;
    // 0x80030344: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80030348: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8003034C: jr          $ra
    // 0x80030350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80030350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8006FB90_4AF90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8006FB90: andi        $a3, $a3, 0xFF
    ctx->r7 = ctx->r7 & 0XFF;
    // 0x8006FB94: beq         $a3, $zero, L_8006FBA4
    if (ctx->r7 == 0) {
        // 0x8006FB98: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8006FBA4;
    }
    // 0x8006FB98: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8006FB9C: j           L_8006FBB4
    // 0x8006FBA0: sb          $v0, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = ctx->r2;
        goto L_8006FBB4;
    // 0x8006FBA0: sb          $v0, 0xAD($a0)
    MEM_B(0XAD, ctx->r4) = ctx->r2;
L_8006FBA4:
    // 0x8006FBA4: lbu         $v1, 0xAD($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XAD);
    // 0x8006FBA8: andi        $v0, $a1, 0xFF
    ctx->r2 = ctx->r5 & 0XFF;
    // 0x8006FBAC: beq         $v0, $v1, L_8006FC2C
    if (ctx->r2 == ctx->r3) {
        // 0x8006FBB0: nop
    
            goto L_8006FC2C;
    }
    // 0x8006FBB0: nop

L_8006FBB4:
    // 0x8006FBB4: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x8006FBB8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8006FBBC: beq         $v1, $a3, L_8006FBFC
    if (ctx->r3 == ctx->r7) {
        // 0x8006FBC0: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_8006FBFC;
    }
    // 0x8006FBC0: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8006FBC4: bnel        $v1, $v0, L_8006FC28
    if (ctx->r3 != ctx->r2) {
        // 0x8006FBC8: sb          $a1, 0xAC($a0)
        MEM_B(0XAC, ctx->r4) = ctx->r5;
            goto L_8006FC28;
    }
    goto skip_0;
    // 0x8006FBC8: sb          $a1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r5;
    skip_0:
    // 0x8006FBCC: lbu         $v0, 0xAD($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XAD);
    // 0x8006FBD0: bnel        $v0, $a3, L_8006FC28
    if (ctx->r2 != ctx->r7) {
        // 0x8006FBD4: sb          $a1, 0xAC($a0)
        MEM_B(0XAC, ctx->r4) = ctx->r5;
            goto L_8006FC28;
    }
    goto skip_1;
    // 0x8006FBD4: sb          $a1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r5;
    skip_1:
    // 0x8006FBD8: lbu         $v0, 0xA4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA4);
    // 0x8006FBDC: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8006FBE0: addiu       $v0, $v1, 0x4
    ctx->r2 = ADD32(ctx->r3, 0X4);
    // 0x8006FBE4: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8006FBE8: slti        $v0, $v0, 0x20
    ctx->r2 = SIGNED(ctx->r2) < 0X20 ? 1 : 0;
    // 0x8006FBEC: beql        $v0, $zero, L_8006FC24
    if (ctx->r2 == 0) {
        // 0x8006FBF0: addiu       $a2, $v1, -0x1C
        ctx->r6 = ADD32(ctx->r3, -0X1C);
            goto L_8006FC24;
    }
    goto skip_2;
    // 0x8006FBF0: addiu       $a2, $v1, -0x1C
    ctx->r6 = ADD32(ctx->r3, -0X1C);
    skip_2:
    // 0x8006FBF4: j           L_8006FC28
    // 0x8006FBF8: sb          $a1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r5;
        goto L_8006FC28;
    // 0x8006FBF8: sb          $a1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r5;
L_8006FBFC:
    // 0x8006FBFC: lbu         $v1, 0xAD($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XAD);
    // 0x8006FC00: bnel        $v1, $v0, L_8006FC28
    if (ctx->r3 != ctx->r2) {
        // 0x8006FC04: sb          $a1, 0xAC($a0)
        MEM_B(0XAC, ctx->r4) = ctx->r5;
            goto L_8006FC28;
    }
    goto skip_3;
    // 0x8006FC04: sb          $a1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r5;
    skip_3:
    // 0x8006FC08: lbu         $v1, 0xA4($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA4);
    // 0x8006FC0C: addiu       $v0, $v1, -0x4
    ctx->r2 = ADD32(ctx->r3, -0X4);
    // 0x8006FC10: bgez        $v0, L_8006FC1C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8006FC14: addu        $a2, $v0, $zero
        ctx->r6 = ADD32(ctx->r2, 0);
            goto L_8006FC1C;
    }
    // 0x8006FC14: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8006FC18: addiu       $a2, $v1, 0x1C
    ctx->r6 = ADD32(ctx->r3, 0X1C);
L_8006FC1C:
    // 0x8006FC1C: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8006FC20: sra         $a2, $v0, 17
    ctx->r6 = S32(SIGNED(ctx->r2) >> 17);
L_8006FC24:
    // 0x8006FC24: sb          $a1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r5;
L_8006FC28:
    // 0x8006FC28: sb          $a2, 0xA4($a0)
    MEM_B(0XA4, ctx->r4) = ctx->r6;
L_8006FC2C:
    // 0x8006FC2C: jr          $ra
    // 0x8006FC30: nop

    TRACE_RETURN()
    return;
    // 0x8006FC30: nop

;}
RECOMP_FUNC void func_800590C4_344C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800590C4: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x800590C8: lh          $a0, 0x0($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X0);
    // 0x800590CC: lh          $v0, 0x14($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X14);
    // 0x800590D0: lh          $v1, 0x8($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X8);
    // 0x800590D4: subu        $a2, $v0, $a0
    ctx->r6 = SUB32(ctx->r2, ctx->r4);
    // 0x800590D8: subu        $a3, $v1, $a0
    ctx->r7 = SUB32(ctx->r3, ctx->r4);
    // 0x800590DC: sltu        $v0, $a2, $a3
    ctx->r2 = ctx->r6 < ctx->r7 ? 1 : 0;
    // 0x800590E0: beq         $v0, $zero, L_80059314
    if (ctx->r2 == 0) {
        // 0x800590E4: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80059314;
    }
    // 0x800590E4: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x800590E8: lh          $a0, 0x4($a1)
    ctx->r4 = MEM_H(ctx->r5, 0X4);
    // 0x800590EC: lh          $v0, 0x18($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X18);
    // 0x800590F0: lh          $v1, 0xC($a1)
    ctx->r3 = MEM_H(ctx->r5, 0XC);
    // 0x800590F4: subu        $a1, $v0, $a0
    ctx->r5 = SUB32(ctx->r2, ctx->r4);
    // 0x800590F8: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x800590FC: sltu        $v0, $a1, $v1
    ctx->r2 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x80059100: beq         $v0, $zero, L_80059310
    if (ctx->r2 == 0) {
        // 0x80059104: sra         $t0, $a3, 1
        ctx->r8 = S32(SIGNED(ctx->r7) >> 1);
            goto L_80059310;
    }
    // 0x80059104: sra         $t0, $a3, 1
    ctx->r8 = S32(SIGNED(ctx->r7) >> 1);
    // 0x80059108: subu        $a2, $a2, $t0
    ctx->r6 = SUB32(ctx->r6, ctx->r8);
    // 0x8005910C: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x80059110: bgez        $a2, L_8005911C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80059114: sra         $t1, $v1, 1
        ctx->r9 = S32(SIGNED(ctx->r3) >> 1);
            goto L_8005911C;
    }
    // 0x80059114: sra         $t1, $v1, 1
    ctx->r9 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80059118: negu        $a0, $a2
    ctx->r4 = SUB32(0, ctx->r6);
L_8005911C:
    // 0x8005911C: sll         $v1, $a3, 5
    ctx->r3 = S32(ctx->r7 << 5);
    // 0x80059120: subu        $v1, $v1, $a3
    ctx->r3 = SUB32(ctx->r3, ctx->r7);
    // 0x80059124: sll         $v0, $v1, 6
    ctx->r2 = S32(ctx->r3 << 6);
    // 0x80059128: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8005912C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80059130: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x80059134: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80059138: lui         $v1, 0xBDD0
    ctx->r3 = S32(0XBDD0 << 16);
    // 0x8005913C: ori         $v1, $v1, 0x6FF
    ctx->r3 = ctx->r3 | 0X6FF;
    // 0x80059140: multu       $v0, $v1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80059144: mfhi        $t2
    ctx->r10 = hi;
    // 0x80059148: srl         $a3, $t2, 20
    ctx->r7 = S32(U32(ctx->r10) >> 20);
    // 0x8005914C: subu        $v1, $a3, $a0
    ctx->r3 = SUB32(ctx->r7, ctx->r4);
    // 0x80059150: subu        $v0, $t1, $v1
    ctx->r2 = SUB32(ctx->r9, ctx->r3);
    // 0x80059154: subu        $v0, $a1, $v0
    ctx->r2 = SUB32(ctx->r5, ctx->r2);
    // 0x80059158: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8005915C: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80059160: beq         $v0, $zero, L_80059310
    if (ctx->r2 == 0) {
        // 0x80059164: subu        $a1, $a1, $t1
        ctx->r5 = SUB32(ctx->r5, ctx->r9);
            goto L_80059310;
    }
    // 0x80059164: subu        $a1, $a1, $t1
    ctx->r5 = SUB32(ctx->r5, ctx->r9);
    // 0x80059168: beq         $a2, $zero, L_800592F4
    if (ctx->r6 == 0) {
        // 0x8005916C: subu        $a3, $a3, $t0
        ctx->r7 = SUB32(ctx->r7, ctx->r8);
            goto L_800592F4;
    }
    // 0x8005916C: subu        $a3, $a3, $t0
    ctx->r7 = SUB32(ctx->r7, ctx->r8);
    // 0x80059170: xor         $v0, $a2, $a1
    ctx->r2 = ctx->r6 ^ ctx->r5;
    // 0x80059174: slti        $v0, $v0, 0x0
    ctx->r2 = SIGNED(ctx->r2) < 0X0 ? 1 : 0;
    // 0x80059178: bgez        $a2, L_8005918C
    if (SIGNED(ctx->r6) >= 0) {
        // 0x8005917C: sll         $v0, $v0, 1
        ctx->r2 = S32(ctx->r2 << 1);
            goto L_8005918C;
    }
    // 0x8005917C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80059180: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80059184: j           L_80059190
    // 0x80059188: ori         $a0, $v0, 0x80
    ctx->r4 = ctx->r2 | 0X80;
        goto L_80059190;
    // 0x80059188: ori         $a0, $v0, 0x80
    ctx->r4 = ctx->r2 | 0X80;
L_8005918C:
    // 0x8005918C: ori         $a0, $v0, 0x84
    ctx->r4 = ctx->r2 | 0X84;
L_80059190:
    // 0x80059190: bltzl       $a1, L_80059198
    if (SIGNED(ctx->r5) < 0) {
        // 0x80059194: negu        $a1, $a1
        ctx->r5 = SUB32(0, ctx->r5);
            goto L_80059198;
    }
    goto skip_0;
    // 0x80059194: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    skip_0:
L_80059198:
    // 0x80059198: andi        $v0, $a0, 0x2
    ctx->r2 = ctx->r4 & 0X2;
    // 0x8005919C: beq         $v0, $zero, L_80059240
    if (ctx->r2 == 0) {
        // 0x800591A0: nop
    
            goto L_80059240;
    }
    // 0x800591A0: nop

    // 0x800591A4: mult        $a1, $t0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800591A8: mflo        $v0
    ctx->r2 = lo;
    // 0x800591AC: nop

    // 0x800591B0: nop

    // 0x800591B4: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x800591B8: bne         $a2, $zero, L_800591C4
    if (ctx->r6 != 0) {
        // 0x800591BC: nop
    
            goto L_800591C4;
    }
    // 0x800591BC: nop

    // 0x800591C0: break       7
    do_break(2147848640);
L_800591C4:
    // 0x800591C4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800591C8: bne         $a2, $at, L_800591DC
    if (ctx->r6 != ctx->r1) {
        // 0x800591CC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800591DC;
    }
    // 0x800591CC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800591D0: bne         $v0, $at, L_800591DC
    if (ctx->r2 != ctx->r1) {
        // 0x800591D4: nop
    
            goto L_800591DC;
    }
    // 0x800591D4: nop

    // 0x800591D8: break       6
    do_break(2147848664);
L_800591DC:
    // 0x800591DC: mflo        $v0
    ctx->r2 = lo;
    // 0x800591E0: slt         $v0, $v0, $a3
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x800591E4: nop

    // 0x800591E8: beql        $v0, $zero, L_800591F0
    if (ctx->r2 == 0) {
        // 0x800591EC: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_800591F0;
    }
    goto skip_1;
    // 0x800591EC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_1:
L_800591F0:
    // 0x800591F0: nop

    // 0x800591F4: mult        $a1, $a3
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800591F8: mflo        $v0
    ctx->r2 = lo;
    // 0x800591FC: nop

    // 0x80059200: nop

    // 0x80059204: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x80059208: bne         $a2, $zero, L_80059214
    if (ctx->r6 != 0) {
        // 0x8005920C: nop
    
            goto L_80059214;
    }
    // 0x8005920C: nop

    // 0x80059210: break       7
    do_break(2147848720);
L_80059214:
    // 0x80059214: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80059218: bne         $a2, $at, L_8005922C
    if (ctx->r6 != ctx->r1) {
        // 0x8005921C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005922C;
    }
    // 0x8005921C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80059220: bne         $v0, $at, L_8005922C
    if (ctx->r2 != ctx->r1) {
        // 0x80059224: nop
    
            goto L_8005922C;
    }
    // 0x80059224: nop

    // 0x80059228: break       6
    do_break(2147848744);
L_8005922C:
    // 0x8005922C: mflo        $v0
    ctx->r2 = lo;
    // 0x80059230: nop

    // 0x80059234: nop

    // 0x80059238: j           L_800592D8
    // 0x8005923C: slt         $v0, $v0, $t1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
        goto L_800592D8;
    // 0x8005923C: slt         $v0, $v0, $t1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r9) ? 1 : 0;
L_80059240:
    // 0x80059240: nop

    // 0x80059244: mult        $a1, $a3
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r7)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80059248: mflo        $v0
    ctx->r2 = lo;
    // 0x8005924C: nop

    // 0x80059250: nop

    // 0x80059254: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x80059258: bne         $a2, $zero, L_80059264
    if (ctx->r6 != 0) {
        // 0x8005925C: nop
    
            goto L_80059264;
    }
    // 0x8005925C: nop

    // 0x80059260: break       7
    do_break(2147848800);
L_80059264:
    // 0x80059264: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80059268: bne         $a2, $at, L_8005927C
    if (ctx->r6 != ctx->r1) {
        // 0x8005926C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8005927C;
    }
    // 0x8005926C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80059270: bne         $v0, $at, L_8005927C
    if (ctx->r2 != ctx->r1) {
        // 0x80059274: nop
    
            goto L_8005927C;
    }
    // 0x80059274: nop

    // 0x80059278: break       6
    do_break(2147848824);
L_8005927C:
    // 0x8005927C: mflo        $v0
    ctx->r2 = lo;
    // 0x80059280: slt         $v0, $t1, $v0
    ctx->r2 = SIGNED(ctx->r9) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80059284: nop

    // 0x80059288: beql        $v0, $zero, L_80059290
    if (ctx->r2 == 0) {
        // 0x8005928C: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_80059290;
    }
    goto skip_2;
    // 0x8005928C: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_2:
L_80059290:
    // 0x80059290: nop

    // 0x80059294: mult        $a1, $t0
    result = S64(S32(ctx->r5)) * S64(S32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80059298: mflo        $v0
    ctx->r2 = lo;
    // 0x8005929C: nop

    // 0x800592A0: nop

    // 0x800592A4: div         $zero, $v0, $a2
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r6))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r6)));
    // 0x800592A8: bne         $a2, $zero, L_800592B4
    if (ctx->r6 != 0) {
        // 0x800592AC: nop
    
            goto L_800592B4;
    }
    // 0x800592AC: nop

    // 0x800592B0: break       7
    do_break(2147848880);
L_800592B4:
    // 0x800592B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800592B8: bne         $a2, $at, L_800592CC
    if (ctx->r6 != ctx->r1) {
        // 0x800592BC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_800592CC;
    }
    // 0x800592BC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x800592C0: bne         $v0, $at, L_800592CC
    if (ctx->r2 != ctx->r1) {
        // 0x800592C4: nop
    
            goto L_800592CC;
    }
    // 0x800592C4: nop

    // 0x800592C8: break       6
    do_break(2147848904);
L_800592CC:
    // 0x800592CC: mflo        $v0
    ctx->r2 = lo;
    // 0x800592D0: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800592D4: nop

L_800592D8:
    // 0x800592D8: beql        $v0, $zero, L_800592E0
    if (ctx->r2 == 0) {
        // 0x800592DC: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_800592E0;
    }
    goto skip_3;
    // 0x800592DC: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_3:
L_800592E0:
    // 0x800592E0: addiu       $v0, $zero, -0x79
    ctx->r2 = ADD32(0, -0X79);
    // 0x800592E4: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x800592E8: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x800592EC: j           L_80059314
    // 0x800592F0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
        goto L_80059314;
    // 0x800592F0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
L_800592F4:
    // 0x800592F4: nor         $v0, $zero, $a1
    ctx->r2 = ~(0 | ctx->r5);
    // 0x800592F8: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x800592FC: addiu       $v1, $zero, -0x7C
    ctx->r3 = ADD32(0, -0X7C);
    // 0x80059300: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80059304: addiu       $v1, $zero, -0x80
    ctx->r3 = ADD32(0, -0X80);
    // 0x80059308: j           L_80059314
    // 0x8005930C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
        goto L_80059314;
    // 0x8005930C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
L_80059310:
    // 0x80059310: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80059314:
    // 0x80059314: jr          $ra
    // 0x80059318: nop

    TRACE_RETURN()
    return;
    // 0x80059318: nop

    // 0x8005931C: nop

;}
RECOMP_FUNC void func_8005CC0C_3800C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005CC0C: lui         $a0, 0x800B
    ctx->r4 = S32(0X800B << 16);
    // 0x8005CC10: lw          $a0, -0x16D0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X16D0);
    // 0x8005CC14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8005CC18: beq         $a0, $zero, L_8005CC30
    if (ctx->r4 == 0) {
        // 0x8005CC1C: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_8005CC30;
    }
    // 0x8005CC1C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8005CC20: jal         0x80025FF8
    // 0x8005CC24: nop

    func_80025FF8_13F8(rdram, ctx);
        goto after_0;
    // 0x8005CC24: nop

    after_0:
    // 0x8005CC28: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x8005CC2C: sw          $zero, -0x16D0($at)
    MEM_W(-0X16D0, ctx->r1) = 0;
L_8005CC30:
    // 0x8005CC30: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8005CC34: jal         0x8004F418
    // 0x8005CC38: lw          $a0, -0x484C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X484C);
    func_8004F418_2A818(rdram, ctx);
        goto after_1;
    // 0x8005CC38: lw          $a0, -0x484C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X484C);
    after_1:
    // 0x8005CC3C: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8005CC40: jal         0x8004F418
    // 0x8005CC44: lw          $a0, -0x4850($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4850);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x8005CC44: lw          $a0, -0x4850($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4850);
    after_2:
    // 0x8005CC48: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8005CC4C: jr          $ra
    // 0x8005CC50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8005CC50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8005CC54: nop

    // 0x8005CC58: nop

    // 0x8005CC5C: nop

;}
RECOMP_FUNC void func_800875B0_629B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800875B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800875B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800875B8: jal         0x80095000
    // 0x800875BC: nop

    osFlashInit_recomp(rdram, ctx);
        goto after_0;
    // 0x800875BC: nop

    after_0:
    // 0x800875C0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800875C4: jr          $ra
    // 0x800875C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800875C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80030628_BA28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80030628: beq         $a1, $zero, L_8003063C
    if (ctx->r5 == 0) {
        // 0x8003062C: nop
    
            goto L_8003063C;
    }
    // 0x8003062C: nop

    // 0x80030630: lbu         $v0, 0x7($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X7);
    // 0x80030634: j           L_80030644
    // 0x80030638: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
        goto L_80030644;
    // 0x80030638: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
L_8003063C:
    // 0x8003063C: lbu         $v0, 0x7($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X7);
    // 0x80030640: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
L_80030644:
    // 0x80030644: jr          $ra
    // 0x80030648: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80030648: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80031E10_D210(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80031E10: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
L_80031E14:
    // 0x80031E14: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x80031E18: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80031E1C: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80031E20: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
L_80031E24:
    // 0x80031E24: lhu         $v1, 0x0($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X0);
    // 0x80031E28: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x80031E2C: addu        $v0, $t2, $a2
    ctx->r2 = ADD32(ctx->r10, ctx->r6);
    // 0x80031E30: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80031E34: sh          $v1, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r3;
    // 0x80031E38: slti        $v0, $t0, 0x3
    ctx->r2 = SIGNED(ctx->r8) < 0X3 ? 1 : 0;
    // 0x80031E3C: bne         $v0, $zero, L_80031E24
    if (ctx->r2 != 0) {
        // 0x80031E40: addiu       $a2, $a2, 0x6
        ctx->r6 = ADD32(ctx->r6, 0X6);
            goto L_80031E24;
    }
    // 0x80031E40: addiu       $a2, $a2, 0x6
    ctx->r6 = ADD32(ctx->r6, 0X6);
    // 0x80031E44: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
    // 0x80031E48: slti        $v0, $t1, 0x3
    ctx->r2 = SIGNED(ctx->r9) < 0X3 ? 1 : 0;
    // 0x80031E4C: bne         $v0, $zero, L_80031E14
    if (ctx->r2 != 0) {
        // 0x80031E50: addiu       $a0, $a0, 0x6
        ctx->r4 = ADD32(ctx->r4, 0X6);
            goto L_80031E14;
    }
    // 0x80031E50: addiu       $a0, $a0, 0x6
    ctx->r4 = ADD32(ctx->r4, 0X6);
    // 0x80031E54: jr          $ra
    // 0x80031E58: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    TRACE_RETURN()
    return;
    // 0x80031E58: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_80092840_6DC40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80092840: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80092844: jr          $ra
    // 0x80092848: sb          $a0, 0x572D($at)
    MEM_B(0X572D, ctx->r1) = ctx->r4;
    TRACE_RETURN()
    return;
    // 0x80092848: sb          $a0, 0x572D($at)
    MEM_B(0X572D, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8005FB90_3AF90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005FB90: lui         $v0, 0x8021
    ctx->r2 = S32(0X8021 << 16);
    // 0x8005FB94: lw          $v0, 0xA90($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA90);
    // 0x8005FB98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005FB9C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8005FBA0: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8005FBA4: addiu       $s1, $s1, -0x3A50
    ctx->r17 = ADD32(ctx->r17, -0X3A50);
    // 0x8005FBA8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8005FBAC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8005FBB0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8005FBB4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8005FBB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8005FBBC: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x8005FBC0: lui         $s4, 0x8021
    ctx->r20 = S32(0X8021 << 16);
    // 0x8005FBC4: addiu       $s4, $s4, 0x9D0
    ctx->r20 = ADD32(ctx->r20, 0X9D0);
    // 0x8005FBC8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8005FBCC: beq         $v1, $v0, L_8005FF68
    if (ctx->r3 == ctx->r2) {
        // 0x8005FBD0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8005FF68;
    }
    // 0x8005FBD0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8005FBD4: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8005FBD8: lui         $s3, 0xFF
    ctx->r19 = S32(0XFF << 16);
L_8005FBDC:
    // 0x8005FBDC: lw          $a1, 0xC0($s4)
    ctx->r5 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FBE0: lw          $a0, 0x0($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X0);
    // 0x8005FBE4: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8005FBE8: srl         $v1, $a0, 24
    ctx->r3 = S32(U32(ctx->r4) >> 24);
    // 0x8005FBEC: beq         $v1, $v0, L_8005FDF4
    if (ctx->r3 == ctx->r2) {
        // 0x8005FBF0: sltiu       $v0, $v1, 0x13
        ctx->r2 = ctx->r3 < 0X13 ? 1 : 0;
            goto L_8005FDF4;
    }
    // 0x8005FBF0: sltiu       $v0, $v1, 0x13
    ctx->r2 = ctx->r3 < 0X13 ? 1 : 0;
    // 0x8005FBF4: beq         $v0, $zero, L_8005FC5C
    if (ctx->r2 == 0) {
        // 0x8005FBF8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8005FC5C;
    }
    // 0x8005FBF8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8005FBFC: beq         $v1, $v0, L_8005FD68
    if (ctx->r3 == ctx->r2) {
        // 0x8005FC00: sltiu       $v0, $v1, 0x5
        ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
            goto L_8005FD68;
    }
    // 0x8005FC00: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8005FC04: beql        $v0, $zero, L_8005FC34
    if (ctx->r2 == 0) {
        // 0x8005FC08: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8005FC34;
    }
    goto skip_0;
    // 0x8005FC08: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    skip_0:
    // 0x8005FC0C: beql        $v1, $s2, L_8005FD04
    if (ctx->r3 == ctx->r18) {
        // 0x8005FC10: and         $v0, $a0, $s3
        ctx->r2 = ctx->r4 & ctx->r19;
            goto L_8005FD04;
    }
    goto skip_1;
    // 0x8005FC10: and         $v0, $a0, $s3
    ctx->r2 = ctx->r4 & ctx->r19;
    skip_1:
    // 0x8005FC14: beq         $v1, $zero, L_8005FCE0
    if (ctx->r3 == 0) {
        // 0x8005FC18: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8005FCE0;
    }
    // 0x8005FC18: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8005FC1C: beq         $v1, $v0, L_8005FD2C
    if (ctx->r3 == ctx->r2) {
        // 0x8005FC20: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8005FD2C;
    }
    // 0x8005FC20: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8005FC24: beq         $v1, $v0, L_8005FD5C
    if (ctx->r3 == ctx->r2) {
        // 0x8005FC28: nop
    
            goto L_8005FD5C;
    }
    // 0x8005FC28: nop

    // 0x8005FC2C: j           L_8005FF60
    // 0x8005FC30: nop

        goto L_8005FF60;
    // 0x8005FC30: nop

L_8005FC34:
    // 0x8005FC34: beq         $v1, $v0, L_8005FD80
    if (ctx->r3 == ctx->r2) {
        // 0x8005FC38: sltiu       $v0, $v1, 0x6
        ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
            goto L_8005FD80;
    }
    // 0x8005FC38: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8005FC3C: bne         $v0, $zero, L_8005FD74
    if (ctx->r2 != 0) {
        // 0x8005FC40: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8005FD74;
    }
    // 0x8005FC40: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8005FC44: beq         $v1, $v0, L_8005FD8C
    if (ctx->r3 == ctx->r2) {
        // 0x8005FC48: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_8005FD8C;
    }
    // 0x8005FC48: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8005FC4C: beq         $v1, $v0, L_8005FDC4
    if (ctx->r3 == ctx->r2) {
        // 0x8005FC50: nop
    
            goto L_8005FDC4;
    }
    // 0x8005FC50: nop

    // 0x8005FC54: j           L_8005FF60
    // 0x8005FC58: nop

        goto L_8005FF60;
    // 0x8005FC58: nop

L_8005FC5C:
    // 0x8005FC5C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8005FC60: beq         $v1, $v0, L_8005FF00
    if (ctx->r3 == ctx->r2) {
        // 0x8005FC64: sltiu       $v0, $v1, 0x21
        ctx->r2 = ctx->r3 < 0X21 ? 1 : 0;
            goto L_8005FF00;
    }
    // 0x8005FC64: sltiu       $v0, $v1, 0x21
    ctx->r2 = ctx->r3 < 0X21 ? 1 : 0;
    // 0x8005FC68: beq         $v0, $zero, L_8005FC98
    if (ctx->r2 == 0) {
        // 0x8005FC6C: addiu       $v0, $zero, 0x14
        ctx->r2 = ADD32(0, 0X14);
            goto L_8005FC98;
    }
    // 0x8005FC6C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8005FC70: beq         $v1, $v0, L_8005FE54
    if (ctx->r3 == ctx->r2) {
        // 0x8005FC74: sltiu       $v0, $v1, 0x14
        ctx->r2 = ctx->r3 < 0X14 ? 1 : 0;
            goto L_8005FE54;
    }
    // 0x8005FC74: sltiu       $v0, $v1, 0x14
    ctx->r2 = ctx->r3 < 0X14 ? 1 : 0;
    // 0x8005FC78: bne         $v0, $zero, L_8005FE24
    if (ctx->r2 != 0) {
        // 0x8005FC7C: addiu       $v0, $zero, 0x15
        ctx->r2 = ADD32(0, 0X15);
            goto L_8005FE24;
    }
    // 0x8005FC7C: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x8005FC80: beq         $v1, $v0, L_8005FEA0
    if (ctx->r3 == ctx->r2) {
        // 0x8005FC84: addiu       $v0, $zero, 0x16
        ctx->r2 = ADD32(0, 0X16);
            goto L_8005FEA0;
    }
    // 0x8005FC84: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x8005FC88: beq         $v1, $v0, L_8005FED0
    if (ctx->r3 == ctx->r2) {
        // 0x8005FC8C: nop
    
            goto L_8005FED0;
    }
    // 0x8005FC8C: nop

    // 0x8005FC90: j           L_8005FF60
    // 0x8005FC94: nop

        goto L_8005FF60;
    // 0x8005FC94: nop

L_8005FC98:
    // 0x8005FC98: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8005FC9C: beq         $v1, $v0, L_8005FF38
    if (ctx->r3 == ctx->r2) {
        // 0x8005FCA0: sltiu       $v0, $v1, 0x31
        ctx->r2 = ctx->r3 < 0X31 ? 1 : 0;
            goto L_8005FF38;
    }
    // 0x8005FCA0: sltiu       $v0, $v1, 0x31
    ctx->r2 = ctx->r3 < 0X31 ? 1 : 0;
    // 0x8005FCA4: beq         $v0, $zero, L_8005FCC4
    if (ctx->r2 == 0) {
        // 0x8005FCA8: addiu       $v0, $zero, 0x21
        ctx->r2 = ADD32(0, 0X21);
            goto L_8005FCC4;
    }
    // 0x8005FCA8: addiu       $v0, $zero, 0x21
    ctx->r2 = ADD32(0, 0X21);
    // 0x8005FCAC: beq         $v1, $v0, L_8005FF10
    if (ctx->r3 == ctx->r2) {
        // 0x8005FCB0: addiu       $v0, $zero, 0x22
        ctx->r2 = ADD32(0, 0X22);
            goto L_8005FF10;
    }
    // 0x8005FCB0: addiu       $v0, $zero, 0x22
    ctx->r2 = ADD32(0, 0X22);
    // 0x8005FCB4: beq         $v1, $v0, L_8005FF20
    if (ctx->r3 == ctx->r2) {
        // 0x8005FCB8: nop
    
            goto L_8005FF20;
    }
    // 0x8005FCB8: nop

    // 0x8005FCBC: j           L_8005FF60
    // 0x8005FCC0: nop

        goto L_8005FF60;
    // 0x8005FCC0: nop

L_8005FCC4:
    // 0x8005FCC4: addiu       $v0, $zero, 0x31
    ctx->r2 = ADD32(0, 0X31);
    // 0x8005FCC8: beq         $v1, $v0, L_8005FF4C
    if (ctx->r3 == ctx->r2) {
        // 0x8005FCCC: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8005FF4C;
    }
    // 0x8005FCCC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8005FCD0: beql        $v1, $v0, L_8005FF60
    if (ctx->r3 == ctx->r2) {
        // 0x8005FCD4: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_8005FF60;
    }
    goto skip_2;
    // 0x8005FCD4: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    skip_2:
    // 0x8005FCD8: j           L_8005FF60
    // 0x8005FCDC: nop

        goto L_8005FF60;
    // 0x8005FCDC: nop

L_8005FCE0:
    // 0x8005FCE0: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x8005FCE4: lw          $v1, 0x14($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X14);
    // 0x8005FCE8: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x8005FCEC: and         $v0, $a0, $v0
    ctx->r2 = ctx->r4 & ctx->r2;
    // 0x8005FCF0: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8005FCF4: beq         $v1, $zero, L_8005FD54
    if (ctx->r3 == 0) {
        // 0x8005FCF8: addiu       $v0, $a1, 0x4
        ctx->r2 = ADD32(ctx->r5, 0X4);
            goto L_8005FD54;
    }
    // 0x8005FCF8: addiu       $v0, $a1, 0x4
    ctx->r2 = ADD32(ctx->r5, 0X4);
    // 0x8005FCFC: j           L_8005FF60
    // 0x8005FD00: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_8005FF60;
    // 0x8005FD00: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_8005FD04:
    // 0x8005FD04: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8005FD08: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x8005FD0C: bnel        $v1, $v0, L_8005FF60
    if (ctx->r3 != ctx->r2) {
        // 0x8005FD10: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_8005FF60;
    }
    goto skip_3;
    // 0x8005FD10: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    skip_3:
    // 0x8005FD14: lw          $v1, 0x18($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X18);
    // 0x8005FD18: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x8005FD1C: beq         $v1, $v0, L_8005FD54
    if (ctx->r3 == ctx->r2) {
        // 0x8005FD20: addiu       $v0, $a1, 0x4
        ctx->r2 = ADD32(ctx->r5, 0X4);
            goto L_8005FD54;
    }
    // 0x8005FD20: addiu       $v0, $a1, 0x4
    ctx->r2 = ADD32(ctx->r5, 0X4);
    // 0x8005FD24: j           L_8005FF60
    // 0x8005FD28: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_8005FF60;
    // 0x8005FD28: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_8005FD2C:
    // 0x8005FD2C: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x8005FD30: and         $v0, $a0, $s3
    ctx->r2 = ctx->r4 & ctx->r19;
    // 0x8005FD34: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x8005FD38: bnel        $v1, $v0, L_8005FF60
    if (ctx->r3 != ctx->r2) {
        // 0x8005FD3C: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_8005FF60;
    }
    goto skip_4;
    // 0x8005FD3C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    skip_4:
    // 0x8005FD40: lw          $v1, 0x1C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X1C);
    // 0x8005FD44: andi        $v0, $a0, 0xFFFF
    ctx->r2 = ctx->r4 & 0XFFFF;
    // 0x8005FD48: bnel        $v1, $v0, L_8005FF60
    if (ctx->r3 != ctx->r2) {
        // 0x8005FD4C: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_8005FF60;
    }
    goto skip_5;
    // 0x8005FD4C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    skip_5:
    // 0x8005FD50: addiu       $v0, $a1, 0x4
    ctx->r2 = ADD32(ctx->r5, 0X4);
L_8005FD54:
    // 0x8005FD54: j           L_8005FF60
    // 0x8005FD58: sw          $v0, 0xC0($s4)
    MEM_W(0XC0, ctx->r20) = ctx->r2;
        goto L_8005FF60;
    // 0x8005FD58: sw          $v0, 0xC0($s4)
    MEM_W(0XC0, ctx->r20) = ctx->r2;
L_8005FD5C:
    // 0x8005FD5C: lw          $v0, 0xC0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FD60: j           L_8005FF2C
    // 0x8005FD64: sb          $zero, 0x8($s4)
    MEM_B(0X8, ctx->r20) = 0;
        goto L_8005FF2C;
    // 0x8005FD64: sb          $zero, 0x8($s4)
    MEM_B(0X8, ctx->r20) = 0;
L_8005FD68:
    // 0x8005FD68: lw          $v0, 0xC0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FD6C: j           L_8005FF2C
    // 0x8005FD70: sb          $s2, 0x8($s4)
    MEM_B(0X8, ctx->r20) = ctx->r18;
        goto L_8005FF2C;
    // 0x8005FD70: sb          $s2, 0x8($s4)
    MEM_B(0X8, ctx->r20) = ctx->r18;
L_8005FD74:
    // 0x8005FD74: lw          $v0, 0xC0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FD78: j           L_8005FF2C
    // 0x8005FD7C: sb          $zero, 0x3($s4)
    MEM_B(0X3, ctx->r20) = 0;
        goto L_8005FF2C;
    // 0x8005FD7C: sb          $zero, 0x3($s4)
    MEM_B(0X3, ctx->r20) = 0;
L_8005FD80:
    // 0x8005FD80: lw          $v0, 0xC0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FD84: j           L_8005FF2C
    // 0x8005FD88: sb          $s2, 0x3($s4)
    MEM_B(0X3, ctx->r20) = ctx->r18;
        goto L_8005FF2C;
    // 0x8005FD88: sb          $s2, 0x3($s4)
    MEM_B(0X3, ctx->r20) = ctx->r18;
L_8005FD8C:
    // 0x8005FD8C: lw          $v0, 0xC0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FD90: lw          $v1, 0xC0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FD94: sb          $zero, 0x3($s4)
    MEM_B(0X3, ctx->r20) = 0;
    // 0x8005FD98: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8005FD9C: sw          $v0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r2;
    // 0x8005FDA0: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x8005FDA4: lw          $v1, 0xC0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FDA8: sw          $v0, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r2;
    // 0x8005FDAC: lw          $v0, 0xC0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FDB0: lw          $v1, 0xC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XC);
    // 0x8005FDB4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8005FDB8: sw          $v0, 0xC0($s4)
    MEM_W(0XC0, ctx->r20) = ctx->r2;
    // 0x8005FDBC: j           L_8005FF60
    // 0x8005FDC0: sw          $v1, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r3;
        goto L_8005FF60;
    // 0x8005FDC0: sw          $v1, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r3;
L_8005FDC4:
    // 0x8005FDC4: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x8005FDC8: lw          $v1, 0xC0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FDCC: sw          $v0, 0x40($s4)
    MEM_W(0X40, ctx->r20) = ctx->r2;
    // 0x8005FDD0: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x8005FDD4: lw          $v1, 0xC0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FDD8: sw          $v0, 0x44($s4)
    MEM_W(0X44, ctx->r20) = ctx->r2;
    // 0x8005FDDC: lw          $v0, 0xC0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FDE0: lw          $v1, 0xC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XC);
    // 0x8005FDE4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8005FDE8: sw          $v0, 0xC0($s4)
    MEM_W(0XC0, ctx->r20) = ctx->r2;
    // 0x8005FDEC: j           L_8005FF60
    // 0x8005FDF0: sw          $v1, 0x48($s4)
    MEM_W(0X48, ctx->r20) = ctx->r3;
        goto L_8005FF60;
    // 0x8005FDF0: sw          $v1, 0x48($s4)
    MEM_W(0X48, ctx->r20) = ctx->r3;
L_8005FDF4:
    // 0x8005FDF4: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x8005FDF8: lw          $v1, 0xC0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FDFC: sw          $v0, 0x20($s4)
    MEM_W(0X20, ctx->r20) = ctx->r2;
    // 0x8005FE00: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x8005FE04: lw          $v1, 0xC0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FE08: sw          $v0, 0x24($s4)
    MEM_W(0X24, ctx->r20) = ctx->r2;
    // 0x8005FE0C: lw          $v0, 0xC0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FE10: lw          $v1, 0xC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XC);
    // 0x8005FE14: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8005FE18: sw          $v0, 0xC0($s4)
    MEM_W(0XC0, ctx->r20) = ctx->r2;
    // 0x8005FE1C: j           L_8005FF60
    // 0x8005FE20: sw          $v1, 0x28($s4)
    MEM_W(0X28, ctx->r20) = ctx->r3;
        goto L_8005FF60;
    // 0x8005FE20: sw          $v1, 0x28($s4)
    MEM_W(0X28, ctx->r20) = ctx->r3;
L_8005FE24:
    // 0x8005FE24: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x8005FE28: lw          $v1, 0xC0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FE2C: sw          $v0, 0x50($s4)
    MEM_W(0X50, ctx->r20) = ctx->r2;
    // 0x8005FE30: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x8005FE34: lw          $v1, 0xC0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FE38: sw          $v0, 0x54($s4)
    MEM_W(0X54, ctx->r20) = ctx->r2;
    // 0x8005FE3C: lw          $v0, 0xC0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FE40: lw          $v1, 0xC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XC);
    // 0x8005FE44: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8005FE48: sw          $v0, 0xC0($s4)
    MEM_W(0XC0, ctx->r20) = ctx->r2;
    // 0x8005FE4C: j           L_8005FF60
    // 0x8005FE50: sw          $v1, 0x58($s4)
    MEM_W(0X58, ctx->r20) = ctx->r3;
        goto L_8005FF60;
    // 0x8005FE50: sw          $v1, 0x58($s4)
    MEM_W(0X58, ctx->r20) = ctx->r3;
L_8005FE54:
    // 0x8005FE54: lw          $v0, 0xC0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FE58: sb          $s2, 0x3($s4)
    MEM_B(0X3, ctx->r20) = ctx->r18;
    // 0x8005FE5C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8005FE60: lw          $v1, 0xC0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FE64: and         $v0, $v0, $s3
    ctx->r2 = ctx->r2 & ctx->r19;
    // 0x8005FE68: srl         $v0, $v0, 16
    ctx->r2 = S32(U32(ctx->r2) >> 16);
    // 0x8005FE6C: sb          $v0, 0x9($s4)
    MEM_B(0X9, ctx->r20) = ctx->r2;
    // 0x8005FE70: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x8005FE74: lw          $v1, 0xC0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FE78: sw          $v0, 0xB0($s4)
    MEM_W(0XB0, ctx->r20) = ctx->r2;
    // 0x8005FE7C: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x8005FE80: lw          $v1, 0xC0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FE84: sw          $v0, 0xB4($s4)
    MEM_W(0XB4, ctx->r20) = ctx->r2;
    // 0x8005FE88: lw          $v0, 0xC0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FE8C: lw          $v1, 0xC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XC);
    // 0x8005FE90: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8005FE94: sw          $v0, 0xC0($s4)
    MEM_W(0XC0, ctx->r20) = ctx->r2;
    // 0x8005FE98: j           L_8005FF60
    // 0x8005FE9C: sw          $v1, 0xB8($s4)
    MEM_W(0XB8, ctx->r20) = ctx->r3;
        goto L_8005FF60;
    // 0x8005FE9C: sw          $v1, 0xB8($s4)
    MEM_W(0XB8, ctx->r20) = ctx->r3;
L_8005FEA0:
    // 0x8005FEA0: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x8005FEA4: lw          $v1, 0xC0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FEA8: sw          $v0, 0x70($s4)
    MEM_W(0X70, ctx->r20) = ctx->r2;
    // 0x8005FEAC: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x8005FEB0: lw          $v1, 0xC0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FEB4: sw          $v0, 0x74($s4)
    MEM_W(0X74, ctx->r20) = ctx->r2;
    // 0x8005FEB8: lw          $v0, 0xC0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FEBC: lw          $v1, 0xC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XC);
    // 0x8005FEC0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8005FEC4: sw          $v0, 0xC0($s4)
    MEM_W(0XC0, ctx->r20) = ctx->r2;
    // 0x8005FEC8: j           L_8005FF60
    // 0x8005FECC: sw          $v1, 0x78($s4)
    MEM_W(0X78, ctx->r20) = ctx->r3;
        goto L_8005FF60;
    // 0x8005FECC: sw          $v1, 0x78($s4)
    MEM_W(0X78, ctx->r20) = ctx->r3;
L_8005FED0:
    // 0x8005FED0: lw          $v0, 0x4($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X4);
    // 0x8005FED4: lw          $v1, 0xC0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FED8: sw          $v0, 0x80($s4)
    MEM_W(0X80, ctx->r20) = ctx->r2;
    // 0x8005FEDC: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x8005FEE0: lw          $v1, 0xC0($s4)
    ctx->r3 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FEE4: sw          $v0, 0x84($s4)
    MEM_W(0X84, ctx->r20) = ctx->r2;
    // 0x8005FEE8: lw          $v0, 0xC0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FEEC: lw          $v1, 0xC($v1)
    ctx->r3 = MEM_W(ctx->r3, 0XC);
    // 0x8005FEF0: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8005FEF4: sw          $v0, 0xC0($s4)
    MEM_W(0XC0, ctx->r20) = ctx->r2;
    // 0x8005FEF8: j           L_8005FF60
    // 0x8005FEFC: sw          $v1, 0x88($s4)
    MEM_W(0X88, ctx->r20) = ctx->r3;
        goto L_8005FF60;
    // 0x8005FEFC: sw          $v1, 0x88($s4)
    MEM_W(0X88, ctx->r20) = ctx->r3;
L_8005FF00:
    // 0x8005FF00: jal         0x80054578
    // 0x8005FF04: nop

    func_80054578_2F978(rdram, ctx);
        goto after_0;
    // 0x8005FF04: nop

    after_0:
    // 0x8005FF08: j           L_8005FF28
    // 0x8005FF0C: nop

        goto L_8005FF28;
    // 0x8005FF0C: nop

L_8005FF10:
    // 0x8005FF10: jal         0x800545C0
    // 0x8005FF14: nop

    func_800545C0_2F9C0(rdram, ctx);
        goto after_1;
    // 0x8005FF14: nop

    after_1:
    // 0x8005FF18: j           L_8005FF28
    // 0x8005FF1C: nop

        goto L_8005FF28;
    // 0x8005FF1C: nop

L_8005FF20:
    // 0x8005FF20: jal         0x80054610
    // 0x8005FF24: nop

    func_80054610_2FA10(rdram, ctx);
        goto after_2;
    // 0x8005FF24: nop

    after_2:
L_8005FF28:
    // 0x8005FF28: lw          $v0, 0xC0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC0);
L_8005FF2C:
    // 0x8005FF2C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8005FF30: j           L_8005FF60
    // 0x8005FF34: sw          $v0, 0xC0($s4)
    MEM_W(0XC0, ctx->r20) = ctx->r2;
        goto L_8005FF60;
    // 0x8005FF34: sw          $v0, 0xC0($s4)
    MEM_W(0XC0, ctx->r20) = ctx->r2;
L_8005FF38:
    // 0x8005FF38: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    // 0x8005FF3C: jal         0x80054660
    // 0x8005FF40: nop

    func_80054660_2FA60(rdram, ctx);
        goto after_3;
    // 0x8005FF40: nop

    after_3:
    // 0x8005FF44: j           L_8005FF54
    // 0x8005FF48: nop

        goto L_8005FF54;
    // 0x8005FF48: nop

L_8005FF4C:
    // 0x8005FF4C: jal         0x800546A0
    // 0x8005FF50: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    func_800546A0_2FAA0(rdram, ctx);
        goto after_4;
    // 0x8005FF50: lw          $a0, 0x4($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X4);
    after_4:
L_8005FF54:
    // 0x8005FF54: lw          $v0, 0xC0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XC0);
    // 0x8005FF58: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8005FF5C: sw          $v0, 0xC0($s4)
    MEM_W(0XC0, ctx->r20) = ctx->r2;
L_8005FF60:
    // 0x8005FF60: beq         $s0, $zero, L_8005FBDC
    if (ctx->r16 == 0) {
        // 0x8005FF64: nop
    
            goto L_8005FBDC;
    }
    // 0x8005FF64: nop

L_8005FF68:
    // 0x8005FF68: lw          $v0, 0x10($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X10);
    // 0x8005FF6C: lw          $t3, 0x20($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X20);
    // 0x8005FF70: lw          $v1, 0x14($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X14);
    // 0x8005FF74: lw          $t4, 0x24($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X24);
    // 0x8005FF78: lw          $a0, 0x18($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X18);
    // 0x8005FF7C: lw          $t5, 0x28($s4)
    ctx->r13 = MEM_W(ctx->r20, 0X28);
    // 0x8005FF80: lw          $a1, 0x40($s4)
    ctx->r5 = MEM_W(ctx->r20, 0X40);
    // 0x8005FF84: lw          $t6, 0x50($s4)
    ctx->r14 = MEM_W(ctx->r20, 0X50);
    // 0x8005FF88: lw          $a2, 0x44($s4)
    ctx->r6 = MEM_W(ctx->r20, 0X44);
    // 0x8005FF8C: lw          $t7, 0x54($s4)
    ctx->r15 = MEM_W(ctx->r20, 0X54);
    // 0x8005FF90: lw          $a3, 0x48($s4)
    ctx->r7 = MEM_W(ctx->r20, 0X48);
    // 0x8005FF94: lw          $s0, 0x58($s4)
    ctx->r16 = MEM_W(ctx->r20, 0X58);
    // 0x8005FF98: lw          $t0, 0x70($s4)
    ctx->r8 = MEM_W(ctx->r20, 0X70);
    // 0x8005FF9C: lw          $s1, 0x80($s4)
    ctx->r17 = MEM_W(ctx->r20, 0X80);
    // 0x8005FFA0: lw          $t1, 0x74($s4)
    ctx->r9 = MEM_W(ctx->r20, 0X74);
    // 0x8005FFA4: lw          $s2, 0x84($s4)
    ctx->r18 = MEM_W(ctx->r20, 0X84);
    // 0x8005FFA8: lw          $t2, 0x78($s4)
    ctx->r10 = MEM_W(ctx->r20, 0X78);
    // 0x8005FFAC: lw          $s3, 0x88($s4)
    ctx->r19 = MEM_W(ctx->r20, 0X88);
    // 0x8005FFB0: addu        $v0, $v0, $t3
    ctx->r2 = ADD32(ctx->r2, ctx->r11);
    // 0x8005FFB4: addu        $v1, $v1, $t4
    ctx->r3 = ADD32(ctx->r3, ctx->r12);
    // 0x8005FFB8: addu        $a0, $a0, $t5
    ctx->r4 = ADD32(ctx->r4, ctx->r13);
    // 0x8005FFBC: addu        $a1, $a1, $t6
    ctx->r5 = ADD32(ctx->r5, ctx->r14);
    // 0x8005FFC0: addu        $a2, $a2, $t7
    ctx->r6 = ADD32(ctx->r6, ctx->r15);
    // 0x8005FFC4: addu        $a3, $a3, $s0
    ctx->r7 = ADD32(ctx->r7, ctx->r16);
    // 0x8005FFC8: addu        $t0, $t0, $s1
    ctx->r8 = ADD32(ctx->r8, ctx->r17);
    // 0x8005FFCC: addu        $t1, $t1, $s2
    ctx->r9 = ADD32(ctx->r9, ctx->r18);
    // 0x8005FFD0: addu        $t2, $t2, $s3
    ctx->r10 = ADD32(ctx->r10, ctx->r19);
    // 0x8005FFD4: sw          $v0, 0x10($s4)
    MEM_W(0X10, ctx->r20) = ctx->r2;
    // 0x8005FFD8: sw          $v1, 0x14($s4)
    MEM_W(0X14, ctx->r20) = ctx->r3;
    // 0x8005FFDC: sw          $a0, 0x18($s4)
    MEM_W(0X18, ctx->r20) = ctx->r4;
    // 0x8005FFE0: sw          $a1, 0x40($s4)
    MEM_W(0X40, ctx->r20) = ctx->r5;
    // 0x8005FFE4: sw          $a2, 0x44($s4)
    MEM_W(0X44, ctx->r20) = ctx->r6;
    // 0x8005FFE8: sw          $a3, 0x48($s4)
    MEM_W(0X48, ctx->r20) = ctx->r7;
    // 0x8005FFEC: sw          $t0, 0x70($s4)
    MEM_W(0X70, ctx->r20) = ctx->r8;
    // 0x8005FFF0: sw          $t1, 0x74($s4)
    MEM_W(0X74, ctx->r20) = ctx->r9;
    // 0x8005FFF4: sw          $t2, 0x78($s4)
    MEM_W(0X78, ctx->r20) = ctx->r10;
    // 0x8005FFF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8005FFFC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80060000: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80060004: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80060008: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8006000C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80060010: jr          $ra
    // 0x80060014: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80060014: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80064DF8_401F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80064DF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80064DFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80064E00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80064E04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80064E08: lw          $a0, 0x6C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6C);
    // 0x80064E0C: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80064E10: addiu       $v0, $zero, 0xD5
    ctx->r2 = ADD32(0, 0XD5);
    // 0x80064E14: bne         $v1, $v0, L_80064E68
    if (ctx->r3 != ctx->r2) {
        // 0x80064E18: nop
    
            goto L_80064E68;
    }
    // 0x80064E18: nop

    // 0x80064E1C: jal         0x800A3450
    // 0x80064E20: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80064E20: nop

    after_0:
    // 0x80064E24: lw          $a0, 0x6C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6C);
    // 0x80064E28: lbu         $v1, 0x1($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X1);
    // 0x80064E2C: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x80064E30: bne         $v1, $zero, L_80064E3C
    if (ctx->r3 != 0) {
        // 0x80064E34: nop
    
            goto L_80064E3C;
    }
    // 0x80064E34: nop

    // 0x80064E38: break       7
    do_break(2147896888);
L_80064E3C:
    // 0x80064E3C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80064E40: bne         $v1, $at, L_80064E54
    if (ctx->r3 != ctx->r1) {
        // 0x80064E44: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80064E54;
    }
    // 0x80064E44: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80064E48: bne         $v0, $at, L_80064E54
    if (ctx->r2 != ctx->r1) {
        // 0x80064E4C: nop
    
            goto L_80064E54;
    }
    // 0x80064E4C: nop

    // 0x80064E50: break       6
    do_break(2147896912);
L_80064E54:
    // 0x80064E54: mfhi        $v1
    ctx->r3 = hi;
    // 0x80064E58: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80064E5C: lbu         $v1, 0x2($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2);
    // 0x80064E60: j           L_80064E70
    // 0x80064E64: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
        goto L_80064E70;
    // 0x80064E64: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
L_80064E68:
    // 0x80064E68: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x80064E6C: andi        $a0, $v1, 0xFF
    ctx->r4 = ctx->r3 & 0XFF;
L_80064E70:
    // 0x80064E70: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80064E74: bne         $a0, $v0, L_80064EA8
    if (ctx->r4 != ctx->r2) {
        // 0x80064E78: addiu       $v0, $zero, 0xD5
        ctx->r2 = ADD32(0, 0XD5);
            goto L_80064EA8;
    }
    // 0x80064E78: addiu       $v0, $zero, 0xD5
    ctx->r2 = ADD32(0, 0XD5);
    // 0x80064E7C: lw          $a0, 0x6C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X6C);
    // 0x80064E80: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80064E84: bne         $v1, $v0, L_80064EA0
    if (ctx->r3 != ctx->r2) {
        // 0x80064E88: addiu       $v0, $a0, 0x3
        ctx->r2 = ADD32(ctx->r4, 0X3);
            goto L_80064EA0;
    }
    // 0x80064E88: addiu       $v0, $a0, 0x3
    ctx->r2 = ADD32(ctx->r4, 0X3);
    // 0x80064E8C: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x80064E90: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80064E94: addu        $v0, $a0, $v0
    ctx->r2 = ADD32(ctx->r4, ctx->r2);
    // 0x80064E98: j           L_80064F04
    // 0x80064E9C: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
        goto L_80064F04;
    // 0x80064E9C: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
L_80064EA0:
    // 0x80064EA0: j           L_80064F04
    // 0x80064EA4: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
        goto L_80064F04;
    // 0x80064EA4: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
L_80064EA8:
    // 0x80064EA8: lw          $a1, 0x44($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X44);
    // 0x80064EAC: beq         $a1, $zero, L_80064EE0
    if (ctx->r5 == 0) {
        // 0x80064EB0: sh          $v1, 0xC2($s0)
        MEM_H(0XC2, ctx->r16) = ctx->r3;
            goto L_80064EE0;
    }
    // 0x80064EB0: sh          $v1, 0xC2($s0)
    MEM_H(0XC2, ctx->r16) = ctx->r3;
    // 0x80064EB4: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80064EB8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x80064EBC: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80064EC0: srl         $v1, $v0, 8
    ctx->r3 = S32(U32(ctx->r2) >> 8);
    // 0x80064EC4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80064EC8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80064ECC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80064ED0: addu        $v1, $a1, $v1
    ctx->r3 = ADD32(ctx->r5, ctx->r3);
    // 0x80064ED4: sw          $v1, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r3;
    // 0x80064ED8: j           L_80064EF8
    // 0x80064EDC: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
        goto L_80064EF8;
    // 0x80064EDC: sw          $v1, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r3;
L_80064EE0:
    // 0x80064EE0: sll         $v0, $a0, 2
    ctx->r2 = S32(ctx->r4 << 2);
    // 0x80064EE4: lui         $at, 0x800B
    ctx->r1 = S32(0X800B << 16);
    // 0x80064EE8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80064EEC: lw          $v0, 0x27EC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X27EC);
    // 0x80064EF0: sw          $v0, 0x48($s0)
    MEM_W(0X48, ctx->r16) = ctx->r2;
    // 0x80064EF4: sw          $v0, 0x6C($s0)
    MEM_W(0X6C, ctx->r16) = ctx->r2;
L_80064EF8:
    // 0x80064EF8: sb          $zero, 0x3E($s0)
    MEM_B(0X3E, ctx->r16) = 0;
    // 0x80064EFC: sb          $zero, 0x3C($s0)
    MEM_B(0X3C, ctx->r16) = 0;
    // 0x80064F00: sb          $zero, 0x72($s0)
    MEM_B(0X72, ctx->r16) = 0;
L_80064F04:
    // 0x80064F04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80064F08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80064F0C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80064F10: jr          $ra
    // 0x80064F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80064F14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8002B274_6674(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002B274: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x8002B278: lw          $a0, 0x22D0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X22D0);
    // 0x8002B27C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002B280: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002B284: jal         0x8008ADE8
    // 0x8002B288: nop

    func_8008ADE8_661E8(rdram, ctx);
        goto after_0;
    // 0x8002B288: nop

    after_0:
    // 0x8002B28C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002B290: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x8002B294: jr          $ra
    // 0x8002B298: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002B298: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004F978_2AD78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004F978: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004F97C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004F980: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8004F984: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8004F988: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x8004F98C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8004F990: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8004F994: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8004F998: lh          $v1, 0x0($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X0);
    // 0x8004F99C: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x8004F9A0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8004F9A4: mult        $v1, $v1
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004F9A8: mflo        $v1
    ctx->r3 = lo;
    // 0x8004F9AC: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x8004F9B0: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8004F9B4: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x8004F9B8: mult        $a0, $a0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8004F9BC: mflo        $a0
    ctx->r4 = lo;
    // 0x8004F9C0: addu        $s2, $a2, $zero
    ctx->r18 = ADD32(ctx->r6, 0);
    // 0x8004F9C4: addu        $s3, $a3, $zero
    ctx->r19 = ADD32(ctx->r7, 0);
    // 0x8004F9C8: jal         0x80032424
    // 0x8004F9CC: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    func_80032424_D824(rdram, ctx);
        goto after_0;
    // 0x8004F9CC: addu        $a0, $v1, $a0
    ctx->r4 = ADD32(ctx->r3, ctx->r4);
    after_0:
    // 0x8004F9D0: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x8004F9D4: lh          $a1, 0x2($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X2);
    // 0x8004F9D8: addu        $s0, $s3, $zero
    ctx->r16 = ADD32(ctx->r19, 0);
    // 0x8004F9DC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8004F9E0: jal         0x80032664
    // 0x8004F9E4: subu        $a1, $v1, $a1
    ctx->r5 = SUB32(ctx->r3, ctx->r5);
    func_80032664_DA64(rdram, ctx);
        goto after_1;
    // 0x8004F9E4: subu        $a1, $v1, $a1
    ctx->r5 = SUB32(ctx->r3, ctx->r5);
    after_1:
    // 0x8004F9E8: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x8004F9EC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8004F9F0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8004F9F4: subu        $v1, $v1, $s2
    ctx->r3 = SUB32(ctx->r3, ctx->r18);
    // 0x8004F9F8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8004F9FC: slti        $a1, $v1, 0x800
    ctx->r5 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x8004FA00: beq         $a1, $zero, L_8004FA2C
    if (ctx->r5 == 0) {
        // 0x8004FA04: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_8004FA2C;
    }
    // 0x8004FA04: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x8004FA08: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x8004FA0C: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x8004FA10: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004FA14: beq         $v0, $zero, L_8004FA24
    if (ctx->r2 == 0) {
        // 0x8004FA18: nop
    
            goto L_8004FA24;
    }
    // 0x8004FA18: nop

    // 0x8004FA1C: j           L_8004FA48
    // 0x8004FA20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
        goto L_8004FA48;
    // 0x8004FA20: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
L_8004FA24:
    // 0x8004FA24: bne         $a1, $zero, L_8004FA4C
    if (ctx->r5 != 0) {
        // 0x8004FA28: slti        $v0, $a0, 0x801
        ctx->r2 = SIGNED(ctx->r4) < 0X801 ? 1 : 0;
            goto L_8004FA4C;
    }
    // 0x8004FA28: slti        $v0, $a0, 0x801
    ctx->r2 = SIGNED(ctx->r4) < 0X801 ? 1 : 0;
L_8004FA2C:
    // 0x8004FA2C: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    // 0x8004FA30: subu        $v1, $a1, $a0
    ctx->r3 = SUB32(ctx->r5, ctx->r4);
    // 0x8004FA34: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    // 0x8004FA38: sra         $v0, $v0, 15
    ctx->r2 = S32(SIGNED(ctx->r2) >> 15);
    // 0x8004FA3C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8004FA40: bnel        $v1, $zero, L_8004FA48
    if (ctx->r3 != 0) {
        // 0x8004FA44: subu        $s0, $a1, $a0
        ctx->r16 = SUB32(ctx->r5, ctx->r4);
            goto L_8004FA48;
    }
    goto skip_0;
    // 0x8004FA44: subu        $s0, $a1, $a0
    ctx->r16 = SUB32(ctx->r5, ctx->r4);
    skip_0:
L_8004FA48:
    // 0x8004FA48: slti        $v0, $a0, 0x801
    ctx->r2 = SIGNED(ctx->r4) < 0X801 ? 1 : 0;
L_8004FA4C:
    // 0x8004FA4C: bnel        $v0, $zero, L_8004FA5C
    if (ctx->r2 != 0) {
        // 0x8004FA50: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_8004FA5C;
    }
    goto skip_1;
    // 0x8004FA50: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
    skip_1:
    // 0x8004FA54: negu        $v0, $s0
    ctx->r2 = SUB32(0, ctx->r16);
    // 0x8004FA58: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
L_8004FA5C:
    // 0x8004FA5C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8004FA60: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8004FA64: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8004FA68: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8004FA6C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004FA70: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004FA74: jr          $ra
    // 0x8004FA78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8004FA78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008B200_66600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B200: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008B204: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8008B208: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8008B20C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8008B210: bne         $s0, $zero, L_8008B23C
    if (ctx->r16 != 0) {
        // 0x8008B214: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_8008B23C;
    }
    // 0x8008B214: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8008B218: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008B21C: lw          $v1, 0x4FB4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4FB4);
    // 0x8008B220: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8008B224: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    // 0x8008B228: sw          $v1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r3;
    // 0x8008B22C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008B230: sw          $v1, 0x4FB4($at)
    MEM_W(0X4FB4, ctx->r1) = ctx->r3;
    // 0x8008B234: jal         0x8008B4F4
    // 0x8008B238: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8008B4F4_668F4(rdram, ctx);
        goto after_0;
    // 0x8008B238: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
L_8008B23C:
    // 0x8008B23C: beq         $v0, $zero, L_8008B24C
    if (ctx->r2 == 0) {
        // 0x8008B240: nop
    
            goto L_8008B24C;
    }
    // 0x8008B240: nop

    // 0x8008B244: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008B248: sw          $s0, 0x4FB0($at)
    MEM_W(0X4FB0, ctx->r1) = ctx->r16;
L_8008B24C:
    // 0x8008B24C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8008B250: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8008B254: jr          $ra
    // 0x8008B258: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8008B258: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80089F70_65370(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80089F70: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80089F74: lw          $v0, 0x2BE8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2BE8);
    // 0x80089F78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80089F7C: bne         $v0, $zero, L_80089F94
    if (ctx->r2 != 0) {
        // 0x80089F80: sw          $ra, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r31;
            goto L_80089F94;
    }
    // 0x80089F80: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80089F84: jal         0x80093BB0
    // 0x80089F88: nop

    func_80093BB0_6EFB0(rdram, ctx);
        goto after_0;
    // 0x80089F88: nop

    after_0:
    // 0x80089F8C: jal         0x80093BD0
    // 0x80089F90: nop

    func_80093BD0_6EFD0(rdram, ctx);
        goto after_1;
    // 0x80089F90: nop

    after_1:
L_80089F94:
    // 0x80089F94: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80089F98: jr          $ra
    // 0x80089F9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80089F9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004EEAC_2A2AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004EEAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004EEB0: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x8004EEB4: lw          $a1, -0x714C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X714C);
    // 0x8004EEB8: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8004EEBC: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x8004EEC0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8004EEC4: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x8004EEC8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004EECC: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8004EED0: addiu       $s1, $s1, -0x420
    ctx->r17 = ADD32(ctx->r17, -0X420);
    // 0x8004EED4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004EED8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_8004EEDC:
    // 0x8004EEDC: sllv        $v0, $a1, $a0
    ctx->r2 = S32(ctx->r5 << (ctx->r4 & 31));
    // 0x8004EEE0: bltzl       $v0, L_8004EF20
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004EEE4: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8004EF20;
    }
    goto skip_0;
    // 0x8004EEE4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x8004EEE8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8004EEEC: lw          $v0, -0x714C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X714C);
    // 0x8004EEF0: srlv        $v1, $v1, $a0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r4 & 31));
    // 0x8004EEF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8004EEF8: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8004EEFC: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8004EF00: sw          $v0, -0x714C($at)
    MEM_W(-0X714C, ctx->r1) = ctx->r2;
    // 0x8004EF04: lbu         $s0, 0x1($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X1);
    // 0x8004EF08: jal         0x8009A2B0
    // 0x8004EF0C: addiu       $a1, $zero, 0x3C8
    ctx->r5 = ADD32(0, 0X3C8);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x8004EF0C: addiu       $a1, $zero, 0x3C8
    ctx->r5 = ADD32(0, 0X3C8);
    after_0:
    // 0x8004EF10: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8004EF14: sb          $s2, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r18;
    // 0x8004EF18: j           L_8004EF30
    // 0x8004EF1C: sb          $s0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r16;
        goto L_8004EF30;
    // 0x8004EF1C: sb          $s0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r16;
L_8004EF20:
    // 0x8004EF20: slti        $v0, $a0, 0x12
    ctx->r2 = SIGNED(ctx->r4) < 0X12 ? 1 : 0;
    // 0x8004EF24: bne         $v0, $zero, L_8004EEDC
    if (ctx->r2 != 0) {
        // 0x8004EF28: addiu       $s1, $s1, 0x3C8
        ctx->r17 = ADD32(ctx->r17, 0X3C8);
            goto L_8004EEDC;
    }
    // 0x8004EF28: addiu       $s1, $s1, 0x3C8
    ctx->r17 = ADD32(ctx->r17, 0X3C8);
    // 0x8004EF2C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8004EF30:
    // 0x8004EF30: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004EF34: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8004EF38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004EF3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004EF40: jr          $ra
    // 0x8004EF44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8004EF44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8008E614_69A14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008E614: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008E618: lw          $v0, 0x4FF8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FF8);
    // 0x8008E61C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008E620: beq         $v0, $zero, L_8008E654
    if (ctx->r2 == 0) {
        // 0x8008E624: sw          $ra, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r31;
            goto L_8008E654;
    }
    // 0x8008E624: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
L_8008E628:
    // 0x8008E628: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008E62C: addiu       $a0, $a0, 0x5000
    ctx->r4 = ADD32(ctx->r4, 0X5000);
    // 0x8008E630: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8008E634: jal         0x8009A5E0
    // 0x8008E638: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8008E638: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8008E63C: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008E640: lw          $v0, 0x4FF8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FF8);
    // 0x8008E644: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8008E648: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008E64C: bne         $v0, $zero, L_8008E628
    if (ctx->r2 != 0) {
        // 0x8008E650: sw          $v0, 0x4FF8($at)
        MEM_W(0X4FF8, ctx->r1) = ctx->r2;
            goto L_8008E628;
    }
    // 0x8008E650: sw          $v0, 0x4FF8($at)
    MEM_W(0X4FF8, ctx->r1) = ctx->r2;
L_8008E654:
    // 0x8008E654: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008E658: lw          $v1, 0x4FE0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4FE0);
    // 0x8008E65C: beq         $v1, $zero, L_8008E6D8
    if (ctx->r3 == 0) {
        // 0x8008E660: nop
    
            goto L_8008E6D8;
    }
    // 0x8008E660: nop

L_8008E664:
    // 0x8008E664: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x8008E668: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8008E66C: bne         $v0, $zero, L_8008E6CC
    if (ctx->r2 != 0) {
        // 0x8008E670: sw          $v0, 0x8($v1)
        MEM_W(0X8, ctx->r3) = ctx->r2;
            goto L_8008E6CC;
    }
    // 0x8008E670: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x8008E674: lw          $a1, 0x4($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X4);
    // 0x8008E678: beq         $a1, $zero, L_8008E688
    if (ctx->r5 == 0) {
        // 0x8008E67C: nop
    
            goto L_8008E688;
    }
    // 0x8008E67C: nop

    // 0x8008E680: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8008E684: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
L_8008E688:
    // 0x8008E688: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x8008E68C: beq         $a0, $zero, L_8008E6A0
    if (ctx->r4 == 0) {
        // 0x8008E690: nop
    
            goto L_8008E6A0;
    }
    // 0x8008E690: nop

    // 0x8008E694: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x8008E698: j           L_8008E6AC
    // 0x8008E69C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
        goto L_8008E6AC;
    // 0x8008E69C: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_8008E6A0:
    // 0x8008E6A0: lw          $v0, 0x4($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X4);
    // 0x8008E6A4: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008E6A8: sw          $v0, 0x4FE0($at)
    MEM_W(0X4FE0, ctx->r1) = ctx->r2;
L_8008E6AC:
    // 0x8008E6AC: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008E6B0: lw          $v0, 0x4FE4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4FE4);
    // 0x8008E6B4: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    // 0x8008E6B8: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008E6BC: sw          $v1, 0x4FE4($at)
    MEM_W(0X4FE4, ctx->r1) = ctx->r3;
    // 0x8008E6C0: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
    // 0x8008E6C4: j           L_8008E6D0
    // 0x8008E6C8: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
        goto L_8008E6D0;
    // 0x8008E6C8: addu        $v1, $a1, $zero
    ctx->r3 = ADD32(ctx->r5, 0);
L_8008E6CC:
    // 0x8008E6CC: lw          $v1, 0x4($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4);
L_8008E6D0:
    // 0x8008E6D0: bne         $v1, $zero, L_8008E664
    if (ctx->r3 != 0) {
        // 0x8008E6D4: nop
    
            goto L_8008E664;
    }
    // 0x8008E6D4: nop

L_8008E6D8:
    // 0x8008E6D8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8008E6DC: jr          $ra
    // 0x8008E6E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8008E6E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8007BFC8_573C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007BFC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007BFCC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8007BFD0: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8007BFD4: andi        $a0, $v0, 0x7FFF
    ctx->r4 = ctx->r2 & 0X7FFF;
    // 0x8007BFD8: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007BFDC: lhu         $v0, -0x44E6($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X44E6);
    // 0x8007BFE0: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x8007BFE4: andi        $a1, $v1, 0xFFFF
    ctx->r5 = ctx->r3 & 0XFFFF;
    // 0x8007BFE8: beq         $v0, $a1, L_8007C0F8
    if (ctx->r2 == ctx->r5) {
        // 0x8007BFEC: andi        $a0, $a0, 0x3F
        ctx->r4 = ctx->r4 & 0X3F;
            goto L_8007C0F8;
    }
    // 0x8007BFEC: andi        $a0, $a0, 0x3F
    ctx->r4 = ctx->r4 & 0X3F;
    // 0x8007BFF0: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007BFF4: sh          $v1, -0x44E6($at)
    MEM_H(-0X44E6, ctx->r1) = ctx->r3;
    // 0x8007BFF8: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    // 0x8007BFFC: jal         0x80087248
    // 0x8007C000: srl         $a1, $a1, 6
    ctx->r5 = S32(U32(ctx->r5) >> 6);
    func_80087248_62648(rdram, ctx);
        goto after_0;
    // 0x8007C000: srl         $a1, $a1, 6
    ctx->r5 = S32(U32(ctx->r5) >> 6);
    after_0:
    // 0x8007C004: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8007C008: beq         $a3, $zero, L_8007C0FC
    if (ctx->r7 == 0) {
        // 0x8007C00C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8007C0FC;
    }
    // 0x8007C00C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8007C010: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8007C014: lbu         $v0, -0x44E0($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X44E0);
    // 0x8007C018: bne         $v0, $zero, L_8007C04C
    if (ctx->r2 != 0) {
        // 0x8007C01C: lui         $a1, 0xF500
        ctx->r5 = S32(0XF500 << 16);
            goto L_8007C04C;
    }
    // 0x8007C01C: lui         $a1, 0xF500
    ctx->r5 = S32(0XF500 << 16);
    // 0x8007C020: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007C024: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007C028: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007C02C: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8007C030: sb          $v0, -0x44E0($at)
    MEM_B(-0X44E0, ctx->r1) = ctx->r2;
    // 0x8007C034: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8007C038: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C03C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8007C040: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x8007C044: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x8007C048: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
L_8007C04C:
    // 0x8007C04C: ori         $a1, $a1, 0x100
    ctx->r5 = ctx->r5 | 0X100;
    // 0x8007C050: lui         $a2, 0x703
    ctx->r6 = S32(0X703 << 16);
    // 0x8007C054: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8007C058: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8007C05C: ori         $a2, $a2, 0xC000
    ctx->r6 = ctx->r6 | 0XC000;
    // 0x8007C060: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8007C064: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x8007C068: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C06C: sw          $a0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r4;
    // 0x8007C070: lui         $a0, 0xFD10
    ctx->r4 = S32(0XFD10 << 16);
    // 0x8007C074: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x8007C078: addiu       $a0, $v1, 0x10
    ctx->r4 = ADD32(ctx->r3, 0X10);
    // 0x8007C07C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C080: sw          $a0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r4;
    // 0x8007C084: lui         $a0, 0xE800
    ctx->r4 = S32(0XE800 << 16);
    // 0x8007C088: sw          $a0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r4;
    // 0x8007C08C: addiu       $a0, $v1, 0x18
    ctx->r4 = ADD32(ctx->r3, 0X18);
    // 0x8007C090: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C094: sw          $a0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r4;
    // 0x8007C098: lui         $a0, 0x700
    ctx->r4 = S32(0X700 << 16);
    // 0x8007C09C: sw          $a0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r4;
    // 0x8007C0A0: addiu       $a0, $v1, 0x20
    ctx->r4 = ADD32(ctx->r3, 0X20);
    // 0x8007C0A4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C0A8: sw          $a0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r4;
    // 0x8007C0AC: lui         $a0, 0xE600
    ctx->r4 = S32(0XE600 << 16);
    // 0x8007C0B0: sw          $a0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r4;
    // 0x8007C0B4: addiu       $a0, $v1, 0x28
    ctx->r4 = ADD32(ctx->r3, 0X28);
    // 0x8007C0B8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C0BC: sw          $a0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r4;
    // 0x8007C0C0: lui         $a0, 0xF000
    ctx->r4 = S32(0XF000 << 16);
    // 0x8007C0C4: sw          $a0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r4;
    // 0x8007C0C8: addiu       $a0, $v1, 0x30
    ctx->r4 = ADD32(ctx->r3, 0X30);
    // 0x8007C0CC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8007C0D0: sw          $a0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r4;
    // 0x8007C0D4: lui         $a0, 0xE700
    ctx->r4 = S32(0XE700 << 16);
    // 0x8007C0D8: sw          $a3, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r7;
    // 0x8007C0DC: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x8007C0E0: sw          $a1, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r5;
    // 0x8007C0E4: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x8007C0E8: sw          $a2, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r6;
    // 0x8007C0EC: sw          $a0, 0x28($v1)
    MEM_W(0X28, ctx->r3) = ctx->r4;
    // 0x8007C0F0: j           L_8007C0FC
    // 0x8007C0F4: sw          $zero, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = 0;
        goto L_8007C0FC;
    // 0x8007C0F4: sw          $zero, 0x2C($v1)
    MEM_W(0X2C, ctx->r3) = 0;
L_8007C0F8:
    // 0x8007C0F8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8007C0FC:
    // 0x8007C0FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8007C100: jr          $ra
    // 0x8007C104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007C104: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8005EB40_39F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8005EB40: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x8005EB44: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x8005EB48: lhu         $a0, 0x4($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EB4C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005EB50: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8005EB54: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005EB58: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x8005EB5C: beq         $v0, $zero, L_8005EFEC
    if (ctx->r2 == 0) {
        // 0x8005EB60: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_8005EFEC;
    }
    // 0x8005EB60: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8005EB64: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8005EB68: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
L_8005EB6C:
    // 0x8005EB6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005EB70: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8005EB74: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8005EB78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8005EB7C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8005EB80: sltiu       $v0, $v1, 0x1B
    ctx->r2 = ctx->r3 < 0X1B ? 1 : 0;
    // 0x8005EB84: beq         $v0, $zero, L_8005EFD0
    if (ctx->r2 == 0) {
        // 0x8005EB88: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8005EFD0;
    }
    // 0x8005EB88: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8005EB8C: lui         $at, 0x800D
    ctx->r1 = S32(0X800D << 16);
    // 0x8005EB90: addu        $at, $at, $v0
    gpr jr_addend_8005EB98 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8005EB94: lw          $v0, 0x2768($at)
    ctx->r2 = ADD32(ctx->r1, 0X2768);
    // 0x8005EB98: jr          $v0
    // 0x8005EB9C: nop

    switch (jr_addend_8005EB98 >> 2) {
        case 0: goto L_8005EBA0; break;
        case 1: goto L_8005EC28; break;
        case 2: goto L_8005EC54; break;
        case 3: goto L_8005EC80; break;
        case 4: goto L_8005ECAC; break;
        case 5: goto L_8005ECD0; break;
        case 6: goto L_8005ECF4; break;
        case 7: goto L_8005ED18; break;
        case 8: goto L_8005ED3C; break;
        case 9: goto L_8005ED60; break;
        case 10: goto L_8005ED84; break;
        case 11: goto L_8005EDA8; break;
        case 12: goto L_8005EDCC; break;
        case 13: goto L_8005EDF4; break;
        case 14: goto L_8005EE1C; break;
        case 15: goto L_8005EE2C; break;
        case 16: goto L_8005EE3C; break;
        case 17: goto L_8005EE68; break;
        case 18: goto L_8005EE78; break;
        case 19: goto L_8005EECC; break;
        case 20: goto L_8005EEF0; break;
        case 21: goto L_8005EF14; break;
        case 22: goto L_8005EF38; break;
        case 23: goto L_8005EF60; break;
        case 24: goto L_8005EF88; break;
        case 25: goto L_8005EFB8; break;
        case 26: goto L_8005EFB0; break;
        default: switch_error(__func__, 0x8005EB98, 0x800D2768);
    }
    // 0x8005EB9C: nop

L_8005EBA0:
    // 0x8005EBA0: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EBA4: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005EBA8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005EBAC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005EBB0: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x8005EBB4: sh          $v0, 0x14($a3)
    MEM_H(0X14, ctx->r7) = ctx->r2;
    // 0x8005EBB8: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EBBC: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005EBC0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005EBC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005EBC8: lhu         $v0, 0x4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4);
    // 0x8005EBCC: sh          $v0, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r2;
    // 0x8005EBD0: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EBD4: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005EBD8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005EBDC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005EBE0: lhu         $v0, 0x6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6);
    // 0x8005EBE4: lh          $v1, 0x16($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X16);
    // 0x8005EBE8: sh          $v0, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r2;
    // 0x8005EBEC: lh          $v0, 0x14($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X14);
    // 0x8005EBF0: lh          $a0, 0x18($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X18);
    // 0x8005EBF4: lh          $a1, 0x18($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X18);
    // 0x8005EBF8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8005EBFC: sw          $v1, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r3;
    // 0x8005EC00: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8005EC04: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8005EC08: sw          $v0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r2;
    // 0x8005EC0C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8005EC10: beq         $a1, $v0, L_8005EC1C
    if (ctx->r5 == ctx->r2) {
        // 0x8005EC14: sw          $a0, 0x24($a3)
        MEM_W(0X24, ctx->r7) = ctx->r4;
            goto L_8005EC1C;
    }
    // 0x8005EC14: sw          $a0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r4;
    // 0x8005EC18: sh          $t1, 0xAE($a3)
    MEM_H(0XAE, ctx->r7) = ctx->r9;
L_8005EC1C:
    // 0x8005EC1C: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EC20: j           L_8005EFCC
    // 0x8005EC24: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
        goto L_8005EFCC;
    // 0x8005EC24: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_8005EC28:
    // 0x8005EC28: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EC2C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005EC30: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005EC34: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005EC38: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x8005EC3C: sh          $v0, 0x14($a3)
    MEM_H(0X14, ctx->r7) = ctx->r2;
    // 0x8005EC40: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8005EC44: sw          $v0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r2;
    // 0x8005EC48: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EC4C: j           L_8005EFCC
    // 0x8005EC50: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_8005EFCC;
    // 0x8005EC50: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8005EC54:
    // 0x8005EC54: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EC58: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005EC5C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005EC60: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005EC64: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x8005EC68: sh          $v0, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r2;
    // 0x8005EC6C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8005EC70: sw          $v0, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r2;
    // 0x8005EC74: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EC78: j           L_8005EFCC
    // 0x8005EC7C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_8005EFCC;
    // 0x8005EC7C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8005EC80:
    // 0x8005EC80: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EC84: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005EC88: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005EC8C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005EC90: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x8005EC94: sh          $v0, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r2;
    // 0x8005EC98: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8005EC9C: sw          $v0, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r2;
    // 0x8005ECA0: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005ECA4: j           L_8005EFCC
    // 0x8005ECA8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_8005EFCC;
    // 0x8005ECA8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8005ECAC:
    // 0x8005ECAC: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005ECB0: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005ECB4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005ECB8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005ECBC: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x8005ECC0: sb          $v0, 0xAC($a3)
    MEM_B(0XAC, ctx->r7) = ctx->r2;
    // 0x8005ECC4: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005ECC8: j           L_8005EFCC
    // 0x8005ECCC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_8005EFCC;
    // 0x8005ECCC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8005ECD0:
    // 0x8005ECD0: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005ECD4: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005ECD8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005ECDC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005ECE0: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x8005ECE4: sh          $v0, 0x44($a3)
    MEM_H(0X44, ctx->r7) = ctx->r2;
    // 0x8005ECE8: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005ECEC: j           L_8005EFCC
    // 0x8005ECF0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_8005EFCC;
    // 0x8005ECF0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8005ECF4:
    // 0x8005ECF4: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005ECF8: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005ECFC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005ED00: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005ED04: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x8005ED08: sh          $v0, 0x4C($a3)
    MEM_H(0X4C, ctx->r7) = ctx->r2;
    // 0x8005ED0C: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005ED10: j           L_8005EFCC
    // 0x8005ED14: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_8005EFCC;
    // 0x8005ED14: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8005ED18:
    // 0x8005ED18: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005ED1C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005ED20: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005ED24: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005ED28: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x8005ED2C: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
    // 0x8005ED30: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005ED34: j           L_8005EFCC
    // 0x8005ED38: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_8005EFCC;
    // 0x8005ED38: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8005ED3C:
    // 0x8005ED3C: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005ED40: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005ED44: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005ED48: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005ED4C: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x8005ED50: sh          $v0, 0x4E($a3)
    MEM_H(0X4E, ctx->r7) = ctx->r2;
    // 0x8005ED54: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005ED58: j           L_8005EFCC
    // 0x8005ED5C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_8005EFCC;
    // 0x8005ED5C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8005ED60:
    // 0x8005ED60: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005ED64: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005ED68: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005ED6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005ED70: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x8005ED74: sh          $v0, 0x48($a3)
    MEM_H(0X48, ctx->r7) = ctx->r2;
    // 0x8005ED78: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005ED7C: j           L_8005EFCC
    // 0x8005ED80: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_8005EFCC;
    // 0x8005ED80: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8005ED84:
    // 0x8005ED84: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005ED88: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005ED8C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005ED90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005ED94: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x8005ED98: sh          $v0, 0x50($a3)
    MEM_H(0X50, ctx->r7) = ctx->r2;
    // 0x8005ED9C: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EDA0: j           L_8005EFCC
    // 0x8005EDA4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_8005EFCC;
    // 0x8005EDA4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8005EDA8:
    // 0x8005EDA8: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EDAC: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005EDB0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005EDB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005EDB8: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x8005EDBC: sh          $v0, 0x56($a3)
    MEM_H(0X56, ctx->r7) = ctx->r2;
    // 0x8005EDC0: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EDC4: j           L_8005EFCC
    // 0x8005EDC8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_8005EFCC;
    // 0x8005EDC8: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8005EDCC:
    // 0x8005EDCC: lhu         $v1, 0x4($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EDD0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8005EDD4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8005EDD8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005EDDC: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EDE0: lhu         $v1, 0x2($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2);
    // 0x8005EDE4: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8005EDE8: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x8005EDEC: j           L_8005EFD0
    // 0x8005EDF0: sh          $v1, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r3;
        goto L_8005EFD0;
    // 0x8005EDF0: sh          $v1, 0x8($a2)
    MEM_H(0X8, ctx->r6) = ctx->r3;
L_8005EDF4:
    // 0x8005EDF4: lhu         $v1, 0x4($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EDF8: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8005EDFC: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8005EE00: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005EE04: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EE08: lhu         $v1, 0x2($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2);
    // 0x8005EE0C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8005EE10: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x8005EE14: j           L_8005EFD0
    // 0x8005EE18: sb          $v1, 0x13($a2)
    MEM_B(0X13, ctx->r6) = ctx->r3;
        goto L_8005EFD0;
    // 0x8005EE18: sb          $v1, 0x13($a2)
    MEM_B(0X13, ctx->r6) = ctx->r3;
L_8005EE1C:
    // 0x8005EE1C: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EE20: sb          $zero, 0x12($a2)
    MEM_B(0X12, ctx->r6) = 0;
    // 0x8005EE24: j           L_8005EFCC
    // 0x8005EE28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8005EFCC;
    // 0x8005EE28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8005EE2C:
    // 0x8005EE2C: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EE30: sb          $t0, 0x12($a2)
    MEM_B(0X12, ctx->r6) = ctx->r8;
    // 0x8005EE34: j           L_8005EFCC
    // 0x8005EE38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8005EFCC;
    // 0x8005EE38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8005EE3C:
    // 0x8005EE3C: sb          $t0, 0xD($a3)
    MEM_B(0XD, ctx->r7) = ctx->r8;
    // 0x8005EE40: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EE44: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005EE48: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005EE4C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005EE50: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x8005EE54: sb          $zero, 0xF($a3)
    MEM_B(0XF, ctx->r7) = 0;
    // 0x8005EE58: sb          $v0, 0xE($a3)
    MEM_B(0XE, ctx->r7) = ctx->r2;
    // 0x8005EE5C: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EE60: j           L_8005EFCC
    // 0x8005EE64: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_8005EFCC;
    // 0x8005EE64: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8005EE68:
    // 0x8005EE68: sb          $zero, 0xD($a3)
    MEM_B(0XD, ctx->r7) = 0;
    // 0x8005EE6C: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EE70: j           L_8005EFCC
    // 0x8005EE74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8005EFCC;
    // 0x8005EE74: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8005EE78:
    // 0x8005EE78: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EE7C: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005EE80: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005EE84: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005EE88: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x8005EE8C: sh          $v0, 0x158($a3)
    MEM_H(0X158, ctx->r7) = ctx->r2;
    // 0x8005EE90: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EE94: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005EE98: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005EE9C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005EEA0: lhu         $v0, 0x4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4);
    // 0x8005EEA4: sh          $v0, 0x15A($a3)
    MEM_H(0X15A, ctx->r7) = ctx->r2;
    // 0x8005EEA8: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EEAC: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005EEB0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005EEB4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005EEB8: lhu         $v0, 0x6($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X6);
    // 0x8005EEBC: sh          $v0, 0x15C($a3)
    MEM_H(0X15C, ctx->r7) = ctx->r2;
    // 0x8005EEC0: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EEC4: j           L_8005EFCC
    // 0x8005EEC8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
        goto L_8005EFCC;
    // 0x8005EEC8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_8005EECC:
    // 0x8005EECC: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EED0: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005EED4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005EED8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005EEDC: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x8005EEE0: sh          $v0, 0x158($a3)
    MEM_H(0X158, ctx->r7) = ctx->r2;
    // 0x8005EEE4: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EEE8: j           L_8005EFCC
    // 0x8005EEEC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_8005EFCC;
    // 0x8005EEEC: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8005EEF0:
    // 0x8005EEF0: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EEF4: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005EEF8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005EEFC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005EF00: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x8005EF04: sh          $v0, 0x15A($a3)
    MEM_H(0X15A, ctx->r7) = ctx->r2;
    // 0x8005EF08: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EF0C: j           L_8005EFCC
    // 0x8005EF10: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_8005EFCC;
    // 0x8005EF10: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8005EF14:
    // 0x8005EF14: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EF18: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005EF1C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005EF20: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005EF24: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
    // 0x8005EF28: sh          $v0, 0x15C($a3)
    MEM_H(0X15C, ctx->r7) = ctx->r2;
    // 0x8005EF2C: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EF30: j           L_8005EFCC
    // 0x8005EF34: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_8005EFCC;
    // 0x8005EF34: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8005EF38:
    // 0x8005EF38: lhu         $v1, 0x4($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EF3C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8005EF40: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8005EF44: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005EF48: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EF4C: lhu         $v1, 0x2($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2);
    // 0x8005EF50: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8005EF54: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x8005EF58: j           L_8005EFD0
    // 0x8005EF5C: sh          $v1, 0xA($a2)
    MEM_H(0XA, ctx->r6) = ctx->r3;
        goto L_8005EFD0;
    // 0x8005EF5C: sh          $v1, 0xA($a2)
    MEM_H(0XA, ctx->r6) = ctx->r3;
L_8005EF60:
    // 0x8005EF60: lhu         $v1, 0x4($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EF64: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8005EF68: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8005EF6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005EF70: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EF74: lhu         $v1, 0x2($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2);
    // 0x8005EF78: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8005EF7C: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x8005EF80: j           L_8005EFD0
    // 0x8005EF84: sh          $v1, 0xC($a2)
    MEM_H(0XC, ctx->r6) = ctx->r3;
        goto L_8005EFD0;
    // 0x8005EF84: sh          $v1, 0xC($a2)
    MEM_H(0XC, ctx->r6) = ctx->r3;
L_8005EF88:
    // 0x8005EF88: lhu         $v1, 0x4($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EF8C: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8005EF90: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8005EF94: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005EF98: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EF9C: lhu         $v1, 0x2($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2);
    // 0x8005EFA0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8005EFA4: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x8005EFA8: j           L_8005EFD0
    // 0x8005EFAC: sh          $v1, 0xE($a2)
    MEM_H(0XE, ctx->r6) = ctx->r3;
        goto L_8005EFD0;
    // 0x8005EFAC: sh          $v1, 0xE($a2)
    MEM_H(0XE, ctx->r6) = ctx->r3;
L_8005EFB0:
    // 0x8005EFB0: j           L_8005F014
    // 0x8005EFB4: sb          $t1, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r9;
        goto L_8005F014;
    // 0x8005EFB4: sb          $t1, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r9;
L_8005EFB8:
    // 0x8005EFB8: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EFBC: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005EFC0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8005EFC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005EFC8: lhu         $v0, 0x2($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X2);
L_8005EFCC:
    // 0x8005EFCC: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
L_8005EFD0:
    // 0x8005EFD0: lhu         $a0, 0x4($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EFD4: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x8005EFD8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8005EFDC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8005EFE0: lh          $v0, 0x0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X0);
    // 0x8005EFE4: bne         $v0, $zero, L_8005EB6C
    if (ctx->r2 != 0) {
        // 0x8005EFE8: sll         $v0, $a0, 1
        ctx->r2 = S32(ctx->r4 << 1);
            goto L_8005EB6C;
    }
    // 0x8005EFE8: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
L_8005EFEC:
    // 0x8005EFEC: lhu         $v1, 0x4($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X4);
    // 0x8005EFF0: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x8005EFF4: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x8005EFF8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8005EFFC: lhu         $v0, 0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, 0X4);
    // 0x8005F000: lhu         $v1, 0x2($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X2);
    // 0x8005F004: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8005F008: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8005F00C: sh          $v0, 0x4($a2)
    MEM_H(0X4, ctx->r6) = ctx->r2;
    // 0x8005F010: sh          $v1, 0x6($a2)
    MEM_H(0X6, ctx->r6) = ctx->r3;
L_8005F014:
    // 0x8005F014: jr          $ra
    // 0x8005F018: nop

    TRACE_RETURN()
    return;
    // 0x8005F018: nop

;}
RECOMP_FUNC void func_80094154_6F554(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80094154: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80094158: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8009415C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80094160: addiu       $a0, $a0, -0x2658
    ctx->r4 = ADD32(ctx->r4, -0X2658);
    // 0x80094164: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80094168: jal         0x8009A5E0
    // 0x8009416C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8009416C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80094170: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80094174: jr          $ra
    // 0x80094178: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80094178: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800452D8_206D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800452D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800452DC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x800452E0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x800452E4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x800452E8: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x800452EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800452F0: bne         $a2, $zero, L_80045304
    if (ctx->r6 != 0) {
        // 0x800452F4: sw          $s0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r16;
            goto L_80045304;
    }
    // 0x800452F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800452F8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800452FC: j           L_8004530C
    // 0x80045300: lhu         $v0, -0x3FA8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FA8);
        goto L_8004530C;
    // 0x80045300: lhu         $v0, -0x3FA8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FA8);
L_80045304:
    // 0x80045304: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80045308: lhu         $v0, -0x72CC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X72CC);
L_8004530C:
    // 0x8004530C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80045310: lhu         $v1, -0x7154($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7154);
    // 0x80045314: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80045318: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x8004531C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80045320: lh          $v0, -0x35B8($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X35B8);
    // 0x80045324: bltz        $v0, L_80045338
    if (SIGNED(ctx->r2) < 0) {
        // 0x80045328: nop
    
            goto L_80045338;
    }
    // 0x80045328: nop

    // 0x8004532C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80045330: j           L_80045340
    // 0x80045334: lhu         $v0, -0x3FAA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAA);
        goto L_80045340;
    // 0x80045334: lhu         $v0, -0x3FAA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAA);
L_80045338:
    // 0x80045338: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8004533C: lhu         $v0, -0x72CE($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X72CE);
L_80045340:
    // 0x80045340: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80045344: lhu         $v1, -0x7156($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7156);
    // 0x80045348: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8004534C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80045350: jal         0x80046308
    // 0x80045354: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_80046308_21708(rdram, ctx);
        goto after_0;
    // 0x80045354: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x80045358: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8004535C: jal         0x80046364
    // 0x80045360: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_80046364_21764(rdram, ctx);
        goto after_1;
    // 0x80045360: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80045364: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80045368: sltu        $s0, $zero, $s0
    ctx->r16 = 0 < ctx->r16 ? 1 : 0;
    // 0x8004536C: sltu        $v0, $zero, $v1
    ctx->r2 = 0 < ctx->r3 ? 1 : 0;
    // 0x80045370: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x80045374: beq         $s0, $zero, L_80045418
    if (ctx->r16 == 0) {
        // 0x80045378: nop
    
            goto L_80045418;
    }
    // 0x80045378: nop

    // 0x8004537C: beq         $v1, $zero, L_800453F0
    if (ctx->r3 == 0) {
        // 0x80045380: nop
    
            goto L_800453F0;
    }
    // 0x80045380: nop

    // 0x80045384: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x80045388: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x8004538C: bgez        $v0, L_80045398
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80045390: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80045398;
    }
    // 0x80045390: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80045394: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
L_80045398:
    // 0x80045398: bltz        $v1, L_800453B0
    if (SIGNED(ctx->r3) < 0) {
        // 0x8004539C: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_800453B0;
    }
    // 0x8004539C: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800453A0: beq         $v0, $zero, L_800453F0
    if (ctx->r2 == 0) {
        // 0x800453A4: nop
    
            goto L_800453F0;
    }
    // 0x800453A4: nop

    // 0x800453A8: j           L_800453C0
    // 0x800453AC: nop

        goto L_800453C0;
    // 0x800453AC: nop

L_800453B0:
    // 0x800453B0: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x800453B4: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800453B8: beq         $v0, $zero, L_800453F0
    if (ctx->r2 == 0) {
        // 0x800453BC: nop
    
            goto L_800453F0;
    }
    // 0x800453BC: nop

L_800453C0:
    // 0x800453C0: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x800453C4: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x800453C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800453CC: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x800453D0: lhu         $v0, 0x12($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X12);
    // 0x800453D4: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x800453D8: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x800453DC: sh          $v0, -0x26B8($at)
    MEM_H(-0X26B8, ctx->r1) = ctx->r2;
    // 0x800453E0: jal         0x8004643C
    // 0x800453E4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8004643C_2183C(rdram, ctx);
        goto after_2;
    // 0x800453E4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x800453E8: j           L_8004559C
    // 0x800453EC: nop

        goto L_8004559C;
    // 0x800453EC: nop

L_800453F0:
    // 0x800453F0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x800453F4: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x800453F8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x800453FC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80045400: lhu         $v0, 0x14($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X14);
    // 0x80045404: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80045408: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8004540C: sh          $v0, -0x6F98($at)
    MEM_H(-0X6F98, ctx->r1) = ctx->r2;
    // 0x80045410: j           L_80045590
    // 0x80045414: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
        goto L_80045590;
    // 0x80045414: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_80045418:
    // 0x80045418: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8004541C: lh          $a0, -0x3FAA($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3FAA);
    // 0x80045420: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80045424: lh          $v0, -0x7156($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7156);
    // 0x80045428: subu        $v1, $a0, $v0
    ctx->r3 = SUB32(ctx->r4, ctx->r2);
    // 0x8004542C: bltzl       $v1, L_80045434
    if (SIGNED(ctx->r3) < 0) {
        // 0x80045430: subu        $v1, $v0, $a0
        ctx->r3 = SUB32(ctx->r2, ctx->r4);
            goto L_80045434;
    }
    goto skip_0;
    // 0x80045430: subu        $v1, $v0, $a0
    ctx->r3 = SUB32(ctx->r2, ctx->r4);
    skip_0:
L_80045434:
    // 0x80045434: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x80045438: lh          $a1, -0x72CE($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X72CE);
    // 0x8004543C: subu        $a0, $a1, $v0
    ctx->r4 = SUB32(ctx->r5, ctx->r2);
    // 0x80045440: bltz        $a0, L_8004545C
    if (SIGNED(ctx->r4) < 0) {
        // 0x80045444: subu        $v0, $v0, $a1
        ctx->r2 = SUB32(ctx->r2, ctx->r5);
            goto L_8004545C;
    }
    // 0x80045444: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x80045448: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8004544C: beq         $v0, $zero, L_80045474
    if (ctx->r2 == 0) {
        // 0x80045450: nop
    
            goto L_80045474;
    }
    // 0x80045450: nop

    // 0x80045454: j           L_80045468
    // 0x80045458: nop

        goto L_80045468;
    // 0x80045458: nop

L_8004545C:
    // 0x8004545C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80045460: beq         $v0, $zero, L_80045474
    if (ctx->r2 == 0) {
        // 0x80045464: nop
    
            goto L_80045474;
    }
    // 0x80045464: nop

L_80045468:
    // 0x80045468: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8004546C: j           L_8004547C
    // 0x80045470: lhu         $v0, -0x3FAA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAA);
        goto L_8004547C;
    // 0x80045470: lhu         $v0, -0x3FAA($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FAA);
L_80045474:
    // 0x80045474: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80045478: lhu         $v0, -0x72CE($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X72CE);
L_8004547C:
    // 0x8004547C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80045480: lhu         $v1, -0x7156($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7156);
    // 0x80045484: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80045488: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8004548C: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80045490: lh          $a0, -0x3FA8($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X3FA8);
    // 0x80045494: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80045498: lh          $v0, -0x7154($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X7154);
    // 0x8004549C: subu        $v1, $a0, $v0
    ctx->r3 = SUB32(ctx->r4, ctx->r2);
    // 0x800454A0: bltzl       $v1, L_800454A8
    if (SIGNED(ctx->r3) < 0) {
        // 0x800454A4: subu        $v1, $v0, $a0
        ctx->r3 = SUB32(ctx->r2, ctx->r4);
            goto L_800454A8;
    }
    goto skip_1;
    // 0x800454A4: subu        $v1, $v0, $a0
    ctx->r3 = SUB32(ctx->r2, ctx->r4);
    skip_1:
L_800454A8:
    // 0x800454A8: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x800454AC: lh          $a1, -0x72CC($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X72CC);
    // 0x800454B0: subu        $a0, $a1, $v0
    ctx->r4 = SUB32(ctx->r5, ctx->r2);
    // 0x800454B4: bltz        $a0, L_800454D0
    if (SIGNED(ctx->r4) < 0) {
        // 0x800454B8: subu        $v0, $v0, $a1
        ctx->r2 = SUB32(ctx->r2, ctx->r5);
            goto L_800454D0;
    }
    // 0x800454B8: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x800454BC: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800454C0: beq         $v0, $zero, L_800454E8
    if (ctx->r2 == 0) {
        // 0x800454C4: nop
    
            goto L_800454E8;
    }
    // 0x800454C4: nop

    // 0x800454C8: j           L_800454DC
    // 0x800454CC: nop

        goto L_800454DC;
    // 0x800454CC: nop

L_800454D0:
    // 0x800454D0: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x800454D4: beq         $v0, $zero, L_800454E8
    if (ctx->r2 == 0) {
        // 0x800454D8: nop
    
            goto L_800454E8;
    }
    // 0x800454D8: nop

L_800454DC:
    // 0x800454DC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x800454E0: j           L_800454F0
    // 0x800454E4: lhu         $v0, -0x3FA8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FA8);
        goto L_800454F0;
    // 0x800454E4: lhu         $v0, -0x3FA8($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3FA8);
L_800454E8:
    // 0x800454E8: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x800454EC: lhu         $v0, -0x72CC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X72CC);
L_800454F0:
    // 0x800454F0: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x800454F4: lhu         $v1, -0x7154($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7154);
    // 0x800454F8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x800454FC: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x80045500: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x80045504: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x80045508: bgez        $v0, L_80045514
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8004550C: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80045514;
    }
    // 0x8004550C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80045510: negu        $a0, $a0
    ctx->r4 = SUB32(0, ctx->r4);
L_80045514:
    // 0x80045514: bltz        $v1, L_8004552C
    if (SIGNED(ctx->r3) < 0) {
        // 0x80045518: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_8004552C;
    }
    // 0x80045518: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8004551C: beq         $v0, $zero, L_8004556C
    if (ctx->r2 == 0) {
        // 0x80045520: nop
    
            goto L_8004556C;
    }
    // 0x80045520: nop

    // 0x80045524: j           L_8004553C
    // 0x80045528: nop

        goto L_8004553C;
    // 0x80045528: nop

L_8004552C:
    // 0x8004552C: negu        $v0, $v1
    ctx->r2 = SUB32(0, ctx->r3);
    // 0x80045530: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80045534: beq         $v0, $zero, L_8004556C
    if (ctx->r2 == 0) {
        // 0x80045538: nop
    
            goto L_8004556C;
    }
    // 0x80045538: nop

L_8004553C:
    // 0x8004553C: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x80045540: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x80045544: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80045548: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x8004554C: lhu         $v0, 0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2);
    // 0x80045550: lhu         $v1, 0x12($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X12);
    // 0x80045554: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80045558: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004555C: jal         0x8004643C
    // 0x80045560: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
    func_8004643C_2183C(rdram, ctx);
        goto after_3;
    // 0x80045560: sh          $v0, 0x2($s2)
    MEM_H(0X2, ctx->r18) = ctx->r2;
    after_3:
    // 0x80045564: j           L_8004559C
    // 0x80045568: nop

        goto L_8004559C;
    // 0x80045568: nop

L_8004556C:
    // 0x8004556C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80045570: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x80045574: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80045578: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8004557C: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x80045580: lhu         $v1, 0x14($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X14);
    // 0x80045584: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80045588: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8004558C: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
L_80045590:
    // 0x80045590: jal         0x80046404
    // 0x80045594: nop

    func_80046404_21804(rdram, ctx);
        goto after_4;
    // 0x80045594: nop

    after_4:
    // 0x80045598: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8004559C:
    // 0x8004559C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800455A0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x800455A4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x800455A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800455AC: jr          $ra
    // 0x800455B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x800455B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800933E0_6E7E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800933E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800933E4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800933E8: lw          $v1, 0xC($a0)
    ctx->r3 = MEM_W(ctx->r4, 0XC);
    // 0x800933EC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x800933F0: lw          $a2, 0x4($v1)
    ctx->r6 = MEM_W(ctx->r3, 0X4);
    // 0x800933F4: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x800933F8: jal         0x8009DBA0
    // 0x800933FC: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    osPfsFileState_recomp(rdram, ctx);
        goto after_0;
    // 0x800933FC: lw          $a1, 0x4($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X4);
    after_0:
    // 0x80093400: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80093404: jr          $ra
    // 0x80093408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80093408: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004A508_25908(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A508: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8004A50C: lb          $a1, 0x4B22($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X4B22);
    // 0x8004A510: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8004A514: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8004A518: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8004A51C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8004A520: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8004A524: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8004A528: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8004A52C: jal         0x8007108C
    // 0x8004A530: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8007108C_4C48C(rdram, ctx);
        goto after_0;
    // 0x8004A530: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8004A534: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8004A538: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x8004A53C: beq         $a1, $v0, L_8004A5A8
    if (ctx->r5 == ctx->r2) {
        // 0x8004A540: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8004A5A8;
    }
    // 0x8004A540: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004A544: beq         $s1, $zero, L_8004A58C
    if (ctx->r17 == 0) {
        // 0x8004A548: nop
    
            goto L_8004A58C;
    }
    // 0x8004A548: nop

    // 0x8004A54C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004A550: lb          $v0, 0x4B22($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4B22);
    // 0x8004A554: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8004A558: addu        $a0, $v0, $s0
    ctx->r4 = ADD32(ctx->r2, ctx->r16);
    // 0x8004A55C: lh          $v0, 0x4FA($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4FA);
    // 0x8004A560: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8004A564: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8004A568: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8004A56C: bne         $v0, $zero, L_8004A580
    if (ctx->r2 != 0) {
        // 0x8004A570: addiu       $v0, $v1, 0x10
        ctx->r2 = ADD32(ctx->r3, 0X10);
            goto L_8004A580;
    }
    // 0x8004A570: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x8004A574: sh          $a1, 0x4FA($a0)
    MEM_H(0X4FA, ctx->r4) = ctx->r5;
    // 0x8004A578: j           L_8004A5A8
    // 0x8004A57C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8004A5A8;
    // 0x8004A57C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8004A580:
    // 0x8004A580: sh          $v0, 0x4FA($a0)
    MEM_H(0X4FA, ctx->r4) = ctx->r2;
    // 0x8004A584: j           L_8004A5A8
    // 0x8004A588: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8004A5A8;
    // 0x8004A588: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8004A58C:
    // 0x8004A58C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8004A590: lb          $v0, 0x4B22($v0)
    ctx->r2 = MEM_B(ctx->r2, 0X4B22);
    // 0x8004A594: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8004A598: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8004A59C: lh          $v0, 0x4FA($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4FA);
    // 0x8004A5A0: xor         $v0, $v0, $a1
    ctx->r2 = ctx->r2 ^ ctx->r5;
    // 0x8004A5A4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_8004A5A8:
    // 0x8004A5A8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8004A5AC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8004A5B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8004A5B4: jr          $ra
    // 0x8004A5B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8004A5B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8004EF48_2A348(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004EF48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8004EF4C: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x8004EF50: lw          $a1, -0x7798($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X7798);
    // 0x8004EF54: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8004EF58: lui         $v1, 0x8000
    ctx->r3 = S32(0X8000 << 16);
    // 0x8004EF5C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8004EF60: addiu       $s2, $zero, 0x3
    ctx->r18 = ADD32(0, 0X3);
    // 0x8004EF64: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8004EF68: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x8004EF6C: addiu       $s1, $s1, -0x5F40
    ctx->r17 = ADD32(ctx->r17, -0X5F40);
    // 0x8004EF70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8004EF74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
L_8004EF78:
    // 0x8004EF78: sllv        $v0, $a1, $a0
    ctx->r2 = S32(ctx->r5 << (ctx->r4 & 31));
    // 0x8004EF7C: bltzl       $v0, L_8004EFBC
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004EF80: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_8004EFBC;
    }
    goto skip_0;
    // 0x8004EF80: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x8004EF84: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x8004EF88: lw          $v0, -0x7798($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7798);
    // 0x8004EF8C: srlv        $v1, $v1, $a0
    ctx->r3 = S32(U32(ctx->r3) >> (ctx->r4 & 31));
    // 0x8004EF90: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8004EF94: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8004EF98: lui         $at, 0x801E
    ctx->r1 = S32(0X801E << 16);
    // 0x8004EF9C: sw          $v0, -0x7798($at)
    MEM_W(-0X7798, ctx->r1) = ctx->r2;
    // 0x8004EFA0: lbu         $s0, 0x1($s1)
    ctx->r16 = MEM_BU(ctx->r17, 0X1);
    // 0x8004EFA4: jal         0x8009A2B0
    // 0x8004EFA8: addiu       $a1, $zero, 0x5AC
    ctx->r5 = ADD32(0, 0X5AC);
    bzero_recomp(rdram, ctx);
        goto after_0;
    // 0x8004EFA8: addiu       $a1, $zero, 0x5AC
    ctx->r5 = ADD32(0, 0X5AC);
    after_0:
    // 0x8004EFAC: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
    // 0x8004EFB0: sb          $s2, 0x6($v0)
    MEM_B(0X6, ctx->r2) = ctx->r18;
    // 0x8004EFB4: j           L_8004EFCC
    // 0x8004EFB8: sb          $s0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r16;
        goto L_8004EFCC;
    // 0x8004EFB8: sb          $s0, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r16;
L_8004EFBC:
    // 0x8004EFBC: slti        $v0, $a0, 0x4
    ctx->r2 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x8004EFC0: bne         $v0, $zero, L_8004EF78
    if (ctx->r2 != 0) {
        // 0x8004EFC4: addiu       $s1, $s1, 0x5AC
        ctx->r17 = ADD32(ctx->r17, 0X5AC);
            goto L_8004EF78;
    }
    // 0x8004EFC4: addiu       $s1, $s1, 0x5AC
    ctx->r17 = ADD32(ctx->r17, 0X5AC);
    // 0x8004EFC8: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8004EFCC:
    // 0x8004EFCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8004EFD0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8004EFD4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8004EFD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8004EFDC: jr          $ra
    // 0x8004EFE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8004EFE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8003E640_19A40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003E640: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8003E644: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8003E648: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8003E64C: lbu         $v1, 0x6B40($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X6B40);
    // 0x8003E650: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x8003E654: lhu         $a2, 0x49AE($a2)
    ctx->r6 = MEM_HU(ctx->r6, 0X49AE);
    // 0x8003E658: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8003E65C: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8003E660: subu        $a1, $v0, $v1
    ctx->r5 = SUB32(ctx->r2, ctx->r3);
    // 0x8003E664: sltu        $v0, $a1, $a2
    ctx->r2 = ctx->r5 < ctx->r6 ? 1 : 0;
    // 0x8003E668: beq         $v0, $zero, L_8003E6B4
    if (ctx->r2 == 0) {
        // 0x8003E66C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_8003E6B4;
    }
    // 0x8003E66C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8003E670: lh          $v0, 0x4($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X4);
    // 0x8003E674: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8003E678: lbu         $a0, -0x39A6($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X39A6);
    // 0x8003E67C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8003E680: lhu         $v1, -0x7386($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X7386);
    // 0x8003E684: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8003E688: sra         $v0, $v0, 9
    ctx->r2 = S32(SIGNED(ctx->r2) >> 9);
    // 0x8003E68C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8003E690: sltu        $v1, $v0, $v1
    ctx->r3 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8003E694: bne         $v1, $zero, L_8003E6A4
    if (ctx->r3 != 0) {
        // 0x8003E698: nop
    
            goto L_8003E6A4;
    }
    // 0x8003E698: nop

    // 0x8003E69C: j           L_8003E6B4
    // 0x8003E6A0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8003E6B4;
    // 0x8003E6A0: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8003E6A4:
    // 0x8003E6A4: nop

    // 0x8003E6A8: mult        $v0, $a2
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8003E6AC: mflo        $v0
    ctx->r2 = lo;
    // 0x8003E6B0: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
L_8003E6B4:
    // 0x8003E6B4: jr          $ra
    // 0x8003E6B8: nop

    TRACE_RETURN()
    return;
    // 0x8003E6B8: nop

;}
RECOMP_FUNC void func_8003055C_B95C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8003055C: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x80030560: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
    // 0x80030564: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80030568: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x8003056C: jr          $ra
    // 0x80030570: sw          $a3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r7;
    TRACE_RETURN()
    return;
    // 0x80030570: sw          $a3, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r7;
;}
RECOMP_FUNC void func_80036BB4_11FB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80036BB4: jr          $ra
    // 0x80036BB8: nop

    TRACE_RETURN()
    return;
    // 0x80036BB8: nop

;}
RECOMP_FUNC void func_8008B00C_6640C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008B00C: bne         $a0, $zero, L_8008B01C
    if (ctx->r4 != 0) {
        // 0x8008B010: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_8008B01C;
    }
    // 0x8008B010: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008B014: j           L_8008B08C
    // 0x8008B018: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_8008B08C;
    // 0x8008B018: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_8008B01C:
    // 0x8008B01C: bgez        $a1, L_8008B02C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x8008B020: slti        $v0, $a1, 0x80
        ctx->r2 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
            goto L_8008B02C;
    }
    // 0x8008B020: slti        $v0, $a1, 0x80
    ctx->r2 = SIGNED(ctx->r5) < 0X80 ? 1 : 0;
    // 0x8008B024: j           L_8008B034
    // 0x8008B028: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_8008B034;
    // 0x8008B028: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_8008B02C:
    // 0x8008B02C: beql        $v0, $zero, L_8008B034
    if (ctx->r2 == 0) {
        // 0x8008B030: addiu       $a1, $zero, 0x7F
        ctx->r5 = ADD32(0, 0X7F);
            goto L_8008B034;
    }
    goto skip_0;
    // 0x8008B030: addiu       $a1, $zero, 0x7F
    ctx->r5 = ADD32(0, 0X7F);
    skip_0:
L_8008B034:
    // 0x8008B034: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8008B038: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008B03C: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008B040: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008B044: lw          $v1, 0x4F8C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4F8C);
    // 0x8008B048: blez        $v0, L_8008B088
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8008B04C: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_8008B088;
    }
    // 0x8008B04C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8008B050: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x8008B054: addiu       $v1, $v1, 0xCC
    ctx->r3 = ADD32(ctx->r3, 0XCC);
L_8008B058:
    // 0x8008B058: lw          $v0, -0x88($v1)
    ctx->r2 = MEM_W(ctx->r3, -0X88);
    // 0x8008B05C: bne         $v0, $a0, L_8008B070
    if (ctx->r2 != ctx->r4) {
        // 0x8008B060: nop
    
            goto L_8008B070;
    }
    // 0x8008B060: nop

    // 0x8008B064: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8008B068: sb          $a1, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r5;
    // 0x8008B06C: sb          $t0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r8;
L_8008B070:
    // 0x8008B070: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008B074: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008B078: addiu       $a3, $a3, 0x1
    ctx->r7 = ADD32(ctx->r7, 0X1);
    // 0x8008B07C: slt         $v0, $a3, $v0
    ctx->r2 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8008B080: bne         $v0, $zero, L_8008B058
    if (ctx->r2 != 0) {
        // 0x8008B084: addiu       $v1, $v1, 0x13C
        ctx->r3 = ADD32(ctx->r3, 0X13C);
            goto L_8008B058;
    }
    // 0x8008B084: addiu       $v1, $v1, 0x13C
    ctx->r3 = ADD32(ctx->r3, 0X13C);
L_8008B088:
    // 0x8008B088: addu        $v0, $a2, $zero
    ctx->r2 = ADD32(ctx->r6, 0);
L_8008B08C:
    // 0x8008B08C: jr          $ra
    // 0x8008B090: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8008B090: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800787D0_53BD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800787D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800787D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x800787D8: jal         0x8004F5C4
    // 0x800787DC: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x800787DC: nop

    after_0:
    // 0x800787E0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x800787E4: jr          $ra
    // 0x800787E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x800787E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004ED08_2A108(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004ED08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8004ED0C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8004ED10: lh          $a2, 0x0($a1)
    ctx->r6 = MEM_H(ctx->r5, 0X0);
    // 0x8004ED14: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x8004ED18: lh          $v1, 0x4($a1)
    ctx->r3 = MEM_H(ctx->r5, 0X4);
    // 0x8004ED1C: lh          $a1, 0x4($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X4);
    // 0x8004ED20: subu        $a0, $a2, $v0
    ctx->r4 = SUB32(ctx->r6, ctx->r2);
    // 0x8004ED24: jal         0x80032664
    // 0x8004ED28: subu        $a1, $v1, $a1
    ctx->r5 = SUB32(ctx->r3, ctx->r5);
    func_80032664_DA64(rdram, ctx);
        goto after_0;
    // 0x8004ED28: subu        $a1, $v1, $a1
    ctx->r5 = SUB32(ctx->r3, ctx->r5);
    after_0:
    // 0x8004ED2C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8004ED30: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8004ED34: jr          $ra
    // 0x8004ED38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8004ED38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_800887B4_63BB4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x800887B4: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x800887B8: lw          $v1, -0x15DC($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X15DC);
    // 0x800887BC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800887C0: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x800887C4: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x800887C8: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x800887CC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800887D0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800887D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800887D8: lw          $v0, 0x40($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X40);
    // 0x800887DC: lui         $a0, 0x8019
    ctx->r4 = S32(0X8019 << 16);
    // 0x800887E0: lw          $a0, 0x3C30($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3C30);
    // 0x800887E4: addiu       $s3, $v1, 0x10
    ctx->r19 = ADD32(ctx->r3, 0X10);
    // 0x800887E8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x800887EC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x800887F0: addiu       $v1, $v1, 0x46B8
    ctx->r3 = ADD32(ctx->r3, 0X46B8);
    // 0x800887F4: addu        $s1, $v0, $v1
    ctx->r17 = ADD32(ctx->r2, ctx->r3);
    // 0x800887F8: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x800887FC: beq         $a0, $v0, L_80088840
    if (ctx->r4 == ctx->r2) {
        // 0x80088800: nop
    
            goto L_80088840;
    }
    // 0x80088800: nop

    // 0x80088804: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80088808: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x8008880C: lui         $at, 0x8019
    ctx->r1 = S32(0X8019 << 16);
    // 0x80088810: sw          $v0, 0x3C30($at)
    MEM_W(0X3C30, ctx->r1) = ctx->r2;
    // 0x80088814: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80088818: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008881C: sw          $v0, 0xA50($at)
    MEM_W(0XA50, ctx->r1) = ctx->r2;
    // 0x80088820: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80088824: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088828: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8008882C: lui         $v0, 0xDE00
    ctx->r2 = S32(0XDE00 << 16);
    // 0x80088830: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x80088834: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x80088838: addiu       $v0, $v0, -0x15D0
    ctx->r2 = ADD32(ctx->r2, -0X15D0);
    // 0x8008883C: sw          $v0, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r2;
L_80088840:
    // 0x80088840: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x80088844: lw          $v0, 0xA50($v0)
    ctx->r2 = MEM_W(ctx->r2, 0XA50);
    // 0x80088848: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    // 0x8008884C: beq         $v0, $a1, L_80088920
    if (ctx->r2 == ctx->r5) {
        // 0x80088850: andi        $a0, $a1, 0x3F
        ctx->r4 = ctx->r5 & 0X3F;
            goto L_80088920;
    }
    // 0x80088850: andi        $a0, $a1, 0x3F
    ctx->r4 = ctx->r5 & 0X3F;
    // 0x80088854: lui         $s0, 0x801B
    ctx->r16 = S32(0X801B << 16);
    // 0x80088858: lw          $s0, -0x6F10($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X6F10);
    // 0x8008885C: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x80088860: sll         $a0, $a0, 4
    ctx->r4 = S32(ctx->r4 << 4);
    // 0x80088864: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80088868: addiu       $v0, $s0, 0x8
    ctx->r2 = ADD32(ctx->r16, 0X8);
    // 0x8008886C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088870: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088874: lui         $v0, 0xFD10
    ctx->r2 = S32(0XFD10 << 16);
    // 0x80088878: jal         0x80087248
    // 0x8008887C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    func_80087248_62648(rdram, ctx);
        goto after_0;
    // 0x8008887C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80088880: lui         $a0, 0xF500
    ctx->r4 = S32(0XF500 << 16);
    // 0x80088884: ori         $a0, $a0, 0x100
    ctx->r4 = ctx->r4 | 0X100;
    // 0x80088888: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8008888C: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80088890: lui         $a1, 0x703
    ctx->r5 = S32(0X703 << 16);
    // 0x80088894: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x80088898: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x8008889C: lui         $v0, 0xE800
    ctx->r2 = S32(0XE800 << 16);
    // 0x800888A0: sw          $v0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r2;
    // 0x800888A4: lui         $v0, 0x700
    ctx->r2 = S32(0X700 << 16);
    // 0x800888A8: sw          $v0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r2;
    // 0x800888AC: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x800888B0: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x800888B4: lui         $v0, 0xF000
    ctx->r2 = S32(0XF000 << 16);
    // 0x800888B8: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x800888BC: lui         $v0, 0xE700
    ctx->r2 = S32(0XE700 << 16);
    // 0x800888C0: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x800888C4: sw          $a0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r4;
    // 0x800888C8: sw          $zero, 0x14($v1)
    MEM_W(0X14, ctx->r3) = 0;
    // 0x800888CC: sw          $a1, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r5;
    // 0x800888D0: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x800888D4: sw          $zero, 0x24($v1)
    MEM_W(0X24, ctx->r3) = 0;
    // 0x800888D8: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x800888DC: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x800888E0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800888E4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800888E8: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x800888EC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800888F0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800888F4: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x800888F8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800888FC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088900: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x80088904: addiu       $v1, $v1, 0x28
    ctx->r3 = ADD32(ctx->r3, 0X28);
    // 0x80088908: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8008890C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088910: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088914: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x80088918: lui         $at, 0x8018
    ctx->r1 = S32(0X8018 << 16);
    // 0x8008891C: sw          $a0, 0xA50($at)
    MEM_W(0XA50, ctx->r1) = ctx->r4;
L_80088920:
    // 0x80088920: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80088924: lw          $a1, -0x6F10($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X6F10);
    // 0x80088928: lui         $v1, 0xDA38
    ctx->r3 = S32(0XDA38 << 16);
    // 0x8008892C: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x80088930: addiu       $v0, $a1, 0x8
    ctx->r2 = ADD32(ctx->r5, 0X8);
    // 0x80088934: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088938: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x8008893C: sw          $v1, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r3;
    // 0x80088940: sw          $s2, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r18;
    // 0x80088944: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x80088948: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8008894C: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80088950: lbu         $v0, 0x4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X4);
    // 0x80088954: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80088958: andi        $v0, $v0, 0x38
    ctx->r2 = ctx->r2 & 0X38;
    // 0x8008895C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x80088960: sh          $v0, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r2;
    // 0x80088964: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80088968: ori         $a0, $a0, 0x9012
    ctx->r4 = ctx->r4 | 0X9012;
    // 0x8008896C: addu        $t1, $zero, $zero
    ctx->r9 = ADD32(0, 0);
    // 0x80088970: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80088974: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80088978: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x8008897C: lui         $t7, 0xE700
    ctx->r15 = S32(0XE700 << 16);
    // 0x80088980: lui         $t4, 0xFFF0
    ctx->r12 = S32(0XFFF0 << 16);
    // 0x80088984: andi        $v0, $v0, 0x38
    ctx->r2 = ctx->r2 & 0X38;
    // 0x80088988: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x8008898C: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80088990: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80088994: ori         $t4, $t4, 0xFFF0
    ctx->r12 = ctx->r12 | 0XFFF0;
    // 0x80088998: lui         $t3, 0x214
    ctx->r11 = S32(0X214 << 16);
    // 0x8008899C: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x800889A0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    // 0x800889A4: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x800889A8: ori         $t3, $t3, 0x8
    ctx->r11 = ctx->r11 | 0X8;
    // 0x800889AC: lui         $t6, 0xFFF0
    ctx->r14 = S32(0XFFF0 << 16);
    // 0x800889B0: andi        $v0, $v0, 0x38
    ctx->r2 = ctx->r2 & 0X38;
    // 0x800889B4: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x800889B8: sh          $v0, 0x1C($sp)
    MEM_H(0X1C, ctx->r29) = ctx->r2;
    // 0x800889BC: lbu         $v0, 0x7($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X7);
    // 0x800889C0: ori         $t6, $t6, 0x1F0
    ctx->r14 = ctx->r14 | 0X1F0;
    // 0x800889C4: lui         $t5, 0x1F0
    ctx->r13 = S32(0X1F0 << 16);
    // 0x800889C8: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x800889CC: sh          $v0, 0x16($sp)
    MEM_H(0X16, ctx->r29) = ctx->r2;
    // 0x800889D0: lbu         $v1, 0x7($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X7);
    // 0x800889D4: ori         $t5, $t5, 0xFFF0
    ctx->r13 = ctx->r13 | 0XFFF0;
    // 0x800889D8: addiu       $v0, $a1, 0x10
    ctx->r2 = ADD32(ctx->r5, 0X10);
    // 0x800889DC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x800889E0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x800889E4: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x800889E8: lw          $v0, -0x15D8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X15D8);
    // 0x800889EC: andi        $v1, $v1, 0x38
    ctx->r3 = ctx->r3 & 0X38;
    // 0x800889F0: srl         $v1, $v1, 3
    ctx->r3 = S32(U32(ctx->r3) >> 3);
    // 0x800889F4: sh          $v1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r3;
    // 0x800889F8: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x800889FC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80088A00: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80088A04: sw          $a0, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r4;
    // 0x80088A08: lw          $a0, 0x40($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X40);
    // 0x80088A0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80088A10: sll         $v1, $v1, 9
    ctx->r3 = S32(ctx->r3 << 9);
    // 0x80088A14: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80088A18: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80088A1C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80088A20: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80088A24: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80088A28: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x80088A2C: addiu       $a0, $a0, -0x29B0
    ctx->r4 = ADD32(ctx->r4, -0X29B0);
    // 0x80088A30: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80088A34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80088A38: sw          $v1, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r3;
    // 0x80088A3C: sll         $a0, $t1, 1
    ctx->r4 = S32(ctx->r9 << 1);
L_80088A40:
    // 0x80088A40: addiu       $v0, $sp, 0x10
    ctx->r2 = ADD32(ctx->r29, 0X10);
    // 0x80088A44: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80088A48: lh          $v1, 0x8($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X8);
    // 0x80088A4C: lh          $v0, 0x0($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X0);
    // 0x80088A50: lui         $a0, 0x800D
    ctx->r4 = S32(0X800D << 16);
    // 0x80088A54: lw          $a0, -0x15DC($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X15DC);
    // 0x80088A58: lui         $a1, 0x708
    ctx->r5 = S32(0X708 << 16);
    // 0x80088A5C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80088A60: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80088A64: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80088A68: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80088A6C: addu        $t0, $s3, $v0
    ctx->r8 = ADD32(ctx->r19, ctx->r2);
    // 0x80088A70: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x80088A74: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80088A78: lw          $v1, -0x6F10($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X6F10);
    // 0x80088A7C: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    // 0x80088A80: lui         $v0, 0xFD50
    ctx->r2 = S32(0XFD50 << 16);
    // 0x80088A84: sw          $v0, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r2;
    // 0x80088A88: lui         $v0, 0xF550
    ctx->r2 = S32(0XF550 << 16);
    // 0x80088A8C: sw          $v0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->r2;
    // 0x80088A90: lui         $v0, 0xE600
    ctx->r2 = S32(0XE600 << 16);
    // 0x80088A94: sw          $v0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->r2;
    // 0x80088A98: lui         $v0, 0xF300
    ctx->r2 = S32(0XF300 << 16);
    // 0x80088A9C: addu        $a0, $a0, $a2
    ctx->r4 = ADD32(ctx->r4, ctx->r6);
    // 0x80088AA0: sw          $t7, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r15;
    // 0x80088AA4: sw          $zero, 0x4($v1)
    MEM_W(0X4, ctx->r3) = 0;
    // 0x80088AA8: sw          $a1, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r5;
    // 0x80088AAC: sw          $zero, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = 0;
    // 0x80088AB0: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80088AB4: sw          $a0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r4;
    // 0x80088AB8: lh          $a0, 0xC($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XC);
    // 0x80088ABC: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80088AC0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088AC4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088AC8: addiu       $v0, $v1, 0x10
    ctx->r2 = ADD32(ctx->r3, 0X10);
    // 0x80088ACC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088AD0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088AD4: addiu       $v0, $v1, 0x18
    ctx->r2 = ADD32(ctx->r3, 0X18);
    // 0x80088AD8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088ADC: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088AE0: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
    // 0x80088AE4: addiu       $v1, $v1, 0x28
    ctx->r3 = ADD32(ctx->r3, 0X28);
    // 0x80088AE8: addu        $t2, $v0, $zero
    ctx->r10 = ADD32(ctx->r2, 0);
    // 0x80088AEC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088AF0: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088AF4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088AF8: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x80088AFC: bgez        $a0, L_80088B08
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80088B00: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_80088B08;
    }
    // 0x80088B00: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x80088B04: addiu       $v1, $a0, 0xF
    ctx->r3 = ADD32(ctx->r4, 0XF);
L_80088B08:
    // 0x80088B08: sra         $v0, $v1, 4
    ctx->r2 = S32(SIGNED(ctx->r3) >> 4);
    // 0x80088B0C: blez        $v0, L_80088B18
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80088B10: addiu       $a2, $zero, 0x800
        ctx->r6 = ADD32(0, 0X800);
            goto L_80088B18;
    }
    // 0x80088B10: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    // 0x80088B14: addiu       $a2, $v0, 0x7FF
    ctx->r6 = ADD32(ctx->r2, 0X7FF);
L_80088B18:
    // 0x80088B18: lh          $a0, 0xC($t0)
    ctx->r4 = MEM_H(ctx->r8, 0XC);
    // 0x80088B1C: lh          $v0, 0xE($t0)
    ctx->r2 = MEM_H(ctx->r8, 0XE);
    // 0x80088B20: mult        $a0, $v0
    result = S64(S32(ctx->r4)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80088B24: mflo        $v0
    ctx->r2 = lo;
    // 0x80088B28: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80088B2C: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x80088B30: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x80088B34: slti        $v0, $v1, 0x800
    ctx->r2 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x80088B38: beql        $v0, $zero, L_80088B40
    if (ctx->r2 == 0) {
        // 0x80088B3C: addiu       $v1, $zero, 0x7FF
        ctx->r3 = ADD32(0, 0X7FF);
            goto L_80088B40;
    }
    goto skip_0;
    // 0x80088B3C: addiu       $v1, $zero, 0x7FF
    ctx->r3 = ADD32(0, 0X7FF);
    skip_0:
L_80088B40:
    // 0x80088B40: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80088B44: andi        $v0, $v1, 0xFFF
    ctx->r2 = ctx->r3 & 0XFFF;
    // 0x80088B48: sll         $v0, $v0, 12
    ctx->r2 = S32(ctx->r2 << 12);
    // 0x80088B4C: lui         $v1, 0x700
    ctx->r3 = S32(0X700 << 16);
    // 0x80088B50: bgez        $a0, L_80088B5C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80088B54: or          $a3, $v0, $v1
        ctx->r7 = ctx->r2 | ctx->r3;
            goto L_80088B5C;
    }
    // 0x80088B54: or          $a3, $v0, $v1
    ctx->r7 = ctx->r2 | ctx->r3;
    // 0x80088B58: addiu       $a1, $a0, 0xF
    ctx->r5 = ADD32(ctx->r4, 0XF);
L_80088B5C:
    // 0x80088B5C: sra         $v0, $a1, 4
    ctx->r2 = S32(SIGNED(ctx->r5) >> 4);
    // 0x80088B60: blezl       $v0, L_80088B98
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80088B64: andi        $v0, $a2, 0xFFF
        ctx->r2 = ctx->r6 & 0XFFF;
            goto L_80088B98;
    }
    goto skip_1;
    // 0x80088B64: andi        $v0, $a2, 0xFFF
    ctx->r2 = ctx->r6 & 0XFFF;
    skip_1:
    // 0x80088B68: div         $zero, $a2, $v0
    lo = S32(S64(S32(ctx->r6)) / S64(S32(ctx->r2))); hi = S32(S64(S32(ctx->r6)) % S64(S32(ctx->r2)));
    // 0x80088B6C: bne         $v0, $zero, L_80088B78
    if (ctx->r2 != 0) {
        // 0x80088B70: nop
    
            goto L_80088B78;
    }
    // 0x80088B70: nop

    // 0x80088B74: break       7
    do_break(2148043636);
L_80088B78:
    // 0x80088B78: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80088B7C: bne         $v0, $at, L_80088B90
    if (ctx->r2 != ctx->r1) {
        // 0x80088B80: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80088B90;
    }
    // 0x80088B80: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80088B84: bne         $a2, $at, L_80088B90
    if (ctx->r6 != ctx->r1) {
        // 0x80088B88: nop
    
            goto L_80088B90;
    }
    // 0x80088B88: nop

    // 0x80088B8C: break       6
    do_break(2148043660);
L_80088B90:
    // 0x80088B90: mflo        $v0
    ctx->r2 = lo;
    // 0x80088B94: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_80088B98:
    // 0x80088B98: or          $v0, $a3, $v0
    ctx->r2 = ctx->r7 | ctx->r2;
    // 0x80088B9C: lui         $a3, 0x801B
    ctx->r7 = S32(0X801B << 16);
    // 0x80088BA0: lw          $a3, -0x6F10($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X6F10);
    // 0x80088BA4: sw          $v0, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r2;
    // 0x80088BA8: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x80088BAC: sw          $zero, 0x4($a3)
    MEM_W(0X4, ctx->r7) = 0;
    // 0x80088BB0: lhu         $v0, 0xC($t0)
    ctx->r2 = MEM_HU(ctx->r8, 0XC);
    // 0x80088BB4: lui         $v1, 0x8
    ctx->r3 = S32(0X8 << 16);
    // 0x80088BB8: ori         $v1, $v1, 0x200
    ctx->r3 = ctx->r3 | 0X200;
    // 0x80088BBC: sw          $v1, 0xC($a3)
    MEM_W(0XC, ctx->r7) = ctx->r3;
    // 0x80088BC0: lui         $v1, 0xF200
    ctx->r3 = S32(0XF200 << 16);
    // 0x80088BC4: sw          $v1, 0x10($a3)
    MEM_W(0X10, ctx->r7) = ctx->r3;
    // 0x80088BC8: lui         $v1, 0xF540
    ctx->r3 = S32(0XF540 << 16);
    // 0x80088BCC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80088BD0: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x80088BD4: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80088BD8: sra         $v0, $v0, 3
    ctx->r2 = S32(SIGNED(ctx->r2) >> 3);
    // 0x80088BDC: andi        $v0, $v0, 0x1FF
    ctx->r2 = ctx->r2 & 0X1FF;
    // 0x80088BE0: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80088BE4: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80088BE8: sw          $v0, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r2;
    // 0x80088BEC: lh          $v1, 0xC($t0)
    ctx->r3 = MEM_H(ctx->r8, 0XC);
    // 0x80088BF0: addiu       $v0, $a3, 0x8
    ctx->r2 = ADD32(ctx->r7, 0X8);
    // 0x80088BF4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088BF8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088BFC: addiu       $v0, $a3, 0x10
    ctx->r2 = ADD32(ctx->r7, 0X10);
    // 0x80088C00: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088C04: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088C08: addiu       $v0, $a3, 0x18
    ctx->r2 = ADD32(ctx->r7, 0X18);
    // 0x80088C0C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088C10: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088C14: lh          $v0, 0xE($t0)
    ctx->r2 = MEM_H(ctx->r8, 0XE);
    // 0x80088C18: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80088C1C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80088C20: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80088C24: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x80088C28: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80088C2C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80088C30: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80088C34: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80088C38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80088C3C: beq         $t1, $v0, L_80088C98
    if (ctx->r9 == ctx->r2) {
        // 0x80088C40: sw          $v1, 0x14($a3)
        MEM_W(0X14, ctx->r7) = ctx->r3;
            goto L_80088C98;
    }
    // 0x80088C40: sw          $v1, 0x14($a3)
    MEM_W(0X14, ctx->r7) = ctx->r3;
    // 0x80088C44: slti        $v0, $t1, 0x2
    ctx->r2 = SIGNED(ctx->r9) < 0X2 ? 1 : 0;
    // 0x80088C48: beql        $v0, $zero, L_80088C60
    if (ctx->r2 == 0) {
        // 0x80088C4C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80088C60;
    }
    goto skip_2;
    // 0x80088C4C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_2:
    // 0x80088C50: beq         $t1, $zero, L_80088C78
    if (ctx->r9 == 0) {
        // 0x80088C54: lui         $v0, 0x600
        ctx->r2 = S32(0X600 << 16);
            goto L_80088C78;
    }
    // 0x80088C54: lui         $v0, 0x600
    ctx->r2 = S32(0X600 << 16);
    // 0x80088C58: j           L_80088DA8
    // 0x80088C5C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
        goto L_80088DA8;
    // 0x80088C5C: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_80088C60:
    // 0x80088C60: beq         $t1, $v0, L_80088CE0
    if (ctx->r9 == ctx->r2) {
        // 0x80088C64: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80088CE0;
    }
    // 0x80088C64: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80088C68: beq         $t1, $v0, L_80088D38
    if (ctx->r9 == ctx->r2) {
        // 0x80088C6C: lui         $v1, 0x214
        ctx->r3 = S32(0X214 << 16);
            goto L_80088D38;
    }
    // 0x80088C6C: lui         $v1, 0x214
    ctx->r3 = S32(0X214 << 16);
    // 0x80088C70: j           L_80088DA8
    // 0x80088C74: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
        goto L_80088DA8;
    // 0x80088C74: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_80088C78:
    // 0x80088C78: ori         $v0, $v0, 0x608
    ctx->r2 = ctx->r2 | 0X608;
    // 0x80088C7C: addiu       $v1, $a3, 0x20
    ctx->r3 = ADD32(ctx->r7, 0X20);
    // 0x80088C80: sw          $v0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r2;
    // 0x80088C84: addiu       $v0, $zero, 0x802
    ctx->r2 = ADD32(0, 0X802);
    // 0x80088C88: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088C8C: sw          $v1, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r3;
    // 0x80088C90: j           L_80088DA4
    // 0x80088C94: sw          $v0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r2;
        goto L_80088DA4;
    // 0x80088C94: sw          $v0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r2;
L_80088C98:
    // 0x80088C98: lui         $v1, 0x214
    ctx->r3 = S32(0X214 << 16);
    // 0x80088C9C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80088CA0: lui         $a1, 0x608
    ctx->r5 = S32(0X608 << 16);
    // 0x80088CA4: ori         $a1, $a1, 0xA02
    ctx->r5 = ctx->r5 | 0XA02;
    // 0x80088CA8: lui         $a0, 0xA
    ctx->r4 = S32(0XA << 16);
    // 0x80088CAC: ori         $a0, $a0, 0x402
    ctx->r4 = ctx->r4 | 0X402;
    // 0x80088CB0: addiu       $v0, $a3, 0x20
    ctx->r2 = ADD32(ctx->r7, 0X20);
    // 0x80088CB4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088CB8: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088CBC: addiu       $v0, $a3, 0x28
    ctx->r2 = ADD32(ctx->r7, 0X28);
    // 0x80088CC0: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088CC4: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088CC8: addiu       $v0, $a3, 0x30
    ctx->r2 = ADD32(ctx->r7, 0X30);
    // 0x80088CCC: sw          $v1, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r3;
    // 0x80088CD0: sw          $t4, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r12;
    // 0x80088CD4: sw          $t3, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r11;
    // 0x80088CD8: j           L_80088D24
    // 0x80088CDC: sw          $t6, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r14;
        goto L_80088D24;
    // 0x80088CDC: sw          $t6, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r14;
L_80088CE0:
    // 0x80088CE0: lui         $v1, 0x214
    ctx->r3 = S32(0X214 << 16);
    // 0x80088CE4: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x80088CE8: lui         $a1, 0x60E
    ctx->r5 = S32(0X60E << 16);
    // 0x80088CEC: ori         $a1, $a1, 0x60C
    ctx->r5 = ctx->r5 | 0X60C;
    // 0x80088CF0: lui         $a0, 0x8
    ctx->r4 = S32(0X8 << 16);
    // 0x80088CF4: ori         $a0, $a0, 0x60E
    ctx->r4 = ctx->r4 | 0X60E;
    // 0x80088CF8: addiu       $v0, $a3, 0x20
    ctx->r2 = ADD32(ctx->r7, 0X20);
    // 0x80088CFC: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088D00: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088D04: addiu       $v0, $a3, 0x28
    ctx->r2 = ADD32(ctx->r7, 0X28);
    // 0x80088D08: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088D0C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088D10: addiu       $v0, $a3, 0x30
    ctx->r2 = ADD32(ctx->r7, 0X30);
    // 0x80088D14: sw          $v1, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r3;
    // 0x80088D18: sw          $t4, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r12;
    // 0x80088D1C: sw          $t3, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r11;
    // 0x80088D20: sw          $t5, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r13;
L_80088D24:
    // 0x80088D24: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088D28: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088D2C: sw          $a1, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->r5;
    // 0x80088D30: j           L_80088DA4
    // 0x80088D34: sw          $a0, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r4;
        goto L_80088DA4;
    // 0x80088D34: sw          $a0, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r4;
L_80088D38:
    // 0x80088D38: ori         $v1, $v1, 0xA
    ctx->r3 = ctx->r3 | 0XA;
    // 0x80088D3C: lui         $a0, 0x214
    ctx->r4 = S32(0X214 << 16);
    // 0x80088D40: ori         $a0, $a0, 0xE
    ctx->r4 = ctx->r4 | 0XE;
    // 0x80088D44: lui         $a2, 0x610
    ctx->r6 = S32(0X610 << 16);
    // 0x80088D48: ori         $a2, $a2, 0x80E
    ctx->r6 = ctx->r6 | 0X80E;
    // 0x80088D4C: lui         $a1, 0xA
    ctx->r5 = S32(0XA << 16);
    // 0x80088D50: ori         $a1, $a1, 0x810
    ctx->r5 = ctx->r5 | 0X810;
    // 0x80088D54: addiu       $v0, $a3, 0x20
    ctx->r2 = ADD32(ctx->r7, 0X20);
    // 0x80088D58: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088D5C: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088D60: addiu       $v0, $a3, 0x28
    ctx->r2 = ADD32(ctx->r7, 0X28);
    // 0x80088D64: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088D68: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088D6C: addiu       $v0, $a3, 0x30
    ctx->r2 = ADD32(ctx->r7, 0X30);
    // 0x80088D70: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088D74: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088D78: addiu       $v0, $a3, 0x38
    ctx->r2 = ADD32(ctx->r7, 0X38);
    // 0x80088D7C: sw          $t3, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r11;
    // 0x80088D80: sw          $t4, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r12;
    // 0x80088D84: sw          $v1, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r3;
    // 0x80088D88: sw          $t5, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r13;
    // 0x80088D8C: sw          $a0, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->r4;
    // 0x80088D90: sw          $t6, 0x2C($a3)
    MEM_W(0X2C, ctx->r7) = ctx->r14;
    // 0x80088D94: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80088D98: sw          $v0, -0x6F10($at)
    MEM_W(-0X6F10, ctx->r1) = ctx->r2;
    // 0x80088D9C: sw          $a2, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r6;
    // 0x80088DA0: sw          $a1, 0x34($a3)
    MEM_W(0X34, ctx->r7) = ctx->r5;
L_80088DA4:
    // 0x80088DA4: addiu       $t1, $t1, 0x1
    ctx->r9 = ADD32(ctx->r9, 0X1);
L_80088DA8:
    // 0x80088DA8: slti        $v0, $t1, 0x4
    ctx->r2 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x80088DAC: bne         $v0, $zero, L_80088A40
    if (ctx->r2 != 0) {
        // 0x80088DB0: sll         $a0, $t1, 1
        ctx->r4 = S32(ctx->r9 << 1);
            goto L_80088A40;
    }
    // 0x80088DB0: sll         $a0, $t1, 1
    ctx->r4 = S32(ctx->r9 << 1);
    // 0x80088DB4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80088DB8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80088DBC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80088DC0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80088DC4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80088DC8: jr          $ra
    // 0x80088DCC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80088DCC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80034634_FA34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80034634: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80034638: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8003463C: sw          $v0, 0x435C($at)
    MEM_W(0X435C, ctx->r1) = ctx->r2;
    // 0x80034640: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80034644: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034648: sw          $v0, 0x4354($at)
    MEM_W(0X4354, ctx->r1) = ctx->r2;
    // 0x8003464C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80034650: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034654: sb          $v0, 0x4352($at)
    MEM_B(0X4352, ctx->r1) = ctx->r2;
    // 0x80034658: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x8003465C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034660: sb          $zero, 0x4350($at)
    MEM_B(0X4350, ctx->r1) = 0;
    // 0x80034664: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034668: sw          $v0, 0x43A4($at)
    MEM_W(0X43A4, ctx->r1) = ctx->r2;
    // 0x8003466C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80034670: jr          $ra
    // 0x80034674: sb          $zero, 0x4349($at)
    MEM_B(0X4349, ctx->r1) = 0;
    TRACE_RETURN()
    return;
    // 0x80034674: sb          $zero, 0x4349($at)
    MEM_B(0X4349, ctx->r1) = 0;
;}
RECOMP_FUNC void func_80060C1C_3C01C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80060C1C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80060C20: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80060C24: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80060C28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80060C2C: addiu       $s0, $zero, 0x2E0
    ctx->r16 = ADD32(0, 0X2E0);
    // 0x80060C30: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80060C34: addiu       $s3, $zero, 0x80
    ctx->r19 = ADD32(0, 0X80);
    // 0x80060C38: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80060C3C: addiu       $s1, $zero, -0x21F
    ctx->r17 = ADD32(0, -0X21F);
    // 0x80060C40: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
L_80060C44:
    // 0x80060C44: bne         $s2, $s0, L_80060C84
    if (ctx->r18 != ctx->r16) {
        // 0x80060C48: srl         $v0, $s0, 3
        ctx->r2 = S32(U32(ctx->r16) >> 3);
            goto L_80060C84;
    }
    // 0x80060C48: srl         $v0, $s0, 3
    ctx->r2 = S32(U32(ctx->r16) >> 3);
    // 0x80060C4C: jal         0x8006036C
    // 0x80060C50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x80060C50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80060C54: j           L_80060D10
    // 0x80060C58: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_80060D10;
    // 0x80060C58: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80060C5C:
    // 0x80060C5C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80060C60: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80060C64: sb          $zero, 0x4E04($at)
    MEM_B(0X4E04, ctx->r1) = 0;
    // 0x80060C68: j           L_80060CE4
    // 0x80060C6C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
        goto L_80060CE4;
    // 0x80060C6C: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_80060C70:
    // 0x80060C70: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80060C74: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80060C78: sb          $zero, 0x4E00($at)
    MEM_B(0X4E00, ctx->r1) = 0;
    // 0x80060C7C: j           L_80060D10
    // 0x80060C80: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_80060D10;
    // 0x80060C80: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80060C84:
    // 0x80060C84: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80060C88: addiu       $a0, $a0, 0x55A8
    ctx->r4 = ADD32(ctx->r4, 0X55A8);
    // 0x80060C8C: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    // 0x80060C90: andi        $v0, $s0, 0x7
    ctx->r2 = ctx->r16 & 0X7;
    // 0x80060C94: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80060C98: srav        $v0, $s3, $v0
    ctx->r2 = S32(SIGNED(ctx->r19) >> (ctx->r2 & 31));
    // 0x80060C9C: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80060CA0: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80060CA4: addiu       $v0, $s0, -0x500
    ctx->r2 = ADD32(ctx->r16, -0X500);
    // 0x80060CA8: sltiu       $v0, $v0, 0x20
    ctx->r2 = ctx->r2 < 0X20 ? 1 : 0;
    // 0x80060CAC: beq         $v0, $zero, L_80060D0C
    if (ctx->r2 == 0) {
        // 0x80060CB0: sb          $v1, 0x0($a0)
        MEM_B(0X0, ctx->r4) = ctx->r3;
            goto L_80060D0C;
    }
    // 0x80060CB0: sb          $v1, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r3;
    // 0x80060CB4: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x80060CB8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_80060CBC:
    // 0x80060CBC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80060CC0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80060CC4: lbu         $v0, 0x4E04($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4E04);
    // 0x80060CC8: beq         $v0, $a0, L_80060C5C
    if (ctx->r2 == ctx->r4) {
        // 0x80060CCC: nop
    
            goto L_80060C5C;
    }
    // 0x80060CCC: nop

    // 0x80060CD0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80060CD4: slti        $v0, $v1, 0x20
    ctx->r2 = SIGNED(ctx->r3) < 0X20 ? 1 : 0;
    // 0x80060CD8: bne         $v0, $zero, L_80060CBC
    if (ctx->r2 != 0) {
        // 0x80060CDC: nop
    
            goto L_80060CBC;
    }
    // 0x80060CDC: nop

    // 0x80060CE0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
L_80060CE4:
    // 0x80060CE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_80060CE8:
    // 0x80060CE8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80060CEC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80060CF0: lbu         $v0, 0x4E00($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4E00);
    // 0x80060CF4: beq         $v0, $a0, L_80060C70
    if (ctx->r2 == ctx->r4) {
        // 0x80060CF8: nop
    
            goto L_80060C70;
    }
    // 0x80060CF8: nop

    // 0x80060CFC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80060D00: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x80060D04: bne         $v0, $zero, L_80060CE8
    if (ctx->r2 != 0) {
        // 0x80060D08: nop
    
            goto L_80060CE8;
    }
    // 0x80060D08: nop

L_80060D0C:
    // 0x80060D0C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80060D10:
    // 0x80060D10: sltiu       $v0, $s0, 0x2EC
    ctx->r2 = ctx->r16 < 0X2EC ? 1 : 0;
    // 0x80060D14: bne         $v0, $zero, L_80060C44
    if (ctx->r2 != 0) {
        // 0x80060D18: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80060C44;
    }
    // 0x80060D18: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80060D1C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80060D20: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80060D24: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80060D28: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80060D2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80060D30: jr          $ra
    // 0x80060D34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80060D34: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80091448_6C848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80091448: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8009144C: lw          $v0, -0xEEC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0XEEC);
    // 0x80091450: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80091454: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80091458: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8009145C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80091460: lw          $s0, 0x14($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X14);
    // 0x80091464: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80091468: bne         $s0, $zero, L_8009147C
    if (ctx->r16 != 0) {
        // 0x8009146C: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_8009147C;
    }
    // 0x8009146C: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80091470: lw          $s0, 0x4($v0)
    ctx->r16 = MEM_W(ctx->r2, 0X4);
    // 0x80091474: beq         $s0, $zero, L_800914A4
    if (ctx->r16 == 0) {
        // 0x80091478: nop
    
            goto L_800914A4;
    }
    // 0x80091478: nop

L_8009147C:
    // 0x8009147C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80091480: jal         0x80098C4C
    // 0x80091484: sw          $s0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r16;
    alUnlink(rdram, ctx);
        goto after_0;
    // 0x80091484: sw          $s0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r16;
    after_0:
    // 0x80091488: lui         $a1, 0x800D
    ctx->r5 = S32(0X800D << 16);
    // 0x8009148C: lw          $a1, -0xEEC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XEEC);
    // 0x80091490: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80091494: jal         0x80098C2C
    // 0x80091498: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    alLink(rdram, ctx);
        goto after_1;
    // 0x80091498: addiu       $a1, $a1, 0xC
    ctx->r5 = ADD32(ctx->r5, 0XC);
    after_1:
    // 0x8009149C: j           L_800914F4
    // 0x800914A0: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
        goto L_800914F4;
    // 0x800914A0: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_800914A4:
    // 0x800914A4: lw          $s0, 0xC($v0)
    ctx->r16 = MEM_W(ctx->r2, 0XC);
    // 0x800914A8: beq         $s0, $zero, L_800914F4
    if (ctx->r16 == 0) {
        // 0x800914AC: addu        $v0, $s1, $zero
        ctx->r2 = ADD32(ctx->r17, 0);
            goto L_800914F4;
    }
    // 0x800914AC: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_800914B0:
    // 0x800914B0: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x800914B4: lh          $v1, 0x16($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X16);
    // 0x800914B8: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x800914BC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x800914C0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x800914C4: bne         $v0, $zero, L_800914E8
    if (ctx->r2 != 0) {
        // 0x800914C8: nop
    
            goto L_800914E8;
    }
    // 0x800914C8: nop

    // 0x800914CC: lw          $v0, 0x88($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X88);
    // 0x800914D0: bne         $v0, $zero, L_800914E8
    if (ctx->r2 != 0) {
        // 0x800914D4: nop
    
            goto L_800914E8;
    }
    // 0x800914D4: nop

    // 0x800914D8: sw          $s0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r16;
    // 0x800914DC: lw          $v0, 0x8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X8);
    // 0x800914E0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x800914E4: lhu         $a1, 0x16($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X16);
L_800914E8:
    // 0x800914E8: lw          $s0, 0x0($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X0);
    // 0x800914EC: bne         $s0, $zero, L_800914B0
    if (ctx->r16 != 0) {
        // 0x800914F0: addu        $v0, $s1, $zero
        ctx->r2 = ADD32(ctx->r17, 0);
            goto L_800914B0;
    }
    // 0x800914F0: addu        $v0, $s1, $zero
    ctx->r2 = ADD32(ctx->r17, 0);
L_800914F4:
    // 0x800914F4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x800914F8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x800914FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80091500: jr          $ra
    // 0x80091504: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80091504: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80091508: nop

    // 0x8009150C: nop

;}
RECOMP_FUNC void func_80030548_B948(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80030548: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8003054C: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
    // 0x80030550: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80030554: jr          $ra
    // 0x80030558: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80030558: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8008D8E0_68CE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D8E0: sw          $zero, 0x84($a0)
    MEM_W(0X84, ctx->r4) = 0;
    // 0x8008D8E4: jr          $ra
    // 0x8008D8E8: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    TRACE_RETURN()
    return;
    // 0x8008D8E8: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_80062E08_3E208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80062E08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80062E0C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80062E10: lw          $v0, 0x6C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X6C);
    // 0x80062E14: lw          $a1, 0x44($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X44);
    // 0x80062E18: lbu         $v1, 0x1($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X1);
    // 0x80062E1C: lbu         $a2, 0x2($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X2);
    // 0x80062E20: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80062E24: beq         $a1, $zero, L_80062E38
    if (ctx->r5 == 0) {
        // 0x80062E28: sw          $v0, 0x6C($a0)
        MEM_W(0X6C, ctx->r4) = ctx->r2;
            goto L_80062E38;
    }
    // 0x80062E28: sw          $v0, 0x6C($a0)
    MEM_W(0X6C, ctx->r4) = ctx->r2;
    // 0x80062E2C: sll         $a0, $v1, 24
    ctx->r4 = S32(ctx->r3 << 24);
    // 0x80062E30: j           L_80062E54
    // 0x80062E34: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
        goto L_80062E54;
    // 0x80062E34: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
L_80062E38:
    // 0x80062E38: sll         $v0, $a2, 2
    ctx->r2 = S32(ctx->r6 << 2);
    // 0x80062E3C: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x80062E40: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80062E44: lw          $a1, 0x27EC($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X27EC);
    // 0x80062E48: sll         $a0, $v1, 24
    ctx->r4 = S32(ctx->r3 << 24);
    // 0x80062E4C: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80062E50: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
L_80062E54:
    // 0x80062E54: jal         0x80061510
    // 0x80062E58: nop

    func_80061510_3C910(rdram, ctx);
        goto after_0;
    // 0x80062E58: nop

    after_0:
    // 0x80062E5C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80062E60: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80062E64: jr          $ra
    // 0x80062E68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80062E68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80093230_6E630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80093230: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80093234: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80093238: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8009323C: lw          $s0, 0xC($a0)
    ctx->r16 = MEM_W(ctx->r4, 0XC);
    // 0x80093240: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80093244: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x80093248: lw          $a2, 0x8($a1)
    ctx->r6 = MEM_W(ctx->r5, 0X8);
    // 0x8009324C: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80093250: jal         0x8009E110
    // 0x80093254: addiu       $a0, $a0, 0x58F8
    ctx->r4 = ADD32(ctx->r4, 0X58F8);
    osPfsInitPak_recomp(rdram, ctx);
        goto after_0;
    // 0x80093254: addiu       $a0, $a0, 0x58F8
    ctx->r4 = ADD32(ctx->r4, 0X58F8);
    after_0:
    // 0x80093258: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8009325C: bne         $v1, $zero, L_80093270
    if (ctx->r3 != 0) {
        // 0x80093260: addu        $v0, $v1, $zero
        ctx->r2 = ADD32(ctx->r3, 0);
            goto L_80093270;
    }
    // 0x80093260: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80093264: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80093268: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    // 0x8009326C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
L_80093270:
    // 0x80093270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80093274: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80093278: jr          $ra
    // 0x8009327C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8009327C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8004A234_25634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8004A234: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8004A238: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A23C: sb          $v0, -0x38EC($at)
    MEM_B(-0X38EC, ctx->r1) = ctx->r2;
    // 0x8004A240: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004A244: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A248: sh          $a0, -0x38D4($at)
    MEM_H(-0X38D4, ctx->r1) = ctx->r4;
    // 0x8004A24C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A250: sh          $a1, -0x38D2($at)
    MEM_H(-0X38D2, ctx->r1) = ctx->r5;
    // 0x8004A254: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A258: sb          $a2, -0x38E0($at)
    MEM_B(-0X38E0, ctx->r1) = ctx->r6;
    // 0x8004A25C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8004A260: jr          $ra
    // 0x8004A264: sb          $v0, -0x38DF($at)
    MEM_B(-0X38DF, ctx->r1) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8004A264: sb          $v0, -0x38DF($at)
    MEM_B(-0X38DF, ctx->r1) = ctx->r2;
;}
RECOMP_FUNC void func_8008D410_68810(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008D410: addu        $t0, $a0, $zero
    ctx->r8 = ADD32(ctx->r4, 0);
    // 0x8008D414: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x8008D418: lui         $a0, 0x8888
    ctx->r4 = S32(0X8888 << 16);
    // 0x8008D41C: ori         $a0, $a0, 0x8889
    ctx->r4 = ctx->r4 | 0X8889;
    // 0x8008D420: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8008D424: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8008D428: sll         $v0, $v0, 13
    ctx->r2 = S32(ctx->r2 << 13);
    // 0x8008D42C: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008D430: lui         $a0, 0x8018
    ctx->r4 = S32(0X8018 << 16);
    // 0x8008D434: lw          $a0, 0x4F94($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4F94);
    // 0x8008D438: mfhi        $t3
    ctx->r11 = hi;
    // 0x8008D43C: addu        $v1, $t3, $v0
    ctx->r3 = ADD32(ctx->r11, ctx->r2);
    // 0x8008D440: sra         $v1, $v1, 6
    ctx->r3 = S32(SIGNED(ctx->r3) >> 6);
    // 0x8008D444: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8008D448: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8008D44C: div         $zero, $v1, $a0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r4)));
    // 0x8008D450: bne         $a0, $zero, L_8008D45C
    if (ctx->r4 != 0) {
        // 0x8008D454: nop
    
            goto L_8008D45C;
    }
    // 0x8008D454: nop

    // 0x8008D458: break       7
    do_break(2148062296);
L_8008D45C:
    // 0x8008D45C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008D460: bne         $a0, $at, L_8008D474
    if (ctx->r4 != ctx->r1) {
        // 0x8008D464: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8008D474;
    }
    // 0x8008D464: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8008D468: bne         $v1, $at, L_8008D474
    if (ctx->r3 != ctx->r1) {
        // 0x8008D46C: nop
    
            goto L_8008D474;
    }
    // 0x8008D46C: nop

    // 0x8008D470: break       6
    do_break(2148062320);
L_8008D474:
    // 0x8008D474: mflo        $a3
    ctx->r7 = lo;
    // 0x8008D478: lh          $v0, 0x98($t0)
    ctx->r2 = MEM_H(ctx->r8, 0X98);
    // 0x8008D47C: nop

    // 0x8008D480: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8008D484: mflo        $v0
    ctx->r2 = lo;
    // 0x8008D488: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8008D48C: lw          $v1, 0x78($t0)
    ctx->r3 = MEM_W(ctx->r8, 0X78);
    // 0x8008D490: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8008D494: beq         $v1, $zero, L_8008D4A4
    if (ctx->r3 == 0) {
        // 0x8008D498: sra         $t2, $v0, 7
        ctx->r10 = S32(SIGNED(ctx->r2) >> 7);
            goto L_8008D4A4;
    }
    // 0x8008D498: sra         $t2, $v0, 7
    ctx->r10 = S32(SIGNED(ctx->r2) >> 7);
    // 0x8008D49C: j           L_8008D4E8
    // 0x8008D4A0: sh          $a3, 0x9C($t0)
    MEM_H(0X9C, ctx->r8) = ctx->r7;
        goto L_8008D4E8;
    // 0x8008D4A0: sh          $a3, 0x9C($t0)
    MEM_H(0X9C, ctx->r8) = ctx->r7;
L_8008D4A4:
    // 0x8008D4A4: lui         $v0, 0x8018
    ctx->r2 = S32(0X8018 << 16);
    // 0x8008D4A8: lw          $v0, 0x4F84($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4F84);
    // 0x8008D4AC: lui         $v1, 0x8018
    ctx->r3 = S32(0X8018 << 16);
    // 0x8008D4B0: lw          $v1, 0x4F8C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X4F8C);
    // 0x8008D4B4: blez        $v0, L_8008D4E8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8008D4B8: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_8008D4E8;
    }
    // 0x8008D4B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8008D4BC: addu        $t1, $v0, $zero
    ctx->r9 = ADD32(ctx->r2, 0);
    // 0x8008D4C0: addiu       $a0, $v1, 0x9C
    ctx->r4 = ADD32(ctx->r3, 0X9C);
L_8008D4C4:
    // 0x8008D4C4: lw          $v1, -0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, -0X28);
    // 0x8008D4C8: lw          $v0, 0x74($t0)
    ctx->r2 = MEM_W(ctx->r8, 0X74);
    // 0x8008D4CC: bne         $v1, $v0, L_8008D4DC
    if (ctx->r3 != ctx->r2) {
        // 0x8008D4D0: addiu       $a2, $a2, 0x1
        ctx->r6 = ADD32(ctx->r6, 0X1);
            goto L_8008D4DC;
    }
    // 0x8008D4D0: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8008D4D4: sh          $a3, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r7;
    // 0x8008D4D8: sh          $t2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r10;
L_8008D4DC:
    // 0x8008D4DC: slt         $v0, $a2, $t1
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x8008D4E0: bne         $v0, $zero, L_8008D4C4
    if (ctx->r2 != 0) {
        // 0x8008D4E4: addiu       $a0, $a0, 0x13C
        ctx->r4 = ADD32(ctx->r4, 0X13C);
            goto L_8008D4C4;
    }
    // 0x8008D4E4: addiu       $a0, $a0, 0x13C
    ctx->r4 = ADD32(ctx->r4, 0X13C);
L_8008D4E8:
    // 0x8008D4E8: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    // 0x8008D4EC: jr          $ra
    // 0x8008D4F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8008D4F0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8008E3FC_697FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008E3FC: lui         $v1, 0x800D
    ctx->r3 = S32(0X800D << 16);
    // 0x8008E400: addiu       $v1, $v1, -0x11DC
    ctx->r3 = ADD32(ctx->r3, -0X11DC);
    // 0x8008E404: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x8008E408: beq         $v0, $zero, L_8008E438
    if (ctx->r2 == 0) {
        // 0x8008E40C: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8008E438;
    }
    // 0x8008E40C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8008E410: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
L_8008E414:
    // 0x8008E414: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8008E418: lw          $v1, 0x4($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X4);
    // 0x8008E41C: slt         $v0, $a1, $v1
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8008E420: bnel        $v0, $zero, L_8008E428
    if (ctx->r2 != 0) {
        // 0x8008E424: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8008E428;
    }
    goto skip_0;
    // 0x8008E424: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    skip_0:
L_8008E428:
    // 0x8008E428: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x8008E42C: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8008E430: bne         $v0, $zero, L_8008E414
    if (ctx->r2 != 0) {
        // 0x8008E434: nop
    
            goto L_8008E414;
    }
    // 0x8008E434: nop

L_8008E438:
    // 0x8008E438: jr          $ra
    // 0x8008E43C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
    TRACE_RETURN()
    return;
    // 0x8008E43C: addu        $v0, $a1, $zero
    ctx->r2 = ADD32(ctx->r5, 0);
;}
RECOMP_FUNC void func_8008C3C4_677C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8008C3C4: lbu         $v0, 0xD0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD0);
    // 0x8008C3C8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8008C3CC: sb          $v0, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r2;
    // 0x8008C3D0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8008C3D4: bne         $v0, $zero, L_8008C408
    if (ctx->r2 != 0) {
        // 0x8008C3D8: nop
    
            goto L_8008C408;
    }
    // 0x8008C3D8: nop

    // 0x8008C3DC: lb          $v0, 0xD1($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD1);
    // 0x8008C3E0: bne         $v0, $zero, L_8008C3FC
    if (ctx->r2 != 0) {
        // 0x8008C3E4: nop
    
            goto L_8008C3FC;
    }
    // 0x8008C3E4: nop

    // 0x8008C3E8: lbu         $v0, 0xD8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XD8);
    // 0x8008C3EC: lbu         $v1, 0xCE($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XCE);
    // 0x8008C3F0: sb          $v0, 0xD1($a0)
    MEM_B(0XD1, ctx->r4) = ctx->r2;
    // 0x8008C3F4: j           L_8008C408
    // 0x8008C3F8: sb          $v1, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r3;
        goto L_8008C408;
    // 0x8008C3F8: sb          $v1, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r3;
L_8008C3FC:
    // 0x8008C3FC: lbu         $v0, 0xCF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XCF);
    // 0x8008C400: sb          $zero, 0xD1($a0)
    MEM_B(0XD1, ctx->r4) = 0;
    // 0x8008C404: sb          $v0, 0xD0($a0)
    MEM_B(0XD0, ctx->r4) = ctx->r2;
L_8008C408:
    // 0x8008C408: lb          $v0, 0xD1($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD1);
    // 0x8008C40C: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x8008C410: nop

    // 0x8008C414: jr          $ra
    // 0x8008C418: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
    TRACE_RETURN()
    return;
    // 0x8008C418: cvt.s.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.fl = CVT_S_W(ctx->f0.u32l);
;}
RECOMP_FUNC void func_8007AC24_56024(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8007AC24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8007AC28: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8007AC2C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8007AC30: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8007AC34: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8007AC38: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8007AC3C: bne         $v0, $zero, L_8007ACBC
    if (ctx->r2 != 0) {
        // 0x8007AC40: nop
    
            goto L_8007ACBC;
    }
    // 0x8007AC40: nop

    // 0x8007AC44: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8007AC48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8007AC4C: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8007AC50: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8007AC54: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x8007AC58: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007AC5C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007AC60: lbu         $v0, -0x2DDB($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2DDB);
    // 0x8007AC64: bne         $v0, $zero, L_8007AC7C
    if (ctx->r2 != 0) {
        // 0x8007AC68: sb          $v0, 0xA($a0)
        MEM_B(0XA, ctx->r4) = ctx->r2;
            goto L_8007AC7C;
    }
    // 0x8007AC68: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8007AC6C: jal         0x8004F5C4
    // 0x8007AC70: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8007AC70: nop

    after_0:
    // 0x8007AC74: j           L_8007ACBC
    // 0x8007AC78: nop

        goto L_8007ACBC;
    // 0x8007AC78: nop

L_8007AC7C:
    // 0x8007AC7C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007AC80: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007AC84: lw          $v0, -0x2DE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2DE0);
    // 0x8007AC88: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x8007AC8C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007AC90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007AC94: lbu         $v0, -0x2DDA($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2DDA);
    // 0x8007AC98: sb          $v0, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r2;
    // 0x8007AC9C: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007ACA0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007ACA4: lbu         $v0, -0x2DD9($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2DD9);
    // 0x8007ACA8: sb          $v0, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r2;
    // 0x8007ACAC: lui         $v0, 0x800C
    ctx->r2 = S32(0X800C << 16);
    // 0x8007ACB0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8007ACB4: lbu         $v0, -0x2DDC($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X2DDC);
    // 0x8007ACB8: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
L_8007ACBC:
    // 0x8007ACBC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8007ACC0: jr          $ra
    // 0x8007ACC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8007ACC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8007ACC8: nop

    // 0x8007ACCC: nop

;}
RECOMP_FUNC void func_80027490_2890(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80027490: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80027494: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80027498: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8002749C: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x800274A0: lui         $s1, 0x800D
    ctx->r17 = S32(0X800D << 16);
    // 0x800274A4: addiu       $s1, $s1, 0x6F90
    ctx->r17 = ADD32(ctx->r17, 0X6F90);
    // 0x800274A8: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x800274AC: lui         $s2, 0x800D
    ctx->r18 = S32(0X800D << 16);
    // 0x800274B0: addiu       $s2, $s2, 0x3A18
    ctx->r18 = ADD32(ctx->r18, 0X3A18);
    // 0x800274B4: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x800274B8: addiu       $s3, $zero, 0x10
    ctx->r19 = ADD32(0, 0X10);
    // 0x800274BC: bgez        $s0, L_800274DC
    if (SIGNED(ctx->r16) >= 0) {
        // 0x800274C0: sw          $ra, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r31;
            goto L_800274DC;
    }
    // 0x800274C0: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x800274C4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800274C8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x800274CC: jal         0x8009A3B4
    // 0x800274D0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x800274D0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_0:
    // 0x800274D4: j           L_80027518
    // 0x800274D8: nop

        goto L_80027518;
    // 0x800274D8: nop

L_800274DC:
    // 0x800274DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x800274E0: jal         0x80099440
    // 0x800274E4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    osInvalDCache_recomp(rdram, ctx);
        goto after_1;
    // 0x800274E4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_1:
    // 0x800274E8: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x800274EC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x800274F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x800274F4: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    // 0x800274F8: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x800274FC: sw          $s3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r19;
    // 0x80027500: jal         0x80094F50
    // 0x80027504: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    osPiStartDma_recomp(rdram, ctx);
        goto after_2;
    // 0x80027504: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_2:
    // 0x80027508: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8002750C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80027510: jal         0x8009A5E0
    // 0x80027514: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x80027514: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
L_80027518:
    // 0x80027518: lui         $v0, 0x800D
    ctx->r2 = S32(0X800D << 16);
    // 0x8002751C: lw          $v0, 0x6F90($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6F90);
    // 0x80027520: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x80027524: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80027528: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8002752C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80027530: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80027534: jr          $ra
    // 0x80027538: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80027538: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8002A4A4_58A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8002A4A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002A4A8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8002A4AC: jal         0x8002BF14
    // 0x8002A4B0: nop

    func_8002BF14_7314(rdram, ctx);
        goto after_0;
    // 0x8002A4B0: nop

    after_0:
    // 0x8002A4B4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8002A4B8: jr          $ra
    // 0x8002A4BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8002A4BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
