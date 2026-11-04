#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80238AE0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238AE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238AE4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238AE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238AEC: jal         0x800A3450
    // 0x80238AF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80238AF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80238AF4: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80238AF8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80238AFC: jal         0x800A3450
    // 0x80238B00: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80238B00: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
    after_1:
    // 0x80238B04: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80238B08: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80238B0C: jal         0x800A3450
    // 0x80238B10: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80238B10: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_2:
    // 0x80238B14: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80238B18: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x80238B1C: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x80238B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238B24: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238B28: jr          $ra
    // 0x80238B2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238B2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238540_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238540: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238544: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238548: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023854C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238550: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80238554: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80238558: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8023855C: beq         $v0, $zero, L_80238574
    if (ctx->r2 == 0) {
        // 0x80238560: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_80238574;
    }
    // 0x80238560: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80238564: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80238568: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8023856C: jal         0x8003B564
    // 0x80238570: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_0;
    // 0x80238570: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
L_80238574:
    // 0x80238574: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80238578: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023857C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238580: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238584: lw          $v0, 0x6100($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6100);
    // 0x80238588: jalr        $v0
    // 0x8023858C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8023858C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80238590: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80238594: beq         $v0, $zero, L_802385A4
    if (ctx->r2 == 0) {
        // 0x80238598: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802385A4;
    }
    // 0x80238598: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023859C: j           L_802385A8
    // 0x802385A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
        goto L_802385A8;
    // 0x802385A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_802385A4:
    // 0x802385A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_802385A8:
    // 0x802385A8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x802385AC: jal         0x80047284
    // 0x802385B0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_2;
    // 0x802385B0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x802385B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802385B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802385BC: jr          $ra
    // 0x802385C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802385C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E4C0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E4C0: lhu         $v0, 0x350($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X350);
    // 0x8022E4C4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E4C8: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022E4CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E4D0: bne         $v0, $zero, L_8022E4DC
    if (ctx->r2 != 0) {
        // 0x8022E4D4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E4DC;
    }
    // 0x8022E4D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E4D8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022E4DC:
    // 0x8022E4DC: jr          $ra
    // 0x8022E4E0: nop

    TRACE_RETURN()
    return;
    // 0x8022E4E0: nop

;}
RECOMP_FUNC void func_8023D140_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023D140: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023D144: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023D148: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8023D14C: addiu       $a0, $zero, 0x640
    ctx->r4 = ADD32(0, 0X640);
    // 0x8023D150: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8023D154: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8023D158: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8023D15C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023D160: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023D164: jal         0x8006033C
    // 0x8023D168: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8023D168: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8023D16C: bne         $v0, $zero, L_8023D278
    if (ctx->r2 != 0) {
        // 0x8023D170: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023D278;
    }
    // 0x8023D170: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023D174: jal         0x8004F2C4
    // 0x8023D178: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_1;
    // 0x8023D178: nop

    after_1:
    // 0x8023D17C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023D180: beq         $v1, $zero, L_8023D1A4
    if (ctx->r3 == 0) {
        // 0x8023D184: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023D1A4;
    }
    // 0x8023D184: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D188: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023D18C: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x8023D190: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023D194: sb          $zero, 0x4($v1)
    MEM_B(0X4, ctx->r3) = 0;
    // 0x8023D198: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x8023D19C: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
    // 0x8023D1A0: sw          $v1, 0x1C($s3)
    MEM_W(0X1C, ctx->r19) = ctx->r3;
L_8023D1A4:
    // 0x8023D1A4: jal         0x8004EFE4
    // 0x8023D1A8: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_2;
    // 0x8023D1A8: nop

    after_2:
    // 0x8023D1AC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023D1B0: beq         $v1, $zero, L_8023D1CC
    if (ctx->r3 == 0) {
        // 0x8023D1B4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023D1CC;
    }
    // 0x8023D1B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023D1B8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8023D1BC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8023D1C0: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8023D1C4: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x8023D1C8: sw          $zero, 0xC($v1)
    MEM_W(0XC, ctx->r3) = 0;
L_8023D1CC:
    // 0x8023D1CC: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8023D1D0: addiu       $s5, $zero, 0x1
    ctx->r21 = ADD32(0, 0X1);
    // 0x8023D1D4: addiu       $s4, $zero, 0xC
    ctx->r20 = ADD32(0, 0XC);
    // 0x8023D1D8: addiu       $s2, $zero, 0x6
    ctx->r18 = ADD32(0, 0X6);
    // 0x8023D1DC: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8023D1E0: addiu       $s1, $s1, 0x75C0
    ctx->r17 = ADD32(ctx->r17, 0X75C0);
L_8023D1E4:
    // 0x8023D1E4: jal         0x8004F144
    // 0x8023D1E8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x8023D1E8: nop

    after_3:
    // 0x8023D1EC: beql        $v0, $zero, L_8023D220
    if (ctx->r2 == 0) {
        // 0x8023D1F0: addiu       $s2, $s2, -0x2
        ctx->r18 = ADD32(ctx->r18, -0X2);
            goto L_8023D220;
    }
    goto skip_0;
    // 0x8023D1F0: addiu       $s2, $s2, -0x2
    ctx->r18 = ADD32(ctx->r18, -0X2);
    skip_0:
    // 0x8023D1F4: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x8023D1F8: sb          $s5, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r21;
    // 0x8023D1FC: sb          $s4, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r20;
    // 0x8023D200: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x8023D204: sb          $zero, 0xC($v0)
    MEM_B(0XC, ctx->r2) = 0;
    // 0x8023D208: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x8023D20C: sb          $s0, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r16;
    // 0x8023D210: sb          $zero, 0xF($v0)
    MEM_B(0XF, ctx->r2) = 0;
    // 0x8023D214: sb          $s2, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r18;
    // 0x8023D218: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x8023D21C: addiu       $s2, $s2, -0x2
    ctx->r18 = ADD32(ctx->r18, -0X2);
L_8023D220:
    // 0x8023D220: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8023D224: slti        $v0, $s0, 0x6
    ctx->r2 = SIGNED(ctx->r16) < 0X6 ? 1 : 0;
    // 0x8023D228: bne         $v0, $zero, L_8023D1E4
    if (ctx->r2 != 0) {
        // 0x8023D22C: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_8023D1E4;
    }
    // 0x8023D22C: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8023D230: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8023D234: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x8023D238: addiu       $s2, $s2, 0x75E0
    ctx->r18 = ADD32(ctx->r18, 0X75E0);
    // 0x8023D23C: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8023D240: addiu       $s1, $s1, 0x664C
    ctx->r17 = ADD32(ctx->r17, 0X664C);
L_8023D244:
    // 0x8023D244: jal         0x8003E6BC
    // 0x8023D248: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_4;
    // 0x8023D248: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8023D24C: jal         0x80071654
    // 0x8023D250: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    func_80071654_4CA54(rdram, ctx);
        goto after_5;
    // 0x8023D250: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    after_5:
    // 0x8023D254: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x8023D258: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x8023D25C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8023D260: slti        $v0, $s0, 0x7
    ctx->r2 = SIGNED(ctx->r16) < 0X7 ? 1 : 0;
    // 0x8023D264: bne         $v0, $zero, L_8023D244
    if (ctx->r2 != 0) {
        // 0x8023D268: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_8023D244;
    }
    // 0x8023D268: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x8023D26C: lbu         $v0, 0x8($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X8);
    // 0x8023D270: sb          $zero, 0x9($s3)
    MEM_B(0X9, ctx->r19) = 0;
    // 0x8023D274: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8023D278:
    // 0x8023D278: sb          $v0, 0x8($s3)
    MEM_B(0X8, ctx->r19) = ctx->r2;
    // 0x8023D27C: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8023D280: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8023D284: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8023D288: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023D28C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023D290: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023D294: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023D298: jr          $ra
    // 0x8023D29C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023D29C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8023E514_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023E514: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023E518: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023E51C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023E520: jal         0x8023EE88
    // 0x8023E524: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8023EE88_ovl5(rdram, ctx);
        goto after_0;
    // 0x8023E524: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8023E528: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023E52C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023E530: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8023E534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023E538: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023E53C: jr          $ra
    // 0x8023E540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023E540: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238470_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238470: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238474: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238478: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023847C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80238480: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80238484: bne         $v0, $zero, L_802384D8
    if (ctx->r2 != 0) {
        // 0x80238488: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_802384D8;
    }
    // 0x80238488: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023848C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80238490: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80238494: jal         0x8004D5D4
    // 0x80238498: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80238498: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023849C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802384A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802384A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802384A8: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x802384AC: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x802384B0: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x802384B4: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x802384B8: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x802384BC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802384C0: addiu       $v0, $zero, 0x8C0
    ctx->r2 = ADD32(0, 0X8C0);
    // 0x802384C4: jal         0x80050294
    // 0x802384C8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x802384C8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_1:
    // 0x802384CC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802384D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802384D4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802384D8:
    // 0x802384D8: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802384DC: lw          $v0, -0x3A40($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A40);
    // 0x802384E0: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x802384E4: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x802384E8: bne         $v0, $zero, L_802384F4
    if (ctx->r2 != 0) {
        // 0x802384EC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802384F4;
    }
    // 0x802384EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802384F0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_802384F4:
    // 0x802384F4: sb          $v0, 0xFC($s0)
    MEM_B(0XFC, ctx->r16) = ctx->r2;
    // 0x802384F8: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x802384FC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80238500: jal         0x8009A3B4
    // 0x80238504: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80238504: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80238508: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8023850C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80238510: jal         0x8009A3B4
    // 0x80238514: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80238514: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_3:
    // 0x80238518: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8023851C: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80238520: jal         0x8009A3B4
    // 0x80238524: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80238524: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80238528: jal         0x8005044C
    // 0x8023852C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8023852C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80238530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80238534: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80238538: jr          $ra
    // 0x8023853C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023853C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228784_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228784: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80228788: bne         $v0, $zero, L_802287A0
    if (ctx->r2 != 0) {
        // 0x8022878C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802287A0;
    }
    // 0x8022878C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228790: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80228794: sb          $zero, 0x5($a0)
    MEM_B(0X5, ctx->r4) = 0;
    // 0x80228798: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8022879C: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_802287A0:
    // 0x802287A0: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802287A4: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x802287A8: bne         $v1, $v0, L_802287BC
    if (ctx->r3 != ctx->r2) {
        // 0x802287AC: addiu       $v0, $zero, 0x78
        ctx->r2 = ADD32(0, 0X78);
            goto L_802287BC;
    }
    // 0x802287AC: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x802287B0: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x802287B4: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x802287B8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
L_802287BC:
    // 0x802287BC: bne         $v1, $v0, L_802287D4
    if (ctx->r3 != ctx->r2) {
        // 0x802287C0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802287D4;
    }
    // 0x802287C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802287C4: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x802287C8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802287CC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802287D0: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
L_802287D4:
    // 0x802287D4: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802287D8: addiu       $v0, $zero, 0x1C2
    ctx->r2 = ADD32(0, 0X1C2);
    // 0x802287DC: bne         $v1, $v0, L_802287F4
    if (ctx->r3 != ctx->r2) {
        // 0x802287E0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_802287F4;
    }
    // 0x802287E0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802287E4: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x802287E8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802287EC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802287F0: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
L_802287F4:
    // 0x802287F4: jr          $ra
    // 0x802287F8: nop

    TRACE_RETURN()
    return;
    // 0x802287F8: nop

;}
RECOMP_FUNC void func_8023CB70_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023CB70: lhu         $t3, 0x0($a0)
    ctx->r11 = MEM_HU(ctx->r4, 0X0);
    // 0x8023CB74: lhu         $t2, 0x2($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X2);
    // 0x8023CB78: lhu         $t1, 0x4($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X4);
    // 0x8023CB7C: lhu         $t0, 0x6($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X6);
    // 0x8023CB80: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8023CB84: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8023CB88: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023CB8C: beq         $a1, $v0, L_8023CBF8
    if (ctx->r5 == ctx->r2) {
        // 0x8023CB90: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_8023CBF8;
    }
    // 0x8023CB90: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8023CB94: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x8023CB98: beql        $v0, $zero, L_8023CBB0
    if (ctx->r2 == 0) {
        // 0x8023CB9C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023CBB0;
    }
    goto skip_0;
    // 0x8023CB9C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023CBA0: beq         $a1, $zero, L_8023CBC8
    if (ctx->r5 == 0) {
        // 0x8023CBA4: sll         $a0, $t0, 16
        ctx->r4 = S32(ctx->r8 << 16);
            goto L_8023CBC8;
    }
    // 0x8023CBA4: sll         $a0, $t0, 16
    ctx->r4 = S32(ctx->r8 << 16);
    // 0x8023CBA8: j           L_8023CCF4
    // 0x8023CBAC: nop

        goto L_8023CCF4;
    // 0x8023CBAC: nop

L_8023CBB0:
    // 0x8023CBB0: beq         $a1, $v0, L_8023CC4C
    if (ctx->r5 == ctx->r2) {
        // 0x8023CBB4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8023CC4C;
    }
    // 0x8023CBB4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023CBB8: beq         $a1, $v0, L_8023CCA0
    if (ctx->r5 == ctx->r2) {
        // 0x8023CBBC: sll         $a0, $t1, 16
        ctx->r4 = S32(ctx->r9 << 16);
            goto L_8023CCA0;
    }
    // 0x8023CBBC: sll         $a0, $t1, 16
    ctx->r4 = S32(ctx->r9 << 16);
    // 0x8023CBC0: j           L_8023CCF4
    // 0x8023CBC4: nop

        goto L_8023CCF4;
    // 0x8023CBC4: nop

L_8023CBC8:
    // 0x8023CBC8: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8023CBCC: sll         $v1, $t2, 16
    ctx->r3 = S32(ctx->r10 << 16);
    // 0x8023CBD0: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023CBD4: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8023CBD8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023CBDC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023CBE0: bne         $a0, $v1, L_8023CCF4
    if (ctx->r4 != ctx->r3) {
        // 0x8023CBE4: nop
    
            goto L_8023CCF4;
    }
    // 0x8023CBE4: nop

    // 0x8023CBE8: sll         $v0, $t1, 16
    ctx->r2 = S32(ctx->r9 << 16);
    // 0x8023CBEC: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023CBF0: j           L_8023CCCC
    // 0x8023CBF4: sll         $v0, $t3, 16
    ctx->r2 = S32(ctx->r11 << 16);
        goto L_8023CCCC;
    // 0x8023CBF4: sll         $v0, $t3, 16
    ctx->r2 = S32(ctx->r11 << 16);
L_8023CBF8:
    // 0x8023CBF8: sll         $a0, $t1, 16
    ctx->r4 = S32(ctx->r9 << 16);
    // 0x8023CBFC: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8023CC00: sll         $v1, $t3, 16
    ctx->r3 = S32(ctx->r11 << 16);
    // 0x8023CC04: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023CC08: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8023CC0C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023CC10: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023CC14: bne         $a0, $v1, L_8023CCF4
    if (ctx->r4 != ctx->r3) {
        // 0x8023CC18: nop
    
            goto L_8023CCF4;
    }
    // 0x8023CC18: nop

    // 0x8023CC1C: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x8023CC20: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023CC24: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
    // 0x8023CC28: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023CC2C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023CC30: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023CC34: bne         $v0, $zero, L_8023CCF4
    if (ctx->r2 != 0) {
        // 0x8023CC38: nop
    
            goto L_8023CCF4;
    }
    // 0x8023CC38: nop

    // 0x8023CC3C: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8023CC40: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023CC44: j           L_8023CCEC
    // 0x8023CC48: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
        goto L_8023CCEC;
    // 0x8023CC48: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
L_8023CC4C:
    // 0x8023CC4C: sll         $a0, $t0, 16
    ctx->r4 = S32(ctx->r8 << 16);
    // 0x8023CC50: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8023CC54: sll         $v1, $t2, 16
    ctx->r3 = S32(ctx->r10 << 16);
    // 0x8023CC58: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023CC5C: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8023CC60: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023CC64: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023CC68: bne         $a0, $v1, L_8023CCF4
    if (ctx->r4 != ctx->r3) {
        // 0x8023CC6C: nop
    
            goto L_8023CCF4;
    }
    // 0x8023CC6C: nop

    // 0x8023CC70: sll         $v0, $t1, 16
    ctx->r2 = S32(ctx->r9 << 16);
    // 0x8023CC74: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023CC78: sll         $v0, $t3, 16
    ctx->r2 = S32(ctx->r11 << 16);
    // 0x8023CC7C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023CC80: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8023CC84: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023CC88: bne         $v0, $zero, L_8023CCF4
    if (ctx->r2 != 0) {
        // 0x8023CC8C: nop
    
            goto L_8023CCF4;
    }
    // 0x8023CC8C: nop

    // 0x8023CC90: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8023CC94: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023CC98: j           L_8023CCEC
    // 0x8023CC9C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
        goto L_8023CCEC;
    // 0x8023CC9C: addu        $v0, $v1, $v0
    ctx->r2 = ADD32(ctx->r3, ctx->r2);
