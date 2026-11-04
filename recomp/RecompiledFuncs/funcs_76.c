#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_8022E800_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E800: lbu         $a1, 0xA($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XA);
    // 0x8022E804: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E808: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x8022E80C: beq         $v1, $v0, L_8022E844
    if (ctx->r3 == ctx->r2) {
        // 0x8022E810: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022E844;
    }
    // 0x8022E810: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022E814: beql        $v0, $zero, L_8022E82C
    if (ctx->r2 == 0) {
        // 0x8022E818: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022E82C;
    }
    goto skip_0;
    // 0x8022E818: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022E81C: beq         $v1, $zero, L_8022E83C
    if (ctx->r3 == 0) {
        // 0x8022E820: addiu       $v0, $a1, 0x1
        ctx->r2 = ADD32(ctx->r5, 0X1);
            goto L_8022E83C;
    }
    // 0x8022E820: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x8022E824: j           L_8022E884
    // 0x8022E828: nop

        goto L_8022E884;
    // 0x8022E828: nop

L_8022E82C:
    // 0x8022E82C: beq         $v1, $v0, L_8022E870
    if (ctx->r3 == ctx->r2) {
        // 0x8022E830: nop
    
            goto L_8022E870;
    }
    // 0x8022E830: nop

    // 0x8022E834: j           L_8022E884
    // 0x8022E838: nop

        goto L_8022E884;
    // 0x8022E838: nop

L_8022E83C:
    // 0x8022E83C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022E840: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_8022E844:
    // 0x8022E844: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022E848: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022E84C: lui         $v1, 0x20
    ctx->r3 = S32(0X20 << 16);
    // 0x8022E850: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022E854: beq         $v0, $zero, L_8022E884
    if (ctx->r2 == 0) {
        // 0x8022E858: addiu       $v1, $zero, 0x8
        ctx->r3 = ADD32(0, 0X8);
            goto L_8022E884;
    }
    // 0x8022E858: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022E85C: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022E860: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x8022E864: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E868: j           L_8022E884
    // 0x8022E86C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
        goto L_8022E884;
    // 0x8022E86C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022E870:
    // 0x8022E870: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x8022E874: bgez        $v0, L_8022E884
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022E878: addiu       $v0, $a1, -0x1
        ctx->r2 = ADD32(ctx->r5, -0X1);
            goto L_8022E884;
    }
    // 0x8022E878: addiu       $v0, $a1, -0x1
    ctx->r2 = ADD32(ctx->r5, -0X1);
    // 0x8022E87C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022E880: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
L_8022E884:
    // 0x8022E884: jr          $ra
    // 0x8022E888: nop

    TRACE_RETURN()
    return;
    // 0x8022E888: nop

;}
RECOMP_FUNC void func_8022D3B0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D3B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D3B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D3B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D3BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D3C0: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8022D3C4: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022D3C8: jal         0x8004FA7C
    // 0x8022D3CC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022D3CC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022D3D0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022D3D4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022D3D8: bne         $v0, $zero, L_8022D3E8
    if (ctx->r2 != 0) {
        // 0x8022D3DC: nop
    
            goto L_8022D3E8;
    }
    // 0x8022D3DC: nop

    // 0x8022D3E0: lhu         $v0, 0x366($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X366);
    // 0x8022D3E4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022D3E8:
    // 0x8022D3E8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D3EC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D3F0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022D3F4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022D3F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D3FC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D400: jr          $ra
    // 0x8022D404: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D404: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E3A8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E3A8: andi        $v0, $a0, 0xFF
    ctx->r2 = ctx->r4 & 0XFF;
    // 0x8022E3AC: xori        $v0, $v0, 0x11
    ctx->r2 = ctx->r2 ^ 0X11;
    // 0x8022E3B0: jr          $ra
    // 0x8022E3B4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    TRACE_RETURN()
    return;
    // 0x8022E3B4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_80226218_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226218: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022621C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226220: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226228: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022622C: bne         $v0, $zero, L_80226244
    if (ctx->r2 != 0) {
        // 0x80226230: nop
    
            goto L_80226244;
    }
    // 0x80226230: nop

    // 0x80226234: jal         0x802283FC
    // 0x80226238: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    func_802283FC_ovl7(rdram, ctx);
        goto after_0;
    // 0x80226238: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_0:
    // 0x8022623C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226240: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226244:
    // 0x80226244: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226248: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022624C: jr          $ra
    // 0x80226250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226250: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022B474_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B474: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022B478: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B47C: beq         $v1, $v0, L_8022B4D0
    if (ctx->r3 == ctx->r2) {
        // 0x8022B480: addiu       $a1, $a0, 0x348
        ctx->r5 = ADD32(ctx->r4, 0X348);
            goto L_8022B4D0;
    }
    // 0x8022B480: addiu       $a1, $a0, 0x348
    ctx->r5 = ADD32(ctx->r4, 0X348);
    // 0x8022B484: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022B488: beql        $v0, $zero, L_8022B4A0
    if (ctx->r2 == 0) {
        // 0x8022B48C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022B4A0;
    }
    goto skip_0;
    // 0x8022B48C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022B490: beq         $v1, $zero, L_8022B4B8
    if (ctx->r3 == 0) {
        // 0x8022B494: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_8022B4B8;
    }
    // 0x8022B494: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022B498: j           L_8022B558
    // 0x8022B49C: nop

        goto L_8022B558;
    // 0x8022B49C: nop

L_8022B4A0:
    // 0x8022B4A0: beq         $v1, $v0, L_8022B508
    if (ctx->r3 == ctx->r2) {
        // 0x8022B4A4: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022B508;
    }
    // 0x8022B4A4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B4A8: beq         $v1, $v0, L_8022B534
    if (ctx->r3 == ctx->r2) {
        // 0x8022B4AC: nop
    
            goto L_8022B534;
    }
    // 0x8022B4AC: nop

    // 0x8022B4B0: j           L_8022B558
    // 0x8022B4B4: nop

        goto L_8022B558;
    // 0x8022B4B4: nop

L_8022B4B8:
    // 0x8022B4B8: sh          $v0, 0x34C($a0)
    MEM_H(0X34C, ctx->r4) = ctx->r2;
    // 0x8022B4BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B4C0: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022B4C4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022B4C8: sh          $zero, 0x350($a0)
    MEM_H(0X350, ctx->r4) = 0;
    // 0x8022B4CC: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
L_8022B4D0:
    // 0x8022B4D0: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022B4D4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B4D8: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022B4DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B4E0: bgez        $v0, L_8022B558
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B4E4: nop
    
            goto L_8022B558;
    }
    // 0x8022B4E4: nop

    // 0x8022B4E8: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8022B4EC: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8022B4F0: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x8022B4F4: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022B4F8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B4FC: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022B500: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022B504: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
L_8022B508:
    // 0x8022B508: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022B50C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B510: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022B514: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B518: bgez        $v0, L_8022B558
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B51C: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_8022B558;
    }
    // 0x8022B51C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022B520: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022B524: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B528: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022B52C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022B530: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
L_8022B534:
    // 0x8022B534: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x8022B538: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B53C: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x8022B540: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B544: bgez        $v0, L_8022B558
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B548: nop
    
            goto L_8022B558;
    }
    // 0x8022B548: nop

    // 0x8022B54C: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8022B550: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022B554: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8022B558:
    // 0x8022B558: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8022B55C: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022B560: beq         $v0, $zero, L_8022B578
    if (ctx->r2 == 0) {
        // 0x8022B564: nop
    
            goto L_8022B578;
    }
    // 0x8022B564: nop

    // 0x8022B568: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x8022B56C: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x8022B570: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022B574: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_8022B578:
    // 0x8022B578: jr          $ra
    // 0x8022B57C: nop

    TRACE_RETURN()
    return;
    // 0x8022B57C: nop

;}
RECOMP_FUNC void func_802283FC_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802283FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80228400: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80228404: sra         $a0, $a0, 21
    ctx->r4 = S32(SIGNED(ctx->r4) >> 21);
    // 0x80228408: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022840C: addiu       $v0, $v0, -0x7884
    ctx->r2 = ADD32(ctx->r2, -0X7884);
    // 0x80228410: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228414: addu        $s2, $a0, $v0
    ctx->r18 = ADD32(ctx->r4, ctx->r2);
    // 0x80228418: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x8022841C: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x80228420: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x80228424: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80228428: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022842C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228430: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80228434: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80228438: sw          $zero, 0x7570($at)
    MEM_W(0X7570, ctx->r1) = 0;
    // 0x8022843C: beq         $v0, $zero, L_802284D4
    if (ctx->r2 == 0) {
        // 0x80228440: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_802284D4;
    }
    // 0x80228440: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x80228444: lui         $s5, 0x8024
    ctx->r21 = S32(0X8024 << 16);
    // 0x80228448: addiu       $s5, $s5, -0x3E80
    ctx->r21 = ADD32(ctx->r21, -0X3E80);
    // 0x8022844C: lui         $s4, 0x801C
    ctx->r20 = S32(0X801C << 16);
    // 0x80228450: addiu       $s4, $s4, -0x3A2C
    ctx->r20 = ADD32(ctx->r20, -0X3A2C);
    // 0x80228454: lui         $s3, 0x8000
    ctx->r19 = S32(0X8000 << 16);
    // 0x80228458: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_8022845C:
    // 0x8022845C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228460: lw          $v1, 0x4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X4);
    // 0x80228464: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x80228468: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8022846C: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x80228470: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80228474: jal         0x8005FA7C
    // 0x80228478: lbu         $s0, 0x0($a0)
    ctx->r16 = MEM_BU(ctx->r4, 0X0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x80228478: lbu         $s0, 0x0($a0)
    ctx->r16 = MEM_BU(ctx->r4, 0X0);
    after_0:
    // 0x8022847C: sll         $v1, $s0, 2
    ctx->r3 = S32(ctx->r16 << 2);
    // 0x80228480: addu        $v0, $v1, $s4
    ctx->r2 = ADD32(ctx->r3, ctx->r20);
    // 0x80228484: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x80228488: addu        $v1, $v1, $s5
    ctx->r3 = ADD32(ctx->r3, ctx->r21);
    // 0x8022848C: sw          $a0, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r4;
    // 0x80228490: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80228494: srlv        $s0, $s3, $s0
    ctx->r16 = S32(U32(ctx->r19) >> (ctx->r16 & 31));
    // 0x80228498: andi        $v0, $v0, 0xDF
    ctx->r2 = ctx->r2 & 0XDF;
    // 0x8022849C: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
    // 0x802284A0: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x802284A4: lw          $v1, 0x7570($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7570);
    // 0x802284A8: addiu       $v0, $s1, 0x1
    ctx->r2 = ADD32(ctx->r17, 0X1);
    // 0x802284AC: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x802284B0: or          $v1, $v1, $s0
    ctx->r3 = ctx->r3 | ctx->r16;
    // 0x802284B4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802284B8: sw          $v1, 0x7570($at)
    MEM_W(0X7570, ctx->r1) = ctx->r3;
    // 0x802284BC: lw          $v1, 0x0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0X0);
    // 0x802284C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802284C4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802284C8: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x802284CC: bne         $v0, $zero, L_8022845C
    if (ctx->r2 != 0) {
        // 0x802284D0: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_8022845C;
    }
    // 0x802284D0: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_802284D4:
    // 0x802284D4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x802284D8: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x802284DC: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x802284E0: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x802284E4: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x802284E8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802284EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802284F0: jr          $ra
    // 0x802284F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802284F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80226128_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226128: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022612C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226130: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226138: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x8022613C: bne         $v0, $zero, L_80226154
    if (ctx->r2 != 0) {
        // 0x80226140: nop
    
            goto L_80226154;
    }
    // 0x80226140: nop

    // 0x80226144: jal         0x802283FC
    // 0x80226148: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    func_802283FC_ovl7(rdram, ctx);
        goto after_0;
    // 0x80226148: addiu       $a0, $zero, 0x22
    ctx->r4 = ADD32(0, 0X22);
    after_0:
    // 0x8022614C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226150: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80226154:
    // 0x80226154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226158: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022615C: jr          $ra
    // 0x80226160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233194_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233194: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80233198: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8023319C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802331A0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x802331A4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802331A8: lw          $v0, 0x350($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X350);
    // 0x802331AC: sltiu       $v0, $v0, 0x64
    ctx->r2 = ctx->r2 < 0X64 ? 1 : 0;
    // 0x802331B0: beq         $v0, $zero, L_802332A0
    if (ctx->r2 == 0) {
        // 0x802331B4: addiu       $a0, $s1, 0xC4
        ctx->r4 = ADD32(ctx->r17, 0XC4);
            goto L_802332A0;
    }
    // 0x802331B4: addiu       $a0, $s1, 0xC4
    ctx->r4 = ADD32(ctx->r17, 0XC4);
    // 0x802331B8: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x802331BC: jal         0x8009A3B4
    // 0x802331C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802331C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802331C4: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x802331C8: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x802331CC: addiu       $a0, $s0, 0xC4
    ctx->r4 = ADD32(ctx->r16, 0XC4);
    // 0x802331D0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x802331D4: jal         0x8009A3B4
    // 0x802331D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802331D8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802331DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802331E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802331E4: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x802331E8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802331EC: sh          $v0, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r2;
    // 0x802331F0: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802331F4: sh          $v0, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r2;
    // 0x802331F8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802331FC: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x80233200: jal         0x8004DF78
    // 0x80233204: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    func_8004DF78_29378(rdram, ctx);
        goto after_2;
    // 0x80233204: sh          $v0, 0x24($sp)
    MEM_H(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x80233208: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8023320C: bne         $v0, $zero, L_802332A4
    if (ctx->r2 != 0) {
        // 0x80233210: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802332A4;
    }
    // 0x80233210: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233214: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80233218: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8023321C: jal         0x8009A3B4
    // 0x80233220: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80233220: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80233224: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x80233228: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8023322C: jal         0x8009A3B4
    // 0x80233230: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80233230: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x80233234: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x80233238: beq         $v0, $zero, L_80233254
    if (ctx->r2 == 0) {
        // 0x8023323C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80233254;
    }
    // 0x8023323C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80233240: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80233244: jal         0x80050294
    // 0x80233248: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80233248: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8023324C: j           L_80233298
    // 0x80233250: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
        goto L_80233298;
    // 0x80233250: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
L_80233254:
    // 0x80233254: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x80233258: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023325C: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x80233260: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80233264: sltiu       $v0, $v0, 0x3D
    ctx->r2 = ctx->r2 < 0X3D ? 1 : 0;
    // 0x80233268: bnel        $v0, $zero, L_802332A4
    if (ctx->r2 != 0) {
        // 0x8023326C: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_802332A4;
    }
    goto skip_0;
    // 0x8023326C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    skip_0:
    // 0x80233270: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80233274: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80233278: jal         0x80050294
    // 0x8023327C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_6;
    // 0x8023327C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_6:
    // 0x80233280: lhu         $v0, 0x56($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X56);
    // 0x80233284: addiu       $v1, $zero, 0x14
    ctx->r3 = ADD32(0, 0X14);
    // 0x80233288: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
    // 0x8023328C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80233290: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80233294: sh          $v0, 0x34A($s1)
    MEM_H(0X34A, ctx->r17) = ctx->r2;
L_80233298:
    // 0x80233298: j           L_802332A4
    // 0x8023329C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_802332A4;
    // 0x8023329C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_802332A0:
    // 0x802332A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_802332A4:
    // 0x802332A4: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x802332A8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x802332AC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802332B0: jr          $ra
    // 0x802332B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802332B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x802332B8: nop

    // 0x802332BC: nop

;}
RECOMP_FUNC void func_8022F4F0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F4F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F4F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F4F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F4FC: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022F500: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022F504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F508: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F50C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022F510: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F514: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022F518: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022F51C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022F520: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022F524: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022F528: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022F52C: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022F530: sw          $zero, 0x54($s0)
    MEM_W(0X54, ctx->r16) = 0;
    // 0x8022F534: sw          $zero, 0x58($s0)
    MEM_W(0X58, ctx->r16) = 0;
    // 0x8022F538: sw          $zero, 0x44($s0)
    MEM_W(0X44, ctx->r16) = 0;
    // 0x8022F53C: sw          $zero, 0x48($s0)
    MEM_W(0X48, ctx->r16) = 0;
    // 0x8022F540: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x8022F544: sw          $zero, 0x70($s0)
    MEM_W(0X70, ctx->r16) = 0;
    // 0x8022F548: sw          $zero, 0x74($s0)
    MEM_W(0X74, ctx->r16) = 0;
    // 0x8022F54C: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022F550: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022F554: jal         0x8009A3B4
    // 0x8022F558: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022F558: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022F55C: addiu       $v0, $zero, -0xBC0
    ctx->r2 = ADD32(0, -0XBC0);
    // 0x8022F560: sh          $v0, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r2;
    // 0x8022F564: lh          $v1, 0x14($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X14);
    // 0x8022F568: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F56C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022F570: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022F574: addiu       $v0, $zero, -0x4E77
    ctx->r2 = ADD32(0, -0X4E77);
    // 0x8022F578: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8022F57C: lh          $a2, 0x18($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X18);
    // 0x8022F580: lh          $a3, 0x16($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X16);
    // 0x8022F584: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022F588: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022F58C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022F590: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022F594: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022F598: sll         $a3, $a3, 16
    ctx->r7 = S32(ctx->r7 << 16);
    // 0x8022F59C: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
    // 0x8022F5A0: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
    // 0x8022F5A4: sw          $a2, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r6;
    // 0x8022F5A8: sw          $a2, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r6;
    // 0x8022F5AC: sw          $a3, 0x38($s0)
    MEM_W(0X38, ctx->r16) = ctx->r7;
    // 0x8022F5B0: jal         0x8004D5D4
    // 0x8022F5B4: sw          $a3, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r7;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x8022F5B4: sw          $a3, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r7;
    after_1:
    // 0x8022F5B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F5BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F5C0: jal         0x80050294
    // 0x8022F5C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022F5C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_2:
    // 0x8022F5C8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F5CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F5D0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022F5D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F5D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F5DC: jr          $ra
    // 0x8022F5E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F5E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80232FF0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232FF0: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80232FF4: lw          $a1, 0x4B34($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4B34);
    // 0x80232FF8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232FFC: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80233000: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x80233004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233008: beq         $a1, $a0, L_80233018
    if (ctx->r5 == ctx->r4) {
        // 0x8023300C: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_80233018;
    }
    // 0x8023300C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233010: j           L_80233094
    // 0x80233014: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
        goto L_80233094;
    // 0x80233014: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80233018:
    // 0x80233018: lbu         $v0, 0x0($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X0);
    // 0x8023301C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80233020: lbu         $v1, 0x4A6D($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4A6D);
    // 0x80233024: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233028: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x8023302C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80233030: ori         $v1, $v1, 0x40
    ctx->r3 = ctx->r3 | 0X40;
    // 0x80233034: sb          $v0, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r2;
    // 0x80233038: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023303C: sb          $v1, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r3;
    // 0x80233040: lh          $v0, 0x180($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X180);
    // 0x80233044: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80233048: addiu       $s0, $s0, -0x5EC0
    ctx->r16 = ADD32(ctx->r16, -0X5EC0);
    // 0x8023304C: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80233050: lh          $v0, 0x182($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X182);
    // 0x80233054: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x80233058: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023305C: sw          $v0, -0x5EBC($at)
    MEM_W(-0X5EBC, ctx->r1) = ctx->r2;
    // 0x80233060: lh          $v0, 0x184($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X184);
    // 0x80233064: addiu       $a0, $a2, 0x14
    ctx->r4 = ADD32(ctx->r6, 0X14);
    // 0x80233068: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023306C: sw          $v0, -0x5EB8($at)
    MEM_W(-0X5EB8, ctx->r1) = ctx->r2;
    // 0x80233070: jal         0x8004EC38
    // 0x80233074: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004EC38_2A038(rdram, ctx);
        goto after_0;
    // 0x80233074: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x80233078: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023307C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x80233080: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x80233084: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x80233088: jal         0x80034FCC
    // 0x8023308C: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    func_80034FCC_103CC(rdram, ctx);
        goto after_1;
    // 0x8023308C: addiu       $a2, $v0, 0x800
    ctx->r6 = ADD32(ctx->r2, 0X800);
    after_1:
    // 0x80233090: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80233094:
    // 0x80233094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233098: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023309C: jr          $ra
    // 0x802330A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802330A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E3F8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E3F8: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x8022E3FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E400: beq         $a1, $v0, L_8022E42C
    if (ctx->r5 == ctx->r2) {
        // 0x8022E404: addiu       $v0, $zero, 0x2A
        ctx->r2 = ADD32(0, 0X2A);
            goto L_8022E42C;
    }
    // 0x8022E404: addiu       $v0, $zero, 0x2A
    ctx->r2 = ADD32(0, 0X2A);
    // 0x8022E408: lbu         $a0, 0x2($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X2);
    // 0x8022E40C: bne         $a0, $v0, L_8022E41C
    if (ctx->r4 != ctx->r2) {
        // 0x8022E410: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_8022E41C;
    }
    // 0x8022E410: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022E414: j           L_8022E43C
    // 0x8022E418: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
        goto L_8022E43C;
    // 0x8022E418: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
L_8022E41C:
    // 0x8022E41C: bne         $a0, $v1, L_8022E43C
    if (ctx->r4 != ctx->r3) {
        // 0x8022E420: addiu       $v0, $zero, 0x180
        ctx->r2 = ADD32(0, 0X180);
            goto L_8022E43C;
    }
    // 0x8022E420: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x8022E424: j           L_8022E43C
    // 0x8022E428: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
        goto L_8022E43C;
    // 0x8022E428: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
L_8022E42C:
    // 0x8022E42C: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x8022E430: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022E434: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022E438: lbu         $v0, -0x7030($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X7030);
L_8022E43C:
    // 0x8022E43C: jr          $ra
    // 0x8022E440: nop

    TRACE_RETURN()
    return;
    // 0x8022E440: nop

;}
RECOMP_FUNC void func_802262FC_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802262FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226300: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226304: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80226308: bne         $v0, $zero, L_80226340
    if (ctx->r2 != 0) {
        // 0x8022630C: nop
    
            goto L_80226340;
    }
    // 0x8022630C: nop

    // 0x80226310: jal         0x8006033C
    // 0x80226314: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80226314: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    after_0:
    // 0x80226318: beq         $v0, $zero, L_80226340
    if (ctx->r2 == 0) {
        // 0x8022631C: nop
    
            goto L_80226340;
    }
    // 0x8022631C: nop

    // 0x80226320: jal         0x8006036C
    // 0x80226324: addiu       $a0, $zero, 0x7E2
    ctx->r4 = ADD32(0, 0X7E2);
    func_8006036C_3B76C(rdram, ctx);
        goto after_1;
    // 0x80226324: addiu       $a0, $zero, 0x7E2
    ctx->r4 = ADD32(0, 0X7E2);
    after_1:
    // 0x80226328: jal         0x8006036C
    // 0x8022632C: addiu       $a0, $zero, 0x7E3
    ctx->r4 = ADD32(0, 0X7E3);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x8022632C: addiu       $a0, $zero, 0x7E3
    ctx->r4 = ADD32(0, 0X7E3);
    after_2:
    // 0x80226330: jal         0x8006036C
    // 0x80226334: addiu       $a0, $zero, 0x7E4
    ctx->r4 = ADD32(0, 0X7E4);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x80226334: addiu       $a0, $zero, 0x7E4
    ctx->r4 = ADD32(0, 0X7E4);
    after_3:
    // 0x80226338: jal         0x8006036C
    // 0x8022633C: addiu       $a0, $zero, 0x7E8
    ctx->r4 = ADD32(0, 0X7E8);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x8022633C: addiu       $a0, $zero, 0x7E8
    ctx->r4 = ADD32(0, 0X7E8);
    after_4:
L_80226340:
    // 0x80226340: jal         0x8006036C
    // 0x80226344: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x80226344: addiu       $a0, $zero, 0x1FF
    ctx->r4 = ADD32(0, 0X1FF);
    after_5:
    // 0x80226348: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022634C: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80226350: jr          $ra
    // 0x80226354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226354: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236350_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236350: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236354: jr          $ra
    // 0x80236358: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80236358: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8022C2E8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C2E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C2EC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C2F0: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022C2F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C2F8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C2FC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C300: lw          $v0, -0x6F34($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6F34);
    // 0x8022C304: jalr        $v0
    // 0x8022C308: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022C308: nop

    after_0:
    // 0x8022C30C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C310: jr          $ra
    // 0x8022C314: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C314: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231398_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231398: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023139C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802313A0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802313A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802313A8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802313AC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802313B0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802313B4: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x802313B8: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x802313BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802313C0: beq         $v1, $v0, L_802314A0
    if (ctx->r3 == ctx->r2) {
        // 0x802313C4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802314A0;
    }
    // 0x802313C4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802313C8: beql        $v0, $zero, L_802313E0
    if (ctx->r2 == 0) {
        // 0x802313CC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802313E0;
    }
    goto skip_0;
    // 0x802313CC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802313D0: beq         $v1, $zero, L_802313F0
    if (ctx->r3 == 0) {
        // 0x802313D4: nop
    
            goto L_802313F0;
    }
    // 0x802313D4: nop

    // 0x802313D8: j           L_80231524
    // 0x802313DC: nop

        goto L_80231524;
    // 0x802313DC: nop

L_802313E0:
    // 0x802313E0: beq         $v1, $v0, L_802314EC
    if (ctx->r3 == ctx->r2) {
        // 0x802313E4: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_802314EC;
    }
    // 0x802313E4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802313E8: j           L_80231524
    // 0x802313EC: nop

        goto L_80231524;
    // 0x802313EC: nop

L_802313F0:
    // 0x802313F0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802313F4: lw          $v0, 0x4B34($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4B34);
    // 0x802313F8: bne         $v0, $s0, L_80231524
    if (ctx->r2 != ctx->r16) {
        // 0x802313FC: nop
    
            goto L_80231524;
    }
    // 0x802313FC: nop

    // 0x80231400: jal         0x8006036C
    // 0x80231404: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x80231404: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
    after_0:
    // 0x80231408: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8023140C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231410: addiu       $s2, $s2, 0x14
    ctx->r18 = ADD32(ctx->r18, 0X14);
    // 0x80231414: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80231418: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023141C: sw          $zero, 0x4B34($at)
    MEM_W(0X4B34, ctx->r1) = 0;
    // 0x80231420: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80231424: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231428: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8023142C: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80231430: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x80231434: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80231438: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023143C: jal         0x8004F820
    // 0x80231440: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80231440: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_1:
    // 0x80231444: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231448: bgez        $v0, L_80231474
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8023144C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80231474;
    }
    // 0x8023144C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231450: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80231454: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80231458: jal         0x8004F820
    // 0x8023145C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8023145C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80231460: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231464: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80231468: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023146C: j           L_8023148C
    // 0x80231470: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8023148C;
    // 0x80231470: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80231474:
    // 0x80231474: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80231478: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8023147C: jal         0x8004F820
    // 0x80231480: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_3;
    // 0x80231480: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_3:
    // 0x80231484: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80231488: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8023148C:
    // 0x8023148C: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x80231490: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80231494: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80231498: j           L_80231524
    // 0x8023149C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
        goto L_80231524;
    // 0x8023149C: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
L_802314A0:
    // 0x802314A0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802314A4: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x802314A8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x802314AC: jal         0x8004F820
    // 0x802314B0: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x802314B0: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_4:
    // 0x802314B4: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x802314B8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x802314BC: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x802314C0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802314C4: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x802314C8: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x802314CC: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x802314D0: beq         $a0, $zero, L_80231524
    if (ctx->r4 == 0) {
        // 0x802314D4: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80231524;
    }
    // 0x802314D4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x802314D8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802314DC: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x802314E0: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x802314E4: j           L_80231520
    // 0x802314E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80231520;
    // 0x802314E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802314EC:
    // 0x802314EC: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x802314F0: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x802314F4: jal         0x8004F820
    // 0x802314F8: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x802314F8: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_5:
    // 0x802314FC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80231500: lb          $a0, 0xA7($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XA7);
    // 0x80231504: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80231508: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8023150C: bgez        $a0, L_80231524
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80231510: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_80231524;
    }
    // 0x80231510: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x80231514: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231518: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x8023151C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_80231520:
    // 0x80231520: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80231524:
    // 0x80231524: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80231528: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023152C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231530: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231534: jr          $ra
    // 0x80231538: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80231538: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023153C: nop

;}
RECOMP_FUNC void func_8022AFD4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AFD4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022AFD8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AFDC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AFE0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022AFE4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022AFE8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022AFEC: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022AFF0: beq         $v0, $zero, L_8022B1E8
    if (ctx->r2 == 0) {
        // 0x8022AFF4: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022B1E8;
    }
    // 0x8022AFF4: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022AFF8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022AFFC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B000: addu        $at, $at, $v0
    gpr jr_addend_8022B008 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B004: lw          $v0, -0x6228($at)
    ctx->r2 = ADD32(ctx->r1, -0X6228);
    // 0x8022B008: jr          $v0
    // 0x8022B00C: nop

    switch (jr_addend_8022B008 >> 2) {
        case 0: goto L_8022B010; break;
        case 1: goto L_8022B0A0; break;
        case 2: goto L_8022B0FC; break;
        case 3: goto L_8022B184; break;
        case 4: goto L_8022B1B0; break;
        default: switch_error(__func__, 0x8022B008, 0x80239DD8);
    }
    // 0x8022B00C: nop

L_8022B010:
    // 0x8022B010: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B014: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B018: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B01C: sh          $zero, 0x6($s1)
    MEM_H(0X6, ctx->r17) = 0;
    // 0x8022B020: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8022B024: andi        $v1, $v1, 0xFFF7
    ctx->r3 = ctx->r3 & 0XFFF7;
    // 0x8022B028: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
    // 0x8022B02C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B030: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x8022B034: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022B038: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B03C: addiu       $v0, $zero, 0x25
    ctx->r2 = ADD32(0, 0X25);
    // 0x8022B040: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022B044: addiu       $v0, $zero, -0xB
    ctx->r2 = ADD32(0, -0XB);
    // 0x8022B048: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022B04C: addiu       $v0, $zero, -0x18
    ctx->r2 = ADD32(0, -0X18);
    // 0x8022B050: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022B054: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022B058: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x8022B05C: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022B060: beq         $a0, $zero, L_8022B0A0
    if (ctx->r4 == 0) {
        // 0x8022B064: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022B0A0;
    }
    // 0x8022B064: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022B068: lw          $v0, 0x38($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X38);
    // 0x8022B06C: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x8022B070: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B074: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022B078: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022B07C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B080: sh          $v0, 0x64($v1)
    MEM_H(0X64, ctx->r3) = ctx->r2;
    // 0x8022B084: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022B088: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022B08C: sw          $v0, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r2;
    // 0x8022B090: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x8022B094: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022B098: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
    // 0x8022B09C: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
L_8022B0A0:
    // 0x8022B0A0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022B0A4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B0A8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B0AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B0B0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022B0B4: bltz        $v0, L_8022B0E4
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022B0B8: slti        $v0, $v0, 0x2
        ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
            goto L_8022B0E4;
    }
    // 0x8022B0B8: slti        $v0, $v0, 0x2
    ctx->r2 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x8022B0BC: beq         $v0, $zero, L_8022B1E8
    if (ctx->r2 == 0) {
        // 0x8022B0C0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022B1E8;
    }
    // 0x8022B0C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B0C4: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022B0C8: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022B0CC: jal         0x8004DA90
    // 0x8022B0D0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022B0D0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022B0D4: jal         0x80040F30
    // 0x8022B0D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022B0D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022B0DC: j           L_8022B1E8
    // 0x8022B0E0: nop

        goto L_8022B1E8;
    // 0x8022B0E0: nop

L_8022B0E4:
    // 0x8022B0E4: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022B0E8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B0EC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B0F0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B0F4: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x8022B0F8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022B0FC:
    // 0x8022B0FC: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8022B100: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B104: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022B108: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022B10C: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022B110: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022B114: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x8022B118: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022B11C: sll         $a2, $v0, 23
    ctx->r6 = S32(ctx->r2 << 23);
    // 0x8022B120: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022B124: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8022B128: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022B12C: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022B130: jal         0x8004DA90
    // 0x8022B134: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022B134: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_2:
    // 0x8022B138: jal         0x80040F30
    // 0x8022B13C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022B13C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022B140: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B144: beq         $v1, $zero, L_8022B1E8
    if (ctx->r3 == 0) {
        // 0x8022B148: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_8022B1E8;
    }
    // 0x8022B148: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x8022B14C: bnel        $v0, $zero, L_8022B154
    if (ctx->r2 != 0) {
        // 0x8022B150: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022B154;
    }
    goto skip_0;
    // 0x8022B150: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_8022B154:
    // 0x8022B154: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x8022B158: beq         $v0, $zero, L_8022B1E8
    if (ctx->r2 == 0) {
        // 0x8022B15C: nop
    
            goto L_8022B1E8;
    }
    // 0x8022B15C: nop

    // 0x8022B160: lh          $v0, 0x4($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X4);
    // 0x8022B164: bgtz        $v0, L_8022B1E8
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022B168: addiu       $v0, $zero, 0x26
        ctx->r2 = ADD32(0, 0X26);
            goto L_8022B1E8;
    }
    // 0x8022B168: addiu       $v0, $zero, 0x26
    ctx->r2 = ADD32(0, 0X26);
    // 0x8022B16C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B170: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B174: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B178: addiu       $v0, $zero, 0x27
    ctx->r2 = ADD32(0, 0X27);
    // 0x8022B17C: j           L_8022B1E8
    // 0x8022B180: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022B1E8;
    // 0x8022B180: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022B184:
    // 0x8022B184: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022B188: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B18C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B190: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B194: bgez        $v0, L_8022B1E8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B198: addiu       $v0, $zero, 0x11
        ctx->r2 = ADD32(0, 0X11);
            goto L_8022B1E8;
    }
    // 0x8022B198: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x8022B19C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B1A0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B1A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B1A8: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8022B1AC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022B1B0:
    // 0x8022B1B0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022B1B4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B1B8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022B1BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022B1C0: bgez        $v0, L_8022B1E8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022B1C4: nop
    
            goto L_8022B1E8;
    }
    // 0x8022B1C4: nop

    // 0x8022B1C8: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B1CC: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022B1D0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022B1D4: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022B1D8: sb          $v0, 0x110($s0)
    MEM_B(0X110, ctx->r16) = ctx->r2;
    // 0x8022B1DC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022B1E0: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022B1E4: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022B1E8:
    // 0x8022B1E8: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B1EC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022B1F0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022B1F4: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x8022B1F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B1FC: andi        $v1, $v0, 0x3
    ctx->r3 = ctx->r2 & 0X3;
    // 0x8022B200: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x8022B204: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x8022B208: bgtz        $v0, L_8022B224
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022B20C: nop
    
            goto L_8022B224;
    }
    // 0x8022B20C: nop

    // 0x8022B210: bne         $v1, $zero, L_8022B224
    if (ctx->r3 != 0) {
        // 0x8022B214: nop
    
            goto L_8022B224;
    }
    // 0x8022B214: nop

    // 0x8022B218: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022B21C: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022B220: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_8022B224:
    // 0x8022B224: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B228: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B22C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B230: jr          $ra
    // 0x8022B234: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B234: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226694_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226694: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80226698: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x8022669C: addiu       $a2, $a2, -0x5F60
    ctx->r6 = ADD32(ctx->r6, -0X5F60);
    // 0x802266A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_802266A4:
    // 0x802266A4: sll         $v0, $a0, 16
    ctx->r2 = S32(ctx->r4 << 16);
    // 0x802266A8: sra         $v0, $v0, 14
    ctx->r2 = S32(SIGNED(ctx->r2) >> 14);
    // 0x802266AC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802266B0: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x802266B4: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x802266B8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802266BC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802266C0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802266C4: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x802266C8: bne         $v0, $zero, L_802266A4
    if (ctx->r2 != 0) {
        // 0x802266CC: sb          $a1, 0x8($v1)
        MEM_B(0X8, ctx->r3) = ctx->r5;
            goto L_802266A4;
    }
    // 0x802266CC: sb          $a1, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r5;
    // 0x802266D0: jr          $ra
    // 0x802266D4: nop

    TRACE_RETURN()
    return;
    // 0x802266D4: nop

;}
RECOMP_FUNC void func_80233C10_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233C10: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80233C14: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80233C18: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233C1C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80233C20: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233C24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80233C28: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80233C2C: jal         0x8009A3B4
    // 0x80233C30: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80233C30: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    after_0:
    // 0x80233C34: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80233C38: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80233C3C: jal         0x8009A3B4
    // 0x80233C40: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80233C40: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80233C44: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80233C48: addiu       $s1, $s0, 0x54
    ctx->r17 = ADD32(ctx->r16, 0X54);
    // 0x80233C4C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80233C50: jal         0x8009A3B4
    // 0x80233C54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80233C54: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80233C58: jal         0x800A3450
    // 0x80233C5C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80233C5C: nop

    after_3:
    // 0x80233C60: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80233C64: sh          $v0, 0xC2($s0)
    MEM_H(0XC2, ctx->r16) = ctx->r2;
    // 0x80233C68: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80233C6C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80233C70: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80233C74: lw          $v0, -0x6B50($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6B50);
    // 0x80233C78: jalr        $v0
    // 0x80233C7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80233C7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80233C80: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80233C84: addiu       $s1, $s0, 0x8C
    ctx->r17 = ADD32(ctx->r16, 0X8C);
    // 0x80233C88: jal         0x80031600
    // 0x80233C8C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_5;
    // 0x80233C8C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_5:
    // 0x80233C90: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80233C94: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80233C98: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80233C9C: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80233CA0: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80233CA4: jal         0x80031DA8
    // 0x80233CA8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x80233CA8: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_6:
    // 0x80233CAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80233CB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80233CB4: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80233CB8: lui         $a3, 0x100
    ctx->r7 = S32(0X100 << 16);
    // 0x80233CBC: jal         0x80047284
    // 0x80233CC0: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    func_80047284_22684(rdram, ctx);
        goto after_7;
    // 0x80233CC0: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    after_7:
    // 0x80233CC4: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80233CC8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80233CCC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80233CD0: jr          $ra
    // 0x80233CD4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80233CD4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80235EC8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235EC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235ECC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80235ED0: jal         0x80235F68
    // 0x80235ED4: nop

    func_80235F68_ovl7(rdram, ctx);
        goto after_0;
    // 0x80235ED4: nop

    after_0:
    // 0x80235ED8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80235EDC: beq         $v0, $zero, L_80235F48
    if (ctx->r2 == 0) {
        // 0x80235EE0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80235F48;
    }
    // 0x80235EE0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80235EE4: jal         0x8006033C
    // 0x80235EE8: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80235EE8: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    after_1:
    // 0x80235EEC: bne         $v0, $zero, L_80235F38
    if (ctx->r2 != 0) {
        // 0x80235EF0: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80235F38;
    }
    // 0x80235EF0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80235EF4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80235EF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235EFC: jal         0x800610AC
    // 0x80235F00: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_2;
    // 0x80235F00: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80235F04: jal         0x8006036C
    // 0x80235F08: addiu       $a0, $zero, 0x7E5
    ctx->r4 = ADD32(0, 0X7E5);
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x80235F08: addiu       $a0, $zero, 0x7E5
    ctx->r4 = ADD32(0, 0X7E5);
    after_3:
    // 0x80235F0C: jal         0x8006036C
    // 0x80235F10: addiu       $a0, $zero, 0x7E6
    ctx->r4 = ADD32(0, 0X7E6);
    func_8006036C_3B76C(rdram, ctx);
        goto after_4;
    // 0x80235F10: addiu       $a0, $zero, 0x7E6
    ctx->r4 = ADD32(0, 0X7E6);
    after_4:
    // 0x80235F14: jal         0x8006036C
    // 0x80235F18: addiu       $a0, $zero, 0x7E7
    ctx->r4 = ADD32(0, 0X7E7);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x80235F18: addiu       $a0, $zero, 0x7E7
    ctx->r4 = ADD32(0, 0X7E7);
    after_5:
    // 0x80235F1C: jal         0x8006036C
    // 0x80235F20: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x80235F20: addiu       $a0, $zero, 0x235
    ctx->r4 = ADD32(0, 0X235);
    after_6:
    // 0x80235F24: jal         0x8006036C
    // 0x80235F28: addiu       $a0, $zero, 0x212
    ctx->r4 = ADD32(0, 0X212);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x80235F28: addiu       $a0, $zero, 0x212
    ctx->r4 = ADD32(0, 0X212);
    after_7:
    // 0x80235F2C: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80235F30: j           L_80235F5C
    // 0x80235F34: sb          $zero, -0x3BA0($at)
    MEM_B(-0X3BA0, ctx->r1) = 0;
        goto L_80235F5C;
    // 0x80235F34: sb          $zero, -0x3BA0($at)
    MEM_B(-0X3BA0, ctx->r1) = 0;
