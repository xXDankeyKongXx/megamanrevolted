#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022A7B0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A7B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A7B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A7B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A7BC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A7C0: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x8022A7C4: addiu       $s1, $s1, 0x2524
    ctx->r17 = ADD32(ctx->r17, 0X2524);
    // 0x8022A7C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022A7CC: jal         0x800A3450
    // 0x8022A7D0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022A7D0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    after_0:
    // 0x8022A7D4: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022A7D8: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022A7DC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A7E0: lbu         $v1, 0x2514($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X2514);
    // 0x8022A7E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A7E8: beq         $v1, $v0, L_8022A888
    if (ctx->r3 == ctx->r2) {
        // 0x8022A7EC: addiu       $s2, $s0, 0x348
        ctx->r18 = ADD32(ctx->r16, 0X348);
            goto L_8022A888;
    }
    // 0x8022A7EC: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x8022A7F0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022A7F4: beql        $v0, $zero, L_8022A80C
    if (ctx->r2 == 0) {
        // 0x8022A7F8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022A80C;
    }
    goto skip_0;
    // 0x8022A7F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022A7FC: beq         $v1, $zero, L_8022A81C
    if (ctx->r3 == 0) {
        // 0x8022A800: nop
    
            goto L_8022A81C;
    }
    // 0x8022A800: nop

    // 0x8022A804: j           L_8022A8D4
    // 0x8022A808: nop

        goto L_8022A8D4;
    // 0x8022A808: nop

L_8022A80C:
    // 0x8022A80C: beq         $v1, $v0, L_8022A8A8
    if (ctx->r3 == ctx->r2) {
        // 0x8022A810: nop
    
            goto L_8022A8A8;
    }
    // 0x8022A810: nop

    // 0x8022A814: j           L_8022A8D4
    // 0x8022A818: nop

        goto L_8022A8D4;
    // 0x8022A818: nop

L_8022A81C:
    // 0x8022A81C: lh          $v0, 0x35E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35E);
    // 0x8022A820: bne         $v0, $zero, L_8022A834
    if (ctx->r2 != 0) {
        // 0x8022A824: nop
    
            goto L_8022A834;
    }
    // 0x8022A824: nop

    // 0x8022A828: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A82C: j           L_8022A83C
    // 0x8022A830: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022A83C;
    // 0x8022A830: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022A834:
    // 0x8022A834: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A838: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
L_8022A83C:
    // 0x8022A83C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A840: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022A844: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022A848: beq         $v0, $zero, L_8022A864
    if (ctx->r2 == 0) {
        // 0x8022A84C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A864;
    }
    // 0x8022A84C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A850: jal         0x8022C218
    // 0x8022A854: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8022C218_ovl15(rdram, ctx);
        goto after_1;
    // 0x8022A854: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x8022A858: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022A85C: j           L_8022A878
    // 0x8022A860: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_8022A878;
    // 0x8022A860: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022A864:
    // 0x8022A864: jal         0x8022C218
    // 0x8022A868: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022C218_ovl15(rdram, ctx);
        goto after_2;
    // 0x8022A868: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x8022A86C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A870: jal         0x8022C1D8
    // 0x8022A874: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    func_8022C1D8_ovl15(rdram, ctx);
        goto after_3;
    // 0x8022A874: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    after_3:
L_8022A878:
    // 0x8022A878: lui         $s1, 0x8023
    ctx->r17 = S32(0X8023 << 16);
    // 0x8022A87C: addiu       $s1, $s1, 0x2524
    ctx->r17 = ADD32(ctx->r17, 0X2524);
    // 0x8022A880: j           L_8022A8D4
    // 0x8022A884: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022A8D4;
    // 0x8022A884: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022A888:
    // 0x8022A888: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A88C: jal         0x8022C1C8
    // 0x8022A890: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    func_8022C1C8_ovl15(rdram, ctx);
        goto after_4;
    // 0x8022A890: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    after_4:
    // 0x8022A894: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A898: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A89C: addiu       $v1, $v1, 0x3
    ctx->r3 = ADD32(ctx->r3, 0X3);
    // 0x8022A8A0: j           L_8022A8D4
    // 0x8022A8A4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_8022A8D4;
    // 0x8022A8A4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022A8A8:
    // 0x8022A8A8: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022A8AC: jal         0x8022C1D8
    // 0x8022A8B0: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    func_8022C1D8_ovl15(rdram, ctx);
        goto after_5;
    // 0x8022A8B0: addiu       $s1, $s1, 0x20
    ctx->r17 = ADD32(ctx->r17, 0X20);
    after_5:
    // 0x8022A8B4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A8B8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A8BC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A8C0: addiu       $v1, $v1, 0x800
    ctx->r3 = ADD32(ctx->r3, 0X800);
    // 0x8022A8C4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A8C8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8022A8CC: sh          $v1, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r3;
    // 0x8022A8D0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022A8D4:
    // 0x8022A8D4: jal         0x800A3450
    // 0x8022A8D8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x8022A8D8: nop

    after_6:
    // 0x8022A8DC: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022A8E0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022A8E4: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022A8E8: sh          $v0, 0x8($s2)
    MEM_H(0X8, ctx->r18) = ctx->r2;
    // 0x8022A8EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A8F0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022A8F4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A8F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A8FC: jr          $ra
    // 0x8022A900: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A900: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802255E0_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802255E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802255E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802255E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802255EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802255F0: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x802255F4: bne         $v0, $zero, L_80225644
    if (ctx->r2 != 0) {
        // 0x802255F8: nop
    
            goto L_80225644;
    }
    // 0x802255F8: nop

    // 0x802255FC: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x80225600: jal         0x800607C4
    // 0x80225604: addiu       $a0, $a0, 0x93C
    ctx->r4 = ADD32(ctx->r4, 0X93C);
    func_800607C4_3BBC4(rdram, ctx);
        goto after_0;
    // 0x80225604: addiu       $a0, $a0, 0x93C
    ctx->r4 = ADD32(ctx->r4, 0X93C);
    after_0:
    // 0x80225608: jal         0x8006033C
    // 0x8022560C: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x8022560C: addiu       $a0, $zero, 0x31
    ctx->r4 = ADD32(0, 0X31);
    after_1:
    // 0x80225610: bne         $v0, $zero, L_80225620
    if (ctx->r2 != 0) {
        // 0x80225614: nop
    
            goto L_80225620;
    }
    // 0x80225614: nop

    // 0x80225618: jal         0x8006036C
    // 0x8022561C: addiu       $a0, $zero, 0x7E1
    ctx->r4 = ADD32(0, 0X7E1);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x8022561C: addiu       $a0, $zero, 0x7E1
    ctx->r4 = ADD32(0, 0X7E1);
    after_2:
L_80225620:
    // 0x80225620: jal         0x8006033C
    // 0x80225624: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80225624: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_3:
    // 0x80225628: bne         $v0, $zero, L_80225638
    if (ctx->r2 != 0) {
        // 0x8022562C: nop
    
            goto L_80225638;
    }
    // 0x8022562C: nop

    // 0x80225630: jal         0x8006036C
    // 0x80225634: addiu       $a0, $zero, 0x7E3
    ctx->r4 = ADD32(0, 0X7E3);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80225634: addiu       $a0, $zero, 0x7E3
    ctx->r4 = ADD32(0, 0X7E3);
    after_4:
L_80225638:
    // 0x80225638: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022563C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225640: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80225644:
    // 0x80225644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225648: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022564C: jr          $ra
    // 0x80225650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D160_ovl15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D160: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D164: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D168: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D16C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D170: andi        $s0, $a1, 0xFF
    ctx->r16 = ctx->r5 & 0XFF;
    // 0x8022D174: sll         $v1, $s0, 7
    ctx->r3 = S32(ctx->r16 << 7);
    // 0x8022D178: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x8022D17C: addu        $v1, $s1, $v1
    ctx->r3 = ADD32(ctx->r17, ctx->r3);
    // 0x8022D180: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022D184: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D188: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x8022D18C: andi        $a2, $a2, 0xFF
    ctx->r6 = ctx->r6 & 0XFF;
    // 0x8022D190: sll         $a2, $a2, 4
    ctx->r6 = S32(ctx->r6 << 4);
    // 0x8022D194: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D198: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D19C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D1A0: lw          $v0, 0x26B0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X26B0);
    // 0x8022D1A4: addu        $s2, $v1, $a2
    ctx->r18 = ADD32(ctx->r3, ctx->r6);
    // 0x8022D1A8: jalr        $v0
    // 0x8022D1AC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D1AC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_0:
    // 0x8022D1B0: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x8022D1B4: srav        $v0, $v0, $s0
    ctx->r2 = S32(SIGNED(ctx->r2) >> (ctx->r16 & 31));
    // 0x8022D1B8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022D1BC: beq         $v0, $zero, L_8022D1E4
    if (ctx->r2 == 0) {
        // 0x8022D1C0: nop
    
            goto L_8022D1E4;
    }
    // 0x8022D1C0: nop

    // 0x8022D1C4: lb          $v0, 0xB($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XB);
    // 0x8022D1C8: lw          $a1, 0x10($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X10);
    // 0x8022D1CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D1D0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D1D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D1D8: lw          $v0, 0x26C4($at)
    ctx->r2 = MEM_W(ctx->r1, 0X26C4);
    // 0x8022D1DC: jalr        $v0
    // 0x8022D1E0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8022D1E0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
