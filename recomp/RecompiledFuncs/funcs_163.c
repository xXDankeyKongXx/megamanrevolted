#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80227638_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227638: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022763C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227640: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227644: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227648: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022764C: bne         $v0, $zero, L_80227668
    if (ctx->r2 != 0) {
        // 0x80227650: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80227668;
    }
    // 0x80227650: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80227654: jal         0x80050294
    // 0x80227658: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227658: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022765C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227660: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227664: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227668:
    // 0x80227668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022766C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227670: jr          $ra
    // 0x80227674: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227674: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802262F4_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802262F4: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802262F8: bne         $v0, $zero, L_80226324
    if (ctx->r2 != 0) {
        // 0x802262FC: addiu       $v0, $zero, 0x6
        ctx->r2 = ADD32(0, 0X6);
            goto L_80226324;
    }
    // 0x802262FC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80226300: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226304: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226308: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022630C: sb          $v0, 0xD($v1)
    MEM_B(0XD, ctx->r3) = ctx->r2;
    // 0x80226310: lui         $v0, 0xFF38
    ctx->r2 = S32(0XFF38 << 16);
    // 0x80226314: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80226318: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x8022631C: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x80226320: sh          $zero, 0x56($v1)
    MEM_H(0X56, ctx->r3) = 0;
L_80226324:
    // 0x80226324: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226328: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x8022632C: bne         $v1, $v0, L_80226340
    if (ctx->r3 != ctx->r2) {
        // 0x80226330: addiu       $v0, $zero, 0x66
        ctx->r2 = ADD32(0, 0X66);
            goto L_80226340;
    }
    // 0x80226330: addiu       $v0, $zero, 0x66
    ctx->r2 = ADD32(0, 0X66);
    // 0x80226334: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226338: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x8022633C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
L_80226340:
    // 0x80226340: bne         $v1, $v0, L_8022635C
    if (ctx->r3 != ctx->r2) {
        // 0x80226344: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022635C;
    }
    // 0x80226344: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80226348: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x8022634C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226350: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80226354: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80226358: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
L_8022635C:
    // 0x8022635C: jr          $ra
    // 0x80226360: nop

    TRACE_RETURN()
    return;
    // 0x80226360: nop

;}
RECOMP_FUNC void func_80225560_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225560: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225564: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225568: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022556C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225570: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80225574: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225578: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022557C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225580: lw          $v0, 0x7E50($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7E50);
    // 0x80225584: jalr        $v0
    // 0x80225588: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225588: nop

    after_0:
    // 0x8022558C: lh          $v1, 0x30($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X30);
    // 0x80225590: lh          $v0, 0x2C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X2C);
    // 0x80225594: lh          $a0, 0x34($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X34);
    // 0x80225598: sh          $v1, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r3;
    // 0x8022559C: lhu         $v1, 0x3C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3C);
    // 0x802255A0: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x802255A4: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x802255A8: sh          $a0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r4;
    // 0x802255AC: lb          $a0, 0xF($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XF);
    // 0x802255B0: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802255B4: sra         $v1, $v1, 24
    ctx->r3 = S32(SIGNED(ctx->r3) >> 24);
    // 0x802255B8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802255BC: sh          $v1, 0x26($s0)
    MEM_H(0X26, ctx->r16) = ctx->r3;
    // 0x802255C0: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x802255C4: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x802255C8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802255CC: lbu         $v1, 0x7E9C($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0X7E9C);
    // 0x802255D0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802255D4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802255D8: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x802255DC: beql        $v0, $zero, L_802255E4
    if (ctx->r2 == 0) {
        // 0x802255E0: sb          $zero, 0xE($s0)
        MEM_B(0XE, ctx->r16) = 0;
            goto L_802255E4;
    }
    goto skip_0;
    // 0x802255E0: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    skip_0:
L_802255E4:
    // 0x802255E4: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x802255E8: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x802255EC: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802255F0: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x802255F4: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x802255F8: lw          $a0, 0x7E8C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7E8C);
    // 0x802255FC: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80225600: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225604: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80225608: lb          $v0, 0xE($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XE);
    // 0x8022560C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80225610: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80225614: sb          $v1, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r3;
    // 0x80225618: lbu         $v0, 0x1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X1);
    // 0x8022561C: sb          $v0, 0x23($s0)
    MEM_B(0X23, ctx->r16) = ctx->r2;
    // 0x80225620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225624: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225628: jr          $ra
    // 0x8022562C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022562C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802273C8_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802273C8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802273CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802273D0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802273D4: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x802273D8: lw          $a0, -0x7570($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X7570);
    // 0x802273DC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802273E0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802273E4: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x802273E8: lui         $s1, 0x801C
    ctx->r17 = S32(0X801C << 16);
    // 0x802273EC: addiu       $s1, $s1, -0x3A50
    ctx->r17 = ADD32(ctx->r17, -0X3A50);
    // 0x802273F0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802273F4: beq         $v1, $v0, L_80227488
    if (ctx->r3 == ctx->r2) {
        // 0x802273F8: nop
    
            goto L_80227488;
    }
    // 0x802273F8: nop

    // 0x802273FC: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x80227400: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80227404: lhu         $v0, -0x3A48($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X3A48);
    // 0x80227408: bne         $v1, $v0, L_80227488
    if (ctx->r3 != ctx->r2) {
        // 0x8022740C: nop
    
            goto L_80227488;
    }
    // 0x8022740C: nop

    // 0x80227410: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x80227414: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80227418: lw          $v0, -0x3A34($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A34);
    // 0x8022741C: bne         $v1, $v0, L_80227488
    if (ctx->r3 != ctx->r2) {
        // 0x80227420: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80227488;
    }
    // 0x80227420: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80227424: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x80227428: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022742C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227430: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227434: lw          $v0, -0x77E4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X77E4);
    // 0x80227438: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022743C: sw          $v0, -0x7580($at)
    MEM_W(-0X7580, ctx->r1) = ctx->r2;
    // 0x80227440: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227444: lw          $v0, -0x7580($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7580);
    // 0x80227448: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x8022744C: sh          $zero, -0x757C($at)
    MEM_H(-0X757C, ctx->r1) = 0;
    // 0x80227450: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x80227454: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80227458: jal         0x8003B85C
    // 0x8022745C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x8022745C: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80227460: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80227464: lui         $a1, 0x11
    ctx->r5 = S32(0X11 << 16);
    // 0x80227468: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    // 0x8022746C: jal         0x8003B840
    // 0x80227470: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80227470: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
    // 0x80227474: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227478: lw          $v0, -0x7570($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7570);
    // 0x8022747C: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x80227480: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227484: sw          $v0, -0x7570($at)
    MEM_W(-0X7570, ctx->r1) = ctx->r2;
L_80227488:
    // 0x80227488: lui         $a0, 0x8023
    ctx->r4 = S32(0X8023 << 16);
    // 0x8022748C: lw          $a0, -0x756C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X756C);
    // 0x80227490: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80227494: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80227498: beq         $v1, $v0, L_80227524
    if (ctx->r3 == ctx->r2) {
        // 0x8022749C: nop
    
            goto L_80227524;
    }
    // 0x8022749C: nop

    // 0x802274A0: lhu         $v1, 0x0($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X0);
    // 0x802274A4: lhu         $v0, 0x8($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X8);
    // 0x802274A8: bne         $v1, $v0, L_80227524
    if (ctx->r3 != ctx->r2) {
        // 0x802274AC: nop
    
            goto L_80227524;
    }
    // 0x802274AC: nop

    // 0x802274B0: lhu         $v1, 0x2($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X2);
    // 0x802274B4: lw          $v0, 0x1C($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X1C);
    // 0x802274B8: bne         $v1, $v0, L_80227524
    if (ctx->r3 != ctx->r2) {
        // 0x802274BC: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80227524;
    }
    // 0x802274BC: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x802274C0: lhu         $v0, 0x4($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X4);
    // 0x802274C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802274C8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802274CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802274D0: lw          $v0, -0x77B0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X77B0);
    // 0x802274D4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802274D8: sw          $v0, -0x7578($at)
    MEM_W(-0X7578, ctx->r1) = ctx->r2;
    // 0x802274DC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x802274E0: lw          $v0, -0x7578($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7578);
    // 0x802274E4: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802274E8: sh          $zero, -0x7574($at)
    MEM_H(-0X7574, ctx->r1) = 0;
    // 0x802274EC: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x802274F0: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x802274F4: jal         0x8003B85C
    // 0x802274F8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x802274F8: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x802274FC: lw          $a0, 0x88($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X88);
    // 0x80227500: lui         $a1, 0x13
    ctx->r5 = S32(0X13 << 16);
    // 0x80227504: ori         $a1, $a1, 0x12
    ctx->r5 = ctx->r5 | 0X12;
    // 0x80227508: jal         0x8003B840
    // 0x8022750C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x8022750C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
    // 0x80227510: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227514: lw          $v0, -0x756C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X756C);
    // 0x80227518: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x8022751C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227520: sw          $v0, -0x756C($at)
    MEM_W(-0X756C, ctx->r1) = ctx->r2;
L_80227524:
    // 0x80227524: jal         0x80227270
    // 0x80227528: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80227270_ovl26(rdram, ctx);
        goto after_4;
    // 0x80227528: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8022752C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227530: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227534: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227538: jr          $ra
    // 0x8022753C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022753C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802276F8_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802276F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802276FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227700: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227704: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227708: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022770C: bne         $v0, $zero, L_80227728
    if (ctx->r2 != 0) {
        // 0x80227710: addiu       $a1, $zero, 0x5
        ctx->r5 = ADD32(0, 0X5);
            goto L_80227728;
    }
    // 0x80227710: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80227714: jal         0x80050294
    // 0x80227718: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227718: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022771C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227720: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227724: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227728:
    // 0x80227728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022772C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227730: jr          $ra
    // 0x80227734: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227734: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022638C_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022638C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226390: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226394: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226398: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022639C: bne         $v1, $v0, L_802263AC
    if (ctx->r3 != ctx->r2) {
        // 0x802263A0: nop
    
            goto L_802263AC;
    }
    // 0x802263A0: nop

    // 0x802263A4: jal         0x80227B14
    // 0x802263A8: nop

    func_80227B14_ovl26(rdram, ctx);
        goto after_0;
    // 0x802263A8: nop

    after_0:
L_802263AC:
    // 0x802263AC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802263B0: jr          $ra
    // 0x802263B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802263B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226CE8_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226CE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226CEC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226CF0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226CF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226CF8: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226CFC: bne         $v0, $zero, L_80226D6C
    if (ctx->r2 != 0) {
        // 0x80226D00: nop
    
            goto L_80226D6C;
    }
    // 0x80226D00: nop

    // 0x80226D04: jal         0x8004D5D4
    // 0x80226D08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80226D08: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80226D0C: addiu       $a1, $zero, 0x4210
    ctx->r5 = ADD32(0, 0X4210);
    // 0x80226D10: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    // 0x80226D14: addiu       $v1, $s0, 0xB8
    ctx->r3 = ADD32(ctx->r16, 0XB8);
    // 0x80226D18: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80226D1C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80226D20: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80226D24: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80226D28: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226D2C: addiu       $v0, $v0, -0x7A38
    ctx->r2 = ADD32(ctx->r2, -0X7A38);
    // 0x80226D30: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226D34: sw          $v0, -0x7590($at)
    MEM_W(-0X7590, ctx->r1) = ctx->r2;
    // 0x80226D38: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80226D3C: addiu       $v0, $v0, -0x79E8
    ctx->r2 = ADD32(ctx->r2, -0X79E8);
    // 0x80226D40: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
    // 0x80226D44: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226D48: sw          $v0, -0x758C($at)
    MEM_W(-0X758C, ctx->r1) = ctx->r2;
L_80226D4C:
    // 0x80226D4C: sh          $a1, 0x186($v1)
    MEM_H(0X186, ctx->r3) = ctx->r5;
    // 0x80226D50: addiu       $a0, $a0, -0x1
    ctx->r4 = ADD32(ctx->r4, -0X1);
    // 0x80226D54: bgez        $a0, L_80226D4C
    if (SIGNED(ctx->r4) >= 0) {
        // 0x80226D58: addiu       $v1, $v1, -0x8
        ctx->r3 = ADD32(ctx->r3, -0X8);
            goto L_80226D4C;
    }
    // 0x80226D58: addiu       $v1, $v1, -0x8
    ctx->r3 = ADD32(ctx->r3, -0X8);
    // 0x80226D5C: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80226D60: sh          $zero, 0xE($s0)
    MEM_H(0XE, ctx->r16) = 0;
    // 0x80226D64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226D68: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80226D6C:
    // 0x80226D6C: jal         0x80226B50
    // 0x80226D70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80226B50_ovl26(rdram, ctx);
        goto after_1;
    // 0x80226D70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80226D74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226D78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226D7C: jr          $ra
    // 0x80226D80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226D80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226750_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226750: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226754: bne         $v0, $zero, L_80226764
    if (ctx->r2 != 0) {
        // 0x80226758: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226764;
    }
    // 0x80226758: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022675C: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80226760: sb          $v0, 0xA($v1)
    MEM_B(0XA, ctx->r3) = ctx->r2;
L_80226764:
    // 0x80226764: jr          $ra
    // 0x80226768: nop

    TRACE_RETURN()
    return;
    // 0x80226768: nop

;}
RECOMP_FUNC void func_80226364_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226364: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226368: bne         $v0, $zero, L_80226384
    if (ctx->r2 != 0) {
        // 0x8022636C: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_80226384;
    }
    // 0x8022636C: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80226370: lw          $v0, 0x2C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X2C);
    // 0x80226374: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80226378: addiu       $v1, $zero, 0x800
    ctx->r3 = ADD32(0, 0X800);
    // 0x8022637C: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80226380: sh          $v1, 0x56($v0)
    MEM_H(0X56, ctx->r2) = ctx->r3;
L_80226384:
    // 0x80226384: jr          $ra
    // 0x80226388: nop

    TRACE_RETURN()
    return;
    // 0x80226388: nop

;}
RECOMP_FUNC void func_802253D0_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253D0: jr          $ra
    // 0x802253D4: nop

    TRACE_RETURN()
    return;
    // 0x802253D4: nop

    // 0x802253D8: nop

    // 0x802253DC: nop

;}
RECOMP_FUNC void func_80227738_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227738: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022773C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227740: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227744: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227748: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022774C: bne         $v0, $zero, L_80227768
    if (ctx->r2 != 0) {
        // 0x80227750: addiu       $a1, $zero, 0x6
        ctx->r5 = ADD32(0, 0X6);
            goto L_80227768;
    }
    // 0x80227750: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80227754: jal         0x80050294
    // 0x80227758: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227758: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022775C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227760: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227764: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227768:
    // 0x80227768: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022776C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227770: jr          $ra
    // 0x80227774: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227774: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022533C_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022533C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80225340: lb          $v1, -0x3BC6($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC6);
    // 0x80225344: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80225348: lb          $v0, -0x3BC7($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X3BC7);
    // 0x8022534C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225350: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225354: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80225358: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x8022535C: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80225360: lw          $v1, 0x7E08($at)
    ctx->r3 = MEM_W(ctx->r1, 0X7E08);
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
RECOMP_FUNC void func_80226F38_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226F38: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226F3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226F40: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226F44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226F48: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226F4C: bne         $v0, $zero, L_80226F78
    if (ctx->r2 != 0) {
        // 0x80226F50: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_80226F78;
    }
    // 0x80226F50: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80226F54: jal         0x8004DD04
    // 0x80226F58: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_0;
    // 0x80226F58: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_0:
    // 0x80226F5C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226F60: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x80226F64: jal         0x80050294
    // 0x80226F68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80226F68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x80226F6C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226F70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226F74: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226F78:
    // 0x80226F78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226F7C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226F80: jr          $ra
    // 0x80226F84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226F84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802275F8_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802275F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802275FC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227600: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227604: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227608: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022760C: bne         $v0, $zero, L_80227628
    if (ctx->r2 != 0) {
        // 0x80227610: addiu       $a1, $zero, 0x1
        ctx->r5 = ADD32(0, 0X1);
            goto L_80227628;
    }
    // 0x80227610: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227614: jal         0x80050294
    // 0x80227618: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227618: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022761C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227620: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227624: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227628:
    // 0x80227628: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022762C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227630: jr          $ra
    // 0x80227634: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227634: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226D84_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226D84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226D88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226D8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226D90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226D94: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226D98: bne         $v0, $zero, L_80226DB4
    if (ctx->r2 != 0) {
        // 0x80226D9C: addiu       $a1, $zero, 0x10
        ctx->r5 = ADD32(0, 0X10);
            goto L_80226DB4;
    }
    // 0x80226D9C: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80226DA0: jal         0x80050294
    // 0x80226DA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80226DA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80226DA8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226DAC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226DB0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226DB4:
    // 0x80226DB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226DB8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226DBC: jr          $ra
    // 0x80226DC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226DC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802261C4_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802261C4: lw          $v0, 0xC($a0)
    ctx->r2 = MEM_W(ctx->r4, 0XC);
    // 0x802261C8: bne         $v0, $zero, L_80226250
    if (ctx->r2 != 0) {
        // 0x802261CC: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80226250;
    }
    // 0x802261CC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802261D0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802261D4: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802261D8: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x802261DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802261E0: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x802261E4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802261E8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802261EC: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x802261F0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802261F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802261F8: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x802261FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226200: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80226204: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226208: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x8022620C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226210: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80226214: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226218: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8022621C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226220: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226224: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226228: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8022622C: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80226230: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80226234: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x80226238: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022623C: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80226240: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x80226244: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80226248: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022624C: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
L_80226250:
    // 0x80226250: jr          $ra
    // 0x80226254: nop

    TRACE_RETURN()
    return;
    // 0x80226254: nop

;}
RECOMP_FUNC void func_802253C8_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253C8: jr          $ra
    // 0x802253CC: nop

    TRACE_RETURN()
    return;
    // 0x802253CC: nop

;}
RECOMP_FUNC void func_80226860_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226860: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226864: bne         $v0, $zero, L_80226878
    if (ctx->r2 != 0) {
        // 0x80226868: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80226878;
    }
    // 0x80226868: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x8022686C: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80226870: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226874: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_80226878:
    // 0x80226878: jr          $ra
    // 0x8022687C: nop

    TRACE_RETURN()
    return;
    // 0x8022687C: nop

;}
RECOMP_FUNC void func_80225714_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225714: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225718: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022571C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80225720: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225724: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80225728: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x8022572C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80225730: ori         $v0, $v0, 0x22
    ctx->r2 = ctx->r2 | 0X22;
    // 0x80225734: jal         0x800A3450
    // 0x80225738: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80225738: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022573C: lui         $a0, 0x3CC0
    ctx->r4 = S32(0X3CC0 << 16);
    // 0x80225740: ori         $a0, $a0, 0x28
    ctx->r4 = ctx->r4 | 0X28;
    // 0x80225744: lui         $a1, 0x2C80
    ctx->r5 = S32(0X2C80 << 16);
    // 0x80225748: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x8022574C: ori         $a1, $a1, 0x8080
    ctx->r5 = ctx->r5 | 0X8080;
    // 0x80225750: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80225754: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
    // 0x80225758: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022575C: sw          $a0, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r4;
    // 0x80225760: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80225764: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
    // 0x80225768: sh          $zero, 0x26($s0)
    MEM_H(0X26, ctx->r16) = 0;
    // 0x8022576C: sw          $a1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r5;
    // 0x80225770: sh          $zero, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = 0;
    // 0x80225774: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80225778: jal         0x80225560
    // 0x8022577C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    func_80225560_ovl26(rdram, ctx);
        goto after_1;
    // 0x8022577C: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    after_1:
    // 0x80225780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225784: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225788: jr          $ra
    // 0x8022578C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022578C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226FC8_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226FC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226FCC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226FD0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226FD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226FD8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226FDC: bne         $v0, $zero, L_80226FF8
    if (ctx->r2 != 0) {
        // 0x80226FE0: addiu       $a1, $zero, 0x18
        ctx->r5 = ADD32(0, 0X18);
            goto L_80226FF8;
    }
    // 0x80226FE0: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    // 0x80226FE4: jal         0x80050294
    // 0x80226FE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80226FE8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80226FEC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226FF0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226FF4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226FF8:
    // 0x80226FF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226FFC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227000: jr          $ra
    // 0x80227004: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227004: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802278B0_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802278B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802278B4: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802278B8: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x802278BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802278C0: andi        $a1, $v1, 0xFF
    ctx->r5 = ctx->r3 & 0XFF;
    // 0x802278C4: beq         $a1, $v0, L_80227924
    if (ctx->r5 == ctx->r2) {
        // 0x802278C8: slti        $v0, $a1, 0x2
        ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
            goto L_80227924;
    }
    // 0x802278C8: slti        $v0, $a1, 0x2
    ctx->r2 = SIGNED(ctx->r5) < 0X2 ? 1 : 0;
    // 0x802278CC: beql        $v0, $zero, L_802278E4
    if (ctx->r2 == 0) {
        // 0x802278D0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802278E4;
    }
    goto skip_0;
    // 0x802278D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802278D4: beq         $a1, $zero, L_802278F4
    if (ctx->r5 == 0) {
        // 0x802278D8: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_802278F4;
    }
    // 0x802278D8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802278DC: j           L_8022793C
    // 0x802278E0: nop

        goto L_8022793C;
    // 0x802278E0: nop