L_80235F38:
    // 0x80235F38: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80235F3C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235F40: j           L_80235F54
    // 0x80235F44: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
        goto L_80235F54;
    // 0x80235F44: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
L_80235F48:
    // 0x80235F48: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80235F4C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235F50: addiu       $a3, $zero, 0x22
    ctx->r7 = ADD32(0, 0X22);
L_80235F54:
    // 0x80235F54: jal         0x800610AC
    // 0x80235F58: nop

    func_800610AC_3C4AC(rdram, ctx);
        goto after_8;
    // 0x80235F58: nop

    after_8:
L_80235F5C:
    // 0x80235F5C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80235F60: jr          $ra
    // 0x80235F64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235F64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A874_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A874: lbu         $a1, 0xA($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0XA);
    // 0x8022A878: beq         $a1, $zero, L_8022A894
    if (ctx->r5 == 0) {
        // 0x8022A87C: addiu       $v1, $a0, 0x348
        ctx->r3 = ADD32(ctx->r4, 0X348);
            goto L_8022A894;
    }
    // 0x8022A87C: addiu       $v1, $a0, 0x348
    ctx->r3 = ADD32(ctx->r4, 0X348);
    // 0x8022A880: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A884: beq         $a1, $v0, L_8022A8A4
    if (ctx->r5 == ctx->r2) {
        // 0x8022A888: nop
    
            goto L_8022A8A4;
    }
    // 0x8022A888: nop

    // 0x8022A88C: j           L_8022A8E0
    // 0x8022A890: nop

        goto L_8022A8E0;
    // 0x8022A890: nop

L_8022A894:
    // 0x8022A894: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A898: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022A89C: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022A8A0: sh          $zero, 0x350($a0)
    MEM_H(0X350, ctx->r4) = 0;
L_8022A8A4:
    // 0x8022A8A4: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x8022A8A8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A8AC: sh          $v0, 0x4($v1)
    MEM_H(0X4, ctx->r3) = ctx->r2;
    // 0x8022A8B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A8B4: bgez        $v0, L_8022A8CC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A8B8: nop
    
            goto L_8022A8CC;
    }
    // 0x8022A8B8: nop

    // 0x8022A8BC: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x8022A8C0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022A8C4: j           L_8022A8E0
    // 0x8022A8C8: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
        goto L_8022A8E0;
    // 0x8022A8C8: sh          $v0, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r2;
L_8022A8CC:
    // 0x8022A8CC: lhu         $v0, 0x56($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X56);
    // 0x8022A8D0: lhu         $v1, 0x66($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X66);
    // 0x8022A8D4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A8D8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A8DC: sh          $v0, 0x56($a0)
    MEM_H(0X56, ctx->r4) = ctx->r2;
L_8022A8E0:
    // 0x8022A8E0: jr          $ra
    // 0x8022A8E4: nop

    TRACE_RETURN()
    return;
    // 0x8022A8E4: nop

;}
RECOMP_FUNC void func_8022E6C4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E6C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E6C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E6CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E6D0: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x8022E6D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E6D8: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022E6DC: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022E6E0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E6E4: jal         0x8009A3B4
    // 0x8022E6E8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022E6E8: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022E6EC: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x8022E6F0: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x8022E6F4: jal         0x8009A3B4
    // 0x8022E6F8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022E6F8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022E6FC: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x8022E700: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x8022E704: jal         0x8009A3B4
    // 0x8022E708: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022E708: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022E70C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022E710: jal         0x800A3450
    // 0x8022E714: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022E714: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022E718: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022E71C: sh          $v0, 0x34A($s0)
    MEM_H(0X34A, ctx->r16) = ctx->r2;
    // 0x8022E720: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022E724: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022E728: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E72C: lw          $v0, -0x6D70($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6D70);
    // 0x8022E730: jalr        $v0
    // 0x8022E734: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8022E734: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022E738: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022E73C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022E740: beq         $v0, $zero, L_8022E75C
    if (ctx->r2 == 0) {
        // 0x8022E744: nop
    
            goto L_8022E75C;
    }
    // 0x8022E744: nop

    // 0x8022E748: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x8022E74C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022E750: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022E754: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8022E758: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_8022E75C:
    // 0x8022E75C: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022E760: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022E764: beq         $v0, $a1, L_8022E77C
    if (ctx->r2 == ctx->r5) {
        // 0x8022E768: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E77C;
    }
    // 0x8022E768: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E76C: jal         0x80050294
    // 0x8022E770: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022E770: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022E774: j           L_8022E784
    // 0x8022E778: nop

        goto L_8022E784;
    // 0x8022E778: nop

L_8022E77C:
    // 0x8022E77C: jal         0x8005044C
    // 0x8022E780: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8022E780: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_8022E784:
    // 0x8022E784: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022E788: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022E78C: beq         $v0, $zero, L_8022E7A4
    if (ctx->r2 == 0) {
        // 0x8022E790: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E7A4;
    }
    // 0x8022E790: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E794: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022E798: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022E79C: jal         0x8003B564
    // 0x8022E7A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x8022E7A0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_8022E7A4:
    // 0x8022E7A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E7A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022E7AC: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022E7B0: jal         0x80047284
    // 0x8022E7B4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_8;
    // 0x8022E7B4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
    // 0x8022E7B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E7BC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E7C0: jr          $ra
    // 0x8022E7C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E7C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FE6C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FE6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FE70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022FE74: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FE78: lhu         $v1, 0x362($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X362);
    // 0x8022FE7C: bne         $a1, $zero, L_8022FEAC
    if (ctx->r5 != 0) {
        // 0x8022FE80: addiu       $s0, $a0, 0x348
        ctx->r16 = ADD32(ctx->r4, 0X348);
            goto L_8022FEAC;
    }
    // 0x8022FE80: addiu       $s0, $a0, 0x348
    ctx->r16 = ADD32(ctx->r4, 0X348);
    // 0x8022FE84: jal         0x800A3450
    // 0x8022FE88: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022FE88: nop

    after_0:
    // 0x8022FE8C: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022FE90: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x8022FE94: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022FE98: mflo        $v0
    ctx->r2 = lo;
    // 0x8022FE9C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022FEA0: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022FEA4: j           L_8022FED0
    // 0x8022FEA8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
        goto L_8022FED0;
    // 0x8022FEA8: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
L_8022FEAC:
    // 0x8022FEAC: sra         $a1, $a1, 12
    ctx->r5 = S32(SIGNED(ctx->r5) >> 12);
    // 0x8022FEB0: andi        $v0, $a1, 0x1
    ctx->r2 = ctx->r5 & 0X1;
    // 0x8022FEB4: bnel        $v0, $zero, L_8022FEBC
    if (ctx->r2 != 0) {
        // 0x8022FEB8: addiu       $v1, $zero, 0x10
        ctx->r3 = ADD32(0, 0X10);
            goto L_8022FEBC;
    }
    goto skip_0;
    // 0x8022FEB8: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    skip_0:
L_8022FEBC:
    // 0x8022FEBC: andi        $v0, $a1, 0x2
    ctx->r2 = ctx->r5 & 0X2;
    // 0x8022FEC0: beq         $v0, $zero, L_8022FED0
    if (ctx->r2 == 0) {
        // 0x8022FEC4: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8022FED0;
    }
    // 0x8022FEC4: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022FEC8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022FECC: negu        $v1, $v0
    ctx->r3 = SUB32(0, ctx->r2);
L_8022FED0:
    // 0x8022FED0: sh          $zero, 0x18($s0)
    MEM_H(0X18, ctx->r16) = 0;
    // 0x8022FED4: sh          $v1, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r3;
    // 0x8022FED8: sh          $zero, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = 0;
    // 0x8022FEDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022FEE0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FEE4: jr          $ra
    // 0x8022FEE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FEE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802299EC_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802299EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802299F0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802299F4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802299F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802299FC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80229A00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229A04: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80229A08: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80229A0C: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80229A10: addiu       $s2, $zero, 0x50
    ctx->r18 = ADD32(0, 0X50);
    // 0x80229A14: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229A18: andi        $v1, $v1, 0xF0
    ctx->r3 = ctx->r3 & 0XF0;
    // 0x80229A1C: beq         $v1, $s2, L_80229A3C
    if (ctx->r3 == ctx->r18) {
        // 0x80229A20: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_80229A3C;
    }
    // 0x80229A20: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80229A24: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80229A28: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80229A2C: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80229A30: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80229A34: andi        $v0, $v0, 0xE00
    ctx->r2 = ctx->r2 & 0XE00;
    // 0x80229A38: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80229A3C:
    // 0x80229A3C: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80229A40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229A44: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229A48: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80229A4C: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x80229A50: jal         0x8004D5D4
    // 0x80229A54: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80229A54: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80229A58: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    // 0x80229A5C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229A60: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x80229A64: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80229A68: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80229A6C: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80229A70: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80229A74: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80229A78: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    // 0x80229A7C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80229A80: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x80229A84: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x80229A88: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x80229A8C: jal         0x800540BC
    // 0x80229A90: sw          $zero, 0x360($s0)
    MEM_W(0X360, ctx->r16) = 0;
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x80229A90: sw          $zero, 0x360($s0)
    MEM_W(0X360, ctx->r16) = 0;
    after_1:
    // 0x80229A94: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80229A98: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80229A9C: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80229AA0: lui         $v1, 0x7FFF
    ctx->r3 = S32(0X7FFF << 16);
    // 0x80229AA4: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80229AA8: sw          $v1, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->r3;
    // 0x80229AAC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229AB0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80229AB4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80229AB8: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80229ABC: lbu         $v0, 0x8($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X8);
    // 0x80229AC0: andi        $v1, $v1, 0xF0
    ctx->r3 = ctx->r3 & 0XF0;
    // 0x80229AC4: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80229AC8: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x80229ACC: sh          $v0, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r2;
    // 0x80229AD0: beq         $v1, $s2, L_80229AEC
    if (ctx->r3 == ctx->r18) {
        // 0x80229AD4: sh          $v0, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r2;
            goto L_80229AEC;
    }
    // 0x80229AD4: sh          $v0, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r2;
    // 0x80229AD8: jal         0x8003E934
    // 0x80229ADC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x80229ADC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80229AE0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229AE4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229AE8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_80229AEC:
    // 0x80229AEC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80229AF0: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80229AF4: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x80229AF8: andi        $v1, $v0, 0xF0
    ctx->r3 = ctx->r2 & 0XF0;
    // 0x80229AFC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80229B00: beq         $v1, $v0, L_80229B78
    if (ctx->r3 == ctx->r2) {
        // 0x80229B04: slti        $v0, $v1, 0x21
        ctx->r2 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
            goto L_80229B78;
    }
    // 0x80229B04: slti        $v0, $v1, 0x21
    ctx->r2 = SIGNED(ctx->r3) < 0X21 ? 1 : 0;
    // 0x80229B08: beql        $v0, $zero, L_80229B28
    if (ctx->r2 == 0) {
        // 0x80229B0C: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_80229B28;
    }
    goto skip_0;
    // 0x80229B0C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    skip_0:
    // 0x80229B10: beq         $v1, $zero, L_80229B58
    if (ctx->r3 == 0) {
        // 0x80229B14: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_80229B58;
    }
    // 0x80229B14: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80229B18: beq         $v1, $v0, L_80229B68
    if (ctx->r3 == ctx->r2) {
        // 0x80229B1C: addiu       $v0, $zero, 0xE
        ctx->r2 = ADD32(0, 0XE);
            goto L_80229B68;
    }
    // 0x80229B1C: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x80229B20: j           L_80229C0C
    // 0x80229B24: nop

        goto L_80229C0C;
    // 0x80229B24: nop

L_80229B28:
    // 0x80229B28: beq         $v1, $v0, L_80229BBC
    if (ctx->r3 == ctx->r2) {
        // 0x80229B2C: slti        $v0, $v1, 0x41
        ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
            goto L_80229BBC;
    }
    // 0x80229B2C: slti        $v0, $v1, 0x41
    ctx->r2 = SIGNED(ctx->r3) < 0X41 ? 1 : 0;
    // 0x80229B30: beq         $v0, $zero, L_80229B48
    if (ctx->r2 == 0) {
        // 0x80229B34: addiu       $v0, $zero, 0x30
        ctx->r2 = ADD32(0, 0X30);
            goto L_80229B48;
    }
    // 0x80229B34: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80229B38: beq         $v1, $v0, L_80229B8C
    if (ctx->r3 == ctx->r2) {
        // 0x80229B3C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229B8C;
    }
    // 0x80229B3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229B40: j           L_80229C0C
    // 0x80229B44: nop

        goto L_80229C0C;
    // 0x80229B44: nop

L_80229B48:
    // 0x80229B48: beq         $v1, $s2, L_80229BF4
    if (ctx->r3 == ctx->r18) {
        // 0x80229B4C: addiu       $v0, $zero, 0xB
        ctx->r2 = ADD32(0, 0XB);
            goto L_80229BF4;
    }
    // 0x80229B4C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80229B50: j           L_80229C0C
    // 0x80229B54: nop

        goto L_80229C0C;
    // 0x80229B54: nop

L_80229B58:
    // 0x80229B58: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80229B5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229B60: j           L_80229C00
    // 0x80229B64: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
        goto L_80229C00;
    // 0x80229B64: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
L_80229B68:
    // 0x80229B68: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229B6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229B70: j           L_80229C00
    // 0x80229B74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80229C00;
    // 0x80229B74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80229B78:
    // 0x80229B78: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80229B7C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229B80: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229B84: j           L_80229C00
    // 0x80229B88: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
        goto L_80229C00;
    // 0x80229B88: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
L_80229B8C:
    // 0x80229B8C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80229B90: lbu         $a3, 0x0($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X0);
    // 0x80229B94: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x80229B98: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229B9C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80229BA0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229BA4: andi        $a3, $a3, 0xFD
    ctx->r7 = ctx->r7 & 0XFD;
    // 0x80229BA8: andi        $v1, $v1, 0xFFF9
    ctx->r3 = ctx->r3 & 0XFFF9;
    // 0x80229BAC: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x80229BB0: sb          $a3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r7;
    // 0x80229BB4: j           L_80229C04
    // 0x80229BB8: sh          $v1, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r3;
        goto L_80229C04;
    // 0x80229BB8: sh          $v1, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r3;
L_80229BBC:
    // 0x80229BBC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229BC0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229BC4: lbu         $a3, 0x0($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X0);
    // 0x80229BC8: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x80229BCC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229BD0: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80229BD4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229BD8: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80229BDC: andi        $a3, $a3, 0xFD
    ctx->r7 = ctx->r7 & 0XFD;
    // 0x80229BE0: andi        $v1, $v1, 0xFFF9
    ctx->r3 = ctx->r3 & 0XFFF9;
    // 0x80229BE4: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x80229BE8: sb          $a3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r7;
    // 0x80229BEC: j           L_80229C04
    // 0x80229BF0: sh          $v1, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r3;
        goto L_80229C04;
    // 0x80229BF0: sh          $v1, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r3;
L_80229BF4:
    // 0x80229BF4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229BF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229BFC: addiu       $a1, $zero, 0x25
    ctx->r5 = ADD32(0, 0X25);
L_80229C00:
    // 0x80229C00: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
L_80229C04:
    // 0x80229C04: jal         0x80050294
    // 0x80229C08: nop

    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80229C08: nop

    after_3:
L_80229C0C:
    // 0x80229C0C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80229C10: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80229C14: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80229C18: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80229C1C: beq         $v1, $zero, L_80229CD4
    if (ctx->r3 == 0) {
        // 0x80229C20: sb          $v0, 0x3($s0)
        MEM_B(0X3, ctx->r16) = ctx->r2;
            goto L_80229CD4;
    }
    // 0x80229C20: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80229C24: jal         0x8004EFE4
    // 0x80229C28: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_4;
    // 0x80229C28: nop

    after_4:
    // 0x80229C2C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80229C30: beq         $v1, $zero, L_80229CD4
    if (ctx->r3 == 0) {
        // 0x80229C34: sw          $v1, 0x38($s1)
        MEM_W(0X38, ctx->r17) = ctx->r3;
            goto L_80229CD4;
    }
    // 0x80229C34: sw          $v1, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r3;
    // 0x80229C38: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229C3C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80229C40: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80229C44: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80229C48: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80229C4C: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80229C50: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80229C54: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    // 0x80229C58: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80229C5C: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80229C60: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x80229C64: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80229C68: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80229C6C: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x80229C70: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x80229C74: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80229C78: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80229C7C: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x80229C80: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80229C84: lh          $v0, 0x14($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X14);
    // 0x80229C88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229C8C: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80229C90: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80229C94: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x80229C98: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229C9C: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80229CA0: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80229CA4: lh          $v0, 0x18($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X18);
    // 0x80229CA8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229CAC: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80229CB0: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80229CB4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229CB8: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
    // 0x80229CBC: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80229CC0: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x80229CC4: sw          $v0, 0x9C($v1)
    MEM_W(0X9C, ctx->r3) = ctx->r2;
    // 0x80229CC8: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80229CCC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80229CD0: sw          $v0, 0xA0($v1)
    MEM_W(0XA0, ctx->r3) = ctx->r2;
L_80229CD4:
    // 0x80229CD4: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80229CD8: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80229CDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80229CE0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80229CE4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229CE8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229CEC: jr          $ra
    // 0x80229CF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229CF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D56C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D56C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022D570: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D574: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D578: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022D57C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D580: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8022D584: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022D588: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022D58C: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x8022D590: bne         $v0, $zero, L_8022D5EC
    if (ctx->r2 != 0) {
        // 0x8022D594: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022D5EC;
    }
    // 0x8022D594: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022D598: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D59C: lh          $a3, 0x34E($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X34E);
    // 0x8022D5A0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D5A4: jal         0x8004F820
    // 0x8022D5A8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022D5A8: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_0:
    // 0x8022D5AC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D5B0: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022D5B4: lw          $a0, 0x3FF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3FF0);
    // 0x8022D5B8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022D5BC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022D5C0: lui         $v0, 0x20
    ctx->r2 = S32(0X20 << 16);
    // 0x8022D5C4: and         $a0, $a0, $v0
    ctx->r4 = ctx->r4 & ctx->r2;
    // 0x8022D5C8: beq         $a0, $zero, L_8022D5EC
    if (ctx->r4 == 0) {
        // 0x8022D5CC: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022D5EC;
    }
    // 0x8022D5CC: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022D5D0: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022D5D4: jal         0x8022E310
    // 0x8022D5D8: nop

    func_8022E310_ovl7(rdram, ctx);
        goto after_1;
    // 0x8022D5D8: nop

    after_1:
    // 0x8022D5DC: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022D5E0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D5E4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022D5E8: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
L_8022D5EC:
    // 0x8022D5EC: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x8022D5F0: lb          $v0, -0x2414($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X2414);
    // 0x8022D5F4: bne         $v0, $zero, L_8022D618
    if (ctx->r2 != 0) {
        // 0x8022D5F8: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022D618;
    }
    // 0x8022D5F8: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022D5FC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022D600: sb          $v1, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r3;
    // 0x8022D604: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x8022D608: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x8022D60C: jal         0x8022E3A8
    // 0x8022D610: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022E3A8_ovl7(rdram, ctx);
        goto after_2;
    // 0x8022D610: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_2:
    // 0x8022D614: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022D618:
    // 0x8022D618: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022D61C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D620: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D624: jr          $ra
    // 0x8022D628: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022D628: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802342A0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802342A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802342A4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x802342A8: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x802342AC: addiu       $a0, $s2, 0x2C
    ctx->r4 = ADD32(ctx->r18, 0X2C);
    // 0x802342B0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x802342B4: addiu       $s1, $s2, 0x14
    ctx->r17 = ADD32(ctx->r18, 0X14);
    // 0x802342B8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802342BC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802342C0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x802342C4: jal         0x8009A3B4
    // 0x802342C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802342C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    after_0:
    // 0x802342CC: addiu       $a0, $s2, 0x34
    ctx->r4 = ADD32(ctx->r18, 0X34);
    // 0x802342D0: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    // 0x802342D4: jal         0x8009A3B4
    // 0x802342D8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802342D8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802342DC: addiu       $a0, $s2, 0x5C
    ctx->r4 = ADD32(ctx->r18, 0X5C);
    // 0x802342E0: addiu       $s0, $s2, 0x54
    ctx->r16 = ADD32(ctx->r18, 0X54);
    // 0x802342E4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802342E8: jal         0x8009A3B4
    // 0x802342EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802342EC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802342F0: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x802342F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802342F8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802342FC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234300: lw          $v0, -0x6A48($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6A48);
    // 0x80234304: jalr        $v0
    // 0x80234308: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80234308: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_3:
    // 0x8023430C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234310: addiu       $s0, $s2, 0x8C
    ctx->r16 = ADD32(ctx->r18, 0X8C);
    // 0x80234314: jal         0x80031600
    // 0x80234318: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_4;
    // 0x80234318: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8023431C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80234320: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80234324: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80234328: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8023432C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80234330: jal         0x80031DA8
    // 0x80234334: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_5;
    // 0x80234334: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_5:
    // 0x80234338: addiu       $a0, $s2, 0xAC
    ctx->r4 = ADD32(ctx->r18, 0XAC);
    // 0x8023433C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80234340: jal         0x8009A3B4
    // 0x80234344: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x80234344: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80234348: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8023434C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80234350: beq         $v0, $zero, L_8023436C
    if (ctx->r2 == 0) {
        // 0x80234354: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8023436C;
    }
    // 0x80234354: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x80234358: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8023435C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80234360: lui         $a3, 0x2000
    ctx->r7 = S32(0X2000 << 16);
    // 0x80234364: jal         0x80047284
    // 0x80234368: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    func_80047284_22684(rdram, ctx);
        goto after_7;
    // 0x80234368: ori         $a3, $a3, 0x8
    ctx->r7 = ctx->r7 | 0X8;
    after_7:
L_8023436C:
    // 0x8023436C: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x80234370: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80234374: beq         $v0, $zero, L_8023438C
    if (ctx->r2 == 0) {
        // 0x80234378: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8023438C;
    }
    // 0x80234378: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8023437C: addiu       $a1, $zero, 0x104
    ctx->r5 = ADD32(0, 0X104);
    // 0x80234380: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80234384: jal         0x8003B564
    // 0x80234388: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8003B564_16964(rdram, ctx);
        goto after_8;
    // 0x80234388: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_8:
L_8023438C:
    // 0x8023438C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80234390: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80234394: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80234398: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023439C: jr          $ra
    // 0x802343A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802343A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80234804_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234804: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234808: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023480C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80234810: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80234814: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80234818: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023481C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234820: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234824: lw          $v0, -0x6A14($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6A14);
    // 0x80234828: jalr        $v0
    // 0x8023482C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023482C: nop

    after_0:
    // 0x80234830: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80234834: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80234838: jal         0x8009A3B4
    // 0x8023483C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023483C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80234840: lhu         $v0, 0xC0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC0);
    // 0x80234844: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80234848: beq         $v0, $zero, L_80234864
    if (ctx->r2 == 0) {
        // 0x8023484C: nop
    
            goto L_80234864;
    }
    // 0x8023484C: nop

    // 0x80234850: lhu         $v0, 0xC0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC0);
    // 0x80234854: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80234858: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8023485C: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80234860: sh          $v0, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r2;
L_80234864:
    // 0x80234864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80234868: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023486C: jr          $ra
    // 0x80234870: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80234870: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DD00_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DD00: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8022DD04: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022DD08: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022DD0C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022DD10: addiu       $s1, $sp, 0x20
    ctx->r17 = ADD32(ctx->r29, 0X20);
    // 0x8022DD14: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022DD18: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x8022DD1C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8022DD20: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022DD24: lhu         $v0, 0x56($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X56);
    // 0x8022DD28: lbu         $v1, 0xAC($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0XAC);
    // 0x8022DD2C: addiu       $s3, $s2, 0x14
    ctx->r19 = ADD32(ctx->r18, 0X14);
    // 0x8022DD30: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022DD34: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022DD38: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022DD3C: sh          $v0, 0x34C($s2)
    MEM_H(0X34C, ctx->r18) = ctx->r2;
    // 0x8022DD40: sb          $v1, 0x34A($s2)
    MEM_B(0X34A, ctx->r18) = ctx->r3;
    // 0x8022DD44: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022DD48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022DD4C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022DD50: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022DD54: sb          $v0, 0x49B9($at)
    MEM_B(0X49B9, ctx->r1) = ctx->r2;
    // 0x8022DD58: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022DD5C: sb          $zero, 0x49BA($at)
    MEM_B(0X49BA, ctx->r1) = 0;
    // 0x8022DD60: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x8022DD64: jal         0x8009A3B4
    // 0x8022DD68: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022DD68: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022DD6C: lh          $v0, 0x14($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X14);
    // 0x8022DD70: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022DD74: lh          $v0, 0x16($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X16);
    // 0x8022DD78: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022DD7C: addiu       $v0, $v0, -0x30
    ctx->r2 = ADD32(ctx->r2, -0X30);
    // 0x8022DD80: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022DD84: lh          $v0, 0x18($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X18);
    // 0x8022DD88: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8022DD8C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022DD90: jal         0x8004EC38
    // 0x8022DD94: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x8022DD94: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x8022DD98: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8022DD9C: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x8022DDA0: lw          $a3, 0x435C($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X435C);
    // 0x8022DDA4: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022DDA8: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    // 0x8022DDAC: jal         0x80034FCC
    // 0x8022DDB0: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    func_80034FCC_103CC(rdram, ctx);
        goto after_2;
    // 0x8022DDB0: addiu       $a3, $a3, 0x6C
    ctx->r7 = ADD32(ctx->r7, 0X6C);
    after_2:
    // 0x8022DDB4: lbu         $a0, 0x2($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X2);
    // 0x8022DDB8: jal         0x8022E3A8
    // 0x8022DDBC: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    func_8022E3A8_ovl7(rdram, ctx);
        goto after_3;
    // 0x8022DDBC: addiu       $s1, $s2, 0x348
    ctx->r17 = ADD32(ctx->r18, 0X348);
    after_3:
    // 0x8022DDC0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022DDC4: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022DDC8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022DDCC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022DDD0: jal         0x8004F820
    // 0x8022DDD4: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022DDD4: sb          $v0, 0xAC($s2)
    MEM_B(0XAC, ctx->r18) = ctx->r2;
    after_4:
    // 0x8022DDD8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DDDC: bgez        $v0, L_8022DE08
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022DDE0: addu        $a0, $s3, $zero
        ctx->r4 = ADD32(ctx->r19, 0);
            goto L_8022DE08;
    }
    // 0x8022DDE0: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022DDE4: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022DDE8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022DDEC: jal         0x8004F820
    // 0x8022DDF0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_5;
    // 0x8022DDF0: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_5:
    // 0x8022DDF4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DDF8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022DDFC: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022DE00: j           L_8022DE20
    // 0x8022DE04: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
        goto L_8022DE20;
    // 0x8022DE04: srl         $v1, $v0, 3
    ctx->r3 = S32(U32(ctx->r2) >> 3);
L_8022DE08:
    // 0x8022DE08: lh          $a2, 0x56($s2)
    ctx->r6 = MEM_H(ctx->r18, 0X56);
    // 0x8022DE0C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022DE10: jal         0x8004F820
    // 0x8022DE14: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_6;
    // 0x8022DE14: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_6:
    // 0x8022DE18: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DE1C: sra         $v1, $v0, 19
    ctx->r3 = S32(SIGNED(ctx->r2) >> 19);
L_8022DE20:
    // 0x8022DE20: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x8022DE24: sh          $v1, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r3;
    // 0x8022DE28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DE2C: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    // 0x8022DE30: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022DE34: sb          $v0, 0x11B($s2)
    MEM_B(0X11B, ctx->r18) = ctx->r2;
    // 0x8022DE38: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x8022DE3C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8022DE40: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022DE44: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022DE48: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022DE4C: jr          $ra
    // 0x8022DE50: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x8022DE50: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022A458_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A458: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022A45C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022A460: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A464: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022A468: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022A46C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022A470: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A474: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022A478: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022A47C: beq         $v1, $zero, L_8022A498
    if (ctx->r3 == 0) {
        // 0x8022A480: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022A498;
    }
    // 0x8022A480: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022A484: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A488: beq         $v1, $v0, L_8022A4D8
    if (ctx->r3 == ctx->r2) {
        // 0x8022A48C: nop
    
            goto L_8022A4D8;
    }
    // 0x8022A48C: nop

    // 0x8022A490: j           L_8022A65C
    // 0x8022A494: nop

        goto L_8022A65C;
    // 0x8022A494: nop

L_8022A498:
    // 0x8022A498: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8022A49C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A4A0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A4A4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022A4A8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022A4AC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022A4B0: beq         $v1, $zero, L_8022A4C8
    if (ctx->r3 == 0) {
        // 0x8022A4B4: sh          $v0, 0x66($s0)
        MEM_H(0X66, ctx->r16) = ctx->r2;
            goto L_8022A4C8;
    }
    // 0x8022A4B4: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x8022A4B8: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x8022A4BC: sw          $v0, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->r2;
    // 0x8022A4C0: j           L_8022A4D4
    // 0x8022A4C4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
        goto L_8022A4D4;
    // 0x8022A4C4: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
L_8022A4C8:
    // 0x8022A4C8: ori         $v0, $zero, 0x8000
    ctx->r2 = 0 | 0X8000;
    // 0x8022A4CC: sw          $v0, 0x37C($s0)
    MEM_W(0X37C, ctx->r16) = ctx->r2;
    // 0x8022A4D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_8022A4D4:
    // 0x8022A4D4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022A4D8:
    // 0x8022A4D8: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x8022A4DC: andi        $v0, $v1, 0x10
    ctx->r2 = ctx->r3 & 0X10;
    // 0x8022A4E0: bne         $v0, $zero, L_8022A4F4
    if (ctx->r2 != 0) {
        // 0x8022A4E4: addiu       $a0, $s2, 0x1C
        ctx->r4 = ADD32(ctx->r18, 0X1C);
            goto L_8022A4F4;
    }
    // 0x8022A4E4: addiu       $a0, $s2, 0x1C
    ctx->r4 = ADD32(ctx->r18, 0X1C);
    // 0x8022A4E8: ori         $v0, $v1, 0x1
    ctx->r2 = ctx->r3 | 0X1;
    // 0x8022A4EC: j           L_8022A65C
    // 0x8022A4F0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_8022A65C;
    // 0x8022A4F0: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022A4F4:
    // 0x8022A4F4: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    // 0x8022A4F8: lh          $a1, 0x56($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X56);
    // 0x8022A4FC: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x8022A500: addiu       $a3, $s0, 0x1C
    ctx->r7 = ADD32(ctx->r16, 0X1C);
    // 0x8022A504: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x8022A508: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022A50C: jal         0x8004FC28
    // 0x8022A510: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FC28_2B028(rdram, ctx);
        goto after_0;
    // 0x8022A510: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_0:
    // 0x8022A514: beq         $v0, $zero, L_8022A530
    if (ctx->r2 == 0) {
        // 0x8022A518: addiu       $v1, $zero, 0x80
        ctx->r3 = ADD32(0, 0X80);
            goto L_8022A530;
    }
    // 0x8022A518: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8022A51C: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x8022A520: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
    // 0x8022A524: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022A528: j           L_8022A5A4
    // 0x8022A52C: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
        goto L_8022A5A4;
    // 0x8022A52C: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
L_8022A530:
    // 0x8022A530: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022A534: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x8022A538: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A53C: jal         0x8004F820
    // 0x8022A540: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022A540: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_1:
    // 0x8022A544: addu        $t0, $v0, $zero
    ctx->r8 = ADD32(ctx->r2, 0);
    // 0x8022A548: sll         $v0, $t0, 16
    ctx->r2 = S32(ctx->r8 << 16);
    // 0x8022A54C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A550: bltzl       $v0, L_8022A56C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022A554: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022A56C;
    }
    goto skip_0;
    // 0x8022A554: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
    // 0x8022A558: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8022A55C: bne         $v0, $zero, L_8022A578
    if (ctx->r2 != 0) {
        // 0x8022A560: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A578;
    }
    // 0x8022A560: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A564: j           L_8022A5B0
    // 0x8022A568: nop

        goto L_8022A5B0;
    // 0x8022A568: nop

L_8022A56C:
    // 0x8022A56C: slti        $v0, $v0, 0x10
    ctx->r2 = SIGNED(ctx->r2) < 0X10 ? 1 : 0;
    // 0x8022A570: beq         $v0, $zero, L_8022A5B0
    if (ctx->r2 == 0) {
        // 0x8022A574: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A5B0;
    }
    // 0x8022A574: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022A578:
    // 0x8022A578: lw          $v0, 0x80($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X80);
    // 0x8022A57C: lw          $v1, 0x34($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X34);
    // 0x8022A580: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022A584: beq         $v0, $zero, L_8022A5B0
    if (ctx->r2 == 0) {
        // 0x8022A588: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A5B0;
    }
    // 0x8022A588: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A58C: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x8022A590: bne         $v0, $zero, L_8022A59C
    if (ctx->r2 != 0) {
        // 0x8022A594: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_8022A59C;
    }
    // 0x8022A594: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022A598: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_8022A59C:
    // 0x8022A59C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022A5A0: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
L_8022A5A4:
    // 0x8022A5A4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x8022A5A8: j           L_8022A65C
    // 0x8022A5AC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022A65C;
    // 0x8022A5AC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022A5B0:
    // 0x8022A5B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A5B4: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022A5B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022A5BC: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A5C0: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022A5C4: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022A5C8: addu        $v0, $v0, $t0
    ctx->r2 = ADD32(ctx->r2, ctx->r8);
    // 0x8022A5CC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A5D0: jal         0x8004DA90
    // 0x8022A5D4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022A5D4: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022A5D8: jal         0x80040F30
    // 0x8022A5DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022A5DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022A5E0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A5E4: jal         0x8003E934
    // 0x8022A5E8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x8022A5E8: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_4:
    // 0x8022A5EC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A5F0: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022A5F4: lh          $a0, 0x2E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2E);
    // 0x8022A5F8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A5FC: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022A600: slti        $v1, $v1, 0x11
    ctx->r3 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x8022A604: bne         $v1, $zero, L_8022A640
    if (ctx->r3 != 0) {
        // 0x8022A608: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022A640;
    }
    // 0x8022A608: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022A60C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A610: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022A614: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A618: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022A61C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022A620: jal         0x8009A3B4
    // 0x8022A624: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022A624: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_5:
    // 0x8022A628: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022A62C: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022A630: jal         0x8009A3B4
    // 0x8022A634: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022A634: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x8022A638: j           L_8022A65C
    // 0x8022A63C: nop

        goto L_8022A65C;
    // 0x8022A63C: nop

L_8022A640:
    // 0x8022A640: andi        $v0, $s1, 0xF00
    ctx->r2 = ctx->r17 & 0XF00;
    // 0x8022A644: beq         $v0, $zero, L_8022A65C
    if (ctx->r2 == 0) {
        // 0x8022A648: nop
    
            goto L_8022A65C;
    }
    // 0x8022A648: nop

    // 0x8022A64C: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A650: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022A654: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A658: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022A65C:
    // 0x8022A65C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022A660: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022A664: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022A668: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022A66C: jr          $ra
    // 0x8022A670: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022A670: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022E218_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E218: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E21C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E220: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E224: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022E228: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E22C: lh          $a0, 0x34C($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34C);
    // 0x8022E230: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022E234: jal         0x8004FA7C
    // 0x8022E238: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022E238: lh          $a2, 0x34E($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X34E);
    after_0:
    // 0x8022E23C: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022E240: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8022E244: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
    // 0x8022E248: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022E24C: srl         $v1, $v1, 31
    ctx->r3 = S32(U32(ctx->r3) >> 31);
    // 0x8022E250: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022E254: beq         $v1, $zero, L_8022E288
    if (ctx->r3 == 0) {
        // 0x8022E258: nop
    
            goto L_8022E288;
    }
    // 0x8022E258: nop

    // 0x8022E25C: jal         0x8022E3A8
    // 0x8022E260: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022E3A8_ovl7(rdram, ctx);
        goto after_1;
    // 0x8022E260: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_1:
    // 0x8022E264: lbu         $v1, 0x34A($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34A);
    // 0x8022E268: lhu         $a0, 0x348($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X348);
    // 0x8022E26C: lbu         $a1, 0xD($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XD);
    // 0x8022E270: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022E274: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x8022E278: andi        $a1, $a1, 0x7
    ctx->r5 = ctx->r5 & 0X7;
    // 0x8022E27C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x8022E280: sh          $a0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r4;
    // 0x8022E284: sb          $a1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r5;
L_8022E288:
    // 0x8022E288: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022E28C: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x8022E290: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022E294: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022E298: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022E29C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E2A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E2A4: jr          $ra
    // 0x8022E2A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E2A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802334D0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802334D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802334D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802334D8: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x802334DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802334E0: bne         $v1, $v0, L_802334F8
    if (ctx->r3 != ctx->r2) {
        // 0x802334E4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802334F8;
    }
    // 0x802334E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802334E8: jal         0x802332C0
    // 0x802334EC: nop

    func_802332C0_ovl7(rdram, ctx);
        goto after_0;
    // 0x802334EC: nop

    after_0:
    // 0x802334F0: j           L_8023351C
    // 0x802334F4: nop

        goto L_8023351C;
    // 0x802334F4: nop

L_802334F8:
    // 0x802334F8: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x802334FC: beq         $v1, $v0, L_80233514
    if (ctx->r3 == ctx->r2) {
        // 0x80233500: nop
    
            goto L_80233514;
    }
    // 0x80233500: nop

    // 0x80233504: jal         0x80233398
    // 0x80233508: nop

    func_80233398_ovl7(rdram, ctx);
        goto after_1;
    // 0x80233508: nop

    after_1:
    // 0x8023350C: j           L_8023351C
    // 0x80233510: nop

        goto L_8023351C;
    // 0x80233510: nop

L_80233514:
    // 0x80233514: jal         0x8004F5C4
    // 0x80233518: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x80233518: nop

    after_2:
L_8023351C:
    // 0x8023351C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233520: jr          $ra
    // 0x80233524: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233524: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229CF4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229CF4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80229CF8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80229CFC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229D00: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80229D04: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80229D08: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80229D0C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x80229D10: beq         $v0, $zero, L_80229D20
    if (ctx->r2 == 0) {
        // 0x80229D14: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80229D20;
    }
    // 0x80229D14: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80229D18: jal         0x8022BC58
    // 0x80229D1C: nop

    func_8022BC58_ovl7(rdram, ctx);
        goto after_0;
    // 0x80229D1C: nop

    after_0:
L_80229D20:
    // 0x80229D20: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80229D24: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229D28: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229D2C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229D30: lw          $v0, -0x7574($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7574);
    // 0x80229D34: jalr        $v0
    // 0x80229D38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80229D38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80229D3C: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80229D40: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80229D44: beq         $v0, $zero, L_80229E68
    if (ctx->r2 == 0) {
        // 0x80229D48: nop
    
            goto L_80229E68;
    }
    // 0x80229D48: nop

    // 0x80229D4C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80229D50: addiu       $v1, $v0, -0x5
    ctx->r3 = ADD32(ctx->r2, -0X5);
    // 0x80229D54: sltiu       $v0, $v1, 0xA
    ctx->r2 = ctx->r3 < 0XA ? 1 : 0;
    // 0x80229D58: beq         $v0, $zero, L_80229DF4
    if (ctx->r2 == 0) {
        // 0x80229D5C: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80229DF4;
    }
    // 0x80229D5C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80229D60: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229D64: addu        $at, $at, $v0
    gpr jr_addend_80229D6C = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229D68: lw          $v0, -0x6268($at)
    ctx->r2 = ADD32(ctx->r1, -0X6268);
    // 0x80229D6C: jr          $v0
    // 0x80229D70: nop

    switch (jr_addend_80229D6C >> 2) {
        case 0: goto L_80229D84; break;
        case 1: goto L_80229D84; break;
        case 2: goto L_80229D84; break;
        case 3: goto L_80229D74; break;
        case 4: goto L_80229DA8; break;
        case 5: goto L_80229DA8; break;
        case 6: goto L_80229DA8; break;
        case 7: goto L_80229DF4; break;
        case 8: goto L_80229DDC; break;
        case 9: goto L_80229DDC; break;
        default: switch_error(__func__, 0x80229D6C, 0x80239D98);
    }
    // 0x80229D70: nop