L_8023CCA0:
    // 0x8023CCA0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8023CCA4: sll         $v1, $t3, 16
    ctx->r3 = S32(ctx->r11 << 16);
    // 0x8023CCA8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023CCAC: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x8023CCB0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023CCB4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023CCB8: bne         $a0, $v1, L_8023CCF4
    if (ctx->r4 != ctx->r3) {
        // 0x8023CCBC: nop
    
            goto L_8023CCF4;
    }
    // 0x8023CCBC: nop

    // 0x8023CCC0: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x8023CCC4: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023CCC8: sll         $v0, $t2, 16
    ctx->r2 = S32(ctx->r10 << 16);
L_8023CCCC:
    // 0x8023CCCC: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023CCD0: sll         $v0, $a3, 16
    ctx->r2 = S32(ctx->r7 << 16);
    // 0x8023CCD4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023CCD8: subu        $v0, $v1, $v0
    ctx->r2 = SUB32(ctx->r3, ctx->r2);
    // 0x8023CCDC: slt         $v0, $a0, $v0
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023CCE0: bne         $v0, $zero, L_8023CCF4
    if (ctx->r2 != 0) {
        // 0x8023CCE4: nop
    
            goto L_8023CCF4;
    }
    // 0x8023CCE4: nop

    // 0x8023CCE8: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
L_8023CCEC:
    // 0x8023CCEC: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x8023CCF0: addu        $t4, $v0, $zero
    ctx->r12 = ADD32(ctx->r2, 0);
L_8023CCF4:
    // 0x8023CCF4: jr          $ra
    // 0x8023CCF8: addu        $v0, $t4, $zero
    ctx->r2 = ADD32(ctx->r12, 0);
    TRACE_RETURN()
    return;
    // 0x8023CCF8: addu        $v0, $t4, $zero
    ctx->r2 = ADD32(ctx->r12, 0);
;}
RECOMP_FUNC void func_80241218_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80241218: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8024121C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80241220: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80241224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80241228: lbu         $a0, 0xA($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA);
    // 0x8024122C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80241230: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x80241234: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80241238: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x8024123C: beq         $v1, $v0, L_80241278
    if (ctx->r3 == ctx->r2) {
        // 0x80241240: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80241278;
    }
    // 0x80241240: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80241244: beql        $v0, $zero, L_8024125C
    if (ctx->r2 == 0) {
        // 0x80241248: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8024125C;
    }
    goto skip_0;
    // 0x80241248: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8024124C: beq         $v1, $zero, L_8024126C
    if (ctx->r3 == 0) {
        // 0x80241250: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_8024126C;
    }
    // 0x80241250: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80241254: j           L_802412B4
    // 0x80241258: nop

        goto L_802412B4;
    // 0x80241258: nop

L_8024125C:
    // 0x8024125C: beq         $v1, $v0, L_802412A0
    if (ctx->r3 == ctx->r2) {
        // 0x80241260: nop
    
            goto L_802412A0;
    }
    // 0x80241260: nop

    // 0x80241264: j           L_802412B4
    // 0x80241268: nop

        goto L_802412B4;
    // 0x80241268: nop

L_8024126C:
    // 0x8024126C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80241270: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x80241274: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
L_80241278:
    // 0x80241278: lw          $v0, 0x184($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X184);
    // 0x8024127C: bne         $v0, $s0, L_802412B4
    if (ctx->r2 != ctx->r16) {
        // 0x80241280: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802412B4;
    }
    // 0x80241280: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80241284: lb          $a3, 0xC($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XC);
    // 0x80241288: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8024128C: jal         0x800610AC
    // 0x80241290: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_0;
    // 0x80241290: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80241294: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80241298: j           L_802412B0
    // 0x8024129C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_802412B0;
    // 0x8024129C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802412A0:
    // 0x802412A0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802412A4: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x802412A8: bne         $v0, $zero, L_802412B4
    if (ctx->r2 != 0) {
        // 0x802412AC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802412B4;
    }
    // 0x802412AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802412B0:
    // 0x802412B0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802412B4:
    // 0x802412B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802412B8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802412BC: jr          $ra
    // 0x802412C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802412C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023AF9C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AF9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023AFA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023AFA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023AFA8: jal         0x8004F144
    // 0x8023AFAC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8023AFAC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8023AFB0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8023AFB4: beq         $a0, $zero, L_8023B000
    if (ctx->r4 == 0) {
        // 0x8023AFB8: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8023B000;
    }
    // 0x8023AFB8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8023AFBC: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8023AFC0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8023AFC4: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x8023AFC8: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x8023AFCC: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x8023AFD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023AFD4: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x8023AFD8: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x8023AFDC: lb          $v1, 0xA6($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA6);
    // 0x8023AFE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023AFE4: bne         $v1, $v0, L_8023AFF4
    if (ctx->r3 != ctx->r2) {
        // 0x8023AFE8: addiu       $a0, $a0, 0x38
        ctx->r4 = ADD32(ctx->r4, 0X38);
            goto L_8023AFF4;
    }
    // 0x8023AFE8: addiu       $a0, $a0, 0x38
    ctx->r4 = ADD32(ctx->r4, 0X38);
    // 0x8023AFEC: j           L_8023AFF8
    // 0x8023AFF0: addiu       $a1, $s0, 0x1A8
    ctx->r5 = ADD32(ctx->r16, 0X1A8);
        goto L_8023AFF8;
    // 0x8023AFF0: addiu       $a1, $s0, 0x1A8
    ctx->r5 = ADD32(ctx->r16, 0X1A8);
L_8023AFF4:
    // 0x8023AFF4: addiu       $a1, $s0, 0x1D0
    ctx->r5 = ADD32(ctx->r16, 0X1D0);
L_8023AFF8:
    // 0x8023AFF8: jal         0x8009A3B4
    // 0x8023AFFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023AFFC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
L_8023B000:
    // 0x8023B000: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x8023B004: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023B008: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B00C: jr          $ra
    // 0x8023B010: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B010: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F024_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F024: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F028: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F02C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F030: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022F034: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022F038: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022F03C: jal         0x8003516C
    // 0x8022F040: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8003516C_1056C(rdram, ctx);
        goto after_0;
    // 0x8022F040: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022F044: bne         $v0, $zero, L_8022F068
    if (ctx->r2 != 0) {
        // 0x8022F048: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022F068;
    }
    // 0x8022F048: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F04C: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022F050: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x8022F054: jal         0x800610AC
    // 0x8022F058: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_1;
    // 0x8022F058: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022F05C: lbu         $v0, 0x34B($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022F060: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F064: sb          $v0, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r2;
L_8022F068:
    // 0x8022F068: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F06C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022F070: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022F074: jal         0x8004F820
    // 0x8022F078: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022F078: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_2:
    // 0x8022F07C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F080: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8022F084: sb          $a0, 0x11B($s0)
    MEM_B(0X11B, ctx->r16) = ctx->r4;
    // 0x8022F088: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F08C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022F090: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022F094: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022F098: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F09C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F0A0: jr          $ra
    // 0x8022F0A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F0A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F6C0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F6C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F6C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F6C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F6CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F6D0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F6D4: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x8022F6D8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022F6DC: beq         $v0, $zero, L_8022F6F4
    if (ctx->r2 == 0) {
        // 0x8022F6E0: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_8022F6F4;
    }
    // 0x8022F6E0: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x8022F6E4: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022F6E8: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022F6EC: jal         0x8003B564
    // 0x8022F6F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_0;
    // 0x8022F6F0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
L_8022F6F4:
    // 0x8022F6F4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8022F6F8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F6FC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F700: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F704: lw          $v0, 0x5C20($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5C20);
    // 0x8022F708: jalr        $v0
    // 0x8022F70C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022F70C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022F710: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022F714: beq         $v0, $zero, L_8022F724
    if (ctx->r2 == 0) {
        // 0x8022F718: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F724;
    }
    // 0x8022F718: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F71C: j           L_8022F728
    // 0x8022F720: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
        goto L_8022F728;
    // 0x8022F720: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_8022F724:
    // 0x8022F724: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022F728:
    // 0x8022F728: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022F72C: jal         0x80047284
    // 0x8022F730: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_2;
    // 0x8022F730: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022F734: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F738: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F73C: jr          $ra
    // 0x8022F740: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F740: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237730_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237730: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237734: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80237738: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023773C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80237740: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80237744: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237748: lw          $v0, 0x6090($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6090);
    // 0x8023774C: jalr        $v0
    // 0x80237750: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80237750: nop

    after_0:
    // 0x80237754: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80237758: jr          $ra
    // 0x8023775C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023775C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231830_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231830: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231834: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231838: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023183C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231840: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80231844: addiu       $v1, $zero, 0x4210
    ctx->r3 = ADD32(0, 0X4210);
    // 0x80231848: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8023184C: beq         $v0, $zero, L_80231864
    if (ctx->r2 == 0) {
        // 0x80231850: sh          $v1, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r3;
            goto L_80231864;
    }
    // 0x80231850: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80231854: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80231858: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8023185C: jal         0x8003B564
    // 0x80231860: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_0;
    // 0x80231860: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
L_80231864:
    // 0x80231864: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80231868: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8023186C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231870: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231874: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231878: lw          $v0, 0x5CE4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5CE4);
    // 0x8023187C: jalr        $v0
    // 0x80231880: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80231880: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80231884: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80231888: beq         $v0, $zero, L_80231898
    if (ctx->r2 == 0) {
        // 0x8023188C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231898;
    }
    // 0x8023188C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231890: j           L_8023189C
    // 0x80231894: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
        goto L_8023189C;
    // 0x80231894: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
L_80231898:
    // 0x80231898: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8023189C:
    // 0x8023189C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x802318A0: jal         0x80047284
    // 0x802318A4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_2;
    // 0x802318A4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x802318A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802318AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802318B0: jr          $ra
    // 0x802318B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802318B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023C410_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C410: jr          $ra
    // 0x8023C414: nop

    TRACE_RETURN()
    return;
    // 0x8023C414: nop

;}
RECOMP_FUNC void func_80238918_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238918: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023891C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238920: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238924: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80238928: addiu       $s2, $s0, 0x14
    ctx->r18 = ADD32(ctx->r16, 0X14);
    // 0x8023892C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80238930: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80238934: addiu       $s1, $s0, 0x364
    ctx->r17 = ADD32(ctx->r16, 0X364);
    // 0x80238938: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023893C: jal         0x8004DE68
    // 0x80238940: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004DE68_29268(rdram, ctx);
        goto after_0;
    // 0x80238940: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80238944: lbu         $a0, 0x9($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X9);
    // 0x80238948: srl         $v0, $v0, 7
    ctx->r2 = S32(U32(ctx->r2) >> 7);
    // 0x8023894C: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80238950: beq         $v1, $zero, L_8023896C
    if (ctx->r3 == 0) {
        // 0x80238954: sw          $v0, 0x350($s0)
        MEM_W(0X350, ctx->r16) = ctx->r2;
            goto L_8023896C;
    }
    // 0x80238954: sw          $v0, 0x350($s0)
    MEM_W(0X350, ctx->r16) = ctx->r2;
    // 0x80238958: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023895C: beq         $v1, $v0, L_8023898C
    if (ctx->r3 == ctx->r2) {
        // 0x80238960: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8023898C;
    }
    // 0x80238960: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80238964: j           L_802389CC
    // 0x80238968: nop

        goto L_802389CC;
    // 0x80238968: nop

L_8023896C:
    // 0x8023896C: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x80238970: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80238974: bne         $v0, $zero, L_802389B8
    if (ctx->r2 != 0) {
        // 0x80238978: nop
    
            goto L_802389B8;
    }
    // 0x80238978: nop

    // 0x8023897C: beq         $v1, $zero, L_802389B8
    if (ctx->r3 == 0) {
        // 0x80238980: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802389B8;
    }
    // 0x80238980: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80238984: j           L_802389CC
    // 0x80238988: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_802389CC;
    // 0x80238988: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8023898C:
    // 0x8023898C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80238990: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x80238994: jal         0x8004F820
    // 0x80238998: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80238998: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8023899C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802389A0: lw          $a0, 0x350($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X350);
    // 0x802389A4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802389A8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802389AC: sltiu       $a0, $a0, 0x2
    ctx->r4 = ctx->r4 < 0X2 ? 1 : 0;
    // 0x802389B0: beq         $a0, $zero, L_802389CC
    if (ctx->r4 == 0) {
        // 0x802389B4: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_802389CC;
    }
    // 0x802389B4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_802389B8:
    // 0x802389B8: jal         0x80238AE0
    // 0x802389BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80238AE0_ovl5(rdram, ctx);
        goto after_2;
    // 0x802389BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802389C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802389C4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802389C8: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_802389CC:
    // 0x802389CC: jal         0x80238A08
    // 0x802389D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80238A08_ovl5(rdram, ctx);
        goto after_3;
    // 0x802389D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802389D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802389D8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802389DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802389E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802389E4: jr          $ra
    // 0x802389E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802389E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023C370_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023C370: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023C374: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023C378: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023C37C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8023C380: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023C384: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023C388: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8023C38C: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023C390: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023C394: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023C398: lh          $v0, 0x65C0($at)
    ctx->r2 = MEM_H(ctx->r1, 0X65C0);
    // 0x8023C39C: blez        $v0, L_8023C3F0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8023C3A0: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8023C3F0;
    }
    // 0x8023C3A0: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8023C3A4: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x8023C3A8: addiu       $s2, $s2, 0x7560
    ctx->r18 = ADD32(ctx->r18, 0X7560);
    // 0x8023C3AC: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_8023C3B0:
    // 0x8023C3B0: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x8023C3B4: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8023C3B8: jal         0x8004F4F8
    // 0x8023C3BC: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x8023C3BC: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_0:
    // 0x8023C3C0: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8023C3C4: addiu       $v0, $s0, 0x1
    ctx->r2 = ADD32(ctx->r16, 0X1);
    // 0x8023C3C8: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023C3CC: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8023C3D0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023C3D4: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8023C3D8: lh          $v1, 0x65C0($at)
    ctx->r3 = MEM_H(ctx->r1, 0X65C0);
    // 0x8023C3DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023C3E0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023C3E4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8023C3E8: bne         $v0, $zero, L_8023C3B0
    if (ctx->r2 != 0) {
        // 0x8023C3EC: sll         $v0, $s0, 16
        ctx->r2 = S32(ctx->r16 << 16);
            goto L_8023C3B0;
    }
    // 0x8023C3EC: sll         $v0, $s0, 16
    ctx->r2 = S32(ctx->r16 << 16);
L_8023C3F0:
    // 0x8023C3F0: jal         0x8004F684
    // 0x8023C3F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_1;
    // 0x8023C3F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8023C3F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023C3FC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023C400: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023C404: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023C408: jr          $ra
    // 0x8023C40C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023C40C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022E328_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E328: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022E32C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022E330: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E334: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022E338: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    // 0x8022E33C: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022E340: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022E344: jal         0x8022F614
    // 0x8022E348: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    func_8022F614_ovl5(rdram, ctx);
        goto after_0;
    // 0x8022E348: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    after_0:
    // 0x8022E34C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E350: beq         $v0, $zero, L_8022E380
    if (ctx->r2 == 0) {
        // 0x8022E354: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_8022E380;
    }
    // 0x8022E354: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022E358: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E35C: bne         $v1, $v0, L_8022E4A8
    if (ctx->r3 != ctx->r2) {
        // 0x8022E360: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E4A8;
    }
    // 0x8022E360: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E364: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022E368: lbu         $a0, 0xAC($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022E36C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x8022E370: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022E374: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022E378: j           L_8022E4AC
    // 0x8022E37C: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
        goto L_8022E4AC;
    // 0x8022E37C: sh          $a0, 0x362($s0)
    MEM_H(0X362, ctx->r16) = ctx->r4;
L_8022E380:
    // 0x8022E380: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E384: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022E388: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E38C: jal         0x8004DA90
    // 0x8022E390: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022E390: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022E394: lh          $a3, 0x354($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X354);
    // 0x8022E398: lh          $a2, 0x35C($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X35C);
    // 0x8022E39C: lh          $a1, 0x14($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X14);
    // 0x8022E3A0: addu        $a0, $a3, $zero
    ctx->r4 = ADD32(ctx->r7, 0);
    // 0x8022E3A4: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x8022E3A8: slt         $v0, $v0, $a1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x8022E3AC: beq         $v0, $zero, L_8022E3BC
    if (ctx->r2 == 0) {
        // 0x8022E3B0: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_8022E3BC;
    }
    // 0x8022E3B0: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x8022E3B4: j           L_8022E3CC
    // 0x8022E3B8: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
        goto L_8022E3CC;
    // 0x8022E3B8: addu        $v0, $a0, $v1
    ctx->r2 = ADD32(ctx->r4, ctx->r3);
