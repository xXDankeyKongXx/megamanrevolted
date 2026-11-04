#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80225600_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225600: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80225604: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80225608: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022560C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80225610: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225614: lbu         $v1, 0x5($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X5);
    // 0x80225618: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022561C: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80225620: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80225624: beq         $v0, $zero, L_802257B4
    if (ctx->r2 == 0) {
        // 0x80225628: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_802257B4;
    }
    // 0x80225628: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022562C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80225630: addu        $at, $at, $v0
    gpr jr_addend_80225638 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80225634: lw          $v0, -0xCC0($at)
    ctx->r2 = ADD32(ctx->r1, -0XCC0);
    // 0x80225638: jr          $v0
    // 0x8022563C: nop

    switch (jr_addend_80225638 >> 2) {
        case 0: goto L_80225640; break;
        case 1: goto L_802256B4; break;
        case 2: goto L_802256E8; break;
        case 3: goto L_80225710; break;
        case 4: goto L_80225764; break;
        default: switch_error(__func__, 0x80225638, 0x8023F340);
    }
    // 0x8022563C: nop

L_80225640:
    // 0x80225640: addiu       $a0, $zero, 0x7E
    ctx->r4 = ADD32(0, 0X7E);
    // 0x80225644: jal         0x8004CB2C
    // 0x80225648: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80225648: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x8022564C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225650: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80225654: jal         0x8005F6B4
    // 0x80225658: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_1;
    // 0x80225658: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022565C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80225660: addiu       $a0, $a0, -0x3BD4
    ctx->r4 = ADD32(ctx->r4, -0X3BD4);
    // 0x80225664: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80225668: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022566C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225670: addiu       $v0, $v0, -0x3B20
    ctx->r2 = ADD32(ctx->r2, -0X3B20);
    // 0x80225674: sw          $zero, 0xC($s1)
    MEM_W(0XC, ctx->r17) = 0;
    // 0x80225678: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x8022567C: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80225680: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225684: addiu       $v0, $v0, -0x37E4
    ctx->r2 = ADD32(ctx->r2, -0X37E4);
    // 0x80225688: jal         0x8005FA7C
    // 0x8022568C: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x8022568C: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    after_2:
    // 0x80225690: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80225694: lw          $v1, 0x24($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X24);
    // 0x80225698: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022569C: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x802256A0: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802256A4: jal         0x80225D80
    // 0x802256A8: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    func_80225D80_ovl3(rdram, ctx);
        goto after_3;
    // 0x802256A8: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    after_3:
    // 0x802256AC: j           L_80225754
    // 0x802256B0: nop

        goto L_80225754;
    // 0x802256B0: nop

L_802256B4:
    // 0x802256B4: jal         0x8006FF84
    // 0x802256B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_4;
    // 0x802256B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802256BC: beq         $v0, $zero, L_802257B4
    if (ctx->r2 == 0) {
        // 0x802256C0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802257B4;
    }
    // 0x802256C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802256C4: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802256C8: lbu         $a0, 0xBD($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XBD);
    // 0x802256CC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802256D0: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802256D4: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x802256D8: ori         $a0, $a0, 0x10
    ctx->r4 = ctx->r4 | 0X10;
    // 0x802256DC: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x802256E0: j           L_80225754
    // 0x802256E4: sb          $a0, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r4;
        goto L_80225754;
    // 0x802256E4: sb          $a0, 0xBD($s0)
    MEM_B(0XBD, ctx->r16) = ctx->r4;
L_802256E8:
    // 0x802256E8: jal         0x80036E48
    // 0x802256EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_5;
    // 0x802256EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_5:
    // 0x802256F0: addiu       $a0, $zero, 0xB
    ctx->r4 = ADD32(0, 0XB);
    // 0x802256F4: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x802256F8: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802256FC: sb          $v0, -0x35A5($at)
    MEM_B(-0X35A5, ctx->r1) = ctx->r2;
    // 0x80225700: jal         0x80036340
    // 0x80225704: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80036340_11740(rdram, ctx);
        goto after_6;
    // 0x80225704: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_6:
    // 0x80225708: j           L_80225754
    // 0x8022570C: nop

        goto L_80225754;
    // 0x8022570C: nop

L_80225710:
    // 0x80225710: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80225714: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80225718: bne         $v0, $zero, L_802257B4
    if (ctx->r2 != 0) {
        // 0x8022571C: lui         $a0, 0x10C
        ctx->r4 = S32(0X10C << 16);
            goto L_802257B4;
    }
    // 0x8022571C: lui         $a0, 0x10C
    ctx->r4 = S32(0X10C << 16);
    // 0x80225720: jal         0x80036B1C
    // 0x80225724: ori         $a0, $a0, 0x3100
    ctx->r4 = ctx->r4 | 0X3100;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_7;
    // 0x80225724: ori         $a0, $a0, 0x3100
    ctx->r4 = ctx->r4 | 0X3100;
    after_7:
    // 0x80225728: lw          $a0, 0x24($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X24);
    // 0x8022572C: jal         0x8004F488
    // 0x80225730: nop

    func_8004F488_2A888(rdram, ctx);
        goto after_8;
    // 0x80225730: nop

    after_8:
    // 0x80225734: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80225738: addiu       $s0, $s0, -0x3BD4
    ctx->r16 = ADD32(ctx->r16, -0X3BD4);
    // 0x8022573C: jal         0x8005FA7C
    // 0x80225740: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_9;
    // 0x80225740: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80225744: jal         0x8005FA7C
    // 0x80225748: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_10;
    // 0x80225748: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_10:
    // 0x8022574C: jal         0x8005FA7C
    // 0x80225750: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_11;
    // 0x80225750: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_11:
L_80225754:
    // 0x80225754: lbu         $v0, 0x5($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X5);
    // 0x80225758: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022575C: j           L_802257B4
    // 0x80225760: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
        goto L_802257B4;
    // 0x80225760: sb          $v0, 0x5($s1)
    MEM_B(0X5, ctx->r17) = ctx->r2;
L_80225764:
    // 0x80225764: jal         0x80036B7C
    // 0x80225768: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_12;
    // 0x80225768: nop

    after_12:
    // 0x8022576C: beq         $v0, $zero, L_802257B4
    if (ctx->r2 == 0) {
        // 0x80225770: nop
    
            goto L_802257B4;
    }
    // 0x80225770: nop

    // 0x80225774: jal         0x80060170
    // 0x80225778: nop

    func_80060170_3B570(rdram, ctx);
        goto after_13;
    // 0x80225778: nop

    after_13:
    // 0x8022577C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225780: addiu       $v0, $v0, -0x3AD0
    ctx->r2 = ADD32(ctx->r2, -0X3AD0);
    // 0x80225784: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80225788: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x8022578C: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x80225790: lbu         $a0, 0x4($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X4);
    // 0x80225794: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80225798: addiu       $v0, $v0, -0x37D4
    ctx->r2 = ADD32(ctx->r2, -0X37D4);
    // 0x8022579C: sw          $v0, 0xA4($s1)
    MEM_W(0XA4, ctx->r17) = ctx->r2;
    // 0x802257A0: sb          $zero, 0x5($s1)
    MEM_B(0X5, ctx->r17) = 0;
    // 0x802257A4: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x802257A8: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x802257AC: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x802257B0: sb          $a0, 0x4($s1)
    MEM_B(0X4, ctx->r17) = ctx->r4;
L_802257B4:
    // 0x802257B4: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802257B8: lbu         $a0, -0x377C($a0)
    ctx->r4 = MEM_BU(ctx->r4, -0X377C);
    // 0x802257BC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x802257C0: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x802257C4: jal         0x80225E1C
    // 0x802257C8: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    func_80225E1C_ovl3(rdram, ctx);
        goto after_14;
    // 0x802257C8: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    after_14:
    // 0x802257CC: jal         0x8006072C
    // 0x802257D0: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_15;
    // 0x802257D0: nop

    after_15:
    // 0x802257D4: beq         $v0, $zero, L_802257E8
    if (ctx->r2 == 0) {
        // 0x802257D8: nop
    
            goto L_802257E8;
    }
    // 0x802257D8: nop

    // 0x802257DC: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802257E0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802257E4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
L_802257E8:
    // 0x802257E8: jal         0x8005FB90
    // 0x802257EC: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_16;
    // 0x802257EC: nop

    after_16:
    // 0x802257F0: jal         0x80060018
    // 0x802257F4: nop

    func_80060018_3B418(rdram, ctx);
        goto after_17;
    // 0x802257F4: nop

    after_17:
    // 0x802257F8: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802257FC: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80225800: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225804: jr          $ra
    // 0x80225808: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80225808: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022CCB4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CCB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022CCB8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022CCBC: lbu         $v0, 0x34B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X34B);
    // 0x8022CCC0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022CCC4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022CCC8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022CCCC: lw          $v0, -0x20F0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X20F0);
    // 0x8022CCD0: jalr        $v0
    // 0x8022CCD4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022CCD4: nop

    after_0:
    // 0x8022CCD8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022CCDC: jr          $ra
    // 0x8022CCE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022CCE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233270_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233270: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80233274: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80233278: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023327C: lui         $t3, 0x3D48
    ctx->r11 = S32(0X3D48 << 16);
    // 0x80233280: ori         $t3, $t3, 0x2E
    ctx->r11 = ctx->r11 | 0X2E;
    // 0x80233284: lui         $t2, 0x2E40
    ctx->r10 = S32(0X2E40 << 16);
    // 0x80233288: ori         $t2, $t2, 0xE040
    ctx->r10 = ctx->r10 | 0XE040;
    // 0x8023328C: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80233290: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80233294: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80233298: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023329C: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x802332A0: lhu         $a3, 0x1C($s0)
    ctx->r7 = MEM_HU(ctx->r16, 0X1C);
    // 0x802332A4: lhu         $t0, 0x20($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X20);
    // 0x802332A8: lhu         $t1, 0x24($s0)
    ctx->r9 = MEM_HU(ctx->r16, 0X24);
    // 0x802332AC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x802332B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802332B4: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802332B8: addiu       $v0, $zero, 0x18
    ctx->r2 = ADD32(0, 0X18);
    // 0x802332BC: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
    // 0x802332C0: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x802332C4: sb          $v0, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r2;
    // 0x802332C8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802332CC: sb          $v0, 0x97($s0)
    MEM_B(0X97, ctx->r16) = ctx->r2;
    // 0x802332D0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x802332D4: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x802332D8: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x802332DC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x802332E0: sb          $zero, 0xE($s0)
    MEM_B(0XE, ctx->r16) = 0;
    // 0x802332E4: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x802332E8: sw          $zero, 0xD0($s0)
    MEM_W(0XD0, ctx->r16) = 0;
    // 0x802332EC: sw          $t3, 0x88($s0)
    MEM_W(0X88, ctx->r16) = ctx->r11;
    // 0x802332F0: sw          $t2, 0x8C($s0)
    MEM_W(0X8C, ctx->r16) = ctx->r10;
    // 0x802332F4: sh          $v0, 0x98($s0)
    MEM_H(0X98, ctx->r16) = ctx->r2;
    // 0x802332F8: ori         $v1, $v1, 0x2
    ctx->r3 = ctx->r3 | 0X2;
    // 0x802332FC: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    // 0x80233300: sh          $a3, 0x14($s0)
    MEM_H(0X14, ctx->r16) = ctx->r7;
    // 0x80233304: sh          $a3, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r7;
    // 0x80233308: sh          $t0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r8;
    // 0x8023330C: sh          $t0, 0x92($s0)
    MEM_H(0X92, ctx->r16) = ctx->r8;
    // 0x80233310: sh          $t1, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r9;
    // 0x80233314: jal         0x8009A3B4
    // 0x80233318: sh          $t1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r9;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80233318: sh          $t1, 0x94($s0)
    MEM_H(0X94, ctx->r16) = ctx->r9;
    after_0:
    // 0x8023331C: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80233320: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80233324: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80233328: jal         0x8009A3B4
    // 0x8023332C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023332C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80233330: addiu       $a0, $zero, 0xF0
    ctx->r4 = ADD32(0, 0XF0);
    // 0x80233334: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80233338: jal         0x8002A33C
    // 0x8023333C: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8023333C: sw          $zero, 0x9C($s0)
    MEM_W(0X9C, ctx->r16) = 0;
    after_2:
    // 0x80233340: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80233344: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80233348: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023334C: jr          $ra
    // 0x80233350: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80233350: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022C18C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C18C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C190: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022C194: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022C198: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C19C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022C1A0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022C1A4: lw          $v0, -0x21B8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X21B8);
    // 0x8022C1A8: jalr        $v0
    // 0x8022C1AC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022C1AC: nop

    after_0:
    // 0x8022C1B0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022C1B4: jr          $ra
    // 0x8022C1B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C1B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233240_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233240: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233244: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233248: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023324C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80233250: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80233254: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80233258: lw          $v0, -0x1DA8($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1DA8);
    // 0x8023325C: jalr        $v0
    // 0x80233260: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80233260: nop

    after_0:
    // 0x80233264: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233268: jr          $ra
    // 0x8023326C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023326C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022632C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022632C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226330: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80226334: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226338: addiu       $v1, $v0, -0x1E
    ctx->r3 = ADD32(ctx->r2, -0X1E);
    // 0x8022633C: sltiu       $v0, $v1, 0x22
    ctx->r2 = ctx->r3 < 0X22 ? 1 : 0;
    // 0x80226340: beq         $v0, $zero, L_80226398
    if (ctx->r2 == 0) {
        // 0x80226344: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80226398;
    }
    // 0x80226344: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226348: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022634C: addu        $at, $at, $v0
    gpr jr_addend_80226354 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226350: lw          $v0, -0xC90($at)
    ctx->r2 = ADD32(ctx->r1, -0XC90);
    // 0x80226354: jr          $v0
    // 0x80226358: nop

    switch (jr_addend_80226354 >> 2) {
        case 0: goto L_8022635C; break;
        case 1: goto L_80226398; break;
        case 2: goto L_80226398; break;
        case 3: goto L_80226398; break;
        case 4: goto L_80226398; break;
        case 5: goto L_80226384; break;
        case 6: goto L_80226398; break;
        case 7: goto L_80226398; break;
        case 8: goto L_80226398; break;
        case 9: goto L_80226398; break;
        case 10: goto L_80226398; break;
        case 11: goto L_80226398; break;
        case 12: goto L_80226398; break;
        case 13: goto L_80226398; break;
        case 14: goto L_80226398; break;
        case 15: goto L_80226398; break;
        case 16: goto L_80226398; break;
        case 17: goto L_80226398; break;
        case 18: goto L_80226398; break;
        case 19: goto L_80226398; break;
        case 20: goto L_80226398; break;
        case 21: goto L_80226398; break;
        case 22: goto L_80226398; break;
        case 23: goto L_80226398; break;
        case 24: goto L_80226398; break;
        case 25: goto L_80226394; break;
        case 26: goto L_80226398; break;
        case 27: goto L_80226398; break;
        case 28: goto L_80226384; break;
        case 29: goto L_80226394; break;
        case 30: goto L_80226398; break;
        case 31: goto L_80226398; break;
        case 32: goto L_80226384; break;
        case 33: goto L_80226394; break;
        default: switch_error(__func__, 0x80226354, 0x8023F370);
    }
    // 0x80226358: nop

L_8022635C:
    // 0x8022635C: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80226360: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x80226364: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80226368: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x8022636C: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
    // 0x80226370: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x80226374: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x80226378: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022637C: j           L_80226398
    // 0x80226380: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
        goto L_80226398;
    // 0x80226380: sb          $v0, 0x6($a0)
    MEM_B(0X6, ctx->r4) = ctx->r2;
L_80226384:
    // 0x80226384: lbu         $v0, 0x7($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X7);
    // 0x80226388: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022638C: j           L_80226398
    // 0x80226390: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
        goto L_80226398;
    // 0x80226390: sb          $v0, 0x7($a0)
    MEM_B(0X7, ctx->r4) = ctx->r2;
L_80226394:
    // 0x80226394: sb          $zero, 0x7($a0)
    MEM_B(0X7, ctx->r4) = 0;
L_80226398:
    // 0x80226398: lbu         $v0, 0x6($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X6);
    // 0x8022639C: beq         $v0, $zero, L_802263CC
    if (ctx->r2 == 0) {
        // 0x802263A0: nop
    
            goto L_802263CC;
    }
    // 0x802263A0: nop

    // 0x802263A4: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802263A8: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x802263AC: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802263B0: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802263B4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802263B8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802263BC: lh          $v0, -0x31B0($at)
    ctx->r2 = MEM_H(ctx->r1, -0X31B0);
    // 0x802263C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802263C4: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802263C8: sw          $v0, 0xA74($at)
    MEM_W(0XA74, ctx->r1) = ctx->r2;
L_802263CC:
    // 0x802263CC: lbu         $v0, 0x7($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X7);
    // 0x802263D0: beq         $v0, $zero, L_802263E8
    if (ctx->r2 == 0) {
        // 0x802263D4: addiu       $a0, $zero, 0x80
        ctx->r4 = ADD32(0, 0X80);
            goto L_802263E8;
    }
    // 0x802263D4: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x802263D8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x802263DC: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x802263E0: jal         0x80226A14
    // 0x802263E4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_80226A14_ovl3(rdram, ctx);
        goto after_0;
    // 0x802263E4: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_0:
L_802263E8:
    // 0x802263E8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802263EC: jr          $ra
    // 0x802263F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802263F0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802264E8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802264E8: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802264EC: bne         $v0, $zero, L_80226504
    if (ctx->r2 != 0) {
        // 0x802264F0: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80226504;
    }
    // 0x802264F0: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x802264F4: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x802264F8: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x802264FC: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80226500: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
L_80226504:
    // 0x80226504: jr          $ra
    // 0x80226508: nop

    TRACE_RETURN()
    return;
    // 0x80226508: nop

;}
RECOMP_FUNC void func_80231288_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231288: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8023128C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80231290: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x80231294: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80231298: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8023129C: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x802312A0: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x802312A4: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x802312A8: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x802312AC: lh          $a1, 0x56($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X56);
    // 0x802312B0: addiu       $a2, $zero, 0x600
    ctx->r6 = ADD32(0, 0X600);
    // 0x802312B4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802312B8: jal         0x8004DC2C
    // 0x802312BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_0;
    // 0x802312BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x802312C0: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x802312C4: jal         0x8004DD04
    // 0x802312C8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x802312C8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x802312CC: jal         0x8004EFE4
    // 0x802312D0: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_2;
    // 0x802312D0: nop

    after_2:
    // 0x802312D4: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x802312D8: beq         $s2, $zero, L_802313A0
    if (ctx->r18 == 0) {
        // 0x802312DC: addiu       $a2, $zero, 0xC80
        ctx->r6 = ADD32(0, 0XC80);
            goto L_802313A0;
    }
    // 0x802312DC: addiu       $a2, $zero, 0xC80
    ctx->r6 = ADD32(0, 0XC80);
    // 0x802312E0: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x802312E4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802312E8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802312EC: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x802312F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802312F4: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    // 0x802312F8: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
    // 0x802312FC: sb          $zero, 0x4($s2)
    MEM_B(0X4, ctx->r18) = 0;
    // 0x80231300: sb          $v0, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r2;
    // 0x80231304: lh          $a1, 0x56($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X56);
    // 0x80231308: addiu       $a3, $zero, 0x1900
    ctx->r7 = ADD32(0, 0X1900);
    // 0x8023130C: addiu       $v0, $zero, 0x480
    ctx->r2 = ADD32(0, 0X480);
    // 0x80231310: jal         0x8004DC2C
    // 0x80231314: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_3;
    // 0x80231314: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x80231318: addiu       $s0, $s2, 0x1C
    ctx->r16 = ADD32(ctx->r18, 0X1C);
    // 0x8023131C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231320: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80231324: jal         0x8009A3B4
    // 0x80231328: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80231328: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_4:
    // 0x8023132C: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x80231330: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    // 0x80231334: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231338: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x8023133C: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x80231340: lw          $v1, 0x20($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X20);
    // 0x80231344: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80231348: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023134C: sw          $v0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r2;
    // 0x80231350: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x80231354: lw          $v1, 0x24($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X24);
    // 0x80231358: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x8023135C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80231360: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231364: jal         0x8004DD04
    // 0x80231368: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_5;
    // 0x80231368: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    after_5:
    // 0x8023136C: lhu         $v0, 0x28($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X28);
    // 0x80231370: addiu       $v1, $zero, 0x6000
    ctx->r3 = ADD32(0, 0X6000);
    // 0x80231374: sh          $v1, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r3;
    // 0x80231378: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023137C: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x80231380: lhu         $v0, 0x2C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2C);
    // 0x80231384: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80231388: sh          $zero, 0x4A($s2)
    MEM_H(0X4A, ctx->r18) = 0;
    // 0x8023138C: sh          $zero, 0x50($s2)
    MEM_H(0X50, ctx->r18) = 0;
    // 0x80231390: sh          $zero, 0x4E($s2)
    MEM_H(0X4E, ctx->r18) = 0;
    // 0x80231394: sh          $zero, 0x4C($s2)
    MEM_H(0X4C, ctx->r18) = 0;
    // 0x80231398: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023139C: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