L_8022D1E4:
    // 0x8022D1E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D1E8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D1EC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D1F0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D1F4: jr          $ra
    // 0x8022D1F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D1F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802261EC_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802261EC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802261F0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802261F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802261F8: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x802261FC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80226200: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80226204: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226208: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022620C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80226210: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80226214: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80226218: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x8022621C: jal         0x8004D5D4
    // 0x80226220: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226220: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x80226224: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226228: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022622C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80226230: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80226234: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80226238: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022623C: jal         0x8003E934
    // 0x80226240: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x80226240: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x80226244: addiu       $s1, $s0, 0x310
    ctx->r17 = ADD32(ctx->r16, 0X310);
    // 0x80226248: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022624C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80226250: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80226254: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80226258: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022625C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80226260: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226264: addiu       $v0, $v0, 0x4078
    ctx->r2 = ADD32(ctx->r2, 0X4078);
    // 0x80226268: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x8022626C: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226270: addiu       $v0, $v0, 0x406C
    ctx->r2 = ADD32(ctx->r2, 0X406C);
    // 0x80226274: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
    // 0x80226278: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022627C: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80226280: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80226284: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80226288: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022628C: jal         0x8009A3B4
    // 0x80226290: sh          $zero, 0x308($s0)
    MEM_H(0X308, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80226290: sh          $zero, 0x308($s0)
    MEM_H(0X308, ctx->r16) = 0;
    after_2:
    // 0x80226294: addiu       $a0, $s0, 0x328
    ctx->r4 = ADD32(ctx->r16, 0X328);
    // 0x80226298: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022629C: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x802262A0: addiu       $v0, $zero, -0x30
    ctx->r2 = ADD32(0, -0X30);
    // 0x802262A4: sh          $v0, 0x318($s0)
    MEM_H(0X318, ctx->r16) = ctx->r2;
    // 0x802262A8: addiu       $v0, $zero, -0x48
    ctx->r2 = ADD32(0, -0X48);
    // 0x802262AC: sh          $v0, 0x31A($s0)
    MEM_H(0X31A, ctx->r16) = ctx->r2;
    // 0x802262B0: addiu       $v0, $zero, 0x48
    ctx->r2 = ADD32(0, 0X48);
    // 0x802262B4: sh          $v0, 0x31E($s0)
    MEM_H(0X31E, ctx->r16) = ctx->r2;
    // 0x802262B8: lui         $v0, 0x888
    ctx->r2 = S32(0X888 << 16);
    // 0x802262BC: sh          $zero, 0x31C($s0)
    MEM_H(0X31C, ctx->r16) = 0;
    // 0x802262C0: sw          $v0, 0x30C($s0)
    MEM_W(0X30C, ctx->r16) = ctx->r2;
    // 0x802262C4: jal         0x800540BC
    // 0x802262C8: sh          $zero, 0x30A($s0)
    MEM_H(0X30A, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_3;
    // 0x802262C8: sh          $zero, 0x30A($s0)
    MEM_H(0X30A, ctx->r16) = 0;
    after_3:
    // 0x802262CC: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802262D0: lh          $a2, 0x318($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X318);
    // 0x802262D4: lh          $a3, 0x31A($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X31A);
    // 0x802262D8: lh          $v0, 0x31C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X31C);
    // 0x802262DC: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x802262E0: jal         0x80226C84
    // 0x802262E4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80226C84_ovl16(rdram, ctx);
        goto after_4;
    // 0x802262E4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_4:
    // 0x802262E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802262EC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x802262F0: jal         0x8009A3B4
    // 0x802262F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x802262F4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x802262F8: lhu         $v1, 0x310($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X310);
    // 0x802262FC: lhu         $a2, 0x14($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X14);
    // 0x80226300: lhu         $a0, 0x312($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X312);
    // 0x80226304: lhu         $a3, 0x16($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X16);
    // 0x80226308: lhu         $a1, 0x314($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X314);
    // 0x8022630C: lhu         $t0, 0x18($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X18);
    // 0x80226310: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80226314: lui         $t1, 0x8021
    ctx->r9 = S32(0X8021 << 16);
    // 0x80226318: lw          $t1, 0x298($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X298);
    // 0x8022631C: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x80226320: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x80226324: addu        $a1, $a1, $t0
    ctx->r5 = ADD32(ctx->r5, ctx->r8);
    // 0x80226328: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022632C: addu        $v0, $v0, $t1
    ctx->r2 = ADD32(ctx->r2, ctx->r9);
    // 0x80226330: sh          $v1, 0x310($s0)
    MEM_H(0X310, ctx->r16) = ctx->r3;
    // 0x80226334: sh          $a0, 0x312($s0)
    MEM_H(0X312, ctx->r16) = ctx->r4;
    // 0x80226338: sh          $a1, 0x314($s0)
    MEM_H(0X314, ctx->r16) = ctx->r5;
    // 0x8022633C: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80226340: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x80226344: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80226348: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022634C: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x80226350: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x80226354: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80226358: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022635C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80226360: jr          $ra
    // 0x80226364: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80226364: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022D810_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D810: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D814: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022D818: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022D81C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D820: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D824: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D828: lw          $v0, 0x43E0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X43E0);
    // 0x8022D82C: jalr        $v0
    // 0x8022D830: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022D830: nop

    after_0:
    // 0x8022D834: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022D838: jr          $ra
    // 0x8022D83C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D83C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802253D8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802253DC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802253E0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802253E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802253E8: jal         0x8006033C
    // 0x802253EC: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802253EC: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_0:
    // 0x802253F0: beq         $v0, $zero, L_80225408
    if (ctx->r2 == 0) {
        // 0x802253F4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225408;
    }
    // 0x802253F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802253F8: jal         0x80060690
    // 0x802253FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x802253FC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
    // 0x80225400: j           L_802254C0
    // 0x80225404: nop

        goto L_802254C0;
    // 0x80225404: nop

L_80225408:
    // 0x80225408: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022540C: beq         $v1, $v0, L_8022547C
    if (ctx->r3 == ctx->r2) {
        // 0x80225410: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_8022547C;
    }
    // 0x80225410: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x80225414: beql        $v0, $zero, L_80225434
    if (ctx->r2 == 0) {
        // 0x80225418: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80225434;
    }
    goto skip_0;
    // 0x80225418: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_0:
    // 0x8022541C: beq         $v1, $zero, L_80225444
    if (ctx->r3 == 0) {
        // 0x80225420: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80225444;
    }
    // 0x80225420: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80225424: beq         $v1, $v0, L_80225454
    if (ctx->r3 == ctx->r2) {
        // 0x80225428: nop
    
            goto L_80225454;
    }
    // 0x80225428: nop

    // 0x8022542C: j           L_802254C0
    // 0x80225430: nop

        goto L_802254C0;
    // 0x80225430: nop

L_80225434:
    // 0x80225434: beq         $v1, $v0, L_802254A0
    if (ctx->r3 == ctx->r2) {
        // 0x80225438: nop
    
            goto L_802254A0;
    }
    // 0x80225438: nop

    // 0x8022543C: j           L_802254C0
    // 0x80225440: nop

        goto L_802254C0;
    // 0x80225440: nop

L_80225444:
    // 0x80225444: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80225448: sh          $zero, -0x3A84($at)
    MEM_H(-0X3A84, ctx->r1) = 0;
    // 0x8022544C: j           L_802254BC
    // 0x80225450: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_802254BC;
    // 0x80225450: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80225454:
    // 0x80225454: jal         0x8006033C
    // 0x80225458: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80225458: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    after_2:
    // 0x8022545C: bne         $v0, $zero, L_802254BC
    if (ctx->r2 != 0) {
        // 0x80225460: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802254BC;
    }
    // 0x80225460: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225464: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80225468: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022546C: jal         0x80060DA0
    // 0x80225470: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_3;
    // 0x80225470: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80225474: j           L_802254BC
    // 0x80225478: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_802254BC;
    // 0x80225478: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022547C:
    // 0x8022547C: jal         0x8006033C
    // 0x80225480: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80225480: addiu       $a0, $zero, 0x43
    ctx->r4 = ADD32(0, 0X43);
    after_4:
    // 0x80225484: beq         $v0, $zero, L_802254C0
    if (ctx->r2 == 0) {
        // 0x80225488: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_802254C0;
    }
    // 0x80225488: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8022548C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225490: jal         0x80060DA0
    // 0x80225494: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80060DA0_3C1A0(rdram, ctx);
        goto after_5;
    // 0x80225494: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80225498: j           L_802254BC
    // 0x8022549C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
        goto L_802254BC;
    // 0x8022549C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802254A0:
    // 0x802254A0: jal         0x8006033C
    // 0x802254A4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x802254A4: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    after_6:
    // 0x802254A8: beq         $v0, $zero, L_802254C0
    if (ctx->r2 == 0) {
        // 0x802254AC: nop
    
            goto L_802254C0;
    }
    // 0x802254AC: nop

    // 0x802254B0: jal         0x80060690
    // 0x802254B4: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    func_80060690_3BA90(rdram, ctx);
        goto after_7;
    // 0x802254B4: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_7:
    // 0x802254B8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
L_802254BC:
    // 0x802254BC: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802254C0:
    // 0x802254C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802254C4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802254C8: jr          $ra
    // 0x802254CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802254CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B4EC_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B4EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B4F0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B4F4: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022B4F8: bne         $v0, $zero, L_8022B510
    if (ctx->r2 != 0) {
        // 0x8022B4FC: nop
    
            goto L_8022B510;
    }
    // 0x8022B4FC: nop

    // 0x8022B500: jal         0x8022B524
    // 0x8022B504: nop

    func_8022B524_ovl16(rdram, ctx);
        goto after_0;
    // 0x8022B504: nop

    after_0:
    // 0x8022B508: j           L_8022B518
    // 0x8022B50C: nop

        goto L_8022B518;
    // 0x8022B50C: nop

L_8022B510:
    // 0x8022B510: jal         0x8022B58C
    // 0x8022B514: nop

    func_8022B58C_ovl16(rdram, ctx);
        goto after_1;
    // 0x8022B514: nop

    after_1:
L_8022B518:
    // 0x8022B518: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B51C: jr          $ra
    // 0x8022B520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225D6C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225D6C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225D70: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225D74: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225D78: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225D7C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225D80: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225D84: bne         $v0, $zero, L_80225DB8
    if (ctx->r2 != 0) {
        // 0x80225D88: addiu       $s1, $s0, 0x500
        ctx->r17 = ADD32(ctx->r16, 0X500);
            goto L_80225DB8;
    }
    // 0x80225D88: addiu       $s1, $s0, 0x500
    ctx->r17 = ADD32(ctx->r16, 0X500);
    // 0x80225D8C: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x80225D90: jal         0x80050294
    // 0x80225D94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80225D94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80225D98: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80225D9C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225DA0: sb          $v0, 0x10B($s0)
    MEM_B(0X10B, ctx->r16) = ctx->r2;
    // 0x80225DA4: sb          $v0, 0x117($s0)
    MEM_B(0X117, ctx->r16) = ctx->r2;
    // 0x80225DA8: sb          $zero, 0x143($s0)
    MEM_B(0X143, ctx->r16) = 0;
    // 0x80225DAC: sb          $zero, 0x147($s0)
    MEM_B(0X147, ctx->r16) = 0;
    // 0x80225DB0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225DB4: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80225DB8:
    // 0x80225DB8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225DBC: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80225DC0: addiu       $v0, $zero, 0xC9
    ctx->r2 = ADD32(0, 0XC9);
    // 0x80225DC4: beq         $v1, $v0, L_80225E0C
    if (ctx->r3 == ctx->r2) {
        // 0x80225DC8: slti        $v0, $v1, 0xCA
        ctx->r2 = SIGNED(ctx->r3) < 0XCA ? 1 : 0;
            goto L_80225E0C;
    }
    // 0x80225DC8: slti        $v0, $v1, 0xCA
    ctx->r2 = SIGNED(ctx->r3) < 0XCA ? 1 : 0;
    // 0x80225DCC: beq         $v0, $zero, L_80225DE4
    if (ctx->r2 == 0) {
        // 0x80225DD0: addiu       $v0, $zero, 0xBF
        ctx->r2 = ADD32(0, 0XBF);
            goto L_80225DE4;
    }
    // 0x80225DD0: addiu       $v0, $zero, 0xBF
    ctx->r2 = ADD32(0, 0XBF);
    // 0x80225DD4: beq         $v1, $v0, L_80225DF8
    if (ctx->r3 == ctx->r2) {
        // 0x80225DD8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80225DF8;
    }
    // 0x80225DD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225DDC: j           L_80225E38
    // 0x80225DE0: nop

        goto L_80225E38;
    // 0x80225DE0: nop

L_80225DE4:
    // 0x80225DE4: addiu       $v0, $zero, 0xCD
    ctx->r2 = ADD32(0, 0XCD);
    // 0x80225DE8: beq         $v1, $v0, L_80225E24
    if (ctx->r3 == ctx->r2) {
        // 0x80225DEC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80225E24;
    }
    // 0x80225DEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225DF0: j           L_80225E38
    // 0x80225DF4: nop

        goto L_80225E38;
    // 0x80225DF4: nop

L_80225DF8:
    // 0x80225DF8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80225DFC: jal         0x80225FD8
    // 0x80225E00: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_80225FD8_ovl16(rdram, ctx);
        goto after_1;
    // 0x80225E00: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_1:
    // 0x80225E04: j           L_80225E38
    // 0x80225E08: nop

        goto L_80225E38;
    // 0x80225E08: nop

L_80225E0C:
    // 0x80225E0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225E10: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80225E14: jal         0x80225FD8
    // 0x80225E18: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_80225FD8_ovl16(rdram, ctx);
        goto after_2;
    // 0x80225E18: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x80225E1C: j           L_80225E38
    // 0x80225E20: nop

        goto L_80225E38;
    // 0x80225E20: nop

L_80225E24:
    // 0x80225E24: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80225E28: jal         0x80225FD8
    // 0x80225E2C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80225FD8_ovl16(rdram, ctx);
        goto after_3;
    // 0x80225E2C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_3:
    // 0x80225E30: sb          $zero, 0x14B($s0)
    MEM_B(0X14B, ctx->r16) = 0;
    // 0x80225E34: sb          $zero, 0x14F($s0)
    MEM_B(0X14F, ctx->r16) = 0;
L_80225E38:
    // 0x80225E38: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225E3C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225E40: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225E44: jr          $ra
    // 0x80225E48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225E48: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229694_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229694: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229698: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022969C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802296A0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802296A4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802296A8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802296AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802296B0: jal         0x80050294
    // 0x802296B4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802296B4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x802296B8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802296BC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802296C0: addiu       $v0, $zero, 0x1E0
    ctx->r2 = ADD32(0, 0X1E0);
    // 0x802296C4: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x802296C8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802296CC: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
    // 0x802296D0: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x802296D4: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x802296D8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802296DC: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x802296E0: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x802296E4: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x802296E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802296EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802296F0: jr          $ra
    // 0x802296F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802296F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225EA8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225EA8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225EAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225EB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225EB4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80225EB8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80225EBC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225EC0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225EC4: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x80225EC8: addiu       $s2, $s2, -0x3A50
    ctx->r18 = ADD32(ctx->r18, -0X3A50);
    // 0x80225ECC: bne         $v0, $zero, L_80225F30
    if (ctx->r2 != 0) {
        // 0x80225ED0: addiu       $s1, $s0, 0x500
        ctx->r17 = ADD32(ctx->r16, 0X500);
            goto L_80225F30;
    }
    // 0x80225ED0: addiu       $s1, $s0, 0x500
    ctx->r17 = ADD32(ctx->r16, 0X500);
    // 0x80225ED4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80225ED8: bne         $v0, $zero, L_80225EE4
    if (ctx->r2 != 0) {
        // 0x80225EDC: addiu       $v0, $zero, 0x400
        ctx->r2 = ADD32(0, 0X400);
            goto L_80225EE4;
    }
    // 0x80225EDC: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80225EE0: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
L_80225EE4:
    // 0x80225EE4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x80225EE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225EEC: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x80225EF0: jal         0x80050294
    // 0x80225EF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80225EF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80225EF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225EFC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80225F00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80225F04: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225F08: sb          $zero, 0x117($s0)
    MEM_B(0X117, ctx->r16) = 0;
    // 0x80225F0C: sb          $zero, 0x10B($s0)
    MEM_B(0X10B, ctx->r16) = 0;
    // 0x80225F10: sb          $v0, 0x14B($s0)
    MEM_B(0X14B, ctx->r16) = ctx->r2;
    // 0x80225F14: sb          $v0, 0x147($s0)
    MEM_B(0X147, ctx->r16) = ctx->r2;
    // 0x80225F18: sb          $v0, 0x143($s0)
    MEM_B(0X143, ctx->r16) = ctx->r2;
    // 0x80225F1C: jal         0x80225FD8
    // 0x80225F20: sb          $v0, 0x14F($s0)
    MEM_B(0X14F, ctx->r16) = ctx->r2;
    func_80225FD8_ovl16(rdram, ctx);
        goto after_1;
    // 0x80225F20: sb          $v0, 0x14F($s0)
    MEM_B(0X14F, ctx->r16) = ctx->r2;
    after_1:
    // 0x80225F24: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225F28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225F2C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80225F30:
    // 0x80225F30: lw          $v1, 0x10($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X10);
    // 0x80225F34: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x80225F38: beq         $v1, $v0, L_80225FAC
    if (ctx->r3 == ctx->r2) {
        // 0x80225F3C: slti        $v0, $v1, 0x5B
        ctx->r2 = SIGNED(ctx->r3) < 0X5B ? 1 : 0;
            goto L_80225FAC;
    }
    // 0x80225F3C: slti        $v0, $v1, 0x5B
    ctx->r2 = SIGNED(ctx->r3) < 0X5B ? 1 : 0;
    // 0x80225F40: beq         $v0, $zero, L_80225F60
    if (ctx->r2 == 0) {
        // 0x80225F44: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_80225F60;
    }
    // 0x80225F44: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80225F48: beq         $v1, $v0, L_80225F90
    if (ctx->r3 == ctx->r2) {
        // 0x80225F4C: addiu       $v0, $zero, 0x46
        ctx->r2 = ADD32(0, 0X46);
            goto L_80225F90;
    }
    // 0x80225F4C: addiu       $v0, $zero, 0x46
    ctx->r2 = ADD32(0, 0X46);
    // 0x80225F50: beq         $v1, $v0, L_80225FA0
    if (ctx->r3 == ctx->r2) {
        // 0x80225F54: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80225FA0;
    }
    // 0x80225F54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225F58: j           L_80225FC0
    // 0x80225F5C: nop

        goto L_80225FC0;
    // 0x80225F5C: nop

L_80225F60:
    // 0x80225F60: addiu       $v0, $zero, 0x8C
    ctx->r2 = ADD32(0, 0X8C);
    // 0x80225F64: beq         $v1, $v0, L_80225FAC
    if (ctx->r3 == ctx->r2) {
        // 0x80225F68: slti        $v0, $v1, 0x8D
        ctx->r2 = SIGNED(ctx->r3) < 0X8D ? 1 : 0;
            goto L_80225FAC;
    }
    // 0x80225F68: slti        $v0, $v1, 0x8D
    ctx->r2 = SIGNED(ctx->r3) < 0X8D ? 1 : 0;
    // 0x80225F6C: beq         $v0, $zero, L_80225F84
    if (ctx->r2 == 0) {
        // 0x80225F70: addiu       $v0, $zero, 0x7C
        ctx->r2 = ADD32(0, 0X7C);
            goto L_80225F84;
    }
    // 0x80225F70: addiu       $v0, $zero, 0x7C
    ctx->r2 = ADD32(0, 0X7C);
    // 0x80225F74: beq         $v1, $v0, L_80225FA0
    if (ctx->r3 == ctx->r2) {
        // 0x80225F78: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80225FA0;
    }
    // 0x80225F78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225F7C: j           L_80225FC0
    // 0x80225F80: nop

        goto L_80225FC0;
    // 0x80225F80: nop

L_80225F84:
    // 0x80225F84: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80225F88: bne         $v1, $v0, L_80225FC0
    if (ctx->r3 != ctx->r2) {
        // 0x80225F8C: nop
    
            goto L_80225FC0;
    }
    // 0x80225F8C: nop

L_80225F90:
    // 0x80225F90: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225F94: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80225F98: j           L_80225FB8
    // 0x80225F9C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
        goto L_80225FB8;
    // 0x80225F9C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_80225FA0:
    // 0x80225FA0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80225FA4: j           L_80225FB8
    // 0x80225FA8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
        goto L_80225FB8;
    // 0x80225FA8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_80225FAC:
    // 0x80225FAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225FB0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80225FB4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_80225FB8:
    // 0x80225FB8: jal         0x80225FD8
    // 0x80225FBC: nop

    func_80225FD8_ovl16(rdram, ctx);
        goto after_2;
    // 0x80225FBC: nop

    after_2:
L_80225FC0:
    // 0x80225FC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80225FC4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80225FC8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225FCC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225FD0: jr          $ra
    // 0x80225FD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225FD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A270_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A270: lh          $v0, 0x16($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X16);
    // 0x8022A274: slti        $v0, $v0, -0x32C
    ctx->r2 = SIGNED(ctx->r2) < -0X32C ? 1 : 0;
    // 0x8022A278: beq         $v0, $zero, L_8022A290
    if (ctx->r2 == 0) {
        // 0x8022A27C: addiu       $v0, $zero, -0x32C
        ctx->r2 = ADD32(0, -0X32C);
            goto L_8022A290;
    }
    // 0x8022A27C: addiu       $v0, $zero, -0x32C
    ctx->r2 = ADD32(0, -0X32C);
    // 0x8022A280: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x8022A284: lui         $v0, 0xFCD4
    ctx->r2 = S32(0XFCD4 << 16);
    // 0x8022A288: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x8022A28C: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
L_8022A290:
    // 0x8022A290: jr          $ra
    // 0x8022A294: nop

    TRACE_RETURN()
    return;
    // 0x8022A294: nop

;}
RECOMP_FUNC void func_8022900C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022900C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229010: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80229014: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229018: lb          $v1, 0xA6($a1)
    ctx->r3 = MEM_B(ctx->r5, 0XA6);
    // 0x8022901C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229020: bne         $v1, $v0, L_80229044
    if (ctx->r3 != ctx->r2) {
        // 0x80229024: addiu       $v0, $zero, -0x200
        ctx->r2 = ADD32(0, -0X200);
            goto L_80229044;
    }
    // 0x80229024: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x80229028: sh          $v0, 0x46($a1)
    MEM_H(0X46, ctx->r5) = ctx->r2;
    // 0x8022902C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229030: addiu       $a0, $zero, 0x15F
    ctx->r4 = ADD32(0, 0X15F);
    // 0x80229034: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
    // 0x80229038: sb          $v0, 0x74($a1)
    MEM_B(0X74, ctx->r5) = ctx->r2;
    // 0x8022903C: jal         0x8002A33C
    // 0x80229040: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80229040: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
L_80229044:
    // 0x80229044: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80229048: jr          $ra
    // 0x8022904C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022904C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B524_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B524: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B528: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B52C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B530: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B534: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B538: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022B53C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022B540: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x8022B544: jal         0x8004F820
    // 0x8022B548: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022B548: addiu       $a3, $zero, 0x80
    ctx->r7 = ADD32(0, 0X80);
    after_0:
    // 0x8022B54C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B550: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022B554: beq         $v0, $zero, L_8022B570
    if (ctx->r2 == 0) {
        // 0x8022B558: nop
    
            goto L_8022B570;
    }
    // 0x8022B558: nop

    // 0x8022B55C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B560: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B564: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B568: j           L_8022B57C
    // 0x8022B56C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8022B57C;
    // 0x8022B56C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022B570:
    // 0x8022B570: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B574: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B578: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022B57C:
    // 0x8022B57C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B580: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B584: jr          $ra
    // 0x8022B588: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B588: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F838_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F838: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022F83C: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8022F840: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F844: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x8022F848: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022F84C: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022F850: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022F854: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022F858: jal         0x8004DE68
    // 0x8022F85C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8004DE68_29268(rdram, ctx);
        goto after_0;
    // 0x8022F85C: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_0:
    // 0x8022F860: sltiu       $v0, $v0, 0x384
    ctx->r2 = ctx->r2 < 0X384 ? 1 : 0;
    // 0x8022F864: beq         $v0, $zero, L_8022F94C
    if (ctx->r2 == 0) {
        // 0x8022F868: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_8022F94C;
    }
    // 0x8022F868: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x8022F86C: lh          $v0, 0x38($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X38);
    // 0x8022F870: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F874: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022F878: lh          $v0, 0x3A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3A);
    // 0x8022F87C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F880: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022F884: lh          $v0, 0x3C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3C);
    // 0x8022F888: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F88C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022F890: lhu         $a1, 0x32($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X32);
    // 0x8022F894: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022F898: lh          $v0, 0x4A06($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X4A06);
    // 0x8022F89C: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x8022F8A0: addiu       $a3, $s1, 0x1C
    ctx->r7 = ADD32(ctx->r17, 0X1C);
    // 0x8022F8A4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022F8A8: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022F8AC: addiu       $a1, $a1, 0x400
    ctx->r5 = ADD32(ctx->r5, 0X400);
    // 0x8022F8B0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022F8B4: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022F8B8: jal         0x8004FAEC
    // 0x8022F8BC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_1;
    // 0x8022F8BC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022F8C0: beq         $v0, $zero, L_8022F94C
    if (ctx->r2 == 0) {
        // 0x8022F8C4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022F94C;
    }
    // 0x8022F8C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F8C8: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8022F8CC: bne         $v1, $zero, L_8022F908
    if (ctx->r3 != 0) {
        // 0x8022F8D0: sb          $v0, 0x9($s0)
        MEM_B(0X9, ctx->r16) = ctx->r2;
            goto L_8022F908;
    }
    // 0x8022F8D0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022F8D4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8022F8D8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8022F8DC: addiu       $v0, $zero, -0x900
    ctx->r2 = ADD32(0, -0X900);
    // 0x8022F8E0: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x8022F8E4: addiu       $v0, $zero, -0x12B
    ctx->r2 = ADD32(0, -0X12B);
    // 0x8022F8E8: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8022F8EC: addiu       $v0, $zero, -0x2300
    ctx->r2 = ADD32(0, -0X2300);
    // 0x8022F8F0: jal         0x8003E768
    // 0x8022F8F4: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    func_8003E768_19B68(rdram, ctx);
        goto after_2;
    // 0x8022F8F4: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022F8F8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022F8FC: lui         $a1, 0x6
    ctx->r5 = S32(0X6 << 16);
    // 0x8022F900: j           L_8022F938
    // 0x8022F904: ori         $a1, $a1, 0x302
    ctx->r5 = ctx->r5 | 0X302;
        goto L_8022F938;
    // 0x8022F904: ori         $a1, $a1, 0x302
    ctx->r5 = ctx->r5 | 0X302;
L_8022F908:
    // 0x8022F908: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8022F90C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8022F910: addiu       $v0, $zero, -0x1700
    ctx->r2 = ADD32(0, -0X1700);
    // 0x8022F914: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x8022F918: addiu       $v0, $zero, -0x2AB
    ctx->r2 = ADD32(0, -0X2AB);
    // 0x8022F91C: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x8022F920: addiu       $v0, $zero, -0x2300
    ctx->r2 = ADD32(0, -0X2300);
    // 0x8022F924: jal         0x8003E768
    // 0x8022F928: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    func_8003E768_19B68(rdram, ctx);
        goto after_3;
    // 0x8022F928: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022F92C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022F930: lui         $a1, 0x6
    ctx->r5 = S32(0X6 << 16);
    // 0x8022F934: ori         $a1, $a1, 0x402
    ctx->r5 = ctx->r5 | 0X402;
L_8022F938:
    // 0x8022F938: jal         0x80071ACC
    // 0x8022F93C: nop

    func_80071ACC_4CECC(rdram, ctx);
        goto after_4;
    // 0x8022F93C: nop

    after_4:
    // 0x8022F940: addiu       $a0, $zero, 0x175
    ctx->r4 = ADD32(0, 0X175);
    // 0x8022F944: jal         0x8002A33C
    // 0x8022F948: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022F948: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_5:
L_8022F94C:
    // 0x8022F94C: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022F950: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x8022F954: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8022F958: jr          $ra
    // 0x8022F95C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022F95C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80225AA4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225AA4: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225AA8: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80225AAC: bne         $v1, $v0, L_80225AC0
    if (ctx->r3 != ctx->r2) {
        // 0x80225AB0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_80225AC0;
    }
    // 0x80225AB0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80225AB4: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80225AB8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225ABC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80225AC0:
    // 0x80225AC0: jr          $ra
    // 0x80225AC4: nop

    TRACE_RETURN()
    return;
    // 0x80225AC4: nop

;}
RECOMP_FUNC void func_8022AF94_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AF94: lh          $v1, 0x54($a0)
    ctx->r3 = MEM_H(ctx->r4, 0X54);
    // 0x8022AF98: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8022AF9C: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x8022AFA0: bne         $v1, $v0, L_8022AFB8
    if (ctx->r3 != ctx->r2) {
        // 0x8022AFA4: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_8022AFB8;
    }
    // 0x8022AFA4: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8022AFA8: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022AFAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022AFB0: j           L_8022AFC0
    // 0x8022AFB4: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_8022AFC0;
    // 0x8022AFB4: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022AFB8:
    // 0x8022AFB8: addiu       $v0, $a1, 0x20
    ctx->r2 = ADD32(ctx->r5, 0X20);
    // 0x8022AFBC: sh          $v0, 0x54($a0)
    MEM_H(0X54, ctx->r4) = ctx->r2;
