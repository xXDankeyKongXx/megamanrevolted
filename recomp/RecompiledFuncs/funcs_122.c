#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80232A20_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232A20: jr          $ra
    // 0x80232A24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x80232A24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80232A28: nop

    // 0x80232A2C: nop

;}
RECOMP_FUNC void func_80225AC8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225AC8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225ACC: bne         $v0, $zero, L_80225AEC
    if (ctx->r2 != 0) {
        // 0x80225AD0: addiu       $v0, $zero, 0x5
        ctx->r2 = ADD32(0, 0X5);
            goto L_80225AEC;
    }
    // 0x80225AD0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80225AD4: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x80225AD8: lbu         $v1, 0xD($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0XD);
    // 0x80225ADC: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x80225AE0: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80225AE4: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225AE8: sb          $v1, 0xD($a1)
    MEM_B(0XD, ctx->r5) = ctx->r3;
L_80225AEC:
    // 0x80225AEC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80225AF0: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80225AF4: bne         $v1, $v0, L_80225B04
    if (ctx->r3 != ctx->r2) {
        // 0x80225AF8: nop
    
            goto L_80225B04;
    }
    // 0x80225AF8: nop

    // 0x80225AFC: lw          $a1, 0x24($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X24);
    // 0x80225B00: sb          $zero, 0xD($a1)
    MEM_B(0XD, ctx->r5) = 0;
L_80225B04:
    // 0x80225B04: jr          $ra
    // 0x80225B08: nop

    TRACE_RETURN()
    return;
    // 0x80225B08: nop

    // 0x80225B0C: nop

;}
RECOMP_FUNC void func_8022B838_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B838: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B83C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B840: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B848: lw          $v0, 0xF0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XF0);
    // 0x8022B84C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022B850: bnel        $v0, $zero, L_8022B858
    if (ctx->r2 != 0) {
        // 0x8022B854: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_8022B858;
    }
    goto skip_0;
    // 0x8022B854: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_0:
L_8022B858:
    // 0x8022B858: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x8022B85C: bne         $v0, $zero, L_8022B878
    if (ctx->r2 != 0) {
        // 0x8022B860: addiu       $v0, $zero, 0x1E
        ctx->r2 = ADD32(0, 0X1E);
            goto L_8022B878;
    }
    // 0x8022B860: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x8022B864: sh          $v0, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r2;
    // 0x8022B868: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022B86C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B870: j           L_8022B89C
    // 0x8022B874: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_8022B89C;
    // 0x8022B874: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022B878:
    // 0x8022B878: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022B87C: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022B880: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8022B884: jal         0x8004DA90
    // 0x8022B888: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022B888: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022B88C: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022B890: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022B894: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B898: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022B89C:
    // 0x8022B89C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B8A0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B8A4: jr          $ra
    // 0x8022B8A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B8A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023134C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023134C: addiu       $sp, $sp, -0x80
    ctx->r29 = ADD32(ctx->r29, -0X80);
    // 0x80231350: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80231354: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x80231358: lbu         $v1, 0x4820($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X4820);
    // 0x8023135C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231360: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80231364: sw          $ra, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r31;
    // 0x80231368: sw          $fp, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r30;
    // 0x8023136C: sw          $s7, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r23;
    // 0x80231370: sw          $s6, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r22;
    // 0x80231374: sw          $s5, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r21;
    // 0x80231378: sw          $s4, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r20;
    // 0x8023137C: sw          $s3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r19;
    // 0x80231380: sw          $s2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r18;
    // 0x80231384: sw          $s1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r17;
    // 0x80231388: sw          $s0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r16;
    // 0x8023138C: beq         $v1, $v0, L_802313F8
    if (ctx->r3 == ctx->r2) {
        // 0x80231390: sw          $t2, 0x4C($sp)
        MEM_W(0X4C, ctx->r29) = ctx->r10;
            goto L_802313F8;
    }
    // 0x80231390: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
    // 0x80231394: lui         $a3, 0x801C
    ctx->r7 = S32(0X801C << 16);
    // 0x80231398: addiu       $a3, $a3, -0x3BC8
    ctx->r7 = ADD32(ctx->r7, -0X3BC8);
    // 0x8023139C: lb          $t0, 0x0($a3)
    ctx->r8 = MEM_B(ctx->r7, 0X0);
    // 0x802313A0: addiu       $t1, $zero, 0xFF
    ctx->r9 = ADD32(0, 0XFF);
    // 0x802313A4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802313A8: addiu       $a0, $a0, 0x4820
    ctx->r4 = ADD32(ctx->r4, 0X4820);
    // 0x802313AC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802313B0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
L_802313B4:
    // 0x802313B4: bnel        $t0, $v0, L_802313EC
    if (ctx->r8 != ctx->r2) {
        // 0x802313B8: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_802313EC;
    }
    goto skip_0;
    // 0x802313B8: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    skip_0:
    // 0x802313BC: lb          $v1, 0x1($a3)
    ctx->r3 = MEM_B(ctx->r7, 0X1);
    // 0x802313C0: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802313C4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x802313C8: lbu         $v0, 0x4821($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4821);
    // 0x802313CC: bnel        $v1, $v0, L_802313EC
    if (ctx->r3 != ctx->r2) {
        // 0x802313D0: addiu       $a0, $a0, 0x8
        ctx->r4 = ADD32(ctx->r4, 0X8);
            goto L_802313EC;
    }
    goto skip_1;
    // 0x802313D0: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    skip_1:
    // 0x802313D4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802313D8: addu        $at, $at, $a1
    ctx->r1 = ADD32(ctx->r1, ctx->r5);
    // 0x802313DC: lw          $a1, 0x4824($at)
    ctx->r5 = MEM_W(ctx->r1, 0X4824);
    // 0x802313E0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x802313E4: j           L_802313F8
    // 0x802313E8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
        goto L_802313F8;
    // 0x802313E8: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
L_802313EC:
    // 0x802313EC: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x802313F0: bne         $v0, $t1, L_802313B4
    if (ctx->r2 != ctx->r9) {
        // 0x802313F4: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_802313B4;
    }
    // 0x802313F4: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
L_802313F8:
    // 0x802313F8: beq         $a2, $zero, L_80231678
    if (ctx->r6 == 0) {
        // 0x802313FC: nop
    
            goto L_80231678;
    }
    // 0x802313FC: nop

    // 0x80231400: lui         $t3, 0x801C
    ctx->r11 = S32(0X801C << 16);
    // 0x80231404: lbu         $t3, -0x39A6($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X39A6);
    // 0x80231408: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023140C: addiu       $v1, $v1, -0x3B9A
    ctx->r3 = ADD32(ctx->r3, -0X3B9A);
    // 0x80231410: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x80231414: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80231418: lbu         $fp, 0x0($v1)
    ctx->r30 = MEM_BU(ctx->r3, 0X0);
    // 0x8023141C: lui         $t3, 0x801A
    ctx->r11 = S32(0X801A << 16);
    // 0x80231420: lbu         $t3, 0x53D4($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X53D4);
    // 0x80231424: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x80231428: lui         $t2, 0x8020
    ctx->r10 = S32(0X8020 << 16);
    // 0x8023142C: lbu         $t2, 0x6B40($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X6B40);
    // 0x80231430: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x80231434: lui         $t3, 0x801B
    ctx->r11 = S32(0X801B << 16);
    // 0x80231438: lbu         $t3, -0x35BC($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X35BC);
    // 0x8023143C: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x80231440: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80231444: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
    // 0x80231448: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8023144C: slt         $v0, $t2, $t3
    ctx->r2 = SIGNED(ctx->r10) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80231450: beq         $v0, $zero, L_80231678
    if (ctx->r2 == 0) {
        // 0x80231454: nop
    
            goto L_80231678;
    }
    // 0x80231454: nop

L_80231458:
    // 0x80231458: lw          $s7, 0x1C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X1C);
    // 0x8023145C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80231460: slt         $v0, $s7, $t2
    ctx->r2 = SIGNED(ctx->r23) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80231464: beq         $v0, $zero, L_80231660
    if (ctx->r2 == 0) {
        // 0x80231468: nop
    
            goto L_80231660;
    }
    // 0x80231468: nop

    // 0x8023146C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80231470: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80231474: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80231478: sw          $t3, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r11;
L_8023147C:
    // 0x8023147C: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x80231480: lhu         $v1, 0x49AE($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49AE);
    // 0x80231484: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    // 0x80231488: mult        $t3, $v1
    result = S64(S32(ctx->r11)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023148C: mflo        $v1
    ctx->r3 = lo;
    // 0x80231490: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80231494: lui         $a0, 0x801B
    ctx->r4 = S32(0X801B << 16);
    // 0x80231498: lw          $a0, -0x35C0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X35C0);
    // 0x8023149C: subu        $v0, $s7, $t2
    ctx->r2 = SUB32(ctx->r23, ctx->r10);
    // 0x802314A0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802314A4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802314A8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802314AC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802314B0: lh          $s6, 0x0($v1)
    ctx->r22 = MEM_H(ctx->r3, 0X0);
    // 0x802314B4: blez        $s6, L_8023164C
    if (SIGNED(ctx->r22) <= 0) {
        // 0x802314B8: sll         $v0, $s6, 1
        ctx->r2 = S32(ctx->r22 << 1);
            goto L_8023164C;
    }
    // 0x802314B8: sll         $v0, $s6, 1
    ctx->r2 = S32(ctx->r22 << 1);
    // 0x802314BC: addu        $v0, $v0, $s6
    ctx->r2 = ADD32(ctx->r2, ctx->r22);
    // 0x802314C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802314C4: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x802314C8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802314CC: lw          $v1, 0x5088($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X5088);
    // 0x802314D0: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x802314D4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x802314D8: addu        $s4, $v0, $zero
    ctx->r20 = ADD32(ctx->r2, 0);
    // 0x802314DC: sw          $v1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r3;
L_802314E0:
    // 0x802314E0: lw          $v0, 0x4($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X4);
    // 0x802314E4: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x802314E8: bnel        $v0, $t3, L_80231640
    if (ctx->r2 != ctx->r11) {
        // 0x802314EC: addiu       $s5, $s5, 0x10
        ctx->r21 = ADD32(ctx->r21, 0X10);
            goto L_80231640;
    }
    goto skip_2;
    // 0x802314EC: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
    skip_2:
    // 0x802314F0: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x802314F4: addu        $s2, $s5, $zero
    ctx->r18 = ADD32(ctx->r21, 0);
L_802314F8:
    // 0x802314F8: jal         0x8004F2C4
    // 0x802314FC: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_0;
    // 0x802314FC: nop

    after_0:
    // 0x80231500: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80231504: beql        $s1, $zero, L_80231618
    if (ctx->r17 == 0) {
        // 0x80231508: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80231618;
    }
    goto skip_3;
    // 0x80231508: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_3:
    // 0x8023150C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80231510: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80231514: addiu       $v0, $zero, 0x2F
    ctx->r2 = ADD32(0, 0X2F);
    // 0x80231518: addu        $s0, $s2, $s3
    ctx->r16 = ADD32(ctx->r18, ctx->r19);
    // 0x8023151C: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80231520: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80231524: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80231528: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x8023152C: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80231530: jal         0x8004D5D4
    // 0x80231534: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80231534: sb          $v0, 0x3($s1)
    MEM_B(0X3, ctx->r17) = ctx->r2;
    after_1:
    // 0x80231538: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023153C: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80231540: lui         $a1, 0x801B
    ctx->r5 = S32(0X801B << 16);
    // 0x80231544: addiu       $a1, $a1, 0x5080
    ctx->r5 = ADD32(ctx->r5, 0X5080);
    // 0x80231548: addu        $a1, $s4, $a1
    ctx->r5 = ADD32(ctx->r20, ctx->r5);
    // 0x8023154C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80231550: sb          $fp, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r30;
    // 0x80231554: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x80231558: jal         0x8009A3B4
    // 0x8023155C: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8023155C: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    after_2:
    // 0x80231560: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x80231564: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80231568: addu        $v1, $v1, $s4
    ctx->r3 = ADD32(ctx->r3, ctx->r20);
    // 0x8023156C: lhu         $v1, 0x5080($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X5080);
    // 0x80231570: lhu         $a0, 0x8($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X8);
    // 0x80231574: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231578: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8023157C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231580: lhu         $v0, 0x4960($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X4960);
    // 0x80231584: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80231588: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023158C: sh          $v0, 0x38($s1)
    MEM_H(0X38, ctx->r17) = ctx->r2;
    // 0x80231590: lb          $v0, 0xC($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XC);
    // 0x80231594: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x80231598: addu        $v1, $v1, $s4
    ctx->r3 = ADD32(ctx->r3, ctx->r20);
    // 0x8023159C: lhu         $v1, 0x5084($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X5084);
    // 0x802315A0: lhu         $a0, 0xC($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0XC);
    // 0x802315A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802315A8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802315AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802315B0: lhu         $v0, 0x4962($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X4962);
    // 0x802315B4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802315B8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802315BC: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
    // 0x802315C0: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802315C4: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x802315C8: lhu         $v0, 0x5082($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X5082);
    // 0x802315CC: lhu         $v1, 0xA($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0XA);
    // 0x802315D0: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x802315D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802315D8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x802315DC: jal         0x8002C678
    // 0x802315E0: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    func_8002C678_7A78(rdram, ctx);
        goto after_3;
    // 0x802315E0: sh          $v0, 0x3A($s1)
    MEM_H(0X3A, ctx->r17) = ctx->r2;
    after_3:
    // 0x802315E4: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x802315E8: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802315EC: jal         0x800319B4
    // 0x802315F0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_4;
    // 0x802315F0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    after_4:
    // 0x802315F4: sw          $s6, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->r22;
    // 0x802315F8: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x802315FC: addu        $v0, $v0, $s4
    ctx->r2 = ADD32(ctx->r2, ctx->r20);
    // 0x80231600: lw          $v0, 0x5088($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X5088);
    // 0x80231604: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x80231608: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8023160C: jal         0x80071A70
    // 0x80231610: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    func_80071A70_4CE70(rdram, ctx);
        goto after_5;
    // 0x80231610: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    after_5:
    // 0x80231614: sw          $v0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r2;
L_80231618:
    // 0x80231618: slti        $v0, $s3, 0x2
    ctx->r2 = SIGNED(ctx->r19) < 0X2 ? 1 : 0;
    // 0x8023161C: bne         $v0, $zero, L_802314F8
    if (ctx->r2 != 0) {
        // 0x80231620: nop
    
            goto L_802314F8;
    }
    // 0x80231620: nop

    // 0x80231624: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80231628: lbu         $v0, -0x3B9A($v0)
    ctx->r2 = MEM_BU(ctx->r2, -0X3B9A);
    // 0x8023162C: addiu       $fp, $fp, 0x1
    ctx->r30 = ADD32(ctx->r30, 0X1);
    // 0x80231630: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231634: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x80231638: sb          $v0, -0x3B9A($at)
    MEM_B(-0X3B9A, ctx->r1) = ctx->r2;
    // 0x8023163C: addiu       $s5, $s5, 0x10
    ctx->r21 = ADD32(ctx->r21, 0X10);
L_80231640:
    // 0x80231640: lw          $v0, 0x0($s5)
    ctx->r2 = MEM_W(ctx->r21, 0X0);
    // 0x80231644: bne         $v0, $zero, L_802314E0
    if (ctx->r2 != 0) {
        // 0x80231648: nop
    
            goto L_802314E0;
    }
    // 0x80231648: nop

L_8023164C:
    // 0x8023164C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80231650: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80231654: slt         $v0, $s7, $t2
    ctx->r2 = SIGNED(ctx->r23) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80231658: bne         $v0, $zero, L_8023147C
    if (ctx->r2 != 0) {
        // 0x8023165C: nop
    
            goto L_8023147C;
    }
    // 0x8023165C: nop

L_80231660:
    // 0x80231660: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80231664: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80231668: addiu       $t3, $t3, 0x1
    ctx->r11 = ADD32(ctx->r11, 0X1);
    // 0x8023166C: slt         $v0, $t3, $t2
    ctx->r2 = SIGNED(ctx->r11) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80231670: bne         $v0, $zero, L_80231458
    if (ctx->r2 != 0) {
        // 0x80231674: sw          $t3, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r11;
            goto L_80231458;
    }
    // 0x80231674: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
L_80231678:
    // 0x80231678: lw          $ra, 0x7C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X7C);
    // 0x8023167C: lw          $fp, 0x78($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X78);
    // 0x80231680: lw          $s7, 0x74($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X74);
    // 0x80231684: lw          $s6, 0x70($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X70);
    // 0x80231688: lw          $s5, 0x6C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X6C);
    // 0x8023168C: lw          $s4, 0x68($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X68);
    // 0x80231690: lw          $s3, 0x64($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X64);
    // 0x80231694: lw          $s2, 0x60($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X60);
    // 0x80231698: lw          $s1, 0x5C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X5C);
    // 0x8023169C: lw          $s0, 0x58($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X58);
    // 0x802316A0: jr          $ra
    // 0x802316A4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    TRACE_RETURN()
    return;
    // 0x802316A4: addiu       $sp, $sp, 0x80
    ctx->r29 = ADD32(ctx->r29, 0X80);
    // 0x802316A8: nop

    // 0x802316AC: nop

;}
RECOMP_FUNC void func_8022C9CC_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C9CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022C9D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022C9D4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C9D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022C9DC: lh          $v1, 0x54($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X54);
    // 0x8022C9E0: addiu       $v0, $zero, 0xC00
    ctx->r2 = ADD32(0, 0XC00);
    // 0x8022C9E4: beq         $v1, $v0, L_8022CA08
    if (ctx->r3 == ctx->r2) {
        // 0x8022C9E8: nop
    
            goto L_8022CA08;
    }
    // 0x8022C9E8: nop

    // 0x8022C9EC: lhu         $v0, 0x4C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4C);
    // 0x8022C9F0: lhu         $v1, 0x54($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X54);
    // 0x8022C9F4: addiu       $v0, $v0, -0xA
    ctx->r2 = ADD32(ctx->r2, -0XA);
    // 0x8022C9F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C9FC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022CA00: sh          $v0, 0x4C($s0)
    MEM_H(0X4C, ctx->r16) = ctx->r2;
    // 0x8022CA04: sh          $v1, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r3;