L_802313A0:
    // 0x802313A0: jal         0x8004EFE4
    // 0x802313A4: nop

    func_8004EFE4_2A3E4(rdram, ctx);
        goto after_6;
    // 0x802313A4: nop

    after_6:
    // 0x802313A8: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x802313AC: beq         $s2, $zero, L_80231474
    if (ctx->r18 == 0) {
        // 0x802313B0: addiu       $a2, $zero, 0xC80
        ctx->r6 = ADD32(0, 0XC80);
            goto L_80231474;
    }
    // 0x802313B0: addiu       $a2, $zero, 0xC80
    ctx->r6 = ADD32(0, 0XC80);
    // 0x802313B4: addiu       $s1, $sp, 0x30
    ctx->r17 = ADD32(ctx->r29, 0X30);
    // 0x802313B8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802313BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802313C0: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x802313C4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802313C8: sb          $v0, 0x2($s2)
    MEM_B(0X2, ctx->r18) = ctx->r2;
    // 0x802313CC: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
    // 0x802313D0: sb          $zero, 0x4($s2)
    MEM_B(0X4, ctx->r18) = 0;
    // 0x802313D4: sb          $v0, 0xF($s2)
    MEM_B(0XF, ctx->r18) = ctx->r2;
    // 0x802313D8: lh          $a1, 0x56($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X56);
    // 0x802313DC: addiu       $a3, $zero, 0x1900
    ctx->r7 = ADD32(0, 0X1900);
    // 0x802313E0: addiu       $v0, $zero, -0x480
    ctx->r2 = ADD32(0, -0X480);
    // 0x802313E4: jal         0x8004DC2C
    // 0x802313E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_8004DC2C_2902C(rdram, ctx);
        goto after_7;
    // 0x802313E8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_7:
    // 0x802313EC: addiu       $s0, $s2, 0x1C
    ctx->r16 = ADD32(ctx->r18, 0X1C);
    // 0x802313F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802313F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802313F8: jal         0x8009A3B4
    // 0x802313FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x802313FC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_8:
    // 0x80231400: lw          $v0, 0x1C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X1C);
    // 0x80231404: lw          $v1, 0x1C($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X1C);
    // 0x80231408: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023140C: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x80231410: lw          $v0, 0x20($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X20);
    // 0x80231414: lw          $v1, 0x20($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X20);
    // 0x80231418: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023141C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231420: sw          $v0, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r2;
    // 0x80231424: lw          $v0, 0x24($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X24);
    // 0x80231428: lw          $v1, 0x24($s3)
    ctx->r3 = MEM_W(ctx->r19, 0X24);
    // 0x8023142C: addiu       $s0, $s2, 0x14
    ctx->r16 = ADD32(ctx->r18, 0X14);
    // 0x80231430: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x80231434: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80231438: jal         0x8004DD04
    // 0x8023143C: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    func_8004DD04_29104(rdram, ctx);
        goto after_9;
    // 0x8023143C: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    after_9:
    // 0x80231440: lhu         $v0, 0x28($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X28);
    // 0x80231444: addiu       $v1, $zero, 0x6000
    ctx->r3 = ADD32(0, 0X6000);
    // 0x80231448: sh          $v1, 0x46($s2)
    MEM_H(0X46, ctx->r18) = ctx->r3;
    // 0x8023144C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80231450: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x80231454: lhu         $v0, 0x2C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X2C);
    // 0x80231458: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8023145C: sh          $zero, 0x4A($s2)
    MEM_H(0X4A, ctx->r18) = 0;
    // 0x80231460: sh          $zero, 0x50($s2)
    MEM_H(0X50, ctx->r18) = 0;
    // 0x80231464: sh          $zero, 0x4E($s2)
    MEM_H(0X4E, ctx->r18) = 0;
    // 0x80231468: sh          $zero, 0x4C($s2)
    MEM_H(0X4C, ctx->r18) = 0;
    // 0x8023146C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80231470: sh          $v0, 0x48($s2)
    MEM_H(0X48, ctx->r18) = ctx->r2;
L_80231474:
    // 0x80231474: beq         $s1, $zero, L_80231484
    if (ctx->r17 == 0) {
        // 0x80231478: addiu       $a0, $zero, 0xD0
        ctx->r4 = ADD32(0, 0XD0);
            goto L_80231484;
    }
    // 0x80231478: addiu       $a0, $zero, 0xD0
    ctx->r4 = ADD32(0, 0XD0);
    // 0x8023147C: jal         0x8002A33C
    // 0x80231480: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x80231480: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
L_80231484:
    // 0x80231484: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x80231488: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8023148C: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x80231490: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80231494: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80231498: jr          $ra
    // 0x8023149C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8023149C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8022C150_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C150: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022C154: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C158: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022C15C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022C160: lb          $v0, 0xA7($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA7);
    // 0x8022C164: bgez        $v0, L_8022C17C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C168: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022C17C;
    }
    // 0x8022C168: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022C16C: lbu         $a0, 0x2($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X2);
    // 0x8022C170: jal         0x8022DC18
    // 0x8022C174: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    func_8022DC18_ovl3(rdram, ctx);
        goto after_0;
    // 0x8022C174: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022C178: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
L_8022C17C:
    // 0x8022C17C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022C180: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022C184: jr          $ra
    // 0x8022C188: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022C188: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229EE8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229EE8: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80229EEC: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x80229EF0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80229EF4: sw          $ra, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r31;
    // 0x80229EF8: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x80229EFC: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x80229F00: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x80229F04: lbu         $a1, 0xA($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XA);
    // 0x80229F08: lui         $s3, 0x8020
    ctx->r19 = S32(0X8020 << 16);
    // 0x80229F0C: addiu       $s3, $s3, 0x49B0
    ctx->r19 = ADD32(ctx->r19, 0X49B0);
    // 0x80229F10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229F14: andi        $v1, $a1, 0xFF
    ctx->r3 = ctx->r5 & 0XFF;
    // 0x80229F18: beq         $v1, $v0, L_8022A024
    if (ctx->r3 == ctx->r2) {
        // 0x80229F1C: addiu       $s2, $s1, 0x380
        ctx->r18 = ADD32(ctx->r17, 0X380);
            goto L_8022A024;
    }
    // 0x80229F1C: addiu       $s2, $s1, 0x380
    ctx->r18 = ADD32(ctx->r17, 0X380);
    // 0x80229F20: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80229F24: beql        $v0, $zero, L_80229F3C
    if (ctx->r2 == 0) {
        // 0x80229F28: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229F3C;
    }
    goto skip_0;
    // 0x80229F28: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80229F2C: beq         $v1, $zero, L_80229F4C
    if (ctx->r3 == 0) {
        // 0x80229F30: nop
    
            goto L_80229F4C;
    }
    // 0x80229F30: nop

    // 0x80229F34: j           L_8022A340
    // 0x80229F38: nop

        goto L_8022A340;
    // 0x80229F38: nop

L_80229F3C:
    // 0x80229F3C: beq         $v1, $v0, L_8022A188
    if (ctx->r3 == ctx->r2) {
        // 0x80229F40: addiu       $s0, $s1, 0x14
        ctx->r16 = ADD32(ctx->r17, 0X14);
            goto L_8022A188;
    }
    // 0x80229F40: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x80229F44: j           L_8022A340
    // 0x80229F48: nop

        goto L_8022A340;
    // 0x80229F48: nop

L_80229F4C:
    // 0x80229F4C: lhu         $v0, 0x380($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X380);
    // 0x80229F50: lw          $v1, 0x460($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X460);
    // 0x80229F54: ori         $v0, $v0, 0x200
    ctx->r2 = ctx->r2 | 0X200;
    // 0x80229F58: sh          $v0, 0x380($s1)
    MEM_H(0X380, ctx->r17) = ctx->r2;
    // 0x80229F5C: lhu         $a0, 0x380($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X380);
    // 0x80229F60: sh          $zero, 0x384($s1)
    MEM_H(0X384, ctx->r17) = 0;
    // 0x80229F64: sh          $zero, 0x386($s1)
    MEM_H(0X386, ctx->r17) = 0;
    // 0x80229F68: addiu       $v0, $a1, 0x1
    ctx->r2 = ADD32(ctx->r5, 0X1);
    // 0x80229F6C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80229F70: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229F74: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x80229F78: addiu       $v0, $zero, 0x180
    ctx->r2 = ADD32(0, 0X180);
    // 0x80229F7C: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80229F80: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80229F84: sh          $v0, 0x4C($s1)
    MEM_H(0X4C, ctx->r17) = ctx->r2;
    // 0x80229F88: addiu       $v0, $zero, 0x45F
    ctx->r2 = ADD32(0, 0X45F);
    // 0x80229F8C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80229F90: sw          $v1, 0x460($s1)
    MEM_W(0X460, ctx->r17) = ctx->r3;
    // 0x80229F94: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80229F98: addiu       $v1, $v1, -0x28F4
    ctx->r3 = ADD32(ctx->r3, -0X28F4);
    // 0x80229F9C: sh          $v0, 0x45A($s1)
    MEM_H(0X45A, ctx->r17) = ctx->r2;
    // 0x80229FA0: andi        $a0, $a0, 0xFBFF
    ctx->r4 = ctx->r4 & 0XFBFF;
    // 0x80229FA4: sh          $a0, 0x380($s1)
    MEM_H(0X380, ctx->r17) = ctx->r4;
    // 0x80229FA8: lhu         $v0, 0x0($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X0);
    // 0x80229FAC: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x80229FB0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80229FB4: lhu         $v0, -0x28F2($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X28F2);
    // 0x80229FB8: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x80229FBC: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80229FC0: lhu         $v0, -0x28F0($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X28F0);
    // 0x80229FC4: sh          $v0, 0x18($s1)
    MEM_H(0X18, ctx->r17) = ctx->r2;
    // 0x80229FC8: lh          $v0, 0x0($v1)
    ctx->r2 = MEM_H(ctx->r3, 0X0);
    // 0x80229FCC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229FD0: sw          $v0, 0x1C($s1)
    MEM_W(0X1C, ctx->r17) = ctx->r2;
    // 0x80229FD4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80229FD8: lh          $v0, -0x28F2($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X28F2);
    // 0x80229FDC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229FE0: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x80229FE4: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80229FE8: lh          $v0, -0x28F0($v0)
    ctx->r2 = MEM_H(ctx->r2, -0X28F0);
    // 0x80229FEC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229FF0: sw          $v0, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r2;
    // 0x80229FF4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80229FF8: lhu         $v1, -0x28EE($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X28EE);
    // 0x80229FFC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022A000: sb          $v0, 0xFB($s1)
    MEM_B(0XFB, ctx->r17) = ctx->r2;
    // 0x8022A004: sb          $v0, 0xFF($s1)
    MEM_B(0XFF, ctx->r17) = ctx->r2;
    // 0x8022A008: sb          $v0, 0x107($s1)
    MEM_B(0X107, ctx->r17) = ctx->r2;
    // 0x8022A00C: sb          $v0, 0x10B($s1)
    MEM_B(0X10B, ctx->r17) = ctx->r2;
    // 0x8022A010: sb          $v0, 0x10F($s1)
    MEM_B(0X10F, ctx->r17) = ctx->r2;
    // 0x8022A014: sb          $v0, 0x113($s1)
    MEM_B(0X113, ctx->r17) = ctx->r2;
    // 0x8022A018: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    // 0x8022A01C: sb          $v0, 0x117($s1)
    MEM_B(0X117, ctx->r17) = ctx->r2;
    // 0x8022A020: sb          $v0, 0x11B($s1)
    MEM_B(0X11B, ctx->r17) = ctx->r2;
L_8022A024:
    // 0x8022A024: lui         $a1, 0x801C
    ctx->r5 = S32(0X801C << 16);
    // 0x8022A028: lb          $a1, -0x3BC7($a1)
    ctx->r5 = MEM_B(ctx->r5, -0X3BC7);
    // 0x8022A02C: lh          $v1, 0x4($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X4);
    // 0x8022A030: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8022A034: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022A038: addiu       $v0, $v0, -0x292C
    ctx->r2 = ADD32(ctx->r2, -0X292C);
    // 0x8022A03C: sll         $a1, $a1, 5
    ctx->r5 = S32(ctx->r5 << 5);
    // 0x8022A040: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x8022A044: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A048: addu        $a1, $a1, $v1
    ctx->r5 = ADD32(ctx->r5, ctx->r3);
    // 0x8022A04C: sw          $a1, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r5;
    // 0x8022A050: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022A054: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A058: jal         0x8004F820
    // 0x8022A05C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022A05C: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_0:
    // 0x8022A060: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8022A064: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A068: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x8022A06C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A070: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A074: jal         0x8004DF38
    // 0x8022A078: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    func_8004DF38_29338(rdram, ctx);
        goto after_1;
    // 0x8022A078: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    after_1:
    // 0x8022A07C: lui         $v1, 0x7F
    ctx->r3 = S32(0X7F << 16);
    // 0x8022A080: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8022A084: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8022A088: bne         $v1, $zero, L_8022A0A4
    if (ctx->r3 != 0) {
        // 0x8022A08C: nop
    
            goto L_8022A0A4;
    }
    // 0x8022A08C: nop

    // 0x8022A090: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x8022A094: beq         $v0, $zero, L_8022A0BC
    if (ctx->r2 == 0) {
        // 0x8022A098: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022A0BC;
    }
    // 0x8022A098: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A09C: j           L_8022A0B8
    // 0x8022A0A0: addiu       $v0, $v1, -0x40
    ctx->r2 = ADD32(ctx->r3, -0X40);
        goto L_8022A0B8;
    // 0x8022A0A0: addiu       $v0, $v1, -0x40
    ctx->r2 = ADD32(ctx->r3, -0X40);
L_8022A0A4:
    // 0x8022A0A4: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x8022A0A8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A0AC: slti        $v0, $v0, 0x300
    ctx->r2 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x8022A0B0: beq         $v0, $zero, L_8022A0BC
    if (ctx->r2 == 0) {
        // 0x8022A0B4: addiu       $v0, $v1, 0x20
        ctx->r2 = ADD32(ctx->r3, 0X20);
            goto L_8022A0BC;
    }
    // 0x8022A0B4: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
L_8022A0B8:
    // 0x8022A0B8: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_8022A0BC:
    // 0x8022A0BC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A0C0: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x8022A0C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A0C8: jal         0x8004DA90
    // 0x8022A0CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022A0CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022A0D0: lh          $v1, 0x14($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X14);
    // 0x8022A0D4: lw          $a0, 0xD4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0XD4);
    // 0x8022A0D8: lh          $v0, 0x18($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X18);
    // 0x8022A0DC: addiu       $v1, $v1, 0x200
    ctx->r3 = ADD32(ctx->r3, 0X200);
    // 0x8022A0E0: lh          $a1, 0x0($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X0);
    // 0x8022A0E4: lh          $a0, 0x4($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X4);
    // 0x8022A0E8: addiu       $v0, $v0, 0x200
    ctx->r2 = ADD32(ctx->r2, 0X200);
    // 0x8022A0EC: subu        $a1, $v1, $a1
    ctx->r5 = SUB32(ctx->r3, ctx->r5);
    // 0x8022A0F0: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022A0F4: sltiu       $v1, $a1, 0x400
    ctx->r3 = ctx->r5 < 0X400 ? 1 : 0;
    // 0x8022A0F8: sltiu       $v0, $v0, 0x400
    ctx->r2 = ctx->r2 < 0X400 ? 1 : 0;
    // 0x8022A0FC: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022A100: beq         $v1, $zero, L_8022A148
    if (ctx->r3 == 0) {
        // 0x8022A104: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022A148;
    }
    // 0x8022A104: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022A108: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022A10C: lw          $v1, 0xD4($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XD4);
    // 0x8022A110: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A114: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022A118: lh          $v0, 0xE($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XE);
    // 0x8022A11C: bgez        $v0, L_8022A340
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022A120: addiu       $v0, $v1, 0x8
        ctx->r2 = ADD32(ctx->r3, 0X8);
            goto L_8022A340;
    }
    // 0x8022A120: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x8022A124: sw          $v0, 0xD4($s2)
    MEM_W(0XD4, ctx->r18) = ctx->r2;
    // 0x8022A128: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022A12C: sb          $zero, 0xB($s1)
    MEM_B(0XB, ctx->r17) = 0;
    // 0x8022A130: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A134: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022A138: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022A13C: lhu         $v0, -0x28AC($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X28AC);
    // 0x8022A140: j           L_8022A340
    // 0x8022A144: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
        goto L_8022A340;
    // 0x8022A144: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
L_8022A148:
    // 0x8022A148: lh          $v1, 0x4($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X4);
    // 0x8022A14C: bne         $v1, $v0, L_8022A340
    if (ctx->r3 != ctx->r2) {
        // 0x8022A150: nop
    
            goto L_8022A340;
    }
    // 0x8022A150: nop

    // 0x8022A154: lh          $v0, 0x6($s2)
    ctx->r2 = MEM_H(ctx->r18, 0X6);
    // 0x8022A158: bne         $v0, $zero, L_8022A168
    if (ctx->r2 != 0) {
        // 0x8022A15C: nop
    
            goto L_8022A168;
    }
    // 0x8022A15C: nop

    // 0x8022A160: jal         0x8022B11C
    // 0x8022A164: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8022B11C_ovl3(rdram, ctx);
        goto after_3;
    // 0x8022A164: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_3:
L_8022A168:
    // 0x8022A168: lhu         $v0, 0x6($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X6);
    // 0x8022A16C: lhu         $v1, 0x0($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X0);
    // 0x8022A170: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A174: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022A178: ori         $v1, $v1, 0x400
    ctx->r3 = ctx->r3 | 0X400;
    // 0x8022A17C: sh          $v0, 0x6($s2)
    MEM_H(0X6, ctx->r18) = ctx->r2;
    // 0x8022A180: j           L_8022A340
    // 0x8022A184: sh          $v1, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r3;
        goto L_8022A340;
    // 0x8022A184: sh          $v1, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r3;
L_8022A188:
    // 0x8022A188: lw          $a1, 0x454($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X454);
    // 0x8022A18C: lh          $a2, 0x56($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X56);
    // 0x8022A190: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A194: jal         0x8004F820
    // 0x8022A198: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    func_8004F820_2AC20(rdram, ctx);
        goto after_4;
    // 0x8022A198: addiu       $a3, $zero, 0x40
    ctx->r7 = ADD32(0, 0X40);
    after_4:
    // 0x8022A19C: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8022A1A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022A1A4: lw          $a1, 0x454($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X454);
    // 0x8022A1A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A1AC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022A1B0: jal         0x8004DF38
    // 0x8022A1B4: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    func_8004DF38_29338(rdram, ctx);
        goto after_5;
    // 0x8022A1B4: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
    after_5:
    // 0x8022A1B8: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x8022A1BC: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x8022A1C0: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x8022A1C4: bne         $v1, $zero, L_8022A1E0
    if (ctx->r3 != 0) {
        // 0x8022A1C8: nop
    
            goto L_8022A1E0;
    }
    // 0x8022A1C8: nop

    // 0x8022A1CC: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x8022A1D0: beq         $v0, $zero, L_8022A210
    if (ctx->r2 == 0) {
        // 0x8022A1D4: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022A210;
    }
    // 0x8022A1D4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A1D8: j           L_8022A1F4
    // 0x8022A1DC: addiu       $v0, $v1, -0x40
    ctx->r2 = ADD32(ctx->r3, -0X40);
        goto L_8022A1F4;
    // 0x8022A1DC: addiu       $v0, $v1, -0x40
    ctx->r2 = ADD32(ctx->r3, -0X40);
L_8022A1E0:
    // 0x8022A1E0: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x8022A1E4: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A1E8: slti        $v0, $v0, 0x300
    ctx->r2 = SIGNED(ctx->r2) < 0X300 ? 1 : 0;
    // 0x8022A1EC: beq         $v0, $zero, L_8022A1F8
    if (ctx->r2 == 0) {
        // 0x8022A1F0: addiu       $v0, $v1, 0x20
        ctx->r2 = ADD32(ctx->r3, 0X20);
            goto L_8022A1F8;
    }
    // 0x8022A1F0: addiu       $v0, $v1, 0x20
    ctx->r2 = ADD32(ctx->r3, 0X20);
L_8022A1F4:
    // 0x8022A1F4: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
L_8022A1F8:
    // 0x8022A1F8: lh          $a1, 0x44($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X44);
    // 0x8022A1FC: beq         $a1, $zero, L_8022A210
    if (ctx->r5 == 0) {
        // 0x8022A200: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022A210;
    }
    // 0x8022A200: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022A204: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022A208: jal         0x8004DA90
    // 0x8022A20C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_6;
    // 0x8022A20C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_6:
L_8022A210:
    // 0x8022A210: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022A214: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x8022A218: beq         $v0, $s0, L_8022A304
    if (ctx->r2 == ctx->r16) {
        // 0x8022A21C: nop
    
            goto L_8022A304;
    }
    // 0x8022A21C: nop

    // 0x8022A220: lhu         $v0, 0xDA($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0XDA);
    // 0x8022A224: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x8022A228: lhu         $v1, -0x730C($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X730C);
    // 0x8022A22C: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8022A230: andi        $v1, $v1, 0xF
    ctx->r3 = ctx->r3 & 0XF;
    // 0x8022A234: sltiu       $v1, $v1, 0x8
    ctx->r3 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x8022A238: beq         $v1, $zero, L_8022A248
    if (ctx->r3 == 0) {
        // 0x8022A23C: sh          $v0, 0xDA($s2)
        MEM_H(0XDA, ctx->r18) = ctx->r2;
            goto L_8022A248;
    }
    // 0x8022A23C: sh          $v0, 0xDA($s2)
    MEM_H(0XDA, ctx->r18) = ctx->r2;
    // 0x8022A240: jal         0x8022B38C
    // 0x8022A244: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8022B38C_ovl3(rdram, ctx);
        goto after_7;
    // 0x8022A244: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