L_8022AFC0:
    // 0x8022AFC0: jr          $ra
    // 0x8022AFC4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8022AFC4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8022A7F4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A7F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A7F8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A7FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A800: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A804: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A808: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A80C: beq         $v1, $v0, L_8022A83C
    if (ctx->r3 == ctx->r2) {
        // 0x8022A810: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022A83C;
    }
    // 0x8022A810: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022A814: beq         $v0, $zero, L_8022A934
    if (ctx->r2 == 0) {
        // 0x8022A818: nop
    
            goto L_8022A934;
    }
    // 0x8022A818: nop

    // 0x8022A81C: bne         $v1, $zero, L_8022A934
    if (ctx->r3 != 0) {
        // 0x8022A820: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022A934;
    }
    // 0x8022A820: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022A824: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022A828: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022A82C: addiu       $v1, $zero, 0x400
    ctx->r3 = ADD32(0, 0X400);
    // 0x8022A830: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
    // 0x8022A834: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022A838: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022A83C:
    // 0x8022A83C: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8022A840: lhu         $v1, 0x4C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4C);
    // 0x8022A844: lhu         $a3, 0x4E($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022A848: lhu         $t0, 0x50($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X50);
    // 0x8022A84C: lw          $a2, 0x1C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1C);
    // 0x8022A850: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A854: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022A858: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022A85C: lhu         $v1, 0x48($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X48);
    // 0x8022A860: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022A864: addu        $v0, $v0, $a3
    ctx->r2 = ADD32(ctx->r2, ctx->r7);
    // 0x8022A868: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x8022A86C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022A870: lh          $v0, 0x46($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X46);
    // 0x8022A874: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x8022A878: addu        $a2, $a2, $a1
    ctx->r6 = ADD32(ctx->r6, ctx->r5);
    // 0x8022A87C: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x8022A880: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x8022A884: lh          $a1, 0x48($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X48);
    // 0x8022A888: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022A88C: sw          $a2, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r6;
    // 0x8022A890: lw          $a2, 0x24($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X24);
    // 0x8022A894: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8022A898: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A89C: sll         $a1, $a1, 8
    ctx->r5 = S32(ctx->r5 << 8);
    // 0x8022A8A0: addu        $a2, $a2, $a1
    ctx->r6 = ADD32(ctx->r6, ctx->r5);
    // 0x8022A8A4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022A8A8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022A8AC: jal         0x8004DD04
    // 0x8022A8B0: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x8022A8B0: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    after_0:
    // 0x8022A8B4: jal         0x80040F30
    // 0x8022A8B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022A8B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022A8BC: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x8022A8C0: beq         $v0, $zero, L_8022A934
    if (ctx->r2 == 0) {
        // 0x8022A8C4: nop
    
            goto L_8022A934;
    }
    // 0x8022A8C4: nop

    // 0x8022A8C8: lh          $v0, 0x66($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X66);
    // 0x8022A8CC: bne         $v0, $zero, L_8022A8E0
    if (ctx->r2 != 0) {
        // 0x8022A8D0: nop
    
            goto L_8022A8E0;
    }
    // 0x8022A8D0: nop

    // 0x8022A8D4: lhu         $v0, 0xC0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC0);
    // 0x8022A8D8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022A8DC: sh          $v0, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r2;