L_8022CA08:
    // 0x8022CA08: lh          $v0, 0x54($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X54);
    // 0x8022CA0C: slti        $v0, $v0, 0xC00
    ctx->r2 = SIGNED(ctx->r2) < 0XC00 ? 1 : 0;
    // 0x8022CA10: beq         $v0, $zero, L_8022CAB0
    if (ctx->r2 == 0) {
        // 0x8022CA14: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022CAB0;
    }
    // 0x8022CA14: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CA18: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022CA1C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022CA20: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x8022CA24: jal         0x8004D5D4
    // 0x8022CA28: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022CA28: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022CA2C: addiu       $a0, $zero, 0x107
    ctx->r4 = ADD32(0, 0X107);
    // 0x8022CA30: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022CA34: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022CA38: jal         0x8002A33C
    // 0x8022CA3C: sb          $zero, 0xFF($s0)
    MEM_B(0XFF, ctx->r16) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022CA3C: sb          $zero, 0xFF($s0)
    MEM_B(0XFF, ctx->r16) = 0;
    after_1:
    // 0x8022CA40: lh          $v0, 0x56($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X56);
    // 0x8022CA44: bne         $v0, $zero, L_8022CA7C
    if (ctx->r2 != 0) {
        // 0x8022CA48: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_8022CA7C;
    }
    // 0x8022CA48: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8022CA4C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022CA50: addiu       $v0, $zero, -0xB00
    ctx->r2 = ADD32(0, -0XB00);
    // 0x8022CA54: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8022CA58: addiu       $v0, $zero, -0x181
    ctx->r2 = ADD32(0, -0X181);
    // 0x8022CA5C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8022CA60: addiu       $v0, $zero, -0xD00
    ctx->r2 = ADD32(0, -0XD00);
    // 0x8022CA64: jal         0x8003E768
    // 0x8022CA68: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_8003E768_19B68(rdram, ctx);
        goto after_2;
    // 0x8022CA68: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x8022CA6C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022CA70: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x8022CA74: j           L_8022CAA8
    // 0x8022CA78: ori         $a1, $a1, 0x802
    ctx->r5 = ctx->r5 | 0X802;
        goto L_8022CAA8;
    // 0x8022CA78: ori         $a1, $a1, 0x802
    ctx->r5 = ctx->r5 | 0X802;
L_8022CA7C:
    // 0x8022CA7C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8022CA80: addiu       $v0, $zero, -0x1B00
    ctx->r2 = ADD32(0, -0X1B00);
    // 0x8022CA84: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x8022CA88: addiu       $v0, $zero, -0x181
    ctx->r2 = ADD32(0, -0X181);
    // 0x8022CA8C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x8022CA90: addiu       $v0, $zero, -0x1100
    ctx->r2 = ADD32(0, -0X1100);
    // 0x8022CA94: jal         0x8003E768
    // 0x8022CA98: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_8003E768_19B68(rdram, ctx);
        goto after_3;
    // 0x8022CA98: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_3:
    // 0x8022CA9C: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x8022CAA0: lui         $a1, 0x3
    ctx->r5 = S32(0X3 << 16);
    // 0x8022CAA4: ori         $a1, $a1, 0x702
    ctx->r5 = ctx->r5 | 0X702;
L_8022CAA8:
    // 0x8022CAA8: jal         0x80071ACC
    // 0x8022CAAC: nop

    func_80071ACC_4CECC(rdram, ctx);
        goto after_4;
    // 0x8022CAAC: nop

    after_4:
L_8022CAB0:
    // 0x8022CAB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CAB4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022CAB8: jr          $ra
    // 0x8022CABC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CABC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226AD0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226AD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226AD4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226AD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226ADC: jal         0x8004F144
    // 0x80226AE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80226AE0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80226AE4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226AE8: beq         $v1, $zero, L_80226B24
    if (ctx->r3 == 0) {
        // 0x80226AEC: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_80226B24;
    }
    // 0x80226AEC: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x80226AF0: addiu       $a1, $s0, 0x310
    ctx->r5 = ADD32(ctx->r16, 0X310);
    // 0x80226AF4: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226AF8: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226AFC: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80226B00: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80226B04: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80226B08: jal         0x8009A3B4
    // 0x80226B0C: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80226B0C: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    after_1:
    // 0x80226B10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226B14: jal         0x8007A1B8
    // 0x80226B18: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x80226B18: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x80226B1C: jal         0x8004F418
    // 0x80226B20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F418_2A818(rdram, ctx);
        goto after_3;
    // 0x80226B20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_80226B24:
    // 0x80226B24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226B28: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226B2C: jr          $ra
    // 0x80226B30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226B30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FC54_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FC54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022FC58: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022FC5C: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x8022FC60: beq         $v0, $zero, L_8022FC70
    if (ctx->r2 == 0) {
        // 0x8022FC64: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022FC70;
    }
    // 0x8022FC64: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022FC68: j           L_8022FCB0
    // 0x8022FC6C: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
        goto L_8022FCB0;
    // 0x8022FC6C: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
L_8022FC70:
    // 0x8022FC70: lbu         $v1, 0x5($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X5);
    // 0x8022FC74: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8022FC78: sw          $v0, 0x2C($a0)
    MEM_W(0X2C, ctx->r4) = ctx->r2;
    // 0x8022FC7C: bne         $v1, $zero, L_8022FC8C
    if (ctx->r3 != 0) {
        // 0x8022FC80: sb          $zero, 0x9($a0)
        MEM_B(0X9, ctx->r4) = 0;
            goto L_8022FC8C;
    }
    // 0x8022FC80: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8022FC84: j           L_8022FCA8
    // 0x8022FC88: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
        goto L_8022FCA8;
    // 0x8022FC88: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
L_8022FC8C:
    // 0x8022FC8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FC90: bne         $v1, $v0, L_8022FCA0
    if (ctx->r3 != ctx->r2) {
        // 0x8022FC94: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022FCA0;
    }
    // 0x8022FC94: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022FC98: j           L_8022FCA8
    // 0x8022FC9C: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
        goto L_8022FCA8;
    // 0x8022FC9C: addiu       $a0, $zero, 0x606
    ctx->r4 = ADD32(0, 0X606);
L_8022FCA0:
    // 0x8022FCA0: bne         $v1, $v0, L_8022FCB0
    if (ctx->r3 != ctx->r2) {
        // 0x8022FCA4: addiu       $a0, $zero, 0x604
        ctx->r4 = ADD32(0, 0X604);
            goto L_8022FCB0;
    }
    // 0x8022FCA4: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
L_8022FCA8:
    // 0x8022FCA8: jal         0x80060590
    // 0x8022FCAC: nop

    func_80060590_3B990(rdram, ctx);
        goto after_0;
    // 0x8022FCAC: nop

    after_0:
L_8022FCB0:
    // 0x8022FCB0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022FCB4: jr          $ra
    // 0x8022FCB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022FCB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A23C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A23C: lhu         $v1, 0x374($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X374);
    // 0x8022A240: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A244: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x8022A248: addiu       $v0, $zero, -0xF0
    ctx->r2 = ADD32(0, -0XF0);
    // 0x8022A24C: sh          $v0, 0x46($a0)
    MEM_H(0X46, ctx->r4) = ctx->r2;
    // 0x8022A250: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022A254: sh          $v0, 0x378($a0)
    MEM_H(0X378, ctx->r4) = ctx->r2;
    // 0x8022A258: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022A25C: sh          $zero, 0x4E($a0)
    MEM_H(0X4E, ctx->r4) = 0;
    // 0x8022A260: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022A264: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x8022A268: jr          $ra
    // 0x8022A26C: sh          $v1, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x8022A26C: sh          $v1, 0x44($a0)
    MEM_H(0X44, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_8022E348_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E348: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022E34C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E350: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022E354: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022E358: jal         0x8004F684
    // 0x8022E35C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x8022E35C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    after_0:
    // 0x8022E360: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022E364: beq         $v0, $zero, L_8022E378
    if (ctx->r2 == 0) {
        // 0x8022E368: addu        $s1, $zero, $zero
        ctx->r17 = ADD32(0, 0);
            goto L_8022E378;
    }
    // 0x8022E368: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022E36C: lw          $a0, 0x4C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4C);
    // 0x8022E370: jal         0x8004F684
    // 0x8022E374: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_1;
    // 0x8022E374: nop

    after_1:
L_8022E378:
    // 0x8022E378: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x8022E37C: addiu       $s0, $s0, 0x4CE0
    ctx->r16 = ADD32(ctx->r16, 0X4CE0);
L_8022E380:
    // 0x8022E380: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8022E384: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8022E388: jal         0x8004F5C4
    // 0x8022E38C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x8022E38C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    after_2:
    // 0x8022E390: sltiu       $v0, $s1, 0x7
    ctx->r2 = ctx->r17 < 0X7 ? 1 : 0;
    // 0x8022E394: bne         $v0, $zero, L_8022E380
    if (ctx->r2 != 0) {
        // 0x8022E398: nop
    
            goto L_8022E380;
    }
    // 0x8022E398: nop

    // 0x8022E39C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022E3A0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E3A4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E3A8: jr          $ra
    // 0x8022E3AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022E3AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022A298_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A298: lh          $v0, 0x16($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X16);
    // 0x8022A29C: slti        $v0, $v0, -0x1FF
    ctx->r2 = SIGNED(ctx->r2) < -0X1FF ? 1 : 0;
    // 0x8022A2A0: bne         $v0, $zero, L_8022A2B8
    if (ctx->r2 != 0) {
        // 0x8022A2A4: addiu       $v0, $zero, -0x200
        ctx->r2 = ADD32(0, -0X200);
            goto L_8022A2B8;
    }
    // 0x8022A2A4: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x8022A2A8: sh          $v0, 0x16($a0)
    MEM_H(0X16, ctx->r4) = ctx->r2;
    // 0x8022A2AC: lui         $v0, 0xFE00
    ctx->r2 = S32(0XFE00 << 16);
    // 0x8022A2B0: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
    // 0x8022A2B4: sh          $zero, 0x46($a0)
    MEM_H(0X46, ctx->r4) = 0;
L_8022A2B8:
    // 0x8022A2B8: jr          $ra
    // 0x8022A2BC: nop

    TRACE_RETURN()
    return;
    // 0x8022A2BC: nop

;}
RECOMP_FUNC void func_8022C5B8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C5B8: jr          $ra
    // 0x8022C5BC: nop

    TRACE_RETURN()
    return;
    // 0x8022C5BC: nop

;}
RECOMP_FUNC void func_8022AFC8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AFC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AFCC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AFD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AFD4: jal         0x8022B13C
    // 0x8022AFD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8022B13C_ovl16(rdram, ctx);
        goto after_0;
    // 0x8022AFD8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x8022AFDC: bne         $v0, $zero, L_8022B12C
    if (ctx->r2 != 0) {
        // 0x8022AFE0: nop
    
            goto L_8022B12C;
    }
    // 0x8022AFE0: nop

    // 0x8022AFE4: lhu         $v0, 0xD2($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XD2);
    // 0x8022AFE8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022AFEC: sh          $v0, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r2;
    // 0x8022AFF0: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022AFF4: bne         $v0, $zero, L_8022B094
    if (ctx->r2 != 0) {
        // 0x8022AFF8: nop
    
            goto L_8022B094;
    }
    // 0x8022AFF8: nop

    // 0x8022AFFC: jal         0x800A3450
    // 0x8022B000: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x8022B000: nop

    after_1:
    // 0x8022B004: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022B008: slti        $v0, $v0, 0xE
    ctx->r2 = SIGNED(ctx->r2) < 0XE ? 1 : 0;
    // 0x8022B00C: beq         $v0, $zero, L_8022B058
    if (ctx->r2 == 0) {
        // 0x8022B010: nop
    
            goto L_8022B058;
    }
    // 0x8022B010: nop

    // 0x8022B014: jal         0x800A3450
    // 0x8022B018: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x8022B018: nop

    after_2:
    // 0x8022B01C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022B020: sb          $v0, 0xD1($s0)
    MEM_B(0XD1, ctx->r16) = ctx->r2;
    // 0x8022B024: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x8022B028: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022B02C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022B030: jal         0x800A3450
    // 0x8022B034: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022B034: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    after_3:
    // 0x8022B038: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022B03C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022B040: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022B044: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B048: lhu         $v0, 0x4254($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X4254);
    // 0x8022B04C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022B050: j           L_8022B080
    // 0x8022B054: sh          $v0, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r2;
        goto L_8022B080;
    // 0x8022B054: sh          $v0, 0xD2($s0)
    MEM_H(0XD2, ctx->r16) = ctx->r2;
L_8022B058:
    // 0x8022B058: jal         0x800A3450
    // 0x8022B05C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x8022B05C: nop

    after_4:
    // 0x8022B060: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022B064: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022B068: lui         $v1, 0x8023
    ctx->r3 = S32(0X8023 << 16);
    // 0x8022B06C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022B070: lhu         $v1, 0x4254($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X4254);
    // 0x8022B074: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B078: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B07C: sh          $v1, 0xD4($s0)
    MEM_H(0XD4, ctx->r16) = ctx->r3;
L_8022B080:
    // 0x8022B080: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022B084: jal         0x8022AB18
    // 0x8022B088: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022AB18_ovl16(rdram, ctx);
        goto after_5;
    // 0x8022B088: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022B08C: j           L_8022B12C
    // 0x8022B090: nop

        goto L_8022B12C;
    // 0x8022B090: nop

L_8022B094:
    // 0x8022B094: jal         0x800A3450
    // 0x8022B098: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_6;
    // 0x8022B098: nop

    after_6:
    // 0x8022B09C: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8022B0A0: slti        $v0, $v0, 0xA
    ctx->r2 = SIGNED(ctx->r2) < 0XA ? 1 : 0;
    // 0x8022B0A4: bne         $v0, $zero, L_8022B0DC
    if (ctx->r2 != 0) {
        // 0x8022B0A8: nop
    
            goto L_8022B0DC;
    }
    // 0x8022B0A8: nop

    // 0x8022B0AC: lb          $v0, 0xD1($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD1);
    // 0x8022B0B0: beq         $v0, $zero, L_8022B0C4
    if (ctx->r2 == 0) {
        // 0x8022B0B4: nop
    
            goto L_8022B0C4;
    }
    // 0x8022B0B4: nop

    // 0x8022B0B8: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B0BC: j           L_8022B0CC
    // 0x8022B0C0: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
        goto L_8022B0CC;
    // 0x8022B0C0: addiu       $v0, $v0, 0x40
    ctx->r2 = ADD32(ctx->r2, 0X40);
L_8022B0C4:
    // 0x8022B0C4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B0C8: addiu       $v0, $v0, -0x40
    ctx->r2 = ADD32(ctx->r2, -0X40);