L_8022A248:
    // 0x8022A248: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022A24C: beq         $v0, $s0, L_8022A304
    if (ctx->r2 == ctx->r16) {
        // 0x8022A250: nop
    
            goto L_8022A304;
    }
    // 0x8022A250: nop

    // 0x8022A254: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022A258: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022A25C: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022A260: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A264: bne         $v0, $zero, L_8022A304
    if (ctx->r2 != 0) {
        // 0x8022A268: nop
    
            goto L_8022A304;
    }
    // 0x8022A268: nop

    // 0x8022A26C: lbu         $a0, 0xB($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XB);
    // 0x8022A270: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x8022A274: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8022A278: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022A27C: lbu         $v1, -0x28AA($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X28AA);
    // 0x8022A280: lui         $a2, 0x8024
    ctx->r6 = S32(0X8024 << 16);
    // 0x8022A284: addiu       $a2, $a2, -0x28AA
    ctx->r6 = ADD32(ctx->r6, -0X28AA);
    // 0x8022A288: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022A28C: beq         $v1, $v0, L_8022A2D8
    if (ctx->r3 == ctx->r2) {
        // 0x8022A290: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8022A2D8;
    }
    // 0x8022A290: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A294: addu        $v1, $a2, $zero
    ctx->r3 = ADD32(ctx->r6, 0);
    // 0x8022A298: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8022A29C: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_8022A2A0:
    // 0x8022A2A0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A2A4: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022A2A8: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022A2AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022A2B0: addu        $v0, $s1, $v0
    ctx->r2 = ADD32(ctx->r17, ctx->r2);
    // 0x8022A2B4: sb          $zero, 0xFB($v0)
    MEM_B(0XFB, ctx->r2) = 0;
    // 0x8022A2B8: lbu         $a0, 0xB($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0XB);
    // 0x8022A2BC: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x8022A2C0: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
    // 0x8022A2C4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022A2C8: addu        $v0, $v0, $a1
    ctx->r2 = ADD32(ctx->r2, ctx->r5);
    // 0x8022A2CC: lbu         $v0, 0x0($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X0);
    // 0x8022A2D0: bne         $v0, $a2, L_8022A2A0
    if (ctx->r2 != ctx->r6) {
        // 0x8022A2D4: sll         $v0, $a0, 3
        ctx->r2 = S32(ctx->r4 << 3);
            goto L_8022A2A0;
    }
    // 0x8022A2D4: sll         $v0, $a0, 3
    ctx->r2 = S32(ctx->r4 << 3);
L_8022A2D8:
    // 0x8022A2D8: lbu         $v0, 0xB($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB);
    // 0x8022A2DC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A2E0: andi        $v1, $v0, 0xFF
    ctx->r3 = ctx->r2 & 0XFF;
    // 0x8022A2E4: sb          $v0, 0xB($s1)
    MEM_B(0XB, ctx->r17) = ctx->r2;
    // 0x8022A2E8: sltiu       $v0, $v1, 0x4
    ctx->r2 = ctx->r3 < 0X4 ? 1 : 0;
    // 0x8022A2EC: beq         $v0, $zero, L_8022A304
    if (ctx->r2 == 0) {
        // 0x8022A2F0: sll         $v0, $v1, 3
        ctx->r2 = S32(ctx->r3 << 3);
            goto L_8022A304;
    }
    // 0x8022A2F0: sll         $v0, $v1, 3
    ctx->r2 = S32(ctx->r3 << 3);
    // 0x8022A2F4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A2F8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A2FC: lhu         $v0, -0x28AC($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X28AC);
    // 0x8022A300: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
L_8022A304:
    // 0x8022A304: lh          $v0, 0x44($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X44);
    // 0x8022A308: bne         $v0, $zero, L_8022A340
    if (ctx->r2 != 0) {
        // 0x8022A30C: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022A340;
    }
    // 0x8022A30C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022A310: lbu         $v1, 0xB($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XB);
    // 0x8022A314: bne         $v1, $v0, L_8022A340
    if (ctx->r3 != ctx->r2) {
        // 0x8022A318: nop
    
            goto L_8022A340;
    }
    // 0x8022A318: nop

    // 0x8022A31C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x8022A320: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A324: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022A328: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022A32C: lw          $v1, 0xE0($s2)
    ctx->r3 = MEM_W(ctx->r18, 0XE0);
    // 0x8022A330: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022A334: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8022A338: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x8022A33C: sw          $v1, 0xE0($s2)
    MEM_W(0XE0, ctx->r18) = ctx->r3;
L_8022A340:
    // 0x8022A340: lw          $v0, 0x64($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X64);
    // 0x8022A344: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022A348: sw          $v0, 0x64($s2)
    MEM_W(0X64, ctx->r18) = ctx->r2;
    // 0x8022A34C: lw          $ra, 0x48($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X48);
    // 0x8022A350: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8022A354: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8022A358: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8022A35C: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8022A360: jr          $ra
    // 0x8022A364: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8022A364: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80232A5C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232A5C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80232A60: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80232A64: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232A68: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80232A6C: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80232A70: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80232A74: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232A78: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232A7C: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80232A80: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232A84: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80232A88: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80232A8C: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80232A90: lbu         $a1, -0x1F31($a1)
    ctx->r5 = MEM_BU(ctx->r5, -0X1F31);
    // 0x80232A94: addiu       $v0, $s0, 0xC8
    ctx->r2 = ADD32(ctx->r16, 0XC8);
    // 0x80232A98: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80232A9C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80232AA0: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x80232AA4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80232AA8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232AAC: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80232AB0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80232AB4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232AB8: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80232ABC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232AC0: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80232AC4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80232AC8: lbu         $v1, -0x1F2F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X1F2F);
    // 0x80232ACC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80232AD0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80232AD4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80232AD8: lui         $v0, 0x40A
    ctx->r2 = S32(0X40A << 16);
    // 0x80232ADC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80232AE0: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80232AE4: jal         0x80051E18
    // 0x80232AE8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_0;
    // 0x80232AE8: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_0:
    // 0x80232AEC: sw          $zero, 0xC8($s0)
    MEM_W(0XC8, ctx->r16) = 0;
    // 0x80232AF0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80232AF4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80232AF8: jr          $ra
    // 0x80232AFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80232AFC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80228990_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228990: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228994: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228998: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022899C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802289A0: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802289A4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802289A8: bne         $v0, $zero, L_802289DC
    if (ctx->r2 != 0) {
        // 0x802289AC: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_802289DC;
    }
    // 0x802289AC: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x802289B0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802289B4: jal         0x80050294
    // 0x802289B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802289B8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802289BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802289C0: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802289C4: jal         0x80228C84
    // 0x802289C8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_80228C84_ovl3(rdram, ctx);
        goto after_1;
    // 0x802289C8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_1:
    // 0x802289CC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802289D0: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802289D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802289D8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802289DC:
    // 0x802289DC: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x802289E0: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x802289E4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x802289E8: beq         $v1, $v0, L_80228A20
    if (ctx->r3 == ctx->r2) {
        // 0x802289EC: slti        $v0, $v1, 0x29
        ctx->r2 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
            goto L_80228A20;
    }
    // 0x802289EC: slti        $v0, $v1, 0x29
    ctx->r2 = SIGNED(ctx->r3) < 0X29 ? 1 : 0;
    // 0x802289F0: beq         $v0, $zero, L_80228A08
    if (ctx->r2 == 0) {
        // 0x802289F4: addiu       $v0, $zero, 0x19
        ctx->r2 = ADD32(0, 0X19);
            goto L_80228A08;
    }
    // 0x802289F4: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x802289F8: beq         $v1, $v0, L_80228A14
    if (ctx->r3 == ctx->r2) {
        // 0x802289FC: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228A14;
    }
    // 0x802289FC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228A00: j           L_80228A34
    // 0x80228A04: nop

        goto L_80228A34;
    // 0x80228A04: nop

L_80228A08:
    // 0x80228A08: addiu       $v0, $zero, 0xAA
    ctx->r2 = ADD32(0, 0XAA);
    // 0x80228A0C: bne         $v1, $v0, L_80228A34
    if (ctx->r3 != ctx->r2) {
        // 0x80228A10: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228A34;
    }
    // 0x80228A10: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80228A14:
    // 0x80228A14: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228A18: j           L_80228A2C
    // 0x80228A1C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
        goto L_80228A2C;
    // 0x80228A1C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
L_80228A20:
    // 0x80228A20: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228A24: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228A28: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
L_80228A2C:
    // 0x80228A2C: jal         0x80228C84
    // 0x80228A30: nop

    func_80228C84_ovl3(rdram, ctx);
        goto after_2;
    // 0x80228A30: nop

    after_2:
L_80228A34:
    // 0x80228A34: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228A38: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228A3C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228A40: jr          $ra
    // 0x80228A44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228A44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80238910_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238910: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238914: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80238918: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023891C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238920: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238924: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238928: lw          $v0, -0x1560($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1560);
    // 0x8023892C: jalr        $v0
    // 0x80238930: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80238930: nop

    after_0:
    // 0x80238934: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80238938: jr          $ra
    // 0x8023893C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023893C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228AEC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228AEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228AF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228AF4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80228AF8: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80228AFC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228B00: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228B04: bne         $v0, $zero, L_80228B38
    if (ctx->r2 != 0) {
        // 0x80228B08: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_80228B38;
    }
    // 0x80228B08: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80228B0C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80228B10: jal         0x80050294
    // 0x80228B14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80228B14: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80228B18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228B1C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228B20: jal         0x80228C84
    // 0x80228B24: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    func_80228C84_ovl3(rdram, ctx);
        goto after_1;
    // 0x80228B24: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    after_1:
    // 0x80228B28: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80228B2C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x80228B30: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80228B34: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80228B38:
    // 0x80228B38: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80228B3C: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80228B40: addiu       $v0, $zero, 0xDC
    ctx->r2 = ADD32(0, 0XDC);
    // 0x80228B44: bne         $v1, $v0, L_80228B58
    if (ctx->r3 != ctx->r2) {
        // 0x80228B48: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80228B58;
    }
    // 0x80228B48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80228B4C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80228B50: jal         0x80228C84
    // 0x80228B54: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    func_80228C84_ovl3(rdram, ctx);
        goto after_2;
    // 0x80228B54: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    after_2:
L_80228B58:
    // 0x80228B58: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80228B5C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228B60: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228B64: jr          $ra
    // 0x80228B68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228B68: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8022B9DC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B9DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022B9E0: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022B9E4: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022B9E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022B9EC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B9F0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B9F4: lw          $v0, -0x22A4($at)
    ctx->r2 = MEM_W(ctx->r1, -0X22A4);
    // 0x8022B9F8: jalr        $v0
    // 0x8022B9FC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022B9FC: nop

    after_0:
    // 0x8022BA00: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022BA04: jr          $ra
    // 0x8022BA08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022BA08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802272F0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802272F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802272F4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802272F8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802272FC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227300: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227304: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80227308: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022730C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80227310: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227314: lw          $v0, -0x3040($at)
    ctx->r2 = MEM_W(ctx->r1, -0X3040);
    // 0x80227318: jalr        $v0
    // 0x8022731C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022731C: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    after_0:
    // 0x80227320: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80227324: bne         $v0, $zero, L_80227338
    if (ctx->r2 != 0) {
        // 0x80227328: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227338;
    }
    // 0x80227328: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022732C: jal         0x8005044C
    // 0x80227330: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x80227330: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80227334: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80227338:
    // 0x80227338: jal         0x80227790
    // 0x8022733C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_80227790_ovl3(rdram, ctx);
        goto after_2;
    // 0x8022733C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
    // 0x80227340: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227344: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227348: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022734C: jr          $ra
    // 0x80227350: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227350: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80237F24_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237F24: addu        $t1, $a0, $zero
    ctx->r9 = ADD32(ctx->r4, 0);
    // 0x80237F28: lhu         $a1, 0x2A($t1)
    ctx->r5 = MEM_HU(ctx->r9, 0X2A);
    // 0x80237F2C: lhu         $v0, 0x2E($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X2E);
    // 0x80237F30: lhu         $a2, 0x28($t1)
    ctx->r6 = MEM_HU(ctx->r9, 0X28);
    // 0x80237F34: lhu         $v1, 0x1E($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0X1E);
    // 0x80237F38: lhu         $a0, 0x20($t1)
    ctx->r4 = MEM_HU(ctx->r9, 0X20);
    // 0x80237F3C: lhu         $a3, 0x2C($t1)
    ctx->r7 = MEM_HU(ctx->r9, 0X2C);
    // 0x80237F40: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x80237F44: lhu         $v0, 0x1C($t1)
    ctx->r2 = MEM_HU(ctx->r9, 0X1C);
    // 0x80237F48: sh          $a1, 0x2A($t1)
    MEM_H(0X2A, ctx->r9) = ctx->r5;
    // 0x80237F4C: lh          $t0, 0x2A($t1)
    ctx->r8 = MEM_H(ctx->r9, 0X2A);
    // 0x80237F50: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80237F54: addu        $a0, $a0, $a3
    ctx->r4 = ADD32(ctx->r4, ctx->r7);
    // 0x80237F58: sh          $v1, 0x1E($t1)
    MEM_H(0X1E, ctx->r9) = ctx->r3;
    // 0x80237F5C: sh          $a0, 0x20($t1)
    MEM_H(0X20, ctx->r9) = ctx->r4;
    // 0x80237F60: addu        $v0, $v0, $a2
    ctx->r2 = ADD32(ctx->r2, ctx->r6);
    // 0x80237F64: bltz        $t0, L_80237F78
    if (SIGNED(ctx->r8) < 0) {
        // 0x80237F68: sh          $v0, 0x1C($t1)
        MEM_H(0X1C, ctx->r9) = ctx->r2;
            goto L_80237F78;
    }
    // 0x80237F68: sh          $v0, 0x1C($t1)
    MEM_H(0X1C, ctx->r9) = ctx->r2;
    // 0x80237F6C: lbu         $v0, 0x8($t1)
    ctx->r2 = MEM_BU(ctx->r9, 0X8);
    // 0x80237F70: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80237F74: sb          $v0, 0x8($t1)
    MEM_B(0X8, ctx->r9) = ctx->r2;
L_80237F78:
    // 0x80237F78: jr          $ra
    // 0x80237F7C: nop

    TRACE_RETURN()
    return;
    // 0x80237F7C: nop

;}
RECOMP_FUNC void func_80227514_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227514: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227518: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022751C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80227520: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227524: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227528: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022752C: bne         $v0, $zero, L_8022755C
    if (ctx->r2 != 0) {
        // 0x80227530: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022755C;
    }
    // 0x80227530: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x80227534: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80227538: jal         0x80050294
    // 0x8022753C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8022753C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80227540: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227544: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227548: jal         0x8022774C
    // 0x8022754C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8022774C_ovl3(rdram, ctx);
        goto after_1;
    // 0x8022754C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80227550: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227554: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227558: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022755C:
    // 0x8022755C: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80227560: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80227564: addiu       $v0, $zero, 0x19
    ctx->r2 = ADD32(0, 0X19);
    // 0x80227568: bne         $v1, $v0, L_8022758C
    if (ctx->r3 != ctx->r2) {
        // 0x8022756C: addiu       $v0, $zero, 0x91
        ctx->r2 = ADD32(0, 0X91);
            goto L_8022758C;
    }
    // 0x8022756C: addiu       $v0, $zero, 0x91
    ctx->r2 = ADD32(0, 0X91);
    // 0x80227570: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227574: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227578: jal         0x8022774C
    // 0x8022757C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8022774C_ovl3(rdram, ctx);
        goto after_2;
    // 0x8022757C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x80227580: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x80227584: lw          $v1, -0x3A40($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X3A40);
    // 0x80227588: addiu       $v0, $zero, 0x91
    ctx->r2 = ADD32(0, 0X91);
L_8022758C:
    // 0x8022758C: bne         $v1, $v0, L_802275A0
    if (ctx->r3 != ctx->r2) {
        // 0x80227590: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802275A0;
    }
    // 0x80227590: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227594: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80227598: jal         0x8022774C
    // 0x8022759C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    func_8022774C_ovl3(rdram, ctx);
        goto after_3;
    // 0x8022759C: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    after_3:
L_802275A0:
    // 0x802275A0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802275A4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802275A8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802275AC: jr          $ra
    // 0x802275B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802275B0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802339A4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802339A4: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x802339A8: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x802339AC: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x802339B0: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x802339B4: addu        $s7, $zero, $zero
    ctx->r23 = ADD32(0, 0);
    // 0x802339B8: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x802339BC: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x802339C0: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x802339C4: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x802339C8: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x802339CC: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x802339D0: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x802339D4: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
L_802339D8:
    // 0x802339D8: lw          $v0, 0xD0($s4)
    ctx->r2 = MEM_W(ctx->r20, 0XD0);
    // 0x802339DC: andi        $v1, $s7, 0xFF
    ctx->r3 = ctx->r23 & 0XFF;
    // 0x802339E0: sll         $s0, $v1, 3
    ctx->r16 = S32(ctx->r3 << 3);
    // 0x802339E4: sh          $v0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r2;
    // 0x802339E8: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802339EC: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x802339F0: lh          $a0, -0x1D98($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1D98);
    // 0x802339F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802339F8: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802339FC: slt         $v0, $a0, $v1
    ctx->r2 = SIGNED(ctx->r4) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80233A00: beq         $v0, $zero, L_80233BBC
    if (ctx->r2 == 0) {
        // 0x80233A04: addiu       $v0, $a0, 0x10
        ctx->r2 = ADD32(ctx->r4, 0X10);
            goto L_80233BBC;
    }
    // 0x80233A04: addiu       $v0, $a0, 0x10
    ctx->r2 = ADD32(ctx->r4, 0X10);
    // 0x80233A08: slt         $v0, $v1, $v0
    ctx->r2 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80233A0C: beq         $v0, $zero, L_80233BC0
    if (ctx->r2 == 0) {
        // 0x80233A10: andi        $v0, $s7, 0xFF
        ctx->r2 = ctx->r23 & 0XFF;
            goto L_80233BC0;
    }
    // 0x80233A10: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x80233A14: jal         0x8003B878
    // 0x80233A18: nop

    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x80233A18: nop

    after_0:
    // 0x80233A1C: lw          $a0, 0xD0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0XD0);
    // 0x80233A20: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233A24: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80233A28: lhu         $v1, -0x1D98($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1D98);
    // 0x80233A2C: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80233A30: addu        $a1, $a1, $s0
    ctx->r5 = ADD32(ctx->r5, ctx->r16);
    // 0x80233A34: lh          $a1, -0x1D92($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X1D92);
    // 0x80233A38: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80233A3C: subu        $a3, $a0, $v1
    ctx->r7 = SUB32(ctx->r4, ctx->r3);
    // 0x80233A40: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    // 0x80233A44: sra         $t0, $v1, 16
    ctx->r8 = S32(SIGNED(ctx->r3) >> 16);
    // 0x80233A48: sll         $v1, $t0, 1
    ctx->r3 = S32(ctx->r8 << 1);
    // 0x80233A4C: sh          $a3, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r7;
    // 0x80233A50: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80233A54: addu        $a0, $a0, $s0
    ctx->r4 = ADD32(ctx->r4, ctx->r16);
    // 0x80233A58: lhu         $a0, -0x1D94($a0)
    ctx->r4 = MEM_HU(ctx->r4, -0X1D94);
    // 0x80233A5C: addu        $v1, $v1, $t0
    ctx->r3 = ADD32(ctx->r3, ctx->r8);
    // 0x80233A60: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80233A64: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x80233A68: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x80233A6C: bgez        $a1, L_80233A78
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80233A70: andi        $a0, $a0, 0xFFF
        ctx->r4 = ctx->r4 & 0XFFF;
            goto L_80233A78;
    }
    // 0x80233A70: andi        $a0, $a0, 0xFFF
    ctx->r4 = ctx->r4 & 0XFFF;
    // 0x80233A74: addiu       $a1, $a1, 0xF
    ctx->r5 = ADD32(ctx->r5, 0XF);
L_80233A78:
    // 0x80233A78: sra         $v0, $a1, 4
    ctx->r2 = S32(SIGNED(ctx->r5) >> 4);
    // 0x80233A7C: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233A80: mflo        $v0
    ctx->r2 = lo;
    // 0x80233A84: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233A88: addu        $v1, $v1, $s0
    ctx->r3 = ADD32(ctx->r3, ctx->r16);
    // 0x80233A8C: lh          $v1, -0x1D96($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X1D96);
    // 0x80233A90: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x80233A94: bgez        $v1, L_80233AA0
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80233A98: subu        $fp, $a2, $v0
        ctx->r30 = SUB32(ctx->r6, ctx->r2);
            goto L_80233AA0;
    }
    // 0x80233A98: subu        $fp, $a2, $v0
    ctx->r30 = SUB32(ctx->r6, ctx->r2);
    // 0x80233A9C: addiu       $v1, $v1, 0xF
    ctx->r3 = ADD32(ctx->r3, 0XF);
L_80233AA0:
    // 0x80233AA0: sra         $v0, $v1, 4
    ctx->r2 = S32(SIGNED(ctx->r3) >> 4);
    // 0x80233AA4: mult        $a3, $v0
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233AA8: mflo        $v0
    ctx->r2 = lo;
    // 0x80233AAC: subu        $s0, $a1, $v0
    ctx->r16 = SUB32(ctx->r5, ctx->r2);
    // 0x80233AB0: slti        $v0, $t0, 0x8
    ctx->r2 = SIGNED(ctx->r8) < 0X8 ? 1 : 0;
    // 0x80233AB4: beq         $v0, $zero, L_80233ADC
    if (ctx->r2 == 0) {
        // 0x80233AB8: addiu       $v0, $t0, 0x1
        ctx->r2 = ADD32(ctx->r8, 0X1);
            goto L_80233ADC;
    }
    // 0x80233AB8: addiu       $v0, $t0, 0x1
    ctx->r2 = ADD32(ctx->r8, 0X1);
    // 0x80233ABC: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80233AC0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233AC4: sll         $s3, $v1, 2
    ctx->r19 = S32(ctx->r3 << 2);
    // 0x80233AC8: sll         $v1, $v0, 3
    ctx->r3 = S32(ctx->r2 << 3);
    // 0x80233ACC: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80233AD0: sll         $s6, $v1, 2
    ctx->r22 = S32(ctx->r3 << 2);
    // 0x80233AD4: j           L_80233AE8
    // 0x80233AD8: addu        $s5, $s3, $zero
    ctx->r21 = ADD32(ctx->r19, 0);
        goto L_80233AE8;
    // 0x80233AD8: addu        $s5, $s3, $zero
    ctx->r21 = ADD32(ctx->r19, 0);
L_80233ADC:
    // 0x80233ADC: addiu       $s3, $zero, 0x60
    ctx->r19 = ADD32(0, 0X60);
    // 0x80233AE0: addiu       $s6, $zero, 0xE0
    ctx->r22 = ADD32(0, 0XE0);
    // 0x80233AE4: addiu       $s5, $zero, 0x60
    ctx->r21 = ADD32(0, 0X60);