L_802278E4:
    // 0x802278E4: beq         $a1, $v0, L_80227930
    if (ctx->r5 == ctx->r2) {
        // 0x802278E8: lui         $v1, 0xFFFE
        ctx->r3 = S32(0XFFFE << 16);
            goto L_80227930;
    }
    // 0x802278E8: lui         $v1, 0xFFFE
    ctx->r3 = S32(0XFFFE << 16);
    // 0x802278EC: j           L_8022793C
    // 0x802278F0: nop

        goto L_8022793C;
    // 0x802278F0: nop

L_802278F4:
    // 0x802278F4: lh          $v0, 0x1C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1C);
    // 0x802278F8: addiu       $a1, $zero, 0x1F4
    ctx->r5 = ADD32(0, 0X1F4);
    // 0x802278FC: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x80227900: sh          $zero, 0x12($sp)
    MEM_H(0X12, ctx->r29) = 0;
    // 0x80227904: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80227908: lh          $v0, 0x24($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X24);
    // 0x8022790C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227910: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80227914: jal         0x80225684
    // 0x80227918: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_80225684_ovl26(rdram, ctx);
        goto after_0;
    // 0x80227918: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x8022791C: j           L_8022793C
    // 0x80227920: nop

        goto L_8022793C;
    // 0x80227920: nop

L_80227924:
    // 0x80227924: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
    // 0x80227928: j           L_80227934
    // 0x8022792C: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
        goto L_80227934;
    // 0x8022792C: lui         $v1, 0xFFFF
    ctx->r3 = S32(0XFFFF << 16);
L_80227930:
    // 0x80227930: lw          $v0, 0x20($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X20);
L_80227934:
    // 0x80227934: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227938: sw          $v0, 0x20($a0)
    MEM_W(0X20, ctx->r4) = ctx->r2;
L_8022793C:
    // 0x8022793C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227940: jr          $ra
    // 0x80227944: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227944: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226E04_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226E08: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226E0C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226E10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226E14: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226E18: bne         $v0, $zero, L_80226E34
    if (ctx->r2 != 0) {
        // 0x80226E1C: addiu       $a1, $zero, 0x12
        ctx->r5 = ADD32(0, 0X12);
            goto L_80226E34;
    }
    // 0x80226E1C: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x80226E20: jal         0x80050294
    // 0x80226E24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80226E24: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80226E28: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226E2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226E30: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226E34:
    // 0x80226E34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226E38: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226E3C: jr          $ra
    // 0x80226E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226604_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226604: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226608: bne         $v0, $zero, L_802266A8
    if (ctx->r2 != 0) {
        // 0x8022660C: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802266A8;
    }
    // 0x8022660C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226610: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226614: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226618: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x8022661C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226620: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80226624: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226628: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022662C: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80226630: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226634: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226638: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x8022663C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226640: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80226644: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226648: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x8022664C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226650: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80226654: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226658: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x8022665C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226660: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226664: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226668: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x8022666C: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80226670: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80226674: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x80226678: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x8022667C: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80226680: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80226684: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80226688: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8022668C: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80226690: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80226694: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x80226698: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x8022669C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x802266A0: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x802266A4: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
L_802266A8:
    // 0x802266A8: jr          $ra
    // 0x802266AC: nop

    TRACE_RETURN()
    return;
    // 0x802266AC: nop

;}
RECOMP_FUNC void func_80226DC4_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226DC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226DC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226DCC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226DD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226DD4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226DD8: bne         $v0, $zero, L_80226DF4
    if (ctx->r2 != 0) {
        // 0x80226DDC: addiu       $a1, $zero, 0x11
        ctx->r5 = ADD32(0, 0X11);
            goto L_80226DF4;
    }
    // 0x80226DDC: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x80226DE0: jal         0x80050294
    // 0x80226DE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80226DE4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80226DE8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226DEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226DF0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226DF4:
    // 0x80226DF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226DF8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226DFC: jr          $ra
    // 0x80226E00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226E00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802263D8_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802263D8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802263DC: bne         $v0, $zero, L_802263F0
    if (ctx->r2 != 0) {
        // 0x802263E0: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_802263F0;
    }
    // 0x802263E0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802263E4: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x802263E8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802263EC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_802263F0:
    // 0x802263F0: jr          $ra
    // 0x802263F4: nop

    TRACE_RETURN()
    return;
    // 0x802263F4: nop

;}
RECOMP_FUNC void func_80227678_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022767C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227680: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227684: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227688: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022768C: bne         $v0, $zero, L_802276A8
    if (ctx->r2 != 0) {
        // 0x80227690: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_802276A8;
    }
    // 0x80227690: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80227694: jal         0x80050294
    // 0x80227698: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227698: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022769C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802276A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802276A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802276A8:
    // 0x802276A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802276AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802276B0: jr          $ra
    // 0x802276B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802276B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226288_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226288: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x8022628C: bne         $v0, $zero, L_802262CC
    if (ctx->r2 != 0) {
        // 0x80226290: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802262CC;
    }
    // 0x80226290: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226294: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x80226298: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x8022629C: lui         $v0, 0xFECC
    ctx->r2 = S32(0XFECC << 16);
    // 0x802262A0: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x802262A4: lui         $v0, 0xFE84
    ctx->r2 = S32(0XFE84 << 16);
    // 0x802262A8: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802262AC: sw          $v0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r2;
    // 0x802262B0: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x802262B4: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802262B8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802262BC: lui         $v0, 0xFE5C
    ctx->r2 = S32(0XFE5C << 16);
    // 0x802262C0: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802262C4: sw          $v0, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->r2;
    // 0x802262C8: sh          $zero, 0x56($v1)
    MEM_H(0X56, ctx->r3) = 0;
L_802262CC:
    // 0x802262CC: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802262D0: addiu       $v0, $zero, 0x11
    ctx->r2 = ADD32(0, 0X11);
    // 0x802262D4: bne         $v1, $v0, L_802262EC
    if (ctx->r3 != ctx->r2) {
        // 0x802262D8: nop
    
            goto L_802262EC;
    }
    // 0x802262D8: nop

    // 0x802262DC: lw          $v1, 0x2C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X2C);
    // 0x802262E0: sb          $zero, 0x9($v1)
    MEM_B(0X9, ctx->r3) = 0;
    // 0x802262E4: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802262E8: sh          $zero, 0x56($v1)
    MEM_H(0X56, ctx->r3) = 0;
L_802262EC:
    // 0x802262EC: jr          $ra
    // 0x802262F0: nop

    TRACE_RETURN()
    return;
    // 0x802262F0: nop

;}
RECOMP_FUNC void func_80227778_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227778: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022777C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227780: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227784: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227788: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022778C: bne         $v0, $zero, L_802277A8
    if (ctx->r2 != 0) {
        // 0x80227790: addiu       $a1, $zero, 0x7
        ctx->r5 = ADD32(0, 0X7);
            goto L_802277A8;
    }
    // 0x80227790: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80227794: jal         0x80050294
    // 0x80227798: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80227798: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x8022779C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802277A0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802277A4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802277A8:
    // 0x802277A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802277AC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802277B0: jr          $ra
    // 0x802277B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802277B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80225CC8_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225CC8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80225CCC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80225CD0: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80225CD4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80225CD8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80225CDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80225CE0: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x80225CE4: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80225CE8: beq         $v0, $zero, L_80226014
    if (ctx->r2 == 0) {
        // 0x80225CEC: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80226014;
    }
    // 0x80225CEC: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80225CF0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225CF4: addu        $at, $at, $v0
    gpr jr_addend_80225CFC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225CF8: lw          $v0, -0x75C0($at)
    ctx->r2 = ADD32(ctx->r1, -0X75C0);
    // 0x80225CFC: jr          $v0
    // 0x80225D00: nop

    switch (jr_addend_80225CFC >> 2) {
        case 0: goto L_80225D04; break;
        case 1: goto L_80225D44; break;
        case 2: goto L_80225D68; break;
        case 3: goto L_80225D94; break;
        case 4: goto L_80225E00; break;
        case 5: goto L_80225E48; break;
        default: switch_error(__func__, 0x80225CFC, 0x80228A40);
    }
    // 0x80225D00: nop

L_80225D04:
    // 0x80225D04: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80225D08: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80225D0C: jal         0x8006FF84
    // 0x80225D10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80225D10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80225D14: beq         $v0, $zero, L_80226014
    if (ctx->r2 == 0) {
        // 0x80225D18: lui         $a0, 0x100
        ctx->r4 = S32(0X100 << 16);
            goto L_80226014;
    }
    // 0x80225D18: lui         $a0, 0x100
    ctx->r4 = S32(0X100 << 16);
    // 0x80225D1C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80225D20: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x80225D24: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80225D28: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80225D2C: ori         $a0, $a0, 0x5100
    ctx->r4 = ctx->r4 | 0X5100;
    // 0x80225D30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225D34: jal         0x80036B1C
    // 0x80225D38: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_1;
    // 0x80225D38: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
    after_1:
    // 0x80225D3C: j           L_80226014
    // 0x80225D40: nop

        goto L_80226014;
    // 0x80225D40: nop

L_80225D44:
    // 0x80225D44: jal         0x80036B7C
    // 0x80225D48: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_2;
    // 0x80225D48: nop

    after_2:
    // 0x80225D4C: beq         $v0, $zero, L_80226014
    if (ctx->r2 == 0) {
        // 0x80225D50: addiu       $v1, $zero, 0x1E
        ctx->r3 = ADD32(0, 0X1E);
            goto L_80226014;
    }
    // 0x80225D50: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x80225D54: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80225D58: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
    // 0x80225D5C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225D60: j           L_80226014
    // 0x80225D64: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_80226014;
    // 0x80225D64: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80225D68:
    // 0x80225D68: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x80225D6C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80225D70: bne         $v0, $zero, L_80226014
    if (ctx->r2 != 0) {
        // 0x80225D74: sw          $v0, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->r2;
            goto L_80226014;
    }
    // 0x80225D74: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x80225D78: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80225D7C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80225D80: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225D84: jal         0x80036E48
    // 0x80225D88: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
    func_80036E48_12248(rdram, ctx);
        goto after_3;
    // 0x80225D88: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
    after_3:
    // 0x80225D8C: j           L_80226014
    // 0x80225D90: nop

        goto L_80226014;
    // 0x80225D90: nop