L_8022B0CC:
    // 0x8022B0CC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x8022B0D0: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B0D4: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B0D8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022B0DC:
    // 0x8022B0DC: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022B0E0: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022B0E4: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8022B0E8: jal         0x8004DA90
    // 0x8022B0EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_7;
    // 0x8022B0EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022B0F0: lw          $v0, 0xEC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XEC);
    // 0x8022B0F4: beq         $v0, $zero, L_8022B12C
    if (ctx->r2 == 0) {
        // 0x8022B0F8: addiu       $v0, $zero, 0x40
        ctx->r2 = ADD32(0, 0X40);
            goto L_8022B12C;
    }
    // 0x8022B0F8: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022B0FC: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x8022B100: addiu       $v0, $zero, 0xC8
    ctx->r2 = ADD32(0, 0XC8);
    // 0x8022B104: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022B108: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022B10C: sh          $v0, 0x10E($s0)
    MEM_H(0X10E, ctx->r16) = ctx->r2;
    // 0x8022B110: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x8022B114: sh          $v0, 0xD6($s0)
    MEM_H(0XD6, ctx->r16) = ctx->r2;
    // 0x8022B118: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022B11C: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x8022B120: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x8022B124: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022B128: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022B12C:
    // 0x8022B12C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B130: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B134: jr          $ra
    // 0x8022B138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B138: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226C84_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226C84: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80226C88: lw          $v1, 0x70($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X70);
    // 0x80226C8C: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x80226C90: addu        $s5, $a0, $zero
    ctx->r21 = ADD32(ctx->r4, 0);
    // 0x80226C94: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80226C98: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x80226C9C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80226CA0: addu        $s3, $a2, $zero
    ctx->r19 = ADD32(ctx->r6, 0);
    // 0x80226CA4: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x80226CA8: addu        $s4, $a3, $zero
    ctx->r20 = ADD32(ctx->r7, 0);
    // 0x80226CAC: sll         $v0, $a2, 16
    ctx->r2 = S32(ctx->r6 << 16);
    // 0x80226CB0: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x80226CB4: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80226CB8: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80226CBC: bgez        $v0, L_80226CD0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80226CC0: addu        $s2, $v1, $zero
        ctx->r18 = ADD32(ctx->r3, 0);
            goto L_80226CD0;
    }
    // 0x80226CC0: addu        $s2, $v1, $zero
    ctx->r18 = ADD32(ctx->r3, 0);
    // 0x80226CC4: negu        $s3, $a2
    ctx->r19 = SUB32(0, ctx->r6);
    // 0x80226CC8: negu        $s2, $v1
    ctx->r18 = SUB32(0, ctx->r3);
    // 0x80226CCC: addiu       $s1, $s1, 0x800
    ctx->r17 = ADD32(ctx->r17, 0X800);
L_80226CD0:
    // 0x80226CD0: addiu       $s0, $sp, 0x20
    ctx->r16 = ADD32(ctx->r29, 0X20);
    // 0x80226CD4: jal         0x8002C654
    // 0x80226CD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80226CD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80226CDC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80226CE0: jal         0x800319B4
    // 0x80226CE4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x80226CE4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80226CE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226CEC: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80226CF0: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x80226CF4: addu        $a2, $s0, $zero
    ctx->r6 = ADD32(ctx->r16, 0);
    // 0x80226CF8: negu        $v0, $s3
    ctx->r2 = SUB32(0, ctx->r19);
    // 0x80226CFC: sh          $s2, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r18;
    // 0x80226D00: sh          $s4, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r20;
    // 0x80226D04: jal         0x80031270
    // 0x80226D08: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_80031270_C670(rdram, ctx);
        goto after_2;
    // 0x80226D08: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_2:
    // 0x80226D0C: addu        $a0, $s5, $zero
    ctx->r4 = ADD32(ctx->r21, 0);
    // 0x80226D10: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80226D14: jal         0x8009A3B4
    // 0x80226D18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x80226D18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x80226D1C: addu        $v0, $s5, $zero
    ctx->r2 = ADD32(ctx->r21, 0);
    // 0x80226D20: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x80226D24: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x80226D28: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x80226D2C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80226D30: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80226D34: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80226D38: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80226D3C: jr          $ra
    // 0x80226D40: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x80226D40: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80231774_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231774: addu        $t1, $a0, $zero
    ctx->r9 = ADD32(ctx->r4, 0);
    // 0x80231778: lhu         $a1, 0x2A($t1)
    ctx->r5 = MEM_HU(ctx->r9, 0X2A);
    // 0x8023177C: lhu         $v0, 0x2E($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X2E);
    // 0x80231780: lhu         $a2, 0x28($t1)
    ctx->r6 = MEM_HU(ctx->r9, 0X28);
    // 0x80231784: lhu         $v1, 0x1E($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0X1E);
    // 0x80231788: lhu         $a0, 0x20($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X20);
    // 0x8023178C: lhu         $a3, 0x2C($t1)
    ctx->r7 = MEM_HU(ctx->r9, 0X2C);
    // 0x80231790: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80231794: lhu         $v0, 0x1C($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X1C);
    // 0x80231798: sh          $a1, 0x2A($t1)
    MEM_H(0X2A, ctx->r9) = ctx->r5;
    // 0x8023179C: lh          $t0, 0x2A($t1)
    ctx->r8 = MEM_H(ctx->r9, 0X2A);
    // 0x802317A0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x802317A4: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x802317A8: sh          $v1, 0x1E($t1)
    MEM_H(0X1E, ctx->r9) = ctx->r3;
    // 0x802317AC: sh          $a0, 0x20($t1)
    MEM_H(0X20, ctx->r9) = ctx->r4;
    // 0x802317B0: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x802317B4: bltz        $t0, L_802317C8
    if (SIGNED(ctx->r8) < 0) {
        // 0x802317B8: sh          $v0, 0x1C($t1)
        MEM_H(0X1C, ctx->r9) = ctx->r2;
            goto L_802317C8;
    }
    // 0x802317B8: sh          $v0, 0x1C($t1)
    MEM_H(0X1C, ctx->r9) = ctx->r2;
    // 0x802317BC: lbu         $v0, 0x8($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X8);
    // 0x802317C0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802317C4: sb          $v0, 0x8($t1)
    MEM_B(0X8, ctx->r9) = ctx->r2;
L_802317C8:
    // 0x802317C8: jr          $ra
    // 0x802317CC: nop

    TRACE_RETURN()
    return;
    // 0x802317CC: nop

;}
RECOMP_FUNC void func_8023185C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023185C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231860: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80231864: jal         0x8004F5C4
    // 0x80231868: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80231868: nop

    after_0:
    // 0x8023186C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80231870: jr          $ra
    // 0x80231874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231874: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A5CC_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A5CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A5D0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A5D4: jal         0x8004F4F8
    // 0x8022A5D8: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x8022A5D8: nop

    after_0:
    // 0x8022A5DC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A5E0: jr          $ra
    // 0x8022A5E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A5E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022E1A0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E1A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022E1A4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022E1A8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022E1AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022E1B0: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022E1B4: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022E1B8: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022E1BC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E1C0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022E1C4: addiu       $a1, $s1, 0x3
    ctx->r5 = ADD32(ctx->r17, 0X3);
    // 0x8022E1C8: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x8022E1CC: jal         0x8004D5D4
    // 0x8022E1D0: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022E1D0: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022E1D4: lbu         $v1, 0x3($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X3);
    // 0x8022E1D8: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x8022E1DC: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022E1E0: sw          $v0, 0x40($s1)
    MEM_W(0X40, ctx->r17) = ctx->r2;
    // 0x8022E1E4: bne         $v1, $zero, L_8022E238
    if (ctx->r3 != 0) {
        // 0x8022E1E8: sw          $zero, 0x50($s1)
        MEM_W(0X50, ctx->r17) = 0;
            goto L_8022E238;
    }
    // 0x8022E1E8: sw          $zero, 0x50($s1)
    MEM_W(0X50, ctx->r17) = 0;
    // 0x8022E1EC: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022E1F0: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    // 0x8022E1F4: addiu       $s3, $zero, 0x18
    ctx->r19 = ADD32(0, 0X18);
    // 0x8022E1F8: lui         $s0, 0x8023
    ctx->r16 = S32(0X8023 << 16);
    // 0x8022E1FC: addiu       $s0, $s0, 0x4CE0
    ctx->r16 = ADD32(ctx->r16, 0X4CE0);
L_8022E200:
    // 0x8022E200: jal         0x8004F144
    // 0x8022E204: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x8022E204: nop

    after_1:
    // 0x8022E208: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022E20C: beq         $v1, $zero, L_8022E22C
    if (ctx->r3 == 0) {
        // 0x8022E210: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8022E22C;
    }
    // 0x8022E210: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8022E214: sw          $v1, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r3;
    // 0x8022E218: sb          $s4, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r20;
    // 0x8022E21C: sb          $s3, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r19;
    // 0x8022E220: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x8022E224: lbu         $v0, 0x1($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X1);
    // 0x8022E228: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
L_8022E22C:
    // 0x8022E22C: sltiu       $v0, $s2, 0x7
    ctx->r2 = ctx->r18 < 0X7 ? 1 : 0;
    // 0x8022E230: bne         $v0, $zero, L_8022E200
    if (ctx->r2 != 0) {
        // 0x8022E234: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8022E200;
    }
    // 0x8022E234: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_8022E238:
    // 0x8022E238: jal         0x8004F2C4
    // 0x8022E23C: nop

    func_8004F2C4_2A6C4(rdram, ctx);
        goto after_2;
    // 0x8022E23C: nop

    after_2:
    // 0x8022E240: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022E244: beq         $s0, $zero, L_8022E2C0
    if (ctx->r16 == 0) {
        // 0x8022E248: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022E2C0;
    }
    // 0x8022E248: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E24C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022E250: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022E254: lbu         $v1, 0x2($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X2);
    // 0x8022E258: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022E25C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x8022E260: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x8022E264: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8022E268: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8022E26C: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8022E270: sb          $v1, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r3;
    // 0x8022E274: lhu         $v0, 0x38($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X38);
    // 0x8022E278: sh          $v0, 0x38($s0)
    MEM_H(0X38, ctx->r16) = ctx->r2;
    // 0x8022E27C: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x8022E280: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x8022E284: lhu         $v0, 0x3C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C);
    // 0x8022E288: addiu       $a1, $s0, 0x3
    ctx->r5 = ADD32(ctx->r16, 0X3);
    // 0x8022E28C: jal         0x8004D5D4
    // 0x8022E290: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_3;
    // 0x8022E290: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
    after_3:
    // 0x8022E294: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022E298: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x8022E29C: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8022E2A0: sw          $v1, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r3;
    // 0x8022E2A4: sw          $zero, 0x50($s0)
    MEM_W(0X50, ctx->r16) = 0;
    // 0x8022E2A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E2AC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022E2B0: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x8022E2B4: sw          $s0, 0x4C($s1)
    MEM_W(0X4C, ctx->r17) = ctx->r16;
    // 0x8022E2B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E2BC: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
L_8022E2C0:
    // 0x8022E2C0: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x8022E2C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E2C8: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8022E2CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022E2D0: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022E2D4: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022E2D8: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022E2DC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022E2E0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E2E4: jr          $ra
    // 0x8022E2E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022E2E8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802320F4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802320F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802320F8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802320FC: lbu         $s3, 0x3B($sp)
    ctx->r19 = MEM_BU(ctx->r29, 0X3B);
    // 0x80232100: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80232104: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80232108: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023210C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232110: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80232114: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80232118: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8023211C: jal         0x800A3450
    // 0x80232120: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80232120: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x80232124: andi        $s1, $v0, 0x7
    ctx->r17 = ctx->r2 & 0X7;
    // 0x80232128: addiu       $s1, $s1, 0x6
    ctx->r17 = ADD32(ctx->r17, 0X6);
    // 0x8023212C: andi        $s3, $s3, 0xFF
    ctx->r19 = ctx->r19 & 0XFF;
    // 0x80232130: mult        $s1, $s3
    result = S64(S32(ctx->r17)) * S64(S32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80232134: mflo        $s1
    ctx->r17 = lo;
    // 0x80232138: nop

    // 0x8023213C: nop

    // 0x80232140: jal         0x800A3450
    // 0x80232144: andi        $s1, $s1, 0xFF
    ctx->r17 = ctx->r17 & 0XFF;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80232144: andi        $s1, $s1, 0xFF
    ctx->r17 = ctx->r17 & 0XFF;
    after_1:
    // 0x80232148: andi        $s0, $v0, 0x7
    ctx->r16 = ctx->r2 & 0X7;
    // 0x8023214C: addiu       $s0, $s0, 0x6
    ctx->r16 = ADD32(ctx->r16, 0X6);
    // 0x80232150: mult        $s0, $s3
    result = S64(S32(ctx->r16)) * S64(S32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80232154: mflo        $s0
    ctx->r16 = lo;
    // 0x80232158: nop

    // 0x8023215C: nop

    // 0x80232160: jal         0x800A3450
    // 0x80232164: sll         $s1, $s1, 16
    ctx->r17 = S32(ctx->r17 << 16);
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80232164: sll         $s1, $s1, 16
    ctx->r17 = S32(ctx->r17 << 16);
    after_2:
    // 0x80232168: andi        $s2, $v0, 0x7
    ctx->r18 = ctx->r2 & 0X7;
    // 0x8023216C: addiu       $s2, $s2, 0x6
    ctx->r18 = ADD32(ctx->r18, 0X6);
    // 0x80232170: mult        $s2, $s3
    result = S64(S32(ctx->r18)) * S64(S32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80232174: mflo        $s2
    ctx->r18 = lo;
    // 0x80232178: nop

    // 0x8023217C: nop

    // 0x80232180: jal         0x8003B8FC
    // 0x80232184: andi        $s0, $s0, 0xFF
    ctx->r16 = ctx->r16 & 0XFF;
    func_8003B8FC_16CFC(rdram, ctx);
        goto after_3;
    // 0x80232184: andi        $s0, $s0, 0xFF
    ctx->r16 = ctx->r16 & 0XFF;
    after_3:
    // 0x80232188: lh          $v1, 0x32($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X32);
    // 0x8023218C: lhu         $a0, 0x30($sp)
    ctx->r4 = MEM_HU(ctx->r29, 0X30);
    // 0x80232190: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80232194: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x80232198: sw          $v1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r3;
    // 0x8023219C: lui         $v1, 0x5200
    ctx->r3 = S32(0X5200 << 16);
    // 0x802321A0: sll         $s0, $s0, 8
    ctx->r16 = S32(ctx->r16 << 8);
    // 0x802321A4: or          $s0, $s0, $v1
    ctx->r16 = ctx->r16 | ctx->r3;
    // 0x802321A8: or          $s1, $s1, $s0
    ctx->r17 = ctx->r17 | ctx->r16;
    // 0x802321AC: andi        $s2, $s2, 0xFF
    ctx->r18 = ctx->r18 & 0XFF;
    // 0x802321B0: or          $s1, $s1, $s2
    ctx->r17 = ctx->r17 | ctx->r18;
    // 0x802321B4: sw          $s1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r17;
    // 0x802321B8: lh          $v1, 0x2A($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X2A);
    // 0x802321BC: lhu         $a1, 0x28($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X28);
    // 0x802321C0: lui         $a0, 0x1
    ctx->r4 = S32(0X1 << 16);
    // 0x802321C4: ori         $a0, $a0, 0x101
    ctx->r4 = ctx->r4 | 0X101;
    // 0x802321C8: sw          $a0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r4;
    // 0x802321CC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802321D0: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x802321D4: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x802321D8: lh          $v1, 0x34($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X34);
    // 0x802321DC: lhu         $a1, 0x2C($sp)
    ctx->r5 = MEM_HU(ctx->r29, 0X2C);
    // 0x802321E0: lui         $a0, 0xE100
    ctx->r4 = S32(0XE100 << 16);
    // 0x802321E4: ori         $a0, $a0, 0x20
    ctx->r4 = ctx->r4 | 0X20;
    // 0x802321E8: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
    // 0x802321EC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802321F0: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x802321F4: sw          $v1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r3;
    // 0x802321F8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x802321FC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80232200: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80232204: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80232208: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023220C: jr          $ra
    // 0x80232210: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80232210: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80232214: nop

    // 0x80232218: nop

    // 0x8023221C: nop

;}
RECOMP_FUNC void func_8022983C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022983C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229840: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229844: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229848: jal         0x8005044C
    // 0x8022984C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_0;
    // 0x8022984C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    after_0:
    // 0x80229850: jal         0x80040F30
    // 0x80229854: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x80229854: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80229858: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022985C: jal         0x8003E934
    // 0x80229860: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x80229860: sw          $v0, 0xC4($s0)
    MEM_W(0XC4, ctx->r16) = ctx->r2;
    after_2:
    // 0x80229864: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80229868: subu        $v1, $v0, $v1
    ctx->r3 = SUB32(ctx->r2, ctx->r3);
    // 0x8022986C: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80229870: bnel        $v1, $zero, L_802298A4
    if (ctx->r3 != 0) {
        // 0x80229874: sh          $v0, 0x16($s0)
        MEM_H(0X16, ctx->r16) = ctx->r2;
            goto L_802298A4;
    }
    goto skip_0;
    // 0x80229874: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    skip_0:
    // 0x80229878: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022987C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80229880: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x80229884: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80229888: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8022988C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229890: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    // 0x80229894: jal         0x80050294
    // 0x80229898: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x80229898: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    after_3:
    // 0x8022989C: j           L_802298AC
    // 0x802298A0: nop

        goto L_802298AC;
    // 0x802298A0: nop

L_802298A4:
    // 0x802298A4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802298A8: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_802298AC:
    // 0x802298AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802298B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802298B4: jr          $ra
    // 0x802298B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802298B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802298BC: nop

;}
RECOMP_FUNC void func_8022A220_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A220: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022A224: sh          $v0, 0x376($a0)
    MEM_H(0X376, ctx->r4) = ctx->r2;
    // 0x8022A228: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A22C: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x8022A230: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022A234: jr          $ra
    // 0x8022A238: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    TRACE_RETURN()
    return;
    // 0x8022A238: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
;}
RECOMP_FUNC void func_8022A0B4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A0B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A0B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022A0BC: lw          $v0, 0x35C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X35C);
    // 0x8022A0C0: lw          $a1, 0x368($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X368);
    // 0x8022A0C4: andi        $v1, $v0, 0x1
    ctx->r3 = ctx->r2 & 0X1;
    // 0x8022A0C8: lui         $v0, 0x200
    ctx->r2 = S32(0X200 << 16);
    // 0x8022A0CC: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x8022A0D0: bnel        $v0, $zero, L_8022A0D8
    if (ctx->r2 != 0) {
        // 0x8022A0D4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022A0D8;
    }
    goto skip_0;
    // 0x8022A0D4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    skip_0:
L_8022A0D8:
    // 0x8022A0D8: lui         $v0, 0x400
    ctx->r2 = S32(0X400 << 16);
    // 0x8022A0DC: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x8022A0E0: bnel        $v0, $zero, L_8022A0E8
    if (ctx->r2 != 0) {
        // 0x8022A0E4: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022A0E8;
    }
    goto skip_1;
    // 0x8022A0E4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    skip_1:
L_8022A0E8:
    // 0x8022A0E8: lhu         $v0, 0x378($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X378);
    // 0x8022A0EC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A0F0: sh          $v0, 0x378($a0)
    MEM_H(0X378, ctx->r4) = ctx->r2;
    // 0x8022A0F4: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8022A0F8: beql        $v0, $zero, L_8022A100
    if (ctx->r2 == 0) {
        // 0x8022A0FC: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8022A100;
    }
    goto skip_2;
    // 0x8022A0FC: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    skip_2:
L_8022A100:
    // 0x8022A100: beq         $v1, $zero, L_8022A110
    if (ctx->r3 == 0) {
        // 0x8022A104: nop
    
            goto L_8022A110;
    }
    // 0x8022A104: nop

    // 0x8022A108: jal         0x8022A1C0
    // 0x8022A10C: sw          $zero, 0x370($a0)
    MEM_W(0X370, ctx->r4) = 0;
    func_8022A1C0_ovl16(rdram, ctx);
        goto after_0;
    // 0x8022A10C: sw          $zero, 0x370($a0)
    MEM_W(0X370, ctx->r4) = 0;
    after_0:
L_8022A110:
    // 0x8022A110: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022A114: jr          $ra
    // 0x8022A118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A118: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229B48_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229B48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229B4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80229B50: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229B54: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80229B58: lh          $v0, 0x6E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6E);
    // 0x80229B5C: beq         $v0, $zero, L_80229BD8
    if (ctx->r2 == 0) {
        // 0x80229B60: addu        $a0, $v0, $zero
        ctx->r4 = ADD32(ctx->r2, 0);
            goto L_80229BD8;
    }
    // 0x80229B60: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80229B64: lw          $v1, 0x368($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X368);
    // 0x80229B68: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x80229B6C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80229B70: beq         $v0, $zero, L_80229BD8
    if (ctx->r2 == 0) {
        // 0x80229B74: lui         $v0, 0xFF
        ctx->r2 = S32(0XFF << 16);
            goto L_80229BD8;
    }
    // 0x80229B74: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80229B78: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80229B7C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80229B80: beq         $v0, $zero, L_80229BD8
    if (ctx->r2 == 0) {
        // 0x80229B84: subu        $v0, $a0, $v0
        ctx->r2 = SUB32(ctx->r4, ctx->r2);
            goto L_80229BD8;
    }
    // 0x80229B84: subu        $v0, $a0, $v0
    ctx->r2 = SUB32(ctx->r4, ctx->r2);
    // 0x80229B88: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    // 0x80229B8C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80229B90: jal         0x8002A33C
    // 0x80229B94: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80229B94: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    after_0:
    // 0x80229B98: lh          $v1, 0x6E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X6E);
    // 0x80229B9C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80229BA0: bgtz        $v1, L_80229BD8
    if (SIGNED(ctx->r3) > 0) {
        // 0x80229BA4: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_80229BD8;
    }
    // 0x80229BA4: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80229BA8: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80229BAC: addiu       $v0, $zero, -0x280
    ctx->r2 = ADD32(0, -0X280);
    // 0x80229BB0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80229BB4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80229BB8: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x80229BBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229BC0: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80229BC4: sh          $zero, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = 0;
    // 0x80229BC8: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    // 0x80229BCC: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    // 0x80229BD0: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x80229BD4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_80229BD8:
    // 0x80229BD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80229BDC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80229BE0: jr          $ra
    // 0x80229BE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229BE4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B184_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B184: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B188: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B18C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B190: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022B194: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x8022B198: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B19C: jal         0x8009A3B4
    // 0x8022B1A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022B1A0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x8022B1A4: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x8022B1A8: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x8022B1AC: jal         0x8009A3B4
    // 0x8022B1B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B1B0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022B1B4: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022B1B8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022B1BC: sb          $v1, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r3;
    // 0x8022B1C0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022B1C4: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022B1C8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B1CC: sh          $v0, 0xDA($s0)
    MEM_H(0XDA, ctx->r16) = ctx->r2;
    // 0x8022B1D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B1D4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B1D8: jr          $ra
    // 0x8022B1DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B1DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022946C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022946C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229470: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80229474: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229478: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022947C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80229480: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80229484: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80229488: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022948C: lw          $v0, 0x4158($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4158);
    // 0x80229490: jalr        $v0
    // 0x80229494: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80229494: nop

    after_0:
    // 0x80229498: lb          $v0, 0x387($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X387);
    // 0x8022949C: bne         $v0, $zero, L_80229534
    if (ctx->r2 != 0) {
        // 0x802294A0: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80229534;
    }
    // 0x802294A0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802294A4: lbu         $v1, 0x64($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X64);
    // 0x802294A8: lbu         $a0, 0x65($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X65);
    // 0x802294AC: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x802294B0: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x802294B4: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x802294B8: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x802294BC: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x802294C0: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x802294C4: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    // 0x802294C8: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x802294CC: sb          $v0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r2;
    // 0x802294D0: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x802294D4: lb          $a0, 0x64($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X64);
    // 0x802294D8: sll         $a1, $a1, 10
    ctx->r5 = S32(ctx->r5 << 10);
    // 0x802294DC: or          $v1, $v1, $a1
    ctx->r3 = ctx->r3 | ctx->r5;
    // 0x802294E0: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x802294E4: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
    // 0x802294E8: bgez        $a0, L_80229504
    if (SIGNED(ctx->r4) >= 0) {
        // 0x802294EC: sb          $v0, 0x65($s0)
        MEM_B(0X65, ctx->r16) = ctx->r2;
            goto L_80229504;
    }
    // 0x802294EC: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
    // 0x802294F0: lhu         $v0, 0x15E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X15E);
    // 0x802294F4: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
    // 0x802294F8: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x802294FC: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x80229500: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_80229504:
    // 0x80229504: lh          $v0, 0x15E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X15E);
    // 0x80229508: andi        $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 & 0X8000;
    // 0x8022950C: beq         $v0, $zero, L_80229544
    if (ctx->r2 == 0) {
        // 0x80229510: nop
    
            goto L_80229544;
    }
    // 0x80229510: nop

    // 0x80229514: lbu         $v0, 0x66($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X66);
    // 0x80229518: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022951C: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80229520: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80229524: bltzl       $v0, L_80229544
    if (SIGNED(ctx->r2) < 0) {
        // 0x80229528: sb          $zero, 0x66($s0)
        MEM_B(0X66, ctx->r16) = 0;
            goto L_80229544;
    }
    goto skip_0;
    // 0x80229528: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    skip_0:
    // 0x8022952C: j           L_80229544
    // 0x80229530: nop

        goto L_80229544;
    // 0x80229530: nop

L_80229534:
    // 0x80229534: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80229538: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x8022953C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80229540: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_80229544:
    // 0x80229544: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80229548: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022954C: jr          $ra
    // 0x80229550: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229550: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230210_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230210: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230214: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230218: jal         0x8004F684
    // 0x8023021C: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x8023021C: nop

    after_0:
    // 0x80230220: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230224: jr          $ra
    // 0x80230228: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230228: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022FB7C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FB7C: jr          $ra
    // 0x8022FB80: nop

    TRACE_RETURN()
    return;
    // 0x8022FB80: nop

;}
RECOMP_FUNC void func_8023022C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023022C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230230: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230234: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230238: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023023C: jal         0x8006033C
    // 0x80230240: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80230240: lhu         $a0, 0x34($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X34);
    after_0:
    // 0x80230244: bne         $v0, $zero, L_802302D8
    if (ctx->r2 != 0) {
        // 0x80230248: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802302D8;
    }
    // 0x80230248: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023024C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230250: beq         $v0, $zero, L_80230280
    if (ctx->r2 == 0) {
        // 0x80230254: nop
    
            goto L_80230280;
    }
    // 0x80230254: nop

    // 0x80230258: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8023025C: bne         $v0, $zero, L_802302D0
    if (ctx->r2 != 0) {
        // 0x80230260: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_802302D0;
    }
    // 0x80230260: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80230264: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x80230268: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8023026C: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x80230270: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80230274: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80230278: j           L_8023030C
    // 0x8023027C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8023030C;
    // 0x8023027C: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80230280:
    // 0x80230280: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x80230284: bnel        $v0, $zero, L_802302D0
    if (ctx->r2 != 0) {
        // 0x80230288: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_802302D0;
    }
    goto skip_0;
    // 0x80230288: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    skip_0:
    // 0x8023028C: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x80230290: bnel        $v1, $zero, L_802302A4
    if (ctx->r3 != 0) {
        // 0x80230294: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802302A4;
    }
    goto skip_1;
    // 0x80230294: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_1:
    // 0x80230298: lui         $v0, 0x2C10
    ctx->r2 = S32(0X2C10 << 16);
    // 0x8023029C: j           L_802302B8
    // 0x802302A0: ori         $v0, $v0, 0x8010
    ctx->r2 = ctx->r2 | 0X8010;
        goto L_802302B8;
    // 0x802302A0: ori         $v0, $v0, 0x8010
    ctx->r2 = ctx->r2 | 0X8010;
L_802302A4:
    // 0x802302A4: bne         $v1, $v0, L_802302B4
    if (ctx->r3 != ctx->r2) {
        // 0x802302A8: lui         $v0, 0x2C10
        ctx->r2 = S32(0X2C10 << 16);
            goto L_802302B4;
    }
    // 0x802302A8: lui         $v0, 0x2C10
    ctx->r2 = S32(0X2C10 << 16);
    // 0x802302AC: j           L_802302B8
    // 0x802302B0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
        goto L_802302B8;
    // 0x802302B0: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_802302B4:
    // 0x802302B4: ori         $v0, $v0, 0x1080
    ctx->r2 = ctx->r2 | 0X1080;
L_802302B8:
    // 0x802302B8: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x802302BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802302C0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802302C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802302C8: j           L_8023030C
    // 0x802302CC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8023030C;
    // 0x802302CC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_802302D0:
    // 0x802302D0: j           L_8023030C
    // 0x802302D4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
        goto L_8023030C;
    // 0x802302D4: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_802302D8:
    // 0x802302D8: lbu         $v1, 0x5($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X5);
    // 0x802302DC: bne         $v1, $zero, L_802302F0
    if (ctx->r3 != 0) {
        // 0x802302E0: sb          $v0, 0x9($s0)
        MEM_B(0X9, ctx->r16) = ctx->r2;
            goto L_802302F0;
    }
    // 0x802302E0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802302E4: lui         $v0, 0x2C10
    ctx->r2 = S32(0X2C10 << 16);
    // 0x802302E8: j           L_80230308
    // 0x802302EC: ori         $v0, $v0, 0x8010
    ctx->r2 = ctx->r2 | 0X8010;
        goto L_80230308;
    // 0x802302EC: ori         $v0, $v0, 0x8010
    ctx->r2 = ctx->r2 | 0X8010;
L_802302F0:
    // 0x802302F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802302F4: bne         $v1, $v0, L_80230304
    if (ctx->r3 != ctx->r2) {
        // 0x802302F8: lui         $v0, 0x2C10
        ctx->r2 = S32(0X2C10 << 16);
            goto L_80230304;
    }
    // 0x802302F8: lui         $v0, 0x2C10
    ctx->r2 = S32(0X2C10 << 16);
    // 0x802302FC: j           L_80230308
    // 0x80230300: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
        goto L_80230308;
    // 0x80230300: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_80230304:
    // 0x80230304: ori         $v0, $v0, 0x1080
    ctx->r2 = ctx->r2 | 0X1080;
L_80230308:
    // 0x80230308: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
L_8023030C:
    // 0x8023030C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230310: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230314: jr          $ra
    // 0x80230318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802306C4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802306C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802306C8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802306CC: jal         0x8004F684
    // 0x802306D0: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x802306D0: nop

    after_0:
    // 0x802306D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802306D8: jr          $ra
    // 0x802306DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802306DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802283B4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802283B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802283B8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x802283BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802283C0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802283C4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802283C8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802283CC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802283D0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802283D4: lw          $v0, 0x411C($at)
    ctx->r2 = MEM_W(ctx->r1, 0X411C);
    // 0x802283D8: jalr        $v0
    // 0x802283DC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802283DC: nop

    after_0:
    // 0x802283E0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802283E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802283E8: bne         $v1, $v0, L_802284A4
    if (ctx->r3 != ctx->r2) {
        // 0x802283EC: nop
    
            goto L_802284A4;
    }
    // 0x802283EC: nop

    // 0x802283F0: lb          $v0, 0x387($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X387);
    // 0x802283F4: bne         $v0, $zero, L_80228488
    if (ctx->r2 != 0) {
        // 0x802283F8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80228488;
    }
    // 0x802283F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802283FC: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x80228400: lbu         $v1, 0x65($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X65);
    // 0x80228404: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x80228408: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x8022840C: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80228410: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x80228414: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x80228418: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x8022841C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80228420: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80228424: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80228428: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022842C: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x80228430: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80228434: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x80228438: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x8022843C: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x80228440: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x80228444: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x80228448: bne         $v1, $zero, L_802284A4
    if (ctx->r3 != 0) {
        // 0x8022844C: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_802284A4;
    }
    // 0x8022844C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80228450: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x80228454: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x80228458: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x8022845C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80228460: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80228464: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80228468: beq         $v1, $v0, L_802284A4
    if (ctx->r3 == ctx->r2) {
        // 0x8022846C: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_802284A4;
    }
    // 0x8022846C: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80228470: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x80228474: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x80228478: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x8022847C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80228480: j           L_802284A4
    // 0x80228484: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
        goto L_802284A4;
    // 0x80228484: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_80228488:
    // 0x80228488: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022848C: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x80228490: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x80228494: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80228498: sb          $zero, 0x66($s0)
    MEM_B(0X66, ctx->r16) = 0;
    // 0x8022849C: sb          $zero, 0x65($s0)
    MEM_B(0X65, ctx->r16) = 0;
    // 0x802284A0: sb          $zero, 0x64($s0)
    MEM_B(0X64, ctx->r16) = 0;
L_802284A4:
    // 0x802284A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802284A8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802284AC: jr          $ra
    // 0x802284B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802284B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802293EC_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802293EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802293F0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802293F4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802293F8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802293FC: jal         0x8004F144
    // 0x80229400: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80229400: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    after_0:
    // 0x80229404: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80229408: beq         $v1, $zero, L_80229444
    if (ctx->r3 == 0) {
        // 0x8022940C: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_80229444;
    }
    // 0x8022940C: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x80229410: addiu       $s0, $s1, 0x180
    ctx->r16 = ADD32(ctx->r17, 0X180);
    // 0x80229414: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80229418: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022941C: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80229420: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80229424: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80229428: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022942C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80229430: jal         0x8009A3B4
    // 0x80229434: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80229434: sb          $v0, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r2;
    after_1:
    // 0x80229438: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022943C: jal         0x8007A1B8
    // 0x80229440: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x80229440: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_2:
L_80229444:
    // 0x80229444: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80229448: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022944C: sb          $v1, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r3;
    // 0x80229450: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x80229454: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80229458: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022945C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229460: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229464: jr          $ra
    // 0x80229468: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229468: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225FD8_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FD8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225FDC: sll         $a2, $a2, 2
    ctx->r6 = S32(ctx->r6 << 2);
    // 0x80225FE0: sh          $zero, 0x4($a1)
    MEM_H(0X4, ctx->r5) = 0;
    // 0x80225FE4: sh          $zero, 0x0($a1)
    MEM_H(0X0, ctx->r5) = 0;
    // 0x80225FE8: sh          $zero, 0xA($a1)
    MEM_H(0XA, ctx->r5) = 0;
    // 0x80225FEC: sh          $zero, 0x6($a1)
    MEM_H(0X6, ctx->r5) = 0;
    // 0x80225FF0: sh          $v0, 0x8($a1)
    MEM_H(0X8, ctx->r5) = ctx->r2;
    // 0x80225FF4: sh          $v0, 0x2($a1)
    MEM_H(0X2, ctx->r5) = ctx->r2;
    // 0x80225FF8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225FFC: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80226000: lw          $v0, 0x3FFC($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FFC);
    // 0x80226004: sw          $v0, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->r2;
    // 0x80226008: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022600C: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80226010: lw          $v0, 0x4020($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4020);
    // 0x80226014: jr          $ra
    // 0x80226018: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80226018: sw          $v0, 0x10($a1)
    MEM_W(0X10, ctx->r5) = ctx->r2;