L_80233AE8:
    // 0x80233AE8: jal         0x800324B4
    // 0x80233AEC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_1;
    // 0x80233AEC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    after_1:
    // 0x80233AF0: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x80233AF4: sra         $s0, $s0, 16
    ctx->r16 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80233AF8: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233AFC: mflo        $v0
    ctx->r2 = lo;
    // 0x80233B00: lhu         $v1, 0x14($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X14);
    // 0x80233B04: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80233B08: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80233B0C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233B10: jal         0x80032498
    // 0x80233B14: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    func_80032498_D898(rdram, ctx);
        goto after_2;
    // 0x80233B14: sh          $v1, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r3;
    after_2:
    // 0x80233B18: nop

    // 0x80233B1C: mult        $v0, $s0
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r16)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80233B20: mflo        $v0
    ctx->r2 = lo;
    // 0x80233B24: lhu         $v1, 0x18($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X18);
    // 0x80233B28: lui         $a1, 0x3D48
    ctx->r5 = S32(0X3D48 << 16);
    // 0x80233B2C: andi        $a0, $s5, 0xFF
    ctx->r4 = ctx->r21 & 0XFF;
    // 0x80233B30: sra         $v0, $v0, 12
    ctx->r2 = S32(SIGNED(ctx->r2) >> 12);
    // 0x80233B34: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233B38: sh          $v1, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r3;
    // 0x80233B3C: lhu         $v0, 0x16($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X16);
    // 0x80233B40: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x80233B44: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x80233B48: addu        $v0, $v0, $fp
    ctx->r2 = ADD32(ctx->r2, ctx->r30);
    // 0x80233B4C: sh          $v0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r2;
    // 0x80233B50: andi        $v0, $s6, 0xFF
    ctx->r2 = ctx->r22 & 0XFF;
    // 0x80233B54: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80233B58: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80233B5C: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80233B60: andi        $v0, $s3, 0xFF
    ctx->r2 = ctx->r19 & 0XFF;
    // 0x80233B64: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80233B68: sw          $a0, 0x4($s2)
    MEM_W(0X4, ctx->r18) = ctx->r4;
    // 0x80233B6C: lh          $v0, 0x10($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X10);
    // 0x80233B70: lh          $v1, 0x12($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X12);
    // 0x80233B74: ori         $a1, $a1, 0x2040
    ctx->r5 = ctx->r5 | 0X2040;
    // 0x80233B78: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233B7C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233B80: sw          $v1, 0x8($s2)
    MEM_W(0X8, ctx->r18) = ctx->r3;
    // 0x80233B84: lh          $v1, 0x14($sp)
    ctx->r3 = MEM_H(ctx->r29, 0X14);
    // 0x80233B88: lui         $v0, 0x2E
    ctx->r2 = S32(0X2E << 16);
    // 0x80233B8C: ori         $v0, $v0, 0x205F
    ctx->r2 = ctx->r2 | 0X205F;
    // 0x80233B90: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x80233B94: addiu       $v0, $zero, 0x3F40
    ctx->r2 = ADD32(0, 0X3F40);
    // 0x80233B98: sw          $v0, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r2;
    // 0x80233B9C: addiu       $v0, $zero, 0x3F5F
    ctx->r2 = ADD32(0, 0X3F5F);
    // 0x80233BA0: sw          $v0, 0x24($s2)
    MEM_W(0X24, ctx->r18) = ctx->r2;
    // 0x80233BA4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80233BA8: sw          $a1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r5;
    // 0x80233BAC: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x80233BB0: sw          $zero, 0x20($s2)
    MEM_W(0X20, ctx->r18) = 0;
    // 0x80233BB4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80233BB8: sw          $v1, 0x10($s2)
    MEM_W(0X10, ctx->r18) = ctx->r3;
L_80233BBC:
    // 0x80233BBC: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
L_80233BC0:
    // 0x80233BC0: lhu         $t1, 0x1E($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X1E);
    // 0x80233BC4: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80233BC8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80233BCC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80233BD0: lh          $v1, -0x1D98($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X1D98);
    // 0x80233BD4: sll         $v0, $t1, 16
    ctx->r2 = S32(ctx->r9 << 16);
    // 0x80233BD8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80233BDC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80233BE0: bne         $v0, $v1, L_80233C00
    if (ctx->r2 != ctx->r3) {
        // 0x80233BE4: addiu       $s7, $s7, 0x1
        ctx->r23 = ADD32(ctx->r23, 0X1);
            goto L_80233C00;
    }
    // 0x80233BE4: addiu       $s7, $s7, 0x1
    ctx->r23 = ADD32(ctx->r23, 0X1);
    // 0x80233BE8: lbu         $v0, 0xB($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XB);
    // 0x80233BEC: lhu         $v1, 0x98($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X98);
    // 0x80233BF0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80233BF4: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80233BF8: sb          $v0, 0xB($s4)
    MEM_B(0XB, ctx->r20) = ctx->r2;
    // 0x80233BFC: sh          $v1, 0x98($s4)
    MEM_H(0X98, ctx->r20) = ctx->r3;
L_80233C00:
    // 0x80233C00: andi        $v0, $s7, 0xFF
    ctx->r2 = ctx->r23 & 0XFF;
    // 0x80233C04: sltiu       $v0, $v0, 0x18
    ctx->r2 = ctx->r2 < 0X18 ? 1 : 0;
    // 0x80233C08: bne         $v0, $zero, L_802339D8
    if (ctx->r2 != 0) {
        // 0x80233C0C: nop
    
            goto L_802339D8;
    }
    // 0x80233C0C: nop

    // 0x80233C10: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80233C14: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x80233C18: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80233C1C: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80233C20: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80233C24: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x80233C28: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80233C2C: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80233C30: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80233C34: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x80233C38: jr          $ra
    // 0x80233C3C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x80233C3C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_802369B4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802369B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802369B8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802369BC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802369C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802369C4: lbu         $v0, 0xB($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XB);
    // 0x802369C8: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x802369CC: bne         $v0, $zero, L_80236AB0
    if (ctx->r2 != 0) {
        // 0x802369D0: nop
    
            goto L_80236AB0;
    }
    // 0x802369D0: nop

    // 0x802369D4: jal         0x8004F144
    // 0x802369D8: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x802369D8: nop

    after_0:
    // 0x802369DC: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802369E0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802369E4: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x802369E8: lbu         $v0, 0xC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XC);
    // 0x802369EC: sb          $v0, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r2;
    // 0x802369F0: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802369F4: sb          $v0, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r2;
    // 0x802369F8: lbu         $v1, 0xC($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XC);
    // 0x802369FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236A00: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
    // 0x80236A04: sb          $v1, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r3;
    // 0x80236A08: lbu         $v0, 0xE($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XE);
    // 0x80236A0C: sb          $v0, 0xE($a0)
    MEM_B(0XE, ctx->r4) = ctx->r2;
    // 0x80236A10: lhu         $v0, 0x1C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1C);
    // 0x80236A14: lb          $v1, 0xE($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XE);
    // 0x80236A18: sh          $v0, 0x1C($a0)
    MEM_H(0X1C, ctx->r4) = ctx->r2;
    // 0x80236A1C: lhu         $v0, 0x1E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1E);
    // 0x80236A20: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
    // 0x80236A24: lhu         $v0, 0x20($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X20);
    // 0x80236A28: sh          $v0, 0x20($a0)
    MEM_H(0X20, ctx->r4) = ctx->r2;
    // 0x80236A2C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80236A30: bne         $v1, $v0, L_80236A4C
    if (ctx->r3 != ctx->r2) {
        // 0x80236A34: lui         $v1, 0x3D48
        ctx->r3 = S32(0X3D48 << 16);
            goto L_80236A4C;
    }
    // 0x80236A34: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x80236A38: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x80236A3C: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x80236A40: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x80236A44: j           L_80236A7C
    // 0x80236A48: lui         $v0, 0x2C00
    ctx->r2 = S32(0X2C00 << 16);
        goto L_80236A7C;
    // 0x80236A48: lui         $v0, 0x2C00
    ctx->r2 = S32(0X2C00 << 16);
L_80236A4C:
    // 0x80236A4C: lb          $v0, 0xE($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XE);
    // 0x80236A50: ori         $v1, $v1, 0x2E
    ctx->r3 = ctx->r3 | 0X2E;
    // 0x80236A54: sw          $v1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r3;
    // 0x80236A58: lui         $v1, 0xAE00
    ctx->r3 = S32(0XAE00 << 16);
    // 0x80236A5C: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
    // 0x80236A60: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236A64: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236A68: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236A6C: lw          $v0, -0x1760($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1760);
    // 0x80236A70: sw          $zero, 0x28($a0)
    MEM_W(0X28, ctx->r4) = 0;
    // 0x80236A74: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x80236A78: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
L_80236A7C:
    // 0x80236A7C: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x80236A80: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x80236A84: addiu       $v0, $zero, 0xA0
    ctx->r2 = ADD32(0, 0XA0);
    // 0x80236A88: sb          $v0, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r2;
    // 0x80236A8C: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x80236A90: sb          $v0, 0x23($a0)
    MEM_B(0X23, ctx->r4) = ctx->r2;
    // 0x80236A94: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80236A98: bne         $v1, $zero, L_80236AA8
    if (ctx->r3 != 0) {
        // 0x80236A9C: sh          $v0, 0x24($a0)
        MEM_H(0X24, ctx->r4) = ctx->r2;
            goto L_80236AA8;
    }
    // 0x80236A9C: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
    // 0x80236AA0: j           L_80236AAC
    // 0x80236AA4: addiu       $v0, $zero, 0x4E
    ctx->r2 = ADD32(0, 0X4E);
        goto L_80236AAC;
    // 0x80236AA4: addiu       $v0, $zero, 0x4E
    ctx->r2 = ADD32(0, 0X4E);
L_80236AA8:
    // 0x80236AA8: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
L_80236AAC:
    // 0x80236AAC: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
L_80236AB0:
    // 0x80236AB0: lbu         $v1, 0xB($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XB);
    // 0x80236AB4: sltiu       $v0, $v1, 0x10
    ctx->r2 = ctx->r3 < 0X10 ? 1 : 0;
    // 0x80236AB8: bne         $v0, $zero, L_80236AD0
    if (ctx->r2 != 0) {
        // 0x80236ABC: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80236AD0;
    }
    // 0x80236ABC: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80236AC0: jal         0x8004F5C4
    // 0x80236AC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x80236AC4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80236AC8: j           L_80236AD4
    // 0x80236ACC: nop

        goto L_80236AD4;
    // 0x80236ACC: nop

L_80236AD0:
    // 0x80236AD0: sb          $v0, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r2;
L_80236AD4:
    // 0x80236AD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80236AD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236ADC: jr          $ra
    // 0x80236AE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236AE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B2A4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B2A4: lhu         $v0, 0x38($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X38);
    // 0x8023B2A8: lhu         $v1, 0x3A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X3A);
    // 0x8023B2AC: addiu       $v0, $v0, -0x2
    ctx->r2 = ADD32(ctx->r2, -0X2);
    // 0x8023B2B0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023B2B4: sh          $v1, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r3;
    // 0x8023B2B8: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023B2BC: bne         $v1, $zero, L_8023B2C8
    if (ctx->r3 != 0) {
        // 0x8023B2C0: sh          $v0, 0x38($a0)
        MEM_H(0X38, ctx->r4) = ctx->r2;
            goto L_8023B2C8;
    }
    // 0x8023B2C0: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x8023B2C4: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_8023B2C8:
    // 0x8023B2C8: jr          $ra
    // 0x8023B2CC: nop

    TRACE_RETURN()
    return;
    // 0x8023B2CC: nop

;}
RECOMP_FUNC void func_8023B25C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B25C: lhu         $v0, 0x38($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X38);
    // 0x8023B260: lhu         $v1, 0x3A($a0)
    ctx->r3 = MEM_HU(ctx->r4, 0X3A);
    // 0x8023B264: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x8023B268: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8023B26C: sh          $v1, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r3;
    // 0x8023B270: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8023B274: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8023B278: sh          $v0, 0x38($a0)
    MEM_H(0X38, ctx->r4) = ctx->r2;
    // 0x8023B27C: addiu       $v0, $zero, -0x64
    ctx->r2 = ADD32(0, -0X64);
    // 0x8023B280: bne         $v1, $v0, L_8023B294
    if (ctx->r3 != ctx->r2) {
        // 0x8023B284: nop
    
            goto L_8023B294;
    }
    // 0x8023B284: nop

    // 0x8023B288: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8023B28C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B290: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8023B294:
    // 0x8023B294: jr          $ra
    // 0x8023B298: nop

    TRACE_RETURN()
    return;
    // 0x8023B298: nop

;}
RECOMP_FUNC void func_8023423C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023423C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80234240: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80234244: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80234248: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8023424C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80234250: lw          $v1, 0x9C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X9C);
    // 0x80234254: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80234258: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023425C: beq         $v0, $zero, L_802342B4
    if (ctx->r2 == 0) {
        // 0x80234260: nop
    
            goto L_802342B4;
    }
    // 0x80234260: nop

    // 0x80234264: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x80234268: addiu       $s0, $s0, 0x4A06
    ctx->r16 = ADD32(ctx->r16, 0X4A06);
    // 0x8023426C: jal         0x800324B4
    // 0x80234270: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80234270: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_0:
    // 0x80234274: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80234278: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8023427C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x80234280: sh          $v0, 0x44($s1)
    MEM_H(0X44, ctx->r17) = ctx->r2;
    // 0x80234284: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x80234288: sh          $v0, 0x46($s1)
    MEM_H(0X46, ctx->r17) = ctx->r2;
    // 0x8023428C: jal         0x80032498
    // 0x80234290: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x80234290: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_1:
    // 0x80234294: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80234298: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x8023429C: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802342A0: sh          $v0, 0x48($s1)
    MEM_H(0X48, ctx->r17) = ctx->r2;
    // 0x802342A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802342A8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x802342AC: j           L_802342E4
    // 0x802342B0: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
        goto L_802342E4;
    // 0x802342B0: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
L_802342B4:
    // 0x802342B4: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x802342B8: beq         $v0, $zero, L_802342D4
    if (ctx->r2 == 0) {
        // 0x802342BC: lui         $v0, 0x1C00
        ctx->r2 = S32(0X1C00 << 16);
            goto L_802342D4;
    }
    // 0x802342BC: lui         $v0, 0x1C00
    ctx->r2 = S32(0X1C00 << 16);
    // 0x802342C0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802342C4: beq         $v0, $zero, L_802342E4
    if (ctx->r2 == 0) {
        // 0x802342C8: nop
    
            goto L_802342E4;
    }
    // 0x802342C8: nop

    // 0x802342CC: j           L_80234300
    // 0x802342D0: nop

        goto L_80234300;
    // 0x802342D0: nop

L_802342D4:
    // 0x802342D4: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
    // 0x802342D8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802342DC: bne         $v0, $zero, L_80234300
    if (ctx->r2 != 0) {
        // 0x802342E0: nop
    
            goto L_80234300;
    }
    // 0x802342E0: nop

L_802342E4:
    // 0x802342E4: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x802342E8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802342EC: bne         $v0, $zero, L_8023432C
    if (ctx->r2 != 0) {
        // 0x802342F0: sw          $zero, 0x9C($s1)
        MEM_W(0X9C, ctx->r17) = 0;
            goto L_8023432C;
    }
    // 0x802342F0: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    // 0x802342F4: lh          $v0, 0x7C($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X7C);
    // 0x802342F8: beq         $v0, $zero, L_80234334
    if (ctx->r2 == 0) {
        // 0x802342FC: addiu       $a0, $s1, 0x34
        ctx->r4 = ADD32(ctx->r17, 0X34);
            goto L_80234334;
    }
    // 0x802342FC: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
L_80234300:
    // 0x80234300: jal         0x8004F144
    // 0x80234304: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x80234304: sw          $zero, 0x9C($s1)
    MEM_W(0X9C, ctx->r17) = 0;
    after_2:
    // 0x80234308: beq         $v0, $zero, L_80234318
    if (ctx->r2 == 0) {
        // 0x8023430C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80234318;
    }
    // 0x8023430C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80234310: jal         0x80234B80
    // 0x80234314: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_80234B80_ovl3(rdram, ctx);
        goto after_3;
    // 0x80234314: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_3:
L_80234318:
    // 0x80234318: sb          $zero, 0x0($s1)
    MEM_B(0X0, ctx->r17) = 0;
    // 0x8023431C: jal         0x8004F4F8
    // 0x80234320: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_4;
    // 0x80234320: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80234324: j           L_8023444C
    // 0x80234328: nop

        goto L_8023444C;
    // 0x80234328: nop

L_8023432C:
    // 0x8023432C: sh          $zero, 0x7C($s1)
    MEM_H(0X7C, ctx->r17) = 0;
    // 0x80234330: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
L_80234334:
    // 0x80234334: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80234338: jal         0x8009A3B4
    // 0x8023433C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8023433C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x80234340: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80234344: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80234348: jal         0x8009A3B4
    // 0x8023434C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8023434C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_6:
    // 0x80234350: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80234354: lui         $v1, 0x2C80
    ctx->r3 = S32(0X2C80 << 16);
    // 0x80234358: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8023435C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80234360: beq         $v0, $zero, L_8023439C
    if (ctx->r2 == 0) {
        // 0x80234364: sw          $v1, 0x8C($s1)
        MEM_W(0X8C, ctx->r17) = ctx->r3;
            goto L_8023439C;
    }
    // 0x80234364: sw          $v1, 0x8C($s1)
    MEM_W(0X8C, ctx->r17) = ctx->r3;
    // 0x80234368: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x8023436C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234370: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234374: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234378: lhu         $v1, -0x1CB8($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1CB8);
    // 0x8023437C: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x80234380: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234384: sb          $v1, 0x96($s1)
    MEM_B(0X96, ctx->r17) = ctx->r3;
    // 0x80234388: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023438C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234390: lhu         $v0, -0x1CB6($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X1CB6);
    // 0x80234394: j           L_802343CC
    // 0x80234398: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
        goto L_802343CC;
    // 0x80234398: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
L_8023439C:
    // 0x8023439C: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x802343A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802343A4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x802343A8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802343AC: lhu         $v1, -0x1CD0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1CD0);
    // 0x802343B0: lb          $v0, 0xF($s1)
    ctx->r2 = MEM_B(ctx->r17, 0XF);
    // 0x802343B4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802343B8: sb          $v1, 0x96($s1)
    MEM_B(0X96, ctx->r17) = ctx->r3;
    // 0x802343BC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802343C0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802343C4: lhu         $v0, -0x1CCE($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X1CCE);
    // 0x802343C8: sb          $v0, 0x97($s1)
    MEM_B(0X97, ctx->r17) = ctx->r2;
L_802343CC:
    // 0x802343CC: jal         0x80234A90
    // 0x802343D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80234A90_ovl3(rdram, ctx);
        goto after_7;
    // 0x802343D0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x802343D4: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x802343D8: jal         0x8004DD04
    // 0x802343DC: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    func_8004DD04_29104(rdram, ctx);
        goto after_8;
    // 0x802343DC: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    after_8:
    // 0x802343E0: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x802343E4: jal         0x8004DD04
    // 0x802343E8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_9;
    // 0x802343E8: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    after_9:
    // 0x802343EC: jal         0x802348D8
    // 0x802343F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_802348D8_ovl3(rdram, ctx);
        goto after_10;
    // 0x802343F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_10:
    // 0x802343F4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802343F8: beq         $v0, $zero, L_80234408
    if (ctx->r2 == 0) {
        // 0x802343FC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80234408;
    }
    // 0x802343FC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80234400: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80234404: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_80234408:
    // 0x80234408: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x8023440C: sltiu       $v0, $v1, 0x96
    ctx->r2 = ctx->r3 < 0X96 ? 1 : 0;
    // 0x80234410: bne         $v0, $zero, L_80234428
    if (ctx->r2 != 0) {
        // 0x80234414: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_80234428;
    }
    // 0x80234414: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x80234418: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023441C: sb          $v0, 0x8($s1)
    MEM_B(0X8, ctx->r17) = ctx->r2;
    // 0x80234420: j           L_8023442C
    // 0x80234424: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
        goto L_8023442C;
    // 0x80234424: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
L_80234428:
    // 0x80234428: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
L_8023442C:
    // 0x8023442C: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x80234430: lhu         $v1, 0x16($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X16);
    // 0x80234434: lhu         $a0, 0x18($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X18);
    // 0x80234438: sb          $zero, 0x76($s1)
    MEM_B(0X76, ctx->r17) = 0;
    // 0x8023443C: addiu       $v1, $v1, -0x10
    ctx->r3 = ADD32(ctx->r3, -0X10);
    // 0x80234440: sh          $v0, 0x90($s1)
    MEM_H(0X90, ctx->r17) = ctx->r2;
    // 0x80234444: sh          $v1, 0x92($s1)
    MEM_H(0X92, ctx->r17) = ctx->r3;
    // 0x80234448: sh          $a0, 0x94($s1)
    MEM_H(0X94, ctx->r17) = ctx->r4;