L_8022E3BC:
    // 0x8022E3BC: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x8022E3C0: slt         $v0, $a1, $v0
    ctx->r2 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022E3C4: beq         $v0, $zero, L_8022E3FC
    if (ctx->r2 == 0) {
        // 0x8022E3C8: subu        $v0, $a0, $v1
        ctx->r2 = SUB32(ctx->r4, ctx->r3);
            goto L_8022E3FC;
    }
    // 0x8022E3C8: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
L_8022E3CC:
    // 0x8022E3CC: lhu         $a0, 0x56($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E3D0: lhu         $v1, 0x350($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X350);
    // 0x8022E3D4: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022E3D8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022E3DC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022E3E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022E3E4: sh          $v0, 0x366($s0)
    MEM_H(0X366, ctx->r16) = ctx->r2;
    // 0x8022E3E8: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022E3EC: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022E3F0: addiu       $v1, $v1, 0xA
    ctx->r3 = ADD32(ctx->r3, 0XA);
    // 0x8022E3F4: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022E3F8: sh          $v1, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r3;
L_8022E3FC:
    // 0x8022E3FC: lh          $a3, 0x10($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X10);
    // 0x8022E400: lh          $a2, 0x16($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X16);
    // 0x8022E404: lh          $v1, 0x18($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X18);
    // 0x8022E408: addu        $a1, $a3, $zero
    ctx->r5 = ADD32(ctx->r7, 0);
    // 0x8022E40C: addu        $v0, $a3, $a2
    ctx->r2 = ADD32(ctx->r7, ctx->r6);
    // 0x8022E410: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022E414: beq         $v0, $zero, L_8022E428
    if (ctx->r2 == 0) {
        // 0x8022E418: addu        $a0, $a2, $zero
        ctx->r4 = ADD32(ctx->r6, 0);
            goto L_8022E428;
    }
    // 0x8022E418: addu        $a0, $a2, $zero
    ctx->r4 = ADD32(ctx->r6, 0);
    // 0x8022E41C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E420: j           L_8022E43C
    // 0x8022E424: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
        goto L_8022E43C;
    // 0x8022E424: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_8022E428:
    // 0x8022E428: subu        $v0, $a3, $a2
    ctx->r2 = SUB32(ctx->r7, ctx->r6);
    // 0x8022E42C: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022E430: beq         $v0, $zero, L_8022E46C
    if (ctx->r2 == 0) {
        // 0x8022E434: subu        $v0, $a1, $a0
        ctx->r2 = SUB32(ctx->r5, ctx->r4);
            goto L_8022E46C;
    }
    // 0x8022E434: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x8022E438: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
L_8022E43C:
    // 0x8022E43C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022E440: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022E444: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022E448: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022E44C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E450: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E454: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022E458: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022E45C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022E460: sh          $v1, 0x1E($s1)
    MEM_H(0X1E, ctx->r17) = ctx->r3;
    // 0x8022E464: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x8022E468: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_8022E46C:
    // 0x8022E46C: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022E470: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022E474: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022E478: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E47C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022E480: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022E484: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022E488: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022E48C: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022E490: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022E494: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E498: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022E49C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E4A0: bne         $v0, $zero, L_8022E4AC
    if (ctx->r2 != 0) {
        // 0x8022E4A4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E4AC;
    }
    // 0x8022E4A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022E4A8:
    // 0x8022E4A8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022E4AC:
    // 0x8022E4AC: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022E4B0: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022E4B4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022E4B8: jr          $ra
    // 0x8022E4BC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022E4BC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8023F634_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023F634: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8023F638: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8023F63C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x8023F640: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8023F644: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8023F648: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8023F64C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023F650: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023F654: lw          $v1, 0x9C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X9C);
    // 0x8023F658: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x8023F65C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023F660: beq         $v0, $zero, L_8023F6CC
    if (ctx->r2 == 0) {
        // 0x8023F664: nop
    
            goto L_8023F6CC;
    }
    // 0x8023F664: nop

    // 0x8023F668: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8023F66C: addiu       $s0, $s0, 0x4A06
    ctx->r16 = ADD32(ctx->r16, 0X4A06);
    // 0x8023F670: jal         0x800324B4
    // 0x8023F674: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x8023F674: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_0:
    // 0x8023F678: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023F67C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8023F680: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023F684: sh          $v0, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r2;
    // 0x8023F688: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x8023F68C: sh          $v0, 0x46($s4)
    MEM_H(0X46, ctx->r20) = ctx->r2;
    // 0x8023F690: jal         0x80032498
    // 0x8023F694: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x8023F694: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_1:
    // 0x8023F698: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023F69C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8023F6A0: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023F6A4: sh          $v0, 0x48($s4)
    MEM_H(0X48, ctx->r20) = ctx->r2;
    // 0x8023F6A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023F6AC: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x8023F6B0: sb          $v0, 0x8($s4)
    MEM_B(0X8, ctx->r20) = ctx->r2;
    // 0x8023F6B4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023F6B8: sh          $zero, 0x4C($s4)
    MEM_H(0X4C, ctx->r20) = 0;
    // 0x8023F6BC: sh          $v0, 0x4E($s4)
    MEM_H(0X4E, ctx->r20) = ctx->r2;
    // 0x8023F6C0: sh          $zero, 0x50($s4)
    MEM_H(0X50, ctx->r20) = 0;
    // 0x8023F6C4: j           L_8023F6F4
    // 0x8023F6C8: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
        goto L_8023F6F4;
    // 0x8023F6C8: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
L_8023F6CC:
    // 0x8023F6CC: lbu         $v0, 0xA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XA);
    // 0x8023F6D0: beq         $v0, $zero, L_8023F6EC
    if (ctx->r2 == 0) {
        // 0x8023F6D4: lui         $v0, 0x1C00
        ctx->r2 = S32(0X1C00 << 16);
            goto L_8023F6EC;
    }
    // 0x8023F6D4: lui         $v0, 0x1C00
    ctx->r2 = S32(0X1C00 << 16);
L_8023F6D8:
    // 0x8023F6D8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023F6DC: beq         $v0, $zero, L_8023F6F4
    if (ctx->r2 == 0) {
        // 0x8023F6E0: nop
    
            goto L_8023F6F4;
    }
    // 0x8023F6E0: nop

    // 0x8023F6E4: j           L_8023F84C
    // 0x8023F6E8: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
        goto L_8023F84C;
    // 0x8023F6E8: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
L_8023F6EC:
    // 0x8023F6EC: j           L_8023F6D8
    // 0x8023F6F0: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
        goto L_8023F6D8;
    // 0x8023F6F0: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
L_8023F6F4:
    // 0x8023F6F4: lw          $v0, 0x44($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X44);
    // 0x8023F6F8: bne         $v0, $zero, L_8023F70C
    if (ctx->r2 != 0) {
        // 0x8023F6FC: sw          $zero, 0x9C($s4)
        MEM_W(0X9C, ctx->r20) = 0;
            goto L_8023F70C;
    }
    // 0x8023F6FC: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
    // 0x8023F700: lh          $v0, 0x48($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X48);
    // 0x8023F704: beq         $v0, $zero, L_8023F784
    if (ctx->r2 == 0) {
        // 0x8023F708: addiu       $s2, $s4, 0x34
        ctx->r18 = ADD32(ctx->r20, 0X34);
            goto L_8023F784;
    }
    // 0x8023F708: addiu       $s2, $s4, 0x34
    ctx->r18 = ADD32(ctx->r20, 0X34);
L_8023F70C:
    // 0x8023F70C: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x8023F710: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8023F714: beq         $v0, $zero, L_8023F750
    if (ctx->r2 == 0) {
        // 0x8023F718: nop
    
            goto L_8023F750;
    }
    // 0x8023F718: nop

    // 0x8023F71C: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x8023F720: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F724: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023F728: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023F72C: lhu         $v1, 0x6C68($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X6C68);
    // 0x8023F730: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x8023F734: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F738: sb          $v1, 0x96($s4)
    MEM_B(0X96, ctx->r20) = ctx->r3;
    // 0x8023F73C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023F740: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023F744: lhu         $v0, 0x6C6A($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X6C6A);
    // 0x8023F748: j           L_8023F780
    // 0x8023F74C: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
        goto L_8023F780;
    // 0x8023F74C: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
L_8023F750:
    // 0x8023F750: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x8023F754: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F758: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023F75C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023F760: lhu         $v1, 0x6C50($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X6C50);
    // 0x8023F764: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x8023F768: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F76C: sb          $v1, 0x96($s4)
    MEM_B(0X96, ctx->r20) = ctx->r3;
    // 0x8023F770: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023F774: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023F778: lhu         $v0, 0x6C52($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X6C52);
    // 0x8023F77C: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
L_8023F780:
    // 0x8023F780: addiu       $s2, $s4, 0x34
    ctx->r18 = ADD32(ctx->r20, 0X34);
L_8023F784:
    // 0x8023F784: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023F788: addiu       $s3, $s4, 0x1C
    ctx->r19 = ADD32(ctx->r20, 0X1C);
    // 0x8023F78C: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8023F790: jal         0x8009A3B4
    // 0x8023F794: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023F794: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8023F798: addiu       $s0, $s4, 0x2C
    ctx->r16 = ADD32(ctx->r20, 0X2C);
    // 0x8023F79C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023F7A0: addiu       $s1, $s4, 0x14
    ctx->r17 = ADD32(ctx->r20, 0X14);
    // 0x8023F7A4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023F7A8: jal         0x8009A3B4
    // 0x8023F7AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8023F7AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8023F7B0: jal         0x8023FB70
    // 0x8023F7B4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8023FB70_ovl5(rdram, ctx);
        goto after_4;
    // 0x8023F7B4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_4:
    // 0x8023F7B8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023F7BC: jal         0x8004DD04
    // 0x8023F7C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_5;
    // 0x8023F7C0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8023F7C4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8023F7C8: jal         0x8004DD04
    // 0x8023F7CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_6;
    // 0x8023F7CC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x8023F7D0: jal         0x8023F9B8
    // 0x8023F7D4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8023F9B8_ovl5(rdram, ctx);
        goto after_7;
    // 0x8023F7D4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_7:
    // 0x8023F7D8: lhu         $v1, 0x14($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X14);
    // 0x8023F7DC: lhu         $v0, 0x16($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X16);
    // 0x8023F7E0: lhu         $a0, 0x18($s4)
    ctx->r4 = MEM_HU(ctx->r20, 0X18);
    // 0x8023F7E4: lb          $a1, 0xD($s4)
    ctx->r5 = MEM_B(ctx->r20, 0XD);
    // 0x8023F7E8: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x8023F7EC: sh          $v0, 0x92($s4)
    MEM_H(0X92, ctx->r20) = ctx->r2;
    // 0x8023F7F0: slti        $v0, $a1, 0x1E
    ctx->r2 = SIGNED(ctx->r5) < 0X1E ? 1 : 0;
    // 0x8023F7F4: sh          $v1, 0x90($s4)
    MEM_H(0X90, ctx->r20) = ctx->r3;
    // 0x8023F7F8: beq         $v0, $zero, L_8023F84C
    if (ctx->r2 == 0) {
        // 0x8023F7FC: sh          $a0, 0x94($s4)
        MEM_H(0X94, ctx->r20) = ctx->r4;
            goto L_8023F84C;
    }
    // 0x8023F7FC: sh          $a0, 0x94($s4)
    MEM_H(0X94, ctx->r20) = ctx->r4;
    // 0x8023F800: slti        $v0, $a1, 0xF
    ctx->r2 = SIGNED(ctx->r5) < 0XF ? 1 : 0;
    // 0x8023F804: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x8023F808: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023F80C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8023F810: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x8023F814: beq         $v0, $zero, L_8023F83C
    if (ctx->r2 == 0) {
        // 0x8023F818: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8023F83C;
    }
    // 0x8023F818: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023F81C: lbu         $v1, 0x8F($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X8F);
    // 0x8023F820: bnel        $v1, $v0, L_8023F834
    if (ctx->r3 != ctx->r2) {
        // 0x8023F824: lui         $v0, 0x2CFF
        ctx->r2 = S32(0X2CFF << 16);
            goto L_8023F834;
    }
    goto skip_0;
    // 0x8023F824: lui         $v0, 0x2CFF
    ctx->r2 = S32(0X2CFF << 16);
    skip_0:
    // 0x8023F828: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x8023F82C: j           L_8023F838
    // 0x8023F830: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
        goto L_8023F838;
    // 0x8023F830: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_8023F834:
    // 0x8023F834: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
L_8023F838:
    // 0x8023F838: sw          $v0, 0x8C($s4)
    MEM_W(0X8C, ctx->r20) = ctx->r2;
L_8023F83C:
    // 0x8023F83C: lbu         $v0, 0xD($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XD);
    // 0x8023F840: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023F844: j           L_8023F870
    // 0x8023F848: sb          $v0, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r2;
        goto L_8023F870;
    // 0x8023F848: sb          $v0, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r2;
L_8023F84C:
    // 0x8023F84C: jal         0x8004F144
    // 0x8023F850: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_8;
    // 0x8023F850: nop

    after_8:
    // 0x8023F854: beq         $v0, $zero, L_8023F864
    if (ctx->r2 == 0) {
        // 0x8023F858: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_8023F864;
    }
    // 0x8023F858: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8023F85C: jal         0x8023FC60
    // 0x8023F860: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8023FC60_ovl5(rdram, ctx);
        goto after_9;
    // 0x8023F860: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_9:
L_8023F864:
    // 0x8023F864: sb          $zero, 0x0($s4)
    MEM_B(0X0, ctx->r20) = 0;
    // 0x8023F868: jal         0x8004F4F8
    // 0x8023F86C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_10;
    // 0x8023F86C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_10:
L_8023F870:
    // 0x8023F870: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8023F874: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8023F878: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8023F87C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8023F880: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023F884: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023F888: jr          $ra
    // 0x8023F88C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023F88C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80239018_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239018: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023901C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80239020: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239024: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80239028: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023902C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80239030: bne         $v0, $zero, L_80239070
    if (ctx->r2 != 0) {
        // 0x80239034: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80239070;
    }
    // 0x80239034: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80239038: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8023903C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80239040: addiu       $v0, $zero, -0x32
    ctx->r2 = ADD32(0, -0X32);
    // 0x80239044: sh          $zero, 0x14($s0)
    MEM_H(0X14, ctx->r16) = 0;
    // 0x80239048: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x8023904C: jal         0x80050294
    // 0x80239050: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80239050: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    after_0:
    // 0x80239054: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239058: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023905C: jal         0x80239590
    // 0x80239060: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    func_80239590_ovl5(rdram, ctx);
        goto after_1;
    // 0x80239060: addiu       $a2, $zero, 0xD
    ctx->r6 = ADD32(0, 0XD);
    after_1:
    // 0x80239064: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80239068: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023906C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80239070:
    // 0x80239070: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80239074: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80239078: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8023907C: bne         $v1, $v0, L_80239090
    if (ctx->r3 != ctx->r2) {
        // 0x80239080: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239090;
    }
    // 0x80239080: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239084: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80239088: jal         0x80239590
    // 0x8023908C: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    func_80239590_ovl5(rdram, ctx);
        goto after_2;
    // 0x8023908C: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    after_2:
L_80239090:
    // 0x80239090: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80239094: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80239098: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023909C: jr          $ra
    // 0x802390A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802390A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023CEF0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023CEF0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8023CEF4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8023CEF8: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8023CEFC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8023CF00: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8023CF04: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8023CF08: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8023CF0C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8023CF10: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8023CF14: lw          $a1, 0x1C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X1C);
    // 0x8023CF18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023CF1C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023CF20: lw          $v0, 0x75B0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X75B0);
    // 0x8023CF24: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x8023CF28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023CF2C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023CF30: sw          $v0, 0x75B0($at)
    MEM_W(0X75B0, ctx->r1) = ctx->r2;
    // 0x8023CF34: jal         0x8003BA58
    // 0x8023CF38: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    func_8003BA58_16E58(rdram, ctx);
        goto after_0;
    // 0x8023CF38: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    after_0:
    // 0x8023CF3C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_8023CF40:
    // 0x8023CF40: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8023CF44: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8023CF48: sra         $s0, $v0, 16
    ctx->r16 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023CF4C: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x8023CF50: jal         0x8003BB80
    // 0x8023CF54: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_8003BB80_16F80(rdram, ctx);
        goto after_1;
    // 0x8023CF54: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x8023CF58: addu        $v0, $s2, $zero
    ctx->r2 = ADD32(ctx->r18, 0);
    // 0x8023CF5C: bne         $v0, $zero, L_8023CF7C
    if (ctx->r2 != 0) {
        // 0x8023CF60: nop
    
            goto L_8023CF7C;
    }
    // 0x8023CF60: nop

    // 0x8023CF64: bne         $s0, $zero, L_8023CFB4
    if (ctx->r16 != 0) {
        // 0x8023CF68: nop
    
            goto L_8023CFB4;
    }
    // 0x8023CF68: nop

    // 0x8023CF6C: lbu         $v0, 0x10($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X10);
    // 0x8023CF70: sltiu       $v0, $v0, 0xA0
    ctx->r2 = ctx->r2 < 0XA0 ? 1 : 0;
    // 0x8023CF74: bne         $v0, $zero, L_8023CFB4
    if (ctx->r2 != 0) {
        // 0x8023CF78: nop
    
            goto L_8023CFB4;
    }
    // 0x8023CF78: nop