L_80229D74:
    // 0x80229D74: jal         0x8004F418
    // 0x80229D78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_2;
    // 0x80229D78: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80229D7C: j           L_80229E5C
    // 0x80229D80: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80229E5C;
    // 0x80229D80: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80229D84:
    // 0x80229D84: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80229D88: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80229D8C: beq         $v0, $zero, L_80229E2C
    if (ctx->r2 == 0) {
        // 0x80229D90: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229E2C;
    }
    // 0x80229D90: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229D94: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80229D98: beq         $v0, $zero, L_80229E24
    if (ctx->r2 == 0) {
        // 0x80229D9C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80229E24;
    }
    // 0x80229D9C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229DA0: j           L_80229E2C
    // 0x80229DA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80229E2C;
    // 0x80229DA4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80229DA8:
    // 0x80229DA8: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x80229DAC: blez        $v0, L_80229DC4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80229DB0: addiu       $v0, $zero, 0x80
        ctx->r2 = ADD32(0, 0X80);
            goto L_80229DC4;
    }
    // 0x80229DB0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80229DB4: sh          $v0, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r2;
    // 0x80229DB8: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80229DBC: j           L_80229E58
    // 0x80229DC0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80229E58;
    // 0x80229DC0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229DC4:
    // 0x80229DC4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229DC8: andi        $v0, $v0, 0xFFFB
    ctx->r2 = ctx->r2 & 0XFFFB;
    // 0x80229DCC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80229DD0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80229DD4: j           L_80229E58
    // 0x80229DD8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80229E58;
    // 0x80229DD8: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229DDC:
    // 0x80229DDC: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80229DE0: beq         $v0, $zero, L_80229DF4
    if (ctx->r2 == 0) {
        // 0x80229DE4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80229DF4;
    }
    // 0x80229DE4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80229DE8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80229DEC: j           L_80229E58
    // 0x80229DF0: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
        goto L_80229E58;
    // 0x80229DF0: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
L_80229DF4:
    // 0x80229DF4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229DF8: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80229DFC: beq         $v0, $zero, L_80229E34
    if (ctx->r2 == 0) {
        // 0x80229E00: nop
    
            goto L_80229E34;
    }
    // 0x80229E00: nop

    // 0x80229E04: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80229E08: sltiu       $v0, $v0, 0x2
    ctx->r2 = ctx->r2 < 0X2 ? 1 : 0;
    // 0x80229E0C: beq         $v0, $zero, L_80229E2C
    if (ctx->r2 == 0) {
        // 0x80229E10: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229E2C;
    }
    // 0x80229E10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229E14: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80229E18: bne         $v0, $zero, L_80229E2C
    if (ctx->r2 != 0) {
        // 0x80229E1C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229E2C;
    }
    // 0x80229E1C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229E20: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_80229E24:
    // 0x80229E24: j           L_80229E58
    // 0x80229E28: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80229E58;
    // 0x80229E28: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229E2C:
    // 0x80229E2C: j           L_80229E58
    // 0x80229E30: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80229E58;
    // 0x80229E30: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229E34:
    // 0x80229E34: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80229E38: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80229E3C: beq         $v0, $zero, L_80229E4C
    if (ctx->r2 == 0) {
        // 0x80229E40: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229E4C;
    }
    // 0x80229E40: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229E44: j           L_80229E58
    // 0x80229E48: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
        goto L_80229E58;
    // 0x80229E48: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
L_80229E4C:
    // 0x80229E4C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229E50: jal         0x8022BB68
    // 0x80229E54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022BB68_ovl7(rdram, ctx);
        goto after_3;
    // 0x80229E54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80229E58:
    // 0x80229E58: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80229E5C:
    // 0x80229E5C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229E60: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80229E64: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80229E68:
    // 0x80229E68: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80229E6C: beq         $v0, $zero, L_80229ECC
    if (ctx->r2 == 0) {
        // 0x80229E70: nop
    
            goto L_80229ECC;
    }
    // 0x80229E70: nop

    // 0x80229E74: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80229E78: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80229E7C: sh          $v0, 0x14($v1)
    MEM_H(0X14, ctx->r3) = ctx->r2;
    // 0x80229E80: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x80229E84: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80229E88: addiu       $v0, $v0, -0x64
    ctx->r2 = ADD32(ctx->r2, -0X64);
    // 0x80229E8C: sh          $v0, 0x16($v1)
    MEM_H(0X16, ctx->r3) = ctx->r2;
    // 0x80229E90: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80229E94: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x80229E98: sh          $v0, 0x18($v1)
    MEM_H(0X18, ctx->r3) = ctx->r2;
    // 0x80229E9C: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80229EA0: lh          $v0, 0x14($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X14);
    // 0x80229EA4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229EA8: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x80229EAC: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80229EB0: lh          $v0, 0x16($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X16);
    // 0x80229EB4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229EB8: sw          $v0, 0x20($v1)
    MEM_W(0X20, ctx->r3) = ctx->r2;
    // 0x80229EBC: lw          $v1, 0x38($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X38);
    // 0x80229EC0: lh          $v0, 0x18($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X18);
    // 0x80229EC4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229EC8: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
L_80229ECC:
    // 0x80229ECC: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x80229ED0: beq         $v0, $zero, L_80229EE0
    if (ctx->r2 == 0) {
        // 0x80229ED4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80229EE0;
    }
    // 0x80229ED4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80229ED8: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80229EDC: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_80229EE0:
    // 0x80229EE0: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80229EE4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80229EE8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80229EEC: jr          $ra
    // 0x80229EF0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80229EF0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802266D8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802266D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802266DC: addiu       $a0, $zero, 0x23B
    ctx->r4 = ADD32(0, 0X23B);
    // 0x802266E0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x802266E4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802266E8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802266EC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802266F0: jal         0x8006033C
    // 0x802266F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802266F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x802266F8: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    // 0x802266FC: jal         0x8006033C
    // 0x80226700: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80226700: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80226704: sll         $s0, $s0, 1
    ctx->r16 = S32(ctx->r16 << 1);
    // 0x80226708: or          $s0, $s0, $v0
    ctx->r16 = ctx->r16 | ctx->r2;
    // 0x8022670C: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x80226710: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226714: beq         $v1, $v0, L_80226774
    if (ctx->r3 == ctx->r2) {
        // 0x80226718: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80226774;
    }
    // 0x80226718: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022671C: beql        $v0, $zero, L_80226734
    if (ctx->r2 == 0) {
        // 0x80226720: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226734;
    }
    goto skip_0;
    // 0x80226720: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80226724: beq         $v1, $zero, L_80226744
    if (ctx->r3 == 0) {
        // 0x80226728: nop
    
            goto L_80226744;
    }
    // 0x80226728: nop

    // 0x8022672C: j           L_802267C8
    // 0x80226730: nop

        goto L_802267C8;
    // 0x80226730: nop

L_80226734:
    // 0x80226734: beq         $v1, $v0, L_8022679C
    if (ctx->r3 == ctx->r2) {
        // 0x80226738: nop
    
            goto L_8022679C;
    }
    // 0x80226738: nop

    // 0x8022673C: j           L_802267C8
    // 0x80226740: nop

        goto L_802267C8;
    // 0x80226740: nop

L_80226744:
    // 0x80226744: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80226748: addiu       $s1, $s1, -0x3BB6
    ctx->r17 = ADD32(ctx->r17, -0X3BB6);
    // 0x8022674C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80226750: sltiu       $v0, $v0, 0xB
    ctx->r2 = ctx->r2 < 0XB ? 1 : 0;
    // 0x80226754: bne         $v0, $zero, L_802267C8
    if (ctx->r2 != 0) {
        // 0x80226758: nop
    
            goto L_802267C8;
    }
    // 0x80226758: nop

    // 0x8022675C: jal         0x8006036C
    // 0x80226760: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    func_8006036C_3B76C(rdram, ctx);
        goto after_2;
    // 0x80226760: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    after_2:
    // 0x80226764: jal         0x80060590
    // 0x80226768: addiu       $a0, $zero, 0x23B
    ctx->r4 = ADD32(0, 0X23B);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x80226768: addiu       $a0, $zero, 0x23B
    ctx->r4 = ADD32(0, 0X23B);
    after_3:
    // 0x8022676C: j           L_802267C8
    // 0x80226770: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
        goto L_802267C8;
    // 0x80226770: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
L_80226774:
    // 0x80226774: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x80226778: addiu       $s1, $s1, -0x3BB6
    ctx->r17 = ADD32(ctx->r17, -0X3BB6);
    // 0x8022677C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80226780: sltiu       $v0, $v0, 0x15
    ctx->r2 = ctx->r2 < 0X15 ? 1 : 0;
    // 0x80226784: bne         $v0, $zero, L_802267C8
    if (ctx->r2 != 0) {
        // 0x80226788: nop
    
            goto L_802267C8;
    }
    // 0x80226788: nop

    // 0x8022678C: jal         0x80060590
    // 0x80226790: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    func_80060590_3B990(rdram, ctx);
        goto after_4;
    // 0x80226790: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    after_4:
    // 0x80226794: j           L_802267BC
    // 0x80226798: nop

        goto L_802267BC;
    // 0x80226798: nop

L_8022679C:
    // 0x8022679C: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x802267A0: addiu       $s1, $s1, -0x3BB6
    ctx->r17 = ADD32(ctx->r17, -0X3BB6);
    // 0x802267A4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802267A8: sltiu       $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 < 0X1F ? 1 : 0;
    // 0x802267AC: bne         $v0, $zero, L_802267C8
    if (ctx->r2 != 0) {
        // 0x802267B0: nop
    
            goto L_802267C8;
    }
    // 0x802267B0: nop

    // 0x802267B4: jal         0x8006036C
    // 0x802267B8: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x802267B8: addiu       $a0, $zero, 0x23A
    ctx->r4 = ADD32(0, 0X23A);
    after_5:
L_802267BC:
    // 0x802267BC: jal         0x8006036C
    // 0x802267C0: addiu       $a0, $zero, 0x23B
    ctx->r4 = ADD32(0, 0X23B);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x802267C0: addiu       $a0, $zero, 0x23B
    ctx->r4 = ADD32(0, 0X23B);
    after_6:
    // 0x802267C4: sh          $zero, 0x0($s1)
    MEM_H(0X0, ctx->r17) = 0;
L_802267C8:
    // 0x802267C8: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802267CC: lb          $v1, -0x3BC7($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC7);
    // 0x802267D0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802267D4: bne         $v1, $v0, L_802267F0
    if (ctx->r3 != ctx->r2) {
        // 0x802267D8: andi        $v1, $s0, 0xFF
        ctx->r3 = ctx->r16 & 0XFF;
            goto L_802267F0;
    }
    // 0x802267D8: andi        $v1, $s0, 0xFF
    ctx->r3 = ctx->r16 & 0XFF;
    // 0x802267DC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802267E0: addiu       $v0, $v0, 0x756C
    ctx->r2 = ADD32(ctx->r2, 0X756C);
    // 0x802267E4: addu        $s1, $v1, $v0
    ctx->r17 = ADD32(ctx->r3, ctx->r2);
    // 0x802267E8: j           L_80226800
    // 0x802267EC: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
        goto L_80226800;
    // 0x802267EC: addiu       $v1, $zero, 0xA
    ctx->r3 = ADD32(0, 0XA);
L_802267F0:
    // 0x802267F0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802267F4: addiu       $v0, $v0, 0x7568
    ctx->r2 = ADD32(ctx->r2, 0X7568);
    // 0x802267F8: addu        $s1, $v1, $v0
    ctx->r17 = ADD32(ctx->r3, ctx->r2);
    // 0x802267FC: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80226800:
    // 0x80226800: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80226804: beq         $v0, $zero, L_8022684C
    if (ctx->r2 == 0) {
        // 0x80226808: addu        $s0, $zero, $zero
        ctx->r16 = ADD32(0, 0);
            goto L_8022684C;
    }
    // 0x80226808: addu        $s0, $zero, $zero
    ctx->r16 = ADD32(0, 0);
    // 0x8022680C: andi        $s2, $v1, 0xFF
    ctx->r18 = ctx->r3 & 0XFF;
    // 0x80226810: lui         $s3, 0x8023
    ctx->r19 = S32(0X8023 << 16);
    // 0x80226814: addiu       $s3, $s3, 0x73CC
    ctx->r19 = ADD32(ctx->r19, 0X73CC);
    // 0x80226818: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_8022681C:
    // 0x8022681C: addu        $v0, $s2, $v0
    ctx->r2 = ADD32(ctx->r18, ctx->r2);
    // 0x80226820: sll         $a0, $v0, 2
    ctx->r4 = S32(ctx->r2 << 2);
    // 0x80226824: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80226828: sll         $a0, $a0, 2
    ctx->r4 = S32(ctx->r4 << 2);
    // 0x8022682C: jal         0x8005FB30
    // 0x80226830: addu        $a0, $a0, $s3
    ctx->r4 = ADD32(ctx->r4, ctx->r19);
    func_8005FB30_3AF30(rdram, ctx);
        goto after_7;
    // 0x80226830: addu        $a0, $a0, $s3
    ctx->r4 = ADD32(ctx->r4, ctx->r19);
    after_7:
    // 0x80226834: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80226838: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8022683C: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
    // 0x80226840: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80226844: bne         $v0, $zero, L_8022681C
    if (ctx->r2 != 0) {
        // 0x80226848: andi        $v0, $s0, 0xFF
        ctx->r2 = ctx->r16 & 0XFF;
            goto L_8022681C;
    }
    // 0x80226848: andi        $v0, $s0, 0xFF
    ctx->r2 = ctx->r16 & 0XFF;
L_8022684C:
    // 0x8022684C: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80226850: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80226854: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226858: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022685C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226860: jr          $ra
    // 0x80226864: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226864: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80226868: nop

    // 0x8022686C: nop

;}
RECOMP_FUNC void func_8022CAE4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CAE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CAE8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CAEC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CAF0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022CAF4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CAF8: lh          $v0, 0x362($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X362);
    // 0x8022CAFC: bne         $v0, $zero, L_8022CB3C
    if (ctx->r2 != 0) {
        // 0x8022CB00: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022CB3C;
    }
    // 0x8022CB00: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022CB04: lh          $v0, 0x35C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X35C);
    // 0x8022CB08: bne         $v0, $zero, L_8022CB30
    if (ctx->r2 != 0) {
        // 0x8022CB0C: nop
    
            goto L_8022CB30;
    }
    // 0x8022CB0C: nop

    // 0x8022CB10: lh          $v1, 0x360($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X360);
    // 0x8022CB14: lh          $v0, 0x366($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X366);
    // 0x8022CB18: bne         $v1, $v0, L_8022CB30
    if (ctx->r3 != ctx->r2) {
        // 0x8022CB1C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022CB30;
    }
    // 0x8022CB1C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022CB20: lhu         $v0, 0x352($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X352);
    // 0x8022CB24: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x8022CB28: j           L_8022CB6C
    // 0x8022CB2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
        goto L_8022CB6C;
    // 0x8022CB2C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
L_8022CB30:
    // 0x8022CB30: lh          $v0, 0x1A($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X1A);
    // 0x8022CB34: beq         $v0, $zero, L_8022CB9C
    if (ctx->r2 == 0) {
        // 0x8022CB38: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CB9C;
    }
    // 0x8022CB38: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022CB3C:
    // 0x8022CB3C: lh          $v0, 0x14($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X14);
    // 0x8022CB40: bne         $v0, $zero, L_8022CB9C
    if (ctx->r2 != 0) {
        // 0x8022CB44: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CB9C;
    }
    // 0x8022CB44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CB48: lh          $v1, 0x18($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X18);
    // 0x8022CB4C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CB50: bne         $v1, $v0, L_8022CB9C
    if (ctx->r3 != ctx->r2) {
        // 0x8022CB54: addiu       $a1, $s1, 0xC
        ctx->r5 = ADD32(ctx->r17, 0XC);
            goto L_8022CB9C;
    }
    // 0x8022CB54: addiu       $a1, $s1, 0xC
    ctx->r5 = ADD32(ctx->r17, 0XC);
    // 0x8022CB58: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022CB5C: lhu         $v0, 0xA($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XA);
    // 0x8022CB60: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022CB64: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022CB68: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
L_8022CB6C:
    // 0x8022CB6C: jal         0x8009A3B4
    // 0x8022CB70: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022CB70: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022CB74: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022CB78: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022CB7C: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022CB80: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CB84: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022CB88: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022CB8C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022CB90: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022CB94: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022CB98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8022CB9C:
    // 0x8022CB9C: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022CBA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CBA4: jal         0x8004DA90
    // 0x8022CBA8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022CBA8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022CBAC: lhu         $v0, 0x18($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X18);
    // 0x8022CBB0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CBB4: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x8022CBB8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CBBC: bne         $v0, $zero, L_8022CBEC
    if (ctx->r2 != 0) {
        // 0x8022CBC0: nop
    
            goto L_8022CBEC;
    }
    // 0x8022CBC0: nop

    // 0x8022CBC4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CBC8: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022CBCC: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022CBD0: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022CBD4: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x8022CBD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CBDC: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022CBE0: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022CBE4: j           L_8022CC3C
    // 0x8022CBE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022CC3C;
    // 0x8022CBE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022CBEC:
    // 0x8022CBEC: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x8022CBF0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CBF4: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022CBF8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CBFC: bne         $v0, $zero, L_8022CC0C
    if (ctx->r2 != 0) {
        // 0x8022CC00: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CC0C;
    }
    // 0x8022CC00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CC04: j           L_8022CC3C
    // 0x8022CC08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8022CC3C;
    // 0x8022CC08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8022CC0C:
    // 0x8022CC0C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022CC10: jal         0x8022E444
    // 0x8022CC14: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    func_8022E444_ovl7(rdram, ctx);
        goto after_2;
    // 0x8022CC14: addiu       $a2, $zero, 0x64
    ctx->r6 = ADD32(0, 0X64);
    after_2:
    // 0x8022CC18: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022CC1C: beq         $v0, $zero, L_8022CC40
    if (ctx->r2 == 0) {
        // 0x8022CC20: nop
    
            goto L_8022CC40;
    }
    // 0x8022CC20: nop

    // 0x8022CC24: jal         0x8022E3A8
    // 0x8022CC28: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    func_8022E3A8_ovl7(rdram, ctx);
        goto after_3;
    // 0x8022CC28: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    after_3:
    // 0x8022CC2C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022CC30: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022CC34: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022CC38: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_8022CC3C:
    // 0x8022CC3C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022CC40:
    // 0x8022CC40: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022CC44: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CC48: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CC4C: jr          $ra
    // 0x8022CC50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CC50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022EE28_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EE28: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022EE2C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022EE30: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022EE34: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022EE38: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022EE3C: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022EE40: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022EE44: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022EE48: sltiu       $v0, $v1, 0xF
    ctx->r2 = ctx->r3 < 0XF ? 1 : 0;
    // 0x8022EE4C: beq         $v0, $zero, L_8022F0D0
    if (ctx->r2 == 0) {
        // 0x8022EE50: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022F0D0;
    }
    // 0x8022EE50: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022EE54: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022EE58: addu        $at, $at, $v0
    gpr jr_addend_8022EE60 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022EE5C: lw          $v0, -0x6170($at)
    ctx->r2 = ADD32(ctx->r1, -0X6170);
    // 0x8022EE60: jr          $v0
    // 0x8022EE64: nop

    switch (jr_addend_8022EE60 >> 2) {
        case 0: goto L_8022EE68; break;
        case 1: goto L_8022EE7C; break;
        case 2: goto L_8022EEA4; break;
        case 3: goto L_8022EEF0; break;
        case 4: goto L_8022EF08; break;
        case 5: goto L_8022EF34; break;
        case 6: goto L_8022EF4C; break;
        case 7: goto L_8022EF70; break;
        case 8: goto L_8022EF88; break;
        case 9: goto L_8022EFAC; break;
        case 10: goto L_8022EFC4; break;
        case 11: goto L_8022EFF0; break;
        case 12: goto L_8022F008; break;
        case 13: goto L_8022F034; break;
        case 14: goto L_8022F09C; break;
        default: switch_error(__func__, 0x8022EE60, 0x80239E90);
    }
    // 0x8022EE64: nop

L_8022EE68:
    // 0x8022EE68: jal         0x8022F110
    // 0x8022EE6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8022F110_ovl7(rdram, ctx);
        goto after_0;
    // 0x8022EE6C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_0:
    // 0x8022EE70: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022EE74: j           L_8022F094
    // 0x8022EE78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022F094;
    // 0x8022EE78: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022EE7C:
    // 0x8022EE7C: lw          $v0, 0x184($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X184);
    // 0x8022EE80: bne         $v0, $s1, L_8022F0D0
    if (ctx->r2 != ctx->r17) {
        // 0x8022EE84: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022F0D0;
    }
    // 0x8022EE84: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022EE88: sw          $zero, 0x184($a1)
    MEM_W(0X184, ctx->r5) = 0;
    // 0x8022EE8C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x8022EE90: sb          $v0, -0x359C($at)
    MEM_B(-0X359C, ctx->r1) = ctx->r2;
    // 0x8022EE94: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022EE98: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022EE9C: j           L_8022F090
    // 0x8022EEA0: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
        goto L_8022F090;
    // 0x8022EEA0: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