L_8022A8E0:
    // 0x8022A8E0: lhu         $v0, 0x44($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X44);
    // 0x8022A8E4: lhu         $v1, 0x48($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X48);
    // 0x8022A8E8: lhu         $a1, 0x66($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X66);
    // 0x8022A8EC: lhu         $a0, 0xC0($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XC0);
    // 0x8022A8F0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A8F4: sra         $v0, $v0, 17
    ctx->r2 = S32(SIGNED(ctx->r2) >> 17);
    // 0x8022A8F8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022A8FC: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A900: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022A904: sra         $v1, $v1, 17
    ctx->r3 = S32(SIGNED(ctx->r3) >> 17);
    // 0x8022A908: sh          $v1, 0x48($s0)
    MEM_H(0X48, ctx->r16) = ctx->r3;
    // 0x8022A90C: lhu         $v1, 0x66($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X66);
    // 0x8022A910: sh          $zero, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = 0;
    // 0x8022A914: sh          $zero, 0x50($s0)
    MEM_H(0X50, ctx->r16) = 0;
    // 0x8022A918: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x8022A91C: sh          $a0, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r4;
    // 0x8022A920: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022A924: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A928: addiu       $v1, $v1, -0x20
    ctx->r3 = ADD32(ctx->r3, -0X20);
    // 0x8022A92C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022A930: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
L_8022A934:
    // 0x8022A934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A938: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A93C: jr          $ra
    // 0x8022A940: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A940: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023258C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023258C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232590: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232594: jal         0x8004F62C
    // 0x80232598: nop

    func_8004F62C_2AA2C(rdram, ctx);
        goto after_0;
    // 0x80232598: nop

    after_0:
    // 0x8023259C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802325A0: jr          $ra
    // 0x802325A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802325A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AF5C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AF5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AF60: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022AF64: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022AF68: bne         $v0, $zero, L_8022AF80
    if (ctx->r2 != 0) {
        // 0x8022AF6C: nop
    
            goto L_8022AF80;
    }
    // 0x8022AF6C: nop

    // 0x8022AF70: jal         0x8022AF94
    // 0x8022AF74: nop

    func_8022AF94_ovl16(rdram, ctx);
        goto after_0;
    // 0x8022AF74: nop

    after_0:
    // 0x8022AF78: j           L_8022AF88
    // 0x8022AF7C: nop

        goto L_8022AF88;
    // 0x8022AF7C: nop

L_8022AF80:
    // 0x8022AF80: jal         0x8022AFC8
    // 0x8022AF84: nop

    func_8022AFC8_ovl16(rdram, ctx);
        goto after_1;
    // 0x8022AF84: nop

    after_1:
L_8022AF88:
    // 0x8022AF88: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022AF8C: jr          $ra
    // 0x8022AF90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022AF90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229BE8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229BE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229BEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229BF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229BF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229BF8: jal         0x80040F30
    // 0x80229BFC: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    func_80040F30_1C330(rdram, ctx);
        goto after_0;
    // 0x80229BFC: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    after_0:
    // 0x80229C00: andi        $v0, $v0, 0xF00
    ctx->r2 = ctx->r2 & 0XF00;
    // 0x80229C04: beq         $v0, $zero, L_80229C18
    if (ctx->r2 == 0) {
        // 0x80229C08: nop
    
            goto L_80229C18;
    }
    // 0x80229C08: nop

    // 0x80229C0C: lw          $v0, 0x35C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X35C);
    // 0x80229C10: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80229C14: sw          $v0, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = ctx->r2;
L_80229C18:
    // 0x80229C18: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x80229C1C: bne         $v0, $zero, L_80229C30
    if (ctx->r2 != 0) {
        // 0x80229C20: nop
    
            goto L_80229C30;
    }
    // 0x80229C20: nop

    // 0x80229C24: lw          $v0, 0x35C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X35C);
    // 0x80229C28: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229C2C: sw          $v0, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = ctx->r2;
L_80229C30:
    // 0x80229C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80229C34: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229C38: jr          $ra
    // 0x80229C3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80229C3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231C60_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231C60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80231C64: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231C68: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80231C6C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80231C70: addiu       $s3, $s1, 0x28
    ctx->r19 = ADD32(ctx->r17, 0X28);
    // 0x80231C74: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80231C78: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x80231C7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80231C80: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80231C84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231C88: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80231C8C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
    // 0x80231C90: sb          $zero, 0xA($s1)
    MEM_B(0XA, ctx->r17) = 0;
    // 0x80231C94: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x80231C98: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
    // 0x80231C9C: sb          $zero, 0xE($s1)
    MEM_B(0XE, ctx->r17) = 0;
    // 0x80231CA0: sb          $zero, 0xF($s1)
    MEM_B(0XF, ctx->r17) = 0;
L_80231CA4:
    // 0x80231CA4: jal         0x800A3450
    // 0x80231CA8: andi        $s0, $s2, 0xFF
    ctx->r16 = ctx->r18 & 0XFF;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80231CA8: andi        $s0, $s2, 0xFF
    ctx->r16 = ctx->r18 & 0XFF;
    after_0:
    // 0x80231CAC: sll         $s0, $s0, 3
    ctx->r16 = S32(ctx->r16 << 3);
    // 0x80231CB0: addu        $s0, $s0, $s3
    ctx->r16 = ADD32(ctx->r16, ctx->r19);
    // 0x80231CB4: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80231CB8: jal         0x800A3450
    // 0x80231CBC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80231CBC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x80231CC0: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80231CC4: jal         0x800A3450
    // 0x80231CC8: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80231CC8: sb          $v0, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r2;
    after_2:
    // 0x80231CCC: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80231CD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231CD4: jal         0x800A3450
    // 0x80231CD8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80231CD8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    after_3:
    // 0x80231CDC: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x80231CE0: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80231CE4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80231CE8: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80231CEC: lbu         $v1, 0x4A61($at)
    ctx->r3 = MEM_BU(ctx->r1, 0X4A61);
    // 0x80231CF0: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80231CF4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231CF8: sb          $v1, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r3;
    // 0x80231CFC: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80231D00: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80231D04: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80231D08: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231D0C: lhu         $v0, 0x4A62($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X4A62);
    // 0x80231D10: jal         0x800A3450
    // 0x80231D14: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80231D14: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    after_4:
    // 0x80231D18: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x80231D1C: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80231D20: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80231D24: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80231D28: lhu         $v1, 0x4A64($at)
    ctx->r3 = MEM_HU(ctx->r1, 0X4A64);
    // 0x80231D2C: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80231D30: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80231D34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231D38: andi        $v0, $s2, 0xFF
    ctx->r2 = ctx->r18 & 0XFF;
    // 0x80231D3C: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x80231D40: bne         $v0, $zero, L_80231CA4
    if (ctx->r2 != 0) {
        // 0x80231D44: sh          $v1, 0x6($s0)
        MEM_H(0X6, ctx->r16) = ctx->r3;
            goto L_80231CA4;
    }
    // 0x80231D44: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x80231D48: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80231D4C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80231D50: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80231D54: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231D58: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231D5C: jr          $ra
    // 0x80231D60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80231D60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022F960_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F960: lhu         $v0, 0x34($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X34);
    // 0x8022F964: addiu       $v0, $v0, -0x50
    ctx->r2 = ADD32(ctx->r2, -0X50);
    // 0x8022F968: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F96C: sh          $v0, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r2;
    // 0x8022F970: slti        $v0, $v0, 0xC01
    ctx->r2 = SIGNED(ctx->r2) < 0XC01 ? 1 : 0;
    // 0x8022F974: beq         $v0, $zero, L_8022F988
    if (ctx->r2 == 0) {
        // 0x8022F978: addiu       $v0, $zero, 0xC00
        ctx->r2 = ADD32(0, 0XC00);
            goto L_8022F988;
    }
    // 0x8022F978: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x8022F97C: sh          $v0, 0x34($a0)
    MEM_H(0X34, ctx->r4) = ctx->r2;
    // 0x8022F980: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F984: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8022F988:
    // 0x8022F988: jr          $ra
    // 0x8022F98C: nop

    TRACE_RETURN()
    return;
    // 0x8022F98C: nop

;}
RECOMP_FUNC void func_80226D44_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D44: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226D48: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226D4C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80226D50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226D54: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226D58: jal         0x8004EFE4
    // 0x80226D5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_0;
    // 0x80226D5C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80226D60: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80226D64: beq         $s1, $zero, L_80226E18
    if (ctx->r17 == 0) {
        // 0x80226D68: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_80226E18;
    }
    // 0x80226D68: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80226D6C: addiu       $a1, $zero, 0x6E
    ctx->r5 = ADD32(0, 0X6E);
    // 0x80226D70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226D74: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226D78: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80226D7C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80226D80: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80226D84: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80226D88: jal         0x8004DA90
    // 0x80226D8C: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80226D8C: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    after_1:
    // 0x80226D90: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80226D94: lhu         $v0, 0x16($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X16);
    // 0x80226D98: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x80226D9C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80226DA0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80226DA4: addiu       $v0, $v0, -0x3C
    ctx->r2 = ADD32(ctx->r2, -0X3C);
    // 0x80226DA8: jal         0x8009A3B4
    // 0x80226DAC: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80226DAC: sh          $v0, 0x16($s2)
    MEM_H(0X16, ctx->r18) = ctx->r2;
    after_2:
    // 0x80226DB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226DB4: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x80226DB8: lh          $v1, 0x16($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X16);
    // 0x80226DBC: lh          $a2, 0x18($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X18);
    // 0x80226DC0: addiu       $a1, $s2, 0x2C
    ctx->r5 = ADD32(ctx->r18, 0X2C);
    // 0x80226DC4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226DC8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80226DCC: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x80226DD0: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80226DD4: sw          $v1, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r3;
    // 0x80226DD8: sw          $a2, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r6;
    // 0x80226DDC: lhu         $v1, 0x56($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X56);
    // 0x80226DE0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80226DE4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80226DE8: sw          $v0, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = ctx->r2;
    // 0x80226DEC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80226DF0: sw          $v0, 0xA0($s1)
    MEM_W(0XA0, ctx->r17) = ctx->r2;
    // 0x80226DF4: jal         0x8009A3B4
    // 0x80226DF8: sh          $v1, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80226DF8: sh          $v1, 0x64($s1)
    MEM_H(0X64, ctx->r17) = ctx->r3;
    after_3:
    // 0x80226DFC: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x80226E00: addiu       $a1, $s2, 0x34
    ctx->r5 = ADD32(ctx->r18, 0X34);
    // 0x80226E04: jal         0x8009A3B4
    // 0x80226E08: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80226E08: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x80226E0C: addiu       $a0, $zero, 0xB2
    ctx->r4 = ADD32(0, 0XB2);
    // 0x80226E10: jal         0x8002A33C
    // 0x80226E14: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x80226E14: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