L_8023444C:
    // 0x8023444C: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x80234450: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80234454: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80234458: jr          $ra
    // 0x8023445C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8023445C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80234554_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234554: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80234558: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8023455C: addu        $s4, $a0, $zero
    ctx->r20 = ADD32(ctx->r4, 0);
    // 0x80234560: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80234564: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80234568: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8023456C: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80234570: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80234574: lw          $v1, 0x9C($s4)
    ctx->r3 = MEM_W(ctx->r20, 0X9C);
    // 0x80234578: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x8023457C: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80234580: beq         $v0, $zero, L_802345EC
    if (ctx->r2 == 0) {
        // 0x80234584: nop
    
            goto L_802345EC;
    }
    // 0x80234584: nop

    // 0x80234588: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8023458C: addiu       $s0, $s0, 0x4A06
    ctx->r16 = ADD32(ctx->r16, 0X4A06);
    // 0x80234590: jal         0x800324B4
    // 0x80234594: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_800324B4_D8B4(rdram, ctx);
        goto after_0;
    // 0x80234594: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_0:
    // 0x80234598: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023459C: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x802345A0: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802345A4: sh          $v0, 0x44($s4)
    MEM_H(0X44, ctx->r20) = ctx->r2;
    // 0x802345A8: addiu       $v0, $zero, -0x1000
    ctx->r2 = ADD32(0, -0X1000);
    // 0x802345AC: sh          $v0, 0x46($s4)
    MEM_H(0X46, ctx->r20) = ctx->r2;
    // 0x802345B0: jal         0x80032498
    // 0x802345B4: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    func_80032498_D898(rdram, ctx);
        goto after_1;
    // 0x802345B4: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_1:
    // 0x802345B8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x802345BC: sll         $v0, $v0, 5
    ctx->r2 = S32(ctx->r2 << 5);
    // 0x802345C0: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x802345C4: sh          $v0, 0x48($s4)
    MEM_H(0X48, ctx->r20) = ctx->r2;
    // 0x802345C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802345CC: sb          $v0, 0xA($s4)
    MEM_B(0XA, ctx->r20) = ctx->r2;
    // 0x802345D0: sb          $v0, 0x8($s4)
    MEM_B(0X8, ctx->r20) = ctx->r2;
    // 0x802345D4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x802345D8: sh          $zero, 0x4C($s4)
    MEM_H(0X4C, ctx->r20) = 0;
    // 0x802345DC: sh          $v0, 0x4E($s4)
    MEM_H(0X4E, ctx->r20) = ctx->r2;
    // 0x802345E0: sh          $zero, 0x50($s4)
    MEM_H(0X50, ctx->r20) = 0;
    // 0x802345E4: j           L_80234614
    // 0x802345E8: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
        goto L_80234614;
    // 0x802345E8: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
L_802345EC:
    // 0x802345EC: lbu         $v0, 0xA($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XA);
    // 0x802345F0: beq         $v0, $zero, L_8023460C
    if (ctx->r2 == 0) {
        // 0x802345F4: lui         $v0, 0x1C00
        ctx->r2 = S32(0X1C00 << 16);
            goto L_8023460C;
    }
    // 0x802345F4: lui         $v0, 0x1C00
    ctx->r2 = S32(0X1C00 << 16);
L_802345F8:
    // 0x802345F8: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802345FC: beq         $v0, $zero, L_80234614
    if (ctx->r2 == 0) {
        // 0x80234600: nop
    
            goto L_80234614;
    }
    // 0x80234600: nop

    // 0x80234604: j           L_8023476C
    // 0x80234608: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
        goto L_8023476C;
    // 0x80234608: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
L_8023460C:
    // 0x8023460C: j           L_802345F8
    // 0x80234610: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
        goto L_802345F8;
    // 0x80234610: lui         $v0, 0x1A00
    ctx->r2 = S32(0X1A00 << 16);
L_80234614:
    // 0x80234614: lw          $v0, 0x44($s4)
    ctx->r2 = MEM_W(ctx->r20, 0X44);
    // 0x80234618: bne         $v0, $zero, L_8023462C
    if (ctx->r2 != 0) {
        // 0x8023461C: sw          $zero, 0x9C($s4)
        MEM_W(0X9C, ctx->r20) = 0;
            goto L_8023462C;
    }
    // 0x8023461C: sw          $zero, 0x9C($s4)
    MEM_W(0X9C, ctx->r20) = 0;
    // 0x80234620: lh          $v0, 0x48($s4)
    ctx->r2 = MEM_H(ctx->r20, 0X48);
    // 0x80234624: beq         $v0, $zero, L_802346A4
    if (ctx->r2 == 0) {
        // 0x80234628: addiu       $s2, $s4, 0x34
        ctx->r18 = ADD32(ctx->r20, 0X34);
            goto L_802346A4;
    }
    // 0x80234628: addiu       $s2, $s4, 0x34
    ctx->r18 = ADD32(ctx->r20, 0X34);
L_8023462C:
    // 0x8023462C: lbu         $v0, 0x3($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0X3);
    // 0x80234630: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80234634: beq         $v0, $zero, L_80234670
    if (ctx->r2 == 0) {
        // 0x80234638: nop
    
            goto L_80234670;
    }
    // 0x80234638: nop

    // 0x8023463C: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x80234640: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234644: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234648: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023464C: lhu         $v1, -0x1CB8($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1CB8);
    // 0x80234650: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x80234654: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234658: sb          $v1, 0x96($s4)
    MEM_B(0X96, ctx->r20) = ctx->r3;
    // 0x8023465C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234660: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234664: lhu         $v0, -0x1CB6($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X1CB6);
    // 0x80234668: j           L_802346A0
    // 0x8023466C: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
        goto L_802346A0;
    // 0x8023466C: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
L_80234670:
    // 0x80234670: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x80234674: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234678: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023467C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234680: lhu         $v1, -0x1CD0($v1)
    ctx->r3 = MEM_HU(ctx->r3, -0X1CD0);
    // 0x80234684: lb          $v0, 0xF($s4)
    ctx->r2 = MEM_B(ctx->r20, 0XF);
    // 0x80234688: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023468C: sb          $v1, 0x96($s4)
    MEM_B(0X96, ctx->r20) = ctx->r3;
    // 0x80234690: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234694: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234698: lhu         $v0, -0x1CCE($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X1CCE);
    // 0x8023469C: sb          $v0, 0x97($s4)
    MEM_B(0X97, ctx->r20) = ctx->r2;
L_802346A0:
    // 0x802346A0: addiu       $s2, $s4, 0x34
    ctx->r18 = ADD32(ctx->r20, 0X34);
L_802346A4:
    // 0x802346A4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802346A8: addiu       $s3, $s4, 0x1C
    ctx->r19 = ADD32(ctx->r20, 0X1C);
    // 0x802346AC: addu        $a1, $s3, $zero
    ctx->r5 = ADD32(ctx->r19, 0);
    // 0x802346B0: jal         0x8009A3B4
    // 0x802346B4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x802346B4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_2:
    // 0x802346B8: addiu       $s0, $s4, 0x2C
    ctx->r16 = ADD32(ctx->r20, 0X2C);
    // 0x802346BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802346C0: addiu       $s1, $s4, 0x14
    ctx->r17 = ADD32(ctx->r20, 0X14);
    // 0x802346C4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802346C8: jal         0x8009A3B4
    // 0x802346CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_3;
    // 0x802346CC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_3:
    // 0x802346D0: jal         0x80234A90
    // 0x802346D4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_80234A90_ovl3(rdram, ctx);
        goto after_4;
    // 0x802346D4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_4:
    // 0x802346D8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    // 0x802346DC: jal         0x8004DD04
    // 0x802346E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_5;
    // 0x802346E0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802346E4: addu        $a0, $s3, $zero
    ctx->r4 = ADD32(ctx->r19, 0);
    // 0x802346E8: jal         0x8004DD04
    // 0x802346EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8004DD04_29104(rdram, ctx);
        goto after_6;
    // 0x802346EC: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_6:
    // 0x802346F0: jal         0x802348D8
    // 0x802346F4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_802348D8_ovl3(rdram, ctx);
        goto after_7;
    // 0x802346F4: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_7:
    // 0x802346F8: lhu         $v1, 0x14($s4)
    ctx->r3 = MEM_HU(ctx->r20, 0X14);
    // 0x802346FC: lhu         $v0, 0x16($s4)
    ctx->r2 = MEM_HU(ctx->r20, 0X16);
    // 0x80234700: lhu         $a0, 0x18($s4)
    ctx->r4 = MEM_HU(ctx->r20, 0X18);
    // 0x80234704: lb          $a1, 0xD($s4)
    ctx->r5 = MEM_B(ctx->r20, 0XD);
    // 0x80234708: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x8023470C: sh          $v0, 0x92($s4)
    MEM_H(0X92, ctx->r20) = ctx->r2;
    // 0x80234710: slti        $v0, $a1, 0x1E
    ctx->r2 = SIGNED(ctx->r5) < 0X1E ? 1 : 0;
    // 0x80234714: sh          $v1, 0x90($s4)
    MEM_H(0X90, ctx->r20) = ctx->r3;
    // 0x80234718: beq         $v0, $zero, L_8023476C
    if (ctx->r2 == 0) {
        // 0x8023471C: sh          $a0, 0x94($s4)
        MEM_H(0X94, ctx->r20) = ctx->r4;
            goto L_8023476C;
    }
    // 0x8023471C: sh          $a0, 0x94($s4)
    MEM_H(0X94, ctx->r20) = ctx->r4;
    // 0x80234720: slti        $v0, $a1, 0xF
    ctx->r2 = SIGNED(ctx->r5) < 0XF ? 1 : 0;
    // 0x80234724: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80234728: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8023472C: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80234730: and         $v0, $a1, $v0
    ctx->r2 = ctx->r5 & ctx->r2;
    // 0x80234734: beq         $v0, $zero, L_8023475C
    if (ctx->r2 == 0) {
        // 0x80234738: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_8023475C;
    }
    // 0x80234738: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8023473C: lbu         $v1, 0x8F($s4)
    ctx->r3 = MEM_BU(ctx->r20, 0X8F);
    // 0x80234740: bnel        $v1, $v0, L_80234754
    if (ctx->r3 != ctx->r2) {
        // 0x80234744: lui         $v0, 0x2CFF
        ctx->r2 = S32(0X2CFF << 16);
            goto L_80234754;
    }
    goto skip_0;
    // 0x80234744: lui         $v0, 0x2CFF
    ctx->r2 = S32(0X2CFF << 16);
    skip_0:
    // 0x80234748: lui         $v0, 0x2C80
    ctx->r2 = S32(0X2C80 << 16);
    // 0x8023474C: j           L_80234758
    // 0x80234750: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
        goto L_80234758;
    // 0x80234750: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
L_80234754:
    // 0x80234754: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
L_80234758:
    // 0x80234758: sw          $v0, 0x8C($s4)
    MEM_W(0X8C, ctx->r20) = ctx->r2;
L_8023475C:
    // 0x8023475C: lbu         $v0, 0xD($s4)
    ctx->r2 = MEM_BU(ctx->r20, 0XD);
    // 0x80234760: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80234764: j           L_80234790
    // 0x80234768: sb          $v0, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r2;
        goto L_80234790;
    // 0x80234768: sb          $v0, 0xD($s4)
    MEM_B(0XD, ctx->r20) = ctx->r2;
L_8023476C:
    // 0x8023476C: jal         0x8004F144
    // 0x80234770: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_8;
    // 0x80234770: nop

    after_8:
    // 0x80234774: beq         $v0, $zero, L_80234784
    if (ctx->r2 == 0) {
        // 0x80234778: addu        $a0, $s4, $zero
        ctx->r4 = ADD32(ctx->r20, 0);
            goto L_80234784;
    }
    // 0x80234778: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8023477C: jal         0x80234B80
    // 0x80234780: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    func_80234B80_ovl3(rdram, ctx);
        goto after_9;
    // 0x80234780: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    after_9:
L_80234784:
    // 0x80234784: sb          $zero, 0x0($s4)
    MEM_B(0X0, ctx->r20) = 0;
    // 0x80234788: jal         0x8004F4F8
    // 0x8023478C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_10;
    // 0x8023478C: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    after_10:
L_80234790:
    // 0x80234790: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80234794: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80234798: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8023479C: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x802347A0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x802347A4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802347A8: jr          $ra
    // 0x802347AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802347AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8022D920_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D920: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022D924: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D928: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022D92C: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D930: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022D934: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D938: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D93C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022D940: addiu       $s2, $s2, 0x49C4
    ctx->r18 = ADD32(ctx->r18, 0X49C4);
    // 0x8022D944: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022D948: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x8022D94C: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022D950: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D954: lbu         $v1, 0x34B($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X34B);
    // 0x8022D958: lhu         $t0, 0x56($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X56);
    // 0x8022D95C: lbu         $t1, 0xAC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XAC);
    // 0x8022D960: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022D964: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022D968: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022D96C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022D970: sb          $v1, 0x34B($s0)
    MEM_B(0X34B, ctx->r16) = ctx->r3;
    // 0x8022D974: sh          $t0, 0x34C($s0)
    MEM_H(0X34C, ctx->r16) = ctx->r8;
    // 0x8022D978: jal         0x8004F820
    // 0x8022D97C: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022D97C: sb          $t1, 0x34A($s0)
    MEM_B(0X34A, ctx->r16) = ctx->r9;
    after_0:
    // 0x8022D980: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D984: bgez        $v0, L_8022D9B4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D988: addiu       $s3, $s0, 0x348
        ctx->r19 = ADD32(ctx->r16, 0X348);
            goto L_8022D9B4;
    }
    // 0x8022D988: addiu       $s3, $s0, 0x348
    ctx->r19 = ADD32(ctx->r16, 0X348);
    // 0x8022D98C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D990: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D994: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022D998: jal         0x8004F820
    // 0x8022D99C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022D99C: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_1:
    // 0x8022D9A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D9A4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D9A8: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x8022D9AC: j           L_8022D9D0
    // 0x8022D9B0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
        goto L_8022D9D0;
    // 0x8022D9B0: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
L_8022D9B4:
    // 0x8022D9B4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D9B8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022D9BC: addu        $a1, $s2, $zero
    ctx->r5 = ADD32(ctx->r18, 0);
    // 0x8022D9C0: jal         0x8004F820
    // 0x8022D9C4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    func_8004F820_2AC20(rdram, ctx);
        goto after_2;
    // 0x8022D9C4: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    after_2:
    // 0x8022D9C8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D9CC: sra         $v0, $v0, 19
    ctx->r2 = S32(SIGNED(ctx->r2) >> 19);
L_8022D9D0:
    // 0x8022D9D0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022D9D4: sh          $v0, 0x6($s3)
    MEM_H(0X6, ctx->r19) = ctx->r2;
    // 0x8022D9D8: lbu         $a3, 0xC($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0XC);
    // 0x8022D9DC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022D9E0: jal         0x800610AC
    // 0x8022D9E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800610AC_3C4AC(rdram, ctx);
        goto after_3;
    // 0x8022D9E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_3:
    // 0x8022D9E8: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x8022D9EC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D9F0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D9F4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D9F8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D9FC: jr          $ra
    // 0x8022DA00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022DA00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80225B88_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225B88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80225B8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80225B90: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80225B94: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225B98: bne         $v0, $zero, L_80225BD0
    if (ctx->r2 != 0) {
        // 0x80225B9C: nop
    
            goto L_80225BD0;
    }
    // 0x80225B9C: nop

    // 0x80225BA0: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80225BA4: addiu       $s0, $s0, -0x3B84
    ctx->r16 = ADD32(ctx->r16, -0X3B84);
    // 0x80225BA8: jal         0x8005FA7C
    // 0x80225BAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_0;
    // 0x80225BAC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80225BB0: jal         0x8005FA7C
    // 0x80225BB4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_1;
    // 0x80225BB4: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x80225BB8: jal         0x8005FA7C
    // 0x80225BBC: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_2;
    // 0x80225BBC: addiu       $a0, $s0, 0x28
    ctx->r4 = ADD32(ctx->r16, 0X28);
    after_2:
    // 0x80225BC0: jal         0x8005FA7C
    // 0x80225BC4: addiu       $a0, $s0, 0x3C
    ctx->r4 = ADD32(ctx->r16, 0X3C);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_3;
    // 0x80225BC4: addiu       $a0, $s0, 0x3C
    ctx->r4 = ADD32(ctx->r16, 0X3C);
    after_3:
    // 0x80225BC8: jal         0x8005FA7C
    // 0x80225BCC: addiu       $a0, $s0, 0x50
    ctx->r4 = ADD32(ctx->r16, 0X50);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_4;
    // 0x80225BCC: addiu       $a0, $s0, 0x50
    ctx->r4 = ADD32(ctx->r16, 0X50);
    after_4:
L_80225BD0:
    // 0x80225BD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80225BD4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80225BD8: jr          $ra
    // 0x80225BDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80225BDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236DFC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236DFC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236E00: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80236E04: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80236E08: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80236E0C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80236E10: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80236E14: sltiu       $v0, $v1, 0x30
    ctx->r2 = ctx->r3 < 0X30 ? 1 : 0;
    // 0x80236E18: beq         $v0, $zero, L_80236EF4
    if (ctx->r2 == 0) {
        // 0x80236E1C: andi        $v0, $v1, 0xF
        ctx->r2 = ctx->r3 & 0XF;
            goto L_80236EF4;
    }
    // 0x80236E1C: andi        $v0, $v1, 0xF
    ctx->r2 = ctx->r3 & 0XF;
    // 0x80236E20: bne         $v0, $zero, L_80236ED8
    if (ctx->r2 != 0) {
        // 0x80236E24: nop
    
            goto L_80236ED8;
    }
    // 0x80236E24: nop

    // 0x80236E28: jal         0x8004F144
    // 0x80236E2C: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x80236E2C: nop

    after_0:
    // 0x80236E30: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x80236E34: beq         $s0, $zero, L_80236ED8
    if (ctx->r16 == 0) {
        // 0x80236E38: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80236ED8;
    }
    // 0x80236E38: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80236E3C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80236E40: lbu         $v0, 0x2($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X2);
    // 0x80236E44: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x80236E48: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80236E4C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
    // 0x80236E50: lbu         $v1, 0xC($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XC);
    // 0x80236E54: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80236E58: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x80236E5C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80236E60: sb          $v0, 0xE($s0)
    MEM_B(0XE, ctx->r16) = ctx->r2;
    // 0x80236E64: jal         0x800A3450
    // 0x80236E68: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_1;
    // 0x80236E68: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    after_1:
    // 0x80236E6C: lhu         $v1, 0x20($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X20);
    // 0x80236E70: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80236E74: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236E78: jal         0x800A3450
    // 0x80236E7C: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x80236E7C: sh          $v1, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r3;
    after_2:
    // 0x80236E80: lhu         $v1, 0x1C($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1C);
    // 0x80236E84: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80236E88: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236E8C: jal         0x800A3450
    // 0x80236E90: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80236E90: sh          $v1, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r3;
    after_3:
    // 0x80236E94: lui         $a1, 0x3D48
    ctx->r5 = S32(0X3D48 << 16);
    // 0x80236E98: ori         $a1, $a1, 0x4E
    ctx->r5 = ctx->r5 | 0X4E;
    // 0x80236E9C: lhu         $a0, 0x1E($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X1E);
    // 0x80236EA0: lui         $v1, 0x2E40
    ctx->r3 = S32(0X2E40 << 16);
    // 0x80236EA4: ori         $v1, $v1, 0x4040
    ctx->r3 = ctx->r3 | 0X4040;
    // 0x80236EA8: sw          $v1, 0x18($s0)
    MEM_W(0X18, ctx->r16) = ctx->r3;
    // 0x80236EAC: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x80236EB0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80236EB4: sw          $a1, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r5;
    // 0x80236EB8: sb          $v1, 0x22($s0)
    MEM_B(0X22, ctx->r16) = ctx->r3;
    // 0x80236EBC: sb          $zero, 0x23($s0)
    MEM_B(0X23, ctx->r16) = 0;
    // 0x80236EC0: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80236EC4: jal         0x800A3450
    // 0x80236EC8: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80236EC8: sh          $a0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r4;
    after_4:
    // 0x80236ECC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236ED0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80236ED4: sh          $v0, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r2;
L_80236ED8:
    // 0x80236ED8: jal         0x800A3450
    // 0x80236EDC: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80236EDC: nop

    after_5:
    // 0x80236EE0: lbu         $v1, 0x9($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X9);
    // 0x80236EE4: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80236EE8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80236EEC: j           L_80236EFC
    // 0x80236EF0: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
        goto L_80236EFC;
    // 0x80236EF0: sb          $v1, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r3;
L_80236EF4:
    // 0x80236EF4: jal         0x8004F5C4
    // 0x80236EF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_6;
    // 0x80236EF8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_80236EFC:
    // 0x80236EFC: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80236F00: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80236F04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236F08: jr          $ra
    // 0x80236F0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236F0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802358AC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802358AC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x802358B0: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x802358B4: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x802358B8: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x802358BC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x802358C0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x802358C4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x802358C8: lbu         $v0, 0x0($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X0);
    // 0x802358CC: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802358D0: beq         $v0, $zero, L_80235970
    if (ctx->r2 == 0) {
        // 0x802358D4: addu        $s2, $a1, $zero
        ctx->r18 = ADD32(ctx->r5, 0);
            goto L_80235970;
    }
    // 0x802358D4: addu        $s2, $a1, $zero
    ctx->r18 = ADD32(ctx->r5, 0);
    // 0x802358D8: addiu       $s1, $s2, 0x38
    ctx->r17 = ADD32(ctx->r18, 0X38);
    // 0x802358DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x802358E0: addiu       $a1, $s3, 0x14
    ctx->r5 = ADD32(ctx->r19, 0X14);
    // 0x802358E4: jal         0x8009A3B4
    // 0x802358E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x802358E8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x802358EC: addiu       $s0, $s2, 0x30
    ctx->r16 = ADD32(ctx->r18, 0X30);
    // 0x802358F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802358F4: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x802358F8: jal         0x8009A3B4
    // 0x802358FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802358FC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x80235900: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80235904: lhu         $v0, 0x3A($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X3A);
    // 0x80235908: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8023590C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80235910: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80235914: addiu       $v0, $v0, -0x280
    ctx->r2 = ADD32(ctx->r2, -0X280);
    // 0x80235918: sh          $v0, 0x3A($s2)
    MEM_H(0X3A, ctx->r18) = ctx->r2;
    // 0x8023591C: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x80235920: lui         $s0, 0x200
    ctx->r16 = S32(0X200 << 16);
    // 0x80235924: addiu       $v0, $s3, 0xC0
    ctx->r2 = ADD32(ctx->r19, 0XC0);
    // 0x80235928: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023592C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80235930: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80235934: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80235938: jal         0x80051E18
    // 0x8023593C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_2;
    // 0x8023593C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_2:
    // 0x80235940: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80235944: addiu       $a1, $zero, 0x60
    ctx->r5 = ADD32(0, 0X60);
    // 0x80235948: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023594C: lbu         $v1, 0x1($s3)
    ctx->r3 = MEM_BU(ctx->r19, 0X1);
    // 0x80235950: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x80235954: addiu       $v0, $s3, 0xC8
    ctx->r2 = ADD32(ctx->r19, 0XC8);
    // 0x80235958: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023595C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80235960: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80235964: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80235968: jal         0x80051E18
    // 0x8023596C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_3;
    // 0x8023596C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