L_80225D94:
    // 0x80225D94: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225D98: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225D9C: jal         0x8005F6B4
    // 0x80225DA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_4;
    // 0x80225DA0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x80225DA4: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80225DA8: addiu       $a0, $a0, 0x7EC0
    ctx->r4 = ADD32(ctx->r4, 0X7EC0);
    // 0x80225DAC: lui         $v0, 0x8022
    ctx->r2 = S32(0X8022 << 16);
    // 0x80225DB0: addiu       $v0, $v0, 0x7F10
    ctx->r2 = ADD32(ctx->r2, 0X7F10);
    // 0x80225DB4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225DB8: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80225DBC: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80225DC0: addiu       $v0, $v0, -0x7D2C
    ctx->r2 = ADD32(ctx->r2, -0X7D2C);
    // 0x80225DC4: jal         0x8005FA7C
    // 0x80225DC8: sw          $v0, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_5;
    // 0x80225DC8: sw          $v0, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = ctx->r2;
    after_5:
    // 0x80225DCC: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80225DD0: jal         0x8005FA7C
    // 0x80225DD4: addiu       $a0, $a0, 0x7ED4
    ctx->r4 = ADD32(ctx->r4, 0X7ED4);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_6;
    // 0x80225DD4: addiu       $a0, $a0, 0x7ED4
    ctx->r4 = ADD32(ctx->r4, 0X7ED4);
    after_6:
    // 0x80225DD8: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80225DDC: jal         0x8005FA7C
    // 0x80225DE0: addiu       $a0, $a0, 0x7EE8
    ctx->r4 = ADD32(ctx->r4, 0X7EE8);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_7;
    // 0x80225DE0: addiu       $a0, $a0, 0x7EE8
    ctx->r4 = ADD32(ctx->r4, 0X7EE8);
    after_7:
    // 0x80225DE4: lui         $a0, 0x8022
    ctx->r4 = S32(0X8022 << 16);
    // 0x80225DE8: jal         0x8005FA7C
    // 0x80225DEC: addiu       $a0, $a0, 0x7EFC
    ctx->r4 = ADD32(ctx->r4, 0X7EFC);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_8;
    // 0x80225DEC: addiu       $a0, $a0, 0x7EFC
    ctx->r4 = ADD32(ctx->r4, 0X7EFC);
    after_8:
    // 0x80225DF0: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80225DF4: sw          $zero, 0x64($s2)
    MEM_W(0X64, ctx->r18) = 0;
    // 0x80225DF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225DFC: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80225E00:
    // 0x80225E00: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225E04: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80225E08: bne         $v0, $zero, L_80225E48
    if (ctx->r2 != 0) {
        // 0x80225E0C: nop
    
            goto L_80225E48;
    }
    // 0x80225E0C: nop

    // 0x80225E10: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x80225E14: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80225E18: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225E1C: beq         $v1, $v0, L_80225E34
    if (ctx->r3 == ctx->r2) {
        // 0x80225E20: nop
    
            goto L_80225E34;
    }
    // 0x80225E20: nop

    // 0x80225E24: jal         0x8006072C
    // 0x80225E28: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_9;
    // 0x80225E28: nop

    after_9:
    // 0x80225E2C: beq         $v0, $zero, L_80225E48
    if (ctx->r2 == 0) {
        // 0x80225E30: nop
    
            goto L_80225E48;
    }
    // 0x80225E30: nop

L_80225E34:
    // 0x80225E34: jal         0x80036E48
    // 0x80225E38: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_10;
    // 0x80225E38: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_10:
    // 0x80225E3C: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80225E40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225E44: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80225E48:
    // 0x80225E48: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x80225E4C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225E50: beq         $v1, $v0, L_80225E68
    if (ctx->r3 == ctx->r2) {
        // 0x80225E54: nop
    
            goto L_80225E68;
    }
    // 0x80225E54: nop

    // 0x80225E58: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x80225E5C: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x80225E60: jalr        $v0
    // 0x80225E64: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_11;
    // 0x80225E64: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_11:
L_80225E68:
    // 0x80225E68: lw          $v0, 0x64($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X64);
    // 0x80225E6C: beq         $v0, $zero, L_80225F34
    if (ctx->r2 == 0) {
        // 0x80225E70: addiu       $v0, $zero, 0x60
        ctx->r2 = ADD32(0, 0X60);
            goto L_80225F34;
    }
    // 0x80225E70: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80225E74: lbu         $a0, 0x6B($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X6B);
    // 0x80225E78: lbu         $a1, 0x6F($s2)
    ctx->r5 = MEM_BU(ctx->r18, 0X6F);
    // 0x80225E7C: lbu         $a2, 0x73($s2)
    ctx->r6 = MEM_BU(ctx->r18, 0X73);
    // 0x80225E80: lhu         $a3, 0x76($s2)
    ctx->r7 = MEM_HU(ctx->r18, 0X76);
    // 0x80225E84: lui         $s0, 0x801A
    ctx->r16 = S32(0X801A << 16);
    // 0x80225E88: lw          $s0, -0x5858($s0)
    ctx->r16 = MEM_W(ctx->r16, -0X5858);
    // 0x80225E8C: sb          $v0, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r2;
    // 0x80225E90: lbu         $v1, 0x7($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X7);
    // 0x80225E94: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80225E98: sb          $a1, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r5;
    // 0x80225E9C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225EA0: sb          $a2, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r6;
    // 0x80225EA4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225EA8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80225EAC: addiu       $v0, $zero, 0x140
    ctx->r2 = ADD32(0, 0X140);
    // 0x80225EB0: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x80225EB4: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80225EB8: sb          $a0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r4;
    // 0x80225EBC: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80225EC0: sb          $v1, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r3;
    // 0x80225EC4: lui         $s1, 0x801A
    ctx->r17 = S32(0X801A << 16);
    // 0x80225EC8: lw          $s1, -0x5858($s1)
    ctx->r17 = MEM_W(ctx->r17, -0X5858);
    // 0x80225ECC: sll         $a3, $a3, 5
    ctx->r7 = S32(ctx->r7 << 5);
    // 0x80225ED0: ori         $a3, $a3, 0xF
    ctx->r7 = ctx->r7 | 0XF;
    // 0x80225ED4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80225ED8: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x80225EDC: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
    // 0x80225EE0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80225EE4: addiu       $s1, $s1, 0x28
    ctx->r17 = ADD32(ctx->r17, 0X28);
    // 0x80225EE8: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80225EEC: sw          $s1, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r17;
    // 0x80225EF0: jal         0x8003055C
    // 0x80225EF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003055C_B95C(rdram, ctx);
        goto after_12;
    // 0x80225EF4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_12:
    // 0x80225EF8: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225EFC: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80225F00: lui         $v0, 0x801A
    ctx->r2 = S32(0X801A << 16);
    // 0x80225F04: lw          $v0, -0x5858($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X5858);
    // 0x80225F08: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80225F0C: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
    // 0x80225F10: lui         $at, 0x801A
    ctx->r1 = S32(0X801A << 16);
    // 0x80225F14: sw          $v0, -0x5858($at)
    MEM_W(-0X5858, ctx->r1) = ctx->r2;
    // 0x80225F18: jal         0x8002FD30
    // 0x80225F1C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_13;
    // 0x80225F1C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_13:
    // 0x80225F20: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225F24: lw          $a0, 0x497C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X497C);
    // 0x80225F28: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80225F2C: jal         0x8002FD30
    // 0x80225F30: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    func_8002FD30_B130(rdram, ctx);
        goto after_14;
    // 0x80225F30: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_14:
L_80225F34:
    // 0x80225F34: jal         0x8005FB90
    // 0x80225F38: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_15;
    // 0x80225F38: nop

    after_15:
    // 0x80225F3C: jal         0x80060018
    // 0x80225F40: nop

    func_80060018_3B418(rdram, ctx);
        goto after_16;
    // 0x80225F40: nop

    after_16:
    // 0x80225F44: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x80225F48: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80225F4C: bne         $v1, $v0, L_80226014
    if (ctx->r3 != ctx->r2) {
        // 0x80225F50: nop
    
            goto L_80226014;
    }
    // 0x80225F50: nop

    // 0x80225F54: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225F58: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80225F5C: bne         $v0, $zero, L_80226014
    if (ctx->r2 != 0) {
        // 0x80225F60: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_80226014;
    }
    // 0x80225F60: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225F64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80225F68: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80225F6C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x80225F70: addiu       $v0, $zero, 0x1B
    ctx->r2 = ADD32(0, 0X1B);
    // 0x80225F74: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F78: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80225F7C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80225F80: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F84: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80225F88: addiu       $v0, $zero, -0x40
    ctx->r2 = ADD32(0, -0X40);
    // 0x80225F8C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F90: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80225F94: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80225F98: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225F9C: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x80225FA0: addiu       $v0, $zero, 0xC0
    ctx->r2 = ADD32(0, 0XC0);
    // 0x80225FA4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225FA8: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x80225FAC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80225FB0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225FB4: sh          $v0, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = ctx->r2;
    // 0x80225FB8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80225FBC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225FC0: sb          $v1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r3;
    // 0x80225FC4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225FC8: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80225FCC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225FD0: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80225FD4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80225FD8: sb          $v1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r3;
    // 0x80225FDC: jal         0x80036B00
    // 0x80225FE0: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    func_80036B00_11F00(rdram, ctx);
        goto after_17;
    // 0x80225FE0: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    after_17:
    // 0x80225FE4: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80225FE8: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    // 0x80225FEC: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80225FF0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80225FF4: jal         0x80070050
    // 0x80225FF8: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    func_80070050_4B450(rdram, ctx);
        goto after_18;
    // 0x80225FF8: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    after_18:
    // 0x80225FFC: jal         0x80060C1C
    // 0x80226000: addiu       $a0, $zero, 0x2EB
    ctx->r4 = ADD32(0, 0X2EB);
    func_80060C1C_3C01C(rdram, ctx);
        goto after_19;
    // 0x80226000: addiu       $a0, $zero, 0x2EB
    ctx->r4 = ADD32(0, 0X2EB);
    after_19:
    // 0x80226004: jal         0x8006036C
    // 0x80226008: addiu       $a0, $zero, 0x55
    ctx->r4 = ADD32(0, 0X55);
    func_8006036C_3B76C(rdram, ctx);
        goto after_20;
    // 0x80226008: addiu       $a0, $zero, 0x55
    ctx->r4 = ADD32(0, 0X55);
    after_20:
    // 0x8022600C: jal         0x8006027C
    // 0x80226010: nop

    func_8006027C_3B67C(rdram, ctx);
        goto after_21;
    // 0x80226010: nop

    after_21:
L_80226014:
    // 0x80226014: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80226018: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022601C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80226020: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80226024: jr          $ra
    // 0x80226028: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80226028: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225630_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225630: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225634: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80225638: lb          $v0, 0xC($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XC);
    // 0x8022563C: bne         $v0, $zero, L_8022565C
    if (ctx->r2 != 0) {
        // 0x80225640: nop
    
            goto L_8022565C;
    }
    // 0x80225640: nop

    // 0x80225644: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80225648: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022564C: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80225650: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225654: j           L_80225670
    // 0x80225658: lw          $v0, 0x7EA0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7EA0);
        goto L_80225670;
    // 0x80225658: lw          $v0, 0x7EA0($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7EA0);
L_8022565C:
    // 0x8022565C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80225660: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80225664: lui         $at, 0x8022
    ctx->r1 = S32(0X8022 << 16);
    // 0x80225668: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022566C: lw          $v0, 0x7EAC($at)
    ctx->r2 = MEM_W(ctx->r1, 0X7EAC);
L_80225670:
    // 0x80225670: jalr        $v0
    // 0x80225674: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80225674: nop

    after_0:
    // 0x80225678: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022567C: jr          $ra
    // 0x80225680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227A70_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227A70: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80227A74: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80227A78: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227A7C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80227A80: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80227A84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227A88: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80227A8C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80227A90: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80227A94: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227A98: bnel        $v1, $v0, L_80227AD0
    if (ctx->r3 != ctx->r2) {
        // 0x80227A9C: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_80227AD0;
    }
    goto skip_0;
    // 0x80227A9C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    skip_0:
    // 0x80227AA0: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80227AA4: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80227AA8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227AAC: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80227AB0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80227AB4: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80227AB8: bnel        $v0, $v1, L_80227AD0
    if (ctx->r2 != ctx->r3) {
        // 0x80227ABC: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_80227AD0;
    }
    goto skip_1;
    // 0x80227ABC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    skip_1:
    // 0x80227AC0: jal         0x8004F62C
    // 0x80227AC4: nop

    func_8004F62C_2AA2C(rdram, ctx);
        goto after_0;
    // 0x80227AC4: nop

    after_0:
    // 0x80227AC8: j           L_80227B04
    // 0x80227ACC: nop

        goto L_80227B04;
    // 0x80227ACC: nop

L_80227AD0:
    // 0x80227AD0: lw          $a1, 0x1C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1C);
    // 0x80227AD4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227AD8: jal         0x8003BA58
    // 0x80227ADC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003BA58_16E58(rdram, ctx);
        goto after_1;
    // 0x80227ADC: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_1:
    // 0x80227AE0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80227AE4: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80227AE8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227AEC: addiu       $a3, $sp, 0x10
    ctx->r7 = ADD32(ctx->r29, 0X10);
    // 0x80227AF0: lui         $a2, 0x8023
    ctx->r6 = S32(0X8023 << 16);
    // 0x80227AF4: addiu       $a2, $a2, -0x7600
    ctx->r6 = ADD32(ctx->r6, -0X7600);
    // 0x80227AF8: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80227AFC: jal         0x8003BC68
    // 0x80227B00: addu        $a2, $v0, $a2
    ctx->r6 = ADD32(ctx->r2, ctx->r6);
    func_8003BC68_17068(rdram, ctx);
        goto after_2;
    // 0x80227B00: addu        $a2, $v0, $a2
    ctx->r6 = ADD32(ctx->r2, ctx->r6);
    after_2:
L_80227B04:
    // 0x80227B04: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80227B08: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80227B0C: jr          $ra
    // 0x80227B10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80227B10: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80227088_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227088: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022708C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227090: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227094: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227098: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022709C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802270A0: beq         $v1, $v0, L_8022710C
    if (ctx->r3 == ctx->r2) {
        // 0x802270A4: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_8022710C;
    }
    // 0x802270A4: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802270A8: beql        $v0, $zero, L_802270C0
    if (ctx->r2 == 0) {
        // 0x802270AC: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802270C0;
    }
    goto skip_0;
    // 0x802270AC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802270B0: beq         $v1, $zero, L_802270D0
    if (ctx->r3 == 0) {
        // 0x802270B4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802270D0;
    }
    // 0x802270B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802270B8: j           L_80227174
    // 0x802270BC: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
        goto L_80227174;
    // 0x802270BC: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
L_802270C0:
    // 0x802270C0: beq         $v1, $v0, L_8022713C
    if (ctx->r3 == ctx->r2) {
        // 0x802270C4: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022713C;
    }
    // 0x802270C4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802270C8: j           L_80227170
    // 0x802270CC: nop

        goto L_80227170;
    // 0x802270CC: nop

L_802270D0:
    // 0x802270D0: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x802270D4: jal         0x80050294
    // 0x802270D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802270D8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802270DC: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802270E0: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802270E4: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802270E8: addiu       $v0, $zero, 0x5DC
    ctx->r2 = ADD32(0, 0X5DC);
    // 0x802270EC: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    // 0x802270F0: lui         $v0, 0xFEB6
    ctx->r2 = S32(0XFEB6 << 16);
    // 0x802270F4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802270F8: lui         $v0, 0xFE52
    ctx->r2 = S32(0XFE52 << 16);
    // 0x802270FC: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x80227100: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227104: j           L_8022716C
    // 0x80227108: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_8022716C;
    // 0x80227108: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_8022710C:
    // 0x8022710C: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80227110: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227114: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80227118: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022711C: bne         $v0, $zero, L_80227170
    if (ctx->r2 != 0) {
        // 0x80227120: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227170;
    }
    // 0x80227120: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227124: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227128: addiu       $v1, $zero, 0x1C
    ctx->r3 = ADD32(0, 0X1C);
    // 0x8022712C: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x80227130: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227134: j           L_80227170
    // 0x80227138: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80227170;
    // 0x80227138: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022713C:
    // 0x8022713C: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80227140: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227144: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x80227148: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022714C: bne         $v0, $zero, L_80227160
    if (ctx->r2 != 0) {
        // 0x80227150: nop
    
            goto L_80227160;
    }
    // 0x80227150: nop

    // 0x80227154: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227158: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022715C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227160:
    // 0x80227160: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227164: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x80227168: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022716C:
    // 0x8022716C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80227170:
    // 0x80227170: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
L_80227174:
    // 0x80227174: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227178: jal         0x8004DA90
    // 0x8022717C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022717C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80227180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227184: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227188: jr          $ra
    // 0x8022718C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022718C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802278A8_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802278A8: jr          $ra
    // 0x802278AC: nop

    TRACE_RETURN()
    return;
    // 0x802278AC: nop

;}
RECOMP_FUNC void func_802266B0_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802266B0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802266B4: bne         $v0, $zero, L_80226748
    if (ctx->r2 != 0) {
        // 0x802266B8: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80226748;
    }
    // 0x802266B8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802266BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802266C0: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x802266C4: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x802266C8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802266CC: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x802266D0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802266D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802266D8: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x802266DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802266E0: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x802266E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802266E8: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x802266EC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802266F0: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x802266F4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802266F8: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x802266FC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226700: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226704: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226708: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x8022670C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226710: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80226714: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80226718: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8022671C: ori         $v0, $v0, 0x3
    ctx->r2 = ctx->r2 | 0X3;
    // 0x80226720: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226724: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80226728: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x8022672C: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x80226730: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226734: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
    // 0x80226738: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x8022673C: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80226740: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80226744: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
L_80226748:
    // 0x80226748: jr          $ra
    // 0x8022674C: nop

    TRACE_RETURN()
    return;
    // 0x8022674C: nop

;}
RECOMP_FUNC void func_80226E44_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226E44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226E48: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226E4C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226E50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226E54: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226E58: bne         $v0, $zero, L_80226E74
    if (ctx->r2 != 0) {
        // 0x80226E5C: addiu       $a1, $zero, 0x13
        ctx->r5 = ADD32(0, 0X13);
            goto L_80226E74;
    }
    // 0x80226E5C: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x80226E60: jal         0x80050294
    // 0x80226E64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80226E64: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80226E68: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226E6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226E70: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226E74:
    // 0x80226E74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226E78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226E7C: jr          $ra
    // 0x80226E80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226E80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226554_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226554: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80226558: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x8022655C: bne         $v0, $zero, L_802265FC
    if (ctx->r2 != 0) {
        // 0x80226560: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802265FC;
    }
    // 0x80226560: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226564: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226568: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x8022656C: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80226570: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226574: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x80226578: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022657C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226580: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x80226584: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226588: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x8022658C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226590: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80226594: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226598: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x8022659C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802265A0: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x802265A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802265A8: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x802265AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802265B0: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x802265B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802265B8: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x802265BC: lw          $v1, 0x24($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24);
    // 0x802265C0: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x802265C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802265C8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802265CC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x802265D0: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x802265D4: sb          $a0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r4;
    // 0x802265D8: lw          $a0, 0x28($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X28);
    // 0x802265DC: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x802265E0: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x802265E4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802265E8: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x802265EC: lw          $a0, 0x2C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X2C);
    // 0x802265F0: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x802265F4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802265F8: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_802265FC:
    // 0x802265FC: jr          $ra
    // 0x80226600: nop

    TRACE_RETURN()
    return;
    // 0x80226600: nop