L_8023CF7C:
    // 0x8023CF7C: lbu         $v0, 0x10($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X10);
    // 0x8023CF80: lbu         $v1, 0x12($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X12);
    // 0x8023CF84: lbu         $a0, 0x14($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X14);
    // 0x8023CF88: lbu         $a1, 0x16($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X16);
    // 0x8023CF8C: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x8023CF90: addiu       $v0, $v0, -0x1F
    ctx->r2 = ADD32(ctx->r2, -0X1F);
    // 0x8023CF94: addiu       $v1, $v1, -0x1F
    ctx->r3 = ADD32(ctx->r3, -0X1F);
    // 0x8023CF98: addiu       $a0, $a0, -0x1F
    ctx->r4 = ADD32(ctx->r4, -0X1F);
    // 0x8023CF9C: addiu       $a1, $a1, -0x1F
    ctx->r5 = ADD32(ctx->r5, -0X1F);
    // 0x8023CFA0: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    // 0x8023CFA4: sb          $v1, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r3;
    // 0x8023CFA8: sb          $a0, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r4;
    // 0x8023CFAC: j           L_8023CFE4
    // 0x8023CFB0: sb          $a1, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r5;
        goto L_8023CFE4;
    // 0x8023CFB0: sb          $a1, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r5;
L_8023CFB4:
    // 0x8023CFB4: lbu         $a1, 0x10($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X10);
    // 0x8023CFB8: lbu         $v0, 0x12($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X12);
    // 0x8023CFBC: lbu         $v1, 0x14($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X14);
    // 0x8023CFC0: lbu         $a0, 0x16($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X16);
    // 0x8023CFC4: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8023CFC8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023CFCC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023CFD0: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8023CFD4: sb          $a1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r5;
    // 0x8023CFD8: sb          $v0, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r2;
    // 0x8023CFDC: sb          $v1, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r3;
    // 0x8023CFE0: sb          $a0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r4;
L_8023CFE4:
    // 0x8023CFE4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8023CFE8: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x8023CFEC: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8023CFF0: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x8023CFF4: jal         0x8003BC68
    // 0x8023CFF8: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x8023CFF8: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_2:
    // 0x8023CFFC: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x8023D000: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023D004: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D008: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023D00C: slti        $v0, $v0, 0x8
    ctx->r2 = SIGNED(ctx->r2) < 0X8 ? 1 : 0;
    // 0x8023D010: bne         $v0, $zero, L_8023CF40
    if (ctx->r2 != 0) {
        // 0x8023D014: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8023CF40;
    }
    // 0x8023D014: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023D018: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8023D01C: lw          $a1, 0x1C($s3)
    ctx->r5 = MEM_W(ctx->r19, 0X1C);
    // 0x8023D020: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8023D024: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x8023D028: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8023D02C: jal         0x8003BA58
    // 0x8023D030: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    func_8003BA58_16E58(rdram, ctx);
        goto after_3;
    // 0x8023D030: addu        $s0, $s2, $zero
    ctx->r16 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8023D034: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
L_8023D038:
    // 0x8023D038: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8023D03C: sll         $a2, $s1, 16
    ctx->r6 = S32(ctx->r17 << 16);
    // 0x8023D040: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8023D044: jal         0x8003BB80
    // 0x8023D048: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_8003BB80_16F80(rdram, ctx);
        goto after_4;
    // 0x8023D048: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_4:
    // 0x8023D04C: beq         $s0, $zero, L_8023D088
    if (ctx->r16 == 0) {
        // 0x8023D050: nop
    
            goto L_8023D088;
    }
    // 0x8023D050: nop

    // 0x8023D054: lbu         $v0, 0x10($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X10);
    // 0x8023D058: lbu         $v1, 0x12($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X12);
    // 0x8023D05C: lbu         $a0, 0x14($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X14);
    // 0x8023D060: lbu         $a1, 0x16($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X16);
    // 0x8023D064: addiu       $v0, $v0, -0x1F
    ctx->r2 = ADD32(ctx->r2, -0X1F);
    // 0x8023D068: addiu       $v1, $v1, -0x1F
    ctx->r3 = ADD32(ctx->r3, -0X1F);
    // 0x8023D06C: addiu       $a0, $a0, -0x1F
    ctx->r4 = ADD32(ctx->r4, -0X1F);
    // 0x8023D070: addiu       $a1, $a1, -0x1F
    ctx->r5 = ADD32(ctx->r5, -0X1F);
    // 0x8023D074: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    // 0x8023D078: sb          $v1, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r3;
    // 0x8023D07C: sb          $a0, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r4;
    // 0x8023D080: j           L_8023D0B8
    // 0x8023D084: sb          $a1, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r5;
        goto L_8023D0B8;
    // 0x8023D084: sb          $a1, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r5;
L_8023D088:
    // 0x8023D088: lbu         $a1, 0x10($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X10);
    // 0x8023D08C: lbu         $v0, 0x12($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X12);
    // 0x8023D090: lbu         $v1, 0x14($sp)
    ctx->r3 = MEM_BU(ctx->r29, 0X14);
    // 0x8023D094: lbu         $a0, 0x16($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X16);
    // 0x8023D098: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8023D09C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023D0A0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023D0A4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8023D0A8: sb          $a1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r5;
    // 0x8023D0AC: sb          $v0, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r2;
    // 0x8023D0B0: sb          $v1, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r3;
    // 0x8023D0B4: sb          $a0, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r4;
L_8023D0B8:
    // 0x8023D0B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8023D0BC: sll         $a1, $s1, 16
    ctx->r5 = S32(ctx->r17 << 16);
    // 0x8023D0C0: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8023D0C4: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x8023D0C8: jal         0x8003BC68
    // 0x8023D0CC: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_8003BC68_17068(rdram, ctx);
        goto after_5;
    // 0x8023D0CC: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_5:
    // 0x8023D0D0: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x8023D0D4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023D0D8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D0DC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023D0E0: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8023D0E4: bne         $v0, $zero, L_8023D038
    if (ctx->r2 != 0) {
        // 0x8023D0E8: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_8023D038;
    }
    // 0x8023D0E8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023D0EC: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8023D0F0: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8023D0F4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8023D0F8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8023D0FC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8023D100: jr          $ra
    // 0x8023D104: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8023D104: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8023D108: nop

    // 0x8023D10C: nop

;}
RECOMP_FUNC void func_80225424_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225424: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225428: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022542C: jal         0x8006033C
    // 0x80225430: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80225430: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_0:
    // 0x80225434: bne         $v0, $zero, L_80225460
    if (ctx->r2 != 0) {
        // 0x80225438: nop
    
            goto L_80225460;
    }
    // 0x80225438: nop

    // 0x8022543C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225440: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80225444: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225448: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022544C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225450: lw          $v0, 0x30A8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X30A8);
    // 0x80225454: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80225458: jalr        $v0
    // 0x8022545C: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022545C: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_1:
L_80225460:
    // 0x80225460: jal         0x8006033C
    // 0x80225464: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80225464: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_2:
    // 0x80225468: beq         $v0, $zero, L_802254A8
    if (ctx->r2 == 0) {
        // 0x8022546C: nop
    
            goto L_802254A8;
    }
    // 0x8022546C: nop

    // 0x80225470: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225474: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80225478: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022547C: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x80225480: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80225484: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225488: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022548C: lw          $v1, 0x3068($at)
    ctx->r3 = MEM_W(ctx->r1, 0X3068);
    // 0x80225490: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225494: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80225498: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022549C: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x802254A0: jalr        $v0
    // 0x802254A4: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802254A4: addiu       $a0, $a0, -0x35A0
    ctx->r4 = ADD32(ctx->r4, -0X35A0);
    after_3:
L_802254A8:
    // 0x802254A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802254AC: jr          $ra
    // 0x802254B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802254B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802388C4_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802388C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802388C8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802388CC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802388D0: lhu         $v0, 0x56($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X56);
    // 0x802388D4: lhu         $a0, 0x66($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X66);
    // 0x802388D8: lhu         $v1, 0x34C($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X34C);
    // 0x802388DC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802388E0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802388E4: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x802388E8: sh          $v1, 0x34C($a1)
    MEM_H(0X34C, ctx->r5) = ctx->r3;
    // 0x802388EC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802388F0: bne         $v1, $zero, L_80238904
    if (ctx->r3 != 0) {
        // 0x802388F4: sh          $v0, 0x56($a1)
        MEM_H(0X56, ctx->r5) = ctx->r2;
            goto L_80238904;
    }
    // 0x802388F4: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x802388F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802388FC: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
    // 0x80238900: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
L_80238904:
    // 0x80238904: jal         0x80238A08
    // 0x80238908: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_80238A08_ovl5(rdram, ctx);
        goto after_0;
    // 0x80238908: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8023890C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80238910: jr          $ra
    // 0x80238914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E010_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E010: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E014: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E018: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E01C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E020: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022E024: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022E028: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022E02C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E030: bne         $v0, $zero, L_8022E084
    if (ctx->r2 != 0) {
        // 0x8022E034: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_8022E084;
    }
    // 0x8022E034: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022E038: jal         0x8022F614
    // 0x8022E03C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022F614_ovl5(rdram, ctx);
        goto after_0;
    // 0x8022E03C: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x8022E040: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022E044: beq         $v0, $zero, L_8022E080
    if (ctx->r2 == 0) {
        // 0x8022E048: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022E080;
    }
    // 0x8022E048: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E04C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022E050: jal         0x8022F588
    // 0x8022E054: nop

    func_8022F588_ovl5(rdram, ctx);
        goto after_1;
    // 0x8022E054: nop

    after_1:
    // 0x8022E058: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E05C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E060: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8022E064: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022E068: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022E06C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022E070: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8022E074: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022E078: j           L_8022E084
    // 0x8022E07C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
        goto L_8022E084;
    // 0x8022E07C: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
L_8022E080:
    // 0x8022E080: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022E084:
    // 0x8022E084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E088: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E08C: jr          $ra
    // 0x8022E090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023F540_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023F540: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023F544: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023F548: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023F54C: lui         $a3, 0x3D48
    ctx->r7 = S32(0X3D48 << 16);
    // 0x8023F550: ori         $a3, $a3, 0xE
    ctx->r7 = ctx->r7 | 0XE;
    // 0x8023F554: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8023F558: lhu         $a0, 0x1C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1C);
    // 0x8023F55C: lhu         $a1, 0x20($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X20);
    // 0x8023F560: lhu         $a2, 0x24($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X24);
    // 0x8023F564: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8023F568: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x8023F56C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8023F570: sw          $a3, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r7;
    // 0x8023F574: sw          $v1, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r3;
    // 0x8023F578: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x8023F57C: sh          $a0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r4;
    // 0x8023F580: sh          $a0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r4;
    // 0x8023F584: sh          $a1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r5;
    // 0x8023F588: sh          $a1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r5;
    // 0x8023F58C: sh          $a2, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r6;
    // 0x8023F590: beq         $v0, $zero, L_8023F5CC
    if (ctx->r2 == 0) {
        // 0x8023F594: sh          $a2, 0x94($s0)
        MEM_H(0X94, ctx->r16) = ctx->r6;
            goto L_8023F5CC;
    }
    // 0x8023F594: sh          $a2, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r6;
    // 0x8023F598: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8023F59C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F5A0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023F5A4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023F5A8: lhu         $v1, 0x6C68($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X6C68);
    // 0x8023F5AC: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8023F5B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F5B4: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x8023F5B8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023F5BC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023F5C0: lhu         $v0, 0x6C6A($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X6C6A);
    // 0x8023F5C4: j           L_8023F5FC
    // 0x8023F5C8: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
        goto L_8023F5FC;
    // 0x8023F5C8: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_8023F5CC:
    // 0x8023F5CC: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8023F5D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F5D4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023F5D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023F5DC: lhu         $v1, 0x6C50($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X6C50);
    // 0x8023F5E0: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x8023F5E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023F5E8: sb          $v1, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r3;
    // 0x8023F5EC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023F5F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023F5F4: lhu         $v0, 0x6C52($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X6C52);
    // 0x8023F5F8: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
L_8023F5FC:
    // 0x8023F5FC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023F600: jal         0x8004F144
    // 0x8023F604: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8023F604: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023F608: beq         $v0, $zero, L_8023F618
    if (ctx->r2 == 0) {
        // 0x8023F60C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023F618;
    }
    // 0x8023F60C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023F610: jal         0x8023FC60
    // 0x8023F614: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_8023FC60_ovl5(rdram, ctx);
        goto after_1;
    // 0x8023F614: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_1:
L_8023F618:
    // 0x8023F618: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x8023F61C: jal         0x8004F4F8
    // 0x8023F620: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_2;
    // 0x8023F620: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023F624: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8023F628: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023F62C: jr          $ra
    // 0x8023F630: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023F630: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802282F8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802282F8: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802282FC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80228300: bne         $v1, $v0, L_8022831C
    if (ctx->r3 != ctx->r2) {
        // 0x80228304: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8022831C;
    }
    // 0x80228304: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80228308: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x8022830C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228310: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x80228314: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80228318: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
L_8022831C:
    // 0x8022831C: bne         $v1, $v0, L_8022832C
    if (ctx->r3 != ctx->r2) {
        // 0x80228320: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_8022832C;
    }
    // 0x80228320: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228324: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80228328: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_8022832C:
    // 0x8022832C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80228330: addiu       $v0, $zero, 0x37
    ctx->r2 = ADD32(0, 0X37);
    // 0x80228334: bne         $v1, $v0, L_80228350
    if (ctx->r3 != ctx->r2) {
        // 0x80228338: addiu       $v0, $zero, 0x3B
        ctx->r2 = ADD32(0, 0X3B);
            goto L_80228350;
    }
    // 0x80228338: addiu       $v0, $zero, 0x3B
    ctx->r2 = ADD32(0, 0X3B);
    // 0x8022833C: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80228340: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80228344: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x80228348: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x8022834C: addiu       $v0, $zero, 0x3B
    ctx->r2 = ADD32(0, 0X3B);
L_80228350:
    // 0x80228350: bne         $v1, $v0, L_8022836C
    if (ctx->r3 != ctx->r2) {
        // 0x80228354: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022836C;
    }
    // 0x80228354: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228358: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x8022835C: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x80228360: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80228364: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80228368: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_8022836C:
    // 0x8022836C: jr          $ra
    // 0x80228370: nop

    TRACE_RETURN()
    return;
    // 0x80228370: nop