L_8022EEA4:
    // 0x8022EEA4: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022EEA8: bne         $v0, $zero, L_8022EEE8
    if (ctx->r2 != 0) {
        // 0x8022EEAC: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022EEE8;
    }
    // 0x8022EEAC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022EEB0: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022EEB4: lh          $a3, 0x64($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X64);
    // 0x8022EEB8: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022EEBC: jal         0x8004F820
    // 0x8022EEC0: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022EEC0: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_1:
    // 0x8022EEC4: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8022EEC8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EECC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022EED0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EED4: bne         $v0, $zero, L_8022F0D0
    if (ctx->r2 != 0) {
        // 0x8022EED8: sh          $v1, 0x56($s1)
        MEM_H(0X56, ctx->r17) = ctx->r3;
            goto L_8022F0D0;
    }
    // 0x8022EED8: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x8022EEDC: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022EEE0: j           L_8022F094
    // 0x8022EEE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022F094;
    // 0x8022EEE4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022EEE8:
    // 0x8022EEE8: j           L_8022F0D0
    // 0x8022EEEC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
        goto L_8022F0D0;
    // 0x8022EEEC: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_8022EEF0:
    // 0x8022EEF0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022EEF4: jal         0x800616FC
    // 0x8022EEF8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_2;
    // 0x8022EEF8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_2:
    // 0x8022EEFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022EF00: j           L_8022F080
    // 0x8022EF04: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_8022F080;
    // 0x8022EF04: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_8022EF08:
    // 0x8022EF08: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022EF0C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022EF10: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022EF14: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022EF18: bne         $v0, $zero, L_8022F0D0
    if (ctx->r2 != 0) {
        // 0x8022EF1C: nop
    
            goto L_8022F0D0;
    }
    // 0x8022EF1C: nop

    // 0x8022EF20: jal         0x800600F8
    // 0x8022EF24: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_3;
    // 0x8022EF24: nop

    after_3:
    // 0x8022EF28: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022EF2C: j           L_8022F094
    // 0x8022EF30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022F094;
    // 0x8022EF30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022EF34:
    // 0x8022EF34: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022EF38: jal         0x800616FC
    // 0x8022EF3C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_4;
    // 0x8022EF3C: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_4:
    // 0x8022EF40: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022EF44: j           L_8022F094
    // 0x8022EF48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022F094;
    // 0x8022EF48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022EF4C:
    // 0x8022EF4C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022EF50: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022EF54: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022EF58: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022EF5C: bne         $v0, $zero, L_8022F0D0
    if (ctx->r2 != 0) {
        // 0x8022EF60: nop
    
            goto L_8022F0D0;
    }
    // 0x8022EF60: nop

    // 0x8022EF64: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022EF68: j           L_8022F094
    // 0x8022EF6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022F094;
    // 0x8022EF6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022EF70:
    // 0x8022EF70: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022EF74: jal         0x800616FC
    // 0x8022EF78: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x8022EF78: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_5:
    // 0x8022EF7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022EF80: j           L_8022F080
    // 0x8022EF84: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_8022F080;
    // 0x8022EF84: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_8022EF88:
    // 0x8022EF88: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022EF8C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022EF90: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022EF94: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022EF98: bne         $v0, $zero, L_8022F0D0
    if (ctx->r2 != 0) {
        // 0x8022EF9C: nop
    
            goto L_8022F0D0;
    }
    // 0x8022EF9C: nop

    // 0x8022EFA0: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022EFA4: j           L_8022F094
    // 0x8022EFA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022F094;
    // 0x8022EFA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022EFAC:
    // 0x8022EFAC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022EFB0: jal         0x800616FC
    // 0x8022EFB4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_6;
    // 0x8022EFB4: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_6:
    // 0x8022EFB8: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022EFBC: j           L_8022F094
    // 0x8022EFC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022F094;
    // 0x8022EFC0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022EFC4:
    // 0x8022EFC4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022EFC8: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022EFCC: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022EFD0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022EFD4: bne         $v0, $zero, L_8022F0D0
    if (ctx->r2 != 0) {
        // 0x8022EFD8: nop
    
            goto L_8022F0D0;
    }
    // 0x8022EFD8: nop

    // 0x8022EFDC: jal         0x800600F8
    // 0x8022EFE0: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_7;
    // 0x8022EFE0: nop

    after_7:
    // 0x8022EFE4: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022EFE8: j           L_8022F094
    // 0x8022EFEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022F094;
    // 0x8022EFEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022EFF0:
    // 0x8022EFF0: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022EFF4: jal         0x800616FC
    // 0x8022EFF8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_8;
    // 0x8022EFF8: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_8:
    // 0x8022EFFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F000: j           L_8022F080
    // 0x8022F004: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
        goto L_8022F080;
    // 0x8022F004: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_8022F008:
    // 0x8022F008: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022F00C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x8022F010: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x8022F014: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022F018: bne         $v0, $zero, L_8022F0D0
    if (ctx->r2 != 0) {
        // 0x8022F01C: nop
    
            goto L_8022F0D0;
    }
    // 0x8022F01C: nop

    // 0x8022F020: jal         0x800600F8
    // 0x8022F024: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_9;
    // 0x8022F024: nop

    after_9:
    // 0x8022F028: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022F02C: j           L_8022F094
    // 0x8022F030: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022F094;
    // 0x8022F030: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022F034:
    // 0x8022F034: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x8022F038: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F03C: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8022F040: addiu       $a1, $a1, -0x6178
    ctx->r5 = ADD32(ctx->r5, -0X6178);
    // 0x8022F044: jal         0x8009A3B4
    // 0x8022F048: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x8022F048: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x8022F04C: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022F050: lh          $a3, 0x64($s1)
    ctx->r7 = MEM_H(ctx->r17, 0X64);
    // 0x8022F054: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x8022F058: jal         0x8004F820
    // 0x8022F05C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004F820_2AC20(rdram, ctx);
        goto after_11;
    // 0x8022F05C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_11:
    // 0x8022F060: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8022F064: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F068: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022F06C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F070: bne         $v0, $zero, L_8022F0D0
    if (ctx->r2 != 0) {
        // 0x8022F074: sh          $v1, 0x56($s1)
        MEM_H(0X56, ctx->r17) = ctx->r3;
            goto L_8022F0D0;
    }
    // 0x8022F074: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x8022F078: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F07C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022F080:
    // 0x8022F080: jal         0x80050294
    // 0x8022F084: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_12;
    // 0x8022F084: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_12:
    // 0x8022F088: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022F08C: sb          $zero, 0x9($s1)
    MEM_B(0X9, ctx->r17) = 0;
L_8022F090:
    // 0x8022F090: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022F094:
    // 0x8022F094: j           L_8022F0D0
    // 0x8022F098: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
        goto L_8022F0D0;
    // 0x8022F098: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
L_8022F09C:
    // 0x8022F09C: jal         0x8006033C
    // 0x8022F0A0: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_13;
    // 0x8022F0A0: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_13:
    // 0x8022F0A4: bne         $v0, $zero, L_8022F0D0
    if (ctx->r2 != 0) {
        // 0x8022F0A8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022F0D0;
    }
    // 0x8022F0A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F0AC: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8022F0B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F0B4: jal         0x8004DA90
    // 0x8022F0B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_14;
    // 0x8022F0B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_14:
    // 0x8022F0BC: lb          $v0, 0xA6($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XA6);
    // 0x8022F0C0: beq         $v0, $zero, L_8022F0D0
    if (ctx->r2 == 0) {
        // 0x8022F0C4: addiu       $a0, $zero, 0x111
        ctx->r4 = ADD32(0, 0X111);
            goto L_8022F0D0;
    }
    // 0x8022F0C4: addiu       $a0, $zero, 0x111
    ctx->r4 = ADD32(0, 0X111);
    // 0x8022F0C8: jal         0x8002A33C
    // 0x8022F0CC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_15;
    // 0x8022F0CC: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_15:
L_8022F0D0:
    // 0x8022F0D0: jal         0x8006033C
    // 0x8022F0D4: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_16;
    // 0x8022F0D4: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_16:
    // 0x8022F0D8: beq         $v0, $zero, L_8022F0EC
    if (ctx->r2 == 0) {
        // 0x8022F0DC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022F0EC;
    }
    // 0x8022F0DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022F0E0: jal         0x8004F418
    // 0x8022F0E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_17;
    // 0x8022F0E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_17:
    // 0x8022F0E8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8022F0EC:
    // 0x8022F0EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022F0F0: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x8022F0F4: jal         0x80047284
    // 0x8022F0F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_18;
    // 0x8022F0F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_18:
    // 0x8022F0FC: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022F100: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022F104: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022F108: jr          $ra
    // 0x8022F10C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022F10C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80232BA8_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232BA8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80232BAC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80232BB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232BB4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x80232BB8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80232BBC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80232BC0: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80232BC4: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80232BC8: beq         $v1, $zero, L_80232BE4
    if (ctx->r3 == 0) {
        // 0x80232BCC: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80232BE4;
    }
    // 0x80232BCC: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80232BD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232BD4: beq         $v1, $v0, L_80232C2C
    if (ctx->r3 == ctx->r2) {
        // 0x80232BD8: nop
    
            goto L_80232C2C;
    }
    // 0x80232BD8: nop

    // 0x80232BDC: j           L_80232D70
    // 0x80232BE0: nop

        goto L_80232D70;
    // 0x80232BE0: nop

L_80232BE4:
    // 0x80232BE4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232BE8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80232BEC: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80232BF0: lhu         $v1, 0x4A06($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4A06);
    // 0x80232BF4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232BF8: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80232BFC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80232C00: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80232C04: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80232C08: sh          $v0, 0x364($s0)
    MEM_H(0X364, ctx->r16) = ctx->r2;
    // 0x80232C0C: sh          $zero, 0x368($s0)
    MEM_H(0X368, ctx->r16) = 0;
    // 0x80232C10: sh          $zero, 0x366($s0)
    MEM_H(0X366, ctx->r16) = 0;
    // 0x80232C14: jal         0x80050294
    // 0x80232C18: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80232C18: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_0:
    // 0x80232C1C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80232C20: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80232C24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232C28: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80232C2C:
    // 0x80232C2C: lw          $v0, 0xC($s3)
    ctx->r2 = MEM_W(ctx->r19, 0XC);
    // 0x80232C30: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80232C34: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80232C38: beq         $v0, $zero, L_80232C7C
    if (ctx->r2 == 0) {
        // 0x80232C3C: addiu       $a1, $s0, 0x2C
        ctx->r5 = ADD32(ctx->r16, 0X2C);
            goto L_80232C7C;
    }
    // 0x80232C3C: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80232C40: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232C44: jal         0x8009A3B4
    // 0x80232C48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80232C48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80232C4C: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80232C50: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80232C54: jal         0x8009A3B4
    // 0x80232C58: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80232C58: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x80232C5C: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80232C60: beq         $v0, $zero, L_80232D70
    if (ctx->r2 == 0) {
        // 0x80232C64: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232D70;
    }
    // 0x80232C64: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232C68: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232C6C: jal         0x80050294
    // 0x80232C70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80232C70: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80232C74: j           L_80232D70
    // 0x80232C78: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
        goto L_80232D70;
    // 0x80232C78: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80232C7C:
    // 0x80232C7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232C80: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80232C84: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232C88: jal         0x8004DA90
    // 0x80232C8C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x80232C8C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
    // 0x80232C90: jal         0x80040F30
    // 0x80232C94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_5;
    // 0x80232C94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80232C98: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80232C9C: beq         $s2, $zero, L_80232CAC
    if (ctx->r18 == 0) {
        // 0x80232CA0: addiu       $a0, $s0, 0x44
        ctx->r4 = ADD32(ctx->r16, 0X44);
            goto L_80232CAC;
    }
    // 0x80232CA0: addiu       $a0, $s0, 0x44
    ctx->r4 = ADD32(ctx->r16, 0X44);
    // 0x80232CA4: jal         0x80040834
    // 0x80232CA8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_80040834_1BC34(rdram, ctx);
        goto after_6;
    // 0x80232CA8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_6:
L_80232CAC:
    // 0x80232CAC: lh          $a2, 0x44($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X44);
    // 0x80232CB0: lh          $v0, 0x1C($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X1C);
    // 0x80232CB4: bgez        $a2, L_80232CC0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80232CB8: addu        $v1, $a2, $zero
        ctx->r3 = ADD32(ctx->r6, 0);
            goto L_80232CC0;
    }
    // 0x80232CB8: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x80232CBC: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
L_80232CC0:
    // 0x80232CC0: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80232CC4: bltzl       $v0, L_80232CCC
    if (SIGNED(ctx->r2) < 0) {
        // 0x80232CC8: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_80232CCC;
    }
    goto skip_0;
    // 0x80232CC8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_80232CCC:
    // 0x80232CCC: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80232CD0: bne         $v0, $zero, L_80232CE4
    if (ctx->r2 != 0) {
        // 0x80232CD4: addu        $a1, $a2, $zero
        ctx->r5 = ADD32(ctx->r6, 0);
            goto L_80232CE4;
    }
    // 0x80232CD4: addu        $a1, $a2, $zero
    ctx->r5 = ADD32(ctx->r6, 0);
    // 0x80232CD8: sh          $zero, 0x1C($s3)
    MEM_H(0X1C, ctx->r19) = 0;
    // 0x80232CDC: j           L_80232CF4
    // 0x80232CE0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
        goto L_80232CF4;
    // 0x80232CE0: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
L_80232CE4:
    // 0x80232CE4: bgez        $a2, L_80232CF0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x80232CE8: subu        $v0, $a1, $a0
        ctx->r2 = SUB32(ctx->r5, ctx->r4);
            goto L_80232CF0;
    }
    // 0x80232CE8: subu        $v0, $a1, $a0
    ctx->r2 = SUB32(ctx->r5, ctx->r4);
    // 0x80232CEC: addu        $v0, $a1, $a0
    ctx->r2 = ADD32(ctx->r5, ctx->r4);
L_80232CF0:
    // 0x80232CF0: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_80232CF4:
    // 0x80232CF4: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80232CF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232CFC: jal         0x8004DE68
    // 0x80232D00: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    func_8004DE68_29268(rdram, ctx);
        goto after_7;
    // 0x80232D00: addiu       $a1, $s3, 0x24
    ctx->r5 = ADD32(ctx->r19, 0X24);
    after_7:
    // 0x80232D04: sltiu       $v0, $v0, 0x1001
    ctx->r2 = ctx->r2 < 0X1001 ? 1 : 0;
    // 0x80232D08: bne         $v0, $zero, L_80232D34
    if (ctx->r2 != 0) {
        // 0x80232D0C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232D34;
    }
    // 0x80232D0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232D10: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80232D14: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80232D18: jal         0x8009A3B4
    // 0x80232D1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80232D1C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x80232D20: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80232D24: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80232D28: jal         0x8009A3B4
    // 0x80232D2C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80232D2C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_9:
    // 0x80232D30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80232D34:
    // 0x80232D34: jal         0x802330A4
    // 0x80232D38: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    func_802330A4_ovl7(rdram, ctx);
        goto after_10;
    // 0x80232D38: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    after_10:
    // 0x80232D3C: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x80232D40: bgez        $v0, L_80232D70
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80232D44: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232D70;
    }
    // 0x80232D44: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232D48: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80232D4C: jal         0x80050294
    // 0x80232D50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_11;
    // 0x80232D50: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_11:
    // 0x80232D54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232D58: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x80232D5C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80232D60: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80232D64: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80232D68: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80232D6C: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
L_80232D70:
    // 0x80232D70: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80232D74: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80232D78: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80232D7C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80232D80: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80232D84: jr          $ra
    // 0x80232D88: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80232D88: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022F7AC_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F7AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022F7B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022F7B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F7B8: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022F7BC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022F7C0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022F7C4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8022F7C8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x8022F7CC: sltiu       $v0, $v1, 0x9
    ctx->r2 = ctx->r3 < 0X9 ? 1 : 0;
    // 0x8022F7D0: beq         $v0, $zero, L_8022FC4C
    if (ctx->r2 == 0) {
        // 0x8022F7D4: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022FC4C;
    }
    // 0x8022F7D4: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022F7D8: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022F7DC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F7E0: addu        $at, $at, $v0
    gpr jr_addend_8022F7E8 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F7E4: lw          $v0, -0x6108($at)
    ctx->r2 = ADD32(ctx->r1, -0X6108);
    // 0x8022F7E8: jr          $v0
    // 0x8022F7EC: nop

    switch (jr_addend_8022F7E8 >> 2) {
        case 0: goto L_8022F7F0; break;
        case 1: goto L_8022F8D4; break;
        case 2: goto L_8022F97C; break;
        case 3: goto L_8022F9C0; break;
        case 4: goto L_8022FA3C; break;
        case 5: goto L_8022FAE4; break;
        case 6: goto L_8022FB60; break;
        case 7: goto L_8022FC4C; break;
        case 8: goto L_8022FC0C; break;
        default: switch_error(__func__, 0x8022F7E8, 0x80239EF8);
    }
    // 0x8022F7EC: nop

L_8022F7F0:
    // 0x8022F7F0: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F7F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F7F8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F7FC: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022F800: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022F804: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x8022F808: sh          $v0, 0x64($s0)
    MEM_H(0X64, ctx->r16) = ctx->r2;
    // 0x8022F80C: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022F810: jal         0x8004D5D4
    // 0x8022F814: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022F814: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_0:
    // 0x8022F818: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F81C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022F820: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022F824: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022F828: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022F82C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022F830: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022F834: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022F838: addiu       $v0, $v0, -0x6D00
    ctx->r2 = ADD32(ctx->r2, -0X6D00);
    // 0x8022F83C: jal         0x8003E934
    // 0x8022F840: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_1;
    // 0x8022F840: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022F844: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F848: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022F84C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F850: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022F854: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F858: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022F85C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022F860: sh          $v0, 0x360($s0)
    MEM_H(0X360, ctx->r16) = ctx->r2;
    // 0x8022F864: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022F868: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022F86C: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022F870: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x8022F874: sh          $zero, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = 0;
    // 0x8022F878: sh          $zero, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = 0;
    // 0x8022F87C: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x8022F880: sh          $zero, 0x362($s0)
    MEM_H(0X362, ctx->r16) = 0;
    // 0x8022F884: sh          $zero, 0x364($s0)
    MEM_H(0X364, ctx->r16) = 0;
    // 0x8022F888: sb          $zero, 0x74($s0)
    MEM_B(0X74, ctx->r16) = 0;
    // 0x8022F88C: sw          $zero, 0x348($s0)
    MEM_W(0X348, ctx->r16) = 0;
    // 0x8022F890: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022F894: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022F898: sh          $zero, 0x48($s0)
    MEM_H(0X48, ctx->r16) = 0;
    // 0x8022F89C: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x8022F8A0: sw          $v0, 0x354($s0)
    MEM_W(0X354, ctx->r16) = ctx->r2;
    // 0x8022F8A4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022F8A8: jal         0x80050294
    // 0x8022F8AC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_2;
    // 0x8022F8AC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    after_2:
    // 0x8022F8B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F8B4: jal         0x8022FFC8
    // 0x8022F8B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022FFC8_ovl7(rdram, ctx);
        goto after_3;
    // 0x8022F8B8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_3:
    // 0x8022F8BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F8C0: jal         0x8022FFA8
    // 0x8022F8C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022FFA8_ovl7(rdram, ctx);
        goto after_4;
    // 0x8022F8C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x8022F8C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F8CC: j           L_8022FC4C
    // 0x8022F8D0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022FC4C;
    // 0x8022F8D0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022F8D4:
    // 0x8022F8D4: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x8022F8D8: lhu         $v1, 0x18($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X18);
    // 0x8022F8DC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F8E0: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F8E4: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x8022F8E8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F8EC: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x8022F8F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F8F4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F8F8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022F8FC: lhu         $v0, 0x58($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X58);
    // 0x8022F900: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x8022F904: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F908: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022F90C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022F910: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022F914: jal         0x80230188
    // 0x8022F918: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    func_80230188_ovl7(rdram, ctx);
        goto after_5;
    // 0x8022F918: sh          $v0, 0x58($s0)
    MEM_H(0X58, ctx->r16) = ctx->r2;
    after_5:
    // 0x8022F91C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022F920: bne         $v0, $zero, L_8022FC50
    if (ctx->r2 != 0) {
        // 0x8022F924: nop
    
            goto L_8022FC50;
    }
    // 0x8022F924: nop

    // 0x8022F928: jal         0x8003E934
    // 0x8022F92C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x8022F92C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022F930: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x8022F934: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022F938: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F93C: beq         $a1, $zero, L_8022F94C
    if (ctx->r5 == 0) {
        // 0x8022F940: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022F94C;
    }
    // 0x8022F940: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022F944: jal         0x8022FE6C
    // 0x8022F948: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022FE6C_ovl7(rdram, ctx);
        goto after_7;
    // 0x8022F948: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