;}
RECOMP_FUNC void func_802279C0_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802279C0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802279C4: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x802279C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802279CC: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x802279D0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802279D4: bne         $v0, $zero, L_802279FC
    if (ctx->r2 != 0) {
        // 0x802279D8: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_802279FC;
    }
    // 0x802279D8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802279DC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802279E0: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x802279E4: jal         0x8004D5D4
    // 0x802279E8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x802279E8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x802279EC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802279F0: sh          $zero, 0xC($s0)
    MEM_H(0XC, ctx->r16) = 0;
    // 0x802279F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802279F8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802279FC:
    // 0x802279FC: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80227A00: sll         $v0, $v1, 8
    ctx->r2 = S32(ctx->r3 << 8);
    // 0x80227A04: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227A08: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80227A0C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227A10: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x80227A14: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80227A18: sh          $zero, 0x30($sp)
    MEM_H(0X30, ctx->r29) = 0;
    // 0x80227A1C: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x80227A20: lhu         $v0, 0xC($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC);
    // 0x80227A24: addiu       $s0, $s0, 0x18
    ctx->r16 = ADD32(ctx->r16, 0X18);
    // 0x80227A28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227A2C: jal         0x8002C654
    // 0x80227A30: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x80227A30: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    after_1:
    // 0x80227A34: jal         0x8002C654
    // 0x80227A38: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    func_8002C654_7A54(rdram, ctx);
        goto after_2;
    // 0x80227A38: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x80227A3C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80227A40: jal         0x80031428
    // 0x80227A44: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80031428_C828(rdram, ctx);
        goto after_3;
    // 0x80227A44: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_3:
    // 0x80227A48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227A4C: jal         0x8003077C
    // 0x80227A50: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_8003077C_BB7C(rdram, ctx);
        goto after_4;
    // 0x80227A50: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_4:
    // 0x80227A54: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80227A58: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80227A5C: jr          $ra
    // 0x80227A60: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80227A60: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80227A64: nop

    // 0x80227A68: nop

    // 0x80227A6C: nop

;}
RECOMP_FUNC void func_80226F88_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226F88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226F8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226F90: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226F94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226F98: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226F9C: bne         $v0, $zero, L_80226FB8
    if (ctx->r2 != 0) {
        // 0x80226FA0: addiu       $a1, $zero, 0x17
        ctx->r5 = ADD32(0, 0X17);
            goto L_80226FB8;
    }
    // 0x80226FA0: addiu       $a1, $zero, 0x17
    ctx->r5 = ADD32(0, 0X17);
    // 0x80226FA4: jal         0x80050294
    // 0x80226FA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80226FA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80226FAC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226FB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226FB4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226FB8:
    // 0x80226FB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226FBC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226FC0: jr          $ra
    // 0x80226FC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226FC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226EC4_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226EC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226EC8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226ECC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226ED0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226ED4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80226ED8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226EDC: beq         $v1, $v0, L_80226EFC
    if (ctx->r3 == ctx->r2) {
        // 0x80226EE0: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80226EFC;
    }
    // 0x80226EE0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80226EE4: beq         $v0, $zero, L_80226F28
    if (ctx->r2 == 0) {
        // 0x80226EE8: nop
    
            goto L_80226F28;
    }
    // 0x80226EE8: nop

    // 0x80226EEC: bne         $v1, $zero, L_80226F28
    if (ctx->r3 != 0) {
        // 0x80226EF0: addiu       $a1, $zero, 0x1B
        ctx->r5 = ADD32(0, 0X1B);
            goto L_80226F28;
    }
    // 0x80226EF0: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    // 0x80226EF4: j           L_80226F14
    // 0x80226EF8: nop

        goto L_80226F14;
    // 0x80226EF8: nop

L_80226EFC:
    // 0x80226EFC: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x80226F00: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80226F04: addiu       $v0, $zero, 0x35
    ctx->r2 = ADD32(0, 0X35);
    // 0x80226F08: bne         $v1, $v0, L_80226F28
    if (ctx->r3 != ctx->r2) {
        // 0x80226F0C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80226F28;
    }
    // 0x80226F0C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80226F10: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
L_80226F14:
    // 0x80226F14: jal         0x80050294
    // 0x80226F18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80226F18: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80226F1C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80226F20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226F24: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80226F28:
    // 0x80226F28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226F2C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226F30: jr          $ra
    // 0x80226F34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226F34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227540_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227540: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227544: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227548: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022754C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80227550: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80227554: bne         $v0, $zero, L_802275A8
    if (ctx->r2 != 0) {
        // 0x80227558: nop
    
            goto L_802275A8;
    }
    // 0x80227558: nop

    // 0x8022755C: jal         0x8004D5D4
    // 0x80227560: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80227560: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    after_0:
    // 0x80227564: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227568: addiu       $v0, $v0, -0x7774
    ctx->r2 = ADD32(ctx->r2, -0X7774);
    // 0x8022756C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227570: sw          $v0, -0x7570($at)
    MEM_W(-0X7570, ctx->r1) = ctx->r2;
    // 0x80227574: lui         $v0, 0x8023
    ctx->r2 = S32(0X8023 << 16);
    // 0x80227578: addiu       $v0, $v0, -0x7720
    ctx->r2 = ADD32(ctx->r2, -0X7720);
    // 0x8022757C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80227580: sw          $v0, -0x756C($at)
    MEM_W(-0X756C, ctx->r1) = ctx->r2;
    // 0x80227584: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80227588: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022758C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80227590: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80227594: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80227598: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022759C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802275A0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802275A4: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
L_802275A8:
    // 0x802275A8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802275AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802275B0: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802275B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802275B8: lw          $v0, -0x7634($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7634);
    // 0x802275BC: jalr        $v0
    // 0x802275C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x802275C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x802275C4: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x802275C8: bne         $v0, $zero, L_802275E0
    if (ctx->r2 != 0) {
        // 0x802275CC: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_802275E0;
    }
    // 0x802275CC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802275D0: jal         0x8004DD04
    // 0x802275D4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_2;
    // 0x802275D4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x802275D8: jal         0x8005044C
    // 0x802275DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_3;
    // 0x802275DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
L_802275E0:
    // 0x802275E0: jal         0x802273C8
    // 0x802275E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802273C8_ovl26(rdram, ctx);
        goto after_4;
    // 0x802275E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802275E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802275EC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802275F0: jr          $ra
    // 0x802275F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802275F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227190_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227190: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227194: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227198: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022719C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802271A0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802271A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802271A8: beq         $v1, $v0, L_80227210
    if (ctx->r3 == ctx->r2) {
        // 0x802271AC: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80227210;
    }
    // 0x802271AC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x802271B0: beql        $v0, $zero, L_802271C8
    if (ctx->r2 == 0) {
        // 0x802271B4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802271C8;
    }
    goto skip_0;
    // 0x802271B4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x802271B8: beq         $v1, $zero, L_802271D8
    if (ctx->r3 == 0) {
        // 0x802271BC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802271D8;
    }
    // 0x802271BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802271C0: j           L_80227254
    // 0x802271C4: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
        goto L_80227254;
    // 0x802271C4: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
L_802271C8:
    // 0x802271C8: beq         $v1, $v0, L_80227240
    if (ctx->r3 == ctx->r2) {
        // 0x802271CC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227240;
    }
    // 0x802271CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802271D0: j           L_80227250
    // 0x802271D4: nop

        goto L_80227250;
    // 0x802271D4: nop

L_802271D8:
    // 0x802271D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802271DC: jal         0x80050294
    // 0x802271E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802271E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802271E4: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802271E8: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x802271EC: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802271F0: lui         $v0, 0xFE5C
    ctx->r2 = S32(0XFE5C << 16);
    // 0x802271F4: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x802271F8: lui         $v0, 0xFF3D
    ctx->r2 = S32(0XFF3D << 16);
    // 0x802271FC: sh          $zero, 0x56($s0)
    MEM_H(0X56, ctx->r16) = 0;
    // 0x80227200: sw          $v0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r2;
    // 0x80227204: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227208: j           L_8022724C
    // 0x8022720C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
        goto L_8022724C;
    // 0x8022720C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
L_80227210:
    // 0x80227210: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x80227214: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227218: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8022721C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80227220: bne         $v0, $zero, L_80227250
    if (ctx->r2 != 0) {
        // 0x80227224: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227250;
    }
    // 0x80227224: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227228: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022722C: addiu       $v1, $zero, 0x1C
    ctx->r3 = ADD32(0, 0X1C);
    // 0x80227230: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x80227234: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227238: j           L_80227250
    // 0x8022723C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
        goto L_80227250;
    // 0x8022723C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80227240:
    // 0x80227240: lhu         $v0, 0x56($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X56);
    // 0x80227244: addiu       $v0, $v0, -0x14
    ctx->r2 = ADD32(ctx->r2, -0X14);
    // 0x80227248: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_8022724C:
    // 0x8022724C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80227250:
    // 0x80227250: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
L_80227254:
    // 0x80227254: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227258: jal         0x8004DA90
    // 0x8022725C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022725C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80227260: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227264: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227268: jr          $ra
    // 0x8022726C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022726C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802263F8_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802263F8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802263FC: lw          $v0, 0x10($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X10);
    // 0x80226400: bne         $v0, $zero, L_802264A0
    if (ctx->r2 != 0) {
        // 0x80226404: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_802264A0;
    }
    // 0x80226404: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226408: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022640C: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226410: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80226414: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226418: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022641C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226420: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226424: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x80226428: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022642C: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80226430: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226434: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80226438: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022643C: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80226440: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226444: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80226448: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022644C: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226450: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226454: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226458: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022645C: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80226460: lw          $v1, 0x24($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X24);
    // 0x80226464: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x80226468: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022646C: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80226470: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80226474: ori         $a0, $a0, 0x2
    ctx->r4 = ctx->r4 | 0X2;
    // 0x80226478: sb          $a0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r4;
    // 0x8022647C: lw          $a0, 0x28($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X28);
    // 0x80226480: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80226484: addiu       $v1, $zero, -0x3
    ctx->r3 = ADD32(0, -0X3);
    // 0x80226488: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022648C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x80226490: lw          $a0, 0x2C($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X2C);
    // 0x80226494: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80226498: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x8022649C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
L_802264A0:
    // 0x802264A0: jr          $ra
    // 0x802264A4: nop

    TRACE_RETURN()
    return;
    // 0x802264A4: nop

;}
RECOMP_FUNC void func_802253E0_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802253E0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802253E4: sw          $s0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r16;
    // 0x802253E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802253EC: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x802253F0: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x802253F4: beq         $v1, $zero, L_8022540C
    if (ctx->r3 == 0) {
        // 0x802253F8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022540C;
    }
    // 0x802253F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802253FC: beq         $v1, $v0, L_8022550C
    if (ctx->r3 == ctx->r2) {
        // 0x80225400: addiu       $v1, $zero, 0x20
        ctx->r3 = ADD32(0, 0X20);
            goto L_8022550C;
    }
    // 0x80225400: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x80225404: j           L_80225550
    // 0x80225408: nop

        goto L_80225550;
    // 0x80225408: nop