;}
RECOMP_FUNC void func_8022B690_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B690: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B694: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022B698: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B69C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B6A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B6A4: bne         $v0, $zero, L_8022B824
    if (ctx->r2 != 0) {
        // 0x8022B6A8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8022B824;
    }
    // 0x8022B6A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B6AC: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022B6B0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B6B4: addu        $v0, $v0, $s0
    ctx->r2 = ADD32(ctx->r2, ctx->r16);
    // 0x8022B6B8: jal         0x8004F418
    // 0x8022B6BC: lw          $a0, 0x24($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X24);
    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x8022B6BC: lw          $a0, 0x24($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X24);
    after_0:
    // 0x8022B6C0: jal         0x8022BA70
    // 0x8022B6C4: nop

    func_8022BA70_ovl5(rdram, ctx);
        goto after_1;
    // 0x8022B6C4: nop

    after_1:
    // 0x8022B6C8: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8022B6CC: sll         $a0, $v1, 2
    ctx->r4 = S32(ctx->r3 << 2);
    // 0x8022B6D0: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022B6D4: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8022B6D8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022B6DC: addiu       $v1, $v1, 0x50D8
    ctx->r3 = ADD32(ctx->r3, 0X50D8);
    // 0x8022B6E0: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022B6E4: jal         0x8005FA7C
    // 0x8022B6E8: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x8022B6E8: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022B6EC: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022B6F0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022B6F4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B6F8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B6FC: lw          $v0, 0x50A0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X50A0);
    // 0x8022B700: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B704: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x8022B708: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022B70C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022B710: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B714: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B718: lw          $v0, 0x50A4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X50A4);
    // 0x8022B71C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B720: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8022B724: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022B728: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022B72C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B730: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B734: lw          $v0, 0x50A8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X50A8);
    // 0x8022B738: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B73C: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x8022B740: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022B744: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022B748: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B74C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B750: lw          $v0, 0x50A0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X50A0);
    // 0x8022B754: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B758: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B75C: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x8022B760: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022B764: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022B768: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B76C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B770: lw          $v0, 0x50A4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X50A4);
    // 0x8022B774: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B778: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B77C: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8022B780: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022B784: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022B788: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B78C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B790: lw          $v0, 0x50A8($at)
    ctx->r2 = MEM_W(ctx->r1, 0X50A8);
    // 0x8022B794: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B798: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B79C: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x8022B7A0: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022B7A4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022B7A8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B7AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B7B0: lw          $v0, 0x50AC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X50AC);
    // 0x8022B7B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B7B8: jal         0x80060170
    // 0x8022B7BC: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    func_80060170_3B570(rdram, ctx);
        goto after_3;
    // 0x8022B7BC: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    after_3:
    // 0x8022B7C0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022B7C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B7C8: jal         0x8005F6B4
    // 0x8022B7CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_4;
    // 0x8022B7CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022B7D0: lbu         $v0, 0x6($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X6);
    // 0x8022B7D4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B7D8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B7DC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B7E0: lw          $v0, 0x527C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X527C);
    // 0x8022B7E4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022B7E8: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x8022B7EC: jal         0x80036E48
    // 0x8022B7F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80036E48_12248(rdram, ctx);
        goto after_5;
    // 0x8022B7F0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x8022B7F4: lbu         $a0, 0x6($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X6);
    // 0x8022B7F8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B7FC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022B800: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B804: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022B808: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B80C: addiu       $v0, $v0, 0x5298
    ctx->r2 = ADD32(ctx->r2, 0X5298);
    // 0x8022B810: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022B814: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022B818: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x8022B81C: jal         0x80060590
    // 0x8022B820: addiu       $a0, $a0, 0x243
    ctx->r4 = ADD32(ctx->r4, 0X243);
    func_80060590_3B990(rdram, ctx);
        goto after_6;
    // 0x8022B820: addiu       $a0, $a0, 0x243
    ctx->r4 = ADD32(ctx->r4, 0X243);
    after_6:
L_8022B824:
    // 0x8022B824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B828: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B82C: jr          $ra
    // 0x8022B830: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B830: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023D6F0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023D6F0: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x8023D6F4: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x8023D6F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023D6FC: addiu       $a0, $s0, 0x8C
    ctx->r4 = ADD32(ctx->r16, 0X8C);
    // 0x8023D700: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8023D704: sw          $ra, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r31;
    // 0x8023D708: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x8023D70C: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x8023D710: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x8023D714: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023D718: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023D71C: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x8023D720: addu        $a2, $s1, $zero
    ctx->r6 = ADD32(ctx->r17, 0);
    // 0x8023D724: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x8023D728: addiu       $s2, $s2, 0x66A0
    ctx->r18 = ADD32(ctx->r18, 0X66A0);
    // 0x8023D72C: sw          $zero, 0xC0($s0)
    MEM_W(0XC0, ctx->r16) = 0;
    // 0x8023D730: sw          $zero, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = 0;
    // 0x8023D734: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x8023D738: sw          $zero, 0xCC($s0)
    MEM_W(0XCC, ctx->r16) = 0;
    // 0x8023D73C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8023D740: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8023D744: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023D748: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023D74C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023D750: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023D754: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023D758: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x8023D75C: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8023D760: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x8023D764: sh          $zero, 0x10($sp)
    MEM_H(0X10, ctx->r29) = 0;
    // 0x8023D768: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x8023D76C: jal         0x800308E8
    // 0x8023D770: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_800308E8_BCE8(rdram, ctx);
        goto after_0;
    // 0x8023D770: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x8023D774: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023D778: jal         0x800321EC
    // 0x8023D77C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    func_800321EC_D5EC(rdram, ctx);
        goto after_1;
    // 0x8023D77C: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x8023D780: addiu       $a0, $s0, 0xD0
    ctx->r4 = ADD32(ctx->r16, 0XD0);
    // 0x8023D784: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8023D788: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8023D78C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8023D790: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8023D794: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023D798: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8023D79C: sh          $v1, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r3;
    // 0x8023D7A0: jal         0x8009A3B4
    // 0x8023D7A4: sh          $a3, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023D7A4: sh          $a3, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r7;
    after_2:
    // 0x8023D7A8: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023D7AC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023D7B0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023D7B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023D7B8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023D7BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023D7C0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023D7C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023D7C8: lhu         $v0, 0x6692($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X6692);
    // 0x8023D7CC: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8023D7D0: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x8023D7D4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D7D8: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8023D7DC: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023D7E0: mflo        $v1
    ctx->r3 = lo;
    // 0x8023D7E4: sra         $v1, $v1, 4
    ctx->r3 = S32(SIGNED(ctx->r3) >> 4);
    // 0x8023D7E8: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8023D7EC: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x8023D7F0: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023D7F4: mflo        $v0
    ctx->r2 = lo;
    // 0x8023D7F8: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023D7FC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8023D800: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x8023D804: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023D808: mflo        $v0
    ctx->r2 = lo;
    // 0x8023D80C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023D810: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023D814: sh          $v0, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r2;
    // 0x8023D818: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023D81C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023D820: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023D824: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023D828: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023D82C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023D830: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8023D834: lh          $a0, 0x6694($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X6694);
    // 0x8023D838: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x8023D83C: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023D840: mflo        $v0
    ctx->r2 = lo;
    // 0x8023D844: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023D848: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
    // 0x8023D84C: lh          $v0, 0x12($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X12);
    // 0x8023D850: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023D854: mflo        $v0
    ctx->r2 = lo;
    // 0x8023D858: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023D85C: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x8023D860: lh          $v0, 0x14($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X14);
    // 0x8023D864: mult        $v0, $a0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023D868: mflo        $v0
    ctx->r2 = lo;
    // 0x8023D86C: addiu       $s2, $s2, -0xF
    ctx->r18 = ADD32(ctx->r18, -0XF);
    // 0x8023D870: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023D874: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D878: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023D87C: sh          $v0, 0x50($s0)
    MEM_H(0X50, ctx->r16) = ctx->r2;
    // 0x8023D880: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023D884: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023D888: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023D88C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023D890: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023D894: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023D898: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023D89C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023D8A0: lbu         $v0, 0x6690($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X6690);
    // 0x8023D8A4: sll         $a1, $v1, 1
    ctx->r5 = S32(ctx->r3 << 1);
    // 0x8023D8A8: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8023D8AC: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8023D8B0: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8023D8B4: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x8023D8B8: addu        $a1, $a1, $s2
    ctx->r5 = ADD32(ctx->r5, ctx->r18);
    // 0x8023D8BC: jal         0x8004D5D4
    // 0x8023D8C0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x8023D8C0: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_3:
    // 0x8023D8C4: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8023D8C8: lhu         $t0, 0x14($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X14);
    // 0x8023D8CC: lhu         $t1, 0x16($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X16);
    // 0x8023D8D0: lhu         $t2, 0x18($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X18);
    // 0x8023D8D4: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8023D8D8: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8023D8DC: lh          $a3, 0x18($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X18);
    // 0x8023D8E0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8023D8E4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x8023D8E8: sb          $zero, 0x2($s0)
    MEM_B(0X2, ctx->r16) = 0;
    // 0x8023D8EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023D8F0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023D8F4: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8023D8F8: sh          $t0, 0xAC($s0)
    MEM_H(0XAC, ctx->r16) = ctx->r8;
    // 0x8023D8FC: sh          $t1, 0xAE($s0)
    MEM_H(0XAE, ctx->r16) = ctx->r9;
    // 0x8023D900: sh          $t2, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r10;
    // 0x8023D904: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8023D908: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8023D90C: jal         0x8009A3B4
    // 0x8023D910: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8023D910: sw          $a3, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r7;
    after_4:
    // 0x8023D914: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8023D918: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8023D91C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023D920: jal         0x8009A3B4
    // 0x8023D924: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8023D924: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8023D928: addiu       $s2, $s0, 0xD8
    ctx->r18 = ADD32(ctx->r16, 0XD8);
    // 0x8023D92C: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023D930: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023D934: jal         0x8009A3B4
    // 0x8023D938: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8023D938: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8023D93C: addiu       $s3, $s0, 0xE0
    ctx->r19 = ADD32(ctx->r16, 0XE0);
    // 0x8023D940: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8023D944: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023D948: jal         0x8009A3B4
    // 0x8023D94C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8023D94C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x8023D950: addiu       $s1, $s0, 0xE8
    ctx->r17 = ADD32(ctx->r16, 0XE8);
    // 0x8023D954: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023D958: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8023D95C: jal         0x8009A3B4
    // 0x8023D960: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8023D960: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x8023D964: addiu       $a0, $s0, 0xF0
    ctx->r4 = ADD32(ctx->r16, 0XF0);
    // 0x8023D968: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023D96C: jal         0x8009A3B4
    // 0x8023D970: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8023D970: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x8023D974: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023D978: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8023D97C: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8023D980: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8023D984: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    // 0x8023D988: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023D98C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023D990: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8023D994: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023D998: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023D99C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8023D9A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023D9A4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023D9A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023D9AC: lbu         $v0, 0x66B0($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X66B0);
    // 0x8023D9B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023D9B4: jal         0x8023DEBC
    // 0x8023D9B8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    func_8023DEBC_ovl5(rdram, ctx);
        goto after_10;
    // 0x8023D9B8: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    after_10:
    // 0x8023D9BC: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023D9C0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8023D9C4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023D9C8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023D9CC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8023D9D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023D9D4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023D9D8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023D9DC: lbu         $v0, 0x66AC($at)
    ctx->r2 = MEM_BU(ctx->r1, 0X66AC);
    // 0x8023D9E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023D9E4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023D9E8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023D9EC: lw          $v0, 0x67C4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X67C4);
    // 0x8023D9F0: jalr        $v0
    // 0x8023D9F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x8023D9F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_11:
    // 0x8023D9F8: lw          $ra, 0x68($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X68);
    // 0x8023D9FC: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x8023DA00: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x8023DA04: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x8023DA08: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x8023DA0C: jr          $ra
    // 0x8023DA10: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    TRACE_RETURN()
    return;
    // 0x8023DA10: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_8022B834_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B834: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B838: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B83C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B840: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B844: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B848: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B84C: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022B850: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022B854: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022B858: beq         $v0, $zero, L_8022BA5C
    if (ctx->r2 == 0) {
        // 0x8022B85C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022BA5C;
    }
    // 0x8022B85C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022B860: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B864: addu        $at, $at, $v0
    gpr jr_addend_8022B86C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B868: lw          $v0, 0x70D0($at)
    ctx->r2 = ADD32(ctx->r1, 0X70D0);
    // 0x8022B86C: jr          $v0
    // 0x8022B870: nop

    switch (jr_addend_8022B86C >> 2) {
        case 0: goto L_8022B874; break;
        case 1: goto L_8022B8BC; break;
        case 2: goto L_8022B900; break;
        case 3: goto L_8022B918; break;
        case 4: goto L_8022B9B8; break;
        case 5: goto L_8022BA3C; break;
        default: switch_error(__func__, 0x8022B86C, 0x802470D0);
    }
    // 0x8022B870: nop

L_8022B874:
    // 0x8022B874: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x8022B878: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8022B87C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B880: addiu       $v0, $v0, 0x5288
    ctx->r2 = ADD32(ctx->r2, 0X5288);
    // 0x8022B884: sw          $v0, 0xA4($s0)
    MEM_W(0XA4, ctx->r16) = ctx->r2;
    // 0x8022B888: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x8022B88C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022B890: sw          $zero, 0xC($s0)
    MEM_W(0XC, ctx->r16) = 0;
    // 0x8022B894: sb          $zero, 0x7($s0)
    MEM_B(0X7, ctx->r16) = 0;
    // 0x8022B898: jal         0x8004CB2C
    // 0x8022B89C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x8022B89C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    after_0:
    // 0x8022B8A0: jal         0x8022BA70
    // 0x8022B8A4: nop

    func_8022BA70_ovl5(rdram, ctx);
        goto after_1;
    // 0x8022B8A4: nop

    after_1:
    // 0x8022B8A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B8AC: jal         0x8022BAB8
    // 0x8022B8B0: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    func_8022BAB8_ovl5(rdram, ctx);
        goto after_2;
    // 0x8022B8B0: sb          $v0, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022B8B4: j           L_8022B964
    // 0x8022B8B8: nop

        goto L_8022B964;
    // 0x8022B8B8: nop

L_8022B8BC:
    // 0x8022B8BC: jal         0x8006FF84
    // 0x8022B8C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_3;
    // 0x8022B8C0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
    // 0x8022B8C4: beq         $v0, $zero, L_8022BA5C
    if (ctx->r2 == 0) {
        // 0x8022B8C8: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022BA5C;
    }
    // 0x8022B8C8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B8CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B8D0: sb          $v0, 0x49B8($at)
    MEM_B(0X49B8, ctx->r1) = ctx->r2;
    // 0x8022B8D4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8022B8D8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B8DC: sb          $zero, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = 0;
    // 0x8022B8E0: sb          $v0, 0x448($s1)
    MEM_B(0X448, ctx->r17) = ctx->r2;
    // 0x8022B8E4: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B8E8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022B8EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B8F0: jal         0x80036E48
    // 0x8022B8F4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    func_80036E48_12248(rdram, ctx);
        goto after_4;
    // 0x8022B8F4: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    after_4:
    // 0x8022B8F8: j           L_8022BA5C
    // 0x8022B8FC: nop

        goto L_8022BA5C;
    // 0x8022B8FC: nop

L_8022B900:
    // 0x8022B900: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B904: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022B908: beq         $v0, $zero, L_8022B964
    if (ctx->r2 == 0) {
        // 0x8022B90C: nop
    
            goto L_8022B964;
    }
    // 0x8022B90C: nop

    // 0x8022B910: j           L_8022BA5C
    // 0x8022B914: nop

        goto L_8022BA5C;
    // 0x8022B914: nop

L_8022B918:
    // 0x8022B918: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B91C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B920: beq         $v1, $v0, L_8022B964
    if (ctx->r3 == ctx->r2) {
        // 0x8022B924: nop
    
            goto L_8022B964;
    }
    // 0x8022B924: nop

    // 0x8022B928: jal         0x8006072C
    // 0x8022B92C: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_5;
    // 0x8022B92C: nop

    after_5:
    // 0x8022B930: beq         $v0, $zero, L_8022B974
    if (ctx->r2 == 0) {
        // 0x8022B934: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022B974;
    }
    // 0x8022B934: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B938: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B93C: bne         $v1, $v0, L_8022B974
    if (ctx->r3 != ctx->r2) {
        // 0x8022B940: nop
    
            goto L_8022B974;
    }
    // 0x8022B940: nop

    // 0x8022B944: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B948: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022B94C: bne         $v0, $zero, L_8022B974
    if (ctx->r2 != 0) {
        // 0x8022B950: nop
    
            goto L_8022B974;
    }
    // 0x8022B950: nop

    // 0x8022B954: jal         0x80061798
    // 0x8022B958: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80061798_3CB98(rdram, ctx);
        goto after_6;
    // 0x8022B958: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x8022B95C: jal         0x80036E48
    // 0x8022B960: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_80036E48_12248(rdram, ctx);
        goto after_7;
    // 0x8022B960: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_7:
L_8022B964:
    // 0x8022B964: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B968: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B96C: j           L_8022BA5C
    // 0x8022B970: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
        goto L_8022BA5C;
    // 0x8022B970: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_8022B974:
    // 0x8022B974: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022B978: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022B97C: beq         $v1, $v0, L_8022B994
    if (ctx->r3 == ctx->r2) {
        // 0x8022B980: nop
    
            goto L_8022B994;
    }
    // 0x8022B980: nop

    // 0x8022B984: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x8022B988: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x8022B98C: jalr        $v0
    // 0x8022B990: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x8022B990: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_8022B994:
    // 0x8022B994: lbu         $v0, 0x7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X7);
    // 0x8022B998: beq         $v0, $zero, L_8022B9A8
    if (ctx->r2 == 0) {
        // 0x8022B99C: nop
    
            goto L_8022B9A8;
    }
    // 0x8022B99C: nop

    // 0x8022B9A0: jal         0x8005FB90
    // 0x8022B9A4: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_9;
    // 0x8022B9A4: nop

    after_9:
L_8022B9A8:
    // 0x8022B9A8: jal         0x80060018
    // 0x8022B9AC: nop

    func_80060018_3B418(rdram, ctx);
        goto after_10;
    // 0x8022B9AC: nop

    after_10:
    // 0x8022B9B0: j           L_8022BA5C
    // 0x8022B9B4: nop

        goto L_8022BA5C;
    // 0x8022B9B4: nop

L_8022B9B8:
    // 0x8022B9B8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022B9BC: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022B9C0: bne         $v0, $zero, L_8022BA5C
    if (ctx->r2 != 0) {
        // 0x8022B9C4: nop
    
            goto L_8022BA5C;
    }
    // 0x8022B9C4: nop

    // 0x8022B9C8: jal         0x80060590
    // 0x8022B9CC: addiu       $a0, $zero, 0x243
    ctx->r4 = ADD32(0, 0X243);
    func_80060590_3B990(rdram, ctx);
        goto after_11;
    // 0x8022B9CC: addiu       $a0, $zero, 0x243
    ctx->r4 = ADD32(0, 0X243);
    after_11:
    // 0x8022B9D0: jal         0x80060590
    // 0x8022B9D4: addiu       $a0, $zero, 0x244
    ctx->r4 = ADD32(0, 0X244);
    func_80060590_3B990(rdram, ctx);
        goto after_12;
    // 0x8022B9D4: addiu       $a0, $zero, 0x244
    ctx->r4 = ADD32(0, 0X244);
    after_12:
    // 0x8022B9D8: jal         0x80060590
    // 0x8022B9DC: addiu       $a0, $zero, 0x245
    ctx->r4 = ADD32(0, 0X245);
    func_80060590_3B990(rdram, ctx);
        goto after_13;
    // 0x8022B9DC: addiu       $a0, $zero, 0x245
    ctx->r4 = ADD32(0, 0X245);
    after_13:
    // 0x8022B9E0: jal         0x80036E48
    // 0x8022B9E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80036E48_12248(rdram, ctx);
        goto after_14;
    // 0x8022B9E4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_14:
    // 0x8022B9E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B9EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022B9F0: jal         0x80034844
    // 0x8022B9F4: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_15;
    // 0x8022B9F4: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_15:
    // 0x8022B9F8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022B9FC: lbu         $v1, 0x6($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X6);
    // 0x8022BA00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BA04: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022BA08: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x8022BA0C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022BA10: jal         0x8004F418
    // 0x8022BA14: lw          $a0, 0x24($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X24);
    func_8004F418_2A818(rdram, ctx);
        goto after_16;
    // 0x8022BA14: lw          $a0, 0x24($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X24);
    after_16:
    // 0x8022BA18: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x8022BA1C: jal         0x8004CB2C
    // 0x8022BA20: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_17;
    // 0x8022BA20: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_17:
    // 0x8022BA24: jal         0x8022BB2C
    // 0x8022BA28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022BB2C_ovl5(rdram, ctx);
        goto after_18;
    // 0x8022BA28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_18:
    // 0x8022BA2C: jal         0x80034844
    // 0x8022BA30: nop

    func_80034844_FC44(rdram, ctx);
        goto after_19;
    // 0x8022BA30: nop

    after_19:
    // 0x8022BA34: j           L_8022BA5C
    // 0x8022BA38: nop

        goto L_8022BA5C;
    // 0x8022BA38: nop

L_8022BA3C:
    // 0x8022BA3C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022BA40: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022BA44: bne         $v0, $zero, L_8022BA5C
    if (ctx->r2 != 0) {
        // 0x8022BA48: nop
    
            goto L_8022BA5C;
    }
    // 0x8022BA48: nop

    // 0x8022BA4C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022BA50: jal         0x80070050
    // 0x8022BA54: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_20;
    // 0x8022BA54: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_20:
    // 0x8022BA58: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_8022BA5C:
    // 0x8022BA5C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022BA60: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022BA64: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022BA68: jr          $ra
    // 0x8022BA6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022BA6C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227C50_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227C50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227C54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227C58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227C5C: jal         0x8006072C
    // 0x80227C60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8006072C_3BB2C(rdram, ctx);
        goto after_0;
    // 0x80227C60: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80227C64: beq         $v0, $zero, L_80227C78
    if (ctx->r2 == 0) {
        // 0x80227C68: nop
    
            goto L_80227C78;
    }
    // 0x80227C68: nop

    // 0x80227C6C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227C70: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80227C74: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227C78:
    // 0x80227C78: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80227C7C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227C80: beq         $v1, $v0, L_80227CB0
    if (ctx->r3 == ctx->r2) {
        // 0x80227C84: nop
    
            goto L_80227CB0;
    }
    // 0x80227C84: nop

    // 0x80227C88: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x80227C8C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80227C90: jalr        $v0
    // 0x80227C94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80227C94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80227C98: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227C9C: andi        $v0, $v1, 0x1
    ctx->r2 = ctx->r3 & 0X1;
    // 0x80227CA0: beq         $v0, $zero, L_80227CC0
    if (ctx->r2 == 0) {
        // 0x80227CA4: andi        $v0, $v1, 0x80
        ctx->r2 = ctx->r3 & 0X80;
            goto L_80227CC0;
    }
    // 0x80227CA4: andi        $v0, $v1, 0x80
    ctx->r2 = ctx->r3 & 0X80;
    // 0x80227CA8: bne         $v0, $zero, L_80227CC0
    if (ctx->r2 != 0) {
        // 0x80227CAC: nop
    
            goto L_80227CC0;
    }
    // 0x80227CAC: nop

L_80227CB0:
    // 0x80227CB0: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80227CB4: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x80227CB8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227CBC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80227CC0:
    // 0x80227CC0: jal         0x8005FB90
    // 0x80227CC4: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_2;
    // 0x80227CC4: nop

    after_2:
    // 0x80227CC8: jal         0x80060018
    // 0x80227CCC: nop

    func_80060018_3B418(rdram, ctx);
        goto after_3;
    // 0x80227CCC: nop

    after_3:
    // 0x80227CD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227CD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227CD8: jr          $ra
    // 0x80227CDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227CDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237360_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237360: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237364: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237368: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023736C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237370: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80237374: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80237378: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023737C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237380: lw          $v0, 0x5FF4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X5FF4);
    // 0x80237384: jalr        $v0
    // 0x80237388: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80237388: nop

    after_0:
    // 0x8023738C: jal         0x80237678
    // 0x80237390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80237678_ovl5(rdram, ctx);
        goto after_1;
    // 0x80237390: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237398: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023739C: jr          $ra
    // 0x802373A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802373A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239878_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239878: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8023987C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80239880: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80239884: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80239888: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8023988C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80239890: sltiu       $v0, $v1, 0x7
    ctx->r2 = ctx->r3 < 0X7 ? 1 : 0;
    // 0x80239894: beq         $v0, $zero, L_80239B40
    if (ctx->r2 == 0) {
        // 0x80239898: addu        $s1, $a2, $zero
        ctx->r17 = ADD32(ctx->r6, 0);
            goto L_80239B40;
    }
    // 0x80239898: addu        $s1, $a2, $zero
    ctx->r17 = ADD32(ctx->r6, 0);
    // 0x8023989C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802398A0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802398A4: addu        $at, $at, $v0
    gpr jr_addend_802398AC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802398A8: lw          $v0, 0x7350($at)
    ctx->r2 = ADD32(ctx->r1, 0X7350);
    // 0x802398AC: jr          $v0
    // 0x802398B0: nop

    switch (jr_addend_802398AC >> 2) {
        case 0: goto L_802398B4; break;
        case 1: goto L_802398E0; break;
        case 2: goto L_8023994C; break;
        case 3: goto L_802399C0; break;
        case 4: goto L_802399E0; break;
        case 5: goto L_80239A68; break;
        case 6: goto L_80239AF0; break;
        default: switch_error(__func__, 0x802398AC, 0x80247350);
    }
    // 0x802398B0: nop

L_802398B4:
    // 0x802398B4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802398B8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802398BC: lbu         $v0, 0x9($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X9);
    // 0x802398C0: bne         $v0, $zero, L_80239B40
    if (ctx->r2 != 0) {
        // 0x802398C4: addiu       $v0, $zero, 0x5B
        ctx->r2 = ADD32(0, 0X5B);
            goto L_80239B40;
    }
    // 0x802398C4: addiu       $v0, $zero, 0x5B
    ctx->r2 = ADD32(0, 0X5B);
    // 0x802398C8: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802398CC: bne         $v1, $v0, L_80239B40
    if (ctx->r3 != ctx->r2) {
        // 0x802398D0: nop
    
            goto L_80239B40;
    }
    // 0x802398D0: nop

    // 0x802398D4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802398D8: j           L_80239B3C
    // 0x802398DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80239B3C;
    // 0x802398DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802398E0:
    // 0x802398E0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802398E4: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802398E8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802398EC: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x802398F0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802398F4: lh          $v1, -0x2400($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X2400);
    // 0x802398F8: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x802398FC: sra         $v1, $v1, 8
    ctx->r3 = S32(SIGNED(ctx->r3) >> 8);
    // 0x80239900: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80239904: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80239908: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023990C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80239910: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80239914: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239918: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8023991C: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80239920: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239924: bne         $v1, $v0, L_80239B40
    if (ctx->r3 != ctx->r2) {
        // 0x80239928: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_80239B40;
    }
    // 0x80239928: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8023992C: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80239930: bne         $v1, $v0, L_80239B40
    if (ctx->r3 != ctx->r2) {
        // 0x80239934: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80239B40;
    }
    // 0x80239934: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80239938: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8023993C: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x80239940: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80239944: j           L_80239B3C
    // 0x80239948: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80239B3C;
    // 0x80239948: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8023994C:
    // 0x8023994C: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80239950: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x80239954: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80239958: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8023995C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80239960: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80239964: lh          $v1, 0x0($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X0);
    // 0x80239968: slti        $v0, $v1, 0x6
    ctx->r2 = SIGNED(ctx->r3) < 0X6 ? 1 : 0;
    // 0x8023996C: beql        $v0, $zero, L_80239980
    if (ctx->r2 == 0) {
        // 0x80239970: slti        $v0, $v1, 0x55
        ctx->r2 = SIGNED(ctx->r3) < 0X55 ? 1 : 0;
            goto L_80239980;
    }
    goto skip_0;
    // 0x80239970: slti        $v0, $v1, 0x55
    ctx->r2 = SIGNED(ctx->r3) < 0X55 ? 1 : 0;
    skip_0:
    // 0x80239974: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80239978: j           L_80239990
    // 0x8023997C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
        goto L_80239990;
    // 0x8023997C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_80239980:
    // 0x80239980: bne         $v0, $zero, L_80239994
    if (ctx->r2 != 0) {
        // 0x80239984: nop
    
            goto L_80239994;
    }
    // 0x80239984: nop

    // 0x80239988: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8023998C: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
L_80239990:
    // 0x80239990: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80239994:
    // 0x80239994: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80239998: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023999C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x802399A0: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802399A4: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x802399A8: bne         $v1, $v0, L_80239B40
    if (ctx->r3 != ctx->r2) {
        // 0x802399AC: nop
    
            goto L_80239B40;
    }
    // 0x802399AC: nop

    // 0x802399B0: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x802399B4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802399B8: j           L_80239B3C
    // 0x802399BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80239B3C;
    // 0x802399BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802399C0:
    // 0x802399C0: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x802399C4: addiu       $v0, $zero, 0x96
    ctx->r2 = ADD32(0, 0X96);
    // 0x802399C8: bne         $v1, $v0, L_80239B40
    if (ctx->r3 != ctx->r2) {
        // 0x802399CC: addiu       $v1, $zero, 0x8
        ctx->r3 = ADD32(0, 0X8);
            goto L_80239B40;
    }
    // 0x802399CC: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x802399D0: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x802399D4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802399D8: j           L_80239B38
    // 0x802399DC: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
        goto L_80239B38;
    // 0x802399DC: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
L_802399E0:
    // 0x802399E0: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x802399E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802399E8: bne         $v1, $v0, L_80239A44
    if (ctx->r3 != ctx->r2) {
        // 0x802399EC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80239A44;
    }
    // 0x802399EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802399F0: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x802399F4: blez        $v0, L_80239A40
    if (SIGNED(ctx->r2) <= 0) {
        // 0x802399F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239A40;
    }
    // 0x802399F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802399FC: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x80239A00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80239A04: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80239A08: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x80239A0C: jal         0x8004DA90
    // 0x80239A10: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x80239A10: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_0:
    // 0x80239A14: lh          $v0, 0x0($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X0);
    // 0x80239A18: slti        $v0, $v0, 0xA
    ctx->r2 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x80239A1C: beq         $v0, $zero, L_80239A30
    if (ctx->r2 == 0) {
        // 0x80239A20: nop
    
            goto L_80239A30;
    }
    // 0x80239A20: nop

    // 0x80239A24: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x80239A28: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80239A2C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_80239A30:
    // 0x80239A30: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80239A34: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239A38: j           L_80239B40
    // 0x80239A3C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_80239B40;
    // 0x80239A3C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80239A40:
    // 0x80239A40: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80239A44:
    // 0x80239A44: bne         $v1, $v0, L_80239B40
    if (ctx->r3 != ctx->r2) {
        // 0x80239A48: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80239B40;
    }
    // 0x80239A48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239A4C: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80239A50: bne         $v1, $v0, L_80239B40
    if (ctx->r3 != ctx->r2) {
        // 0x80239A54: nop
    
            goto L_80239B40;
    }
    // 0x80239A54: nop

    // 0x80239A58: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
    // 0x80239A5C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80239A60: j           L_80239B3C
    // 0x80239A64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80239B3C;
    // 0x80239A64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80239A68:
    // 0x80239A68: lbu         $v1, 0x9($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X9);
    // 0x80239A6C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80239A70: bne         $v1, $v0, L_80239AD0
    if (ctx->r3 != ctx->r2) {
        // 0x80239A74: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80239AD0;
    }
    // 0x80239A74: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80239A78: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80239A7C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80239A80: sltiu       $v0, $v0, 0x14
    ctx->r2 = ctx->r2 < 0X14 ? 1 : 0;
    // 0x80239A84: beq         $v0, $zero, L_80239AA8
    if (ctx->r2 == 0) {
        // 0x80239A88: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80239AA8;
    }
    // 0x80239A88: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80239A8C: addiu       $a1, $zero, 0x280
    ctx->r5 = ADD32(0, 0X280);
    // 0x80239A90: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80239A94: jal         0x8004DA90
    // 0x80239A98: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80239A98: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80239A9C: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80239AA0: j           L_80239ABC
    // 0x80239AA4: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
        goto L_80239ABC;
    // 0x80239AA4: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
L_80239AA8:
    // 0x80239AA8: addiu       $a1, $zero, 0x380
    ctx->r5 = ADD32(0, 0X380);
    // 0x80239AAC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80239AB0: jal         0x8004DA90
    // 0x80239AB4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x80239AB4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x80239AB8: addiu       $v0, $zero, -0x8C0
    ctx->r2 = ADD32(0, -0X8C0);
L_80239ABC:
    // 0x80239ABC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80239AC0: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80239AC4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80239AC8: j           L_80239B40
    // 0x80239ACC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_80239B40;
    // 0x80239ACC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80239AD0:
    // 0x80239AD0: bne         $v1, $v0, L_80239B40
    if (ctx->r3 != ctx->r2) {
        // 0x80239AD4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80239B40;
    }
    // 0x80239AD4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239AD8: lw          $v1, 0x10($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X10);
    // 0x80239ADC: bne         $v1, $v0, L_80239B40
    if (ctx->r3 != ctx->r2) {
        // 0x80239AE0: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_80239B40;
    }
    // 0x80239AE0: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80239AE4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80239AE8: j           L_80239B38
    // 0x80239AEC: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
        goto L_80239B38;
    // 0x80239AEC: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