L_80226E18:
    // 0x80226E18: sltu        $v0, $zero, $s1
    ctx->r2 = 0 < ctx->r17 ? 1 : 0;
    // 0x80226E1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226E20: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226E24: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226E28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226E2C: jr          $ra
    // 0x80226E30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80226E30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80226E34: nop

    // 0x80226E38: nop

    // 0x80226E3C: nop

;}
RECOMP_FUNC void func_80228B24_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228B24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80228B28: addiu       $a2, $a0, 0x348
    ctx->r6 = ADD32(ctx->r4, 0X348);
    // 0x80228B2C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228B30: lb          $v1, 0xA7($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA7);
    // 0x80228B34: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228B38: bne         $v1, $v0, L_80228BAC
    if (ctx->r3 != ctx->r2) {
        // 0x80228B3C: addiu       $a1, $a0, 0xC4
        ctx->r5 = ADD32(ctx->r4, 0XC4);
            goto L_80228BAC;
    }
    // 0x80228B3C: addiu       $a1, $a0, 0xC4
    ctx->r5 = ADD32(ctx->r4, 0XC4);
    // 0x80228B40: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80228B44: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x80228B48: sb          $v1, 0x386($a0)
    MEM_B(0X386, ctx->r4) = ctx->r3;
    // 0x80228B4C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80228B50: beq         $v0, $v1, L_80228B64
    if (ctx->r2 == ctx->r3) {
        // 0x80228B54: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80228B64;
    }
    // 0x80228B54: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228B58: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x80228B5C: j           L_80228B70
    // 0x80228B60: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_80228B70;
    // 0x80228B60: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80228B64:
    // 0x80228B64: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80228B68: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80228B6C: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
L_80228B70:
    // 0x80228B70: lbu         $v0, 0x6($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X6);
    // 0x80228B74: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80228B78: beq         $v0, $zero, L_80228B94
    if (ctx->r2 == 0) {
        // 0x80228B7C: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80228B94;
    }
    // 0x80228B7C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80228B80: lbu         $v0, 0x6($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X6);
    // 0x80228B84: sb          $zero, 0x7($a1)
    MEM_B(0X7, ctx->r5) = 0;
    // 0x80228B88: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x80228B8C: sb          $v0, 0x6($a1)
    MEM_B(0X6, ctx->r5) = ctx->r2;
    // 0x80228B90: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_80228B94:
    // 0x80228B94: sh          $v0, 0x3A($a2)
    MEM_H(0X3A, ctx->r6) = ctx->r2;
    // 0x80228B98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228B9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80228BA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228BA4: jal         0x80050294
    // 0x80228BA8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228BA8: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    after_0:
L_80228BAC:
    // 0x80228BAC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80228BB0: jr          $ra
    // 0x80228BB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80228BB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F72C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F72C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F730: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022F734: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F738: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022F73C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F740: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022F744: sh          $zero, 0x30($s0)
    MEM_H(0X30, ctx->r16) = 0;
    // 0x8022F748: sh          $zero, 0x32($s0)
    MEM_H(0X32, ctx->r16) = 0;
    // 0x8022F74C: sh          $zero, 0x34($s0)
    MEM_H(0X34, ctx->r16) = 0;
    // 0x8022F750: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022F754: jal         0x8004D5D4
    // 0x8022F758: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022F758: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022F75C: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x8022F760: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022F764: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022F768: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F76C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022F770: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8022F774: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022F778: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x8022F77C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022F780: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x8022F784: bne         $a0, $zero, L_8022F7C0
    if (ctx->r4 != 0) {
        // 0x8022F788: sb          $v0, 0xE($s0)
        MEM_B(0XE, ctx->r16) = ctx->r2;
            goto L_8022F7C0;
    }
    // 0x8022F788: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x8022F78C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8022F790: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022F794: addiu       $v0, $zero, -0x900
    ctx->r2 = ADD32(0, -0X900);
    // 0x8022F798: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8022F79C: addiu       $v0, $zero, -0x12B
    ctx->r2 = ADD32(0, -0X12B);
    // 0x8022F7A0: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8022F7A4: addiu       $v0, $zero, -0x2300
    ctx->r2 = ADD32(0, -0X2300);
    // 0x8022F7A8: jal         0x8003E768
    // 0x8022F7AC: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_8003E768_19B68(rdram, ctx);
        goto after_1;
    // 0x8022F7AC: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022F7B0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022F7B4: lui         $a1, 0x6
    ctx->r5 = S32(0X6 << 16);
    // 0x8022F7B8: j           L_8022F7F0
    // 0x8022F7BC: ori         $a1, $a1, 0x1302
    ctx->r5 = ctx->r5 | 0X1302;
        goto L_8022F7F0;
    // 0x8022F7BC: ori         $a1, $a1, 0x1302
    ctx->r5 = ctx->r5 | 0X1302;
L_8022F7C0:
    // 0x8022F7C0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x8022F7C4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022F7C8: addiu       $v0, $zero, -0x1700
    ctx->r2 = ADD32(0, -0X1700);
    // 0x8022F7CC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8022F7D0: addiu       $v0, $zero, -0x2AB
    ctx->r2 = ADD32(0, -0X2AB);
    // 0x8022F7D4: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8022F7D8: addiu       $v0, $zero, -0x2300
    ctx->r2 = ADD32(0, -0X2300);
    // 0x8022F7DC: jal         0x8003E768
    // 0x8022F7E0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_8003E768_19B68(rdram, ctx);
        goto after_2;
    // 0x8022F7E0: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022F7E4: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022F7E8: lui         $a1, 0x6
    ctx->r5 = S32(0X6 << 16);
    // 0x8022F7EC: ori         $a1, $a1, 0x1402
    ctx->r5 = ctx->r5 | 0X1402;
L_8022F7F0:
    // 0x8022F7F0: jal         0x80071ACC
    // 0x8022F7F4: nop

    func_80071ACC_4CECC(rdram, ctx);
        goto after_3;
    // 0x8022F7F4: nop

    after_3:
    // 0x8022F7F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F7FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022F800: jr          $ra
    // 0x8022F804: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F804: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022F68C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F68C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F690: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F694: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022F698: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F69C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022F6A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F6A4: lw          $v0, 0x4478($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4478);
    // 0x8022F6A8: jalr        $v0
    // 0x8022F6AC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F6AC: nop

    after_0:
    // 0x8022F6B0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F6B4: jr          $ra
    // 0x8022F6B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F6B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C298_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C298: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8022C29C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022C2A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C2A4: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x8022C2A8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022C2AC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022C2B0: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022C2B4: jal         0x8009A3B4
    // 0x8022C2B8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022C2B8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022C2BC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022C2C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022C2C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022C2C8: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022C2CC: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022C2D0: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022C2D4: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022C2D8: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022C2DC: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8022C2E0: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8022C2E4: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022C2E8: jal         0x8004D5D4
    // 0x8022C2EC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022C2EC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022C2F0: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x8022C2F4: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x8022C2F8: jal         0x80031600
    // 0x8022C2FC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_2;
    // 0x8022C2FC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8022C300: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C304: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022C308: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022C30C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022C310: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022C314: jal         0x80031DA8
    // 0x8022C318: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x8022C318: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022C31C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C320: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022C324: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C328: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x8022C32C: lw          $a0, -0x14F0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X14F0);
    // 0x8022C330: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8022C334: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022C338: sw          $v1, 0xB4($s0)
    MEM_W(0XB4, ctx->r16) = ctx->r3;
    // 0x8022C33C: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x8022C340: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C344: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022C348: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022C34C: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8022C350: sb          $v0, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r2;
    // 0x8022C354: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C358: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022C35C: lw          $v1, -0x14F0($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X14F0);
    // 0x8022C360: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C364: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C368: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022C36C: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x8022C370: sw          $zero, 0xD8($s0)
    MEM_W(0XD8, ctx->r16) = 0;
    // 0x8022C374: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x8022C378: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x8022C37C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022C380: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022C384: jr          $ra
    // 0x8022C388: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8022C388: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8022601C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022601C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80226020: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80226024: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80226028: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022602C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80226030: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80226034: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x80226038: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x8022603C: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80226040: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226044: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x80226048: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x8022604C: beq         $v1, $v0, L_80226068
    if (ctx->r3 == ctx->r2) {
        // 0x80226050: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80226068;
    }
    // 0x80226050: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80226054: bne         $v1, $v0, L_80226064
    if (ctx->r3 != ctx->r2) {
        // 0x80226058: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80226064;
    }
    // 0x80226058: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x8022605C: j           L_80226068
    // 0x80226060: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
        goto L_80226068;
    // 0x80226060: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
L_80226064:
    // 0x80226064: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80226068:
    // 0x80226068: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8022606C: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80226070: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80226074: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226078: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8022607C: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x80226080: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x80226084: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226088: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022608C: beq         $a0, $v1, L_802260B4
    if (ctx->r4 == ctx->r3) {
        // 0x80226090: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_802260B4;
    }
    // 0x80226090: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x80226094: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80226098: jal         0x8003B85C
    // 0x8022609C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8022609C: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_0:
    // 0x802260A0: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x802260A4: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x802260A8: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x802260AC: jal         0x8003B840
    // 0x802260B0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x802260B0: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_802260B4:
    // 0x802260B4: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x802260B8: lh          $a0, 0xA($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XA);
    // 0x802260BC: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802260C0: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x802260C4: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x802260C8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802260CC: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x802260D0: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x802260D4: beq         $v1, $v0, L_802260F0
    if (ctx->r3 == ctx->r2) {
        // 0x802260D8: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_802260F0;
    }
    // 0x802260D8: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x802260DC: bne         $v1, $v0, L_802260EC
    if (ctx->r3 != ctx->r2) {
        // 0x802260E0: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_802260EC;
    }
    // 0x802260E0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802260E4: j           L_802260F0
    // 0x802260E8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_802260F0;
    // 0x802260E8: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_802260EC:
    // 0x802260EC: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_802260F0:
    // 0x802260F0: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x802260F4: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x802260F8: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802260FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226100: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80226104: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x80226108: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022610C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80226110: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80226114: beq         $a0, $v1, L_8022613C
    if (ctx->r4 == ctx->r3) {
        // 0x80226118: addiu       $a1, $zero, 0x2A
        ctx->r5 = ADD32(0, 0X2A);
            goto L_8022613C;
    }
    // 0x80226118: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8022611C: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x80226120: jal         0x8003B85C
    // 0x80226124: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80226124: addiu       $a3, $zero, 0x6
    ctx->r7 = ADD32(0, 0X6);
    after_2:
    // 0x80226128: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x8022612C: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x80226130: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80226134: jal         0x8003B840
    // 0x80226138: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80226138: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_8022613C:
    // 0x8022613C: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x80226140: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80226144: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80226148: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8022614C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80226150: jr          $ra
    // 0x80226154: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80226154: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80226158: nop

    // 0x8022615C: nop

;}
RECOMP_FUNC void func_80225C64_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225C64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225C68: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225C6C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225C70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225C74: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225C78: bne         $v0, $zero, L_80225C98
    if (ctx->r2 != 0) {
        // 0x80225C7C: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80225C98;
    }
    // 0x80225C7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80225C80: jal         0x80050294
    // 0x80225C84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80225C84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80225C88: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225C8C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80225C90: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225C94: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80225C98:
    // 0x80225C98: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80225C9C: bne         $v0, $zero, L_80225CB4
    if (ctx->r2 != 0) {
        // 0x80225CA0: nop
    
            goto L_80225CB4;
    }
    // 0x80225CA0: nop

    // 0x80225CA4: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80225CA8: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80225CAC: j           L_80225CC0
    // 0x80225CB0: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
        goto L_80225CC0;
    // 0x80225CB0: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
L_80225CB4:
    // 0x80225CB4: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80225CB8: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
    // 0x80225CBC: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
L_80225CC0:
    // 0x80225CC0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80225CC4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80225CC8: jal         0x8009A3B4
    // 0x80225CCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80225CCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80225CD0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80225CD4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80225CD8: jal         0x8009A3B4
    // 0x80225CDC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80225CDC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80225CE0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80225CE4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80225CE8: jal         0x8009A3B4
    // 0x80225CEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80225CEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80225CF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225CF4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225CF8: jr          $ra
    // 0x80225CFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225CFC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230090_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230090: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230094: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230098: jal         0x8004F684
    // 0x8023009C: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x8023009C: nop

    after_0:
    // 0x802300A0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802300A4: jr          $ra
    // 0x802300A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802300A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802300AC: nop