L_8022540C:
    // 0x8022540C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80225410: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x80225414: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225418: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8022541C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80225420: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80225424: bne         $v0, $v1, L_80225438
    if (ctx->r2 != ctx->r3) {
        // 0x80225428: nop
    
            goto L_80225438;
    }
    // 0x80225428: nop

    // 0x8022542C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80225430: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225434: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80225438:
    // 0x80225438: lh          $v0, 0x3C($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X3C);
    // 0x8022543C: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225440: ldc1        $f2, -0x75E0($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X75E0);
    // 0x80225444: lb          $a0, 0xD($s0)
    ctx->r4 = MEM_B(ctx->r16, 0XD);
    // 0x80225448: mtc1        $v0, $f0
    ctx->f0.u32l = ctx->r2;
    // 0x8022544C: nop

    // 0x80225450: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x80225454: add.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d + ctx->f2.d;
    // 0x80225458: sll         $a0, $a0, 6
    ctx->r4 = S32(ctx->r4 << 6);
    // 0x8022545C: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x80225460: mfc1        $v0, $f2
    ctx->r2 = (int32_t)ctx->f2.u32l;
    // 0x80225464: nop

    // 0x80225468: jal         0x800324B4
    // 0x8022546C: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x8022546C: sh          $v0, 0x3C($s0)
    MEM_H(0X3C, ctx->r16) = ctx->r2;
    after_0:
    // 0x80225470: lw          $a1, 0x40($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X40);
    // 0x80225474: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80225478: sll         $v1, $v0, 5
    ctx->r3 = S32(ctx->r2 << 5);
    // 0x8022547C: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80225480: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80225484: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80225488: sll         $v1, $v1, 6
    ctx->r3 = S32(ctx->r3 << 6);
    // 0x8022548C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80225490: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x80225494: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x80225498: jal         0x8002C654
    // 0x8022549C: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    func_8002C654_7A54(rdram, ctx);
        goto after_1;
    // 0x8022549C: sw          $a1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r5;
    after_1:
    // 0x802254A0: lh          $a0, 0x3E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X3E);
    // 0x802254A4: jal         0x800319B4
    // 0x802254A8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_2;
    // 0x802254A8: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_2:
    // 0x802254AC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802254B0: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x802254B4: jal         0x80030AA0
    // 0x802254B8: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    func_80030AA0_BEA0(rdram, ctx);
        goto after_3;
    // 0x802254B8: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    after_3:
    // 0x802254BC: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x802254C0: lh          $v0, 0x1C($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X1C);
    // 0x802254C4: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x802254C8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x802254CC: ldc1        $f2, -0x75D8($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X75D8);
    // 0x802254D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802254D4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802254D8: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x802254DC: lwc1        $f0, 0x30($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X30);
    // 0x802254E0: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x802254E4: sub.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d - ctx->f2.d;
    // 0x802254E8: sw          $v1, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r3;
    // 0x802254EC: lh          $v0, 0x20($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X20);
    // 0x802254F0: lw          $v1, 0x48($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X48);
    // 0x802254F4: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x802254F8: swc1        $f2, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f2.u32l;
    // 0x802254FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80225500: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80225504: j           L_80225550
    // 0x80225508: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
        goto L_80225550;
    // 0x80225508: sw          $v1, 0x34($s0)
    MEM_W(0X34, ctx->r16) = ctx->r3;
L_8022550C:
    // 0x8022550C: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80225510: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225514: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80225518: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8022551C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80225520: bne         $v0, $v1, L_80225534
    if (ctx->r2 != ctx->r3) {
        // 0x80225524: nop
    
            goto L_80225534;
    }
    // 0x80225524: nop

    // 0x80225528: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8022552C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80225530: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80225534:
    // 0x80225534: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80225538: ldc1        $f2, -0x75D0($at)
    CHECK_FR(ctx, 2);
    ctx->f2.u64 = LD(ctx->r1, -0X75D0);
    // 0x8022553C: lwc1        $f0, 0x30($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X30);
    // 0x80225540: cvt.d.w     $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    ctx->f0.d = CVT_D_W(ctx->f0.u32l);
    // 0x80225544: sub.d       $f0, $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.d); NAN_CHECK(ctx->f2.d); 
    ctx->f0.d = ctx->f0.d - ctx->f2.d;
    // 0x80225548: trunc.w.d   $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.u32l = TRUNC_W_D(ctx->f0.d);
    // 0x8022554C: swc1        $f2, 0x30($s0)
    MEM_W(0X30, ctx->r16) = ctx->f2.u32l;
L_80225550:
    // 0x80225550: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80225554: lw          $s0, 0x50($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X50);
    // 0x80225558: jr          $ra
    // 0x8022555C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8022555C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8022676C_ovl26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022676C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226770: bne         $v0, $zero, L_80226830
    if (ctx->r2 != 0) {
        // 0x80226774: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80226830;
    }
    // 0x80226774: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226778: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022677C: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226780: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x80226784: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226788: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022678C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226790: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226794: sb          $v0, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = ctx->r2;
    // 0x80226798: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022679C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267A0: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x802267A4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267A8: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x802267AC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267B0: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x802267B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267B8: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x802267BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267C0: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x802267C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267C8: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x802267CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802267D0: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x802267D4: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x802267D8: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x802267DC: andi        $v0, $v0, 0xFD
    ctx->r2 = ctx->r2 & 0XFD;
    // 0x802267E0: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x802267E4: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x802267E8: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x802267EC: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802267F0: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x802267F4: lui         $v0, 0xFF1F
    ctx->r2 = S32(0XFF1F << 16);
    // 0x802267F8: sw          $v0, 0x1C($a1)
    MEM_W(0X1C, ctx->r5) = ctx->r2;
    // 0x802267FC: lui         $v0, 0xFFFB
    ctx->r2 = S32(0XFFFB << 16);
    // 0x80226800: sw          $v0, 0x20($a1)
    MEM_W(0X20, ctx->r5) = ctx->r2;
    // 0x80226804: lui         $v0, 0xFE70
    ctx->r2 = S32(0XFE70 << 16);
    // 0x80226808: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x8022680C: addiu       $v0, $zero, 0x400
    ctx->r2 = ADD32(0, 0X400);
    // 0x80226810: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80226814: sh          $v0, 0x56($a1)
    MEM_H(0X56, ctx->r5) = ctx->r2;
    // 0x80226818: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x8022681C: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
    // 0x80226820: lw          $a1, 0x2C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X2C);
    // 0x80226824: lbu         $v0, 0x0($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X0);
    // 0x80226828: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022682C: sb          $v0, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r2;
L_80226830:
    // 0x80226830: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226834: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x80226838: bne         $v1, $v0, L_80226858
    if (ctx->r3 != ctx->r2) {
        // 0x8022683C: addiu       $v0, $zero, 0xA
        ctx->r2 = ADD32(0, 0XA);
            goto L_80226858;
    }
    // 0x8022683C: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80226840: lw          $a1, 0x28($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X28);
    // 0x80226844: lbu         $v1, 0x0($a1)
    ctx->r3 = MEM_BU(ctx->r5, 0X0);
    // 0x80226848: sb          $v0, 0x9($a1)
    MEM_B(0X9, ctx->r5) = ctx->r2;
    // 0x8022684C: sb          $zero, 0xA($a1)
    MEM_B(0XA, ctx->r5) = 0;
    // 0x80226850: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x80226854: sb          $v1, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r3;
L_80226858:
    // 0x80226858: jr          $ra
    // 0x8022685C: nop

    TRACE_RETURN()
    return;
    // 0x8022685C: nop