;}
RECOMP_FUNC void func_80228224_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228224: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228228: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022822C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228230: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80228234: lh          $a0, 0x56($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X56);
    // 0x80228238: lh          $v0, 0x380($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X380);
    // 0x8022823C: bne         $a0, $v0, L_80228284
    if (ctx->r4 != ctx->r2) {
        // 0x80228240: addu        $v1, $a0, $zero
        ctx->r3 = ADD32(ctx->r4, 0);
            goto L_80228284;
    }
    // 0x80228240: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
    // 0x80228244: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x80228248: addiu       $v1, $zero, 0x50
    ctx->r3 = ADD32(0, 0X50);
    // 0x8022824C: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x80228250: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80228254: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228258: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022825C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80228260: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80228264: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x80228268: sb          $zero, 0x384($s0)
    MEM_B(0X384, ctx->r16) = 0;
    // 0x8022826C: sb          $v1, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r3;
    // 0x80228270: andi        $v0, $v0, 0xFE
    ctx->r2 = ctx->r2 & 0XFE;
    // 0x80228274: jal         0x80050294
    // 0x80228278: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228278: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022827C: j           L_80228298
    // 0x80228280: nop

        goto L_80228298;
    // 0x80228280: nop

L_80228284:
    // 0x80228284: slt         $v0, $v0, $a0
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80228288: bne         $v0, $zero, L_80228294
    if (ctx->r2 != 0) {
        // 0x8022828C: addiu       $v0, $v1, -0x80
        ctx->r2 = ADD32(ctx->r3, -0X80);
            goto L_80228294;
    }
    // 0x8022828C: addiu       $v0, $v1, -0x80
    ctx->r2 = ADD32(ctx->r3, -0X80);
    // 0x80228290: addiu       $v0, $v1, 0x80
    ctx->r2 = ADD32(ctx->r3, 0X80);
L_80228294:
    // 0x80228294: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80228298:
    // 0x80228298: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x8022829C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x802282A0: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802282A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802282A8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802282AC: jr          $ra
    // 0x802282B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802282B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230D40_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230D40: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80230D44: sw          $s2, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r18;
    // 0x80230D48: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80230D4C: sw          $ra, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r31;
    // 0x80230D50: sw          $s1, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r17;
    // 0x80230D54: sw          $s0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r16;
    // 0x80230D58: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x80230D5C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80230D60: bne         $v1, $v0, L_80230D80
    if (ctx->r3 != ctx->r2) {
        // 0x80230D64: nop
    
            goto L_80230D80;
    }
    // 0x80230D64: nop

    // 0x80230D68: jal         0x8023134C
    // 0x80230D6C: nop

    func_8023134C_ovl16(rdram, ctx);
        goto after_0;
    // 0x80230D6C: nop

    after_0:
    // 0x80230D70: jal         0x8004F684
    // 0x80230D74: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_1;
    // 0x80230D74: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x80230D78: j           L_80231030
    // 0x80230D7C: nop

        goto L_80231030;
    // 0x80230D7C: nop

L_80230D80:
    // 0x80230D80: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x80230D84: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230D88: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80230D8C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230D90: lw          $v0, 0x4970($at)
    ctx->r2 = MEM_W(ctx->r1, 0X4970);
    // 0x80230D94: jalr        $v0
    // 0x80230D98: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80230D98: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_2:
    // 0x80230D9C: jal         0x8006033C
    // 0x80230DA0: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80230DA0: addiu       $a0, $zero, 0x7B0
    ctx->r4 = ADD32(0, 0X7B0);
    after_3:
    // 0x80230DA4: bne         $v0, $zero, L_80231028
    if (ctx->r2 != 0) {
        // 0x80230DA8: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80231028;
    }
    // 0x80230DA8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80230DAC: addiu       $s0, $sp, 0x70
    ctx->r16 = ADD32(ctx->r29, 0X70);
    // 0x80230DB0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230DB4: addiu       $v0, $zero, -0x200
    ctx->r2 = ADD32(0, -0X200);
    // 0x80230DB8: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80230DBC: sh          $zero, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = 0;
    // 0x80230DC0: jal         0x8002C678
    // 0x80230DC4: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
    func_8002C678_7A78(rdram, ctx);
        goto after_4;
    // 0x80230DC4: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
    after_4:
    // 0x80230DC8: lb          $a0, 0xC($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XC);
    // 0x80230DCC: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80230DD0: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80230DD4: jal         0x800319B4
    // 0x80230DD8: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    func_800319B4_CDB4(rdram, ctx);
        goto after_5;
    // 0x80230DD8: addiu       $a0, $a0, 0x800
    ctx->r4 = ADD32(ctx->r4, 0X800);
    after_5:
    // 0x80230DDC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230DE0: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x80230DE4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80230DE8: jal         0x800308E8
    // 0x80230DEC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_800308E8_BCE8(rdram, ctx);
        goto after_6;
    // 0x80230DEC: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_6:
    // 0x80230DF0: lh          $v1, 0x38($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X38);
    // 0x80230DF4: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80230DF8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230DFC: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80230E00: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80230E04: lh          $v1, 0x3A($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X3A);
    // 0x80230E08: lw          $v0, 0x34($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X34);
    // 0x80230E0C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230E10: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80230E14: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80230E18: lh          $v1, 0x3C($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X3C);
    // 0x80230E1C: lw          $v0, 0x38($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X38);
    // 0x80230E20: lui         $s0, 0x801D
    ctx->r16 = S32(0X801D << 16);
    // 0x80230E24: addiu       $s0, $s0, 0x4760
    ctx->r16 = ADD32(ctx->r16, 0X4760);
    // 0x80230E28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230E2C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230E30: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80230E34: jal         0x80031E5C
    // 0x80230E38: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    func_80031E5C_D25C(rdram, ctx);
        goto after_7;
    // 0x80230E38: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    after_7:
    // 0x80230E3C: jal         0x80031E94
    // 0x80230E40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80031E94_D294(rdram, ctx);
        goto after_8;
    // 0x80230E40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80230E44: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80230E48: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80230E4C: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80230E50: addiu       $a1, $a1, 0x49C4
    ctx->r5 = ADD32(ctx->r5, 0X49C4);
    // 0x80230E54: jal         0x8009A3B4
    // 0x80230E58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80230E58: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x80230E5C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80230E60: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80230E64: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80230E68: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80230E6C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80230E70: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x80230E74: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x80230E78: jal         0x80031F0C
    // 0x80230E7C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_10;
    // 0x80230E7C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_10:
    // 0x80230E80: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80230E84: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80230E88: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x80230E8C: jal         0x8009A3B4
    // 0x80230E90: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x80230E90: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_11:
    // 0x80230E94: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80230E98: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80230E9C: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80230EA0: jal         0x8009A3B4
    // 0x80230EA4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_12;
    // 0x80230EA4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_12:
    // 0x80230EA8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80230EAC: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80230EB0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80230EB4: jal         0x8009A3B4
    // 0x80230EB8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_13;
    // 0x80230EB8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_13:
    // 0x80230EBC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80230EC0: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80230EC4: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80230EC8: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80230ECC: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80230ED0: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x80230ED4: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x80230ED8: jal         0x80031F0C
    // 0x80230EDC: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_14;
    // 0x80230EDC: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_14:
    // 0x80230EE0: addiu       $a0, $sp, 0x50
    ctx->r4 = ADD32(ctx->r29, 0X50);
    // 0x80230EE4: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80230EE8: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x80230EEC: jal         0x8009A3B4
    // 0x80230EF0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_15;
    // 0x80230EF0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_15:
    // 0x80230EF4: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80230EF8: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80230EFC: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80230F00: jal         0x8009A3B4
    // 0x80230F04: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_16;
    // 0x80230F04: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_16:
    // 0x80230F08: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80230F0C: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80230F10: addiu       $a1, $s2, 0x38
    ctx->r5 = ADD32(ctx->r18, 0X38);
    // 0x80230F14: jal         0x8009A3B4
    // 0x80230F18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x80230F18: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_17:
    // 0x80230F1C: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80230F20: addiu       $a0, $a0, -0x26A4
    ctx->r4 = ADD32(ctx->r4, -0X26A4);
    // 0x80230F24: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80230F28: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80230F2C: lui         $a2, 0x801B
    ctx->r6 = S32(0X801B << 16);
    // 0x80230F30: addiu       $a2, $a2, -0x236C
    ctx->r6 = ADD32(ctx->r6, -0X236C);
    // 0x80230F34: lui         $a3, 0x801E
    ctx->r7 = S32(0X801E << 16);
    // 0x80230F38: jal         0x80031F0C
    // 0x80230F3C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    func_80031F0C_D30C(rdram, ctx);
        goto after_18;
    // 0x80230F3C: addiu       $a3, $a3, -0x7794
    ctx->r7 = ADD32(ctx->r7, -0X7794);
    after_18:
    // 0x80230F40: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80230F44: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x80230F48: addiu       $a1, $a1, -0x3F58
    ctx->r5 = ADD32(ctx->r5, -0X3F58);
    // 0x80230F4C: jal         0x8009A3B4
    // 0x80230F50: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_19;
    // 0x80230F50: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_19:
    // 0x80230F54: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80230F58: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x80230F5C: addiu       $a1, $a1, 0x6B34
    ctx->r5 = ADD32(ctx->r5, 0X6B34);
    // 0x80230F60: jal         0x8009A3B4
    // 0x80230F64: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    memcpy_recomp(rdram, ctx);
        goto after_20;
    // 0x80230F64: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_20:
    // 0x80230F68: lw          $a2, 0x60($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X60);
    // 0x80230F6C: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80230F70: beq         $a2, $a1, L_80231028
    if (ctx->r6 == ctx->r5) {
        // 0x80230F74: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80231028;
    }
    // 0x80230F74: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80230F78: lw          $v0, 0x68($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X68);
    // 0x80230F7C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x80230F80: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80230F84: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80230F88: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x80230F8C: mult        $v0, $v1
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80230F90: mflo        $v0
    ctx->r2 = lo;
    // 0x80230F94: subu        $v1, $a2, $a1
    ctx->r3 = SUB32(ctx->r6, ctx->r5);
    // 0x80230F98: nop

    // 0x80230F9C: div         $zero, $v0, $v1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r3))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r3)));
    // 0x80230FA0: bne         $v1, $zero, L_80230FAC
    if (ctx->r3 != 0) {
        // 0x80230FA4: nop
    
            goto L_80230FAC;
    }
    // 0x80230FA4: nop

    // 0x80230FA8: break       7
    do_break(2149781416);
L_80230FAC:
    // 0x80230FAC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80230FB0: bne         $v1, $at, L_80230FC4
    if (ctx->r3 != ctx->r1) {
        // 0x80230FB4: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80230FC4;
    }
    // 0x80230FB4: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80230FB8: bne         $v0, $at, L_80230FC4
    if (ctx->r2 != ctx->r1) {
        // 0x80230FBC: nop
    
            goto L_80230FC4;
    }
    // 0x80230FBC: nop

    // 0x80230FC0: break       6
    do_break(2149781440);
L_80230FC4:
    // 0x80230FC4: mflo        $v0
    ctx->r2 = lo;
    // 0x80230FC8: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x80230FCC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80230FD0: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80230FD4: beq         $v0, $zero, L_80231028
    if (ctx->r2 == 0) {
        // 0x80230FD8: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80231028;
    }
    // 0x80230FD8: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80230FDC: lh          $v1, 0x10($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X10);
    // 0x80230FE0: lh          $a0, 0x18($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X18);
    // 0x80230FE4: slt         $v0, $v1, $a0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80230FE8: beq         $v0, $zero, L_80231004
    if (ctx->r2 == 0) {
        // 0x80230FEC: slt         $v0, $a0, $v1
        ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
            goto L_80231004;
    }
    // 0x80230FEC: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80230FF0: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x80230FF4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80230FF8: bne         $v0, $zero, L_8023101C
    if (ctx->r2 != 0) {
        // 0x80230FFC: lui         $v0, 0x240
        ctx->r2 = S32(0X240 << 16);
            goto L_8023101C;
    }
    // 0x80230FFC: lui         $v0, 0x240
    ctx->r2 = S32(0X240 << 16);
    // 0x80231000: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
L_80231004:
    // 0x80231004: beq         $v0, $zero, L_80231028
    if (ctx->r2 == 0) {
        // 0x80231008: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_80231028;
    }
    // 0x80231008: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8023100C: lh          $v0, 0x20($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X20);
    // 0x80231010: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80231014: beq         $v0, $zero, L_80231024
    if (ctx->r2 == 0) {
        // 0x80231018: lui         $v0, 0x240
        ctx->r2 = S32(0X240 << 16);
            goto L_80231024;
    }
    // 0x80231018: lui         $v0, 0x240
    ctx->r2 = S32(0X240 << 16);
L_8023101C:
    // 0x8023101C: j           L_8023102C
    // 0x80231020: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
        goto L_8023102C;
    // 0x80231020: ori         $v0, $v0, 0x4040
    ctx->r2 = ctx->r2 | 0X4040;
L_80231024:
    // 0x80231024: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
L_80231028:
    // 0x80231028: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_8023102C:
    // 0x8023102C: sw          $v0, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r2;
L_80231030:
    // 0x80231030: lw          $ra, 0x9C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X9C);
    // 0x80231034: lw          $s2, 0x98($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X98);
    // 0x80231038: lw          $s1, 0x94($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X94);
    // 0x8023103C: lw          $s0, 0x90($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X90);
    // 0x80231040: jr          $ra
    // 0x80231044: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    TRACE_RETURN()
    return;
    // 0x80231044: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_802257C0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802257C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802257C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802257C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802257CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802257D0: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x802257D4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802257D8: beq         $v1, $v0, L_8022583C
    if (ctx->r3 == ctx->r2) {
        // 0x802257DC: addiu       $a0, $zero, 0x14
        ctx->r4 = ADD32(0, 0X14);
            goto L_8022583C;
    }
    // 0x802257DC: addiu       $a0, $zero, 0x14
    ctx->r4 = ADD32(0, 0X14);
    // 0x802257E0: lw          $v0, 0xA4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XA4);
    // 0x802257E4: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x802257E8: jalr        $v0
    // 0x802257EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802257EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802257F0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802257F4: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802257F8: bne         $v1, $v0, L_80225810
    if (ctx->r3 != ctx->r2) {
        // 0x802257FC: addiu       $a0, $zero, 0x8
        ctx->r4 = ADD32(0, 0X8);
            goto L_80225810;
    }
    // 0x802257FC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80225800: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x80225804: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225808: j           L_8022583C
    // 0x8022580C: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
        goto L_8022583C;
    // 0x8022580C: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_80225810:
    // 0x80225810: jal         0x8006072C
    // 0x80225814: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_1;
    // 0x80225814: nop

    after_1:
    // 0x80225818: beq         $v0, $zero, L_80225854
    if (ctx->r2 == 0) {
        // 0x8022581C: nop
    
            goto L_80225854;
    }
    // 0x8022581C: nop

    // 0x80225820: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225824: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80225828: beq         $v0, $zero, L_80225838
    if (ctx->r2 == 0) {
        // 0x8022582C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80225838;
    }
    // 0x8022582C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80225830: lw          $v1, 0x28($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X28);
    // 0x80225834: sb          $v0, 0x8($v1)
    MEM_B(0X8, ctx->r3) = ctx->r2;
L_80225838:
    // 0x80225838: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_8022583C:
    // 0x8022583C: jal         0x80036E48
    // 0x80225840: nop

    func_80036E48_12248(rdram, ctx);
        goto after_2;
    // 0x80225840: nop

    after_2:
    // 0x80225844: lbu         $v0, 0x4($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X4);
    // 0x80225848: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022584C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225850: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