;}
RECOMP_FUNC void func_8022DDB0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DDB0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022DDB4: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8022DDB8: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x8022DDBC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8022DDC0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8022DDC4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8022DDC8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8022DDCC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8022DDD0: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8022DDD4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022DDD8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022DDDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022DDE0: lw          $s7, 0x18($fp)
    ctx->r23 = MEM_W(ctx->r30, 0X18);
    // 0x8022DDE4: lw          $s4, 0x8($s7)
    ctx->r20 = MEM_W(ctx->r23, 0X8);
    // 0x8022DDE8: addu        $s6, $zero, $zero
    ctx->r22 = ADD32(0, 0);
    // 0x8022DDEC: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x8022DDF0: addiu       $s3, $s3, 0x4C60
    ctx->r19 = ADD32(ctx->r19, 0X4C60);
    // 0x8022DDF4: lb          $v1, 0x0($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X0);
    // 0x8022DDF8: addiu       $a3, $fp, 0x14
    ctx->r7 = ADD32(ctx->r30, 0X14);
    // 0x8022DDFC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022DE00: beq         $v1, $v0, L_8022E10C
    if (ctx->r3 == ctx->r2) {
        // 0x8022DE04: sw          $a3, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r7;
            goto L_8022E10C;
    }
    // 0x8022DE04: sw          $a3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r7;
    // 0x8022DE08: addiu       $s2, $s4, 0x10
    ctx->r18 = ADD32(ctx->r20, 0X10);
    // 0x8022DE0C: addiu       $s5, $s4, 0xC
    ctx->r21 = ADD32(ctx->r20, 0XC);
L_8022DE10:
    // 0x8022DE10: jal         0x8006033C
    // 0x8022DE14: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022DE14: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    after_0:
    // 0x8022DE18: bnel        $v0, $zero, L_8022E0F4
    if (ctx->r2 != 0) {
        // 0x8022DE1C: addiu       $s2, $s2, 0x18
        ctx->r18 = ADD32(ctx->r18, 0X18);
            goto L_8022E0F4;
    }
    goto skip_0;
    // 0x8022DE1C: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
    skip_0:
    // 0x8022DE20: lbu         $v1, -0xF($s2)
    ctx->r3 = MEM_BU(ctx->r18, -0XF);
    // 0x8022DE24: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022DE28: beq         $v1, $v0, L_8022DF20
    if (ctx->r3 == ctx->r2) {
        // 0x8022DE2C: slti        $v0, $v1, 0x41
        ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
            goto L_8022DF20;
    }
    // 0x8022DE2C: slti        $v0, $v1, 0x41
    ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
    // 0x8022DE30: beq         $v0, $zero, L_8022DE48
    if (ctx->r2 == 0) {
        // 0x8022DE34: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_8022DE48;
    }
    // 0x8022DE34: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022DE38: beq         $v1, $v0, L_8022DE64
    if (ctx->r3 == ctx->r2) {
        // 0x8022DE3C: nop
    
            goto L_8022DE64;
    }
    // 0x8022DE3C: nop

    // 0x8022DE40: j           L_8022E0F4
    // 0x8022DE44: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
        goto L_8022E0F4;
    // 0x8022DE44: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
L_8022DE48:
    // 0x8022DE48: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8022DE4C: beq         $v1, $v0, L_8022DFDC
    if (ctx->r3 == ctx->r2) {
        // 0x8022DE50: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_8022DFDC;
    }
    // 0x8022DE50: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8022DE54: beq         $v1, $v0, L_8022E088
    if (ctx->r3 == ctx->r2) {
        // 0x8022DE58: nop
    
            goto L_8022E088;
    }
    // 0x8022DE58: nop

    // 0x8022DE5C: j           L_8022E0F4
    // 0x8022DE60: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
        goto L_8022E0F4;
    // 0x8022DE60: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
L_8022DE64:
    // 0x8022DE64: jal         0x8004EEAC
    // 0x8022DE68: nop

    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_1;
    // 0x8022DE68: nop

    after_1:
    // 0x8022DE6C: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022DE70: beq         $s1, $zero, L_8022E0F0
    if (ctx->r17 == 0) {
        // 0x8022DE74: addiu       $s0, $s1, 0x2C
        ctx->r16 = ADD32(ctx->r17, 0X2C);
            goto L_8022E0F0;
    }
    // 0x8022DE74: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x8022DE78: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022DE7C: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022DE80: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x8022DE84: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8022DE88: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x8022DE8C: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8022DE90: lbu         $v0, -0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XC);
    // 0x8022DE94: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x8022DE98: lbu         $v0, -0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XB);
    // 0x8022DE9C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x8022DEA0: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x8022DEA4: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x8022DEA8: lh          $v0, -0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X4);
    // 0x8022DEAC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DEB0: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x8022DEB4: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022DEB8: lh          $v0, -0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X2);
    // 0x8022DEBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DEC0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DEC4: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x8022DEC8: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022DECC: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x8022DED0: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8022DED4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022DED8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DEDC: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x8022DEE0: jal         0x8009A3B4
    // 0x8022DEE4: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022DEE4: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    after_2:
    // 0x8022DEE8: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022DEEC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022DEF0: jal         0x8009A3B4
    // 0x8022DEF4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022DEF4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x8022DEF8: sh          $zero, 0x5C($s1)
    MEM_H(0X5C, ctx->r17) = 0;
    // 0x8022DEFC: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x8022DF00: lbu         $v0, -0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X9);
    // 0x8022DF04: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022DF08: sh          $zero, 0x60($s1)
    MEM_H(0X60, ctx->r17) = 0;
    // 0x8022DF0C: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x8022DF10: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022DF14: sh          $v0, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r2;
    // 0x8022DF18: j           L_8022E0E4
    // 0x8022DF1C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_8022E0E4;
    // 0x8022DF1C: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_8022DF20:
    // 0x8022DF20: jal         0x8004EF48
    // 0x8022DF24: nop

    func_8004EF48_2A348(rdram, ctx);
        goto after_4;
    // 0x8022DF24: nop

    after_4:
    // 0x8022DF28: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022DF2C: beq         $s1, $zero, L_8022E0F0
    if (ctx->r17 == 0) {
        // 0x8022DF30: addiu       $s0, $s1, 0x2C
        ctx->r16 = ADD32(ctx->r17, 0X2C);
            goto L_8022E0F0;
    }
    // 0x8022DF30: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x8022DF34: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022DF38: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022DF3C: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x8022DF40: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8022DF44: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x8022DF48: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8022DF4C: lbu         $v0, -0xC($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XC);
    // 0x8022DF50: sb          $v0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r2;
    // 0x8022DF54: lbu         $v0, -0xB($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XB);
    // 0x8022DF58: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
    // 0x8022DF5C: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x8022DF60: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x8022DF64: lh          $v0, -0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X4);
    // 0x8022DF68: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DF6C: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x8022DF70: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022DF74: lh          $v0, -0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X2);
    // 0x8022DF78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022DF7C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DF80: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x8022DF84: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022DF88: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x8022DF8C: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8022DF90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022DF94: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DF98: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x8022DF9C: jal         0x8009A3B4
    // 0x8022DFA0: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022DFA0: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    after_5:
    // 0x8022DFA4: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022DFA8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022DFAC: jal         0x8009A3B4
    // 0x8022DFB0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022DFB0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x8022DFB4: sh          $zero, 0x5C($s1)
    MEM_H(0X5C, ctx->r17) = 0;
    // 0x8022DFB8: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x8022DFBC: lbu         $v0, -0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X9);
    // 0x8022DFC0: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022DFC4: sh          $zero, 0x60($s1)
    MEM_H(0X60, ctx->r17) = 0;
    // 0x8022DFC8: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x8022DFCC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022DFD0: sh          $v0, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r2;
    // 0x8022DFD4: j           L_8022E0E4
    // 0x8022DFD8: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_8022E0E4;
    // 0x8022DFD8: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_8022DFDC:
    // 0x8022DFDC: jal         0x8004EFE4
    // 0x8022DFE0: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_7;
    // 0x8022DFE0: nop

    after_7:
    // 0x8022DFE4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022DFE8: beq         $s1, $zero, L_8022E0F0
    if (ctx->r17 == 0) {
        // 0x8022DFEC: addiu       $s0, $s1, 0x2C
        ctx->r16 = ADD32(ctx->r17, 0X2C);
            goto L_8022E0F0;
    }
    // 0x8022DFEC: addiu       $s0, $s1, 0x2C
    ctx->r16 = ADD32(ctx->r17, 0X2C);
    // 0x8022DFF0: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022DFF4: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x8022DFF8: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x8022DFFC: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x8022E000: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x8022E004: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8022E008: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x8022E00C: sw          $v0, 0xC($s1)
    MEM_W(0XC, ctx->r17) = ctx->r2;
    // 0x8022E010: lh          $v0, -0x4($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X4);
    // 0x8022E014: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E018: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x8022E01C: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x8022E020: lh          $v0, -0x2($s2)
    ctx->r2 = MEM_H(ctx->r18, -0X2);
    // 0x8022E024: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E028: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E02C: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
    // 0x8022E030: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022E034: lh          $v0, 0x0($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X0);
    // 0x8022E038: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8022E03C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E040: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022E044: sw          $v0, 0x3C($s1)
    MEM_W(0X3C, ctx->r17) = ctx->r2;
    // 0x8022E048: jal         0x8009A3B4
    // 0x8022E04C: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022E04C: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    after_8:
    // 0x8022E050: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022E054: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022E058: jal         0x8009A3B4
    // 0x8022E05C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8022E05C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x8022E060: sh          $zero, 0x5C($s1)
    MEM_H(0X5C, ctx->r17) = 0;
    // 0x8022E064: sh          $zero, 0x54($s1)
    MEM_H(0X54, ctx->r17) = 0;
    // 0x8022E068: lbu         $v0, -0x9($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X9);
    // 0x8022E06C: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022E070: sh          $zero, 0x60($s1)
    MEM_H(0X60, ctx->r17) = 0;
    // 0x8022E074: sh          $zero, 0x58($s1)
    MEM_H(0X58, ctx->r17) = 0;
    // 0x8022E078: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x8022E07C: sh          $v0, 0x5E($s1)
    MEM_H(0X5E, ctx->r17) = ctx->r2;
    // 0x8022E080: j           L_8022E0E4
    // 0x8022E084: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
        goto L_8022E0E4;
    // 0x8022E084: sh          $v0, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r2;
L_8022E088:
    // 0x8022E088: jal         0x8004F2C4
    // 0x8022E08C: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_10;
    // 0x8022E08C: nop

    after_10:
    // 0x8022E090: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022E094: beq         $s0, $zero, L_8022E0F0
    if (ctx->r16 == 0) {
        // 0x8022E098: addiu       $a0, $s0, 0x38
        ctx->r4 = ADD32(ctx->r16, 0X38);
            goto L_8022E0F0;
    }
    // 0x8022E098: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8022E09C: lbu         $v0, 0x0($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X0);
    // 0x8022E0A0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022E0A4: lbu         $v0, -0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XE);
    // 0x8022E0A8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022E0AC: lbu         $v0, -0xD($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0XD);
    // 0x8022E0B0: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022E0B4: lw          $v0, -0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, -0X8);
    // 0x8022E0B8: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8022E0BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E0C0: jal         0x8009A3B4
    // 0x8022E0C4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x8022E0C4: sw          $v0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r2;
    after_11:
    // 0x8022E0C8: lhu         $v0, -0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, -0X4);
    // 0x8022E0CC: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022E0D0: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x8022E0D4: lhu         $v0, -0x2($s2)
    ctx->r2 = MEM_HU(ctx->r18, -0X2);
    // 0x8022E0D8: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x8022E0DC: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022E0E0: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
L_8022E0E4:
    // 0x8022E0E4: sb          $v1, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r3;
    // 0x8022E0E8: sb          $s6, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r22;
    // 0x8022E0EC: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
L_8022E0F0:
    // 0x8022E0F0: addiu       $s2, $s2, 0x18
    ctx->r18 = ADD32(ctx->r18, 0X18);
L_8022E0F4:
    // 0x8022E0F4: addiu       $s5, $s5, 0x18
    ctx->r21 = ADD32(ctx->r21, 0X18);
    // 0x8022E0F8: addiu       $s4, $s4, 0x18
    ctx->r20 = ADD32(ctx->r20, 0X18);
    // 0x8022E0FC: lb          $v1, 0x0($s4)
    ctx->r3 = MEM_B(ctx->r20, 0X0);
    // 0x8022E100: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022E104: bne         $v1, $v0, L_8022DE10
    if (ctx->r3 != ctx->r2) {
        // 0x8022E108: addiu       $s6, $s6, 0x1
        ctx->r22 = ADD32(ctx->r22, 0X1);
            goto L_8022DE10;
    }
    // 0x8022E108: addiu       $s6, $s6, 0x1
    ctx->r22 = ADD32(ctx->r22, 0X1);