L_8022F94C:
    // 0x8022F94C: jal         0x8022FEEC
    // 0x8022F950: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022FEEC_ovl7(rdram, ctx);
        goto after_8;
    // 0x8022F950: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8022F954: jal         0x8005044C
    // 0x8022F958: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_9;
    // 0x8022F958: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8022F95C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022F960: bne         $v0, $zero, L_8022F974
    if (ctx->r2 != 0) {
        // 0x8022F964: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022F974;
    }
    // 0x8022F964: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F968: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F96C: j           L_8022FC4C
    // 0x8022F970: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022FC4C;
    // 0x8022F970: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022F974:
    // 0x8022F974: j           L_8022FC4C
    // 0x8022F978: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022FC4C;
    // 0x8022F978: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022F97C:
    // 0x8022F97C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022F980: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022F984: bne         $v1, $v0, L_8022F9A8
    if (ctx->r3 != ctx->r2) {
        // 0x8022F988: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F9A8;
    }
    // 0x8022F988: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F98C: jal         0x8022FE6C
    // 0x8022F990: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022FE6C_ovl7(rdram, ctx);
        goto after_10;
    // 0x8022F990: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_10:
    // 0x8022F994: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F998: jal         0x800A3450
    // 0x8022F99C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_11;
    // 0x8022F99C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_11:
    // 0x8022F9A0: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022F9A4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022F9A8:
    // 0x8022F9A8: jal         0x8022FEEC
    // 0x8022F9AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022FEEC_ovl7(rdram, ctx);
        goto after_12;
    // 0x8022F9AC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x8022F9B0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022F9B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022F9B8: j           L_8022FC4C
    // 0x8022F9BC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022FC4C;
    // 0x8022F9BC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022F9C0:
    // 0x8022F9C0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022F9C4: lh          $a3, 0x64($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X64);
    // 0x8022F9C8: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x8022F9CC: jal         0x8004F820
    // 0x8022F9D0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_13;
    // 0x8022F9D0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_13:
    // 0x8022F9D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F9D8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022F9DC: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022F9E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F9E4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022F9E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022F9EC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022F9F0: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022F9F4: jal         0x80230188
    // 0x8022F9F8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    func_80230188_ovl7(rdram, ctx);
        goto after_14;
    // 0x8022F9F8: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    after_14:
    // 0x8022F9FC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022FA00: bne         $v0, $zero, L_8022FC50
    if (ctx->r2 != 0) {
        // 0x8022FA04: nop
    
            goto L_8022FC50;
    }
    // 0x8022FA04: nop

    // 0x8022FA08: jal         0x8003E934
    // 0x8022FA0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_15;
    // 0x8022FA0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_15:
    // 0x8022FA10: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x8022FA14: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022FA18: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FA1C: beq         $a1, $zero, L_8022FA2C
    if (ctx->r5 == 0) {
        // 0x8022FA20: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022FA2C;
    }
    // 0x8022FA20: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022FA24: jal         0x8022FE6C
    // 0x8022FA28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022FE6C_ovl7(rdram, ctx);
        goto after_16;
    // 0x8022FA28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_16:
L_8022FA2C:
    // 0x8022FA2C: jal         0x8022FEEC
    // 0x8022FA30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022FEEC_ovl7(rdram, ctx);
        goto after_17;
    // 0x8022FA30: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_17:
    // 0x8022FA34: j           L_8022FC44
    // 0x8022FA38: nop

        goto L_8022FC44;
    // 0x8022FA38: nop

L_8022FA3C:
    // 0x8022FA3C: lbu         $v0, 0xA4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022FA40: sltiu       $v1, $v0, 0x1
    ctx->r3 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022FA44: xori        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 ^ 0X8;
    // 0x8022FA48: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022FA4C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022FA50: beq         $v1, $zero, L_8022FAA8
    if (ctx->r3 == 0) {
        // 0x8022FA54: addiu       $a0, $zero, 0x109
        ctx->r4 = ADD32(0, 0X109);
            goto L_8022FAA8;
    }
    // 0x8022FA54: addiu       $a0, $zero, 0x109
    ctx->r4 = ADD32(0, 0X109);
    // 0x8022FA58: jal         0x8002A33C
    // 0x8022FA5C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_18;
    // 0x8022FA5C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_18:
    // 0x8022FA60: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FA64: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8022FA68: jal         0x80050294
    // 0x8022FA6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_19;
    // 0x8022FA6C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_19:
    // 0x8022FA70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FA74: jal         0x8022FFC8
    // 0x8022FA78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022FFC8_ovl7(rdram, ctx);
        goto after_20;
    // 0x8022FA78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x8022FA7C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FA80: jal         0x8022FFA8
    // 0x8022FA84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022FFA8_ovl7(rdram, ctx);
        goto after_21;
    // 0x8022FA84: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x8022FA88: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FA8C: addiu       $v1, $zero, -0x100
    ctx->r3 = ADD32(0, -0X100);
    // 0x8022FA90: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x8022FA94: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022FA98: sb          $v1, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r3;
    // 0x8022FA9C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FAA0: j           L_8022FAB0
    // 0x8022FAA4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022FAB0;
    // 0x8022FAA4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022FAA8:
    // 0x8022FAA8: jal         0x8005044C
    // 0x8022FAAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_22;
    // 0x8022FAAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_22:
L_8022FAB0:
    // 0x8022FAB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FAB4: jal         0x80230188
    // 0x8022FAB8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80230188_ovl7(rdram, ctx);
        goto after_23;
    // 0x8022FAB8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_23:
    // 0x8022FABC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022FAC0: bne         $v0, $zero, L_8022FC50
    if (ctx->r2 != 0) {
        // 0x8022FAC4: nop
    
            goto L_8022FC50;
    }
    // 0x8022FAC4: nop

    // 0x8022FAC8: jal         0x8003E934
    // 0x8022FACC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_24;
    // 0x8022FACC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_24:
    // 0x8022FAD0: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x8022FAD4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022FAD8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FADC: j           L_8022FB48
    // 0x8022FAE0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_8022FB48;
    // 0x8022FAE0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022FAE4:
    // 0x8022FAE4: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022FAE8: bgez        $v0, L_8022FB24
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022FAEC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022FB24;
    }
    // 0x8022FAEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FAF0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8022FAF4: jal         0x80050294
    // 0x8022FAF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_25;
    // 0x8022FAF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_25:
    // 0x8022FAFC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FB00: jal         0x8022FFC8
    // 0x8022FB04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8022FFC8_ovl7(rdram, ctx);
        goto after_26;
    // 0x8022FB04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x8022FB08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FB0C: jal         0x8022FFA8
    // 0x8022FB10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8022FFA8_ovl7(rdram, ctx);
        goto after_27;
    // 0x8022FB10: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_27:
    // 0x8022FB14: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022FB18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FB1C: j           L_8022FB2C
    // 0x8022FB20: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
        goto L_8022FB2C;
    // 0x8022FB20: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022FB24:
    // 0x8022FB24: jal         0x8005044C
    // 0x8022FB28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_28;
    // 0x8022FB28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_28:
L_8022FB2C:
    // 0x8022FB2C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FB30: jal         0x80230188
    // 0x8022FB34: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80230188_ovl7(rdram, ctx);
        goto after_29;
    // 0x8022FB34: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_29:
    // 0x8022FB38: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022FB3C: bne         $v0, $zero, L_8022FC50
    if (ctx->r2 != 0) {
        // 0x8022FB40: nop
    
            goto L_8022FC50;
    }
    // 0x8022FB40: nop

    // 0x8022FB44: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
L_8022FB48:
    // 0x8022FB48: beql        $a1, $zero, L_8022FC50
    if (ctx->r5 == 0) {
        // 0x8022FB4C: sw          $zero, 0x0($s1)
        MEM_W(0X0, ctx->r17) = 0;
            goto L_8022FC50;
    }
    goto skip_0;
    // 0x8022FB4C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
    skip_0:
    // 0x8022FB50: jal         0x8022FE6C
    // 0x8022FB54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022FE6C_ovl7(rdram, ctx);
        goto after_30;
    // 0x8022FB54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_30:
    // 0x8022FB58: j           L_8022FC50
    // 0x8022FB5C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
        goto L_8022FC50;
    // 0x8022FB5C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_8022FB60:
    // 0x8022FB60: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FB64: lhu         $v1, 0x1A($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1A);
    // 0x8022FB68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FB6C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022FB70: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022FB74: jal         0x8003E934
    // 0x8022FB78: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_31;
    // 0x8022FB78: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_31:
    // 0x8022FB7C: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x8022FB80: addiu       $v1, $v0, -0x258
    ctx->r3 = ADD32(ctx->r2, -0X258);
    // 0x8022FB84: sltu        $v0, $v1, $a0
    ctx->r2 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8022FB88: beq         $v0, $zero, L_8022FB9C
    if (ctx->r2 == 0) {
        // 0x8022FB8C: sw          $v1, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r3;
            goto L_8022FB9C;
    }
    // 0x8022FB8C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022FB90: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x8022FB94: j           L_8022FBB4
    // 0x8022FB98: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022FBB4;
    // 0x8022FB98: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022FB9C:
    // 0x8022FB9C: sltu        $v0, $a0, $v1
    ctx->r2 = ctx->r4 < ctx->r3 ? 1 : 0;
    // 0x8022FBA0: beq         $v0, $zero, L_8022FBB0
    if (ctx->r2 == 0) {
        // 0x8022FBA4: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_8022FBB0;
    }
    // 0x8022FBA4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022FBA8: j           L_8022FBB4
    // 0x8022FBAC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
        goto L_8022FBB4;
    // 0x8022FBAC: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022FBB0:
    // 0x8022FBB0: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
L_8022FBB4:
    // 0x8022FBB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022FBB8: jal         0x80230188
    // 0x8022FBBC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80230188_ovl7(rdram, ctx);
        goto after_32;
    // 0x8022FBBC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_32:
    // 0x8022FBC0: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022FBC4: bne         $v0, $zero, L_8022FC50
    if (ctx->r2 != 0) {
        // 0x8022FBC8: nop
    
            goto L_8022FC50;
    }
    // 0x8022FBC8: nop

    // 0x8022FBCC: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
    // 0x8022FBD0: bne         $a1, $zero, L_8022FBE8
    if (ctx->r5 != 0) {
        // 0x8022FBD4: nop
    
            goto L_8022FBE8;
    }
    // 0x8022FBD4: nop

    // 0x8022FBD8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022FBDC: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022FBE0: bne         $v0, $zero, L_8022FBF4
    if (ctx->r2 != 0) {
        // 0x8022FBE4: nop
    
            goto L_8022FBF4;
    }
    // 0x8022FBE4: nop

L_8022FBE8:
    // 0x8022FBE8: jal         0x8022FE6C
    // 0x8022FBEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022FE6C_ovl7(rdram, ctx);
        goto after_33;
    // 0x8022FBEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_33:
    // 0x8022FBF0: lw          $a1, 0x10($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X10);
L_8022FBF4:
    // 0x8022FBF4: jal         0x8023011C
    // 0x8022FBF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023011C_ovl7(rdram, ctx);
        goto after_34;
    // 0x8022FBF8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_34:
    // 0x8022FBFC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022FC00: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FC04: j           L_8022FC44
    // 0x8022FC08: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022FC44;
    // 0x8022FC08: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022FC0C:
    // 0x8022FC0C: lh          $a0, 0x66($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X66);
    // 0x8022FC10: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022FC14: jal         0x8004FA7C
    // 0x8022FC18: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_35;
    // 0x8022FC18: lh          $a2, 0x64($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X64);
    after_35:
    // 0x8022FC1C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022FC20: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FC24: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022FC28: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x8022FC2C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022FC30: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022FC34: bne         $v0, $zero, L_8022FC44
    if (ctx->r2 != 0) {
        // 0x8022FC38: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022FC44;
    }
    // 0x8022FC38: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022FC3C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022FC40: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_8022FC44:
    // 0x8022FC44: jal         0x8005044C
    // 0x8022FC48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_36;
    // 0x8022FC48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_36:
L_8022FC4C:
    // 0x8022FC4C: sw          $zero, 0x0($s1)
    MEM_W(0X0, ctx->r17) = 0;
L_8022FC50:
    // 0x8022FC50: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022FC54: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022FC58: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022FC5C: jr          $ra
    // 0x8022FC60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022FC60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80231F80_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231F80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231F84: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231F88: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231F8C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80231F90: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80231F94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231F98: jal         0x8009A3B4
    // 0x80231F9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80231F9C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x80231FA0: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80231FA4: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80231FA8: jal         0x8009A3B4
    // 0x80231FAC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80231FAC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80231FB0: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80231FB4: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80231FB8: jal         0x8009A3B4
    // 0x80231FBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80231FBC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80231FC0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80231FC4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231FC8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231FCC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231FD0: lw          $v0, -0x6C30($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6C30);
    // 0x80231FD4: jalr        $v0
    // 0x80231FD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x80231FD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80231FDC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80231FE0: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80231FE4: beq         $v0, $zero, L_80231FFC
    if (ctx->r2 == 0) {
        // 0x80231FE8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231FFC;
    }
    // 0x80231FE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231FEC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80231FF0: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80231FF4: jal         0x8003B564
    // 0x80231FF8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_4;
    // 0x80231FF8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
L_80231FFC:
    // 0x80231FFC: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80232000: beq         $v0, $zero, L_80232018
    if (ctx->r2 == 0) {
        // 0x80232004: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_80232018;
    }
    // 0x80232004: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232008: jal         0x8005044C
    // 0x8023200C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_5;
    // 0x8023200C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x80232010: j           L_8023201C
    // 0x80232014: nop

        goto L_8023201C;
    // 0x80232014: nop

L_80232018:
    // 0x80232018: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8023201C:
    // 0x8023201C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232020: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232024: jr          $ra
    // 0x80232028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233DC4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233DC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233DC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233DCC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233DD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80233DD4: jal         0x8006033C
    // 0x80233DD8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80233DD8: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_0:
    // 0x80233DDC: beq         $v0, $zero, L_80233DF0
    if (ctx->r2 == 0) {
        // 0x80233DE0: nop
    
            goto L_80233DF0;
    }
    // 0x80233DE0: nop

    // 0x80233DE4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80233DE8: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80233DEC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80233DF0:
    // 0x80233DF0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80233DF4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233DF8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233DFC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233E00: lw          $v0, -0x6B44($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6B44);
    // 0x80233E04: jalr        $v0
    // 0x80233E08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80233E08: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80233E0C: addiu       $a0, $s0, 0xAC
    ctx->r4 = ADD32(ctx->r16, 0XAC);
    // 0x80233E10: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80233E14: jal         0x8009A3B4
    // 0x80233E18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80233E18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80233E1C: lhu         $v0, 0xC0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC0);
    // 0x80233E20: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80233E24: beq         $v0, $zero, L_80233E40
    if (ctx->r2 == 0) {
        // 0x80233E28: nop
    
            goto L_80233E40;
    }
    // 0x80233E28: nop

    // 0x80233E2C: lhu         $v0, 0xC0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC0);
    // 0x80233E30: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80233E34: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80233E38: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x80233E3C: sh          $v0, 0xC0($s0)
    MEM_H(0XC0, ctx->r16) = ctx->r2;
L_80233E40:
    // 0x80233E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80233E44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80233E48: jr          $ra
    // 0x80233E4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233E4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226074_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226074: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226078: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022607C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226084: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80226088: bne         $v0, $zero, L_802260A0
    if (ctx->r2 != 0) {
        // 0x8022608C: nop
    
            goto L_802260A0;
    }
    // 0x8022608C: nop

    // 0x80226090: jal         0x802283FC
    // 0x80226094: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    func_802283FC_ovl7(rdram, ctx);
        goto after_0;
    // 0x80226094: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    after_0:
    // 0x80226098: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022609C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_802260A0:
    // 0x802260A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802260A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802260A8: jr          $ra
    // 0x802260AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802260AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F4C0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F4C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F4C4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022F4C8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8022F4CC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F4D0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F4D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F4D8: lw          $v0, -0x6D10($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6D10);
    // 0x8022F4DC: jalr        $v0
    // 0x8022F4E0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F4E0: nop

    after_0:
    // 0x8022F4E4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022F4E8: jr          $ra
    // 0x8022F4EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F4EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236100_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236100: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80236104: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x80236108: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x8023610C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80236110: addu        $s4, $zero, $zero
    ctx->r20 = ADD32(0, 0);
    // 0x80236114: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80236118: addiu       $s3, $sp, 0x18
    ctx->r19 = ADD32(ctx->r29, 0X18);
    // 0x8023611C: sw          $ra, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r31;
    // 0x80236120: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80236124: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80236128: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8023612C: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
L_80236130:
    // 0x80236130: sra         $s1, $v0, 16
    ctx->r17 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80236134: addu        $s0, $s5, $s1
    ctx->r16 = ADD32(ctx->r21, ctx->r17);
    // 0x80236138: lbu         $v0, 0x11($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X11);
    // 0x8023613C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80236140: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
    // 0x80236144: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80236148: bne         $v0, $zero, L_802362D8
    if (ctx->r2 != 0) {
        // 0x8023614C: addiu       $v0, $s4, 0x1
        ctx->r2 = ADD32(ctx->r20, 0X1);
            goto L_802362D8;
    }
    // 0x8023614C: addiu       $v0, $s4, 0x1
    ctx->r2 = ADD32(ctx->r20, 0X1);
    // 0x80236150: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x80236154: sll         $v0, $s1, 3
    ctx->r2 = S32(ctx->r17 << 3);
    // 0x80236158: subu        $v0, $v0, $s1
    ctx->r2 = SUB32(ctx->r2, ctx->r17);
    // 0x8023615C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236160: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x80236164: sll         $s2, $v0, 1
    ctx->r18 = S32(ctx->r2 << 1);
    // 0x80236168: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023616C: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x80236170: andi        $v1, $v1, 0xFF
    ctx->r3 = ctx->r3 & 0XFF;
    // 0x80236174: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x80236178: addu        $v1, $v1, $s2
    ctx->r3 = ADD32(ctx->r3, ctx->r18);
    // 0x8023617C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236180: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80236184: lbu         $v1, -0x6570($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X6570);
    // 0x80236188: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023618C: beql        $v1, $v0, L_80236194
    if (ctx->r3 == ctx->r2) {
        // 0x80236190: sb          $zero, 0xC($s0)
        MEM_B(0XC, ctx->r16) = 0;
            goto L_80236194;
    }
    goto skip_0;
    // 0x80236190: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    skip_0:
L_80236194:
    // 0x80236194: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80236198: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8023619C: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x802361A0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802361A4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802361A8: lbu         $v0, -0x656F($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X656F);
    // 0x802361AC: sb          $v0, 0x11($s0)
    MEM_B(0X11, ctx->r16) = ctx->r2;
    // 0x802361B0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802361B4: addu        $v0, $v0, $s1
    ctx->r2 = ADD32(ctx->r2, ctx->r17);
    // 0x802361B8: lbu         $v0, -0x6430($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X6430);
    // 0x802361BC: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802361C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802361C4: addu        $v0, $v0, $s5
    ctx->r2 = ADD32(ctx->r2, ctx->r21);
    // 0x802361C8: lw          $a1, 0x1C($v0)
    ctx->r5 = MEM_W(ctx->r2, 0X1C);
    // 0x802361CC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802361D0: jal         0x8003BA58
    // 0x802361D4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8003BA58_16E58(rdram, ctx);
        goto after_0;
    // 0x802361D4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
    // 0x802361D8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x802361DC: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x802361E0: addu        $a2, $a2, $s1
    ctx->r6 = ADD32(ctx->r6, ctx->r17);
    // 0x802361E4: lbu         $a2, -0x6438($a2)
    ctx->r6 = MEM_BU(ctx->r6, -0X6438);
    // 0x802361E8: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802361EC: jal         0x8003BB80
    // 0x802361F0: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_8003BB80_16F80(rdram, ctx);
        goto after_1;
    // 0x802361F0: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_1:
    // 0x802361F4: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x802361F8: sll         $a0, $s1, 2
    ctx->r4 = S32(ctx->r17 << 2);
    // 0x802361FC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80236200: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80236204: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236208: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023620C: lbu         $v0, -0x6570($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6570);
    // 0x80236210: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80236214: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80236218: lbu         $v1, -0x644C($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X644C);
    // 0x8023621C: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80236220: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236224: sb          $v1, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r3;
    // 0x80236228: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8023622C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80236230: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80236234: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236238: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023623C: lbu         $v0, -0x6570($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6570);
    // 0x80236240: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80236244: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80236248: lbu         $v1, -0x644B($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X644B);
    // 0x8023624C: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80236250: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236254: sb          $v1, 0x12($sp)
    MEM_B(0X12, ctx->r29) = ctx->r3;
    // 0x80236258: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8023625C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80236260: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80236264: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236268: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023626C: lbu         $v0, -0x6570($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6570);
    // 0x80236270: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80236274: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80236278: lbu         $v1, -0x644A($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X644A);
    // 0x8023627C: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x80236280: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236284: sb          $v1, 0x14($sp)
    MEM_B(0X14, ctx->r29) = ctx->r3;
    // 0x80236288: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x8023628C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80236290: addu        $v0, $v0, $s2
    ctx->r2 = ADD32(ctx->r2, ctx->r18);
    // 0x80236294: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236298: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023629C: lbu         $v0, -0x6570($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X6570);
    // 0x802362A0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802362A4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802362A8: lbu         $v1, -0x6449($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X6449);
    // 0x802362AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x802362B0: sll         $v0, $v0, 6
    ctx->r2 = S32(ctx->r2 << 6);
    // 0x802362B4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802362B8: sb          $v1, 0x16($sp)
    MEM_B(0X16, ctx->r29) = ctx->r3;
    // 0x802362BC: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802362C0: addu        $a1, $a1, $s1
    ctx->r5 = ADD32(ctx->r5, ctx->r17);
    // 0x802362C4: lbu         $a1, -0x6438($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X6438);
    // 0x802362C8: addiu       $a2, $sp, 0x10
    ctx->r6 = ADD32(ctx->r29, 0X10);
    // 0x802362CC: jal         0x8003BC68
    // 0x802362D0: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x802362D0: addu        $a3, $s3, $zero
    ctx->r7 = ADD32(ctx->r19, 0);
    after_2:
    // 0x802362D4: addiu       $v0, $s4, 0x1
    ctx->r2 = ADD32(ctx->r20, 0X1);
L_802362D8:
    // 0x802362D8: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x802362DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802362E0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802362E4: slti        $v0, $v0, 0x5
    ctx->r2 = SIGNED(ctx->r2) < 0X5 ? 1 : 0;
    // 0x802362E8: bne         $v0, $zero, L_80236130
    if (ctx->r2 != 0) {
        // 0x802362EC: sll         $v0, $s4, 16
        ctx->r2 = S32(ctx->r20 << 16);
            goto L_80236130;
    }
    // 0x802362EC: sll         $v0, $s4, 16
    ctx->r2 = S32(ctx->r20 << 16);
    // 0x802362F0: lw          $ra, 0x40($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X40);
    // 0x802362F4: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x802362F8: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x802362FC: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80236300: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80236304: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80236308: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8023630C: jr          $ra
    // 0x80236310: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x80236310: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80236314: nop

    // 0x80236318: nop

    // 0x8023631C: nop

;}
RECOMP_FUNC void func_8022AA94_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AA94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022AA98: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022AA9C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AAA0: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022AAA4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022AAA8: lw          $v0, 0x35C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X35C);
    // 0x8022AAAC: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x8022AAB0: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022AAB4: beq         $v0, $zero, L_8022AAC0
    if (ctx->r2 == 0) {
        // 0x8022AAB8: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_8022AAC0;
    }
    // 0x8022AAB8: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022AABC: sh          $zero, 0x350($s0)
    MEM_H(0X350, ctx->r16) = 0;
L_8022AAC0:
    // 0x8022AAC0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022AAC4: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022AAC8: beq         $v0, $zero, L_8022ACC0
    if (ctx->r2 == 0) {
        // 0x8022AACC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022ACC0;
    }
    // 0x8022AACC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022AAD0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022AAD4: addu        $at, $at, $v0
    gpr jr_addend_8022AADC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022AAD8: lw          $v0, -0x6240($at)
    ctx->r2 = ADD32(ctx->r1, -0X6240);
    // 0x8022AADC: jr          $v0
    // 0x8022AAE0: nop

    switch (jr_addend_8022AADC >> 2) {
        case 0: goto L_8022AAE4; break;
        case 1: goto L_8022AAFC; break;
        case 2: goto L_8022AB4C; break;
        case 3: goto L_8022ABE4; break;
        case 4: goto L_8022AC9C; break;
        default: switch_error(__func__, 0x8022AADC, 0x80239DC0);
    }
    // 0x8022AAE0: nop

L_8022AAE4:
    // 0x8022AAE4: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022AAE8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022AAEC: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x8022AAF0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022AAF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AAF8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022AAFC:
    // 0x8022AAFC: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022AB00: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022AB04: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022AB08: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AB0C: bgez        $v0, L_8022ACC0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022AB10: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022ACC0;
    }
    // 0x8022AB10: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022AB14: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022AB18: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022AB1C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022AB20: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022AB24: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022AB28: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022AB2C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x8022AB30: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x8022AB34: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x8022AB38: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AB3C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022AB40: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022AB44: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x8022AB48: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
L_8022AB4C:
    // 0x8022AB4C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022AB50: lw          $v1, 0x14($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X14);
    // 0x8022AB54: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022AB58: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022AB5C: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x8022AB60: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022AB64: bnel        $v1, $zero, L_8022AB6C
    if (ctx->r3 != 0) {
        // 0x8022AB68: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022AB6C;
    }
    goto skip_0;
    // 0x8022AB68: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_8022AB6C:
    // 0x8022AB6C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AB70: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022AB74: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022AB78: lhu         $v1, 0x4($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4);
    // 0x8022AB7C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022AB80: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022AB84: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    // 0x8022AB88: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022AB8C: sll         $a2, $v0, 22
    ctx->r6 = S32(ctx->r2 << 22);
    // 0x8022AB90: sra         $a2, $a2, 16
    ctx->r6 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8022AB94: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022AB98: jal         0x8004DA90
    // 0x8022AB9C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022AB9C: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022ABA0: jal         0x80040F30
    // 0x8022ABA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022ABA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022ABA8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022ABAC: beq         $v1, $zero, L_8022ACC0
    if (ctx->r3 == 0) {
        // 0x8022ABB0: andi        $v0, $v1, 0xF00
        ctx->r2 = ctx->r3 & 0XF00;
            goto L_8022ACC0;
    }
    // 0x8022ABB0: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x8022ABB4: bnel        $v0, $zero, L_8022ABBC
    if (ctx->r2 != 0) {
        // 0x8022ABB8: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022ABBC;
    }
    goto skip_1;
    // 0x8022ABB8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_8022ABBC:
    // 0x8022ABBC: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x8022ABC0: beq         $v0, $zero, L_8022ACC0
    if (ctx->r2 == 0) {
        // 0x8022ABC4: addiu       $v0, $zero, 0xF
        ctx->r2 = ADD32(0, 0XF);
            goto L_8022ACC0;
    }
    // 0x8022ABC4: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022ABC8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022ABCC: addiu       $v0, $zero, 0x17
    ctx->r2 = ADD32(0, 0X17);
    // 0x8022ABD0: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x8022ABD4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022ABD8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022ABDC: j           L_8022ACC0
    // 0x8022ABE0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_8022ACC0;
    // 0x8022ABE0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022ABE4:
    // 0x8022ABE4: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022ABE8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022ABEC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022ABF0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022ABF4: bgez        $v0, L_8022AC14
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022ABF8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022AC14;
    }
    // 0x8022ABF8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022ABFC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022AC00: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
    // 0x8022AC04: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022AC08: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x8022AC0C: j           L_8022AC28
    // 0x8022AC10: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
        goto L_8022AC28;
    // 0x8022AC10: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022AC14:
    // 0x8022AC14: lh          $v0, 0x44($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X44);
    // 0x8022AC18: beq         $v0, $zero, L_8022AC28
    if (ctx->r2 == 0) {
        // 0x8022AC1C: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022AC28;
    }
    // 0x8022AC1C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022AC20: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022AC24: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
L_8022AC28:
    // 0x8022AC28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022AC2C: lhu         $a1, 0x44($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X44);
    // 0x8022AC30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AC34: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022AC38: sll         $a1, $a1, 20
    ctx->r5 = S32(ctx->r5 << 20);
    // 0x8022AC3C: jal         0x8004DA90
    // 0x8022AC40: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022AC40: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
    after_2:
    // 0x8022AC44: jal         0x80040F30
    // 0x8022AC48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022AC48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022AC4C: jal         0x8003E934
    // 0x8022AC50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_4;
    // 0x8022AC50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022AC54: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022AC58: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022AC5C: lh          $a0, 0x2E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2E);
    // 0x8022AC60: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AC64: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022AC68: slti        $v1, $v1, 0x11
    ctx->r3 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x8022AC6C: bne         $v1, $zero, L_8022ACC0
    if (ctx->r3 != 0) {
        // 0x8022AC70: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022ACC0;
    }
    // 0x8022AC70: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022AC74: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022AC78: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022AC7C: jal         0x8009A3B4
    // 0x8022AC80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022AC80: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022AC84: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022AC88: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022AC8C: jal         0x8009A3B4
    // 0x8022AC90: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022AC90: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
    // 0x8022AC94: j           L_8022ACC0
    // 0x8022AC98: nop

        goto L_8022ACC0;
    // 0x8022AC98: nop

L_8022AC9C:
    // 0x8022AC9C: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022ACA0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022ACA4: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022ACA8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022ACAC: bgez        $v0, L_8022ACC0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022ACB0: nop
    
            goto L_8022ACC0;
    }
    // 0x8022ACB0: nop

    // 0x8022ACB4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022ACB8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022ACBC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022ACC0:
    // 0x8022ACC0: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022ACC4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022ACC8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022ACCC: jr          $ra
    // 0x8022ACD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022ACD0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022C7B0_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C7B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C7B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C7B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C7BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C7C0: lh          $a0, 0x64($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X64);
    // 0x8022C7C4: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x8022C7C8: jal         0x8004FA7C
    // 0x8022C7CC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8004FA7C_2AE7C(rdram, ctx);
        goto after_0;
    // 0x8022C7CC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_0:
    // 0x8022C7D0: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022C7D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C7D8: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022C7DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C7E0: bne         $v0, $zero, L_8022C844
    if (ctx->r2 != 0) {
        // 0x8022C7E4: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022C844;
    }
    // 0x8022C7E4: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022C7E8: lh          $v1, 0x35C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X35C);
    // 0x8022C7EC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C7F0: beq         $v1, $zero, L_8022C834
    if (ctx->r3 == 0) {
        // 0x8022C7F4: sb          $v0, 0xA($s0)
        MEM_B(0XA, ctx->r16) = ctx->r2;
            goto L_8022C834;
    }
    // 0x8022C7F4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022C7F8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022C7FC: addiu       $a1, $s0, 0x354
    ctx->r5 = ADD32(ctx->r16, 0X354);
    // 0x8022C800: jal         0x8009A3B4
    // 0x8022C804: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022C804: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x8022C808: lh          $v0, 0x14($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X14);
    // 0x8022C80C: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022C810: lh          $a0, 0x18($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X18);
    // 0x8022C814: lhu         $a1, 0x352($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X352);
    // 0x8022C818: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C81C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022C820: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8022C824: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8022C828: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8022C82C: sw          $a0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r4;
    // 0x8022C830: sh          $a1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r5;
L_8022C834:
    // 0x8022C834: lhu         $v1, 0x35C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X35C);
    // 0x8022C838: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C83C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022C840: sh          $v0, 0x35C($s0)
    MEM_H(0X35C, ctx->r16) = ctx->r2;
L_8022C844:
    // 0x8022C844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C848: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C84C: jr          $ra
    // 0x8022C850: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C850: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225E14_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225E14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225E18: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225E1C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225E20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225E24: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225E28: bne         $v0, $zero, L_80225E40
    if (ctx->r2 != 0) {
        // 0x80225E2C: nop
    
            goto L_80225E40;
    }
    // 0x80225E2C: nop

    // 0x80225E30: jal         0x802283FC
    // 0x80225E34: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_802283FC_ovl7(rdram, ctx);
        goto after_0;
    // 0x80225E34: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_0:
    // 0x80225E38: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225E3C: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225E40:
    // 0x80225E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225E44: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225E48: jr          $ra
    // 0x80225E4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225E4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A33C_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A33C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022A340: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A344: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A348: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022A34C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022A350: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022A354: beq         $v1, $zero, L_8022A370
    if (ctx->r3 == 0) {
        // 0x8022A358: addiu       $a0, $s0, 0x348
        ctx->r4 = ADD32(ctx->r16, 0X348);
            goto L_8022A370;
    }
    // 0x8022A358: addiu       $a0, $s0, 0x348
    ctx->r4 = ADD32(ctx->r16, 0X348);
    // 0x8022A35C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A360: beq         $v1, $v0, L_8022A388
    if (ctx->r3 == ctx->r2) {
        // 0x8022A364: nop
    
            goto L_8022A388;
    }
    // 0x8022A364: nop

    // 0x8022A368: j           L_8022A444
    // 0x8022A36C: nop

        goto L_8022A444;
    // 0x8022A36C: nop

L_8022A370:
    // 0x8022A370: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A374: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022A378: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022A37C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A380: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022A384: sh          $v0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r2;
L_8022A388:
    // 0x8022A388: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x8022A38C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A390: sh          $v0, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r2;
    // 0x8022A394: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A398: bgezl       $v0, L_8022A3B0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A39C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022A3B0;
    }
    goto skip_0;
    // 0x8022A39C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x8022A3A0: lhu         $v0, 0x0($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X0);
    // 0x8022A3A4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022A3A8: j           L_8022A444
    // 0x8022A3AC: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
        goto L_8022A444;
    // 0x8022A3AC: sh          $v0, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r2;
L_8022A3B0:
    // 0x8022A3B0: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8022A3B4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A3B8: jal         0x8004DA90
    // 0x8022A3BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022A3BC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022A3C0: jal         0x80040F30
    // 0x8022A3C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022A3C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022A3C8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A3CC: jal         0x8003E934
    // 0x8022A3D0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022A3D0: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    after_2:
    // 0x8022A3D4: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022A3D8: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x8022A3DC: lh          $a0, 0x2E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2E);
    // 0x8022A3E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A3E4: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x8022A3E8: slti        $v1, $v1, 0x11
    ctx->r3 = SIGNED(ctx->r3) < 0X11 ? 1 : 0;
    // 0x8022A3EC: bne         $v1, $zero, L_8022A428
    if (ctx->r3 != 0) {
        // 0x8022A3F0: sw          $v0, 0x20($s0)
        MEM_W(0X20, ctx->r16) = ctx->r2;
            goto L_8022A428;
    }
    // 0x8022A3F0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022A3F4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022A3F8: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022A3FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A400: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022A404: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022A408: jal         0x8009A3B4
    // 0x8022A40C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x8022A40C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_3:
    // 0x8022A410: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022A414: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022A418: jal         0x8009A3B4
    // 0x8022A41C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022A41C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8022A420: j           L_8022A444
    // 0x8022A424: nop

        goto L_8022A444;
    // 0x8022A424: nop

L_8022A428:
    // 0x8022A428: andi        $v0, $s1, 0xF00
    ctx->r2 = ctx->r17 & 0XF00;
    // 0x8022A42C: beq         $v0, $zero, L_8022A444
    if (ctx->r2 == 0) {
        // 0x8022A430: nop
    
            goto L_8022A444;
    }
    // 0x8022A430: nop

    // 0x8022A434: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022A438: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022A43C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022A440: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022A444:
    // 0x8022A444: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022A448: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022A44C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A450: jr          $ra
    // 0x8022A454: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022A454: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80232380_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232380: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80232384: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232388: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023238C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80232390: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80232394: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80232398: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023239C: jal         0x8009A3B4
    // 0x802323A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802323A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x802323A4: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x802323A8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x802323AC: jal         0x8009A3B4
    // 0x802323B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802323B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x802323B4: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x802323B8: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x802323BC: jal         0x8009A3B4
    // 0x802323C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802323C0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x802323C4: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802323C8: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x802323CC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802323D0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x802323D4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802323D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802323DC: lw          $v0, -0x6C10($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X6C10);
    // 0x802323E0: jalr        $v0
    // 0x802323E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_3;
    // 0x802323E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802323E8: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802323EC: beq         $v0, $zero, L_80232404
    if (ctx->r2 == 0) {
        // 0x802323F0: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80232404;
    }
    // 0x802323F0: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x802323F4: jal         0x8005044C
    // 0x802323F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_4;
    // 0x802323F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802323FC: j           L_8023240C
    // 0x80232400: nop

        goto L_8023240C;
    // 0x80232400: nop

L_80232404:
    // 0x80232404: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232408: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_8023240C:
    // 0x8023240C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80232410: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80232414: beq         $v0, $zero, L_8023242C
    if (ctx->r2 == 0) {
        // 0x80232418: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023242C;
    }
    // 0x80232418: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023241C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80232420: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80232424: jal         0x8003B564
    // 0x80232428: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_5;
    // 0x80232428: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
L_8023242C:
    // 0x8023242C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80232430: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80232434: beq         $v1, $v0, L_80232450
    if (ctx->r3 == ctx->r2) {
        // 0x80232438: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80232450;
    }
    // 0x80232438: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023243C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80232440: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80232444: jal         0x80047284
    // 0x80232448: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_6;
    // 0x80232448: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
    // 0x8023244C: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
L_80232450:
    // 0x80232450: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232454: bnel        $v1, $v0, L_8023247C
    if (ctx->r3 != ctx->r2) {
        // 0x80232458: sw          $zero, 0xC($s1)
        MEM_W(0XC, ctx->r17) = 0;
            goto L_8023247C;
    }
    goto skip_0;
    // 0x80232458: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    skip_0:
    // 0x8023245C: addiu       $a0, $s1, 0x14
    ctx->r4 = ADD32(ctx->r17, 0X14);
    // 0x80232460: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80232464: jal         0x8009A3B4
    // 0x80232468: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x80232468: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x8023246C: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x80232470: addiu       $v0, $v0, -0x1E
    ctx->r2 = ADD32(ctx->r2, -0X1E);
    // 0x80232474: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80232478: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
L_8023247C:
    // 0x8023247C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80232480: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232484: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80232488: jr          $ra
    // 0x8023248C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023248C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C2D4_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C2D4: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x8022C2D8: bltzl       $v0, L_8022C2E0
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022C2DC: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_8022C2E0;
    }
    goto skip_0;
    // 0x8022C2DC: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
L_8022C2E0:
    // 0x8022C2E0: jr          $ra
    // 0x8022C2E4: nop

    TRACE_RETURN()
    return;
    // 0x8022C2E4: nop

;}
RECOMP_FUNC void func_80232114_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232118: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x8023211C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80232120: lhu         $v0, 0x56($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X56);
    // 0x80232124: lhu         $a0, 0x66($a1)
    ctx->r4 = MEM_HU(ctx->r5, 0X66);
    // 0x80232128: lhu         $v1, 0x34C($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X34C);
    // 0x8023212C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80232130: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80232134: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80232138: sh          $v1, 0x34C($a1)
    MEM_H(0X34C, ctx->r5) = ctx->r3;
    // 0x8023213C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80232140: bne         $v1, $zero, L_80232154
    if (ctx->r3 != 0) {
        // 0x80232144: sh          $v0, 0x56($a1)
        MEM_H(0X56, ctx->r5) = ctx->r2;
            goto L_80232154;
    }
    // 0x80232144: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x80232148: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023214C: sb          $v0, 0x8($a1)
    MEM_B(0X8, ctx->r5) = ctx->r2;
    // 0x80232150: sb          $zero, 0x9($a1)
    MEM_B(0X9, ctx->r5) = 0;
L_80232154:
    // 0x80232154: jal         0x80232258
    // 0x80232158: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_80232258_ovl7(rdram, ctx);
        goto after_0;
    // 0x80232158: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8023215C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232160: jr          $ra
    // 0x80232164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232164: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80235510_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235510: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80235514: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80235518: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023551C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80235520: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80235524: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80235528: lw          $v0, -0x6688($at)
    ctx->r2 = MEM_W(ctx->r1, -0X6688);
    // 0x8023552C: jalr        $v0
    // 0x80235530: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80235530: nop

    after_0:
    // 0x80235534: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80235538: jr          $ra
    // 0x8023553C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023553C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226870_ovl7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226874: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226878: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x8022687C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226880: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226884: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226888: lw          $v0, 0x7574($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7574);
    // 0x8022688C: jalr        $v0
    // 0x80226890: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226890: nop

    after_0:
    // 0x80226894: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80226898: jr          $ra
    // 0x8022689C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022689C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