L_80225854:
    // 0x80225854: jal         0x8005FB90
    // 0x80225858: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_3;
    // 0x80225858: nop

    after_3:
    // 0x8022585C: jal         0x80060018
    // 0x80225860: nop

    func_80060018_3B418(rdram, ctx);
        goto after_4;
    // 0x80225860: nop

    after_4:
    // 0x80225864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225868: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022586C: jr          $ra
    // 0x80225870: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225870: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802284B4_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802284B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802284B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802284BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802284C0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802284C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802284C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802284CC: jal         0x80050294
    // 0x802284D0: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802284D0: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    after_0:
    // 0x802284D4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802284D8: sb          $v0, 0x385($s0)
    MEM_B(0X385, ctx->r16) = ctx->r2;
    // 0x802284DC: addiu       $v0, $zero, 0x5A
    ctx->r2 = ADD32(0, 0X5A);
    // 0x802284E0: sb          $v0, 0x1DE($s0)
    MEM_B(0X1DE, ctx->r16) = ctx->r2;
    // 0x802284E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802284E8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802284EC: sb          $v0, 0x387($s0)
    MEM_B(0X387, ctx->r16) = ctx->r2;
    // 0x802284F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802284F4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802284F8: jr          $ra
    // 0x802284FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802284FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AED0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AED0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022AED4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022AED8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AEDC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022AEE0: addiu       $s1, $s0, 0xF4
    ctx->r17 = ADD32(ctx->r16, 0XF4);
    // 0x8022AEE4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AEE8: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022AEEC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022AEF0: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022AEF4: jal         0x8009A3B4
    // 0x8022AEF8: sw          $zero, 0xFC($s0)
    MEM_W(0XFC, ctx->r16) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022AEF8: sw          $zero, 0xFC($s0)
    MEM_W(0XFC, ctx->r16) = 0;
    after_0:
    // 0x8022AEFC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022AF00: lhu         $v0, 0xF6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XF6);
    // 0x8022AF04: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x8022AF08: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    // 0x8022AF0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AF10: addiu       $v0, $v0, -0x28
    ctx->r2 = ADD32(ctx->r2, -0X28);
    // 0x8022AF14: sh          $v0, 0xF6($s0)
    MEM_H(0XF6, ctx->r16) = ctx->r2;
    // 0x8022AF18: addiu       $v0, $s0, 0xFC
    ctx->r2 = ADD32(ctx->r16, 0XFC);
    // 0x8022AF1C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022AF20: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022AF24: lhu         $v1, 0x10C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X10C);
    // 0x8022AF28: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022AF2C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022AF30: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022AF34: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x8022AF38: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022AF3C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022AF40: jal         0x80051E18
    // 0x8022AF44: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x8022AF44: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_1:
    // 0x8022AF48: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022AF4C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022AF50: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022AF54: jr          $ra
    // 0x8022AF58: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022AF58: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80225874_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225874: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225878: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x8022587C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225880: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225884: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80225888: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022588C: bne         $v0, $zero, L_80225964
    if (ctx->r2 != 0) {
        // 0x80225890: sw          $s0, 0x10($sp)
        MEM_W(0X10, ctx->r29) = ctx->r16;
            goto L_80225964;
    }
    // 0x80225890: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225894: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x80225898: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022589C: beq         $v1, $v0, L_802258DC
    if (ctx->r3 == ctx->r2) {
        // 0x802258A0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802258DC;
    }
    // 0x802258A0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802258A4: beql        $v0, $zero, L_802258BC
    if (ctx->r2 == 0) {
        // 0x802258A8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802258BC;
    }
    goto skip_0;
    // 0x802258A8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802258AC: beq         $v1, $zero, L_802258CC
    if (ctx->r3 == 0) {
        // 0x802258B0: nop
    
            goto L_802258CC;
    }
    // 0x802258B0: nop

    // 0x802258B4: j           L_80225964
    // 0x802258B8: nop

        goto L_80225964;
    // 0x802258B8: nop

L_802258BC:
    // 0x802258BC: beq         $v1, $v0, L_80225930
    if (ctx->r3 == ctx->r2) {
        // 0x802258C0: addiu       $a0, $zero, 0x56
        ctx->r4 = ADD32(0, 0X56);
            goto L_80225930;
    }
    // 0x802258C0: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x802258C4: j           L_80225964
    // 0x802258C8: nop

        goto L_80225964;
    // 0x802258C8: nop

L_802258CC:
    // 0x802258CC: jal         0x8004F488
    // 0x802258D0: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    func_8004F488_2A888(rdram, ctx);
        goto after_0;
    // 0x802258D0: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    after_0:
    // 0x802258D4: j           L_80225920
    // 0x802258D8: nop

        goto L_80225920;
    // 0x802258D8: nop

L_802258DC:
    // 0x802258DC: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x802258E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802258E4: jal         0x80036B00
    // 0x802258E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_1;
    // 0x802258E8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x802258EC: jal         0x80054578
    // 0x802258F0: nop

    func_80054578_2F978(rdram, ctx);
        goto after_2;
    // 0x802258F0: nop

    after_2:
    // 0x802258F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802258F8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802258FC: jal         0x80034844
    // 0x80225900: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_3;
    // 0x80225900: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_3:
    // 0x80225904: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80225908: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x8022590C: jal         0x80070050
    // 0x80225910: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_4;
    // 0x80225910: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80225914: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80225918: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x8022591C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
L_80225920:
    // 0x80225920: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80225924: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225928: j           L_80225964
    // 0x8022592C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_80225964;
    // 0x8022592C: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_80225930:
    // 0x80225930: jal         0x8004CB2C
    // 0x80225934: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_5;
    // 0x80225934: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_5:
    // 0x80225938: jal         0x8006036C
    // 0x8022593C: addiu       $a0, $zero, 0x528
    ctx->r4 = ADD32(0, 0X528);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x8022593C: addiu       $a0, $zero, 0x528
    ctx->r4 = ADD32(0, 0X528);
    after_6:
    // 0x80225940: jal         0x80060D38
    // 0x80225944: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_80060D38_3C138(rdram, ctx);
        goto after_7;
    // 0x80225944: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_7:
    // 0x80225948: jal         0x8006027C
    // 0x8022594C: nop

    func_8006027C_3B67C(rdram, ctx);
        goto after_8;
    // 0x8022594C: nop

    after_8:
    // 0x80225950: jal         0x80036B58
    // 0x80225954: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_80036B58_11F58(rdram, ctx);
        goto after_9;
    // 0x80225954: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_9:
    // 0x80225958: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x8022595C: jal         0x80036E48
    // 0x80225960: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_10;
    // 0x80225960: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_10:
L_80225964:
    // 0x80225964: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80225968: beq         $v0, $zero, L_80225980
    if (ctx->r2 == 0) {
        // 0x8022596C: nop
    
            goto L_80225980;
    }
    // 0x8022596C: nop

    // 0x80225970: jal         0x8005FB90
    // 0x80225974: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_11;
    // 0x80225974: nop

    after_11:
    // 0x80225978: jal         0x80060018
    // 0x8022597C: nop

    func_80060018_3B418(rdram, ctx);
        goto after_12;
    // 0x8022597C: nop

    after_12:
L_80225980:
    // 0x80225980: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80225984: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225988: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022598C: jr          $ra
    // 0x80225990: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225990: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227E08_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227E08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227E0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227E10: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227E14: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227E18: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227E1C: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x80227E20: lui         $v0, 0x8
    ctx->r2 = S32(0X8 << 16);
    // 0x80227E24: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x80227E28: beq         $v0, $zero, L_80227E4C
    if (ctx->r2 == 0) {
        // 0x80227E2C: addiu       $s1, $s0, 0x64
        ctx->r17 = ADD32(ctx->r16, 0X64);
            goto L_80227E4C;
    }
    // 0x80227E2C: addiu       $s1, $s0, 0x64
    ctx->r17 = ADD32(ctx->r16, 0X64);
    // 0x80227E30: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80227E34: lw          $v0, -0x3BC8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3BC8);
    // 0x80227E38: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x80227E3C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80227E40: lui         $v1, 0x1D02
    ctx->r3 = S32(0X1D02 << 16);
    // 0x80227E44: bne         $v0, $v1, L_80227E88
    if (ctx->r2 != ctx->r3) {
        // 0x80227E48: nop
    
            goto L_80227E88;
    }
    // 0x80227E48: nop

L_80227E4C:
    // 0x80227E4C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227E50: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227E54: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80227E58: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80227E5C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80227E60: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80227E64: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80227E68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227E6C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80227E70: jal         0x80050294
    // 0x80227E74: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227E74: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80227E78: lbu         $v0, 0xCA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XCA);
    // 0x80227E7C: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80227E80: j           L_80227E90
    // 0x80227E84: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
        goto L_80227E90;
    // 0x80227E84: sb          $v0, 0xCA($s0)
    MEM_B(0XCA, ctx->r16) = ctx->r2;
L_80227E88:
    // 0x80227E88: jal         0x8005044C
    // 0x80227E8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80227E8C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_80227E90:
    // 0x80227E90: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80227E94: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80227E98: bne         $v1, $v0, L_80227EB0
    if (ctx->r3 != ctx->r2) {
        // 0x80227E9C: addiu       $v0, $zero, -0x8000
        ctx->r2 = ADD32(0, -0X8000);
            goto L_80227EB0;
    }
    // 0x80227E9C: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x80227EA0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80227EA4: sb          $zero, 0x2($s1)
    MEM_B(0X2, ctx->r17) = 0;
    // 0x80227EA8: sb          $zero, 0x1($s1)
    MEM_B(0X1, ctx->r17) = 0;
    // 0x80227EAC: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
L_80227EB0:
    // 0x80227EB0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227EB4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227EB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227EBC: jr          $ra
    // 0x80227EC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227EC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B8AC_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B8AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B8B0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B8B4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B8B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022B8BC: lhu         $a0, 0xD8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XD8);
    // 0x8022B8C0: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x8022B8C4: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x8022B8C8: andi        $v1, $a0, 0xFFFF
    ctx->r3 = ctx->r4 & 0XFFFF;
    // 0x8022B8CC: sltiu       $a1, $v1, 0x1
    ctx->r5 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022B8D0: lw          $v1, 0xF0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XF0);
    // 0x8022B8D4: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x8022B8D8: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022B8DC: sh          $v0, 0x54($s0)
    MEM_H(0X54, ctx->r16) = ctx->r2;
    // 0x8022B8E0: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x8022B8E4: beq         $v1, $zero, L_8022B8F0
    if (ctx->r3 == 0) {
        // 0x8022B8E8: sh          $a0, 0xD8($s0)
        MEM_H(0XD8, ctx->r16) = ctx->r4;
            goto L_8022B8F0;
    }
    // 0x8022B8E8: sh          $a0, 0xD8($s0)
    MEM_H(0XD8, ctx->r16) = ctx->r4;
    // 0x8022B8EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8022B8F0:
    // 0x8022B8F0: lb          $v0, 0x74($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X74);
    // 0x8022B8F4: beql        $v0, $zero, L_8022B8FC
    if (ctx->r2 == 0) {
        // 0x8022B8F8: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_8022B8FC;
    }
    goto skip_0;
    // 0x8022B8F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    skip_0:
L_8022B8FC:
    // 0x8022B8FC: beq         $a1, $zero, L_8022B958
    if (ctx->r5 == 0) {
        // 0x8022B900: nop
    
            goto L_8022B958;
    }
    // 0x8022B900: nop

    // 0x8022B904: jal         0x8004F144
    // 0x8022B908: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022B908: nop

    after_0:
    // 0x8022B90C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022B910: beq         $v1, $zero, L_8022B938
    if (ctx->r3 == 0) {
        // 0x8022B914: addiu       $a0, $v1, 0x38
        ctx->r4 = ADD32(ctx->r3, 0X38);
            goto L_8022B938;
    }
    // 0x8022B914: addiu       $a0, $v1, 0x38
    ctx->r4 = ADD32(ctx->r3, 0X38);
    // 0x8022B918: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022B91C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B920: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x8022B924: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022B928: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022B92C: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022B930: jal         0x8009A3B4
    // 0x8022B934: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B934: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    after_1:
L_8022B938:
    // 0x8022B938: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B93C: jal         0x8007A1B8
    // 0x8022B940: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8007A1B8_555B8(rdram, ctx);
        goto after_2;
    // 0x8022B940: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x8022B944: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022B948: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022B94C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022B950: j           L_8022B97C
    // 0x8022B954: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
        goto L_8022B97C;
    // 0x8022B954: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_8022B958:
    // 0x8022B958: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022B95C: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022B960: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8022B964: jal         0x8004DA90
    // 0x8022B968: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022B968: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022B96C: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022B970: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022B974: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B978: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
L_8022B97C:
    // 0x8022B97C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022B980: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B984: jr          $ra
    // 0x8022B988: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022B988: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226B50_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226B54: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226B58: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226B5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226B60: lb          $a0, 0xC($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XC);
    // 0x80226B64: jal         0x8006033C
    // 0x80226B68: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80226B68: addiu       $a0, $a0, 0x400
    ctx->r4 = ADD32(ctx->r4, 0X400);
    after_0:
    // 0x80226B6C: bne         $v0, $zero, L_80226B88
    if (ctx->r2 != 0) {
        // 0x80226B70: addu        $v0, $zero, $zero
        ctx->r2 = ADD32(0, 0);
            goto L_80226B88;
    }
    // 0x80226B70: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
    // 0x80226B74: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80226B78: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226B7C: bne         $v1, $v0, L_80226B88
    if (ctx->r3 != ctx->r2) {
        // 0x80226B80: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226B88;
    }
    // 0x80226B80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226B84: addu        $v0, $zero, $zero
    ctx->r2 = ADD32(0, 0);
L_80226B88:
    // 0x80226B88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226B8C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226B90: jr          $ra
    // 0x80226B94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226B94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022889C_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022889C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802288A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802288A4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802288A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802288AC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x802288B0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x802288B4: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x802288B8: addiu       $s2, $s0, 0x348
    ctx->r18 = ADD32(ctx->r16, 0X348);
    // 0x802288BC: bne         $v0, $zero, L_802288D0
    if (ctx->r2 != 0) {
        // 0x802288C0: addiu       $s1, $s0, 0xC4
        ctx->r17 = ADD32(ctx->r16, 0XC4);
            goto L_802288D0;
    }
    // 0x802288C0: addiu       $s1, $s0, 0xC4
    ctx->r17 = ADD32(ctx->r16, 0XC4);
    // 0x802288C4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802288C8: jal         0x802282B4
    // 0x802288CC: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
    func_802282B4_ovl16(rdram, ctx);
        goto after_0;
    // 0x802288CC: sh          $v0, 0x382($s0)
    MEM_H(0X382, ctx->r16) = ctx->r2;
    after_0:
L_802288D0:
    // 0x802288D0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802288D4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802288D8: bne         $v1, $v0, L_80228968
    if (ctx->r3 != ctx->r2) {
        // 0x802288DC: nop
    
            goto L_80228968;
    }
    // 0x802288DC: nop

    // 0x802288E0: lbu         $v0, 0x64($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X64);
    // 0x802288E4: lbu         $v1, 0x65($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X65);
    // 0x802288E8: lbu         $a0, 0x66($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X66);
    // 0x802288EC: lbu         $a1, 0x66($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X66);
    // 0x802288F0: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x802288F4: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x802288F8: andi        $a0, $a0, 0x1F
    ctx->r4 = ctx->r4 & 0X1F;
    // 0x802288FC: sll         $v1, $v1, 5
    ctx->r3 = S32(ctx->r3 << 5);
    // 0x80228900: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80228904: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x80228908: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x8022890C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80228910: lhu         $a0, 0x15E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X15E);
    // 0x80228914: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80228918: sb          $a1, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r5;
    // 0x8022891C: lb          $v1, 0x66($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X66);
    // 0x80228920: addiu       $v0, $zero, -0x8000
    ctx->r2 = ADD32(0, -0X8000);
    // 0x80228924: or          $v0, $a0, $v0
    ctx->r2 = ctx->r4 | ctx->r2;
    // 0x80228928: slti        $v1, $v1, 0x10
    ctx->r3 = SIGNED(ctx->r3) < 0X10 ? 1 : 0;
    // 0x8022892C: bne         $v1, $zero, L_80228968
    if (ctx->r3 != 0) {
        // 0x80228930: sh          $v0, 0x15E($s0)
        MEM_H(0X15E, ctx->r16) = ctx->r2;
            goto L_80228968;
    }
    // 0x80228930: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80228934: lb          $v1, 0x64($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X64);
    // 0x80228938: andi        $v0, $v0, 0x7FFF
    ctx->r2 = ctx->r2 & 0X7FFF;
    // 0x8022893C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80228940: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80228944: sb          $v0, 0x66($s0)
    MEM_B(0X66, ctx->r16) = ctx->r2;
    // 0x80228948: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022894C: beq         $v1, $v0, L_80228968
    if (ctx->r3 == ctx->r2) {
        // 0x80228950: addu        $a0, $v1, $zero
        ctx->r4 = ADD32(ctx->r3, 0);
            goto L_80228968;
    }
    // 0x80228950: addu        $a0, $v1, $zero
    ctx->r4 = ADD32(ctx->r3, 0);
    // 0x80228954: lbu         $v0, 0x65($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X65);
    // 0x80228958: addiu       $v1, $a0, 0x4
    ctx->r3 = ADD32(ctx->r4, 0X4);
    // 0x8022895C: sb          $v1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r3;
    // 0x80228960: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80228964: sb          $v0, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r2;