L_8022E10C:
    // 0x8022E10C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022E110: sb          $v0, 0x0($s3)
    MEM_B(0X0, ctx->r19) = ctx->r2;
    // 0x8022E114: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022E118: sb          $v0, 0x1($s3)
    MEM_B(0X1, ctx->r19) = ctx->r2;
    // 0x8022E11C: lhu         $v0, 0x2($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X2);
    // 0x8022E120: lw          $a3, 0x14($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X14);
    // 0x8022E124: sb          $v0, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r2;
    // 0x8022E128: lhu         $v0, 0x0($s7)
    ctx->r2 = MEM_HU(ctx->r23, 0X0);
    // 0x8022E12C: sb          $v0, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r2;
    // 0x8022E130: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E134: sb          $v0, 0x8($fp)
    MEM_B(0X8, ctx->r30) = ctx->r2;
    // 0x8022E138: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x8022E13C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8022E140: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8022E144: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8022E148: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8022E14C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8022E150: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8022E154: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022E158: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E15C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022E160: jr          $ra
    // 0x8022E164: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022E164: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8022E168: nop

    // 0x8022E16C: nop

;}
RECOMP_FUNC void func_80228BB8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228BB8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228BBC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80228BC0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228BC4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228BC8: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80228BCC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228BD0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80228BD4: jal         0x80050294
    // 0x80228BD8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228BD8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80228BDC: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x80228BE0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228BE4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80228BE8: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x80228BEC: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x80228BF0: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x80228BF4: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80228BF8: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80228BFC: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80228C00: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80228C04: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80228C08: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80228C0C: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80228C10: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80228C14: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x80228C18: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80228C1C: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x80228C20: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x80228C24: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x80228C28: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x80228C2C: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80228C30: bne         $v1, $zero, L_80228C6C
    if (ctx->r3 != 0) {
        // 0x80228C34: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_80228C6C;
    }
    // 0x80228C34: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80228C38: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x80228C3C: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x80228C40: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80228C44: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80228C48: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80228C4C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80228C50: beq         $v1, $v0, L_80228C6C
    if (ctx->r3 == ctx->r2) {
        // 0x80228C54: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80228C6C;
    }
    // 0x80228C54: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80228C58: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x80228C5C: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x80228C60: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x80228C64: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80228C68: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_80228C6C:
    // 0x80228C6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80228C70: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80228C74: jr          $ra
    // 0x80228C78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228C78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022FB60_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FB60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FB64: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022FB68: jal         0x8004F684
    // 0x8022FB6C: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x8022FB6C: nop

    after_0:
    // 0x8022FB70: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022FB74: jr          $ra
    // 0x8022FB78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FB78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D280_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D280: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D284: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D288: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D28C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D290: jal         0x8004EEAC
    // 0x8022D294: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004EEAC_2A2AC(rdram, ctx);
        goto after_0;
    // 0x8022D294: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022D298: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022D29C: beq         $s0, $zero, L_8022D2F0
    if (ctx->r16 == 0) {
        // 0x8022D2A0: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022D2F0;
    }
    // 0x8022D2A0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D2A4: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022D2A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D2AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D2B0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022D2B4: addiu       $v0, $zero, 0x3E
    ctx->r2 = ADD32(0, 0X3E);
    // 0x8022D2B8: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x8022D2BC: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x8022D2C0: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x8022D2C4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022D2C8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022D2CC: jal         0x8009A3B4
    // 0x8022D2D0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022D2D0: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    after_1:
    // 0x8022D2D4: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022D2D8: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022D2DC: jal         0x8009A3B4
    // 0x8022D2E0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022D2E0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x8022D2E4: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022D2E8: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x8022D2EC: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
L_8022D2F0:
    // 0x8022D2F0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D2F4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D2F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D2FC: jr          $ra
    // 0x8022D300: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D300: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229C40_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229C40: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80229C44: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80229C48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229C4C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80229C50: addiu       $s1, $s0, 0x360
    ctx->r17 = ADD32(ctx->r16, 0X360);
    // 0x80229C54: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229C58: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80229C5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80229C60: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80229C64: jal         0x8009A3B4
    // 0x80229C68: sw          $zero, 0x368($s0)
    MEM_W(0X368, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80229C68: sw          $zero, 0x368($s0)
    MEM_W(0X368, ctx->r16) = 0;
    after_0:
    // 0x80229C6C: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80229C70: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229C74: addiu       $v0, $s0, 0x368
    ctx->r2 = ADD32(ctx->r16, 0X368);
    // 0x80229C78: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x80229C7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229C80: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80229C84: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80229C88: lw          $v1, 0x370($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X370);
    // 0x80229C8C: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x80229C90: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80229C94: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80229C98: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80229C9C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80229CA0: jal         0x80051E18
    // 0x80229CA4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x80229CA4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x80229CA8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80229CAC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80229CB0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80229CB4: jr          $ra
    // 0x80229CB8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80229CB8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022F9B4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F9B4: jr          $ra
    // 0x8022F9B8: nop

    TRACE_RETURN()
    return;
    // 0x8022F9B8: nop

;}
RECOMP_FUNC void func_8023255C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023255C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232560: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232564: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x80232568: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023256C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80232570: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232574: lw          $v0, 0x4ADC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4ADC);
    // 0x80232578: jalr        $v0
    // 0x8023257C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023257C: nop

    after_0:
    // 0x80232580: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232584: jr          $ra
    // 0x80232588: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232588: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231290_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231290: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80231294: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80231298: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023129C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802312A0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802312A4: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x802312A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802312AC: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x802312B0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x802312B4: bne         $v0, $zero, L_802312E4
    if (ctx->r2 != 0) {
        // 0x802312B8: addiu       $s0, $s1, 0x18
        ctx->r16 = ADD32(ctx->r17, 0X18);
            goto L_802312E4;
    }
    // 0x802312B8: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x802312BC: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x802312C0: addiu       $a0, $zero, 0x186
    ctx->r4 = ADD32(0, 0X186);
    // 0x802312C4: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802312C8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802312CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802312D0: jal         0x8002A2F8
    // 0x802312D4: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_0;
    // 0x802312D4: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    after_0:
    // 0x802312D8: jal         0x80060590
    // 0x802312DC: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    func_80060590_3B990(rdram, ctx);
        goto after_1;
    // 0x802312DC: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    after_1:
    // 0x802312E0: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
L_802312E4:
    // 0x802312E4: jal         0x8002C678
    // 0x802312E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_2;
    // 0x802312E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802312EC: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x802312F0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802312F4: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x802312F8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802312FC: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80231300: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80231304: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80231308: jal         0x800319B4
    // 0x8023130C: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_3;
    // 0x8023130C: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    after_3:
    // 0x80231310: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231314: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231318: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023131C: jr          $ra
    // 0x80231320: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231320: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CE50_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CE50: jr          $ra
    // 0x8022CE54: nop

    TRACE_RETURN()
    return;
    // 0x8022CE54: nop

;}
RECOMP_FUNC void func_80225580_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225580: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225584: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225588: jal         0x8006033C
    // 0x8022558C: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8022558C: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_0:
    // 0x80225590: beq         $v0, $zero, L_802255A0
    if (ctx->r2 == 0) {
        // 0x80225594: nop
    
            goto L_802255A0;
    }
    // 0x80225594: nop

    // 0x80225598: jal         0x80060690
    // 0x8022559C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x8022559C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_802255A0:
    // 0x802255A0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802255A4: jr          $ra
    // 0x802255A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802255A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802255AC: nop

;}
RECOMP_FUNC void func_8022C5C0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C5C0: jr          $ra
    // 0x8022C5C4: nop

    TRACE_RETURN()
    return;
    // 0x8022C5C4: nop

;}
RECOMP_FUNC void func_8022B750_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B754: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B758: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022B75C: bne         $v0, $zero, L_8022B774
    if (ctx->r2 != 0) {
        // 0x8022B760: nop
    
            goto L_8022B774;
    }
    // 0x8022B760: nop

    // 0x8022B764: jal         0x8022B788
    // 0x8022B768: nop

    func_8022B788_ovl16(rdram, ctx);
        goto after_0;
    // 0x8022B768: nop

    after_0:
    // 0x8022B76C: j           L_8022B77C
    // 0x8022B770: nop

        goto L_8022B77C;
    // 0x8022B770: nop

L_8022B774:
    // 0x8022B774: jal         0x8022B838
    // 0x8022B778: nop

    func_8022B838_ovl16(rdram, ctx);
        goto after_1;
    // 0x8022B778: nop

    after_1:
L_8022B77C:
    // 0x8022B77C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022B780: jr          $ra
    // 0x8022B784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229050_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229050: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229054: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229058: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022905C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229060: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80229064: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80229068: jal         0x8004DA90
    // 0x8022906C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022906C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x80229070: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80229074: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x80229078: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022907C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80229080: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229084: bltz        $v0, L_802290C8
    if (SIGNED(ctx->r2) < 0) {
        // 0x80229088: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802290C8;
    }
    // 0x80229088: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022908C: lbu         $v1, 0x1DC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1DC);
    // 0x80229090: bne         $v1, $v0, L_802290BC
    if (ctx->r3 != ctx->r2) {
        // 0x80229094: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802290BC;
    }
    // 0x80229094: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229098: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022909C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x802290A0: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x802290A4: jal         0x8004F820
    // 0x802290A8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x802290A8: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_1:
    // 0x802290AC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802290B0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802290B4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802290B8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_802290BC:
    // 0x802290BC: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x802290C0: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x802290C4: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
L_802290C8:
    // 0x802290C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802290CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802290D0: jr          $ra
    // 0x802290D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802290D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022CBBC_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CBBC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022CBC0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8022CBC4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CBC8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022CBCC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022CBD0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CBD4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022CBD8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CBDC: lw          $v0, 0x42FC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X42FC);
    // 0x8022CBE0: jalr        $v0
    // 0x8022CBE4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022CBE4: nop

    after_0:
    // 0x8022CBE8: addiu       $a0, $s0, 0x54
    ctx->r4 = ADD32(ctx->r16, 0X54);
    // 0x8022CBEC: addiu       $s0, $s0, 0x8C
    ctx->r16 = ADD32(ctx->r16, 0X8C);
    // 0x8022CBF0: jal         0x80031600
    // 0x8022CBF4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_1;
    // 0x8022CBF4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022CBF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CBFC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022CC00: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022CC04: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022CC08: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022CC0C: jal         0x80031DA8
    // 0x8022CC10: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_2;
    // 0x8022CC10: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022CC14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022CC18: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8022CC1C: jr          $ra
    // 0x8022CC20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022CC20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802285C0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802285C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802285C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802285C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802285CC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802285D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802285D4: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x802285D8: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802285DC: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x802285E0: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x802285E4: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x802285E8: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x802285EC: addiu       $a3, $a3, 0x49CC
    ctx->r7 = ADD32(ctx->r7, 0X49CC);
    // 0x802285F0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802285F4: jal         0x8004FAEC
    // 0x802285F8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_0;
    // 0x802285F8: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x802285FC: beq         $v0, $zero, L_80228610
    if (ctx->r2 == 0) {
        // 0x80228600: nop
    
            goto L_80228610;
    }
    // 0x80228600: nop

    // 0x80228604: lbu         $v0, 0x1DE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1DE);
    // 0x80228608: bne         $v0, $zero, L_8022868C
    if (ctx->r2 != 0) {
        // 0x8022860C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022868C;
    }
    // 0x8022860C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_80228610:
    // 0x80228610: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80228614: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228618: bne         $v1, $v0, L_8022865C
    if (ctx->r3 != ctx->r2) {
        // 0x8022861C: nop
    
            goto L_8022865C;
    }
    // 0x8022861C: nop

    // 0x80228620: lbu         $v0, 0x1DE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1DE);
    // 0x80228624: bne         $v0, $zero, L_8022865C
    if (ctx->r2 != 0) {
        // 0x80228628: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022865C;
    }
    // 0x80228628: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022862C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80228630: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228634: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228638: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022863C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228640: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80228644: jal         0x80050294
    // 0x80228648: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80228648: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022864C: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x80228650: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80228654: j           L_80228714
    // 0x80228658: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
        goto L_80228714;
    // 0x80228658: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
L_8022865C:
    // 0x8022865C: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x80228660: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228664: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80228668: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x8022866C: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x80228670: sb          $v1, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r3;
    // 0x80228674: sb          $zero, 0xCB($a0)
    MEM_B(0XCB, ctx->r4) = 0;
    // 0x80228678: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8022867C: jal         0x80228724
    // 0x80228680: sb          $v0, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r2;
    func_80228724_ovl16(rdram, ctx);
        goto after_2;
    // 0x80228680: sb          $v0, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r2;
    after_2:
    // 0x80228684: j           L_80228714
    // 0x80228688: nop

        goto L_80228714;
    // 0x80228688: nop