L_80235970:
    // 0x80235970: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80235974: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80235978: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8023597C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80235980: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80235984: jr          $ra
    // 0x80235988: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80235988: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8022FCF8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022FCF8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022FCFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022FD00: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022FD04: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022FD08: addu        $s1, $a1, $zero
    ctx->r17 = ADD32(ctx->r5, 0);
    // 0x8022FD0C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022FD10: addiu       $t1, $zero, -0x7DF0
    ctx->r9 = ADD32(0, -0X7DF0);
    // 0x8022FD14: addiu       $t0, $zero, 0x1F
    ctx->r8 = ADD32(0, 0X1F);
    // 0x8022FD18: addiu       $a3, $zero, -0x8000
    ctx->r7 = ADD32(0, -0X8000);
    // 0x8022FD1C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    // 0x8022FD20: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022FD24: sh          $zero, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = 0;
L_8022FD28:
    // 0x8022FD28: lhu         $v0, 0x182($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X182);
    // 0x8022FD2C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FD30: blez        $v0, L_8022FD68
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8022FD34: sh          $t1, 0x186($a1)
        MEM_H(0X186, ctx->r5) = ctx->r9;
            goto L_8022FD68;
    }
    // 0x8022FD34: sh          $t1, 0x186($a1)
    MEM_H(0X186, ctx->r5) = ctx->r9;
    // 0x8022FD38: sra         $v1, $v0, 21
    ctx->r3 = S32(SIGNED(ctx->r2) >> 21);
    // 0x8022FD3C: subu        $v1, $t0, $v1
    ctx->r3 = SUB32(ctx->r8, ctx->r3);
    // 0x8022FD40: nor         $v0, $zero, $v1
    ctx->r2 = ~(0 | ctx->r3);
    // 0x8022FD44: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8022FD48: sra         $a0, $v1, 1
    ctx->r4 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8022FD4C: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x8022FD50: sll         $v1, $v1, 10
    ctx->r3 = S32(ctx->r3 << 10);
    // 0x8022FD54: sll         $v0, $a0, 5
    ctx->r2 = S32(ctx->r4 << 5);
    // 0x8022FD58: or          $v0, $v0, $a3
    ctx->r2 = ctx->r2 | ctx->r7;
    // 0x8022FD5C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022FD60: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022FD64: sh          $v1, 0x186($a1)
    MEM_H(0X186, ctx->r5) = ctx->r3;
L_8022FD68:
    // 0x8022FD68: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8022FD6C: slti        $v0, $a2, 0x4
    ctx->r2 = SIGNED(ctx->r6) < 0X4 ? 1 : 0;
    // 0x8022FD70: bne         $v0, $zero, L_8022FD28
    if (ctx->r2 != 0) {
        // 0x8022FD74: addiu       $a1, $a1, 0x8
        ctx->r5 = ADD32(ctx->r5, 0X8);
            goto L_8022FD28;
    }
    // 0x8022FD74: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x8022FD78: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022FD7C: beq         $v1, $zero, L_8022FD94
    if (ctx->r3 == 0) {
        // 0x8022FD80: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022FD94;
    }
    // 0x8022FD80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FD84: beq         $v1, $v0, L_8022FE00
    if (ctx->r3 == ctx->r2) {
        // 0x8022FD88: nop
    
            goto L_8022FE00;
    }
    // 0x8022FD88: nop

    // 0x8022FD8C: j           L_8022FE4C
    // 0x8022FD90: nop

        goto L_8022FE4C;
    // 0x8022FD90: nop

L_8022FD94:
    // 0x8022FD94: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022FD98: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022FD9C: jal         0x8004F144
    // 0x8022FDA0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004F144_2A544(rdram, ctx);
        goto after_0;
    // 0x8022FDA0: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022FDA4: beq         $v0, $zero, L_8022FDF4
    if (ctx->r2 == 0) {
        // 0x8022FDA8: sw          $v0, 0x4($s1)
        MEM_W(0X4, ctx->r17) = ctx->r2;
            goto L_8022FDF4;
    }
    // 0x8022FDA8: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x8022FDAC: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x8022FDB0: sb          $a0, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r4;
    // 0x8022FDB4: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x8022FDB8: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022FDBC: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x8022FDC0: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x8022FDC4: sb          $a0, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r4;
    // 0x8022FDC8: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x8022FDCC: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x8022FDD0: sh          $v0, 0x38($v1)
    MEM_H(0X38, ctx->r3) = ctx->r2;
    // 0x8022FDD4: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x8022FDD8: sh          $zero, 0x3A($v0)
    MEM_H(0X3A, ctx->r2) = 0;
    // 0x8022FDDC: lw          $v1, 0x4($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X4);
    // 0x8022FDE0: lhu         $v0, 0x18($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X18);
    // 0x8022FDE4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022FDE8: addiu       $a0, $zero, 0x149
    ctx->r4 = ADD32(0, 0X149);
    // 0x8022FDEC: jal         0x8002A33C
    // 0x8022FDF0: sh          $v0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022FDF0: sh          $v0, 0x3C($v1)
    MEM_H(0X3C, ctx->r3) = ctx->r2;
    after_1:
L_8022FDF4:
    // 0x8022FDF4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022FDF8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022FDFC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8022FE00:
    // 0x8022FE00: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022FE04: addiu       $v0, $v0, -0x10
    ctx->r2 = ADD32(ctx->r2, -0X10);
    // 0x8022FE08: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022FE0C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FE10: bgez        $v0, L_8022FE40
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022FE14: nop
    
            goto L_8022FE40;
    }
    // 0x8022FE14: nop

    // 0x8022FE18: lhu         $v0, 0x14($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X14);
    // 0x8022FE1C: ori         $v0, $v0, 0x42
    ctx->r2 = ctx->r2 | 0X42;
    // 0x8022FE20: sh          $v0, 0x14($s1)
    MEM_H(0X14, ctx->r17) = ctx->r2;
    // 0x8022FE24: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8022FE28: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022FE2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022FE30: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022FE34: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022FE38: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022FE3C: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8022FE40:
    // 0x8022FE40: lh          $v0, 0x16($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X16);
    // 0x8022FE44: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022FE48: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022FE4C:
    // 0x8022FE4C: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022FE50: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022FE54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022FE58: jr          $ra
    // 0x8022FE5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022FE5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80226FA8_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226FA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226FAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226FB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226FB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226FB8: lbu         $a0, 0x5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X5);
    // 0x80226FBC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226FC0: andi        $v1, $a0, 0xFF
    ctx->r3 = ctx->r4 & 0XFF;
    // 0x80226FC4: beq         $v1, $v0, L_80226FFC
    if (ctx->r3 == ctx->r2) {
        // 0x80226FC8: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80226FFC;
    }
    // 0x80226FC8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80226FCC: beql        $v0, $zero, L_80226FE4
    if (ctx->r2 == 0) {
        // 0x80226FD0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226FE4;
    }
    goto skip_0;
    // 0x80226FD0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80226FD4: beq         $v1, $zero, L_80226FF4
    if (ctx->r3 == 0) {
        // 0x80226FD8: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80226FF4;
    }
    // 0x80226FD8: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80226FDC: j           L_80227104
    // 0x80226FE0: nop

        goto L_80227104;
    // 0x80226FE0: nop

L_80226FE4:
    // 0x80226FE4: beq         $v1, $v0, L_80227070
    if (ctx->r3 == ctx->r2) {
        // 0x80226FE8: addiu       $a0, $zero, 0x1F
        ctx->r4 = ADD32(0, 0X1F);
            goto L_80227070;
    }
    // 0x80226FE8: addiu       $a0, $zero, 0x1F
    ctx->r4 = ADD32(0, 0X1F);
    // 0x80226FEC: j           L_80227104
    // 0x80226FF0: nop

        goto L_80227104;
    // 0x80226FF0: nop

L_80226FF4:
    // 0x80226FF4: j           L_80227104
    // 0x80226FF8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80227104;
    // 0x80226FF8: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80226FFC:
    // 0x80226FFC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80227000: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80227004: bne         $v0, $zero, L_80227104
    if (ctx->r2 != 0) {
        // 0x80227008: addiu       $a0, $zero, 0x56
        ctx->r4 = ADD32(0, 0X56);
            goto L_80227104;
    }
    // 0x80227008: addiu       $a0, $zero, 0x56
    ctx->r4 = ADD32(0, 0X56);
    // 0x8022700C: jal         0x8004CB2C
    // 0x80227010: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_0;
    // 0x80227010: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_0:
    // 0x80227014: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80227018: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022701C: beq         $v0, $zero, L_8022702C
    if (ctx->r2 == 0) {
        // 0x80227020: nop
    
            goto L_8022702C;
    }
    // 0x80227020: nop

    // 0x80227024: jal         0x80054578
    // 0x80227028: nop

    func_80054578_2F978(rdram, ctx);
        goto after_1;
    // 0x80227028: nop

    after_1:
L_8022702C:
    // 0x8022702C: jal         0x800600F8
    // 0x80227030: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_2;
    // 0x80227030: nop

    after_2:
    // 0x80227034: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80227038: jal         0x80070050
    // 0x8022703C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_3;
    // 0x8022703C: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_3:
    // 0x80227040: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227044: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227048: jal         0x80034844
    // 0x8022704C: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    func_80034844_FC44(rdram, ctx);
        goto after_4;
    // 0x8022704C: sb          $v0, 0x434C($at)
    MEM_B(0X434C, ctx->r1) = ctx->r2;
    after_4:
    // 0x80227050: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80227054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80227058: jal         0x80036B00
    // 0x8022705C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80036B00_11F00(rdram, ctx);
        goto after_5;
    // 0x8022705C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80227060: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x80227064: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227068: j           L_80227104
    // 0x8022706C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
        goto L_80227104;
    // 0x8022706C: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
L_80227070:
    // 0x80227070: lui         $a2, 0x8020
    ctx->r6 = S32(0X8020 << 16);
    // 0x80227074: addiu       $a2, $a2, 0x49B0
    ctx->r6 = ADD32(ctx->r6, 0X49B0);
    // 0x80227078: lbu         $v1, 0x0($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X0);
    // 0x8022707C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80227080: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80227084: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227088: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022708C: addiu       $v0, $zero, 0x708
    ctx->r2 = ADD32(0, 0X708);
    // 0x80227090: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80227094: sh          $v0, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = ctx->r2;
    // 0x80227098: addiu       $v0, $zero, -0x81
    ctx->r2 = ADD32(0, -0X81);
    // 0x8022709C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802270A0: sh          $v0, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = ctx->r2;
    // 0x802270A4: addiu       $v0, $zero, -0x28
    ctx->r2 = ADD32(0, -0X28);
    // 0x802270A8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802270AC: sh          $v0, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = ctx->r2;
    // 0x802270B0: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802270B4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802270B8: sb          $a1, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r5;
    // 0x802270BC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802270C0: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x802270C4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802270C8: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x802270CC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802270D0: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x802270D4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802270D8: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x802270DC: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802270E0: sb          $a1, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r5;
    // 0x802270E4: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802270E8: sb          $zero, 0x4A26($at)
    MEM_B(0X4A26, ctx->r1) = 0;
    // 0x802270EC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x802270F0: sb          $zero, -0x3B95($at)
    MEM_B(-0X3B95, ctx->r1) = 0;
    // 0x802270F4: ori         $v1, $v1, 0x3
    ctx->r3 = ctx->r3 | 0X3;
    // 0x802270F8: jal         0x80060590
    // 0x802270FC: sb          $v1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r3;
    func_80060590_3B990(rdram, ctx);
        goto after_6;
    // 0x802270FC: sb          $v1, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r3;
    after_6:
    // 0x80227100: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80227104:
    // 0x80227104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80227108: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022710C: jr          $ra
    // 0x80227110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80227110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227114_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80227118: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8022711C: jal         0x800600F8
    // 0x80227120: nop

    func_800600F8_3B4F8(rdram, ctx);
        goto after_0;
    // 0x80227120: nop

    after_0:
    // 0x80227124: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80227128: jr          $ra
    // 0x8022712C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022712C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802337F4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802337F4: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x802337F8: lh          $v1, 0x49C4($v1)
    ctx->r3 = MEM_H(ctx->r3, 0X49C4);
    // 0x802337FC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80233800: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80233804: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80233808: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023380C: lh          $v0, 0x14($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X14);
    // 0x80233810: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80233814: lh          $a0, 0x49C6($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X49C6);
    // 0x80233818: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8023381C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    // 0x80233820: lh          $v0, 0x16($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X16);
    // 0x80233824: subu        $a2, $a0, $v0
    ctx->r6 = SUB32(ctx->r4, ctx->r2);
    // 0x80233828: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x8023382C: lh          $a0, 0x49C8($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X49C8);
    // 0x80233830: addiu       $v1, $v1, 0x687E
    ctx->r3 = ADD32(ctx->r3, 0X687E);
    // 0x80233834: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x80233838: lh          $v0, 0x18($a1)
    ctx->r2 = MEM_H(ctx->r5, 0X18);
    // 0x8023383C: ori         $a1, $zero, 0xD0FC
    ctx->r5 = 0 | 0XD0FC;
    // 0x80233840: sltu        $v1, $a1, $v1
    ctx->r3 = ctx->r5 < ctx->r3 ? 1 : 0;
    // 0x80233844: subu        $a0, $a0, $v0
    ctx->r4 = SUB32(ctx->r4, ctx->r2);
    // 0x80233848: bne         $v1, $zero, L_8023386C
    if (ctx->r3 != 0) {
        // 0x8023384C: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_8023386C;
    }
    // 0x8023384C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80233850: addiu       $v0, $a2, 0x687E
    ctx->r2 = ADD32(ctx->r6, 0X687E);
    // 0x80233854: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80233858: bne         $v0, $zero, L_8023386C
    if (ctx->r2 != 0) {
        // 0x8023385C: addiu       $v0, $a0, 0x687E
        ctx->r2 = ADD32(ctx->r4, 0X687E);
            goto L_8023386C;
    }
    // 0x8023385C: addiu       $v0, $a0, 0x687E
    ctx->r2 = ADD32(ctx->r4, 0X687E);
    // 0x80233860: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80233864: beq         $v0, $zero, L_80233894
    if (ctx->r2 == 0) {
        // 0x80233868: addiu       $a0, $sp, 0x18
        ctx->r4 = ADD32(ctx->r29, 0X18);
            goto L_80233894;
    }
    // 0x80233868: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
L_8023386C:
    // 0x8023386C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80233870: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80233874: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80233878: sra         $v0, $v0, 2
    ctx->r2 = S32(SIGNED(ctx->r2) >> 2);
    // 0x8023387C: sra         $v1, $v1, 2
    ctx->r3 = S32(SIGNED(ctx->r3) >> 2);
    // 0x80233880: sra         $a0, $a0, 2
    ctx->r4 = S32(SIGNED(ctx->r4) >> 2);
    // 0x80233884: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80233888: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x8023388C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80233890: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
L_80233894:
    // 0x80233894: jal         0x80032308
    // 0x80233898: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_80032308_D708(rdram, ctx);
        goto after_0;
    // 0x80233898: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_0:
    // 0x8023389C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802338A0: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802338A4: jal         0x8009A3B4
    // 0x802338A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x802338A8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_1:
    // 0x802338AC: addu        $v0, $s0, $zero
    ctx->r2 = ADD32(ctx->r16, 0);
    // 0x802338B0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x802338B4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x802338B8: jr          $ra
    // 0x802338BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x802338BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802391A0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802391A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802391A4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802391A8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802391AC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802391B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802391B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802391B8: lw          $v0, -0x1228($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1228);
    // 0x802391BC: jalr        $v0
    // 0x802391C0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802391C0: nop

    after_0:
    // 0x802391C4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802391C8: jr          $ra
    // 0x802391CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802391CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80227D80_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227D80: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80227D84: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80227D88: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80227D8C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80227D90: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80227D94: sw          $ra, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r31;
    // 0x80227D98: lh          $a0, 0x4($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X4);
    // 0x80227D9C: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80227DA0: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80227DA4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227DA8: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x80227DAC: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x80227DB0: beq         $v1, $v0, L_80227DCC
    if (ctx->r3 == ctx->r2) {
        // 0x80227DB4: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80227DCC;
    }
    // 0x80227DB4: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80227DB8: bne         $v1, $v0, L_80227DC8
    if (ctx->r3 != ctx->r2) {
        // 0x80227DBC: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80227DC8;
    }
    // 0x80227DBC: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80227DC0: j           L_80227DCC
    // 0x80227DC4: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
        goto L_80227DCC;
    // 0x80227DC4: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
L_80227DC8:
    // 0x80227DC8: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_80227DCC:
    // 0x80227DCC: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x80227DD0: lw          $v1, 0xC($s0)
    ctx->r3 = MEM_W(ctx->r16, 0XC);
    // 0x80227DD4: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80227DD8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227DDC: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80227DE0: lh          $v1, 0x2($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2);
    // 0x80227DE4: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
    // 0x80227DE8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227DEC: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227DF0: beq         $a0, $v1, L_80227E18
    if (ctx->r4 == ctx->r3) {
        // 0x80227DF4: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80227E18;
    }
    // 0x80227DF4: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80227DF8: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80227DFC: jal         0x8003B85C
    // 0x80227E00: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_0;
    // 0x80227E00: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_0:
    // 0x80227E04: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80227E08: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    // 0x80227E0C: ori         $a1, $a1, 0xF
    ctx->r5 = ctx->r5 | 0XF;
    // 0x80227E10: jal         0x8003B840
    // 0x80227E14: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_1;
    // 0x80227E14: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_1:
L_80227E18:
    // 0x80227E18: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x80227E1C: lh          $a0, 0xA($s0)
    ctx->r4 = MEM_H(ctx->r16, 0XA);
    // 0x80227E20: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80227E24: sh          $v0, 0x2($s0)
    MEM_H(0X2, ctx->r16) = ctx->r2;
    // 0x80227E28: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x80227E2C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227E30: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
    // 0x80227E34: addiu       $v0, $zero, 0x3FFF
    ctx->r2 = ADD32(0, 0X3FFF);
    // 0x80227E38: beq         $v1, $v0, L_80227E54
    if (ctx->r3 == ctx->r2) {
        // 0x80227E3C: addiu       $v0, $zero, 0x7FFF
        ctx->r2 = ADD32(0, 0X7FFF);
            goto L_80227E54;
    }
    // 0x80227E3C: addiu       $v0, $zero, 0x7FFF
    ctx->r2 = ADD32(0, 0X7FFF);
    // 0x80227E40: bne         $v1, $v0, L_80227E50
    if (ctx->r3 != ctx->r2) {
        // 0x80227E44: addiu       $v0, $a0, 0x1
        ctx->r2 = ADD32(ctx->r4, 0X1);
            goto L_80227E50;
    }
    // 0x80227E44: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x80227E48: j           L_80227E54
    // 0x80227E4C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80227E54;
    // 0x80227E4C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80227E50:
    // 0x80227E50: sh          $v0, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r2;
L_80227E54:
    // 0x80227E54: lh          $v0, 0xA($s0)
    ctx->r2 = MEM_H(ctx->r16, 0XA);
    // 0x80227E58: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80227E5C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80227E60: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227E64: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x80227E68: lh          $v1, 0x8($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X8);
    // 0x80227E6C: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x80227E70: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227E74: sra         $a0, $v0, 16
    ctx->r4 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80227E78: beq         $a0, $v1, L_80227EA0
    if (ctx->r4 == ctx->r3) {
        // 0x80227E7C: addiu       $a1, $zero, 0x33
        ctx->r5 = ADD32(0, 0X33);
            goto L_80227EA0;
    }
    // 0x80227E7C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80227E80: addiu       $a2, $zero, 0x37
    ctx->r6 = ADD32(0, 0X37);
    // 0x80227E84: jal         0x8003B85C
    // 0x80227E88: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    func_8003B85C_16C5C(rdram, ctx);
        goto after_2;
    // 0x80227E88: addiu       $a3, $zero, 0x5
    ctx->r7 = ADD32(0, 0X5);
    after_2:
    // 0x80227E8C: lw          $a0, 0x88($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X88);
    // 0x80227E90: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x80227E94: ori         $a1, $a1, 0x11
    ctx->r5 = ctx->r5 | 0X11;
    // 0x80227E98: jal         0x8003B840
    // 0x80227E9C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    func_8003B840_16C40(rdram, ctx);
        goto after_3;
    // 0x80227E9C: addu        $a2, $v0, $zero
    ctx->r6 = ADD32(ctx->r2, 0);
    after_3:
L_80227EA0:
    // 0x80227EA0: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x80227EA4: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x80227EA8: lw          $ra, 0x28($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X28);
    // 0x80227EAC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80227EB0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80227EB4: jr          $ra
    // 0x80227EB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80227EB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80227EBC: nop

;}
RECOMP_FUNC void func_80230964_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230964: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230968: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023096C: jal         0x8004F418
    // 0x80230970: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80230970: nop

    after_0:
    // 0x80230974: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230978: jr          $ra
    // 0x8023097C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023097C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802329D4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802329D4: jr          $ra
    // 0x802329D8: nop

    TRACE_RETURN()
    return;
    // 0x802329D8: nop

;}
RECOMP_FUNC void func_8022F2E0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F2E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F2E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F2E8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F2EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F2F0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022F2F4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022F2F8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022F2FC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022F300: lw          $v0, -0x2030($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2030);
    // 0x8022F304: jalr        $v0
    // 0x8022F308: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8022F308: nop

    after_0:
    // 0x8022F30C: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x8022F310: bne         $v0, $zero, L_8022F320
    if (ctx->r2 != 0) {
        // 0x8022F314: nop
    
            goto L_8022F320;
    }
    // 0x8022F314: nop

    // 0x8022F318: jal         0x8005044C
    // 0x8022F31C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_1;
    // 0x8022F31C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8022F320:
    // 0x8022F320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F324: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F328: jr          $ra
    // 0x8022F32C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F32C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B29C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B29C: jr          $ra
    // 0x8023B2A0: nop

    TRACE_RETURN()
    return;
    // 0x8023B2A0: nop