L_80228968:
    // 0x80228968: lb          $v1, 0xA7($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XA7);
    // 0x8022896C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80228970: bne         $v1, $v0, L_802289C8
    if (ctx->r3 != ctx->r2) {
        // 0x80228974: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802289C8;
    }
    // 0x80228974: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80228978: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8022897C: beq         $v1, $v0, L_802289C0
    if (ctx->r3 == ctx->r2) {
        // 0x80228980: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_802289C0;
    }
    // 0x80228980: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80228984: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x80228988: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x8022898C: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
    // 0x80228990: addiu       $v0, $zero, 0x50
    ctx->r2 = ADD32(0, 0X50);
    // 0x80228994: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80228998: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022899C: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802289A0: sh          $v0, 0x3A($s2)
    MEM_H(0X3A, ctx->r18) = ctx->r2;
    // 0x802289A4: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x802289A8: sb          $v0, 0x3E($s2)
    MEM_B(0X3E, ctx->r18) = ctx->r2;
    // 0x802289AC: lbu         $v0, 0x6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X6);
    // 0x802289B0: sb          $zero, 0x7($s1)
    MEM_B(0X7, ctx->r17) = 0;
    // 0x802289B4: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x802289B8: j           L_802289C8
    // 0x802289BC: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
        goto L_802289C8;
    // 0x802289BC: sb          $v0, 0x6($s1)
    MEM_B(0X6, ctx->r17) = ctx->r2;
L_802289C0:
    // 0x802289C0: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802289C4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