;}
RECOMP_FUNC void func_80226B50_ovl26(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80226B60: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80226B64: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80226B68: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226B6C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226B70: lw          $v0, -0x7958($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7958);
    // 0x80226B74: jalr        $v0
    // 0x80226B78: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80226B78: nop

    after_0:
    // 0x80226B7C: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80226B80: bne         $v0, $zero, L_80226B98
    if (ctx->r2 != 0) {
        // 0x80226B84: addiu       $a0, $s0, 0x1C
        ctx->r4 = ADD32(ctx->r16, 0X1C);
            goto L_80226B98;
    }
    // 0x80226B84: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80226B88: jal         0x8004DD04
    // 0x80226B8C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80226B8C: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80226B90: jal         0x8005044C
    // 0x80226B94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x80226B94: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
L_80226B98:
    // 0x80226B98: jal         0x802269D8
    // 0x80226B9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_802269D8_ovl26(rdram, ctx);
        goto after_3;
    // 0x80226B9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80226BA0: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80226BA4: lui         $a0, 0x801C
    ctx->r4 = S32(0X801C << 16);
    // 0x80226BA8: lw          $a0, -0x3A20($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X3A20);
    // 0x80226BAC: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226BB0: beq         $v1, $v0, L_80226C0C
    if (ctx->r3 == ctx->r2) {
        // 0x80226BB4: slti        $v0, $v1, 0x3
        ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
            goto L_80226C0C;
    }
    // 0x80226BB4: slti        $v0, $v1, 0x3
    ctx->r2 = SIGNED(ctx->r3) < 0X3 ? 1 : 0;
    // 0x80226BB8: beq         $v0, $zero, L_80226BD0
    if (ctx->r2 == 0) {
        // 0x80226BBC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226BD0;
    }
    // 0x80226BBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226BC0: beq         $v1, $v0, L_80226BE4
    if (ctx->r3 == ctx->r2) {
        // 0x80226BC4: nop
    
            goto L_80226BE4;
    }
    // 0x80226BC4: nop

    // 0x80226BC8: j           L_80226C64
    // 0x80226BCC: nop

        goto L_80226C64;
    // 0x80226BCC: nop

L_80226BD0:
    // 0x80226BD0: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226BD4: beq         $v1, $v0, L_80226C34
    if (ctx->r3 == ctx->r2) {
        // 0x80226BD8: addiu       $v0, $zero, 0x15
        ctx->r2 = ADD32(0, 0X15);
            goto L_80226C34;
    }
    // 0x80226BD8: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80226BDC: j           L_80226C64
    // 0x80226BE0: nop

        goto L_80226C64;
    // 0x80226BE0: nop

L_80226BE4:
    // 0x80226BE4: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x80226BE8: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80226BEC: sltiu       $v0, $v1, 0x22
    ctx->r2 = ctx->r3 < 0X22 ? 1 : 0;
    // 0x80226BF0: bne         $v0, $zero, L_80226C64
    if (ctx->r2 != 0) {
        // 0x80226BF4: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_80226C64;
    }
    // 0x80226BF4: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80226BF8: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226BFC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226C00: lhu         $v0, -0x7CB4($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X7CB4);
    // 0x80226C04: j           L_80226C64
    // 0x80226C08: sh          $v0, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r2;
        goto L_80226C64;
    // 0x80226C08: sh          $v0, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r2;
L_80226C0C:
    // 0x80226C0C: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x80226C10: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80226C14: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80226C18: beq         $v0, $zero, L_80226C64
    if (ctx->r2 == 0) {
        // 0x80226C1C: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_80226C64;
    }
    // 0x80226C1C: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80226C20: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226C24: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226C28: lhu         $v0, -0x7C38($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X7C38);
    // 0x80226C2C: j           L_80226C64
    // 0x80226C30: sh          $v0, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r2;
        goto L_80226C64;
    // 0x80226C30: sh          $v0, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r2;
L_80226C34:
    // 0x80226C34: lbu         $v1, 0xAC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XAC);
    // 0x80226C38: bne         $v1, $v0, L_80226C64
    if (ctx->r3 != ctx->r2) {
        // 0x80226C3C: nop
    
            goto L_80226C64;
    }
    // 0x80226C3C: nop

    // 0x80226C40: lw          $v0, 0x98($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X98);
    // 0x80226C44: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80226C48: sltiu       $v0, $v1, 0x1B
    ctx->r2 = ctx->r3 < 0X1B ? 1 : 0;
    // 0x80226C4C: bne         $v0, $zero, L_80226C64
    if (ctx->r2 != 0) {
        // 0x80226C50: sll         $v0, $v1, 1
        ctx->r2 = S32(ctx->r3 << 1);
            goto L_80226C64;
    }
    // 0x80226C50: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80226C54: lui         $at, 0x8023
    ctx->r1 = S32(0X8023 << 16);
    // 0x80226C58: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226C5C: lhu         $v0, -0x7C62($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X7C62);
    // 0x80226C60: sh          $v0, 0xC($a0)
    MEM_H(0XC, ctx->r4) = ctx->r2;
L_80226C64:
    // 0x80226C64: lb          $v1, 0x14B($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X14B);
    // 0x80226C68: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80226C6C: beq         $v1, $v0, L_80226CD8
    if (ctx->r3 == ctx->r2) {
        // 0x80226C70: nop
    
            goto L_80226CD8;
    }
    // 0x80226C70: nop

    // 0x80226C74: lb          $v0, 0xF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XF);
    // 0x80226C78: bne         $v0, $zero, L_80226CA4
    if (ctx->r2 != 0) {
        // 0x80226C7C: addiu       $v1, $zero, 0xF
        ctx->r3 = ADD32(0, 0XF);
            goto L_80226CA4;
    }
    // 0x80226C7C: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
    // 0x80226C80: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80226C84: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80226C88: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80226C8C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80226C90: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80226C94: bne         $v0, $v1, L_80226CBC
    if (ctx->r2 != ctx->r3) {
        // 0x80226C98: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226CBC;
    }
    // 0x80226C98: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226C9C: j           L_80226CBC
    // 0x80226CA0: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
        goto L_80226CBC;
    // 0x80226CA0: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
L_80226CA4:
    // 0x80226CA4: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80226CA8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80226CAC: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80226CB0: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80226CB4: beql        $v0, $zero, L_80226CBC
    if (ctx->r2 == 0) {
        // 0x80226CB8: sb          $zero, 0xF($s0)
        MEM_B(0XF, ctx->r16) = 0;
            goto L_80226CBC;
    }
    goto skip_0;
    // 0x80226CB8: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    skip_0:
L_80226CBC:
    // 0x80226CBC: lbu         $v1, 0xE($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XE);
    // 0x80226CC0: sll         $v0, $v1, 5
    ctx->r2 = S32(ctx->r3 << 5);
    // 0x80226CC4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226CC8: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x80226CCC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80226CD0: addiu       $v0, $v0, 0x4210
    ctx->r2 = ADD32(ctx->r2, 0X4210);
    // 0x80226CD4: sh          $v0, 0x226($s0)
    MEM_H(0X226, ctx->r16) = ctx->r2;
L_80226CD8:
    // 0x80226CD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226CDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226CE0: jr          $ra
    // 0x80226CE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226CE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022D814_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D814: jr          $ra
    // 0x8022D818: nop

    TRACE_RETURN()
    return;
    // 0x8022D818: nop

;}
RECOMP_FUNC void func_80232210_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232210: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232214: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80232218: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023221C: lbu         $v0, 0x9($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X9);
    // 0x80232220: bne         $v0, $zero, L_80232238
    if (ctx->r2 != 0) {
        // 0x80232224: lui         $a2, 0xFFF5
        ctx->r6 = S32(0XFFF5 << 16);
            goto L_80232238;
    }
    // 0x80232224: lui         $a2, 0xFFF5
    ctx->r6 = S32(0XFFF5 << 16);
    // 0x80232228: jal         0x8004F5C4
    // 0x8023222C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8023222C: nop

    after_0:
    // 0x80232230: j           L_8023226C
    // 0x80232234: nop

        goto L_8023226C;
    // 0x80232234: nop

L_80232238:
    // 0x80232238: lbu         $a0, 0xC($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0XC);
    // 0x8023223C: ori         $a2, $a2, 0xF5F6
    ctx->r6 = ctx->r6 | 0XF5F6;
    // 0x80232240: lbu         $a1, 0x9($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0X9);
    // 0x80232244: lw          $v0, 0x18($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X18);
    // 0x80232248: lhu         $v1, 0x24($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X24);
    // 0x8023224C: sll         $a0, $a0, 24
    ctx->r4 = S32(ctx->r4 << 24);
    // 0x80232250: sra         $a0, $a0, 24
    ctx->r4 = S32(SIGNED(ctx->r4) >> 24);
    // 0x80232254: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80232258: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x8023225C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80232260: sw          $v0, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->r2;
    // 0x80232264: sh          $v1, 0x24($a3)
    MEM_H(0X24, ctx->r7) = ctx->r3;
    // 0x80232268: sb          $a1, 0x9($a3)
    MEM_B(0X9, ctx->r7) = ctx->r5;
L_8023226C:
    // 0x8023226C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80232270: jr          $ra
    // 0x80232274: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232274: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80232278: nop

    // 0x8023227C: nop

;}
RECOMP_FUNC void func_80235790_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235790: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80235794: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80235798: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023579C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802357A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802357A4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802357A8: bne         $v0, $zero, L_802357CC
    if (ctx->r2 != 0) {
        // 0x802357AC: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_802357CC;
    }
    // 0x802357AC: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x802357B0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x802357B4: jal         0x80050294
    // 0x802357B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802357B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802357BC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802357C0: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802357C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802357C8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802357CC:
    // 0x802357CC: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x802357D0: lw          $v0, -0x3A40($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A40);
    // 0x802357D4: xori        $v1, $v0, 0xA
    ctx->r3 = ctx->r2 ^ 0XA;
    // 0x802357D8: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x802357DC: xori        $v0, $v0, 0x1E
    ctx->r2 = ctx->r2 ^ 0X1E;
    // 0x802357E0: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x802357E4: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802357E8: beq         $v1, $zero, L_802357FC
    if (ctx->r3 == 0) {
        // 0x802357EC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802357FC;
    }
    // 0x802357EC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802357F0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802357F4: jal         0x80235CD8
    // 0x802357F8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    func_80235CD8_ovl27(rdram, ctx);
        goto after_1;
    // 0x802357F8: addiu       $a2, $zero, 0xF
    ctx->r6 = ADD32(0, 0XF);
    after_1:
L_802357FC:
    // 0x802357FC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80235800: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80235804: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235808: jr          $ra
    // 0x8023580C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023580C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80227C40_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227C40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80227C44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227C48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227C4C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227C50: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80227C54: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227C58: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80227C5C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x80227C60: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x80227C64: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227C68: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80227C6C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x80227C70: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227C74: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x80227C78: lhu         $t0, 0x56($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X56);
    // 0x80227C7C: lbu         $t1, 0xAC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XAC);
    // 0x80227C80: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x80227C84: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80227C88: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227C8C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80227C90: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x80227C94: sh          $t0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r8;
    // 0x80227C98: jal         0x8004F820
    // 0x80227C9C: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x80227C9C: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    after_0:
    // 0x80227CA0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227CA4: bgez        $v0, L_80227CD4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227CA8: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_80227CD4;
    }
    // 0x80227CA8: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x80227CAC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227CB0: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227CB4: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227CB8: jal         0x8004F820
    // 0x80227CBC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x80227CBC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x80227CC0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227CC4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227CC8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80227CCC: j           L_80227CF0
    // 0x80227CD0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_80227CF0;
    // 0x80227CD0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_80227CD4:
    // 0x80227CD4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80227CD8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x80227CDC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x80227CE0: jal         0x8004F820
    // 0x80227CE4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x80227CE4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x80227CE8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227CEC: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_80227CF0:
    // 0x80227CF0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227CF4: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x80227CF8: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x80227CFC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80227D00: jal         0x800610AC
    // 0x80227D04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_3;
    // 0x80227D04: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x80227D08: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80227D0C: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80227D10: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80227D14: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227D18: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227D1C: jr          $ra
    // 0x80227D20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80227D20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023343C_ovl27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023343C: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80233440: bne         $v0, $zero, L_80233470
    if (ctx->r2 != 0) {
        // 0x80233444: addiu       $v0, $zero, -0x12C
        ctx->r2 = ADD32(0, -0X12C);
            goto L_80233470;
    }
    // 0x80233444: addiu       $v0, $zero, -0x12C
    ctx->r2 = ADD32(0, -0X12C);
    // 0x80233448: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8023344C: sh          $v0, 0x4DE8($at)
    MEM_H(0X4DE8, ctx->r1) = ctx->r2;
    // 0x80233450: lui         $v0, 0xFED4
    ctx->r2 = S32(0XFED4 << 16);
    // 0x80233454: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80233458: sw          $v0, 0x4DD8($at)
    MEM_W(0X4DD8, ctx->r1) = ctx->r2;
    // 0x8023345C: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80233460: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80233464: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80233468: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x8023346C: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80233470:
    // 0x80233470: jr          $ra
    // 0x80233474: nop

    TRACE_RETURN()
    return;
    // 0x80233474: nop

;}