L_80239AF0:
    // 0x80239AF0: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80239AF4: lhu         $a0, 0x46($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X46);
    // 0x80239AF8: lh          $v1, 0x46($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X46);
    // 0x80239AFC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80239B00: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80239B04: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80239B08: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80239B0C: addu        $v0, $v1, $zero
    ctx->r2 = ADD32(ctx->r3, 0);
    // 0x80239B10: slti        $v1, $v1, 0x9
    ctx->r3 = SIGNED(ctx->r3) < 0X9 ? 1 : 0;
    // 0x80239B14: bne         $v1, $zero, L_80239B20
    if (ctx->r3 != 0) {
        // 0x80239B18: addiu       $v0, $v0, -0x4
        ctx->r2 = ADD32(ctx->r2, -0X4);
            goto L_80239B20;
    }
    // 0x80239B18: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80239B1C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_80239B20:
    // 0x80239B20: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x80239B24: slti        $v0, $v0, -0x4B0
    ctx->r2 = SIGNED(ctx->r2) < -0X4B0 ? 1 : 0;
    // 0x80239B28: bne         $v0, $zero, L_80239B40
    if (ctx->r2 != 0) {
        // 0x80239B2C: addiu       $v1, $zero, -0x4B0
        ctx->r3 = ADD32(0, -0X4B0);
            goto L_80239B40;
    }
    // 0x80239B2C: addiu       $v1, $zero, -0x4B0
    ctx->r3 = ADD32(0, -0X4B0);
    // 0x80239B30: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80239B34: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
L_80239B38:
    // 0x80239B38: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80239B3C:
    // 0x80239B3C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80239B40:
    // 0x80239B40: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80239B44: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80239B48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80239B4C: jr          $ra
    // 0x80239B50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80239B50: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80239B54: nop

    // 0x80239B58: nop

    // 0x80239B5C: nop

;}
RECOMP_FUNC void func_8022A30C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A30C: jr          $ra
    // 0x8022A310: nop

    TRACE_RETURN()
    return;
    // 0x8022A310: nop

;}
RECOMP_FUNC void func_8022D85C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D85C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D860: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D864: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D868: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D86C: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022D870: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D874: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022D878: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D87C: bne         $v0, $zero, L_8022D8A4
    if (ctx->r2 != 0) {
        // 0x8022D880: nop
    
            goto L_8022D8A4;
    }
    // 0x8022D880: nop

    // 0x8022D884: jal         0x8022F4E0
    // 0x8022D888: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022F4E0_ovl5(rdram, ctx);
        goto after_0;
    // 0x8022D888: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_0:
    // 0x8022D88C: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D890: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D894: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x8022D898: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022D89C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022D8A0: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022D8A4:
    // 0x8022D8A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D8A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D8AC: jr          $ra
    // 0x8022D8B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D8B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023E3EC_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023E3EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023E3F0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023E3F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023E3F8: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8023E3FC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023E400: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8023E404: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023E408: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023E40C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023E410: jal         0x8009A3B4
    // 0x8023E414: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023E414: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    after_0:
    // 0x8023E418: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8023E41C: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8023E420: jal         0x8009A3B4
    // 0x8023E424: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023E424: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8023E428: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8023E42C: addiu       $s2, $s0, 0x54
    ctx->r18 = ADD32(ctx->r16, 0X54);
    // 0x8023E430: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023E434: jal         0x8009A3B4
    // 0x8023E438: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023E438: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8023E43C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8023E440: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8023E444: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8023E448: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023E44C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023E450: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023E454: lw          $v0, 0x6C3C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X6C3C);
    // 0x8023E458: jalr        $v0
    // 0x8023E45C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x8023E45C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8023E460: jal         0x8003ECF0
    // 0x8023E464: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003ECF0_1A0F0(rdram, ctx);
        goto after_4;
    // 0x8023E464: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8023E468: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023E46C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8023E470: jal         0x8023ED58
    // 0x8023E474: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    func_8023ED58_ovl5(rdram, ctx);
        goto after_5;
    // 0x8023E474: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    after_5:
    // 0x8023E478: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8023E47C: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x8023E480: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x8023E484: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8023E488: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8023E48C: jal         0x8009A3B4
    // 0x8023E490: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8023E490: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    after_6:
    // 0x8023E494: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023E498: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x8023E49C: jal         0x80031600
    // 0x8023E4A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_7;
    // 0x8023E4A0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_7:
    // 0x8023E4A4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023E4A8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8023E4AC: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8023E4B0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8023E4B4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023E4B8: jal         0x80031DA8
    // 0x8023E4BC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_8;
    // 0x8023E4BC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_8:
    // 0x8023E4C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023E4C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023E4C8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8023E4CC: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    // 0x8023E4D0: jal         0x80047284
    // 0x8023E4D4: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    func_80047284_22684(rdram, ctx);
        goto after_9;
    // 0x8023E4D4: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    after_9:
    // 0x8023E4D8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8023E4DC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8023E4E0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023E4E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023E4E8: jr          $ra
    // 0x8023E4EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023E4EC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80232724_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232724: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80232728: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x8023272C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80232730: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80232734: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80232738: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8023273C: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x80232740: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x80232744: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80232748: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023274C: bne         $v0, $s1, L_80232830
    if (ctx->r2 != ctx->r17) {
        // 0x80232750: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_80232830;
    }
    // 0x80232750: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232754: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80232758: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023275C: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80232760: addiu       $s2, $s3, 0x14
    ctx->r18 = ADD32(ctx->r19, 0X14);
    // 0x80232764: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80232768: jal         0x8004F820
    // 0x8023276C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8023276C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_0:
    // 0x80232770: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232774: bgez        $v0, L_802327A0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232778: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802327A0;
    }
    // 0x80232778: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023277C: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x80232780: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80232784: jal         0x8004F820
    // 0x80232788: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80232788: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x8023278C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80232790: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80232794: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80232798: j           L_802327B8
    // 0x8023279C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_802327B8;
    // 0x8023279C: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_802327A0:
    // 0x802327A0: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x802327A4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x802327A8: jal         0x8004F820
    // 0x802327AC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x802327AC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x802327B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802327B4: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_802327B8:
    // 0x802327B8: sh          $v0, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r2;
    // 0x802327BC: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x802327C0: lbu         $v1, 0xBD($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0XBD);
    // 0x802327C4: sw          $zero, 0x184($s3)
    MEM_W(0X184, ctx->r19) = 0;
    // 0x802327C8: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x802327CC: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x802327D0: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x802327D4: sb          $v1, 0xBD($s3)
    MEM_B(0XBD, ctx->r19) = ctx->r3;
    // 0x802327D8: lh          $v0, 0x180($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X180);
    // 0x802327DC: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x802327E0: addiu       $s0, $s0, 0x74A0
    ctx->r16 = ADD32(ctx->r16, 0X74A0);
    // 0x802327E4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x802327E8: lh          $v0, 0x182($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X182);
    // 0x802327EC: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x802327F0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802327F4: sw          $v0, 0x74A4($at)
    MEM_W(0X74A4, ctx->r1) = ctx->r2;
    // 0x802327F8: lh          $v0, 0x184($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X184);
    // 0x802327FC: addiu       $a0, $s3, 0x14
    ctx->r4 = ADD32(ctx->r19, 0X14);
    // 0x80232800: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80232804: sw          $v0, 0x74A8($at)
    MEM_W(0X74A8, ctx->r1) = ctx->r2;
    // 0x80232808: jal         0x8004EC38
    // 0x8023280C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x8023280C: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_3:
    // 0x80232810: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232814: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80232818: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8023281C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80232820: jal         0x80034FCC
    // 0x80232824: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_4;
    // 0x80232824: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_4:
    // 0x80232828: j           L_80232834
    // 0x8023282C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80232834;
    // 0x8023282C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80232830:
    // 0x80232830: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80232834:
    // 0x80232834: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80232838: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8023283C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80232840: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232844: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232848: jr          $ra
    // 0x8023284C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8023284C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802319F8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802319F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802319FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231A00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231A04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231A08: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80231A0C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80231A10: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80231A14: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231A18: sh          $zero, 0x5CF4($at)
    MEM_H(0X5CF4, ctx->r1) = 0;
    // 0x80231A1C: jal         0x8004D5D4
    // 0x80231A20: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80231A20: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80231A24: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x80231A28: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80231A2C: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x80231A30: lhu         $a1, 0x18($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X18);
    // 0x80231A34: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80231A38: lhu         $a2, 0x54($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X54);
    // 0x80231A3C: lhu         $a3, 0x56($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X56);
    // 0x80231A40: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80231A44: lhu         $t0, 0x58($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X58);
    // 0x80231A48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231A4C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x80231A50: lw          $t1, 0x1C($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1C);
    // 0x80231A54: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80231A58: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x80231A5C: lw          $t2, 0x20($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X20);
    // 0x80231A60: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80231A64: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x80231A68: lw          $t3, 0x24($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X24);
    // 0x80231A6C: lhu         $v1, 0x14($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X14);
    // 0x80231A70: lhu         $a0, 0x16($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X16);
    // 0x80231A74: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80231A78: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80231A7C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80231A80: addiu       $v0, $v0, 0x5CE8
    ctx->r2 = ADD32(ctx->r2, 0X5CE8);
    // 0x80231A84: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80231A88: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80231A8C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80231A90: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80231A94: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80231A98: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80231A9C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80231AA0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80231AA4: sh          $a1, 0x30($s0)
    MEM_H(0X30, ctx->r16) = ctx->r5;
    // 0x80231AA8: sh          $a2, 0x5C($s0)
    MEM_H(0X5C, ctx->r16) = ctx->r6;
    // 0x80231AAC: sh          $a3, 0x5E($s0)
    MEM_H(0X5E, ctx->r16) = ctx->r7;
    // 0x80231AB0: sh          $t0, 0x60($s0)
    MEM_H(0X60, ctx->r16) = ctx->r8;
    // 0x80231AB4: sh          $v1, 0x2C($s0)
    MEM_H(0X2C, ctx->r16) = ctx->r3;
    // 0x80231AB8: sh          $a0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r4;
    // 0x80231ABC: sw          $t1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r9;
    // 0x80231AC0: sw          $t2, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r10;
    // 0x80231AC4: sw          $t3, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r11;
    // 0x80231AC8: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80231ACC: lb          $a1, 0xE($s0)
    ctx->r5 = MEM_B(ctx->r16, 0XE);
    // 0x80231AD0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231AD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231AD8: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80231ADC: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x80231AE0: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80231AE4: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x80231AE8: jal         0x80050294
    // 0x80231AEC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80231AEC: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    after_1:
    // 0x80231AF0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80231AF4: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80231AF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231AFC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80231B00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231B04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231B08: jr          $ra
    // 0x80231B0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231B0C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802318E8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802318E8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802318EC: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x802318F0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802318F4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802318F8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802318FC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80231900: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x80231904: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x80231908: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023190C: bne         $v0, $s2, L_802319B4
    if (ctx->r2 != ctx->r18) {
        // 0x80231910: sw          $s0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r16;
            goto L_802319B4;
    }
    // 0x80231910: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80231914: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80231918: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023191C: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x80231920: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80231924: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x80231928: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8023192C: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x80231930: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80231934: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80231938: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x8023193C: lh          $v0, 0x180($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X180);
    // 0x80231940: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80231944: lh          $v0, 0x182($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X182);
    // 0x80231948: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x8023194C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80231950: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x80231954: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80231958: lh          $v0, 0x184($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X184);
    // 0x8023195C: addiu       $s1, $s1, 0x14
    ctx->r17 = ADD32(ctx->r17, 0X14);
    // 0x80231960: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231964: jal         0x8004EC38
    // 0x80231968: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_0;
    // 0x80231968: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_0:
    // 0x8023196C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80231970: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80231974: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x80231978: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8023197C: jal         0x80034FCC
    // 0x80231980: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_1;
    // 0x80231980: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_1:
    // 0x80231984: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80231988: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023198C: jal         0x80050294
    // 0x80231990: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x80231990: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x80231994: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231998: jal         0x8004EC38
    // 0x8023199C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004EC38_2A038(rdram, ctx);
        goto after_3;
    // 0x8023199C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_3:
    // 0x802319A0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802319A4: sh          $v0, 0x7490($at)
    MEM_H(0X7490, ctx->r1) = ctx->r2;
    // 0x802319A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802319AC: j           L_802319E0
    // 0x802319B0: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
        goto L_802319E0;
    // 0x802319B0: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
L_802319B4:
    // 0x802319B4: lb          $v0, 0xD($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XD);
    // 0x802319B8: bne         $v0, $zero, L_802319D0
    if (ctx->r2 != 0) {
        // 0x802319BC: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_802319D0;
    }
    // 0x802319BC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802319C0: jal         0x8005044C
    // 0x802319C4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x802319C4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_4:
    // 0x802319C8: j           L_802319E0
    // 0x802319CC: nop

        goto L_802319E0;
    // 0x802319CC: nop

L_802319D0:
    // 0x802319D0: lb          $a1, 0xE($s2)
    ctx->r5 = MEM_B(ctx->r18, 0XE);
    // 0x802319D4: jal         0x80050294
    // 0x802319D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x802319D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x802319DC: sb          $zero, 0xD($s2)
    MEM_B(0XD, ctx->r18) = 0;
L_802319E0:
    // 0x802319E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802319E4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802319E8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802319EC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802319F0: jr          $ra
    // 0x802319F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802319F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802392B8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802392B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802392BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802392C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802392C4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802392C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802392CC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802392D0: bne         $v0, $zero, L_8023931C
    if (ctx->r2 != 0) {
        // 0x802392D4: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8023931C;
    }
    // 0x802392D4: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x802392D8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x802392DC: jal         0x80050294
    // 0x802392E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802392E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802392E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802392E8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802392EC: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
    // 0x802392F0: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x802392F4: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x802392F8: addiu       $v0, $zero, -0x78
    ctx->r2 = ADD32(0, -0X78);
    // 0x802392FC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80239300: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80239304: sh          $zero, 0x16($s0)
    MEM_H(0X16, ctx->r16) = 0;
    // 0x80239308: jal         0x80239590
    // 0x8023930C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80239590_ovl5(rdram, ctx);
        goto after_1;
    // 0x8023930C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_1:
    // 0x80239310: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80239314: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239318: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023931C:
    // 0x8023931C: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80239320: lw          $v0, -0x3A40($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A40);
    // 0x80239324: slti        $v0, $v0, 0xA
    ctx->r2 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x80239328: beq         $v0, $zero, L_8023933C
    if (ctx->r2 == 0) {
        // 0x8023932C: nop
    
            goto L_8023933C;
    }
    // 0x8023932C: nop

    // 0x80239330: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80239334: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x80239338: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_8023933C:
    // 0x8023933C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80239340: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80239344: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239348: jr          $ra
    // 0x8023934C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023934C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228E0C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228E0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228E10: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80228E14: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228E18: lw          $v1, 0x10($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X10);
    // 0x80228E1C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228E20: bne         $v1, $v0, L_80228E5C
    if (ctx->r3 != ctx->r2) {
        // 0x80228E24: addiu       $v0, $zero, 0x5B
        ctx->r2 = ADD32(0, 0X5B);
            goto L_80228E5C;
    }
    // 0x80228E24: addiu       $v0, $zero, 0x5B
    ctx->r2 = ADD32(0, 0X5B);
    // 0x80228E28: lw          $v1, 0x24($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X24);
    // 0x80228E2C: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80228E30: sh          $v0, 0x44($v1)
    MEM_H(0X44, ctx->r3) = ctx->r2;
    // 0x80228E34: lw          $v0, 0x24($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X24);
    // 0x80228E38: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80228E3C: sb          $a0, 0xE($v0)
    MEM_B(0XE, ctx->r2) = ctx->r4;
    // 0x80228E40: lw          $v1, 0x24($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X24);
    // 0x80228E44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228E48: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x80228E4C: lw          $v0, 0x24($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X24);
    // 0x80228E50: sb          $a0, 0x8($v0)
    MEM_B(0X8, ctx->r2) = ctx->r4;
    // 0x80228E54: lw          $v1, 0x10($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X10);
    // 0x80228E58: addiu       $v0, $zero, 0x5B
    ctx->r2 = ADD32(0, 0X5B);
L_80228E5C:
    // 0x80228E5C: bne         $v1, $v0, L_80228E6C
    if (ctx->r3 != ctx->r2) {
        // 0x80228E60: nop
    
            goto L_80228E6C;
    }
    // 0x80228E60: nop

    // 0x80228E64: lw          $v0, 0x24($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X24);
    // 0x80228E68: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