;}
RECOMP_FUNC void func_8022E758_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E758: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022E75C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022E760: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022E764: jal         0x800A3450
    // 0x8022E768: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x8022E768: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022E76C: lbu         $v1, 0x4($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X4);
    // 0x8022E770: bne         $v1, $zero, L_8022E7EC
    if (ctx->r3 != 0) {
        // 0x8022E774: addu        $a3, $v0, $zero
        ctx->r7 = ADD32(ctx->r2, 0);
            goto L_8022E7EC;
    }
    // 0x8022E774: addu        $a3, $v0, $zero
    ctx->r7 = ADD32(ctx->r2, 0);
    // 0x8022E778: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022E77C: andi        $v1, $a3, 0x7
    ctx->r3 = ctx->r7 & 0X7;
    // 0x8022E780: sb          $v0, 0x4($s0)
    MEM_B(0X4, ctx->r16) = ctx->r2;
    // 0x8022E784: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8022E788: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E78C: sll         $a0, $a3, 16
    ctx->r4 = S32(ctx->r7 << 16);
    // 0x8022E790: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022E794: sra         $v1, $a0, 17
    ctx->r3 = S32(SIGNED(ctx->r4) >> 17);
    // 0x8022E798: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022E79C: sh          $v0, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r2;
    // 0x8022E7A0: addiu       $v0, $zero, 0xC4
    ctx->r2 = ADD32(0, 0XC4);
    // 0x8022E7A4: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x8022E7A8: sh          $v0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r2;
    // 0x8022E7AC: sra         $v0, $a0, 18
    ctx->r2 = S32(SIGNED(ctx->r4) >> 18);
    // 0x8022E7B0: sb          $zero, 0x5($s0)
    MEM_B(0X5, ctx->r16) = 0;
    // 0x8022E7B4: lhu         $v1, 0x0($a1)
    ctx->r3 = MEM_HU(ctx->r5, 0X0);
    // 0x8022E7B8: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x8022E7BC: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x8022E7C0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022E7C4: sh          $v1, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r3;
    // 0x8022E7C8: lhu         $v0, 0x2($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X2);
    // 0x8022E7CC: lw          $v1, 0x0($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X0);
    // 0x8022E7D0: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x8022E7D4: lhu         $v0, 0x4($v1)
    ctx->r2 = MEM_HU(ctx->r3, 0X4);
    // 0x8022E7D8: sra         $a0, $a0, 20
    ctx->r4 = S32(SIGNED(ctx->r4) >> 20);
    // 0x8022E7DC: andi        $a0, $a0, 0x3F
    ctx->r4 = ctx->r4 & 0X3F;
    // 0x8022E7E0: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x8022E7E4: j           L_8022E864
    // 0x8022E7E8: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
        goto L_8022E864;
    // 0x8022E7E8: sh          $v0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r2;
L_8022E7EC:
    // 0x8022E7EC: lbu         $v0, 0x5($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X5);
    // 0x8022E7F0: lhu         $v1, 0x6($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6);
    // 0x8022E7F4: lhu         $a0, 0x8($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X8);
    // 0x8022E7F8: lhu         $a2, 0xA($s0)
    ctx->r6 = MEM_HU(ctx->r16, 0XA);
    // 0x8022E7FC: lhu         $a1, 0xC($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0XC);
    // 0x8022E800: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x8022E804: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022E808: addiu       $a0, $a0, 0x3
    ctx->r4 = ADD32(ctx->r4, 0X3);
    // 0x8022E80C: addiu       $a2, $a2, -0xC
    ctx->r6 = ADD32(ctx->r6, -0XC);
    // 0x8022E810: sb          $v0, 0x5($s0)
    MEM_B(0X5, ctx->r16) = ctx->r2;
    // 0x8022E814: andi        $v0, $a3, 0x7
    ctx->r2 = ctx->r7 & 0X7;
    // 0x8022E818: subu        $a2, $a2, $v0
    ctx->r6 = SUB32(ctx->r6, ctx->r2);
    // 0x8022E81C: addiu       $a1, $a1, -0xC
    ctx->r5 = ADD32(ctx->r5, -0XC);
    // 0x8022E820: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x8022E824: sll         $v1, $a3, 16
    ctx->r3 = S32(ctx->r7 << 16);
    // 0x8022E828: sra         $v0, $v1, 18
    ctx->r2 = S32(SIGNED(ctx->r3) >> 18);
    // 0x8022E82C: sh          $a0, 0x8($s0)
    MEM_H(0X8, ctx->r16) = ctx->r4;
    // 0x8022E830: lhu         $a0, 0xE($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0XE);
    // 0x8022E834: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x8022E838: subu        $a1, $a1, $v0
    ctx->r5 = SUB32(ctx->r5, ctx->r2);
    // 0x8022E83C: lh          $v0, 0x6($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X6);
    // 0x8022E840: sra         $v1, $v1, 20
    ctx->r3 = S32(SIGNED(ctx->r3) >> 20);
    // 0x8022E844: andi        $v1, $v1, 0x7
    ctx->r3 = ctx->r3 & 0X7;
    // 0x8022E848: sh          $a2, 0xA($s0)
    MEM_H(0XA, ctx->r16) = ctx->r6;
    // 0x8022E84C: sh          $a1, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r5;
    // 0x8022E850: addiu       $a0, $a0, 0x10
    ctx->r4 = ADD32(ctx->r4, 0X10);
    // 0x8022E854: addu        $a0, $a0, $v1
    ctx->r4 = ADD32(ctx->r4, ctx->r3);
    // 0x8022E858: bne         $v0, $zero, L_8022E864
    if (ctx->r2 != 0) {
        // 0x8022E85C: sh          $a0, 0xE($s0)
        MEM_H(0XE, ctx->r16) = ctx->r4;
            goto L_8022E864;
    }
    // 0x8022E85C: sh          $a0, 0xE($s0)
    MEM_H(0XE, ctx->r16) = ctx->r4;
    // 0x8022E860: sb          $zero, 0x4($s0)
    MEM_B(0X4, ctx->r16) = 0;
L_8022E864:
    // 0x8022E864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022E868: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022E86C: jr          $ra
    // 0x8022E870: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022E870: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022BADC_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022BADC: lh          $v0, 0x350($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X350);
    // 0x8022BAE0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8022BAE4: beq         $v0, $zero, L_8022BB00
    if (ctx->r2 == 0) {
        // 0x8022BAE8: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_8022BB00;
    }
    // 0x8022BAE8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022BAEC: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x8022BAF0: sh          $v0, 0x350($a0)
    MEM_H(0X350, ctx->r4) = ctx->r2;
    // 0x8022BAF4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022BAF8: bne         $v0, $zero, L_8022BB2C
    if (ctx->r2 != 0) {
        // 0x8022BAFC: nop
    
            goto L_8022BB2C;
    }
    // 0x8022BAFC: nop

L_8022BB00:
    // 0x8022BB00: lb          $v0, 0xA7($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XA7);
    // 0x8022BB04: bgez        $v0, L_8022BB2C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022BB08: addiu       $v0, $zero, 0x49
        ctx->r2 = ADD32(0, 0X49);
            goto L_8022BB2C;
    }
    // 0x8022BB08: addiu       $v0, $zero, 0x49
    ctx->r2 = ADD32(0, 0X49);
    // 0x8022BB0C: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x8022BB10: bnel        $v1, $v0, L_8022BB2C
    if (ctx->r3 != ctx->r2) {
        // 0x8022BB14: sb          $zero, 0xA($a0)
        MEM_B(0XA, ctx->r4) = 0;
            goto L_8022BB2C;
    }
    goto skip_0;
    // 0x8022BB14: sb          $zero, 0xA($a0)
    MEM_B(0XA, ctx->r4) = 0;
    skip_0:
    // 0x8022BB18: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8022BB1C: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022BB20: sb          $v1, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r3;
    // 0x8022BB24: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022BB28: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_8022BB2C:
    // 0x8022BB2C: jr          $ra
    // 0x8022BB30: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8022BB30: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80238D50_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238D50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238D54: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80238D58: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80238D5C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238D60: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238D64: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238D68: lw          $v0, -0x1554($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1554);
    // 0x80238D6C: jalr        $v0
    // 0x80238D70: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80238D70: nop

    after_0:
    // 0x80238D74: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80238D78: jr          $ra
    // 0x80238D7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80238D7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802297F4_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802297F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802297F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802297FC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229800: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80229804: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80229808: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022980C: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80229810: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80229814: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80229818: jal         0x8009A3B4
    // 0x8022981C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022981C: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x80229820: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80229824: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80229828: jal         0x8009A3B4
    // 0x8022982C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022982C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80229830: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80229834: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80229838: jal         0x8009A3B4
    // 0x8022983C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022983C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80229840: lhu         $v0, 0x380($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X380);
    // 0x80229844: andi        $v0, $v0, 0x4000
    ctx->r2 = ctx->r2 & 0X4000;
    // 0x80229848: beq         $v0, $zero, L_80229874
    if (ctx->r2 == 0) {
        // 0x8022984C: addiu       $s1, $s0, 0x380
        ctx->r17 = ADD32(ctx->r16, 0X380);
            goto L_80229874;
    }
    // 0x8022984C: addiu       $s1, $s0, 0x380
    ctx->r17 = ADD32(ctx->r16, 0X380);
    // 0x80229850: addiu       $a0, $zero, 0x4210
    ctx->r4 = ADD32(0, 0X4210);
    // 0x80229854: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80229858: addiu       $v0, $s0, 0x40
    ctx->r2 = ADD32(ctx->r16, 0X40);
L_8022985C:
    // 0x8022985C: sh          $a0, 0x186($v0)
    MEM_H(0X186, ctx->r2) = ctx->r4;
    // 0x80229860: addiu       $v1, $v1, -0x1
    ctx->r3 = ADD32(ctx->r3, -0X1);
    // 0x80229864: bgez        $v1, L_8022985C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80229868: addiu       $v0, $v0, -0x8
        ctx->r2 = ADD32(ctx->r2, -0X8);
            goto L_8022985C;
    }
    // 0x80229868: addiu       $v0, $v0, -0x8
    ctx->r2 = ADD32(ctx->r2, -0X8);
    // 0x8022986C: j           L_8022987C
    // 0x80229870: nop

        goto L_8022987C;
    // 0x80229870: nop

L_80229874:
    // 0x80229874: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80229878: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
L_8022987C:
    // 0x8022987C: lw          $v1, 0xD0($s1)
    ctx->r3 = MEM_W(ctx->r17, 0XD0);
    // 0x80229880: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80229884: jal         0x800A3450
    // 0x80229888: sh          $v0, 0x15E($v1)
    MEM_H(0X15E, ctx->r3) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80229888: sh          $v0, 0x15E($v1)
    MEM_H(0X15E, ctx->r3) = ctx->r2;
    after_3:
    // 0x8022988C: jal         0x80049EBC
    // 0x80229890: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    func_80049EBC_252BC(rdram, ctx);
        goto after_4;
    // 0x80229890: sh          $v0, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r2;
    after_4:
    // 0x80229894: lw          $v0, 0xCC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XCC);
    // 0x80229898: addiu       $v1, $v0, 0x1
    ctx->r3 = ADD32(ctx->r2, 0X1);
    // 0x8022989C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x802298A0: sw          $v1, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = ctx->r3;
    // 0x802298A4: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x802298A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802298AC: lhu         $v0, -0x2400($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X2400);
    // 0x802298B0: lhu         $v1, 0xDA($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0XDA);
    // 0x802298B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802298B8: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x802298BC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x802298C0: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x802298C4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x802298C8: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x802298CC: lw          $v0, 0xCC($s1)
    ctx->r2 = MEM_W(ctx->r17, 0XCC);
    // 0x802298D0: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x802298D4: sw          $v0, 0xCC($s1)
    MEM_W(0XCC, ctx->r17) = ctx->r2;
    // 0x802298D8: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802298DC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802298E0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802298E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802298E8: lw          $v0, -0x2948($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2948);
    // 0x802298EC: jalr        $v0
    // 0x802298F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_5;
    // 0x802298F0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_5:
    // 0x802298F4: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x802298F8: andi        $v0, $v0, 0x400
    ctx->r2 = ctx->r2 & 0X400;
    // 0x802298FC: beq         $v0, $zero, L_80229920
    if (ctx->r2 == 0) {
        // 0x80229900: nop
    
            goto L_80229920;
    }
    // 0x80229900: nop

    // 0x80229904: lbu         $v0, 0xB4($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XB4);
    // 0x80229908: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022990C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80229910: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80229914: lw          $v0, -0x2918($at)
    ctx->r2 = MEM_W(ctx->r1, -0X2918);
    // 0x80229918: jalr        $v0
    // 0x8022991C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x8022991C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
L_80229920:
    // 0x80229920: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229924: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80229928: beq         $v0, $zero, L_80229970
    if (ctx->r2 == 0) {
        // 0x8022992C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229970;
    }
    // 0x8022992C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229930: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80229934: beq         $v1, $v0, L_8022994C
    if (ctx->r3 == ctx->r2) {
        // 0x80229938: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022994C;
    }
    // 0x80229938: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022993C: beq         $v1, $v0, L_80229958
    if (ctx->r3 == ctx->r2) {
        // 0x80229940: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229958;
    }
    // 0x80229940: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229944: j           L_80229964
    // 0x80229948: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
        goto L_80229964;
    // 0x80229948: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_8022994C:
    // 0x8022994C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80229950: j           L_80229960
    // 0x80229954: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80229960;
    // 0x80229954: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80229958:
    // 0x80229958: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x8022995C: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
L_80229960:
    // 0x80229960: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
L_80229964:
    // 0x80229964: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229968: andi        $v0, $v0, 0xFFFE
    ctx->r2 = ctx->r2 & 0XFFFE;
    // 0x8022996C: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80229970:
    // 0x80229970: lhu         $v0, 0xC($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0XC);
    // 0x80229974: beq         $v0, $zero, L_80229980
    if (ctx->r2 == 0) {
        // 0x80229978: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80229980;
    }
    // 0x80229978: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022997C: sh          $v0, 0xC($s1)
    MEM_H(0XC, ctx->r17) = ctx->r2;
L_80229980:
    // 0x80229980: lh          $v0, 0xA($s1)
    ctx->r2 = MEM_H(ctx->r17, 0XA);
    // 0x80229984: beq         $v0, $zero, L_80229994
    if (ctx->r2 == 0) {
        // 0x80229988: addu        $v1, $v0, $zero
        ctx->r3 = ADD32(ctx->r2, 0);
            goto L_80229994;
    }
    // 0x80229988: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022998C: addiu       $v0, $v1, -0x1
    ctx->r2 = ADD32(ctx->r3, -0X1);
    // 0x80229990: sh          $v0, 0xA($s1)
    MEM_H(0XA, ctx->r17) = ctx->r2;
L_80229994:
    // 0x80229994: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229998: andi        $v0, $v0, 0x200
    ctx->r2 = ctx->r2 & 0X200;
    // 0x8022999C: beq         $v0, $zero, L_802299D8
    if (ctx->r2 == 0) {
        // 0x802299A0: nop
    
            goto L_802299D8;
    }
    // 0x802299A0: nop

    // 0x802299A4: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x802299A8: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x802299AC: beq         $v0, $a1, L_802299C8
    if (ctx->r2 == ctx->r5) {
        // 0x802299B0: nop
    
            goto L_802299C8;
    }
    // 0x802299B0: nop

    // 0x802299B4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802299B8: jal         0x800502EC
    // 0x802299BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_7;
    // 0x802299BC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x802299C0: j           L_802299E0
    // 0x802299C4: nop

        goto L_802299E0;
    // 0x802299C4: nop

L_802299C8:
    // 0x802299C8: jal         0x800504EC
    // 0x802299CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_8;
    // 0x802299CC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x802299D0: j           L_802299E0
    // 0x802299D4: nop

        goto L_802299E0;
    // 0x802299D4: nop

L_802299D8:
    // 0x802299D8: jal         0x80051770
    // 0x802299DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_9;
    // 0x802299DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_802299E0:
    // 0x802299E0: jal         0x80051248
    // 0x802299E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_10;
    // 0x802299E4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x802299E8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802299EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802299F0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802299F4: jal         0x80047284
    // 0x802299F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_11;
    // 0x802299F8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_11:
    // 0x802299FC: jal         0x8022B290
    // 0x80229A00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B290_ovl3(rdram, ctx);
        goto after_12;
    // 0x80229A00: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_12:
    // 0x80229A04: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80229A08: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80229A0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80229A10: jr          $ra
    // 0x80229A14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229A14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8023B254_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B254: jr          $ra
    // 0x8023B258: nop

    TRACE_RETURN()
    return;
    // 0x8023B258: nop

;}
RECOMP_FUNC void func_8023B37C_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B37C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023B380: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023B384: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8023B388: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B38C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B390: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B394: lw          $v0, -0xF60($at)
    ctx->r2 = MEM_W(ctx->r1, -0XF60);
    // 0x8023B398: jalr        $v0
    // 0x8023B39C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023B39C: nop

    after_0:
    // 0x8023B3A0: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023B3A4: jr          $ra
    // 0x8023B3A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023B3A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80234A90_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234A90: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80234A94: lhu         $v0, 0x44($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X44);
    // 0x80234A98: lhu         $v1, 0x4C($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X4C);
    // 0x80234A9C: lhu         $a0, 0x4E($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X4E);
    // 0x80234AA0: lhu         $a1, 0x50($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X50);
    // 0x80234AA4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234AA8: sh          $v0, 0x44($a3)
    MEM_H(0X44, ctx->r7) = ctx->r2;
    // 0x80234AAC: lhu         $v0, 0x46($a3)
    ctx->r2 = MEM_HU(ctx->r7, 0X46);
    // 0x80234AB0: lhu         $v1, 0x48($a3)
    ctx->r3 = MEM_HU(ctx->r7, 0X48);
    // 0x80234AB4: lh          $a2, 0x44($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X44);
    // 0x80234AB8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80234ABC: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x80234AC0: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
    // 0x80234AC4: slti        $v0, $a2, -0x6000
    ctx->r2 = SIGNED(ctx->r6) < -0X6000 ? 1 : 0;
    // 0x80234AC8: beq         $v0, $zero, L_80234AD8
    if (ctx->r2 == 0) {
        // 0x80234ACC: sh          $v1, 0x48($a3)
        MEM_H(0X48, ctx->r7) = ctx->r3;
            goto L_80234AD8;
    }
    // 0x80234ACC: sh          $v1, 0x48($a3)
    MEM_H(0X48, ctx->r7) = ctx->r3;
    // 0x80234AD0: j           L_80234AE4
    // 0x80234AD4: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
        goto L_80234AE4;
    // 0x80234AD4: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
L_80234AD8:
    // 0x80234AD8: slti        $v0, $a2, 0x6001
    ctx->r2 = SIGNED(ctx->r6) < 0X6001 ? 1 : 0;
    // 0x80234ADC: bne         $v0, $zero, L_80234AE8
    if (ctx->r2 != 0) {
        // 0x80234AE0: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_80234AE8;
    }
    // 0x80234AE0: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80234AE4:
    // 0x80234AE4: sh          $v0, 0x44($a3)
    MEM_H(0X44, ctx->r7) = ctx->r2;
L_80234AE8:
    // 0x80234AE8: lh          $v1, 0x46($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X46);
    // 0x80234AEC: slti        $v0, $v1, -0x6000
    ctx->r2 = SIGNED(ctx->r3) < -0X6000 ? 1 : 0;
    // 0x80234AF0: bne         $v0, $zero, L_80234B04
    if (ctx->r2 != 0) {
        // 0x80234AF4: addiu       $v0, $zero, -0x6000
        ctx->r2 = ADD32(0, -0X6000);
            goto L_80234B04;
    }
    // 0x80234AF4: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
    // 0x80234AF8: slti        $v0, $v1, 0x6001
    ctx->r2 = SIGNED(ctx->r3) < 0X6001 ? 1 : 0;
    // 0x80234AFC: bne         $v0, $zero, L_80234B08
    if (ctx->r2 != 0) {
        // 0x80234B00: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_80234B08;
    }
    // 0x80234B00: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80234B04:
    // 0x80234B04: sh          $v0, 0x46($a3)
    MEM_H(0X46, ctx->r7) = ctx->r2;
L_80234B08:
    // 0x80234B08: lh          $v1, 0x48($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X48);
    // 0x80234B0C: slti        $v0, $v1, -0x6000
    ctx->r2 = SIGNED(ctx->r3) < -0X6000 ? 1 : 0;
    // 0x80234B10: bne         $v0, $zero, L_80234B24
    if (ctx->r2 != 0) {
        // 0x80234B14: addiu       $v0, $zero, -0x6000
        ctx->r2 = ADD32(0, -0X6000);
            goto L_80234B24;
    }
    // 0x80234B14: addiu       $v0, $zero, -0x6000
    ctx->r2 = ADD32(0, -0X6000);
    // 0x80234B18: slti        $v0, $v1, 0x6001
    ctx->r2 = SIGNED(ctx->r3) < 0X6001 ? 1 : 0;
    // 0x80234B1C: bne         $v0, $zero, L_80234B28
    if (ctx->r2 != 0) {
        // 0x80234B20: addiu       $v0, $zero, 0x6000
        ctx->r2 = ADD32(0, 0X6000);
            goto L_80234B28;
    }
    // 0x80234B20: addiu       $v0, $zero, 0x6000
    ctx->r2 = ADD32(0, 0X6000);
L_80234B24:
    // 0x80234B24: sh          $v0, 0x48($a3)
    MEM_H(0X48, ctx->r7) = ctx->r2;