L_802289C8:
    // 0x802289C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802289CC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x802289D0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x802289D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x802289D8: jr          $ra
    // 0x802289DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802289DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022CF40_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CF40: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8022CF44: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8022CF48: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022CF4C: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8022CF50: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8022CF54: addiu       $s2, $s1, 0x14
    ctx->r18 = ADD32(ctx->r17, 0X14);
    // 0x8022CF58: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022CF5C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022CF60: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x8022CF64: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8022CF68: jal         0x8009A3B4
    // 0x8022CF6C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022CF6C: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022CF70: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8022CF74: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022CF78: jal         0x8009A3B4
    // 0x8022CF7C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022CF7C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022CF80: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x8022CF84: addiu       $s3, $s1, 0x54
    ctx->r19 = ADD32(ctx->r17, 0X54);
    // 0x8022CF88: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x8022CF8C: jal         0x8009A3B4
    // 0x8022CF90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022CF90: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022CF94: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022CF98: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8022CF9C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022CFA0: jal         0x8022D090
    // 0x8022CFA4: sw          $v0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r2;
    func_8022D090_ovl16(rdram, ctx);
        goto after_3;
    // 0x8022CFA4: sw          $v0, 0xB4($s1)
    MEM_W(0XB4, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022CFA8: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022CFAC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022CFB0: beq         $v1, $v0, L_8022D074
    if (ctx->r3 == ctx->r2) {
        // 0x8022CFB4: nop
    
            goto L_8022D074;
    }
    // 0x8022CFB4: nop

    // 0x8022CFB8: jal         0x8022D1D0
    // 0x8022CFBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8022D1D0_ovl16(rdram, ctx);
        goto after_4;
    // 0x8022CFBC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022CFC0: addiu       $s0, $s1, 0xE4
    ctx->r16 = ADD32(ctx->r17, 0XE4);
    // 0x8022CFC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CFC8: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022CFCC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022CFD0: jal         0x8009A3B4
    // 0x8022CFD4: sw          $zero, 0xEC($s1)
    MEM_W(0XEC, ctx->r17) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022CFD4: sw          $zero, 0xEC($s1)
    MEM_W(0XEC, ctx->r17) = 0;
    after_5:
    // 0x8022CFD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022CFDC: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8022CFE0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CFE4: lhu         $v0, 0xE6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XE6);
    // 0x8022CFE8: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022CFEC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022CFF0: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x8022CFF4: sh          $v0, 0xE6($s1)
    MEM_H(0XE6, ctx->r17) = ctx->r2;
    // 0x8022CFF8: addiu       $v0, $s1, 0xEC
    ctx->r2 = ADD32(ctx->r17, 0XEC);
    // 0x8022CFFC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022D000: lui         $v0, 0x408
    ctx->r2 = S32(0X408 << 16);
    // 0x8022D004: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022D008: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022D00C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022D010: jal         0x80051E18
    // 0x8022D014: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    func_80051E18_2D218(rdram, ctx);
        goto after_6;
    // 0x8022D014: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    after_6:
    // 0x8022D018: addiu       $a0, $s1, 0xAC
    ctx->r4 = ADD32(ctx->r17, 0XAC);
    // 0x8022D01C: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022D020: jal         0x8009A3B4
    // 0x8022D024: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022D024: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_7:
    // 0x8022D028: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x8022D02C: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x8022D030: jal         0x80031428
    // 0x8022D034: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031428_C828(rdram, ctx);
        goto after_8;
    // 0x8022D034: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8022D038: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022D03C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8022D040: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022D044: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8022D048: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8022D04C: jal         0x80031DA8
    // 0x8022D050: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_9;
    // 0x8022D050: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_9:
    // 0x8022D054: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022D058: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022D05C: beq         $v0, $zero, L_8022D074
    if (ctx->r2 == 0) {
        // 0x8022D060: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022D074;
    }
    // 0x8022D060: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D064: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8022D068: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022D06C: jal         0x8003B564
    // 0x8022D070: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_10;
    // 0x8022D070: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_10:
L_8022D074:
    // 0x8022D074: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x8022D078: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8022D07C: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8022D080: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8022D084: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022D088: jr          $ra
    // 0x8022D08C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8022D08C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_8022A1C0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A1C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022A1C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022A1C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022A1CC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A1D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022A1D4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022A1D8: addiu       $v0, $zero, 0x100
    ctx->r2 = ADD32(0, 0X100);
    // 0x8022A1DC: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x8022A1E0: addiu       $v0, $zero, -0xF0
    ctx->r2 = ADD32(0, -0XF0);
    // 0x8022A1E4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022A1E8: jal         0x800A3450
    // 0x8022A1EC: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022A1EC: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    after_0:
    // 0x8022A1F0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022A1F4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022A1F8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022A1FC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A200: lhu         $v0, 0x419C($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X419C);
    // 0x8022A204: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022A208: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022A20C: sh          $v0, 0x374($s0)
    MEM_H(0X374, ctx->r16) = ctx->r2;
    // 0x8022A210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022A214: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022A218: jr          $ra
    // 0x8022A21C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022A21C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A2F0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A2F0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8022A2F4: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8022A2F8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022A2FC: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8022A300: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8022A304: addiu       $s2, $s1, 0x14
    ctx->r18 = ADD32(ctx->r17, 0X14);
    // 0x8022A308: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022A30C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022A310: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8022A314: jal         0x8009A3B4
    // 0x8022A318: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022A318: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    after_0:
    // 0x8022A31C: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8022A320: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022A324: jal         0x8009A3B4
    // 0x8022A328: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022A328: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022A32C: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x8022A330: addiu       $s0, $s1, 0x54
    ctx->r16 = ADD32(ctx->r17, 0X54);
    // 0x8022A334: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022A338: jal         0x8009A3B4
    // 0x8022A33C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022A33C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022A340: jal         0x800A3450
    // 0x8022A344: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022A344: nop

    after_3:
    // 0x8022A348: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022A34C: sh          $v0, 0xC2($s1)
    MEM_H(0XC2, ctx->r17) = ctx->r2;
    // 0x8022A350: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022A354: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022A358: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A35C: lw          $v0, 0x41B0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X41B0);
    // 0x8022A360: jalr        $v0
    // 0x8022A364: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8022A364: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022A368: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A36C: addiu       $s0, $s1, 0x8C
    ctx->r16 = ADD32(ctx->r17, 0X8C);
    // 0x8022A370: jal         0x80031600
    // 0x8022A374: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031600_CA00(rdram, ctx);
        goto after_5;
    // 0x8022A374: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8022A378: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A37C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8022A380: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022A384: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8022A388: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8022A38C: jal         0x80031DA8
    // 0x8022A390: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_6;
    // 0x8022A390: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    after_6:
    // 0x8022A394: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022A398: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022A39C: beq         $v0, $zero, L_8022A3D4
    if (ctx->r2 == 0) {
        // 0x8022A3A0: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022A3D4;
    }
    // 0x8022A3A0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A3A4: lhu         $v0, 0x58($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X58);
    // 0x8022A3A8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022A3AC: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x8022A3B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A3B4: sra         $v1, $v0, 22
    ctx->r3 = S32(SIGNED(ctx->r2) >> 22);
    // 0x8022A3B8: subu        $a1, $a1, $v1
    ctx->r5 = SUB32(ctx->r5, ctx->r3);
    // 0x8022A3BC: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x8022A3C0: sll         $a2, $v0, 1
    ctx->r6 = S32(ctx->r2 << 1);
    // 0x8022A3C4: addu        $a2, $a2, $v0
    ctx->r6 = ADD32(ctx->r6, ctx->r2);
    // 0x8022A3C8: addiu       $v0, $zero, 0x2C0
    ctx->r2 = ADD32(0, 0X2C0);
    // 0x8022A3CC: jal         0x8003B564
    // 0x8022A3D0: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x8022A3D0: subu        $a2, $v0, $a2
    ctx->r6 = SUB32(ctx->r2, ctx->r6);
    after_7:
L_8022A3D4:
    // 0x8022A3D4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022A3D8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022A3DC: beq         $v0, $zero, L_8022A450
    if (ctx->r2 == 0) {
        // 0x8022A3E0: nop
    
            goto L_8022A450;
    }
    // 0x8022A3E0: nop

    // 0x8022A3E4: lhu         $v0, 0xC0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC0);
    // 0x8022A3E8: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022A3EC: beq         $v0, $zero, L_8022A450
    if (ctx->r2 == 0) {
        // 0x8022A3F0: addu        $a0, $s2, $zero
        ctx->r4 = ADD32(ctx->r18, 0);
            goto L_8022A450;
    }
    // 0x8022A3F0: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x8022A3F4: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8022A3F8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A3FC: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8022A400: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022A404: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022A408: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022A40C: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022A410: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A414: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022A418: addiu       $v0, $s1, 0xC8
    ctx->r2 = ADD32(ctx->r17, 0XC8);
    // 0x8022A41C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022A420: lui         $v0, 0x488
    ctx->r2 = S32(0X488 << 16);
    // 0x8022A424: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8022A428: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x8022A42C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022A430: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8022A434: jal         0x80051E18
    // 0x8022A438: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_80051E18_2D218(rdram, ctx);
        goto after_8;
    // 0x8022A438: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_8:
    // 0x8022A43C: lhu         $v0, 0x16($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X16);
    // 0x8022A440: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x8022A444: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022A448: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A44C: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
L_8022A450:
    // 0x8022A450: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8022A454: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8022A458: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8022A45C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022A460: jr          $ra
    // 0x8022A464: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    TRACE_RETURN()
    return;
    // 0x8022A464: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8022ED44_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022ED44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022ED48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022ED4C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022ED50: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x8022ED54: addiu       $a0, $a0, -0x3BC8
    ctx->r4 = ADD32(ctx->r4, -0X3BC8);
    // 0x8022ED58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022ED5C: lb          $v1, 0x0($a0)
    ctx->r3 = MEM_B(ctx->r4, 0X0);
    // 0x8022ED60: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    // 0x8022ED64: addiu       $a1, $a1, 0x49B0
    ctx->r5 = ADD32(ctx->r5, 0X49B0);
    // 0x8022ED68: xori        $v0, $v1, 0xE
    ctx->r2 = ctx->r3 ^ 0XE;
    // 0x8022ED6C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8022ED70: xori        $v1, $v1, 0x14
    ctx->r3 = ctx->r3 ^ 0X14;
    // 0x8022ED74: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x8022ED78: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8022ED7C: bne         $v0, $zero, L_8022ED98
    if (ctx->r2 != 0) {
        // 0x8022ED80: lui         $v1, 0xFFFF
        ctx->r3 = S32(0XFFFF << 16);
            goto L_8022ED98;
    }
    // 0x8022ED80: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
    // 0x8022ED84: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8022ED88: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022ED8C: lui         $v1, 0x1300
    ctx->r3 = S32(0X1300 << 16);
    // 0x8022ED90: bne         $v0, $v1, L_8022EE28
    if (ctx->r2 != ctx->r3) {
        // 0x8022ED94: nop
    
            goto L_8022EE28;
    }
    // 0x8022ED94: nop

L_8022ED98:
    // 0x8022ED98: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022ED9C: lhu         $v1, 0x3A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3A);
    // 0x8022EDA0: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x8022EDA4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022EDA8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022EDAC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EDB0: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    // 0x8022EDB4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022EDB8: lhu         $v0, 0x4DEA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4DEA);
    // 0x8022EDBC: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8022EDC0: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8022EDC4: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022EDC8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022EDCC: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8022EDD0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EDD4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022EDD8: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8022EDDC: lh          $v0, 0x3A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3A);
    // 0x8022EDE0: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x8022EDE4: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022EDE8: bne         $v0, $zero, L_8022EFB8
    if (ctx->r2 != 0) {
        // 0x8022EDEC: nop
    
            goto L_8022EFB8;
    }
    // 0x8022EDEC: nop

    // 0x8022EDF0: jal         0x80070050
    // 0x8022EDF4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_0;
    // 0x8022EDF4: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022EDF8: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022EDFC: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8022EE00: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022EE04: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022EE08: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x8022EE0C: lw          $v0, 0x2C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X2C);
    // 0x8022EE10: addiu       $a0, $zero, 0x177
    ctx->r4 = ADD32(0, 0X177);
    // 0x8022EE14: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8022EE18: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022EE1C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022EE20: j           L_8022EFB0
    // 0x8022EE24: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
        goto L_8022EFB0;
    // 0x8022EE24: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
L_8022EE28:
    // 0x8022EE28: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022EE2C: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x8022EE30: bne         $v0, $zero, L_8022EEF4
    if (ctx->r2 != 0) {
        // 0x8022EE34: addiu       $v0, $zero, 0x7FF
        ctx->r2 = ADD32(0, 0X7FF);
            goto L_8022EEF4;
    }
    // 0x8022EE34: addiu       $v0, $zero, 0x7FF
    ctx->r2 = ADD32(0, 0X7FF);
    // 0x8022EE38: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022EE3C: lhu         $v1, 0x3A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3A);
    // 0x8022EE40: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x8022EE44: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022EE48: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022EE4C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EE50: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    // 0x8022EE54: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022EE58: lhu         $v0, 0x4DEA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4DEA);
    // 0x8022EE5C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8022EE60: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8022EE64: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022EE68: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022EE6C: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8022EE70: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EE74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022EE78: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
    // 0x8022EE7C: lh          $v0, 0x3A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3A);
    // 0x8022EE80: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x8022EE84: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8022EE88: bne         $v0, $zero, L_8022EFB8
    if (ctx->r2 != 0) {
        // 0x8022EE8C: nop
    
            goto L_8022EFB8;
    }
    // 0x8022EE8C: nop

    // 0x8022EE90: jal         0x80070050
    // 0x8022EE94: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_1;
    // 0x8022EE94: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_1:
    // 0x8022EE98: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022EE9C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022EEA0: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8022EEA4: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022EEA8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022EEAC: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x8022EEB0: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022EEB4: addiu       $a0, $zero, 0x177
    ctx->r4 = ADD32(0, 0X177);
    // 0x8022EEB8: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8022EEBC: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022EEC0: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x8022EEC4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022EEC8: jal         0x8002A33C
    // 0x8022EECC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022EECC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    after_2:
    // 0x8022EED0: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x8022EED4: bne         $v0, $zero, L_8022EEE8
    if (ctx->r2 != 0) {
        // 0x8022EED8: nop
    
            goto L_8022EEE8;
    }
    // 0x8022EED8: nop

    // 0x8022EEDC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022EEE0: j           L_8022EFB8
    // 0x8022EEE4: sh          $zero, -0x3A82($at)
    MEM_H(-0X3A82, ctx->r1) = 0;
        goto L_8022EFB8;
    // 0x8022EEE4: sh          $zero, -0x3A82($at)
    MEM_H(-0X3A82, ctx->r1) = 0;
L_8022EEE8:
    // 0x8022EEE8: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022EEEC: j           L_8022EFB8
    // 0x8022EEF0: sh          $zero, -0x3A80($at)
    MEM_H(-0X3A80, ctx->r1) = 0;
        goto L_8022EFB8;
    // 0x8022EEF0: sh          $zero, -0x3A80($at)
    MEM_H(-0X3A80, ctx->r1) = 0;
L_8022EEF4:
    // 0x8022EEF4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8022EEF8: lh          $v1, 0x4A06($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X4A06);
    // 0x8022EEFC: bne         $v1, $v0, L_8022EF48
    if (ctx->r3 != ctx->r2) {
        // 0x8022EF00: nop
    
            goto L_8022EF48;
    }
    // 0x8022EF00: nop

    // 0x8022EF04: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x8022EF08: lhu         $v1, 0x3A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3A);
    // 0x8022EF0C: lbu         $a0, 0xE($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XE);
    // 0x8022EF10: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022EF14: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8022EF18: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022EF1C: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
    // 0x8022EF20: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022EF24: lhu         $v0, 0x4DEA($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4DEA);
    // 0x8022EF28: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x8022EF2C: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x8022EF30: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022EF34: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022EF38: sh          $v0, 0x4DEA($at)
    MEM_H(0X4DEA, ctx->r1) = ctx->r2;
    // 0x8022EF3C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EF40: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022EF44: sw          $v0, 0x4DDC($at)
    MEM_W(0X4DDC, ctx->r1) = ctx->r2;
L_8022EF48:
    // 0x8022EF48: lh          $v0, 0x3A($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3A);
    // 0x8022EF4C: lw          $v1, 0x2C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X2C);
    // 0x8022EF50: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022EF54: bltzl       $v0, L_8022EF5C
    if (SIGNED(ctx->r2) < 0) {
        // 0x8022EF58: negu        $v0, $v0
        ctx->r2 = SUB32(0, ctx->r2);
            goto L_8022EF5C;
    }
    goto skip_0;
    // 0x8022EF58: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    skip_0:
L_8022EF5C:
    // 0x8022EF5C: slti        $v0, $v0, 0x460
    ctx->r2 = SIGNED(ctx->r2) < 0X460 ? 1 : 0;
    // 0x8022EF60: bne         $v0, $zero, L_8022EFB8
    if (ctx->r2 != 0) {
        // 0x8022EF64: nop
    
            goto L_8022EFB8;
    }
    // 0x8022EF64: nop

    // 0x8022EF68: jal         0x80070050
    // 0x8022EF6C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    func_80070050_4B450(rdram, ctx);
        goto after_3;
    // 0x8022EF6C: addu        $a0, $a1, $zero
    ctx->r4 = ADD32(ctx->r5, 0);
    after_3:
    // 0x8022EF70: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022EF74: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022EF78: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x8022EF7C: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x8022EF80: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022EF84: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x8022EF88: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
    // 0x8022EF8C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022EF90: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022EF94: sh          $v0, -0x3A7E($at)
    MEM_H(-0X3A7E, ctx->r1) = ctx->r2;
    // 0x8022EF98: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022EF9C: addiu       $a0, $zero, 0x177
    ctx->r4 = ADD32(0, 0X177);
    // 0x8022EFA0: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    // 0x8022EFA4: andi        $v0, $v0, 0xF0
    ctx->r2 = ctx->r2 & 0XF0;
    // 0x8022EFA8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022EFAC: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_8022EFB0:
    // 0x8022EFB0: jal         0x8002A33C
    // 0x8022EFB4: nop

    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022EFB4: nop

    after_4:
L_8022EFB8:
    // 0x8022EFB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022EFBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022EFC0: jr          $ra
    // 0x8022EFC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022EFC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022AD30_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AD30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022AD34: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AD38: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022AD3C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022AD40: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022AD44: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022AD48: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022AD4C: beq         $v1, $v0, L_8022ADF4
    if (ctx->r3 == ctx->r2) {
        // 0x8022AD50: addiu       $s1, $s0, 0xD0
        ctx->r17 = ADD32(ctx->r16, 0XD0);
            goto L_8022ADF4;
    }
    // 0x8022AD50: addiu       $s1, $s0, 0xD0
    ctx->r17 = ADD32(ctx->r16, 0XD0);
    // 0x8022AD54: lw          $v0, 0xFC($s0)
    ctx->r2 = MEM_W(ctx->r16, 0XFC);
    // 0x8022AD58: lui         $v1, 0x3800
    ctx->r3 = S32(0X3800 << 16);
    // 0x8022AD5C: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022AD60: beq         $v0, $zero, L_8022ADF4
    if (ctx->r2 == 0) {
        // 0x8022AD64: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_8022ADF4;
    }
    // 0x8022AD64: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022AD68: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022AD6C: addiu       $a1, $s0, 0x104
    ctx->r5 = ADD32(ctx->r16, 0X104);
    // 0x8022AD70: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022AD74: jal         0x8004FEA0
    // 0x8022AD78: sh          $zero, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = 0;
    func_8004FEA0_2B2A0(rdram, ctx);
        goto after_0;
    // 0x8022AD78: sh          $zero, 0x10C($s0)
    MEM_H(0X10C, ctx->r16) = 0;
    after_0:
    // 0x8022AD7C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022AD80: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8022AD84: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8022AD88: beq         $v0, $zero, L_8022AD9C
    if (ctx->r2 == 0) {
        // 0x8022AD8C: addiu       $v0, $v1, 0x800
        ctx->r2 = ADD32(ctx->r3, 0X800);
            goto L_8022AD9C;
    }
    // 0x8022AD8C: addiu       $v0, $v1, 0x800
    ctx->r2 = ADD32(ctx->r3, 0X800);
    // 0x8022AD90: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x8022AD94: j           L_8022ADA0
    // 0x8022AD98: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_8022ADA0;
    // 0x8022AD98: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022AD9C:
    // 0x8022AD9C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_8022ADA0:
    // 0x8022ADA0: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x8022ADA4: addiu       $v0, $zero, -0x300
    ctx->r2 = ADD32(0, -0X300);
    // 0x8022ADA8: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022ADAC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022ADB0: sh          $v1, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r3;
    // 0x8022ADB4: sh          $v1, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r3;
    // 0x8022ADB8: sh          $v0, 0x8($s1)
    MEM_H(0X8, ctx->r17) = ctx->r2;
    // 0x8022ADBC: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x8022ADC0: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022ADC4: lh          $a3, 0x48($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X48);
    // 0x8022ADC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022ADCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022ADD0: jal         0x8004DA90
    // 0x8022ADD4: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022ADD4: sb          $v0, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022ADD8: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x8022ADDC: lhu         $a0, 0x4E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022ADE0: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022ADE4: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022ADE8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022ADEC: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022ADF0: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
L_8022ADF4:
    // 0x8022ADF4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022ADF8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022ADFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022AE00: jr          $ra
    // 0x8022AE04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022AE04: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022D1D0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D1D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D1D4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D1D8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D1DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D1E0: lw          $v1, 0x80($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X80);
    // 0x8022D1E4: lui         $v0, 0x22
    ctx->r2 = S32(0X22 << 16);
    // 0x8022D1E8: ori         $v0, $v0, 0x550F
    ctx->r2 = ctx->r2 | 0X550F;
    // 0x8022D1EC: sltu        $v0, $v0, $v1
    ctx->r2 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x8022D1F0: bne         $v0, $zero, L_8022D270
    if (ctx->r2 != 0) {
        // 0x8022D1F4: nop
    
            goto L_8022D270;
    }
    // 0x8022D1F4: nop

    // 0x8022D1F8: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022D1FC: lhu         $v0, 0x4320($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4320);
    // 0x8022D200: sltiu       $v0, $v0, 0x8
    ctx->r2 = ctx->r2 < 0X8 ? 1 : 0;
    // 0x8022D204: beq         $v0, $zero, L_8022D270
    if (ctx->r2 == 0) {
        // 0x8022D208: nop
    
            goto L_8022D270;
    }
    // 0x8022D208: nop

    // 0x8022D20C: lhu         $v0, 0xF4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XF4);
    // 0x8022D210: bne         $v0, $zero, L_8022D26C
    if (ctx->r2 != 0) {
        // 0x8022D214: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_8022D26C;
    }
    // 0x8022D214: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D218: jal         0x800A3450
    // 0x8022D21C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022D21C: nop

    after_0:
    // 0x8022D220: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022D224: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x8022D228: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D22C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D230: lhu         $v0, 0x4330($at)
    ctx->r2 = MEM_HU(ctx->r1, 0X4330);
    // 0x8022D234: addiu       $a0, $zero, 0x157
    ctx->r4 = ADD32(0, 0X157);
    // 0x8022D238: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022D23C: jal         0x8002A33C
    // 0x8022D240: sh          $v0, 0xF4($s0)
    MEM_H(0XF4, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022D240: sh          $v0, 0xF4($s0)
    MEM_H(0XF4, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022D244: jal         0x8022D280
    // 0x8022D248: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D280_ovl16(rdram, ctx);
        goto after_2;
    // 0x8022D248: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022D24C: jal         0x8022D304
    // 0x8022D250: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D304_ovl16(rdram, ctx);
        goto after_3;
    // 0x8022D250: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x8022D254: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x8022D258: lhu         $v0, 0x4320($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X4320);
    // 0x8022D25C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D260: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D264: j           L_8022D270
    // 0x8022D268: sh          $v0, 0x4320($at)
    MEM_H(0X4320, ctx->r1) = ctx->r2;
        goto L_8022D270;
    // 0x8022D268: sh          $v0, 0x4320($at)
    MEM_H(0X4320, ctx->r1) = ctx->r2;
L_8022D26C:
    // 0x8022D26C: sh          $v0, 0xF4($s0)
    MEM_H(0XF4, ctx->r16) = ctx->r2;
L_8022D270:
    // 0x8022D270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D274: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D278: jr          $ra
    // 0x8022D27C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D27C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802300B0_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802300B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802300B4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802300B8: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x802300BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802300C0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802300C4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802300C8: lw          $v0, 0x44D0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X44D0);
    // 0x802300CC: jalr        $v0
    // 0x802300D0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802300D0: nop

    after_0:
    // 0x802300D4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802300D8: jr          $ra
    // 0x802300DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802300DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D840_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D840: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022D844: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D848: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D84C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D850: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8022D854: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8022D858: addiu       $a1, $a1, -0x3BC8
    ctx->r5 = ADD32(ctx->r5, -0X3BC8);
    // 0x8022D85C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022D860: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x8022D864: sb          $a0, 0x1D($s0)
    MEM_B(0X1D, ctx->r16) = ctx->r4;
    // 0x8022D868: sb          $a0, 0x1C($s0)
    MEM_B(0X1C, ctx->r16) = ctx->r4;
    // 0x8022D86C: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
    // 0x8022D870: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8022D874: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x8022D878: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022D87C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D880: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8022D884: lw          $v1, 0x4360($at)
    ctx->r3 = MEM_W(ctx->r1, 0X4360);
    // 0x8022D888: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022D88C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022D890: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8022D894: sw          $zero, 0x18($s0)
    MEM_W(0X18, ctx->r16) = 0;
    // 0x8022D898: sw          $v0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r2;
    // 0x8022D89C: lb          $v1, 0x0($a1)
    ctx->r3 = MEM_B(ctx->r5, 0X0);
    // 0x8022D8A0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022D8A4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D8A8: sb          $a0, 0x4C60($at)
    MEM_B(0X4C60, ctx->r1) = ctx->r4;
    // 0x8022D8AC: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D8B0: sb          $v0, 0x4C61($at)
    MEM_B(0X4C61, ctx->r1) = ctx->r2;
    // 0x8022D8B4: sltiu       $v0, $v1, 0x1E
    ctx->r2 = ctx->r3 < 0X1E ? 1 : 0;
    // 0x8022D8B8: beq         $v0, $zero, L_8022D910
    if (ctx->r2 == 0) {
        // 0x8022D8BC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8022D910;
    }
    // 0x8022D8BC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022D8C0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022D8C4: addu        $at, $at, $v0
    gpr jr_addend_8022D8CC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D8C8: lw          $v0, 0x4BD8($at)
    ctx->r2 = ADD32(ctx->r1, 0X4BD8);
    // 0x8022D8CC: jr          $v0
    // 0x8022D8D0: nop

    switch (jr_addend_8022D8CC >> 2) {
        case 0: goto L_8022D8D4; break;
        case 1: goto L_8022D910; break;
        case 2: goto L_8022D910; break;
        case 3: goto L_8022D910; break;
        case 4: goto L_8022D910; break;
        case 5: goto L_8022D910; break;
        case 6: goto L_8022D910; break;
        case 7: goto L_8022D910; break;
        case 8: goto L_8022D910; break;
        case 9: goto L_8022D8DC; break;
        case 10: goto L_8022D910; break;
        case 11: goto L_8022D910; break;
        case 12: goto L_8022D910; break;
        case 13: goto L_8022D910; break;
        case 14: goto L_8022D8E4; break;
        case 15: goto L_8022D910; break;
        case 16: goto L_8022D910; break;
        case 17: goto L_8022D910; break;
        case 18: goto L_8022D910; break;
        case 19: goto L_8022D8EC; break;
        case 20: goto L_8022D8F4; break;
        case 21: goto L_8022D910; break;
        case 22: goto L_8022D910; break;
        case 23: goto L_8022D910; break;
        case 24: goto L_8022D910; break;
        case 25: goto L_8022D910; break;
        case 26: goto L_8022D8FC; break;
        case 27: goto L_8022D910; break;
        case 28: goto L_8022D910; break;
        case 29: goto L_8022D904; break;
        default: switch_error(__func__, 0x8022D8CC, 0x80234BD8);
    }
    // 0x8022D8D0: nop

L_8022D8D4:
    // 0x8022D8D4: j           L_8022D908
    // 0x8022D8D8: addiu       $a0, $zero, 0x630
    ctx->r4 = ADD32(0, 0X630);
        goto L_8022D908;
    // 0x8022D8D8: addiu       $a0, $zero, 0x630
    ctx->r4 = ADD32(0, 0X630);
L_8022D8DC:
    // 0x8022D8DC: j           L_8022D908
    // 0x8022D8E0: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
        goto L_8022D908;
    // 0x8022D8E0: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
L_8022D8E4:
    // 0x8022D8E4: j           L_8022D908
    // 0x8022D8E8: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
        goto L_8022D908;
    // 0x8022D8E8: addiu       $a0, $zero, 0x610
    ctx->r4 = ADD32(0, 0X610);
L_8022D8EC:
    // 0x8022D8EC: j           L_8022D908
    // 0x8022D8F0: addiu       $a0, $zero, 0x620
    ctx->r4 = ADD32(0, 0X620);
        goto L_8022D908;
    // 0x8022D8F0: addiu       $a0, $zero, 0x620
    ctx->r4 = ADD32(0, 0X620);
L_8022D8F4:
    // 0x8022D8F4: j           L_8022D908
    // 0x8022D8F8: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
        goto L_8022D908;
    // 0x8022D8F8: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
L_8022D8FC:
    // 0x8022D8FC: j           L_8022D908
    // 0x8022D900: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
        goto L_8022D908;
    // 0x8022D900: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
L_8022D904:
    // 0x8022D904: addiu       $a0, $zero, 0x604
    ctx->r4 = ADD32(0, 0X604);
L_8022D908:
    // 0x8022D908: jal         0x80060590
    // 0x8022D90C: nop

    func_80060590_3B990(rdram, ctx);
        goto after_0;
    // 0x8022D90C: nop

    after_0:
L_8022D910:
    // 0x8022D910: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D914: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8022D918: jal         0x8022D930
    // 0x8022D91C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022D930_ovl16(rdram, ctx);
        goto after_1;
    // 0x8022D91C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8022D920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022D924: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D928: jr          $ra
    // 0x8022D92C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022D92C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802310CC_ovl16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802310CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802310D0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802310D4: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802310D8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802310DC: addiu       $s0, $s1, 0x18
    ctx->r16 = ADD32(ctx->r17, 0X18);
    // 0x802310E0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802310E4: jal         0x8002C678
    // 0x802310E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_0;
    // 0x802310E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x802310EC: lb          $a0, 0xC($s1)
    ctx->r4 = MEM_B(ctx->r17, 0XC);
    // 0x802310F0: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x802310F4: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x802310F8: sll         $a0, $a0, 10
    ctx->r4 = S32(ctx->r4 << 10);
    // 0x802310FC: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80231100: jal         0x800319B4
    // 0x80231104: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x80231104: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    after_1:
    // 0x80231108: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8023110C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80231110: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x80231114: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80231118: bne         $v0, $zero, L_8023116C
    if (ctx->r2 != 0) {
        // 0x8023111C: addiu       $a0, $zero, 0x185
        ctx->r4 = ADD32(0, 0X185);
            goto L_8023116C;
    }
    // 0x8023111C: addiu       $a0, $zero, 0x185
    ctx->r4 = ADD32(0, 0X185);
    // 0x80231120: lbu         $v0, 0x8($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X8);
    // 0x80231124: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x80231128: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8023112C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231130: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231134: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80231138: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x8023113C: jal         0x8002A2F8
    // 0x80231140: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    func_8002A2F8_56F8(rdram, ctx);
        goto after_2;
    // 0x80231140: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    after_2:
    // 0x80231144: jal         0x80060590
    // 0x80231148: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    func_80060590_3B990(rdram, ctx);
        goto after_3;
    // 0x80231148: addiu       $a0, $zero, 0x7B2
    ctx->r4 = ADD32(0, 0X7B2);
    after_3:
    // 0x8023114C: lw          $v1, 0x44($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X44);
    // 0x80231150: lw          $a0, 0x30($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X30);
    // 0x80231154: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80231158: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023115C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80231160: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80231164: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231168: sw          $a0, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r4;
L_8023116C:
    // 0x8023116C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80231170: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80231174: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231178: jr          $ra
    // 0x8023117C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023117C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