L_8022868C:
    // 0x8022868C: lw          $a0, 0x80($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X80);
    // 0x80228690: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x80228694: ori         $v1, $v1, 0x387F
    ctx->r3 = ctx->r3 | 0X387F;
    // 0x80228698: sltu        $v1, $v1, $a0
    ctx->r3 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8022869C: bne         $v1, $zero, L_8022870C
    if (ctx->r3 != 0) {
        // 0x802286A0: sb          $v0, 0x1DE($s0)
        MEM_B(0X1DE, ctx->r16) = ctx->r2;
            goto L_8022870C;
    }
    // 0x802286A0: sb          $v0, 0x1DE($s0)
    MEM_B(0X1DE, ctx->r16) = ctx->r2;
    // 0x802286A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802286A8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802286AC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802286B0: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802286B4: lbu         $v1, 0xCA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XCA);
    // 0x802286B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802286BC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802286C0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802286C4: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802286C8: jal         0x80050294
    // 0x802286CC: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x802286CC: sb          $v1, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r3;
    after_3:
    // 0x802286D0: addiu       $a0, $zero, 0x15B
    ctx->r4 = ADD32(0, 0X15B);
    // 0x802286D4: jal         0x8002A33C
    // 0x802286D8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x802286D8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
    // 0x802286DC: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x802286E0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x802286E4: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x802286E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802286EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802286F0: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x802286F4: lbu         $v0, 0xC($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XC);
    // 0x802286F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802286FC: jal         0x8022889C
    // 0x80228700: sh          $v0, 0xC8($a0)
    MEM_H(0XC8, ctx->r4) = ctx->r2;
    func_8022889C_ovl16(rdram, ctx);
        goto after_5;
    // 0x80228700: sh          $v0, 0xC8($a0)
    MEM_H(0XC8, ctx->r4) = ctx->r2;
    after_5:
    // 0x80228704: j           L_80228714
    // 0x80228708: nop

        goto L_80228714;
    // 0x80228708: nop

L_8022870C:
    // 0x8022870C: jal         0x802282B4
    // 0x80228710: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802282B4_ovl16(rdram, ctx);
        goto after_6;
    // 0x80228710: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80228714:
    // 0x80228714: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80228718: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022871C: jr          $ra
    // 0x80228720: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228720: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80228AAC_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228AAC: lb          $v1, 0xA6($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XA6);
    // 0x80228AB0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228AB4: bne         $v1, $v0, L_80228AC0
    if (ctx->r3 != ctx->r2) {
        // 0x80228AB8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80228AC0;
    }
    // 0x80228AB8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228ABC: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80228AC0:
    // 0x80228AC0: jr          $ra
    // 0x80228AC4: nop

    TRACE_RETURN()
    return;
    // 0x80228AC4: nop

;}
RECOMP_FUNC void func_80228148_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228148: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022814C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80228150: lbu         $v0, 0x385($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X385);
    // 0x80228154: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80228158: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
    // 0x8022815C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80228160: bne         $v0, $zero, L_80228198
    if (ctx->r2 != 0) {
        // 0x80228164: addiu       $v0, $zero, 0x50
        ctx->r2 = ADD32(0, 0X50);
            goto L_80228198;
    }
    // 0x80228164: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80228168: lbu         $v1, 0xCA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XCA);
    // 0x8022816C: sh          $v0, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r2;
    // 0x80228170: addiu       $v0, $zero, 0x78
    ctx->r2 = ADD32(0, 0X78);
    // 0x80228174: sb          $v0, 0x385($a0)
    MEM_B(0X385, ctx->r4) = ctx->r2;
    // 0x80228178: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022817C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80228180: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228184: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80228188: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022818C: andi        $v1, $v1, 0xFE
    ctx->r3 = ctx->r3 & 0XFE;
    // 0x80228190: jal         0x80050294
    // 0x80228194: sb          $v1, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228194: sb          $v1, 0xCA($a0)
    MEM_B(0XCA, ctx->r4) = ctx->r3;
    after_0:
L_80228198:
    // 0x80228198: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022819C: jr          $ra
    // 0x802281A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802281A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802254D0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802254D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802254D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802254D8: jal         0x8006033C
    // 0x802254DC: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802254DC: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_0:
    // 0x802254E0: beq         $v0, $zero, L_802254F0
    if (ctx->r2 == 0) {
        // 0x802254E4: nop
    
            goto L_802254F0;
    }
    // 0x802254E4: nop

    // 0x802254E8: jal         0x80060690
    // 0x802254EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_80060690_3BA90(rdram, ctx);
        goto after_1;
    // 0x802254EC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_1:
L_802254F0:
    // 0x802254F0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802254F4: jr          $ra
    // 0x802254F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802254F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D5DC_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D5DC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022D5E0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022D5E4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D5E8: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022D5EC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022D5F0: lw          $v0, 0xD8($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XD8);
    // 0x8022D5F4: bne         $v0, $zero, L_8022D6FC
    if (ctx->r2 != 0) {
        // 0x8022D5F8: addiu       $s1, $s0, 0xD0
        ctx->r17 = ADD32(ctx->r16, 0XD0);
            goto L_8022D6FC;
    }
    // 0x8022D5F8: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x8022D5FC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D600: bne         $v0, $zero, L_8022D68C
    if (ctx->r2 != 0) {
        // 0x8022D604: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022D68C;
    }
    // 0x8022D604: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D608: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022D60C: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022D610: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8022D614: lhu         $a0, 0x18($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X18);
    // 0x8022D618: lhu         $a3, 0x48($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X48);
    // 0x8022D61C: lhu         $a2, 0x46($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0X46);
    // 0x8022D620: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022D624: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x8022D628: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022D62C: sh          $a0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r4;
    // 0x8022D630: lh          $a0, 0x14($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X14);
    // 0x8022D634: addu        $v1, $v1, $a2
    ctx->r3 = ADD32(ctx->r3, ctx->r6);
    // 0x8022D638: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022D63C: lh          $a1, 0x16($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16);
    // 0x8022D640: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022D644: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022D648: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x8022D64C: lh          $a3, 0x16($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X16);
    // 0x8022D650: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D654: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022D658: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022D65C: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022D660: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022D664: sw          $a0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r4;
    // 0x8022D668: sw          $a1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r5;
    // 0x8022D66C: bltz        $a3, L_8022D688
    if (SIGNED(ctx->r7) < 0) {
        // 0x8022D670: sw          $a2, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r6;
            goto L_8022D688;
    }
    // 0x8022D670: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    // 0x8022D674: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022D678: addiu       $v1, $zero, -0x10
    ctx->r3 = ADD32(0, -0X10);
    // 0x8022D67C: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022D680: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D684: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022D688:
    // 0x8022D688: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8022D68C:
    // 0x8022D68C: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022D690: lhu         $v1, 0x16($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X16);
    // 0x8022D694: lhu         $a3, 0x18($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X18);
    // 0x8022D698: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022D69C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022D6A0: sh          $v0, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r2;
    // 0x8022D6A4: sh          $v1, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r3;
    // 0x8022D6A8: jal         0x8009A3B4
    // 0x8022D6AC: sh          $a3, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r7;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022D6AC: sh          $a3, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r7;
    after_0:
    // 0x8022D6B0: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x8022D6B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D6B8: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8022D6BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D6C0: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022D6C4: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    // 0x8022D6C8: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022D6CC: ori         $a3, $zero, 0xA000
    ctx->r7 = 0 | 0XA000;
    // 0x8022D6D0: addiu       $v0, $s1, 0x8
    ctx->r2 = ADD32(ctx->r17, 0X8);
    // 0x8022D6D4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022D6D8: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x8022D6DC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022D6E0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022D6E4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022D6E8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x8022D6EC: jal         0x80051E18
    // 0x8022D6F0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x8022D6F0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x8022D6F4: j           L_8022D7DC
    // 0x8022D6F8: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
        goto L_8022D7DC;
    // 0x8022D6F8: sw          $zero, 0x8($s1)
    MEM_W(0X8, ctx->r17) = 0;
L_8022D6FC:
    // 0x8022D6FC: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8022D700: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D704: bne         $v1, $v0, L_8022D714
    if (ctx->r3 != ctx->r2) {
        // 0x8022D708: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022D714;
    }
    // 0x8022D708: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D70C: j           L_8022D72C
    // 0x8022D710: addiu       $a0, $zero, 0x52F
    ctx->r4 = ADD32(0, 0X52F);
        goto L_8022D72C;
    // 0x8022D710: addiu       $a0, $zero, 0x52F
    ctx->r4 = ADD32(0, 0X52F);
L_8022D714:
    // 0x8022D714: bne         $v1, $v0, L_8022D724
    if (ctx->r3 != ctx->r2) {
        // 0x8022D718: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022D724;
    }
    // 0x8022D718: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D71C: j           L_8022D72C
    // 0x8022D720: addiu       $a0, $zero, 0x52E
    ctx->r4 = ADD32(0, 0X52E);
        goto L_8022D72C;
    // 0x8022D720: addiu       $a0, $zero, 0x52E
    ctx->r4 = ADD32(0, 0X52E);
L_8022D724:
    // 0x8022D724: bne         $v1, $v0, L_8022D734
    if (ctx->r3 != ctx->r2) {
        // 0x8022D728: addiu       $a0, $zero, 0x530
        ctx->r4 = ADD32(0, 0X530);
            goto L_8022D734;
    }
    // 0x8022D728: addiu       $a0, $zero, 0x530
    ctx->r4 = ADD32(0, 0X530);
L_8022D72C:
    // 0x8022D72C: jal         0x8006036C
    // 0x8022D730: nop

    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x8022D730: nop

    after_2:
L_8022D734:
    // 0x8022D734: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022D738: beq         $v1, $zero, L_8022D750
    if (ctx->r3 == 0) {
        // 0x8022D73C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022D750;
    }
    // 0x8022D73C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D740: beq         $v1, $v0, L_8022D7BC
    if (ctx->r3 == ctx->r2) {
        // 0x8022D744: nop
    
            goto L_8022D7BC;
    }
    // 0x8022D744: nop

    // 0x8022D748: j           L_8022D7DC
    // 0x8022D74C: nop

        goto L_8022D7DC;
    // 0x8022D74C: nop

L_8022D750:
    // 0x8022D750: jal         0x8006033C
    // 0x8022D754: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x8022D754: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_3:
    // 0x8022D758: bne         $v0, $zero, L_8022D770
    if (ctx->r2 != 0) {
        // 0x8022D75C: nop
    
            goto L_8022D770;
    }
    // 0x8022D75C: nop

    // 0x8022D760: jal         0x8006036C
    // 0x8022D764: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x8022D764: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_4:
    // 0x8022D768: j           L_8022D7AC
    // 0x8022D76C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
        goto L_8022D7AC;
    // 0x8022D76C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
L_8022D770:
    // 0x8022D770: jal         0x8006033C
    // 0x8022D774: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_5;
    // 0x8022D774: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    after_5:
    // 0x8022D778: bne         $v0, $zero, L_8022D790
    if (ctx->r2 != 0) {
        // 0x8022D77C: nop
    
            goto L_8022D790;
    }
    // 0x8022D77C: nop

    // 0x8022D780: jal         0x8006036C
    // 0x8022D784: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x8022D784: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    after_6:
    // 0x8022D788: j           L_8022D7AC
    // 0x8022D78C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
        goto L_8022D7AC;
    // 0x8022D78C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
L_8022D790:
    // 0x8022D790: jal         0x8006033C
    // 0x8022D794: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x8022D794: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    after_7:
    // 0x8022D798: bne         $v0, $zero, L_8022D7DC
    if (ctx->r2 != 0) {
        // 0x8022D79C: nop
    
            goto L_8022D7DC;
    }
    // 0x8022D79C: nop

    // 0x8022D7A0: jal         0x8006036C
    // 0x8022D7A4: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    func_8006036C_3B76C(rdram, ctx);
        goto after_8;
    // 0x8022D7A4: addiu       $a0, $zero, 0x60B
    ctx->r4 = ADD32(0, 0X60B);
    after_8:
    // 0x8022D7A8: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
L_8022D7AC:
    // 0x8022D7AC: sb          $v0, 0x10($s1)
    MEM_B(0X10, ctx->r17) = ctx->r2;
    // 0x8022D7B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D7B4: j           L_8022D7DC
    // 0x8022D7B8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022D7DC;
    // 0x8022D7B8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022D7BC:
    // 0x8022D7BC: jal         0x80061724
    // 0x8022D7C0: nop

    func_80061724_3CB24(rdram, ctx);
        goto after_9;
    // 0x8022D7C0: nop

    after_9:
    // 0x8022D7C4: lbu         $a1, 0x10($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X10);
    // 0x8022D7C8: jal         0x800616FC
    // 0x8022D7CC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_10;
    // 0x8022D7CC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_10:
    // 0x8022D7D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022D7D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D7D8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022D7DC:
    // 0x8022D7DC: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022D7E0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022D7E4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022D7E8: jr          $ra
    // 0x8022D7EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022D7EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022F1E4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F1E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F1E8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F1EC: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022F1F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F1F4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022F1F8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F1FC: lw          $v0, 0x4478($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4478);
    // 0x8022F200: jalr        $v0
    // 0x8022F204: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F204: nop

    after_0:
    // 0x8022F208: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F20C: jr          $ra
    // 0x8022F210: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F210: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