L_80234B28:
    // 0x80234B28: lh          $v0, 0x44($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X44);
    // 0x80234B2C: lw          $v1, 0x1C($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X1C);
    // 0x80234B30: lh          $a0, 0x46($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X46);
    // 0x80234B34: lw          $a1, 0x20($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X20);
    // 0x80234B38: lhu         $a2, 0x18($a3)
    ctx->r6 = MEM_HU(ctx->r7, 0X18);
    // 0x80234B3C: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80234B40: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234B44: lh          $v0, 0x48($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X48);
    // 0x80234B48: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x80234B4C: addu        $a1, $a1, $a0
    ctx->r5 = ADD32(ctx->r5, ctx->r4);
    // 0x80234B50: sw          $v1, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r3;
    // 0x80234B54: lw          $v1, 0x24($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X24);
    // 0x80234B58: lhu         $a0, 0x14($a3)
    ctx->r4 = MEM_HU(ctx->r7, 0X14);
    // 0x80234B5C: sw          $a1, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->r5;
    // 0x80234B60: lhu         $a1, 0x16($a3)
    ctx->r5 = MEM_HU(ctx->r7, 0X16);
    // 0x80234B64: sh          $a2, 0x18($a3)
    MEM_H(0X18, ctx->r7) = ctx->r6;
    // 0x80234B68: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x80234B6C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234B70: sw          $v1, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r3;
    // 0x80234B74: sh          $a0, 0x14($a3)
    MEM_H(0X14, ctx->r7) = ctx->r4;
    // 0x80234B78: jr          $ra
    // 0x80234B7C: sh          $a1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r5;
    TRACE_RETURN()
    return;
    // 0x80234B7C: sh          $a1, 0x16($a3)
    MEM_H(0X16, ctx->r7) = ctx->r5;
;}
RECOMP_FUNC void func_8022F330_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022F334: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F338: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F33C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022F340: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8022F344: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F348: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022F34C: jal         0x8004D5D4
    // 0x8022F350: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8022F350: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022F354: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F358: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022F35C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022F360: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x8022F364: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x8022F368: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x8022F36C: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022F370: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022F374: jal         0x80050294
    // 0x8022F378: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022F378: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_1:
    // 0x8022F37C: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x8022F380: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F384: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x8022F388: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x8022F38C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8022F390: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
    // 0x8022F394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022F398: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F39C: jr          $ra
    // 0x8022F3A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022F3A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022EC28_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022EC28: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022EC2C: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022EC30: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022EC34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022EC38: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022EC3C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022EC40: lhu         $v0, 0x6($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X6);
    // 0x8022EC44: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022EC48: sra         $v0, $v0, 18
    ctx->r2 = S32(SIGNED(ctx->r2) >> 18);
    // 0x8022EC4C: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x8022EC50: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8022EC54: lbu         $s1, -0x2060($s1)
    ctx->r17 = MEM_BU(ctx->r17, -0X2060);
    // 0x8022EC58: jal         0x8003B878
    // 0x8022EC5C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    func_8003B878_16C78(rdram, ctx);
        goto after_0;
    // 0x8022EC5C: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    after_0:
    // 0x8022EC60: lbu         $a0, 0x5($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X5);
    // 0x8022EC64: sll         $v1, $a0, 8
    ctx->r3 = S32(ctx->r4 << 8);
    // 0x8022EC68: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022EC6C: sll         $v1, $v1, 8
    ctx->r3 = S32(ctx->r3 << 8);
    // 0x8022EC70: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022EC74: subu        $s0, $s0, $v1
    ctx->r16 = SUB32(ctx->r16, ctx->r3);
    // 0x8022EC78: sw          $s0, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r16;
    // 0x8022EC7C: lh          $v1, 0xA($s2)
    ctx->r3 = MEM_H(ctx->r18, 0XA);
    // 0x8022EC80: lhu         $a0, 0xC($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0XC);
    // 0x8022EC84: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022EC88: or          $v1, $v1, $a0
    ctx->r3 = ctx->r3 | ctx->r4;
    // 0x8022EC8C: sw          $v1, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r3;
    // 0x8022EC90: lh          $a1, 0xE($s2)
    ctx->r5 = MEM_H(ctx->r18, 0XE);
    // 0x8022EC94: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x8022EC98: or          $v1, $s1, $v1
    ctx->r3 = ctx->r17 | ctx->r3;
    // 0x8022EC9C: addiu       $a0, $s1, 0x1F
    ctx->r4 = ADD32(ctx->r17, 0X1F);
    // 0x8022ECA0: sw          $v1, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r3;
    // 0x8022ECA4: lui         $v1, 0x4E
    ctx->r3 = S32(0X4E << 16);
    // 0x8022ECA8: or          $v1, $a0, $v1
    ctx->r3 = ctx->r4 | ctx->r3;
    // 0x8022ECAC: ori         $s1, $s1, 0x1F00
    ctx->r17 = ctx->r17 | 0X1F00;
    // 0x8022ECB0: ori         $a0, $a0, 0x1F00
    ctx->r4 = ctx->r4 | 0X1F00;
    // 0x8022ECB4: sw          $v1, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r3;
    // 0x8022ECB8: sw          $s1, 0x1C($v0)
    MEM_W(0X1C, ctx->r2) = ctx->r17;
    // 0x8022ECBC: sw          $a0, 0x24($v0)
    MEM_W(0X24, ctx->r2) = ctx->r4;
    // 0x8022ECC0: sll         $a1, $a1, 16
    ctx->r5 = S32(ctx->r5 << 16);
    // 0x8022ECC4: sw          $a1, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r5;
    // 0x8022ECC8: lhu         $a0, 0x8($s2)
    ctx->r4 = MEM_HU(ctx->r18, 0X8);
    // 0x8022ECCC: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x8022ECD0: sw          $v1, 0x20($v0)
    MEM_W(0X20, ctx->r2) = ctx->r3;
    // 0x8022ECD4: sw          $a0, 0x18($v0)
    MEM_W(0X18, ctx->r2) = ctx->r4;
    // 0x8022ECD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022ECDC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022ECE0: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022ECE4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ECE8: jr          $ra
    // 0x8022ECEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022ECEC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023B180_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B180: addiu       $sp, $sp, -0x98
    ctx->r29 = ADD32(ctx->r29, -0X98);
    // 0x8023B184: sw          $s2, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r18;
    // 0x8023B188: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023B18C: sw          $ra, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r31;
    // 0x8023B190: sw          $s1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r17;
    // 0x8023B194: sw          $s0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r16;
    // 0x8023B198: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x8023B19C: bne         $v0, $zero, L_8023B1D4
    if (ctx->r2 != 0) {
        // 0x8023B1A0: nop
    
            goto L_8023B1D4;
    }
    // 0x8023B1A0: nop

    // 0x8023B1A4: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8023B1A8: addiu       $a1, $s2, 0x3
    ctx->r5 = ADD32(ctx->r18, 0X3);
    // 0x8023B1AC: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8023B1B0: jal         0x8004D5D4
    // 0x8023B1B4: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x8023B1B4: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    after_0:
    // 0x8023B1B8: lbu         $v0, 0x8($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X8);
    // 0x8023B1BC: lui         $v1, 0x80
    ctx->r3 = S32(0X80 << 16);
    // 0x8023B1C0: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8023B1C4: sh          $zero, 0x10($s2)
    MEM_H(0X10, ctx->r18) = 0;
    // 0x8023B1C8: sw          $v1, 0x40($s2)
    MEM_W(0X40, ctx->r18) = ctx->r3;
    // 0x8023B1CC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B1D0: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
L_8023B1D4:
    // 0x8023B1D4: lbu         $v0, 0x3($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X3);
    // 0x8023B1D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B1DC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B1E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B1E4: lw          $v0, -0xF50($at)
    ctx->r2 = MEM_W(ctx->r1, -0XF50);
    // 0x8023B1E8: jalr        $v0
    // 0x8023B1EC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x8023B1EC: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x8023B1F0: addiu       $s1, $s2, 0x18
    ctx->r17 = ADD32(ctx->r18, 0X18);
    // 0x8023B1F4: jal         0x8002C654
    // 0x8023B1F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_2;
    // 0x8023B1F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8023B1FC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023B200: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x8023B204: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x8023B208: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8023B20C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8023B210: jal         0x80031DA8
    // 0x8023B214: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80031DA8_D1A8(rdram, ctx);
        goto after_3;
    // 0x8023B214: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_3:
    // 0x8023B218: addiu       $s0, $sp, 0x28
    ctx->r16 = ADD32(ctx->r29, 0X28);
    // 0x8023B21C: jal         0x8002C654
    // 0x8023B220: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8002C654_7A54(rdram, ctx);
        goto after_4;
    // 0x8023B220: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x8023B224: lh          $a0, 0xC($s2)
    ctx->r4 = MEM_H(ctx->r18, 0XC);
    // 0x8023B228: jal         0x80031BB4
    // 0x8023B22C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80031BB4_CFB4(rdram, ctx);
        goto after_5;
    // 0x8023B22C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_5:
    // 0x8023B230: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023B234: jal         0x8003077C
    // 0x8023B238: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8003077C_BB7C(rdram, ctx);
        goto after_6;
    // 0x8023B238: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8023B23C: lw          $ra, 0x94($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X94);
    // 0x8023B240: lw          $s2, 0x90($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X90);
    // 0x8023B244: lw          $s1, 0x8C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8C);
    // 0x8023B248: lw          $s0, 0x88($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X88);
    // 0x8023B24C: jr          $ra
    // 0x8023B250: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
    TRACE_RETURN()
    return;
    // 0x8023B250: addiu       $sp, $sp, 0x98
    ctx->r29 = ADD32(ctx->r29, 0X98);
;}
RECOMP_FUNC void func_80230BA0_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230BA0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80230BA4: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80230BA8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230BAC: addiu       $a0, $s0, 0x2C
    ctx->r4 = ADD32(ctx->r16, 0X2C);
    // 0x80230BB0: sw          $ra, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r31;
    // 0x80230BB4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80230BB8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80230BBC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80230BC0: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230BC4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80230BC8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80230BCC: jal         0x8009A3B4
    // 0x80230BD0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80230BD0: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230BD4: addiu       $a0, $s0, 0x34
    ctx->r4 = ADD32(ctx->r16, 0X34);
    // 0x80230BD8: addiu       $a1, $s0, 0x1C
    ctx->r5 = ADD32(ctx->r16, 0X1C);
    // 0x80230BDC: jal         0x8009A3B4
    // 0x80230BE0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80230BE0: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80230BE4: addiu       $a0, $s0, 0x5C
    ctx->r4 = ADD32(ctx->r16, 0X5C);
    // 0x80230BE8: addiu       $a1, $s0, 0x54
    ctx->r5 = ADD32(ctx->r16, 0X54);
    // 0x80230BEC: jal         0x8009A3B4
    // 0x80230BF0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x80230BF0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80230BF4: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80230BF8: jal         0x800A3450
    // 0x80230BFC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80230BFC: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    after_3:
    // 0x80230C00: lbu         $v1, 0x8($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X8);
    // 0x80230C04: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230C08: sh          $v0, 0x31E($s0)
    MEM_H(0X31E, ctx->r16) = ctx->r2;
    // 0x80230C0C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80230C10: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80230C14: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230C18: lw          $v0, -0x1FE0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1FE0);
    // 0x80230C1C: addiu       $s1, $s0, 0x308
    ctx->r17 = ADD32(ctx->r16, 0X308);
    // 0x80230C20: jalr        $v0
    // 0x80230C24: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80230C24: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_4:
    // 0x80230C28: lhu         $v0, 0x31C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X31C);
    // 0x80230C2C: andi        $v0, $v0, 0x80
    ctx->r2 = ctx->r2 & 0X80;
    // 0x80230C30: bne         $v0, $zero, L_80230C44
    if (ctx->r2 != 0) {
        // 0x80230C34: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80230C44;
    }
    // 0x80230C34: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230C38: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230C3C: bne         $a1, $v0, L_80230C74
    if (ctx->r5 != ctx->r2) {
        // 0x80230C40: nop
    
            goto L_80230C74;
    }
    // 0x80230C40: nop

L_80230C44:
    // 0x80230C44: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80230C48: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230C4C: beq         $v0, $a1, L_80230C64
    if (ctx->r2 == ctx->r5) {
        // 0x80230C50: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230C64;
    }
    // 0x80230C50: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230C54: jal         0x80050294
    // 0x80230C58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80230C58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80230C5C: j           L_80230CC4
    // 0x80230C60: nop

        goto L_80230CC4;
    // 0x80230C60: nop

L_80230C64:
    // 0x80230C64: jal         0x8005044C
    // 0x80230C68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80230C68: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80230C6C: j           L_80230CC4
    // 0x80230C70: nop

        goto L_80230CC4;
    // 0x80230C70: nop

L_80230C74:
    // 0x80230C74: lbu         $v0, 0xAD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAD);
    // 0x80230C78: lui         $s2, 0x801C
    ctx->r18 = S32(0X801C << 16);
    // 0x80230C7C: addiu       $s2, $s2, -0x3D90
    ctx->r18 = ADD32(ctx->r18, -0X3D90);
    // 0x80230C80: beq         $v0, $a1, L_80230C98
    if (ctx->r2 == ctx->r5) {
        // 0x80230C84: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80230C98;
    }
    // 0x80230C84: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230C88: jal         0x800502EC
    // 0x80230C8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_7;
    // 0x80230C8C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_7:
    // 0x80230C90: j           L_80230CA0
    // 0x80230C94: nop

        goto L_80230CA0;
    // 0x80230C94: nop

L_80230C98:
    // 0x80230C98: jal         0x800504EC
    // 0x80230C9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_8;
    // 0x80230C9C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
L_80230CA0:
    // 0x80230CA0: lhu         $v0, 0x54($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X54);
    // 0x80230CA4: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
    // 0x80230CA8: lh          $v0, 0x54($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X54);
    // 0x80230CAC: bne         $v0, $zero, L_80230CB8
    if (ctx->r2 != 0) {
        // 0x80230CB0: addu        $v1, $zero, $zero
        ctx->r3 = ADD32(0, 0);
            goto L_80230CB8;
    }
    // 0x80230CB0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x80230CB4: lhu         $v1, 0x58($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X58);
L_80230CB8:
    // 0x80230CB8: sh          $v1, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r3;
    // 0x80230CBC: jal         0x80051248
    // 0x80230CC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_9;
    // 0x80230CC0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
L_80230CC4:
    // 0x80230CC4: jal         0x8003E934
    // 0x80230CC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_10;
    // 0x80230CC8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_10:
    // 0x80230CCC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230CD0: addu        $s2, $v0, $zero
    ctx->r18 = ADD32(ctx->r2, 0);
    // 0x80230CD4: jal         0x80040F30
    // 0x80230CD8: sw          $zero, 0x30($s1)
    MEM_W(0X30, ctx->r17) = 0;
    func_80040F30_1C330(rdram, ctx);
        goto after_11;
    // 0x80230CD8: sw          $zero, 0x30($s1)
    MEM_W(0X30, ctx->r17) = 0;
    after_11:
    // 0x80230CDC: sw          $v0, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->r2;
    // 0x80230CE0: andi        $v0, $v0, 0x1000
    ctx->r2 = ctx->r2 & 0X1000;
    // 0x80230CE4: bne         $v0, $zero, L_80230D08
    if (ctx->r2 != 0) {
        // 0x80230CE8: addu        $s3, $s2, $zero
        ctx->r19 = ADD32(ctx->r18, 0);
            goto L_80230D08;
    }
    // 0x80230CE8: addu        $s3, $s2, $zero
    ctx->r19 = ADD32(ctx->r18, 0);
    // 0x80230CEC: lh          $v1, 0x16($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X16);
    // 0x80230CF0: sll         $v0, $s2, 16
    ctx->r2 = S32(ctx->r18 << 16);
    // 0x80230CF4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80230CF8: bne         $v1, $v0, L_80230D0C
    if (ctx->r3 != ctx->r2) {
        // 0x80230CFC: addiu       $a0, $s0, 0x180
        ctx->r4 = ADD32(ctx->r16, 0X180);
            goto L_80230D0C;
    }
    // 0x80230CFC: addiu       $a0, $s0, 0x180
    ctx->r4 = ADD32(ctx->r16, 0X180);
    // 0x80230D00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230D04: sw          $v0, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r2;
L_80230D08:
    // 0x80230D08: addiu       $a0, $s0, 0x180
    ctx->r4 = ADD32(ctx->r16, 0X180);
L_80230D0C:
    // 0x80230D0C: sll         $v0, $s3, 16
    ctx->r2 = S32(ctx->r19 << 16);
    // 0x80230D10: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80230D14: lhu         $a3, 0x14($s1)
    ctx->r7 = MEM_HU(ctx->r17, 0X14);
    // 0x80230D18: nor         $v0, $zero, $v0
    ctx->r2 = ~(0 | ctx->r2);
    // 0x80230D1C: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x80230D20: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x80230D24: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80230D28: addiu       $a1, $zero, 0xC0
    ctx->r5 = ADD32(0, 0XC0);
    // 0x80230D2C: addiu       $v0, $s1, 0x38
    ctx->r2 = ADD32(ctx->r17, 0X38);
    // 0x80230D30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230D34: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80230D38: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80230D3C: lhu         $v1, 0x1E($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X1E);
    // 0x80230D40: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80230D44: andi        $a3, $a3, 0x80
    ctx->r7 = ctx->r7 & 0X80;
    // 0x80230D48: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80230D4C: lui         $v0, 0x588
    ctx->r2 = S32(0X588 << 16);
    // 0x80230D50: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x80230D54: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x80230D58: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80230D5C: jal         0x80051E18
    // 0x80230D60: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_12;
    // 0x80230D60: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_12:
    // 0x80230D64: sw          $zero, 0x38($s1)
    MEM_W(0X38, ctx->r17) = 0;
    // 0x80230D68: lw          $ra, 0x38($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X38);
    // 0x80230D6C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80230D70: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80230D74: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80230D78: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80230D7C: jr          $ra
    // 0x80230D80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    TRACE_RETURN()
    return;
    // 0x80230D80: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80230D84_ovl3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230D84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230D88: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230D8C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230D90: addu        $a2, $a1, $zero
    ctx->r6 = ADD32(ctx->r5, 0);
    // 0x80230D94: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80230D98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230D9C: sh          $v0, 0x14($a2)
    MEM_H(0X14, ctx->r6) = ctx->r2;
    // 0x80230DA0: sh          $zero, 0x18($a2)
    MEM_H(0X18, ctx->r6) = 0;
    // 0x80230DA4: sh          $zero, 0x1A($a2)
    MEM_H(0X1A, ctx->r6) = 0;
    // 0x80230DA8: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80230DAC: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80230DB0: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80230DB4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230DB8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230DBC: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80230DC0: lbu         $v0, 0xA($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XA);
    // 0x80230DC4: sh          $v0, 0x1E($a2)
    MEM_H(0X1E, ctx->r6) = ctx->r2;
    // 0x80230DC8: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x80230DCC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230DD0: bnel        $v1, $v0, L_80230DE4
    if (ctx->r3 != ctx->r2) {
        // 0x80230DD4: sh          $zero, 0x26($a2)
        MEM_H(0X26, ctx->r6) = 0;
            goto L_80230DE4;
    }
    goto skip_0;
    // 0x80230DD4: sh          $zero, 0x26($a2)
    MEM_H(0X26, ctx->r6) = 0;
    skip_0:
    // 0x80230DD8: lb          $v0, 0xD($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XD);
    // 0x80230DDC: sll         $v0, $v0, 9
    ctx->r2 = S32(ctx->r2 << 9);
    // 0x80230DE0: sh          $v0, 0x26($a2)
    MEM_H(0X26, ctx->r6) = ctx->r2;
L_80230DE4:
    // 0x80230DE4: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80230DE8: sh          $v0, 0x22($a2)
    MEM_H(0X22, ctx->r6) = ctx->r2;
    // 0x80230DEC: sh          $v0, 0x20($a2)
    MEM_H(0X20, ctx->r6) = ctx->r2;
    // 0x80230DF0: lb          $v1, 0xE($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XE);
    // 0x80230DF4: addiu       $a0, $a2, 0x40
    ctx->r4 = ADD32(ctx->r6, 0X40);
    // 0x80230DF8: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x80230DFC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80230E00: sw          $zero, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = 0;
    // 0x80230E04: sw          $zero, 0x30($a2)
    MEM_W(0X30, ctx->r6) = 0;
    // 0x80230E08: sw          $zero, 0x34($a2)
    MEM_W(0X34, ctx->r6) = 0;
    // 0x80230E0C: sh          $v0, 0x2A($a2)
    MEM_H(0X2A, ctx->r6) = ctx->r2;
    // 0x80230E10: sw          $zero, 0x38($a2)
    MEM_W(0X38, ctx->r6) = 0;
    // 0x80230E14: sw          $zero, 0x3C($a2)
    MEM_W(0X3C, ctx->r6) = 0;
    // 0x80230E18: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x80230E1C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230E20: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80230E24: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230E28: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x80230E2C: addiu       $v0, $v0, -0x6A4
    ctx->r2 = ADD32(ctx->r2, -0X6A4);
    // 0x80230E30: sh          $v0, 0x28($a2)
    MEM_H(0X28, ctx->r6) = ctx->r2;
    // 0x80230E34: jal         0x800540BC
    // 0x80230E38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_0;
    // 0x80230E38: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80230E3C: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230E40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230E44: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230E48: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230E4C: jal         0x8004D5D4
    // 0x80230E50: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_1;
    // 0x80230E50: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_1:
    // 0x80230E54: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80230E58: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80230E5C: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80230E60: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80230E64: sb          $v0, 0xAD($s0)
    MEM_B(0XAD, ctx->r16) = ctx->r2;
    // 0x80230E68: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80230E6C: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80230E70: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80230E74: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80230E78: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80230E7C: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80230E80: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80230E84: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x80230E88: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80230E8C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80230E90: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80230E94: lbu         $v1, 0xB($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0XB);
    // 0x80230E98: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80230E9C: addiu       $v0, $v0, -0x1FC8
    ctx->r2 = ADD32(ctx->r2, -0X1FC8);
    // 0x80230EA0: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x80230EA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80230EA8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80230EAC: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80230EB0: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80230EB4: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80230EB8: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x80230EBC: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x80230EC0: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x80230EC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230EC8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230ECC: jr          $ra
    // 0x80230ED0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230ED0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