L_80228E6C:
    // 0x80228E6C: lw          $v0, 0x10($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X10);
    // 0x80228E70: slti        $v0, $v0, 0x5B
    ctx->r2 = SIGNED(ctx->r2) < 0X5B ? 1 : 0;
    // 0x80228E74: bne         $v0, $zero, L_80228F58
    if (ctx->r2 != 0) {
        // 0x80228E78: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80228F58;
    }
    // 0x80228E78: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80228E7C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80228E80: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80228E84: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228E88: bne         $v0, $zero, L_80228F58
    if (ctx->r2 != 0) {
        // 0x80228E8C: addiu       $v0, $zero, 0x329
        ctx->r2 = ADD32(0, 0X329);
            goto L_80228F58;
    }
    // 0x80228E8C: addiu       $v0, $zero, 0x329
    ctx->r2 = ADD32(0, 0X329);
    // 0x80228E90: addiu       $a0, $zero, -0x301
    ctx->r4 = ADD32(0, -0X301);
    // 0x80228E94: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228E98: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80228E9C: addiu       $v0, $zero, 0x498
    ctx->r2 = ADD32(0, 0X498);
    // 0x80228EA0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228EA4: sh          $v0, 0x4DEC($at)
    MEM_H(0X4DEC, ctx->r1) = ctx->r2;
    // 0x80228EA8: lui         $v0, 0x329
    ctx->r2 = S32(0X329 << 16);
    // 0x80228EAC: lui         $a1, 0xFCFF
    ctx->r5 = S32(0XFCFF << 16);
    // 0x80228EB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228EB4: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x80228EB8: lui         $v0, 0x498
    ctx->r2 = S32(0X498 << 16);
    // 0x80228EBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228EC0: sw          $v0, 0x4DE0($at)
    MEM_W(0X4DE0, ctx->r1) = ctx->r2;
    // 0x80228EC4: addiu       $v0, $zero, 0x4F6
    ctx->r2 = ADD32(0, 0X4F6);
    // 0x80228EC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228ECC: sh          $v0, 0x4DF2($at)
    MEM_H(0X4DF2, ctx->r1) = ctx->r2;
    // 0x80228ED0: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80228ED4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228ED8: sh          $a0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r4;
    // 0x80228EDC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228EE0: sw          $a1, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r5;
    // 0x80228EE4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80228EE8: sb          $v0, 0x4DF8($at)
    MEM_B(0X4DF8, ctx->r1) = ctx->r2;
    // 0x80228EEC: lw          $v1, 0x24($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X24);
    // 0x80228EF0: addiu       $v0, $zero, 0x2CE
    ctx->r2 = ADD32(0, 0X2CE);
    // 0x80228EF4: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x80228EF8: lw          $v0, 0x24($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X24);
    // 0x80228EFC: sh          $a0, 0x16($v0)
    MEM_H(0X16, ctx->r2) = ctx->r4;
    // 0x80228F00: lw          $v1, 0x24($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X24);
    // 0x80228F04: addiu       $v0, $zero, 0x4C0
    ctx->r2 = ADD32(0, 0X4C0);
    // 0x80228F08: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x80228F0C: lw          $v1, 0x24($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X24);
    // 0x80228F10: lui         $v0, 0x2CE
    ctx->r2 = S32(0X2CE << 16);
    // 0x80228F14: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80228F18: lw          $v0, 0x24($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X24);
    // 0x80228F1C: sw          $a1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r5;
    // 0x80228F20: lw          $v1, 0x24($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X24);
    // 0x80228F24: lui         $v0, 0x4C0
    ctx->r2 = S32(0X4C0 << 16);
    // 0x80228F28: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80228F2C: lw          $v1, 0x24($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X24);
    // 0x80228F30: addiu       $v0, $zero, 0xCF6
    ctx->r2 = ADD32(0, 0XCF6);
    // 0x80228F34: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x80228F38: lw          $v0, 0x24($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X24);
    // 0x80228F3C: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
    // 0x80228F40: lw          $v1, 0x24($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X24);
    // 0x80228F44: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228F48: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x80228F4C: lw          $v0, 0x24($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X24);
    // 0x80228F50: jal         0x800600F8
    // 0x80228F54: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
    func_800600F8_3B4F8(rdram, ctx);
        goto after_0;
    // 0x80228F54: sh          $zero, 0x44($v0)
    MEM_H(0X44, ctx->r2) = 0;
    after_0:
L_80228F58:
    // 0x80228F58: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228F5C: jr          $ra
    // 0x80228F60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228F60: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80237C64_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237C64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237C68: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80237C6C: lw          $v0, 0x2D0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2D0);
    // 0x80237C70: lui         $v1, 0xFF00
    ctx->r3 = S32(0XFF00 << 16);
    // 0x80237C74: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80237C78: bne         $v0, $zero, L_80237C8C
    if (ctx->r2 != 0) {
        // 0x80237C7C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237C8C;
    }
    // 0x80237C7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237C80: jal         0x8003F754
    // 0x80237C84: nop

    func_8003F754_1AB54(rdram, ctx);
        goto after_0;
    // 0x80237C84: nop

    after_0:
    // 0x80237C88: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_80237C8C:
    // 0x80237C8C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80237C90: jr          $ra
    // 0x80237C94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237C94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233B98_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233B98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233B9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233BA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233BA4: jal         0x8004F144
    // 0x80233BA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80233BA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80233BAC: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80233BB0: beq         $v1, $zero, L_80233BE4
    if (ctx->r3 == 0) {
        // 0x80233BB4: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80233BE4;
    }
    // 0x80233BB4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80233BB8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80233BBC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80233BC0: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80233BC4: addiu       $v0, $zero, 0x42
    ctx->r2 = ADD32(0, 0X42);
    // 0x80233BC8: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80233BCC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80233BD0: sh          $v0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r2;
    // 0x80233BD4: lhu         $v0, 0x2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2);
    // 0x80233BD8: sh          $v0, 0x3A($v1)
    MEM_H(0X3A, ctx->r3) = ctx->r2;
    // 0x80233BDC: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x80233BE0: sh          $v0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r2;
L_80233BE4:
    // 0x80233BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233BE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233BEC: jr          $ra
    // 0x80233BF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233BF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227E8C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227E8C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80227E90: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227E94: bne         $v1, $v0, L_80227EA8
    if (ctx->r3 != ctx->r2) {
        // 0x80227E98: nop
    
            goto L_80227EA8;
    }
    // 0x80227E98: nop

    // 0x80227E9C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80227EA0: andi        $v0, $v0, 0x7F
    ctx->r2 = ctx->r2 & 0X7F;
    // 0x80227EA4: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80227EA8:
    // 0x80227EA8: jr          $ra
    // 0x80227EAC: nop

    TRACE_RETURN()
    return;
    // 0x80227EAC: nop

;}
RECOMP_FUNC void func_80237DB0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237DB0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80237DB4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237DB8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80237DBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80237DC0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80237DC4: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80237DC8: beq         $v0, $zero, L_80237DDC
    if (ctx->r2 == 0) {
        // 0x80237DCC: addiu       $a1, $zero, 0x30
        ctx->r5 = ADD32(0, 0X30);
            goto L_80237DDC;
    }
    // 0x80237DCC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80237DD0: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x80237DD4: jal         0x8003B564
    // 0x80237DD8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_0;
    // 0x80237DD8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
L_80237DDC:
    // 0x80237DDC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80237DE0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80237DE4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80237DE8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80237DEC: lw          $v0, 0x60B0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X60B0);
    // 0x80237DF0: jalr        $v0
    // 0x80237DF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80237DF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237DF8: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80237DFC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237E00: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80237E04: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80237E08: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80237E0C: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x80237E10: bne         $v0, $zero, L_80237E3C
    if (ctx->r2 != 0) {
        // 0x80237E14: nop
    
            goto L_80237E3C;
    }
    // 0x80237E14: nop

    // 0x80237E18: lbu         $v0, 0xFC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XFC);
    // 0x80237E1C: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x80237E20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237E24: sb          $v0, 0xFC($s0)
    MEM_B(0XFC, ctx->r16) = ctx->r2;
    // 0x80237E28: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80237E2C: sltiu       $v0, $v0, 0x5
    ctx->r2 = ctx->r2 < 0X5 ? 1 : 0;
    // 0x80237E30: bne         $v0, $zero, L_80237E3C
    if (ctx->r2 != 0) {
        // 0x80237E34: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237E3C;
    }
    // 0x80237E34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237E38: sb          $v0, 0xFC($s0)
    MEM_B(0XFC, ctx->r16) = ctx->r2;
L_80237E3C:
    // 0x80237E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80237E40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237E44: jr          $ra
    // 0x80237E48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80237E48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023168C_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023168C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231690: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231694: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231698: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023169C: lh          $a0, 0x7480($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X7480);
    // 0x802316A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802316A4: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802316A8: jal         0x8004FA7C
    // 0x802316AC: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x802316AC: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_0:
    // 0x802316B0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802316B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802316B8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802316BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802316C0: bne         $v0, $zero, L_80231710
    if (ctx->r2 != 0) {
        // 0x802316C4: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80231710;
    }
    // 0x802316C4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802316C8: jal         0x8003516C
    // 0x802316CC: nop

    func_8003516C_1056C(rdram, ctx);
        goto after_1;
    // 0x802316CC: nop

    after_1:
    // 0x802316D0: bne         $v0, $zero, L_80231710
    if (ctx->r2 != 0) {
        // 0x802316D4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80231710;
    }
    // 0x802316D4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802316D8: lb          $a3, 0xC($s0)
    ctx->r7 = MEM_B(ctx->r16, 0XC);
    // 0x802316DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802316E0: jal         0x800610AC
    // 0x802316E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_2;
    // 0x802316E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x802316E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802316EC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x802316F0: jal         0x80050294
    // 0x802316F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x802316F4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x802316F8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802316FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80231700: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80231704: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231708: j           L_80231718
    // 0x8023170C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80231718;
    // 0x8023170C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80231710:
    // 0x80231710: jal         0x8005044C
    // 0x80231714: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x80231714: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
L_80231718:
    // 0x80231718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023171C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231720: jr          $ra
    // 0x80231724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D980_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D980: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D984: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D988: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D98C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D990: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8022D994: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022D998: jal         0x8004FA7C
    // 0x8022D99C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022D99C: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022D9A0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D9A4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D9A8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D9AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D9B0: bne         $v0, $zero, L_8022DA14
    if (ctx->r2 != 0) {
        // 0x8022D9B4: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022DA14;
    }
    // 0x8022D9B4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022D9B8: lh          $v1, 0x35C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35C);
    // 0x8022D9BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D9C0: beq         $v1, $zero, L_8022DA04
    if (ctx->r3 == 0) {
        // 0x8022D9C4: sb          $v0, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r2;
            goto L_8022DA04;
    }
    // 0x8022D9C4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022D9C8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D9CC: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x8022D9D0: jal         0x8009A3B4
    // 0x8022D9D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022D9D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022D9D8: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022D9DC: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022D9E0: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022D9E4: lhu         $a1, 0x352($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X352);
    // 0x8022D9E8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D9EC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022D9F0: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022D9F4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022D9F8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022D9FC: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022DA00: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
L_8022DA04:
    // 0x8022DA04: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x8022DA08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DA0C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022DA10: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_8022DA14:
    // 0x8022DA14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DA18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DA1C: jr          $ra
    // 0x8022DA20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DA20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236B90_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236B90: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80236B94: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x80236B98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236B9C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236BA0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236BA4: bne         $v0, $zero, L_80236BD4
    if (ctx->r2 != 0) {
        // 0x80236BA8: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80236BD4;
    }
    // 0x80236BA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80236BAC: jal         0x80034E3C
    // 0x80236BB0: nop

    func_80034E3C_1023C(rdram, ctx);
        goto after_0;
    // 0x80236BB0: nop

    after_0:
    // 0x80236BB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80236BB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80236BBC: jal         0x80050294
    // 0x80236BC0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80236BC0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80236BC4: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80236BC8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236BCC: j           L_80236BDC
    // 0x80236BD0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_80236BDC;
    // 0x80236BD0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80236BD4:
    // 0x80236BD4: jal         0x8005044C
    // 0x80236BD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x80236BD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80236BDC:
    // 0x80236BDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236BE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236BE4: jr          $ra
    // 0x80236BE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236BE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DA24_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DA24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022DA28: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022DA2C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022DA30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022DA34: lhu         $v0, 0x350($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X350);
    // 0x8022DA38: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DA3C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
    // 0x8022DA40: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DA44: bne         $v0, $zero, L_8022DAB0
    if (ctx->r2 != 0) {
        // 0x8022DA48: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_8022DAB0;
    }
    // 0x8022DA48: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022DA4C: jal         0x8022F614
    // 0x8022DA50: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022F614_ovl5(rdram, ctx);
        goto after_0;
    // 0x8022DA50: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_0:
    // 0x8022DA54: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022DA58: beq         $v0, $zero, L_8022DAAC
    if (ctx->r2 == 0) {
        // 0x8022DA5C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022DAAC;
    }
    // 0x8022DA5C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DA60: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x8022DA64: lh          $v1, 0x35E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35E);
    // 0x8022DA68: addiu       $v0, $v0, -0x5
    ctx->r2 = ADD32(ctx->r2, -0X5);
    // 0x8022DA6C: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022DA70: bne         $v1, $zero, L_8022DA80
    if (ctx->r3 != 0) {
        // 0x8022DA74: addiu       $v0, $zero, 0x3C
        ctx->r2 = ADD32(0, 0X3C);
            goto L_8022DA80;
    }
    // 0x8022DA74: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022DA78: j           L_8022DAB0
    // 0x8022DA7C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
        goto L_8022DAB0;
    // 0x8022DA7C: sh          $v0, 0x350($s0)
    MEM_H(0X350, ctx->r16) = ctx->r2;
L_8022DA80:
    // 0x8022DA80: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022DA84: jal         0x8022F588
    // 0x8022DA88: nop

    func_8022F588_ovl5(rdram, ctx);
        goto after_1;
    // 0x8022DA88: nop

    after_1:
    // 0x8022DA8C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022DA90: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022DA94: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022DA98: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022DA9C: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8022DAA0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022DAA4: j           L_8022DAB0
    // 0x8022DAA8: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
        goto L_8022DAB0;
    // 0x8022DAA8: sh          $v1, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r3;
L_8022DAAC:
    // 0x8022DAAC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022DAB0:
    // 0x8022DAB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022DAB4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022DAB8: jr          $ra
    // 0x8022DABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022DABC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802258B8_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802258B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802258BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802258C0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802258C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802258C8: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x802258CC: bne         $v0, $zero, L_80225940
    if (ctx->r2 != 0) {
        // 0x802258D0: nop
    
            goto L_80225940;
    }
    // 0x802258D0: nop

    // 0x802258D4: jal         0x8006033C
    // 0x802258D8: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802258D8: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_0:
    // 0x802258DC: bne         $v0, $zero, L_80225928
    if (ctx->r2 != 0) {
        // 0x802258E0: nop
    
            goto L_80225928;
    }
    // 0x802258E0: nop

    // 0x802258E4: jal         0x8006033C
    // 0x802258E8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802258E8: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    after_1:
    // 0x802258EC: beq         $v0, $zero, L_8022590C
    if (ctx->r2 == 0) {
        // 0x802258F0: nop
    
            goto L_8022590C;
    }
    // 0x802258F0: nop

    // 0x802258F4: jal         0x8006036C
    // 0x802258F8: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x802258F8: addiu       $a0, $zero, 0x13
    ctx->r4 = ADD32(0, 0X13);
    after_2:
    // 0x802258FC: jal         0x80060690
    // 0x80225900: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_80060690_3BA90(rdram, ctx);
        goto after_3;
    // 0x80225900: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_3:
    // 0x80225904: j           L_8022593C
    // 0x80225908: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
        goto L_8022593C;
    // 0x80225908: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022590C:
    // 0x8022590C: jal         0x8006033C
    // 0x80225910: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80225910: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    after_4:
    // 0x80225914: beq         $v0, $zero, L_80225928
    if (ctx->r2 == 0) {
        // 0x80225918: nop
    
            goto L_80225928;
    }
    // 0x80225918: nop

    // 0x8022591C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225920: j           L_80225930
    // 0x80225924: addiu       $a0, $a0, 0x49E0
    ctx->r4 = ADD32(ctx->r4, 0X49E0);
        goto L_80225930;
    // 0x80225924: addiu       $a0, $a0, 0x49E0
    ctx->r4 = ADD32(ctx->r4, 0X49E0);
L_80225928:
    // 0x80225928: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8022592C: addiu       $a0, $a0, 0x3180
    ctx->r4 = ADD32(ctx->r4, 0X3180);
L_80225930:
    // 0x80225930: jal         0x80225CEC
    // 0x80225934: nop

    func_80225CEC_ovl5(rdram, ctx);
        goto after_5;
    // 0x80225934: nop

    after_5:
    // 0x80225938: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_8022593C:
    // 0x8022593C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225940:
    // 0x80225940: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225944: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225948: jr          $ra
    // 0x8022594C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022594C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226EC0_ovl5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226EC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226EC4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226EC8: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80226ECC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226ED0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80226ED4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226ED8: lw          $v0, 0x3C40($at)
    ctx->r2 = MEM_W(ctx->r1, 0X3C40);
    // 0x80226EDC: jalr        $v0
    // 0x80226EE0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226EE0: nop

    after_0:
    // 0x80226EE4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226EE8: jr          $ra
    // 0x80226EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226EEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
