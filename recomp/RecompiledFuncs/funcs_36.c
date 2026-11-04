#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80231790_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231794: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231798: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023179C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802317A0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802317A4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802317A8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802317AC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802317B0: lw          $v0, -0xEF0($at)
    ctx->r2 = MEM_W(ctx->r1, -0XEF0);
    // 0x802317B4: jalr        $v0
    // 0x802317B8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802317B8: nop

    after_0:
    // 0x802317BC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x802317C0: jal         0x8004DD04
    // 0x802317C4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x802317C4: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x802317C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802317CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802317D0: jr          $ra
    // 0x802317D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802317D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802364C4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802364C4: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802364C8: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
    // 0x802364CC: sb          $zero, 0xD($a0)
    MEM_B(0XD, ctx->r4) = 0;
    // 0x802364D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802364D4: jr          $ra
    // 0x802364D8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x802364D8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_8023BA40_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BA40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023BA44: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023BA48: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023BA4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023BA50: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x8023BA54: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023BA58: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023BA5C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023BA60: lw          $v0, -0x458($at)
    ctx->r2 = MEM_W(ctx->r1, -0X458);
    // 0x8023BA64: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8023BA68: lw          $v1, 0x20($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X20);
    // 0x8023BA6C: sw          $v0, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r2;
    // 0x8023BA70: lbu         $v0, 0x2($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X2);
    // 0x8023BA74: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8023BA78: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x8023BA7C: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x8023BA80: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x8023BA84: lw          $v1, 0x1C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1C);
    // 0x8023BA88: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x8023BA8C: lbu         $v0, 0x1($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X1);
    // 0x8023BA90: jal         0x8023BEE4
    // 0x8023BA94: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    func_8023BEE4_ovl2(rdram, ctx);
        goto after_0;
    // 0x8023BA94: sh          $v0, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = ctx->r2;
    after_0:
    // 0x8023BA98: beq         $v0, $zero, L_8023BAAC
    if (ctx->r2 == 0) {
        // 0x8023BA9C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023BAAC;
    }
    // 0x8023BA9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023BAA0: jal         0x8004F62C
    // 0x8023BAA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x8023BAA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
    // 0x8023BAA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8023BAAC:
    // 0x8023BAAC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023BAB0: jal         0x8023BB2C
    // 0x8023BAB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023BB2C_ovl2(rdram, ctx);
        goto after_2;
    // 0x8023BAB4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023BAB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8023BABC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023BAC0: jr          $ra
    // 0x8023BAC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023BAC4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022654C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022654C: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226550: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80226554: bne         $v1, $v0, L_8022656C
    if (ctx->r3 != ctx->r2) {
        // 0x80226558: addiu       $v1, $zero, 0x9
        ctx->r3 = ADD32(0, 0X9);
            goto L_8022656C;
    }
    // 0x80226558: addiu       $v1, $zero, 0x9
    ctx->r3 = ADD32(0, 0X9);
    // 0x8022655C: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80226560: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80226564: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80226568: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_8022656C:
    // 0x8022656C: jr          $ra
    // 0x80226570: nop

    TRACE_RETURN()
    return;
    // 0x80226570: nop

;}
RECOMP_FUNC void func_80238324_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238324: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80238328: lh          $v0, 0x49C4($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C4);
    // 0x8023832C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238330: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80238334: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8023833C: lh          $v1, 0x38($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X38);
    // 0x80238340: addiu       $a0, $zero, 0x78
    ctx->r4 = ADD32(0, 0X78);
    // 0x80238344: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80238348: addiu       $v0, $v0, 0x3C
    ctx->r2 = ADD32(ctx->r2, 0X3C);
    // 0x8023834C: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x80238350: bne         $v0, $zero, L_802383C4
    if (ctx->r2 != 0) {
        // 0x80238354: nop
    
            goto L_802383C4;
    }
    // 0x80238354: nop

    // 0x80238358: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023835C: lh          $v0, 0x49C8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C8);
    // 0x80238360: lh          $v1, 0x3C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X3C);
    // 0x80238364: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80238368: addiu       $v0, $v0, 0x3C
    ctx->r2 = ADD32(ctx->r2, 0X3C);
    // 0x8023836C: sltu        $v0, $a0, $v0
    ctx->r2 = ctx->r4 < ctx->r2 ? 1 : 0;
    // 0x80238370: bne         $v0, $zero, L_802383C4
    if (ctx->r2 != 0) {
        // 0x80238374: nop
    
            goto L_802383C4;
    }
    // 0x80238374: nop

    // 0x80238378: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023837C: lh          $v0, 0x49C6($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X49C6);
    // 0x80238380: lh          $v1, 0x3A($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X3A);
    // 0x80238384: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80238388: addiu       $v0, $v0, 0xA
    ctx->r2 = ADD32(ctx->r2, 0XA);
    // 0x8023838C: addiu       $v1, $zero, 0xAA
    ctx->r3 = ADD32(0, 0XAA);
    // 0x80238390: sltu        $v1, $v1, $v0
    ctx->r3 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80238394: bne         $v1, $zero, L_802383C4
    if (ctx->r3 != 0) {
        // 0x80238398: nop
    
            goto L_802383C4;
    }
    // 0x80238398: nop

    // 0x8023839C: jal         0x8006036C
    // 0x802383A0: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_8006036C_3B76C(rdram, ctx);
        goto after_0;
    // 0x802383A0: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_0:
    // 0x802383A4: addiu       $a0, $zero, 0x11E
    ctx->r4 = ADD32(0, 0X11E);
    // 0x802383A8: jal         0x8002A33C
    // 0x802383AC: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x802383AC: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_1:
    // 0x802383B0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802383B4: addiu       $v1, $zero, 0x10
    ctx->r3 = ADD32(0, 0X10);
    // 0x802383B8: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x802383BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802383C0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802383C4:
    // 0x802383C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802383C8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802383CC: jr          $ra
    // 0x802383D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802383D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228798_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228798: lhu         $v0, 0x32A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X32A);
    // 0x8022879C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802287A0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x802287A4: andi        $a2, $v0, 0xF
    ctx->r6 = ctx->r2 & 0XF;
    // 0x802287A8: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_802287AC:
    // 0x802287AC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802287B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802287B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802287B8: lbu         $v0, -0x1738($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X1738);
    // 0x802287BC: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x802287C0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x802287C4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802287C8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802287CC: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x802287D0: bne         $v0, $zero, L_802287F0
    if (ctx->r2 != 0) {
        // 0x802287D4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_802287F0;
    }
    // 0x802287D4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x802287D8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802287DC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802287E0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802287E4: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x802287E8: bne         $v0, $zero, L_802287AC
    if (ctx->r2 != 0) {
        // 0x802287EC: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_802287AC;
    }
    // 0x802287EC: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_802287F0:
    // 0x802287F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802287F4: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x802287F8: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x802287FC: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228800: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228804: beq         $v1, $v0, L_80228838
    if (ctx->r3 == ctx->r2) {
        // 0x80228808: sh          $zero, 0xA($a0)
        MEM_H(0XA, ctx->r4) = 0;
            goto L_80228838;
    }
    // 0x80228808: sh          $zero, 0xA($a0)
    MEM_H(0XA, ctx->r4) = 0;
    // 0x8022880C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80228810: beql        $v0, $zero, L_80228828
    if (ctx->r2 == 0) {
        // 0x80228814: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80228828;
    }
    goto skip_0;
    // 0x80228814: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80228818: beql        $v1, $zero, L_80228848
    if (ctx->r3 == 0) {
        // 0x8022881C: sh          $zero, 0x66($a0)
        MEM_H(0X66, ctx->r4) = 0;
            goto L_80228848;
    }
    goto skip_1;
    // 0x8022881C: sh          $zero, 0x66($a0)
    MEM_H(0X66, ctx->r4) = 0;
    skip_1:
    // 0x80228820: j           L_80228848
    // 0x80228824: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
        goto L_80228848;
    // 0x80228824: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_80228828:
    // 0x80228828: beql        $v1, $v0, L_80228844
    if (ctx->r3 == ctx->r2) {
        // 0x8022882C: addiu       $v0, $zero, -0x10
        ctx->r2 = ADD32(0, -0X10);
            goto L_80228844;
    }
    goto skip_2;
    // 0x8022882C: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    skip_2:
    // 0x80228830: j           L_80228848
    // 0x80228834: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
        goto L_80228848;
    // 0x80228834: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
L_80228838:
    // 0x80228838: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022883C: j           L_80228848
    // 0x80228840: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
        goto L_80228848;
    // 0x80228840: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
L_80228844:
    // 0x80228844: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
L_80228848:
    // 0x80228848: jr          $ra
    // 0x8022884C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8022884C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80231044_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231044: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80231048: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023104C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231050: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80231054: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80231058: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023105C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231060: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80231064: lw          $v0, -0x1128($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1128);
    // 0x80231068: jalr        $v0
    // 0x8023106C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023106C: nop

    after_0:
    // 0x80231070: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80231074: jal         0x8004DD04
    // 0x80231078: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8004DD04_29104(rdram, ctx);
        goto after_1;
    // 0x80231078: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_1:
    // 0x8023107C: lb          $v0, 0xC($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XC);
    // 0x80231080: bnel        $v0, $zero, L_80231094
    if (ctx->r2 != 0) {
        // 0x80231084: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80231094;
    }
    goto skip_0;
    // 0x80231084: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    skip_0:
    // 0x80231088: jal         0x8005044C
    // 0x8023108C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_2;
    // 0x8023108C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80231090: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_80231094:
    // 0x80231094: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    // 0x80231098: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x8023109C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802310A0: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    // 0x802310A4: addiu       $a2, $zero, 0x2AB
    ctx->r6 = ADD32(0, 0X2AB);
    // 0x802310A8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x802310AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x802310B0: jal         0x8003B3F8
    // 0x802310B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_8003B3F8_167F8(rdram, ctx);
        goto after_3;
    // 0x802310B4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_3:
    // 0x802310B8: jal         0x80230250
    // 0x802310BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80230250_ovl2(rdram, ctx);
        goto after_4;
    // 0x802310BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x802310C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802310C4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x802310C8: jr          $ra
    // 0x802310CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802310CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802362D4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802362D4: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x802362D8: lh          $v0, 0x3C($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X3C);
    // 0x802362DC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x802362E0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802362E4: sw          $v0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r2;
    // 0x802362E8: jr          $ra
    // 0x802362EC: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    TRACE_RETURN()
    return;
    // 0x802362EC: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
;}
RECOMP_FUNC void func_802305E8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802305E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802305EC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802305F0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802305F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802305F8: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802305FC: bne         $v0, $zero, L_8023061C
    if (ctx->r2 != 0) {
        // 0x80230600: addu        $a1, $zero, $zero
        ctx->r5 = ADD32(0, 0);
            goto L_8023061C;
    }
    // 0x80230600: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230604: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230608: jal         0x80050294
    // 0x8023060C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023060C: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    after_0:
    // 0x80230610: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230614: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230618: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_8023061C:
    // 0x8023061C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230620: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230624: jr          $ra
    // 0x80230628: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230628: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226BDC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226BDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80226BE0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226BE4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80226BE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80226BEC: lw          $v0, 0x10($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X10);
    // 0x80226BF0: bne         $v0, $zero, L_80226C54
    if (ctx->r2 != 0) {
        // 0x80226BF4: nop
    
            goto L_80226C54;
    }
    // 0x80226BF4: nop

    // 0x80226BF8: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x80226BFC: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x80226C00: lw          $v0, 0x28($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X28);
    // 0x80226C04: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80226C08: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80226C0C: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x80226C10: lw          $v0, 0x24($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X24);
    // 0x80226C14: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80226C18: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80226C1C: jal         0x8004F5C4
    // 0x80226C20: lw          $a0, 0x70($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x80226C20: lw          $a0, 0x70($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X70);
    after_0:
    // 0x80226C24: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80226C28: jal         0x8004F5C4
    // 0x80226C2C: lw          $a0, 0x74($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X74);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x80226C2C: lw          $a0, 0x74($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X74);
    after_1:
    // 0x80226C30: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80226C34: jal         0x8004F5C4
    // 0x80226C38: lw          $a0, 0x78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X78);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_2;
    // 0x80226C38: lw          $a0, 0x78($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X78);
    after_2:
    // 0x80226C3C: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80226C40: jal         0x8004F5C4
    // 0x80226C44: lw          $a0, 0x7C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7C);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_3;
    // 0x80226C44: lw          $a0, 0x7C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7C);
    after_3:
    // 0x80226C48: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80226C4C: jal         0x8004F5C4
    // 0x80226C50: lw          $a0, 0x80($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X80);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_4;
    // 0x80226C50: lw          $a0, 0x80($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X80);
    after_4:
L_80226C54:
    // 0x80226C54: lw          $v1, 0x10($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X10);
    // 0x80226C58: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80226C5C: bne         $v1, $v0, L_80226CAC
    if (ctx->r3 != ctx->r2) {
        // 0x80226C60: nop
    
            goto L_80226CAC;
    }
    // 0x80226C60: nop

    // 0x80226C64: jal         0x8004F144
    // 0x80226C68: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_5;
    // 0x80226C68: nop

    after_5:
    // 0x80226C6C: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80226C70: beq         $v1, $zero, L_80226CAC
    if (ctx->r3 == 0) {
        // 0x80226C74: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80226CAC;
    }
    // 0x80226C74: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80226C78: sb          $v0, 0x0($v1)
    MEM_B(0X0, ctx->r3) = ctx->r2;
    // 0x80226C7C: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80226C80: sb          $v0, 0x2($v1)
    MEM_B(0X2, ctx->r3) = ctx->r2;
    // 0x80226C84: sb          $v0, 0xC($v1)
    MEM_B(0XC, ctx->r3) = ctx->r2;
    // 0x80226C88: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80226C8C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x80226C90: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80226C94: sh          $v0, 0x1C($v1)
    MEM_H(0X1C, ctx->r3) = ctx->r2;
    // 0x80226C98: addiu       $v0, $zero, -0x2D8
    ctx->r2 = ADD32(0, -0X2D8);
    // 0x80226C9C: sh          $v0, 0x1E($v1)
    MEM_H(0X1E, ctx->r3) = ctx->r2;
    // 0x80226CA0: addiu       $v0, $zero, -0x366
    ctx->r2 = ADD32(0, -0X366);
    // 0x80226CA4: sb          $zero, 0xD($v1)
    MEM_B(0XD, ctx->r3) = 0;
    // 0x80226CA8: sh          $v0, 0x20($v1)
    MEM_H(0X20, ctx->r3) = ctx->r2;
L_80226CAC:
    // 0x80226CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80226CB0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226CB4: jr          $ra
    // 0x80226CB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80226CB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226030_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226030: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80226034: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80226038: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8022603C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80226040: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80226044: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80226048: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x8022604C: sltiu       $v0, $v1, 0x8
    ctx->r2 = ctx->r3 < 0X8 ? 1 : 0;
    // 0x80226050: beq         $v0, $zero, L_80226288
    if (ctx->r2 == 0) {
        // 0x80226054: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_80226288;
    }
    // 0x80226054: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80226058: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022605C: addu        $at, $at, $v0
    gpr jr_addend_80226064 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80226060: lw          $v0, -0x2A8($at)
    ctx->r2 = ADD32(ctx->r1, -0X2A8);
    // 0x80226064: jr          $v0
    // 0x80226068: nop

    switch (jr_addend_80226064 >> 2) {
        case 0: goto L_8022606C; break;
        case 1: goto L_80226088; break;
        case 2: goto L_802260B8; break;
        case 3: goto L_802260D8; break;
        case 4: goto L_802260F4; break;
        case 5: goto L_80226118; break;
        case 6: goto L_80226178; break;
        case 7: goto L_802261B8; break;
        default: switch_error(__func__, 0x80226064, 0x8023FD58);
    }
    // 0x80226068: nop

L_8022606C:
    // 0x8022606C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226070: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226074: bne         $v0, $zero, L_80226288
    if (ctx->r2 != 0) {
        // 0x80226078: nop
    
            goto L_80226288;
    }
    // 0x80226078: nop

    // 0x8022607C: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80226080: j           L_80226170
    // 0x80226084: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80226170;
    // 0x80226084: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80226088:
    // 0x80226088: lui         $s0, 0x8020
    ctx->r16 = S32(0X8020 << 16);
    // 0x8022608C: addiu       $s0, $s0, 0x49B0
    ctx->r16 = ADD32(ctx->r16, 0X49B0);
    // 0x80226090: jal         0x8006FF84
    // 0x80226094: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8006FF84_4B384(rdram, ctx);
        goto after_0;
    // 0x80226094: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x80226098: beq         $v0, $zero, L_80226288
    if (ctx->r2 == 0) {
        // 0x8022609C: nop
    
            goto L_80226288;
    }
    // 0x8022609C: nop

    // 0x802260A0: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802260A4: andi        $v0, $v0, 0xFC
    ctx->r2 = ctx->r2 & 0XFC;
    // 0x802260A8: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802260AC: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x802260B0: j           L_80226170
    // 0x802260B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80226170;
    // 0x802260B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802260B8:
    // 0x802260B8: jal         0x8002A4A4
    // 0x802260BC: nop

    func_8002A4A4_58A4(rdram, ctx);
        goto after_1;
    // 0x802260BC: nop

    after_1:
    // 0x802260C0: lui         $a0, 0x103
    ctx->r4 = S32(0X103 << 16);
    // 0x802260C4: jal         0x80036B1C
    // 0x802260C8: ori         $a0, $a0, 0x2600
    ctx->r4 = ctx->r4 | 0X2600;
    func_80036B1C_11F1C(rdram, ctx);
        goto after_2;
    // 0x802260C8: ori         $a0, $a0, 0x2600
    ctx->r4 = ctx->r4 | 0X2600;
    after_2:
    // 0x802260CC: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x802260D0: j           L_80226170
    // 0x802260D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80226170;
    // 0x802260D4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_802260D8:
    // 0x802260D8: jal         0x80036B7C
    // 0x802260DC: nop

    func_80036B7C_11F7C(rdram, ctx);
        goto after_3;
    // 0x802260DC: nop

    after_3:
    // 0x802260E0: beq         $v0, $zero, L_80226288
    if (ctx->r2 == 0) {
        // 0x802260E4: addiu       $v1, $zero, 0x1E
        ctx->r3 = ADD32(0, 0X1E);
            goto L_80226288;
    }
    // 0x802260E4: addiu       $v1, $zero, 0x1E
    ctx->r3 = ADD32(0, 0X1E);
    // 0x802260E8: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x802260EC: j           L_8022616C
    // 0x802260F0: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
        goto L_8022616C;
    // 0x802260F0: sw          $v1, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r3;
L_802260F4:
    // 0x802260F4: lw          $v0, 0xC($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XC);
    // 0x802260F8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802260FC: bne         $v0, $zero, L_80226288
    if (ctx->r2 != 0) {
        // 0x80226100: sw          $v0, 0xC($s2)
        MEM_W(0XC, ctx->r18) = ctx->r2;
            goto L_80226288;
    }
    // 0x80226100: sw          $v0, 0xC($s2)
    MEM_W(0XC, ctx->r18) = ctx->r2;
    // 0x80226104: jal         0x80036E48
    // 0x80226108: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80036E48_12248(rdram, ctx);
        goto after_4;
    // 0x80226108: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x8022610C: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80226110: j           L_80226170
    // 0x80226114: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80226170;
    // 0x80226114: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80226118:
    // 0x80226118: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022611C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80226120: jal         0x8005F6B4
    // 0x80226124: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_8005F6B4_3AAB4(rdram, ctx);
        goto after_5;
    // 0x80226124: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80226128: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022612C: addiu       $v0, $v0, -0x2194
    ctx->r2 = ADD32(ctx->r2, -0X2194);
    // 0x80226130: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x80226134: sw          $v0, 0xA90($at)
    MEM_W(0XA90, ctx->r1) = ctx->r2;
    // 0x80226138: addu        $s1, $zero, $zero
    ctx->r17 = ADD32(0, 0);
    // 0x8022613C: lui         $s0, 0x8024
    ctx->r16 = S32(0X8024 << 16);
    // 0x80226140: addiu       $s0, $s0, -0x22C0
    ctx->r16 = ADD32(ctx->r16, -0X22C0);
L_80226144:
    // 0x80226144: jal         0x8005FA7C
    // 0x80226148: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8005FA7C_3AE7C(rdram, ctx);
        goto after_6;
    // 0x80226148: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022614C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80226150: slti        $v0, $s1, 0xE
    ctx->r2 = SIGNED(ctx->r17) < 0XE ? 1 : 0;
    // 0x80226154: bne         $v0, $zero, L_80226144
    if (ctx->r2 != 0) {
        // 0x80226158: addiu       $s0, $s0, 0x14
        ctx->r16 = ADD32(ctx->r16, 0X14);
            goto L_80226144;
    }
    // 0x80226158: addiu       $s0, $s0, 0x14
    ctx->r16 = ADD32(ctx->r16, 0X14);
    // 0x8022615C: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x80226160: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80226164: addiu       $v1, $v1, -0x1BFC
    ctx->r3 = ADD32(ctx->r3, -0X1BFC);
    // 0x80226168: sw          $v1, 0xA4($s2)
    MEM_W(0XA4, ctx->r18) = ctx->r3;
L_8022616C:
    // 0x8022616C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80226170:
    // 0x80226170: j           L_80226288
    // 0x80226174: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
        goto L_80226288;
    // 0x80226174: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_80226178:
    // 0x80226178: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8022617C: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226180: bne         $v0, $zero, L_802261B8
    if (ctx->r2 != 0) {
        // 0x80226184: nop
    
            goto L_802261B8;
    }
    // 0x80226184: nop

    // 0x80226188: jal         0x8006072C
    // 0x8022618C: nop

    func_8006072C_3BB2C(rdram, ctx);
        goto after_7;
    // 0x8022618C: nop

    after_7:
    // 0x80226190: bne         $v0, $zero, L_802261A4
    if (ctx->r2 != 0) {
        // 0x80226194: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_802261A4;
    }
    // 0x80226194: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226198: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x8022619C: bne         $v1, $v0, L_802261C8
    if (ctx->r3 != ctx->r2) {
        // 0x802261A0: nop
    
            goto L_802261C8;
    }
    // 0x802261A0: nop

L_802261A4:
    // 0x802261A4: jal         0x80036E48
    // 0x802261A8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_80036E48_12248(rdram, ctx);
        goto after_8;
    // 0x802261A8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_8:
    // 0x802261AC: lbu         $v0, 0x4($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X4);
    // 0x802261B0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802261B4: sb          $v0, 0x4($s2)
    MEM_B(0X4, ctx->r18) = ctx->r2;
L_802261B8:
    // 0x802261B8: lbu         $v1, 0x8($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X8);
    // 0x802261BC: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x802261C0: beq         $v1, $v0, L_802261D8
    if (ctx->r3 == ctx->r2) {
        // 0x802261C4: nop
    
            goto L_802261D8;
    }
    // 0x802261C4: nop

L_802261C8:
    // 0x802261C8: lw          $v0, 0xA4($s2)
    ctx->r2 = MEM_W(ctx->r18, 0XA4);
    // 0x802261CC: lw          $v0, 0x4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4);
    // 0x802261D0: jalr        $v0
    // 0x802261D4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_9;
    // 0x802261D4: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_9:
L_802261D8:
    // 0x802261D8: jal         0x8005FB90
    // 0x802261DC: nop

    func_8005FB90_3AF90(rdram, ctx);
        goto after_10;
    // 0x802261DC: nop

    after_10:
    // 0x802261E0: lui         $at, 0x8021
    ctx->r1 = S32(0X8021 << 16);
    // 0x802261E4: jal         0x80060018
    // 0x802261E8: sb          $zero, 0xB61($at)
    MEM_B(0XB61, ctx->r1) = 0;
    func_80060018_3B418(rdram, ctx);
        goto after_11;
    // 0x802261E8: sb          $zero, 0xB61($at)
    MEM_B(0XB61, ctx->r1) = 0;
    after_11:
    // 0x802261EC: lbu         $v1, 0x4($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X4);
    // 0x802261F0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802261F4: bne         $v1, $v0, L_80226288
    if (ctx->r3 != ctx->r2) {
        // 0x802261F8: nop
    
            goto L_80226288;
    }
    // 0x802261F8: nop

    // 0x802261FC: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80226200: lh          $v0, -0xC66($v0)
    ctx->r2 = MEM_H(ctx->r2, -0XC66);
    // 0x80226204: bne         $v0, $zero, L_80226288
    if (ctx->r2 != 0) {
        // 0x80226208: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80226288;
    }
    // 0x80226208: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022620C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226210: sb          $v0, 0x47CC($at)
    MEM_B(0X47CC, ctx->r1) = ctx->r2;
    // 0x80226214: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226218: sb          $v0, 0x47CE($at)
    MEM_B(0X47CE, ctx->r1) = ctx->r2;
    // 0x8022621C: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80226220: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226224: sb          $zero, 0x47CF($at)
    MEM_B(0X47CF, ctx->r1) = 0;
    // 0x80226228: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022622C: sh          $zero, 0x47C0($at)
    MEM_H(0X47C0, ctx->r1) = 0;
    // 0x80226230: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226234: sh          $zero, 0x47C2($at)
    MEM_H(0X47C2, ctx->r1) = 0;
    // 0x80226238: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022623C: sh          $zero, 0x47C4($at)
    MEM_H(0X47C4, ctx->r1) = 0;
    // 0x80226240: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226244: sh          $zero, 0x47CA($at)
    MEM_H(0X47CA, ctx->r1) = 0;
    // 0x80226248: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022624C: sb          $zero, 0x47CD($at)
    MEM_B(0X47CD, ctx->r1) = 0;
    // 0x80226250: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80226254: sb          $v0, 0x47D1($at)
    MEM_B(0X47D1, ctx->r1) = ctx->r2;
    // 0x80226258: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x8022625C: sb          $v0, 0x47D0($at)
    MEM_B(0X47D0, ctx->r1) = ctx->r2;
    // 0x80226260: jal         0x80060590
    // 0x80226264: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    func_80060590_3B990(rdram, ctx);
        goto after_12;
    // 0x80226264: addiu       $a0, $zero, 0x605
    ctx->r4 = ADD32(0, 0X605);
    after_12:
    // 0x80226268: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8022626C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80226270: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80226274: jal         0x80036B00
    // 0x80226278: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    func_80036B00_11F00(rdram, ctx);
        goto after_13;
    // 0x80226278: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    after_13:
    // 0x8022627C: lui         $a0, 0x8020
    ctx->r4 = S32(0X8020 << 16);
    // 0x80226280: jal         0x80070050
    // 0x80226284: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    func_80070050_4B450(rdram, ctx);
        goto after_14;
    // 0x80226284: addiu       $a0, $a0, 0x49B0
    ctx->r4 = ADD32(ctx->r4, 0X49B0);
    after_14:
L_80226288:
    // 0x80226288: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022628C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80226290: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80226294: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80226298: jr          $ra
    // 0x8022629C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022629C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80230C78_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230C78: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230C7C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80230C80: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80230C84: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80230C88: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80230C8C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80230C90: lw          $v0, -0x1188($at)
    ctx->r2 = MEM_W(ctx->r1, -0X1188);
    // 0x80230C94: jalr        $v0
    // 0x80230C98: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80230C98: nop

    after_0:
    // 0x80230C9C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80230CA0: jr          $ra
    // 0x80230CA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230CA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230B9C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230B9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230BA0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230BA4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230BA8: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80230BAC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x80230BB0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230BB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230BB8: jal         0x80050294
    // 0x80230BBC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80230BBC: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230BC0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230BC4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230BC8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80230BCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230BD0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230BD4: jr          $ra
    // 0x80230BD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230BD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228E34_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228E34: jr          $ra
    // 0x80228E38: nop

    TRACE_RETURN()
    return;
    // 0x80228E38: nop

;}
RECOMP_FUNC void func_802324B0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802324B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802324B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802324B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802324BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802324C0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802324C4: bne         $v0, $zero, L_802324E0
    if (ctx->r2 != 0) {
        // 0x802324C8: addiu       $a1, $zero, 0x13
        ctx->r5 = ADD32(0, 0X13);
            goto L_802324E0;
    }
    // 0x802324C8: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x802324CC: jal         0x80050294
    // 0x802324D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x802324D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x802324D4: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802324D8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802324DC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802324E0:
    // 0x802324E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802324E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802324E8: jr          $ra
    // 0x802324EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802324EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236DA8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236DA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236DAC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236DB0: jal         0x8004F684
    // 0x80236DB4: nop

    func_8004F684_2AA84(rdram, ctx);
        goto after_0;
    // 0x80236DB4: nop

    after_0:
    // 0x80236DB8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236DBC: jr          $ra
    // 0x80236DC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236DC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236744_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236744: jr          $ra
    // 0x80236748: nop

    TRACE_RETURN()
    return;
    // 0x80236748: nop

    // 0x8023674C: nop

;}
RECOMP_FUNC void func_8022996C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022996C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80229970: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80229974: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229978: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022997C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80229980: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80229984: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80229988: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022998C: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x80229990: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x80229994: beq         $v0, $zero, L_80229C5C
    if (ctx->r2 == 0) {
        // 0x80229998: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80229C5C;
    }
    // 0x80229998: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x8022999C: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x802299A0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802299A4: addu        $at, $at, $v0
    gpr jr_addend_802299AC = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802299A8: lw          $v0, -0x238($at)
    ctx->r2 = ADD32(ctx->r1, -0X238);
    // 0x802299AC: jr          $v0
    // 0x802299B0: nop

    switch (jr_addend_802299AC >> 2) {
        case 0: goto L_802299B4; break;
        case 1: goto L_802299D8; break;
        case 2: goto L_80229AB0; break;
        case 3: goto L_80229B34; break;
        case 4: goto L_80229BB8; break;
        default: switch_error(__func__, 0x802299AC, 0x8023FDC8);
    }
    // 0x802299B0: nop

L_802299B4:
    // 0x802299B4: addiu       $a0, $s1, 0x24
    ctx->r4 = ADD32(ctx->r17, 0X24);
    // 0x802299B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802299BC: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802299C0: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802299C4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x802299C8: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x802299CC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802299D0: jal         0x800540B4
    // 0x802299D4: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    func_800540B4_2F4B4(rdram, ctx);
        goto after_0;
    // 0x802299D4: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    after_0:
L_802299D8:
    // 0x802299D8: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x802299DC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802299E0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x802299E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802299E8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x802299EC: bgez        $v0, L_80229A24
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802299F0: slti        $v0, $v0, 0x3
        ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
            goto L_80229A24;
    }
    // 0x802299F0: slti        $v0, $v0, 0x3
    ctx->r2 = SIGNED(ctx->r2) < 0X3 ? 1 : 0;
    // 0x802299F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802299F8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802299FC: lbu         $v0, 0x3($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X3);
    // 0x80229A00: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80229A04: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80229A08: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229A0C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229A10: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
    // 0x80229A14: sh          $v1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r3;
    // 0x80229A18: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x80229A1C: j           L_80229AB0
    // 0x80229A20: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_80229AB0;
    // 0x80229A20: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80229A24:
    // 0x80229A24: bne         $v0, $zero, L_80229C5C
    if (ctx->r2 != 0) {
        // 0x80229A28: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229C5C;
    }
    // 0x80229A28: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229A2C: addiu       $a1, $zero, -0x50
    ctx->r5 = ADD32(0, -0X50);
    // 0x80229A30: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229A34: jal         0x8004DA90
    // 0x80229A38: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80229A38: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80229A3C: jal         0x80040F30
    // 0x80229A40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x80229A40: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80229A44: jal         0x8003E934
    // 0x80229A48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x80229A48: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x80229A4C: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229A50: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80229A54: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80229A58: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229A5C: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80229A60: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80229A64: bltz        $v0, L_80229A7C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80229A68: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80229A7C;
    }
    // 0x80229A68: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80229A6C: beq         $v0, $zero, L_80229A8C
    if (ctx->r2 == 0) {
        // 0x80229A70: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80229A8C;
    }
    // 0x80229A70: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229A74: j           L_80229C5C
    // 0x80229A78: nop

        goto L_80229C5C;
    // 0x80229A78: nop

L_80229A7C:
    // 0x80229A7C: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80229A80: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80229A84: bne         $v0, $zero, L_80229C5C
    if (ctx->r2 != 0) {
        // 0x80229A88: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80229C5C;
    }
    // 0x80229A88: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80229A8C:
    // 0x80229A8C: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80229A90: jal         0x8009A3B4
    // 0x80229A94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x80229A94: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x80229A98: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80229A9C: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80229AA0: jal         0x8009A3B4
    // 0x80229AA4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x80229AA4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_5:
    // 0x80229AA8: j           L_80229C5C
    // 0x80229AAC: nop

        goto L_80229C5C;
    // 0x80229AAC: nop

L_80229AB0:
    // 0x80229AB0: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80229AB4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229AB8: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80229ABC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229AC0: bgez        $v0, L_80229C5C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229AC4: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80229C5C;
    }
    // 0x80229AC4: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80229AC8: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80229ACC: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80229AD0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80229AD4: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229AD8: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x80229ADC: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80229AE0: addiu       $a2, $zero, 0x400
    ctx->r6 = ADD32(0, 0X400);
    // 0x80229AE4: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80229AE8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    // 0x80229AEC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80229AF0: lh          $a1, 0x56($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X56);
    // 0x80229AF4: lh          $v1, 0x56($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X56);
    // 0x80229AF8: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x80229AFC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x80229B00: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80229B04: jal         0x8004FAEC
    // 0x80229B08: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_6;
    // 0x80229B08: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_6:
    // 0x80229B0C: beq         $v0, $zero, L_80229B24
    if (ctx->r2 == 0) {
        // 0x80229B10: nop
    
            goto L_80229B24;
    }
    // 0x80229B10: nop

    // 0x80229B14: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x80229B18: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80229B1C: j           L_80229B30
    // 0x80229B20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_80229B30;
    // 0x80229B20: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_80229B24:
    // 0x80229B24: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x80229B28: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80229B2C: addiu       $v0, $v0, 0x3
    ctx->r2 = ADD32(ctx->r2, 0X3);
L_80229B30:
    // 0x80229B30: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
L_80229B34:
    // 0x80229B34: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80229B38: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229B3C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80229B40: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229B44: bgez        $v0, L_80229BA0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229B48: nop
    
            goto L_80229BA0;
    }
    // 0x80229B48: nop

    // 0x80229B4C: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x80229B50: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229B54: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
    // 0x80229B58: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229B5C: bgez        $v0, L_80229B80
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229B60: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_80229B80;
    }
    // 0x80229B60: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80229B64: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80229B68: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x80229B6C: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80229B70: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229B74: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80229B78: j           L_80229BB8
    // 0x80229B7C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80229BB8;
    // 0x80229B7C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80229B80:
    // 0x80229B80: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80229B84: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80229B88: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229B8C: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x80229B90: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80229B94: addiu       $v0, $v0, 0x7
    ctx->r2 = ADD32(ctx->r2, 0X7);
    // 0x80229B98: j           L_80229C5C
    // 0x80229B9C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80229C5C;
    // 0x80229B9C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80229BA0:
    // 0x80229BA0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229BA4: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x80229BA8: bnel        $v0, $zero, L_80229C5C
    if (ctx->r2 != 0) {
        // 0x80229BAC: sh          $zero, 0x6($s1)
        MEM_H(0X6, ctx->r17) = 0;
            goto L_80229C5C;
    }
    goto skip_0;
    // 0x80229BAC: sh          $zero, 0x6($s1)
    MEM_H(0X6, ctx->r17) = 0;
    skip_0:
    // 0x80229BB0: j           L_80229C5C
    // 0x80229BB4: nop

        goto L_80229C5C;
    // 0x80229BB4: nop

L_80229BB8:
    // 0x80229BB8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229BBC: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    // 0x80229BC0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229BC4: jal         0x8004DA90
    // 0x80229BC8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_7;
    // 0x80229BC8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
    // 0x80229BCC: jal         0x80040F30
    // 0x80229BD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_8;
    // 0x80229BD0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_8:
    // 0x80229BD4: jal         0x8003E934
    // 0x80229BD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_9;
    // 0x80229BD8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_9:
    // 0x80229BDC: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229BE0: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80229BE4: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80229BE8: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229BEC: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80229BF0: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80229BF4: bltz        $v0, L_80229C0C
    if (SIGNED(ctx->r2) < 0) {
        // 0x80229BF8: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80229C0C;
    }
    // 0x80229BF8: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80229BFC: beq         $v0, $zero, L_80229C1C
    if (ctx->r2 == 0) {
        // 0x80229C00: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80229C1C;
    }
    // 0x80229C00: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80229C04: j           L_80229C38
    // 0x80229C08: nop

        goto L_80229C38;
    // 0x80229C08: nop

L_80229C0C:
    // 0x80229C0C: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x80229C10: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80229C14: bne         $v0, $zero, L_80229C38
    if (ctx->r2 != 0) {
        // 0x80229C18: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80229C38;
    }
    // 0x80229C18: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80229C1C:
    // 0x80229C1C: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80229C20: jal         0x8009A3B4
    // 0x80229C24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x80229C24: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x80229C28: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80229C2C: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80229C30: jal         0x8009A3B4
    // 0x80229C34: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_11;
    // 0x80229C34: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_11:
L_80229C38:
    // 0x80229C38: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80229C3C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229C40: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80229C44: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229C48: bgez        $v0, L_80229C5C
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229C4C: nop
    
            goto L_80229C5C;
    }
    // 0x80229C4C: nop

    // 0x80229C50: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229C54: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80229C58: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80229C5C:
    // 0x80229C5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80229C60: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80229C64: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80229C68: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80229C6C: jr          $ra
    // 0x80229C70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x80229C70: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_802397C4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802397C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802397C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802397CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802397D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802397D4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802397D8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802397DC: bne         $v0, $zero, L_802397EC
    if (ctx->r2 != 0) {
        // 0x802397E0: nop
    
            goto L_802397EC;
    }
    // 0x802397E0: nop

    // 0x802397E4: jal         0x80239920
    // 0x802397E8: nop

    func_80239920_ovl2(rdram, ctx);
        goto after_0;
    // 0x802397E8: nop

    after_0:
L_802397EC:
    // 0x802397EC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802397F0: sltiu       $v0, $v0, 0x4
    ctx->r2 = ctx->r2 < 0X4 ? 1 : 0;
    // 0x802397F4: bne         $v0, $zero, L_80239814
    if (ctx->r2 != 0) {
        // 0x802397F8: nop
    
            goto L_80239814;
    }
    // 0x802397F8: nop

    // 0x802397FC: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80239800: lbu         $v1, 0xD($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XD);
    // 0x80239804: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239808: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023980C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80239810: sb          $v1, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r3;
L_80239814:
    // 0x80239814: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80239818: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023981C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80239820: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80239824: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80239828: jr          $ra
    // 0x8023982C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023982C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236834_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236834: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80236838: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8023683C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80236840: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80236844: lhu         $v0, 0x2C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2C);
    // 0x80236848: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8023684C: beq         $v0, $zero, L_8023685C
    if (ctx->r2 == 0) {
        // 0x80236850: lui         $v0, 0x80
        ctx->r2 = S32(0X80 << 16);
            goto L_8023685C;
    }
    // 0x80236850: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80236854: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80236858: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
L_8023685C:
    // 0x8023685C: jal         0x800A3450
    // 0x80236860: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x80236860: nop

    after_0:
    // 0x80236864: lhu         $v1, 0x2C($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X2C);
    // 0x80236868: andi        $v1, $v1, 0x2
    ctx->r3 = ctx->r3 & 0X2;
    // 0x8023686C: beq         $v1, $zero, L_8023687C
    if (ctx->r3 == 0) {
        // 0x80236870: sh          $v0, 0x2E($s0)
        MEM_H(0X2E, ctx->r16) = ctx->r2;
            goto L_8023687C;
    }
    // 0x80236870: sh          $v0, 0x2E($s0)
    MEM_H(0X2E, ctx->r16) = ctx->r2;
    // 0x80236874: jal         0x80236B6C
    // 0x80236878: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80236B6C_ovl2(rdram, ctx);
        goto after_1;
    // 0x80236878: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8023687C:
    // 0x8023687C: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x80236880: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236884: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236888: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023688C: lw          $v0, -0xAC4($at)
    ctx->r2 = MEM_W(ctx->r1, -0XAC4);
    // 0x80236890: jalr        $v0
    // 0x80236894: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_2;
    // 0x80236894: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80236898: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x8023689C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802368A0: beq         $v0, $zero, L_80236958
    if (ctx->r2 == 0) {
        // 0x802368A4: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80236958;
    }
    // 0x802368A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802368A8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x802368AC: beq         $v1, $v0, L_802368C4
    if (ctx->r3 == ctx->r2) {
        // 0x802368B0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802368C4;
    }
    // 0x802368B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802368B4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x802368B8: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x802368BC: jal         0x80047284
    // 0x802368C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_80047284_22684(rdram, ctx);
        goto after_3;
    // 0x802368C0: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
L_802368C4:
    // 0x802368C4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x802368C8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802368CC: beq         $v0, $zero, L_80236958
    if (ctx->r2 == 0) {
        // 0x802368D0: nop
    
            goto L_80236958;
    }
    // 0x802368D0: nop

    // 0x802368D4: lhu         $v0, 0x2C($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X2C);
    // 0x802368D8: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x802368DC: beq         $v0, $zero, L_80236958
    if (ctx->r2 == 0) {
        // 0x802368E0: addu        $a2, $zero, $zero
        ctx->r6 = ADD32(0, 0);
            goto L_80236958;
    }
    // 0x802368E0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802368E4: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
    // 0x802368E8: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x802368EC: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    // 0x802368F0: addiu       $v0, $v0, -0x80
    ctx->r2 = ADD32(ctx->r2, -0X80);
    // 0x802368F4: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    // 0x802368F8: addiu       $v0, $s0, 0x30
    ctx->r2 = ADD32(ctx->r16, 0X30);
    // 0x802368FC: sw          $a0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r4;
    // 0x80236900: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80236904: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80236908: srl         $v1, $v1, 4
    ctx->r3 = S32(U32(ctx->r3) >> 4);
    // 0x8023690C: srl         $v0, $v0, 4
    ctx->r2 = S32(U32(ctx->r2) >> 4);
    // 0x80236910: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236914: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x80236918: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x8023691C: lw          $a1, -0xABC($a1)
    ctx->r5 = MEM_W(ctx->r5, -0XABC);
    // 0x80236920: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80236924: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x80236928: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8023692C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80236930: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x80236934: lui         $a3, 0x8024
    ctx->r7 = S32(0X8024 << 16);
    // 0x80236938: addu        $a3, $a3, $v1
    ctx->r7 = ADD32(ctx->r7, ctx->r3);
    // 0x8023693C: lw          $a3, -0xAB4($a3)
    ctx->r7 = MEM_W(ctx->r7, -0XAB4);
    // 0x80236940: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x80236944: jal         0x80051E18
    // 0x80236948: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    func_80051E18_2D218(rdram, ctx);
        goto after_4;
    // 0x80236948: addiu       $a1, $zero, 0xA0
    ctx->r5 = ADD32(0, 0XA0);
    after_4:
    // 0x8023694C: lhu         $v0, 0x3A($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X3A);
    // 0x80236950: addiu       $v0, $v0, 0x80
    ctx->r2 = ADD32(ctx->r2, 0X80);
    // 0x80236954: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
L_80236958:
    // 0x80236958: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8023695C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80236960: jr          $ra
    // 0x80236964: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80236964: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802356D0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802356D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802356D4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802356D8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802356DC: beq         $v0, $zero, L_802356F4
    if (ctx->r2 == 0) {
        // 0x802356E0: nop
    
            goto L_802356F4;
    }
    // 0x802356E0: nop

    // 0x802356E4: jal         0x802357C4
    // 0x802356E8: nop

    func_802357C4_ovl2(rdram, ctx);
        goto after_0;
    // 0x802356E8: nop

    after_0:
    // 0x802356EC: j           L_802356FC
    // 0x802356F0: nop

        goto L_802356FC;
    // 0x802356F0: nop

L_802356F4:
    // 0x802356F4: jal         0x80235708
    // 0x802356F8: nop

    func_80235708_ovl2(rdram, ctx);
        goto after_1;
    // 0x802356F8: nop

    after_1:
L_802356FC:
    // 0x802356FC: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80235700: jr          $ra
    // 0x80235704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235704: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022DAC4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022DAC4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8022DAC8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8022DACC: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022DAD0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8022DAD4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8022DAD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8022DADC: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022DAE0: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022DAE4: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022DAE8: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022DAEC: beq         $v0, $zero, L_8022DDC8
    if (ctx->r2 == 0) {
        // 0x8022DAF0: addiu       $s0, $s1, 0x4E0
        ctx->r16 = ADD32(ctx->r17, 0X4E0);
            goto L_8022DDC8;
    }
    // 0x8022DAF0: addiu       $s0, $s1, 0x4E0
    ctx->r16 = ADD32(ctx->r17, 0X4E0);
    // 0x8022DAF4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022DAF8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022DAFC: addu        $at, $at, $v0
    gpr jr_addend_8022DB04 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022DB00: lw          $v0, -0x150($at)
    ctx->r2 = ADD32(ctx->r1, -0X150);
    // 0x8022DB04: jr          $v0
    // 0x8022DB08: nop

    switch (jr_addend_8022DB04 >> 2) {
        case 0: goto L_8022DB0C; break;
        case 1: goto L_8022DB40; break;
        case 2: goto L_8022DC1C; break;
        case 3: goto L_8022DCA4; break;
        case 4: goto L_8022DD58; break;
        default: switch_error(__func__, 0x8022DB04, 0x8023FEB0);
    }
    // 0x8022DB08: nop

L_8022DB0C:
    // 0x8022DB0C: addiu       $a0, $zero, 0xC3
    ctx->r4 = ADD32(0, 0XC3);
    // 0x8022DB10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022DB14: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022DB18: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x8022DB1C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022DB20: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x8022DB24: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022DB28: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x8022DB2C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022DB30: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    // 0x8022DB34: andi        $v1, $v1, 0xFFFB
    ctx->r3 = ctx->r3 & 0XFFFB;
    // 0x8022DB38: jal         0x8002A33C
    // 0x8022DB3C: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022DB3C: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
    after_0:
L_8022DB40:
    // 0x8022DB40: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022DB44: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DB48: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022DB4C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DB50: bgez        $v0, L_8022DB78
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022DB54: addiu       $a0, $s1, 0x1C
        ctx->r4 = ADD32(ctx->r17, 0X1C);
            goto L_8022DB78;
    }
    // 0x8022DB54: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022DB58: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022DB5C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
    // 0x8022DB60: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x8022DB64: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DB68: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022DB6C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022DB70: j           L_8022DC1C
    // 0x8022DB74: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_8022DC1C;
    // 0x8022DB74: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8022DB78:
    // 0x8022DB78: addiu       $a2, $zero, 0x100
    ctx->r6 = ADD32(0, 0X100);
    // 0x8022DB7C: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x8022DB80: lh          $v1, 0x56($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X56);
    // 0x8022DB84: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x8022DB88: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022DB8C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022DB90: jal         0x8004FAEC
    // 0x8022DB94: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_1;
    // 0x8022DB94: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x8022DB98: bne         $v0, $zero, L_8022DBBC
    if (ctx->r2 != 0) {
        // 0x8022DB9C: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_8022DBBC;
    }
    // 0x8022DB9C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022DBA0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022DBA4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022DBA8: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x8022DBAC: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022DBB0: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022DBB4: j           L_8022DDC8
    // 0x8022DBB8: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_8022DDC8;
    // 0x8022DBB8: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8022DBBC:
    // 0x8022DBBC: lh          $v1, 0x4($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X4);
    // 0x8022DBC0: bne         $v1, $v0, L_8022DDC8
    if (ctx->r3 != ctx->r2) {
        // 0x8022DBC4: nop
    
            goto L_8022DDC8;
    }
    // 0x8022DBC4: nop

    // 0x8022DBC8: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x8022DBCC: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8022DBD0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022DBD4: bne         $v0, $zero, L_8022DBE0
    if (ctx->r2 != 0) {
        // 0x8022DBD8: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022DBE0;
    }
    // 0x8022DBD8: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022DBDC: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
L_8022DBE0:
    // 0x8022DBE0: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x8022DBE4: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8022DBE8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022DBEC: bne         $v0, $zero, L_8022DBF8
    if (ctx->r2 != 0) {
        // 0x8022DBF0: addiu       $v0, $zero, 0x4
        ctx->r2 = ADD32(0, 0X4);
            goto L_8022DBF8;
    }
    // 0x8022DBF0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022DBF4: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
L_8022DBF8:
    // 0x8022DBF8: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x8022DBFC: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x8022DC00: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x8022DC04: addiu       $a0, $zero, 0xC4
    ctx->r4 = ADD32(0, 0XC4);
    // 0x8022DC08: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022DC0C: jal         0x8002A33C
    // 0x8022DC10: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022DC10: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    after_2:
    // 0x8022DC14: j           L_8022DDC8
    // 0x8022DC18: nop

        goto L_8022DDC8;
    // 0x8022DC18: nop

L_8022DC1C:
    // 0x8022DC1C: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8022DC20: bne         $v0, $zero, L_8022DD24
    if (ctx->r2 != 0) {
        // 0x8022DC24: nop
    
            goto L_8022DD24;
    }
    // 0x8022DC24: nop

    // 0x8022DC28: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x8022DC2C: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x8022DC30: andi        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 & 0X5;
    // 0x8022DC34: beq         $v0, $zero, L_8022DC90
    if (ctx->r2 == 0) {
        // 0x8022DC38: nop
    
            goto L_8022DC90;
    }
    // 0x8022DC38: nop

    // 0x8022DC3C: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x8022DC40: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x8022DC44: andi        $v0, $v0, 0x5
    ctx->r2 = ctx->r2 & 0X5;
    // 0x8022DC48: beq         $v0, $zero, L_8022DC90
    if (ctx->r2 == 0) {
        // 0x8022DC4C: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_8022DC90;
    }
    // 0x8022DC4C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022DC50: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022DC54: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x8022DC58: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DC5C: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022DC60: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x8022DC64: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022DC68: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022DC6C: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8022DC70: addiu       $a0, $zero, -0x5
    ctx->r4 = ADD32(0, -0X5);
    // 0x8022DC74: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8022DC78: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x8022DC7C: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x8022DC80: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8022DC84: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8022DC88: j           L_8022DCA4
    // 0x8022DC8C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
        goto L_8022DCA4;
    // 0x8022DC8C: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_8022DC90:
    // 0x8022DC90: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8022DC94: beq         $v0, $zero, L_8022DDC8
    if (ctx->r2 == 0) {
        // 0x8022DC98: nop
    
            goto L_8022DDC8;
    }
    // 0x8022DC98: nop

    // 0x8022DC9C: j           L_8022DD24
    // 0x8022DCA0: nop

        goto L_8022DD24;
    // 0x8022DCA0: nop

L_8022DCA4:
    // 0x8022DCA4: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8022DCA8: bne         $v0, $zero, L_8022DD24
    if (ctx->r2 != 0) {
        // 0x8022DCAC: nop
    
            goto L_8022DD24;
    }
    // 0x8022DCAC: nop

    // 0x8022DCB0: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x8022DCB4: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x8022DCB8: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022DCBC: beq         $v0, $zero, L_8022DD18
    if (ctx->r2 == 0) {
        // 0x8022DCC0: nop
    
            goto L_8022DD18;
    }
    // 0x8022DCC0: nop

    // 0x8022DCC4: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x8022DCC8: lbu         $v0, 0xE($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0XE);
    // 0x8022DCCC: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x8022DCD0: beq         $v0, $zero, L_8022DD18
    if (ctx->r2 == 0) {
        // 0x8022DCD4: addiu       $v1, $zero, 0x4
        ctx->r3 = ADD32(0, 0X4);
            goto L_8022DD18;
    }
    // 0x8022DCD4: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8022DCD8: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022DCDC: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x8022DCE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022DCE4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022DCE8: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x8022DCEC: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022DCF0: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022DCF4: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8022DCF8: addiu       $a0, $zero, -0x3
    ctx->r4 = ADD32(0, -0X3);
    // 0x8022DCFC: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8022DD00: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x8022DD04: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x8022DD08: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8022DD0C: and         $v0, $v0, $a0
    ctx->r2 = ctx->r2 & ctx->r4;
    // 0x8022DD10: j           L_8022DD58
    // 0x8022DD14: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
        goto L_8022DD58;
    // 0x8022DD14: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_8022DD18:
    // 0x8022DD18: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8022DD1C: beq         $v0, $zero, L_8022DD34
    if (ctx->r2 == 0) {
        // 0x8022DD20: nop
    
            goto L_8022DD34;
    }
    // 0x8022DD20: nop

L_8022DD24:
    // 0x8022DD24: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022DD28: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DD2C: j           L_8022DDC8
    // 0x8022DD30: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_8022DDC8;
    // 0x8022DD30: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8022DD34:
    // 0x8022DD34: lw          $v1, 0x34($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X34);
    // 0x8022DD38: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8022DD3C: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022DD40: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
    // 0x8022DD44: lw          $v1, 0x38($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X38);
    // 0x8022DD48: lbu         $v0, 0xE($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0XE);
    // 0x8022DD4C: ori         $v0, $v0, 0x8
    ctx->r2 = ctx->r2 | 0X8;
    // 0x8022DD50: j           L_8022DDC8
    // 0x8022DD54: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
        goto L_8022DDC8;
    // 0x8022DD54: sb          $v0, 0xE($v1)
    MEM_B(0XE, ctx->r3) = ctx->r2;
L_8022DD58:
    // 0x8022DD58: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022DD5C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022DD60: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022DD64: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022DD68: bgez        $v0, L_8022DDC8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022DD6C: addiu       $a0, $s1, 0x1C
        ctx->r4 = ADD32(ctx->r17, 0X1C);
            goto L_8022DDC8;
    }
    // 0x8022DD6C: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022DD70: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x8022DD74: lh          $a1, 0x56($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X56);
    // 0x8022DD78: lh          $v1, 0x56($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X56);
    // 0x8022DD7C: addiu       $a3, $s2, 0x1C
    ctx->r7 = ADD32(ctx->r18, 0X1C);
    // 0x8022DD80: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8022DD84: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022DD88: jal         0x8004FAEC
    // 0x8022DD8C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_8004FAEC_2AEEC(rdram, ctx);
        goto after_3;
    // 0x8022DD8C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_3:
    // 0x8022DD90: beq         $v0, $zero, L_8022DDA0
    if (ctx->r2 == 0) {
        // 0x8022DD94: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022DDA0;
    }
    // 0x8022DD94: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DD98: j           L_8022DDB0
    // 0x8022DD9C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
        goto L_8022DDB0;
    // 0x8022DD9C: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
L_8022DDA0:
    // 0x8022DDA0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022DDA4: sb          $v0, 0x9($s1)
    MEM_B(0X9, ctx->r17) = ctx->r2;
    // 0x8022DDA8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022DDAC: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
L_8022DDB0:
    // 0x8022DDB0: sh          $zero, 0xA($s1)
    MEM_H(0XA, ctx->r17) = 0;
    // 0x8022DDB4: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022DDB8: addiu       $v1, $zero, 0x3C
    ctx->r3 = ADD32(0, 0X3C);
    // 0x8022DDBC: sh          $v1, 0x6($s0)
    MEM_H(0X6, ctx->r16) = ctx->r3;
    // 0x8022DDC0: ori         $v0, $v0, 0x4
    ctx->r2 = ctx->r2 | 0X4;
    // 0x8022DDC4: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_8022DDC8:
    // 0x8022DDC8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8022DDCC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8022DDD0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8022DDD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8022DDD8: jr          $ra
    // 0x8022DDDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x8022DDDC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8022AAF4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022AAF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022AAF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8022AAFC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022AB00: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x8022AB04: beq         $v1, $zero, L_8022AB20
    if (ctx->r3 == 0) {
        // 0x8022AB08: addiu       $s0, $a0, 0x348
        ctx->r16 = ADD32(ctx->r4, 0X348);
            goto L_8022AB20;
    }
    // 0x8022AB08: addiu       $s0, $a0, 0x348
    ctx->r16 = ADD32(ctx->r4, 0X348);
    // 0x8022AB0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AB10: beq         $v1, $v0, L_8022AB3C
    if (ctx->r3 == ctx->r2) {
        // 0x8022AB14: nop
    
            goto L_8022AB3C;
    }
    // 0x8022AB14: nop

    // 0x8022AB18: j           L_8022AB98
    // 0x8022AB1C: nop

        goto L_8022AB98;
    // 0x8022AB1C: nop

L_8022AB20:
    // 0x8022AB20: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022AB24: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x8022AB28: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8022AB2C: sb          $zero, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = 0;
    // 0x8022AB30: sb          $zero, 0xFF($a0)
    MEM_B(0XFF, ctx->r4) = 0;
    // 0x8022AB34: sh          $v0, 0x34C($a0)
    MEM_H(0X34C, ctx->r4) = ctx->r2;
    // 0x8022AB38: sh          $zero, 0x350($a0)
    MEM_H(0X350, ctx->r4) = 0;
L_8022AB3C:
    // 0x8022AB3C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022AB40: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022AB44: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022AB48: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022AB4C: bgez        $v0, L_8022AB80
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022AB50: addiu       $a1, $zero, 0x40
        ctx->r5 = ADD32(0, 0X40);
            goto L_8022AB80;
    }
    // 0x8022AB50: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    // 0x8022AB54: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x8022AB58: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AB5C: jal         0x8004DA90
    // 0x8022AB60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022AB60: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_0:
    // 0x8022AB64: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x8022AB68: lhu         $v1, 0x0($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X0);
    // 0x8022AB6C: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x8022AB70: ori         $v1, $v1, 0x1
    ctx->r3 = ctx->r3 | 0X1;
    // 0x8022AB74: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
    // 0x8022AB78: j           L_8022AB98
    // 0x8022AB7C: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
        goto L_8022AB98;
    // 0x8022AB7C: sh          $v1, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r3;
L_8022AB80:
    // 0x8022AB80: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022AB84: jal         0x8004DA90
    // 0x8022AB88: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x8022AB88: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x8022AB8C: lw          $v0, 0x3C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X3C);
    // 0x8022AB90: addiu       $v0, $v0, 0x100
    ctx->r2 = ADD32(ctx->r2, 0X100);
    // 0x8022AB94: sw          $v0, 0x3C($s0)
    MEM_W(0X3C, ctx->r16) = ctx->r2;
L_8022AB98:
    // 0x8022AB98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8022AB9C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022ABA0: jr          $ra
    // 0x8022ABA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8022ABA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802333B0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802333B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802333B4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802333B8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802333BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802333C0: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x802333C4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802333C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802333CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802333D0: lw          $v0, -0xD70($at)
    ctx->r2 = MEM_W(ctx->r1, -0XD70);
    // 0x802333D4: jalr        $v0
    // 0x802333D8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802333D8: nop

    after_0:
    // 0x802333DC: sw          $zero, 0xD4($s0)
    MEM_W(0XD4, ctx->r16) = 0;
    // 0x802333E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802333E4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802333E8: jr          $ra
    // 0x802333EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802333EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233CD8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233CD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80233CDC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80233CE0: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x80233CE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233CE8: beq         $v1, $v0, L_80233D44
    if (ctx->r3 == ctx->r2) {
        // 0x80233CEC: addiu       $a1, $a0, 0xC0
        ctx->r5 = ADD32(ctx->r4, 0XC0);
            goto L_80233D44;
    }
    // 0x80233CEC: addiu       $a1, $a0, 0xC0
    ctx->r5 = ADD32(ctx->r4, 0XC0);
    // 0x80233CF0: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80233CF4: beql        $v0, $zero, L_80233D0C
    if (ctx->r2 == 0) {
        // 0x80233CF8: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80233D0C;
    }
    goto skip_0;
    // 0x80233CF8: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80233CFC: beq         $v1, $zero, L_80233D24
    if (ctx->r3 == 0) {
        // 0x80233D00: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80233D24;
    }
    // 0x80233D00: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80233D04: j           L_80233DE0
    // 0x80233D08: addiu       $a0, $a0, 0x8C
    ctx->r4 = ADD32(ctx->r4, 0X8C);
        goto L_80233DE0;
    // 0x80233D08: addiu       $a0, $a0, 0x8C
    ctx->r4 = ADD32(ctx->r4, 0X8C);
L_80233D0C:
    // 0x80233D0C: beq         $v1, $v0, L_80233D7C
    if (ctx->r3 == ctx->r2) {
        // 0x80233D10: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_80233D7C;
    }
    // 0x80233D10: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233D14: beq         $v1, $v0, L_80233DA4
    if (ctx->r3 == ctx->r2) {
        // 0x80233D18: nop
    
            goto L_80233DA4;
    }
    // 0x80233D18: nop

    // 0x80233D1C: j           L_80233DE0
    // 0x80233D20: addiu       $a0, $a0, 0x8C
    ctx->r4 = ADD32(ctx->r4, 0X8C);
        goto L_80233DE0;
    // 0x80233D20: addiu       $a0, $a0, 0x8C
    ctx->r4 = ADD32(ctx->r4, 0X8C);
L_80233D24:
    // 0x80233D24: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80233D28: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80233D2C: sh          $v0, 0xC4($a0)
    MEM_H(0XC4, ctx->r4) = ctx->r2;
    // 0x80233D30: addiu       $v0, $zero, 0x1000
    ctx->r2 = ADD32(0, 0X1000);
    // 0x80233D34: sb          $zero, 0xC8($a0)
    MEM_B(0XC8, ctx->r4) = 0;
    // 0x80233D38: sw          $v0, 0xF8($a0)
    MEM_W(0XF8, ctx->r4) = ctx->r2;
    // 0x80233D3C: sw          $v0, 0xFC($a0)
    MEM_W(0XFC, ctx->r4) = ctx->r2;
    // 0x80233D40: sw          $v0, 0x100($a0)
    MEM_W(0X100, ctx->r4) = ctx->r2;
L_80233D44:
    // 0x80233D44: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80233D48: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80233D4C: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80233D50: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233D54: bltzl       $v0, L_80233D68
    if (SIGNED(ctx->r2) < 0) {
        // 0x80233D58: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80233D68;
    }
    goto skip_1;
    // 0x80233D58: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x80233D5C: lw          $v0, 0x3C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X3C);
    // 0x80233D60: j           L_80233DD8
    // 0x80233D64: addiu       $v0, $v0, 0x199
    ctx->r2 = ADD32(ctx->r2, 0X199);
        goto L_80233DD8;
    // 0x80233D64: addiu       $v0, $v0, 0x199
    ctx->r2 = ADD32(ctx->r2, 0X199);
L_80233D68:
    // 0x80233D68: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80233D6C: addiu       $v0, $zero, 0x1E
    ctx->r2 = ADD32(0, 0X1E);
    // 0x80233D70: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80233D74: addiu       $v0, $zero, 0x2000
    ctx->r2 = ADD32(0, 0X2000);
    // 0x80233D78: sw          $v0, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->r2;
L_80233D7C:
    // 0x80233D7C: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80233D80: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80233D84: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80233D88: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233D8C: bgezl       $v0, L_80233DE0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80233D90: addiu       $a0, $a0, 0x8C
        ctx->r4 = ADD32(ctx->r4, 0X8C);
            goto L_80233DE0;
    }
    goto skip_2;
    // 0x80233D90: addiu       $a0, $a0, 0x8C
    ctx->r4 = ADD32(ctx->r4, 0X8C);
    skip_2:
    // 0x80233D94: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x80233D98: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80233D9C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80233DA0: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
L_80233DA4:
    // 0x80233DA4: lhu         $v0, 0x4($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X4);
    // 0x80233DA8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80233DAC: sh          $v0, 0x4($a1)
    MEM_H(0X4, ctx->r5) = ctx->r2;
    // 0x80233DB0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80233DB4: bgez        $v0, L_80233DD0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80233DB8: addiu       $v1, $zero, 0x1000
        ctx->r3 = ADD32(0, 0X1000);
            goto L_80233DD0;
    }
    // 0x80233DB8: addiu       $v1, $zero, 0x1000
    ctx->r3 = ADD32(0, 0X1000);
    // 0x80233DBC: lhu         $v0, 0x0($a1)
    ctx->r2 = MEM_HU(ctx->r5, 0X0);
    // 0x80233DC0: sw          $v1, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->r3;
    // 0x80233DC4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80233DC8: j           L_80233DDC
    // 0x80233DCC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
        goto L_80233DDC;
    // 0x80233DCC: sh          $v0, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r2;
L_80233DD0:
    // 0x80233DD0: lw          $v0, 0x3C($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X3C);
    // 0x80233DD4: addiu       $v0, $v0, -0x111
    ctx->r2 = ADD32(ctx->r2, -0X111);
L_80233DD8:
    // 0x80233DD8: sw          $v0, 0x3C($a1)
    MEM_W(0X3C, ctx->r5) = ctx->r2;
L_80233DDC:
    // 0x80233DDC: addiu       $a0, $a0, 0x8C
    ctx->r4 = ADD32(ctx->r4, 0X8C);
L_80233DE0:
    // 0x80233DE0: jal         0x80031DA8
    // 0x80233DE4: addiu       $a1, $a1, 0x38
    ctx->r5 = ADD32(ctx->r5, 0X38);
    func_80031DA8_D1A8(rdram, ctx);
        goto after_0;
    // 0x80233DE4: addiu       $a1, $a1, 0x38
    ctx->r5 = ADD32(ctx->r5, 0X38);
    after_0:
    // 0x80233DE8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80233DEC: jr          $ra
    // 0x80233DF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80233DF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802378D8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802378D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802378DC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802378E0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x802378E4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802378E8: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x802378EC: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x802378F0: jal         0x8006033C
    // 0x802378F4: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802378F4: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    after_0:
    // 0x802378F8: bne         $v0, $zero, L_802379D0
    if (ctx->r2 != 0) {
        // 0x802378FC: nop
    
            goto L_802379D0;
    }
    // 0x802378FC: nop

    // 0x80237900: jal         0x8006033C
    // 0x80237904: addiu       $a0, $zero, 0x61B
    ctx->r4 = ADD32(0, 0X61B);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80237904: addiu       $a0, $zero, 0x61B
    ctx->r4 = ADD32(0, 0X61B);
    after_1:
    // 0x80237908: bne         $v0, $zero, L_802379D0
    if (ctx->r2 != 0) {
        // 0x8023790C: nop
    
            goto L_802379D0;
    }
    // 0x8023790C: nop

    // 0x80237910: jal         0x8006033C
    // 0x80237914: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80237914: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_2:
    // 0x80237918: beq         $v0, $zero, L_80237930
    if (ctx->r2 == 0) {
        // 0x8023791C: nop
    
            goto L_80237930;
    }
    // 0x8023791C: nop

    // 0x80237920: jal         0x8006033C
    // 0x80237924: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80237924: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_3:
    // 0x80237928: bne         $v0, $zero, L_802379D0
    if (ctx->r2 != 0) {
        // 0x8023792C: nop
    
            goto L_802379D0;
    }
    // 0x8023792C: nop

L_80237930:
    // 0x80237930: lb          $v1, 0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X8);
    // 0x80237934: beq         $v1, $zero, L_8023794C
    if (ctx->r3 == 0) {
        // 0x80237938: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023794C;
    }
    // 0x80237938: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023793C: beq         $v1, $v0, L_80237988
    if (ctx->r3 == ctx->r2) {
        // 0x80237940: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80237988;
    }
    // 0x80237940: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80237944: j           L_802379D0
    // 0x80237948: nop

        goto L_802379D0;
    // 0x80237948: nop

L_8023794C:
    // 0x8023794C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237950: jal         0x80238028
    // 0x80237954: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80238028_ovl2(rdram, ctx);
        goto after_4;
    // 0x80237954: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80237958: beq         $v0, $zero, L_802379D0
    if (ctx->r2 == 0) {
        // 0x8023795C: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_802379D0;
    }
    // 0x8023795C: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x80237960: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x80237964: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237968: jal         0x800616FC
    // 0x8023796C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x8023796C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_5:
    // 0x80237970: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237974: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80237978: addiu       $a0, $zero, 0x27E
    ctx->r4 = ADD32(0, 0X27E);
    // 0x8023797C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80237980: j           L_802379B8
    // 0x80237984: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
        goto L_802379B8;
    // 0x80237984: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
L_80237988:
    // 0x80237988: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x8023798C: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80237990: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80237994: bne         $v0, $zero, L_802379D0
    if (ctx->r2 != 0) {
        // 0x80237998: nop
    
            goto L_802379D0;
    }
    // 0x80237998: nop

    // 0x8023799C: jal         0x8006036C
    // 0x802379A0: addiu       $a0, $zero, 0x61B
    ctx->r4 = ADD32(0, 0X61B);
    func_8006036C_3B76C(rdram, ctx);
        goto after_6;
    // 0x802379A0: addiu       $a0, $zero, 0x61B
    ctx->r4 = ADD32(0, 0X61B);
    after_6:
    // 0x802379A4: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802379A8: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x802379AC: addiu       $a0, $zero, 0x27E
    ctx->r4 = ADD32(0, 0X27E);
    // 0x802379B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802379B4: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
L_802379B8:
    // 0x802379B8: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x802379BC: jal         0x8004CB2C
    // 0x802379C0: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_7;
    // 0x802379C0: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    after_7:
    // 0x802379C4: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x802379C8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x802379CC: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_802379D0:
    // 0x802379D0: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802379D4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802379D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802379DC: jr          $ra
    // 0x802379E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802379E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802362CC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802362CC: jr          $ra
    // 0x802362D0: nop

    TRACE_RETURN()
    return;
    // 0x802362D0: nop

;}
RECOMP_FUNC void func_80230FB4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230FB4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230FB8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230FBC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230FC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230FC4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80230FC8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80230FCC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80230FD0: jal         0x8004D5D4
    // 0x80230FD4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80230FD4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230FD8: sb          $zero, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = 0;
    // 0x80230FDC: lbu         $a1, 0xAC($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0XAC);
    // 0x80230FE0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80230FE4: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80230FE8: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80230FEC: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80230FF0: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80230FF4: addiu       $v0, $zero, 0x8A5
    ctx->r2 = ADD32(0, 0X8A5);
    // 0x80230FF8: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230FFC: sw          $zero, 0x78($s0)
    MEM_W(0X78, ctx->r16) = 0;
    // 0x80231000: jal         0x80050294
    // 0x80231004: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x80231004: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
    after_1:
    // 0x80231008: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023100C: addiu       $v0, $v0, -0x12CC
    ctx->r2 = ADD32(ctx->r2, -0X12CC);
    // 0x80231010: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231014: sw          $v0, 0xC0($at)
    MEM_W(0XC0, ctx->r1) = ctx->r2;
    // 0x80231018: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023101C: addiu       $v0, $v0, -0x1260
    ctx->r2 = ADD32(ctx->r2, -0X1260);
    // 0x80231020: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80231024: sw          $v0, 0xC4($at)
    MEM_W(0XC4, ctx->r1) = ctx->r2;
    // 0x80231028: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x8023102C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231030: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80231034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231038: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023103C: jr          $ra
    // 0x80231040: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231040: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023A3D8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A3D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A3DC: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023A3E0: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8023A3E4: bne         $v0, $zero, L_8023A470
    if (ctx->r2 != 0) {
        // 0x8023A3E8: nop
    
            goto L_8023A470;
    }
    // 0x8023A3E8: nop

    // 0x8023A3EC: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023A3F0: bne         $v0, $zero, L_8023A460
    if (ctx->r2 != 0) {
        // 0x8023A3F4: nop
    
            goto L_8023A460;
    }
    // 0x8023A3F4: nop

    // 0x8023A3F8: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8023A3FC: sb          $zero, 0xE($a0)
    MEM_B(0XE, ctx->r4) = 0;
    // 0x8023A400: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023A404: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8023A408: lui         $v1, 0x801C
    ctx->r3 = S32(0X801C << 16);
    // 0x8023A40C: lb          $v1, -0x3BC8($v1)
    ctx->r3 = MEM_B(ctx->r3, -0X3BC8);
    // 0x8023A410: addiu       $v0, $zero, 0x16
    ctx->r2 = ADD32(0, 0X16);
    // 0x8023A414: bnel        $v1, $v0, L_8023A428
    if (ctx->r3 != ctx->r2) {
        // 0x8023A418: lui         $v0, 0x3C88
        ctx->r2 = S32(0X3C88 << 16);
            goto L_8023A428;
    }
    goto skip_0;
    // 0x8023A418: lui         $v0, 0x3C88
    ctx->r2 = S32(0X3C88 << 16);
    skip_0:
    // 0x8023A41C: lui         $v0, 0x3CC8
    ctx->r2 = S32(0X3CC8 << 16);
    // 0x8023A420: j           L_8023A42C
    // 0x8023A424: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
        goto L_8023A42C;
    // 0x8023A424: ori         $v0, $v0, 0x27
    ctx->r2 = ctx->r2 | 0X27;
L_8023A428:
    // 0x8023A428: ori         $v0, $v0, 0x26
    ctx->r2 = ctx->r2 | 0X26;
L_8023A42C:
    // 0x8023A42C: sw          $v0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r2;
    // 0x8023A430: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x8023A434: lui         $v0, 0x2E80
    ctx->r2 = S32(0X2E80 << 16);
    // 0x8023A438: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8023A43C: sw          $v0, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r2;
    // 0x8023A440: lui         $v0, 0xA
    ctx->r2 = S32(0XA << 16);
    // 0x8023A444: sw          $v0, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->r2;
    // 0x8023A448: lui         $v0, 0xFFFF
    ctx->r2 = S32(0XFFFF << 16);
    // 0x8023A44C: sh          $zero, 0x26($a0)
    MEM_H(0X26, ctx->r4) = 0;
    // 0x8023A450: sw          $zero, 0x34($a0)
    MEM_W(0X34, ctx->r4) = 0;
    // 0x8023A454: sw          $v0, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r2;
    // 0x8023A458: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023A45C: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
L_8023A460:
    // 0x8023A460: jal         0x80239E34
    // 0x8023A464: nop

    func_80239E34_ovl2(rdram, ctx);
        goto after_0;
    // 0x8023A464: nop

    after_0:
    // 0x8023A468: j           L_8023A49C
    // 0x8023A46C: nop

        goto L_8023A49C;
    // 0x8023A46C: nop

L_8023A470:
    // 0x8023A470: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023A474: bne         $v0, $zero, L_8023A494
    if (ctx->r2 != 0) {
        // 0x8023A478: nop
    
            goto L_8023A494;
    }
    // 0x8023A478: nop

    // 0x8023A47C: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x8023A480: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8023A484: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023A488: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023A48C: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8023A490: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
L_8023A494:
    // 0x8023A494: jal         0x80239D20
    // 0x8023A498: nop

    func_80239D20_ovl2(rdram, ctx);
        goto after_1;
    // 0x8023A498: nop

    after_1:
L_8023A49C:
    // 0x8023A49C: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023A4A0: jr          $ra
    // 0x8023A4A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A4A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802396DC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802396DC: jr          $ra
    // 0x802396E0: nop

    TRACE_RETURN()
    return;
    // 0x802396E0: nop

;}
RECOMP_FUNC void func_8023BF80_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023BF80: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023BF84: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8023BF88: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023BF8C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023BF90: addiu       $s0, $zero, 0x1F
    ctx->r16 = ADD32(0, 0X1F);
    // 0x8023BF94: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023BF98: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8023BF9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
L_8023BFA0:
    // 0x8023BFA0: jal         0x8004F374
    // 0x8023BFA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F374_2A774(rdram, ctx);
        goto after_0;
    // 0x8023BFA4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8023BFA8: beql        $v0, $zero, L_8023BFBC
    if (ctx->r2 == 0) {
        // 0x8023BFAC: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_8023BFBC;
    }
    goto skip_0;
    // 0x8023BFAC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    skip_0:
    // 0x8023BFB0: sb          $s1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r17;
    // 0x8023BFB4: j           L_8023BFC4
    // 0x8023BFB8: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
        goto L_8023BFC4;
    // 0x8023BFB8: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
L_8023BFBC:
    // 0x8023BFBC: bgez        $s0, L_8023BFA0
    if (SIGNED(ctx->r16) >= 0) {
        // 0x8023BFC0: nop
    
            goto L_8023BFA0;
    }
    // 0x8023BFC0: nop

L_8023BFC4:
    // 0x8023BFC4: jal         0x8004F62C
    // 0x8023BFC8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    func_8004F62C_2AA2C(rdram, ctx);
        goto after_1;
    // 0x8023BFC8: addu        $a0, $s2, $zero
    ctx->r4 = ADD32(ctx->r18, 0);
    after_1:
    // 0x8023BFCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8023BFD0: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8023BFD4: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023BFD8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023BFDC: jr          $ra
    // 0x8023BFE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023BFE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8023BFE4: nop

    // 0x8023BFE8: nop

    // 0x8023BFEC: nop

;}
RECOMP_FUNC void func_802396EC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802396EC: lhu         $v0, 0x1E($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X1E);
    // 0x802396F0: lbu         $v1, 0xA($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XA);
    // 0x802396F4: addiu       $v0, $v0, 0x6
    ctx->r2 = ADD32(ctx->r2, 0X6);
    // 0x802396F8: sll         $v1, $v1, 1
    ctx->r3 = S32(ctx->r3 << 1);
    // 0x802396FC: sh          $v0, 0x1E($a0)
    MEM_H(0X1E, ctx->r4) = ctx->r2;
    // 0x80239700: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80239704: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239708: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x8023970C: lhu         $v1, -0x7DC($at)
    ctx->r3 = MEM_HU(ctx->r1, -0X7DC);
    // 0x80239710: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239714: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    // 0x80239718: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023971C: sll         $v0, $v0, 1
    ctx->r2 = S32(ctx->r2 << 1);
    // 0x80239720: sb          $v1, 0x22($a0)
    MEM_B(0X22, ctx->r4) = ctx->r3;
    // 0x80239724: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80239728: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023972C: lh          $v1, -0x7DC($v1)
    ctx->r3 = MEM_H(ctx->r3, -0X7DC);
    // 0x80239730: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80239734: bne         $v1, $v0, L_80239748
    if (ctx->r3 != ctx->r2) {
        // 0x80239738: addiu       $sp, $sp, -0x8
        ctx->r29 = ADD32(ctx->r29, -0X8);
            goto L_80239748;
    }
    // 0x80239738: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8023973C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80239740: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239744: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80239748:
    // 0x80239748: jr          $ra
    // 0x8023974C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x8023974C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_802363BC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802363BC: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x802363C0: lhu         $v0, -0x730C($v0)
    ctx->r2 = MEM_HU(ctx->r2, -0X730C);
    // 0x802363C4: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802363C8: bne         $v0, $zero, L_802363D4
    if (ctx->r2 != 0) {
        // 0x802363CC: addiu       $v0, $zero, -0x2
        ctx->r2 = ADD32(0, -0X2);
            goto L_802363D4;
    }
    // 0x802363CC: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
    // 0x802363D0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_802363D4:
    // 0x802363D4: sh          $v0, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = ctx->r2;
    // 0x802363D8: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x802363DC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x802363E0: sb          $v0, 0xC($a0)
    MEM_B(0XC, ctx->r4) = ctx->r2;
    // 0x802363E4: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x802363E8: bne         $v0, $zero, L_80236400
    if (ctx->r2 != 0) {
        // 0x802363EC: nop
    
            goto L_80236400;
    }
    // 0x802363EC: nop

    // 0x802363F0: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802363F4: sh          $zero, 0x3A($a0)
    MEM_H(0X3A, ctx->r4) = 0;
    // 0x802363F8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802363FC: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80236400:
    // 0x80236400: jr          $ra
    // 0x80236404: nop

    TRACE_RETURN()
    return;
    // 0x80236404: nop

;}
RECOMP_FUNC void func_80239770_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239770: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239774: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80239778: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8023977C: bne         $v0, $zero, L_8023979C
    if (ctx->r2 != 0) {
        // 0x80239780: nop
    
            goto L_8023979C;
    }
    // 0x80239780: nop

    // 0x80239784: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80239788: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023978C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239790: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239794: j           L_802397B0
    // 0x80239798: lw          $v0, -0x7C0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7C0);
        goto L_802397B0;
    // 0x80239798: lw          $v0, -0x7C0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7C0);
L_8023979C:
    // 0x8023979C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x802397A0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802397A4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802397A8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802397AC: lw          $v0, -0x7BC($at)
    ctx->r2 = MEM_W(ctx->r1, -0X7BC);
L_802397B0:
    // 0x802397B0: jalr        $v0
    // 0x802397B4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802397B4: nop

    after_0:
    // 0x802397B8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802397BC: jr          $ra
    // 0x802397C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802397C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022F2C0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022F2C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022F2C4: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022F2C8: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022F2CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022F2D0: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022F2D4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022F2D8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022F2DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F2E0: beq         $v1, $v0, L_8022F34C
    if (ctx->r3 == ctx->r2) {
        // 0x8022F2E4: addiu       $s2, $s0, 0x4E0
        ctx->r18 = ADD32(ctx->r16, 0X4E0);
            goto L_8022F34C;
    }
    // 0x8022F2E4: addiu       $s2, $s0, 0x4E0
    ctx->r18 = ADD32(ctx->r16, 0X4E0);
    // 0x8022F2E8: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022F2EC: beql        $v0, $zero, L_8022F304
    if (ctx->r2 == 0) {
        // 0x8022F2F0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022F304;
    }
    goto skip_0;
    // 0x8022F2F0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022F2F4: beq         $v1, $zero, L_8022F31C
    if (ctx->r3 == 0) {
        // 0x8022F2F8: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8022F31C;
    }
    // 0x8022F2F8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F2FC: j           L_8022F490
    // 0x8022F300: nop

        goto L_8022F490;
    // 0x8022F300: nop

L_8022F304:
    // 0x8022F304: beq         $v1, $v0, L_8022F3A8
    if (ctx->r3 == ctx->r2) {
        // 0x8022F308: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022F3A8;
    }
    // 0x8022F308: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F30C: beq         $v1, $v0, L_8022F458
    if (ctx->r3 == ctx->r2) {
        // 0x8022F310: nop
    
            goto L_8022F458;
    }
    // 0x8022F310: nop

    // 0x8022F314: j           L_8022F490
    // 0x8022F318: nop

        goto L_8022F490;
    // 0x8022F318: nop

L_8022F31C:
    // 0x8022F31C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022F320: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022F324: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022F328: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F32C: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x8022F330: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x8022F334: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x8022F338: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022F33C: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
    // 0x8022F340: jal         0x8003EF5C
    // 0x8022F344: sh          $zero, 0x4E8($s0)
    MEM_H(0X4E8, ctx->r16) = 0;
    func_8003EF5C_1A35C(rdram, ctx);
        goto after_0;
    // 0x8022F344: sh          $zero, 0x4E8($s0)
    MEM_H(0X4E8, ctx->r16) = 0;
    after_0:
    // 0x8022F348: sh          $v0, 0x51E($s0)
    MEM_H(0X51E, ctx->r16) = ctx->r2;
L_8022F34C:
    // 0x8022F34C: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022F350: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F354: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022F358: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F35C: bgtz        $v0, L_8022F490
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022F360: addiu       $a0, $zero, 0xD1
        ctx->r4 = ADD32(0, 0XD1);
            goto L_8022F490;
    }
    // 0x8022F360: addiu       $a0, $zero, 0xD1
    ctx->r4 = ADD32(0, 0XD1);
    // 0x8022F364: lhu         $v0, 0x16($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X16);
    // 0x8022F368: lhu         $v1, 0x182($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X182);
    // 0x8022F36C: addiu       $v0, $v0, -0x15E
    ctx->r2 = ADD32(ctx->r2, -0X15E);
    // 0x8022F370: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x8022F374: lh          $a2, 0x16($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X16);
    // 0x8022F378: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022F37C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022F380: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022F384: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022F388: addiu       $v1, $v1, -0x15E
    ctx->r3 = ADD32(ctx->r3, -0X15E);
    // 0x8022F38C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F390: sh          $v1, 0x182($s0)
    MEM_H(0X182, ctx->r16) = ctx->r3;
    // 0x8022F394: sll         $a2, $a2, 16
    ctx->r6 = S32(ctx->r6 << 16);
    // 0x8022F398: jal         0x8002A33C
    // 0x8022F39C: sw          $a2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r6;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022F39C: sw          $a2, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r6;
    after_1:
    // 0x8022F3A0: j           L_8022F490
    // 0x8022F3A4: nop

        goto L_8022F490;
    // 0x8022F3A4: nop

L_8022F3A8:
    // 0x8022F3A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F3AC: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x8022F3B0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022F3B4: jal         0x8004DA90
    // 0x8022F3B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_2;
    // 0x8022F3B8: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_2:
    // 0x8022F3BC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022F3C0: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x8022F3C4: lh          $s1, 0x16($s0)
    ctx->r17 = MEM_H(ctx->r16, 0X16);
    // 0x8022F3C8: lhu         $v1, 0x182($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X182);
    // 0x8022F3CC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F3D0: sra         $v0, $v0, 20
    ctx->r2 = S32(SIGNED(ctx->r2) >> 20);
    // 0x8022F3D4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022F3D8: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022F3DC: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022F3E0: jal         0x80040F30
    // 0x8022F3E4: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_80040F30_1C330(rdram, ctx);
        goto after_3;
    // 0x8022F3E4: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_3:
    // 0x8022F3E8: lhu         $v1, 0x46($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X46);
    // 0x8022F3EC: lhu         $a0, 0x4E($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X4E);
    // 0x8022F3F0: andi        $v0, $v0, 0x2000
    ctx->r2 = ctx->r2 & 0X2000;
    // 0x8022F3F4: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8022F3F8: bne         $v0, $zero, L_8022F410
    if (ctx->r2 != 0) {
        // 0x8022F3FC: sh          $v1, 0x46($s0)
        MEM_H(0X46, ctx->r16) = ctx->r3;
            goto L_8022F410;
    }
    // 0x8022F3FC: sh          $v1, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r3;
    // 0x8022F400: lh          $v0, 0x51E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X51E);
    // 0x8022F404: slt         $v0, $v0, $s1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x8022F408: bne         $v0, $zero, L_8022F44C
    if (ctx->r2 != 0) {
        // 0x8022F40C: sll         $v0, $s1, 16
        ctx->r2 = S32(ctx->r17 << 16);
            goto L_8022F44C;
    }
    // 0x8022F40C: sll         $v0, $s1, 16
    ctx->r2 = S32(ctx->r17 << 16);
L_8022F410:
    // 0x8022F410: addiu       $a0, $zero, 0xD2
    ctx->r4 = ADD32(0, 0XD2);
    // 0x8022F414: lhu         $v1, 0x51E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X51E);
    // 0x8022F418: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x8022F41C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022F420: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022F424: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8022F428: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x8022F42C: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x8022F430: sh          $v0, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r2;
    // 0x8022F434: sh          $v1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r3;
    // 0x8022F438: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022F43C: jal         0x8002A33C
    // 0x8022F440: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x8022F440: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    after_4:
    // 0x8022F444: j           L_8022F458
    // 0x8022F448: nop

        goto L_8022F458;
    // 0x8022F448: nop

L_8022F44C:
    // 0x8022F44C: sh          $s1, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r17;
    // 0x8022F450: j           L_8022F490
    // 0x8022F454: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
        goto L_8022F490;
    // 0x8022F454: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
L_8022F458:
    // 0x8022F458: lb          $v0, 0xA6($s0)
    ctx->r2 = MEM_B(ctx->r16, 0XA6);
    // 0x8022F45C: beq         $v0, $zero, L_8022F46C
    if (ctx->r2 == 0) {
        // 0x8022F460: addiu       $a0, $zero, 0xD4
        ctx->r4 = ADD32(0, 0XD4);
            goto L_8022F46C;
    }
    // 0x8022F460: addiu       $a0, $zero, 0xD4
    ctx->r4 = ADD32(0, 0XD4);
    // 0x8022F464: jal         0x8002A33C
    // 0x8022F468: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022F468: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_5:
L_8022F46C:
    // 0x8022F46C: lhu         $v0, 0x4($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X4);
    // 0x8022F470: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022F474: sh          $v0, 0x4($s2)
    MEM_H(0X4, ctx->r18) = ctx->r2;
    // 0x8022F478: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022F47C: bgez        $v0, L_8022F490
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022F480: nop
    
            goto L_8022F490;
    }
    // 0x8022F480: nop

    // 0x8022F484: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022F488: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022F48C: sh          $v0, 0x0($s2)
    MEM_H(0X0, ctx->r18) = ctx->r2;
L_8022F490:
    // 0x8022F490: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022F494: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022F498: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022F49C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022F4A0: jr          $ra
    // 0x8022F4A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022F4A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80238D28_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238D28: addu        $a3, $a0, $zero
    ctx->r7 = ADD32(ctx->r4, 0);
    // 0x80238D2C: lbu         $a1, 0xB($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0XB);
    // 0x80238D30: lbu         $v0, 0xB($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0XB);
    // 0x80238D34: lui         $a0, 0x200
    ctx->r4 = S32(0X200 << 16);
    // 0x80238D38: addiu       $a1, $a1, -0x1
    ctx->r5 = ADD32(ctx->r5, -0X1);
    // 0x80238D3C: sll         $a2, $v0, 3
    ctx->r6 = S32(ctx->r2 << 3);
    // 0x80238D40: sll         $v1, $v0, 19
    ctx->r3 = S32(ctx->r2 << 19);
    // 0x80238D44: sll         $v0, $v0, 11
    ctx->r2 = S32(ctx->r2 << 11);
    // 0x80238D48: or          $v0, $v0, $a0
    ctx->r2 = ctx->r2 | ctx->r4;
    // 0x80238D4C: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x80238D50: or          $v1, $v1, $a2
    ctx->r3 = ctx->r3 | ctx->r6;
    // 0x80238D54: sb          $a1, 0xB($a3)
    MEM_B(0XB, ctx->r7) = ctx->r5;
    // 0x80238D58: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    // 0x80238D5C: bne         $a1, $zero, L_80238D6C
    if (ctx->r5 != 0) {
        // 0x80238D60: sw          $v1, 0x40($a3)
        MEM_W(0X40, ctx->r7) = ctx->r3;
            goto L_80238D6C;
    }
    // 0x80238D60: sw          $v1, 0x40($a3)
    MEM_W(0X40, ctx->r7) = ctx->r3;
    // 0x80238D64: addiu       $v0, $zero, 0x9
    ctx->r2 = ADD32(0, 0X9);
    // 0x80238D68: sb          $v0, 0x8($a3)
    MEM_B(0X8, ctx->r7) = ctx->r2;
L_80238D6C:
    // 0x80238D6C: jr          $ra
    // 0x80238D70: nop

    TRACE_RETURN()
    return;
    // 0x80238D70: nop

;}
RECOMP_FUNC void func_80236C20_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236C20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236C24: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236C28: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80236C2C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236C30: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236C34: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236C38: lw          $v0, -0xA90($at)
    ctx->r2 = MEM_W(ctx->r1, -0XA90);
    // 0x80236C3C: jalr        $v0
    // 0x80236C40: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236C40: nop

    after_0:
    // 0x80236C44: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236C48: jr          $ra
    // 0x80236C4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236C4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022C87C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022C87C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022C880: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022C884: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022C888: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022C88C: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x8022C890: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8022C894: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8022C898: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8022C89C: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022C8A0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022C8A4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022C8A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022C8AC: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022C8B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C8B4: beq         $v1, $v0, L_8022C938
    if (ctx->r3 == ctx->r2) {
        // 0x8022C8B8: addiu       $s5, $s1, 0x4E0
        ctx->r21 = ADD32(ctx->r17, 0X4E0);
            goto L_8022C938;
    }
    // 0x8022C8B8: addiu       $s5, $s1, 0x4E0
    ctx->r21 = ADD32(ctx->r17, 0X4E0);
    // 0x8022C8BC: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022C8C0: beql        $v0, $zero, L_8022C8D8
    if (ctx->r2 == 0) {
        // 0x8022C8C4: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022C8D8;
    }
    goto skip_0;
    // 0x8022C8C4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8022C8C8: beq         $v1, $zero, L_8022C8E8
    if (ctx->r3 == 0) {
        // 0x8022C8CC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8022C8E8;
    }
    // 0x8022C8CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022C8D0: j           L_8022CC30
    // 0x8022C8D4: nop

        goto L_8022CC30;
    // 0x8022C8D4: nop

L_8022C8D8:
    // 0x8022C8D8: beq         $v1, $v0, L_8022CB1C
    if (ctx->r3 == ctx->r2) {
        // 0x8022C8DC: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022CB1C;
    }
    // 0x8022C8DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022C8E0: j           L_8022CC30
    // 0x8022C8E4: nop

        goto L_8022CC30;
    // 0x8022C8E4: nop

L_8022C8E8:
    // 0x8022C8E8: lhu         $v1, 0x4E0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X4E0);
    // 0x8022C8EC: lh          $a0, 0x56($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X56);
    // 0x8022C8F0: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022C8F4: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C8F8: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022C8FC: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8022C900: sh          $v0, 0x4E4($s1)
    MEM_H(0X4E4, ctx->r17) = ctx->r2;
    // 0x8022C904: sh          $zero, 0x4E8($s1)
    MEM_H(0X4E8, ctx->r17) = 0;
    // 0x8022C908: sh          $zero, 0x51E($s1)
    MEM_H(0X51E, ctx->r17) = 0;
    // 0x8022C90C: andi        $v1, $v1, 0xFFFB
    ctx->r3 = ctx->r3 & 0XFFFB;
    // 0x8022C910: slti        $a0, $a0, 0x801
    ctx->r4 = SIGNED(ctx->r4) < 0X801 ? 1 : 0;
    // 0x8022C914: bne         $a0, $zero, L_8022C92C
    if (ctx->r4 != 0) {
        // 0x8022C918: sh          $v1, 0x4E0($s1)
        MEM_H(0X4E0, ctx->r17) = ctx->r3;
            goto L_8022C92C;
    }
    // 0x8022C918: sh          $v1, 0x4E0($s1)
    MEM_H(0X4E0, ctx->r17) = ctx->r3;
    // 0x8022C91C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C920: addiu       $v0, $v0, -0x154C
    ctx->r2 = ADD32(ctx->r2, -0X154C);
    // 0x8022C924: j           L_8022C938
    // 0x8022C928: sw          $v0, 0x520($s1)
    MEM_W(0X520, ctx->r17) = ctx->r2;
        goto L_8022C938;
    // 0x8022C928: sw          $v0, 0x520($s1)
    MEM_W(0X520, ctx->r17) = ctx->r2;
L_8022C92C:
    // 0x8022C92C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022C930: addiu       $v0, $v0, -0x151C
    ctx->r2 = ADD32(ctx->r2, -0X151C);
    // 0x8022C934: sw          $v0, 0x520($s1)
    MEM_W(0X520, ctx->r17) = ctx->r2;
L_8022C938:
    // 0x8022C938: lh          $a0, 0x3E($s5)
    ctx->r4 = MEM_H(ctx->r21, 0X3E);
    // 0x8022C93C: lh          $v1, 0x14($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X14);
    // 0x8022C940: lw          $a1, 0x40($s5)
    ctx->r5 = MEM_W(ctx->r21, 0X40);
    // 0x8022C944: lh          $a2, 0x18($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X18);
    // 0x8022C948: sll         $v0, $a0, 1
    ctx->r2 = S32(ctx->r4 << 1);
    // 0x8022C94C: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022C950: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C954: addu        $a3, $v0, $a1
    ctx->r7 = ADD32(ctx->r2, ctx->r5);
    // 0x8022C958: lh          $a1, 0x4($a3)
    ctx->r5 = MEM_H(ctx->r7, 0X4);
    // 0x8022C95C: lh          $v0, 0x6($a3)
    ctx->r2 = MEM_H(ctx->r7, 0X6);
    // 0x8022C960: lh          $a0, 0x8($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X8);
    // 0x8022C964: subu        $v1, $v1, $a1
    ctx->r3 = SUB32(ctx->r3, ctx->r5);
    // 0x8022C968: sltu        $v1, $v1, $a0
    ctx->r3 = ctx->r3 < ctx->r4 ? 1 : 0;
    // 0x8022C96C: beq         $v1, $zero, L_8022CA08
    if (ctx->r3 == 0) {
        // 0x8022C970: subu        $a2, $a2, $v0
        ctx->r6 = SUB32(ctx->r6, ctx->r2);
            goto L_8022CA08;
    }
    // 0x8022C970: subu        $a2, $a2, $v0
    ctx->r6 = SUB32(ctx->r6, ctx->r2);
    // 0x8022C974: lh          $v0, 0xA($a3)
    ctx->r2 = MEM_H(ctx->r7, 0XA);
    // 0x8022C978: sltu        $v0, $a2, $v0
    ctx->r2 = ctx->r6 < ctx->r2 ? 1 : 0;
    // 0x8022C97C: beql        $v0, $zero, L_8022CA0C
    if (ctx->r2 == 0) {
        // 0x8022C980: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022CA0C;
    }
    goto skip_1;
    // 0x8022C980: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    skip_1:
    // 0x8022C984: lhu         $v0, 0x4($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X4);
    // 0x8022C988: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022C98C: sh          $v0, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r2;
    // 0x8022C990: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C994: bgez        $v0, L_8022C9D4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022C998: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022C9D4;
    }
    // 0x8022C998: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022C99C: lhu         $v0, 0x3E($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X3E);
    // 0x8022C9A0: addiu       $v1, $zero, 0x20
    ctx->r3 = ADD32(0, 0X20);
    // 0x8022C9A4: sh          $v1, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r3;
    // 0x8022C9A8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022C9AC: sh          $v0, 0x3E($s5)
    MEM_H(0X3E, ctx->r21) = ctx->r2;
    // 0x8022C9B0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022C9B4: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022C9B8: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8022C9BC: bne         $v0, $zero, L_8022CA40
    if (ctx->r2 != 0) {
        // 0x8022C9C0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022CA40;
    }
    // 0x8022C9C0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022C9C4: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022C9C8: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022C9CC: j           L_8022CB18
    // 0x8022C9D0: sh          $v1, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r3;
        goto L_8022CB18;
    // 0x8022C9D0: sh          $v1, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r3;
L_8022C9D4:
    // 0x8022C9D4: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022C9D8: lh          $v1, 0x3E($s5)
    ctx->r3 = MEM_H(ctx->r21, 0X3E);
    // 0x8022C9DC: lw          $a0, 0x40($s5)
    ctx->r4 = MEM_W(ctx->r21, 0X40);
    // 0x8022C9E0: sll         $v0, $v1, 1
    ctx->r2 = S32(ctx->r3 << 1);
    // 0x8022C9E4: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022C9E8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8022C9EC: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8022C9F0: lhu         $v1, 0x56($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X56);
    // 0x8022C9F4: lhu         $v0, 0x0($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X0);
    // 0x8022C9F8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022C9FC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022CA00: j           L_8022CC30
    // 0x8022CA04: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
        goto L_8022CC30;
    // 0x8022CA04: sh          $v1, 0x56($s1)
    MEM_H(0X56, ctx->r17) = ctx->r3;
L_8022CA08:
    // 0x8022CA08: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8022CA0C:
    // 0x8022CA0C: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x8022CA10: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CA14: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    // 0x8022CA18: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022CA1C: jal         0x8004DA90
    // 0x8022CA20: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    func_8004DA90_28E90(rdram, ctx);
        goto after_0;
    // 0x8022CA20: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022CA24: jal         0x80040F30
    // 0x8022CA28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_1;
    // 0x8022CA28: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_1:
    // 0x8022CA2C: jal         0x8003E934
    // 0x8022CA30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x8022CA30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_2:
    // 0x8022CA34: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022CA38: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CA3C: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
L_8022CA40:
    // 0x8022CA40: lbu         $v0, 0xA6($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA6);
    // 0x8022CA44: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022CA48: beq         $v0, $zero, L_8022CC30
    if (ctx->r2 == 0) {
        // 0x8022CA4C: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8022CC30;
    }
    // 0x8022CA4C: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022CA50: addiu       $fp, $zero, 0x5
    ctx->r30 = ADD32(0, 0X5);
    // 0x8022CA54: addiu       $s7, $zero, 0x80
    ctx->r23 = ADD32(0, 0X80);
    // 0x8022CA58: addiu       $s6, $zero, 0x42
    ctx->r22 = ADD32(0, 0X42);
    // 0x8022CA5C: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x8022CA60: addiu       $s4, $s1, 0x14
    ctx->r20 = ADD32(ctx->r17, 0X14);
    // 0x8022CA64: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x8022CA68: addiu       $s3, $s3, -0x14C0
    ctx->r19 = ADD32(ctx->r19, -0X14C0);
L_8022CA6C:
    // 0x8022CA6C: jal         0x8004F144
    // 0x8022CA70: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x8022CA70: nop

    after_3:
    // 0x8022CA74: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022CA78: beq         $s0, $zero, L_8022CADC
    if (ctx->r16 == 0) {
        // 0x8022CA7C: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022CADC;
    }
    // 0x8022CA7C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022CA80: sb          $fp, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r30;
    // 0x8022CA84: sb          $s7, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r23;
    // 0x8022CA88: sb          $s6, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r22;
    // 0x8022CA8C: sb          $s5, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r21;
    // 0x8022CA90: lh          $a1, 0x0($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X0);
    // 0x8022CA94: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CA98: jal         0x8004DA90
    // 0x8022CA9C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_4;
    // 0x8022CA9C: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_4:
    // 0x8022CAA0: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8022CAA4: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022CAA8: jal         0x8009A3B4
    // 0x8022CAAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022CAAC: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022CAB0: jal         0x8003E934
    // 0x8022CAB4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x8022CAB4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x8022CAB8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022CABC: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8022CAC0: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022CAC4: jal         0x8009A3B4
    // 0x8022CAC8: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_7;
    // 0x8022CAC8: sh          $v0, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r2;
    after_7:
    // 0x8022CACC: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022CAD0: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8022CAD4: jal         0x8009A3B4
    // 0x8022CAD8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x8022CAD8: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_8:
L_8022CADC:
    // 0x8022CADC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8022CAE0: slti        $v0, $s2, 0x3
    ctx->r2 = SIGNED(ctx->r18) < 0X3 ? 1 : 0;
    // 0x8022CAE4: bne         $v0, $zero, L_8022CA6C
    if (ctx->r2 != 0) {
        // 0x8022CAE8: addiu       $s3, $s3, 0x2
        ctx->r19 = ADD32(ctx->r19, 0X2);
            goto L_8022CA6C;
    }
    // 0x8022CAE8: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
    // 0x8022CAEC: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x8022CAF0: addiu       $a1, $zero, 0x7D0
    ctx->r5 = ADD32(0, 0X7D0);
    // 0x8022CAF4: addiu       $a2, $zero, 0x1388
    ctx->r6 = ADD32(0, 0X1388);
    // 0x8022CAF8: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8022CAFC: jal         0x8003491C
    // 0x8022CB00: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003491C_FD1C(rdram, ctx);
        goto after_9;
    // 0x8022CB00: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_9:
    // 0x8022CB04: addiu       $a0, $zero, 0xC2
    ctx->r4 = ADD32(0, 0XC2);
    // 0x8022CB08: jal         0x8002A33C
    // 0x8022CB0C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_10;
    // 0x8022CB0C: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_10:
    // 0x8022CB10: j           L_8022CC30
    // 0x8022CB14: nop

        goto L_8022CC30;
    // 0x8022CB14: nop

L_8022CB18:
    // 0x8022CB18: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
L_8022CB1C:
    // 0x8022CB1C: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    // 0x8022CB20: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CB24: jal         0x8004DA90
    // 0x8022CB28: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_11;
    // 0x8022CB28: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_11:
    // 0x8022CB2C: jal         0x80040F30
    // 0x8022CB30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_12;
    // 0x8022CB30: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_12:
    // 0x8022CB34: jal         0x8003E934
    // 0x8022CB38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_13;
    // 0x8022CB38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_13:
    // 0x8022CB3C: lbu         $v1, 0xA6($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA6);
    // 0x8022CB40: sh          $v0, 0x16($s1)
    MEM_H(0X16, ctx->r17) = ctx->r2;
    // 0x8022CB44: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CB48: andi        $v1, $v1, 0x1
    ctx->r3 = ctx->r3 & 0X1;
    // 0x8022CB4C: beq         $v1, $zero, L_8022CC0C
    if (ctx->r3 == 0) {
        // 0x8022CB50: sw          $v0, 0x20($s1)
        MEM_W(0X20, ctx->r17) = ctx->r2;
            goto L_8022CC0C;
    }
    // 0x8022CB50: sw          $v0, 0x20($s1)
    MEM_W(0X20, ctx->r17) = ctx->r2;
    // 0x8022CB54: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
    // 0x8022CB58: addiu       $fp, $zero, 0x80
    ctx->r30 = ADD32(0, 0X80);
    // 0x8022CB5C: addiu       $s7, $zero, 0x42
    ctx->r23 = ADD32(0, 0X42);
    // 0x8022CB60: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x8022CB64: addiu       $s4, $s1, 0x14
    ctx->r20 = ADD32(ctx->r17, 0X14);
    // 0x8022CB68: lui         $s3, 0x8024
    ctx->r19 = S32(0X8024 << 16);
    // 0x8022CB6C: addiu       $s3, $s3, -0x14C0
    ctx->r19 = ADD32(ctx->r19, -0X14C0);
L_8022CB70:
    // 0x8022CB70: jal         0x8004F144
    // 0x8022CB74: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_14;
    // 0x8022CB74: nop

    after_14:
    // 0x8022CB78: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022CB7C: beq         $s0, $zero, L_8022CBD8
    if (ctx->r16 == 0) {
        // 0x8022CB80: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022CBD8;
    }
    // 0x8022CB80: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022CB84: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x8022CB88: sb          $t0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r8;
    // 0x8022CB8C: sb          $fp, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r30;
    // 0x8022CB90: sb          $s7, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r23;
    // 0x8022CB94: sb          $s6, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r22;
    // 0x8022CB98: lh          $a1, 0x0($s3)
    ctx->r5 = MEM_H(ctx->r19, 0X0);
    // 0x8022CB9C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022CBA0: jal         0x8004DA90
    // 0x8022CBA4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_15;
    // 0x8022CBA4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_15:
    // 0x8022CBA8: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8022CBAC: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022CBB0: jal         0x8009A3B4
    // 0x8022CBB4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_16;
    // 0x8022CBB4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_16:
    // 0x8022CBB8: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022CBBC: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8022CBC0: jal         0x8009A3B4
    // 0x8022CBC4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_17;
    // 0x8022CBC4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_17:
    // 0x8022CBC8: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022CBCC: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8022CBD0: jal         0x8009A3B4
    // 0x8022CBD4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_18;
    // 0x8022CBD4: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_18:
L_8022CBD8:
    // 0x8022CBD8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x8022CBDC: slti        $v0, $s2, 0x3
    ctx->r2 = SIGNED(ctx->r18) < 0X3 ? 1 : 0;
    // 0x8022CBE0: bne         $v0, $zero, L_8022CB70
    if (ctx->r2 != 0) {
        // 0x8022CBE4: addiu       $s3, $s3, 0x2
        ctx->r19 = ADD32(ctx->r19, 0X2);
            goto L_8022CB70;
    }
    // 0x8022CBE4: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
    // 0x8022CBE8: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x8022CBEC: addiu       $a1, $zero, 0x7D0
    ctx->r5 = ADD32(0, 0X7D0);
    // 0x8022CBF0: addiu       $a2, $zero, 0x1388
    ctx->r6 = ADD32(0, 0X1388);
    // 0x8022CBF4: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8022CBF8: jal         0x8003491C
    // 0x8022CBFC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003491C_FD1C(rdram, ctx);
        goto after_19;
    // 0x8022CBFC: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_19:
    // 0x8022CC00: addiu       $a0, $zero, 0xC2
    ctx->r4 = ADD32(0, 0XC2);
    // 0x8022CC04: jal         0x8002A33C
    // 0x8022CC08: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_20;
    // 0x8022CC08: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_20:
L_8022CC0C:
    // 0x8022CC0C: lhu         $v0, 0x4($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X4);
    // 0x8022CC10: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CC14: sh          $v0, 0x4($s5)
    MEM_H(0X4, ctx->r21) = ctx->r2;
    // 0x8022CC18: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CC1C: bgez        $v0, L_8022CC30
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022CC20: nop
    
            goto L_8022CC30;
    }
    // 0x8022CC20: nop

    // 0x8022CC24: lhu         $v0, 0x0($s5)
    ctx->r2 = MEM_HU(ctx->r21, 0X0);
    // 0x8022CC28: ori         $v0, $v0, 0x5
    ctx->r2 = ctx->r2 | 0X5;
    // 0x8022CC2C: sh          $v0, 0x0($s5)
    MEM_H(0X0, ctx->r21) = ctx->r2;
L_8022CC30:
    // 0x8022CC30: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022CC34: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x8022CC38: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8022CC3C: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8022CC40: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8022CC44: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022CC48: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CC4C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022CC50: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CC54: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CC58: jr          $ra
    // 0x8022CC5C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022CC5C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80227920_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80227920: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80227924: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80227928: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022792C: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80227930: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80227934: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80227938: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8022793C: beq         $v0, $zero, L_80227B54
    if (ctx->r2 == 0) {
        // 0x80227940: addiu       $s1, $s0, 0x328
        ctx->r17 = ADD32(ctx->r16, 0X328);
            goto L_80227B54;
    }
    // 0x80227940: addiu       $s1, $s0, 0x328
    ctx->r17 = ADD32(ctx->r16, 0X328);
    // 0x80227944: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x80227948: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022794C: addu        $at, $at, $v0
    gpr jr_addend_80227954 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80227950: lw          $v0, -0x250($at)
    ctx->r2 = ADD32(ctx->r1, -0X250);
    // 0x80227954: jr          $v0
    // 0x80227958: nop

    switch (jr_addend_80227954 >> 2) {
        case 0: goto L_8022795C; break;
        case 1: goto L_80227984; break;
        case 2: goto L_80227A08; break;
        case 3: goto L_80227A48; break;
        case 4: goto L_80227A84; break;
        default: switch_error(__func__, 0x80227954, 0x8023FDB0);
    }
    // 0x80227958: nop

L_8022795C:
    // 0x8022795C: addiu       $a0, $zero, 0xB1
    ctx->r4 = ADD32(0, 0XB1);
    // 0x80227960: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    // 0x80227964: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80227968: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022796C: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80227970: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80227974: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x80227978: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022797C: jal         0x8002A33C
    // 0x80227980: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80227980: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    after_0:
L_80227984:
    // 0x80227984: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80227988: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022798C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80227990: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227994: bgez        $v0, L_802279C0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227998: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802279C0;
    }
    // 0x80227998: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022799C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x802279A0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x802279A4: lh          $v0, 0x6($s1)
    ctx->r2 = MEM_H(ctx->r17, 0X6);
    // 0x802279A8: beq         $v0, $zero, L_802279B8
    if (ctx->r2 == 0) {
        // 0x802279AC: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_802279B8;
    }
    // 0x802279AC: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x802279B0: j           L_80227A08
    // 0x802279B4: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
        goto L_80227A08;
    // 0x802279B4: sh          $zero, 0x4($s1)
    MEM_H(0X4, ctx->r17) = 0;
L_802279B8:
    // 0x802279B8: j           L_80227A08
    // 0x802279BC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80227A08;
    // 0x802279BC: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_802279C0:
    // 0x802279C0: addiu       $a1, $zero, -0x70
    ctx->r5 = ADD32(0, -0X70);
L_802279C4:
    // 0x802279C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802279C8: jal         0x8004DA90
    // 0x802279CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x802279CC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x802279D0: jal         0x80040F30
    // 0x802279D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x802279D4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802279D8: jal         0x8003E934
    // 0x802279DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_3;
    // 0x802279DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_3:
    // 0x802279E0: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802279E4: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x802279E8: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x802279EC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802279F0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802279F4: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x802279F8: bgez        $v0, L_80227B18
    if (SIGNED(ctx->r2) >= 0) {
        // 0x802279FC: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80227B18;
    }
    // 0x802279FC: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80227A00: j           L_80227B2C
    // 0x80227A04: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
        goto L_80227B2C;
    // 0x80227A04: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
L_80227A08:
    // 0x80227A08: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80227A0C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227A10: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80227A14: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227A18: bgtz        $v0, L_80227B54
    if (SIGNED(ctx->r2) > 0) {
        // 0x80227A1C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227B54;
    }
    // 0x80227A1C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227A20: lbu         $v0, 0xAC($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XAC);
    // 0x80227A24: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80227A28: sb          $v1, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r3;
    // 0x80227A2C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80227A30: sb          $v0, 0xAC($a0)
    MEM_B(0XAC, ctx->r4) = ctx->r2;
    // 0x80227A34: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x80227A38: jal         0x80228850
    // 0x80227A3C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    func_80228850_ovl2(rdram, ctx);
        goto after_4;
    // 0x80227A3C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    after_4:
    // 0x80227A40: j           L_80227B54
    // 0x80227A44: nop

        goto L_80227B54;
    // 0x80227A44: nop

L_80227A48:
    // 0x80227A48: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80227A4C: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    // 0x80227A50: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x80227A54: bgez        $v0, L_80227A70
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227A58: sh          $a1, 0x4($s1)
        MEM_H(0X4, ctx->r17) = ctx->r5;
            goto L_80227A70;
    }
    // 0x80227A58: sh          $a1, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r5;
    // 0x80227A5C: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80227A60: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80227A64: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80227A68: j           L_80227A84
    // 0x80227A6C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80227A84;
    // 0x80227A6C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80227A70:
    // 0x80227A70: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227A74: negu        $a1, $a1
    ctx->r5 = SUB32(0, ctx->r5);
    // 0x80227A78: sll         $a1, $a1, 21
    ctx->r5 = S32(ctx->r5 << 21);
    // 0x80227A7C: j           L_802279C4
    // 0x80227A80: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
        goto L_802279C4;
    // 0x80227A80: sra         $a1, $a1, 16
    ctx->r5 = S32(SIGNED(ctx->r5) >> 16);
L_80227A84:
    // 0x80227A84: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80227A88: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80227A8C: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80227A90: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227A94: bgez        $v0, L_80227AD8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80227A98: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80227AD8;
    }
    // 0x80227A98: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80227A9C: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80227AA0: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80227AA4: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80227AA8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80227AAC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80227AB0: lh          $v1, 0x6($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X6);
    // 0x80227AB4: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80227AB8: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80227ABC: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80227AC0: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80227AC4: lbu         $v1, 0xC($v1)
    ctx->r3 = MEM_BU(ctx->r3, 0XC);
    // 0x80227AC8: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80227ACC: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
    // 0x80227AD0: j           L_80227B54
    // 0x80227AD4: sh          $v1, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r3;
        goto L_80227B54;
    // 0x80227AD4: sh          $v1, 0x34($s1)
    MEM_H(0X34, ctx->r17) = ctx->r3;
L_80227AD8:
    // 0x80227AD8: addiu       $a1, $zero, 0xE0
    ctx->r5 = ADD32(0, 0XE0);
    // 0x80227ADC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80227AE0: jal         0x8004DA90
    // 0x80227AE4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_5;
    // 0x80227AE4: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_5:
    // 0x80227AE8: jal         0x80040F30
    // 0x80227AEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_80040F30_1C330(rdram, ctx);
        goto after_6;
    // 0x80227AEC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x80227AF0: jal         0x8003E934
    // 0x80227AF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_7;
    // 0x80227AF4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_7:
    // 0x80227AF8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80227AFC: lh          $a0, 0x16($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X16);
    // 0x80227B00: lh          $v1, 0x2E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X2E);
    // 0x80227B04: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80227B08: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x80227B0C: subu        $v0, $a0, $v1
    ctx->r2 = SUB32(ctx->r4, ctx->r3);
    // 0x80227B10: bltz        $v0, L_80227B28
    if (SIGNED(ctx->r2) < 0) {
        // 0x80227B14: slti        $v0, $v0, 0x21
        ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
            goto L_80227B28;
    }
    // 0x80227B14: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
L_80227B18:
    // 0x80227B18: beq         $v0, $zero, L_80227B38
    if (ctx->r2 == 0) {
        // 0x80227B1C: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80227B38;
    }
    // 0x80227B1C: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x80227B20: j           L_80227B54
    // 0x80227B24: nop

        goto L_80227B54;
    // 0x80227B24: nop

L_80227B28:
    // 0x80227B28: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
L_80227B2C:
    // 0x80227B2C: slti        $v0, $v0, 0x21
    ctx->r2 = SIGNED(ctx->r2) < 0X21 ? 1 : 0;
    // 0x80227B30: bne         $v0, $zero, L_80227B54
    if (ctx->r2 != 0) {
        // 0x80227B34: addiu       $a0, $s0, 0x14
        ctx->r4 = ADD32(ctx->r16, 0X14);
            goto L_80227B54;
    }
    // 0x80227B34: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
L_80227B38:
    // 0x80227B38: addiu       $a1, $s0, 0x2C
    ctx->r5 = ADD32(ctx->r16, 0X2C);
    // 0x80227B3C: jal         0x8009A3B4
    // 0x80227B40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x80227B40: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x80227B44: addiu       $a0, $s0, 0x1C
    ctx->r4 = ADD32(ctx->r16, 0X1C);
    // 0x80227B48: addiu       $a1, $s0, 0x34
    ctx->r5 = ADD32(ctx->r16, 0X34);
    // 0x80227B4C: jal         0x8009A3B4
    // 0x80227B50: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x80227B50: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_9:
L_80227B54:
    // 0x80227B54: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80227B58: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80227B5C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80227B60: jr          $ra
    // 0x80227B64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80227B64: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023A5F0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A5F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023A5F4: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x8023A5F8: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8023A5FC: beq         $v0, $zero, L_8023A688
    if (ctx->r2 == 0) {
        // 0x8023A600: nop
    
            goto L_8023A688;
    }
    // 0x8023A600: nop

    // 0x8023A604: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023A608: bne         $v0, $zero, L_8023A628
    if (ctx->r2 != 0) {
        // 0x8023A60C: nop
    
            goto L_8023A628;
    }
    // 0x8023A60C: nop

    // 0x8023A610: lbu         $v1, 0x8($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X8);
    // 0x8023A614: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8023A618: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023A61C: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023A620: sb          $v0, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r2;
    // 0x8023A624: sb          $v1, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r3;
L_8023A628:
    // 0x8023A628: lbu         $v0, 0xF($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XF);
    // 0x8023A62C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023A630: sb          $v0, 0xF($a0)
    MEM_B(0XF, ctx->r4) = ctx->r2;
    // 0x8023A634: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023A638: sra         $v1, $v0, 24
    ctx->r3 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8023A63C: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023A640: bne         $v1, $v0, L_8023A658
    if (ctx->r3 != ctx->r2) {
        // 0x8023A644: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8023A658;
    }
    // 0x8023A644: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023A648: jal         0x8004F5C4
    // 0x8023A64C: nop

    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_0;
    // 0x8023A64C: nop

    after_0:
    // 0x8023A650: j           L_8023A688
    // 0x8023A654: nop

        goto L_8023A688;
    // 0x8023A654: nop

L_8023A658:
    // 0x8023A658: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023A65C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023A660: lw          $v1, -0x750($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X750);
    // 0x8023A664: lhu         $v0, 0x24($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X24);
    // 0x8023A668: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x8023A66C: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
    // 0x8023A670: andi        $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 & 0XFFFF;
    // 0x8023A674: sltiu       $v0, $v0, 0x121
    ctx->r2 = ctx->r2 < 0X121 ? 1 : 0;
    // 0x8023A678: bne         $v0, $zero, L_8023A688
    if (ctx->r2 != 0) {
        // 0x8023A67C: sw          $v1, 0x18($a0)
        MEM_W(0X18, ctx->r4) = ctx->r3;
            goto L_8023A688;
    }
    // 0x8023A67C: sw          $v1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r3;
    // 0x8023A680: addiu       $v0, $zero, 0x120
    ctx->r2 = ADD32(0, 0X120);
    // 0x8023A684: sh          $v0, 0x24($a0)
    MEM_H(0X24, ctx->r4) = ctx->r2;
L_8023A688:
    // 0x8023A688: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023A68C: jr          $ra
    // 0x8023A690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023A690: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8023A694: nop

    // 0x8023A698: nop

    // 0x8023A69C: nop

;}
RECOMP_FUNC void func_80236440_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236440: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236444: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236448: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8023644C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236450: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236454: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236458: lw          $v0, -0xB34($at)
    ctx->r2 = MEM_W(ctx->r1, -0XB34);
    // 0x8023645C: jalr        $v0
    // 0x80236460: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236460: nop

    after_0:
    // 0x80236464: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236468: jr          $ra
    // 0x8023646C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023646C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80233898_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80233898: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8023389C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802338A0: jal         0x8004F4F8
    // 0x802338A4: nop

    func_8004F4F8_2A8F8(rdram, ctx);
        goto after_0;
    // 0x802338A4: nop

    after_0:
    // 0x802338A8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802338AC: jr          $ra
    // 0x802338B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802338B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80236340_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236340: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236344: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236348: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x8023634C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236350: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236354: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236358: lw          $v0, -0xB50($at)
    ctx->r2 = MEM_W(ctx->r1, -0XB50);
    // 0x8023635C: jalr        $v0
    // 0x80236360: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236360: nop

    after_0:
    // 0x80236364: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236368: jr          $ra
    // 0x8023636C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023636C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226BB0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226BB0: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80226BB4: bne         $v0, $zero, L_80226BCC
    if (ctx->r2 != 0) {
        // 0x80226BB8: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80226BCC;
    }
    // 0x80226BB8: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226BBC: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80226BC0: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80226BC4: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80226BC8: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80226BCC:
    // 0x80226BCC: jr          $ra
    // 0x80226BD0: nop

    TRACE_RETURN()
    return;
    // 0x80226BD0: nop

;}
RECOMP_FUNC void func_8022D5A8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022D5A8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022D5AC: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022D5B0: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022D5B4: sw          $ra, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r31;
    // 0x8022D5B8: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x8022D5BC: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x8022D5C0: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x8022D5C4: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x8022D5C8: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x8022D5CC: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022D5D0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022D5D4: lbu         $v1, 0xA($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0XA);
    // 0x8022D5D8: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022D5DC: beq         $v0, $zero, L_8022D7E8
    if (ctx->r2 == 0) {
        // 0x8022D5E0: addiu       $s0, $s1, 0x4E0
        ctx->r16 = ADD32(ctx->r17, 0X4E0);
            goto L_8022D7E8;
    }
    // 0x8022D5E0: addiu       $s0, $s1, 0x4E0
    ctx->r16 = ADD32(ctx->r17, 0X4E0);
    // 0x8022D5E4: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022D5E8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022D5EC: addu        $at, $at, $v0
    gpr jr_addend_8022D5F4 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022D5F0: lw          $v0, -0x180($at)
    ctx->r2 = ADD32(ctx->r1, -0X180);
    // 0x8022D5F4: jr          $v0
    // 0x8022D5F8: nop

    switch (jr_addend_8022D5F4 >> 2) {
        case 0: goto L_8022D5FC; break;
        case 1: goto L_8022D624; break;
        case 2: goto L_8022D66C; break;
        case 3: goto L_8022D6A8; break;
        case 4: goto L_8022D794; break;
        case 5: goto L_8022D7C4; break;
        default: switch_error(__func__, 0x8022D5F4, 0x8023FE80);
    }
    // 0x8022D5F8: nop

L_8022D5FC:
    // 0x8022D5FC: addiu       $a0, $zero, 0xBF
    ctx->r4 = ADD32(0, 0XBF);
    // 0x8022D600: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022D604: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022D608: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022D60C: addiu       $v0, $zero, 0xB
    ctx->r2 = ADD32(0, 0XB);
    // 0x8022D610: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022D614: addiu       $v0, $zero, 0xD
    ctx->r2 = ADD32(0, 0XD);
    // 0x8022D618: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022D61C: jal         0x8002A33C
    // 0x8022D620: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x8022D620: sh          $zero, 0x8($s0)
    MEM_H(0X8, ctx->r16) = 0;
    after_0:
L_8022D624:
    // 0x8022D624: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022D628: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D62C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022D630: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D634: bgez        $v0, L_8022D7E8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D638: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022D7E8;
    }
    // 0x8022D638: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8022D63C: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022D640: lw          $a0, 0x34($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X34);
    // 0x8022D644: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022D648: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022D64C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022D650: sb          $v1, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r3;
    // 0x8022D654: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x8022D658: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x8022D65C: lw          $v0, 0x34($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X34);
    // 0x8022D660: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
    // 0x8022D664: lw          $v0, 0x38($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X38);
    // 0x8022D668: sh          $zero, 0xA($v0)
    MEM_H(0XA, ctx->r2) = 0;
L_8022D66C:
    // 0x8022D66C: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022D670: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D674: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022D678: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D67C: bgez        $v0, L_8022D7E8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D680: addiu       $a0, $zero, 0xC0
        ctx->r4 = ADD32(0, 0XC0);
            goto L_8022D7E8;
    }
    // 0x8022D680: addiu       $a0, $zero, 0xC0
    ctx->r4 = ADD32(0, 0XC0);
    // 0x8022D684: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022D688: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022D68C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x8022D690: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x8022D694: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D698: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022D69C: addiu       $v0, $zero, 0x14
    ctx->r2 = ADD32(0, 0X14);
    // 0x8022D6A0: jal         0x8002A33C
    // 0x8022D6A4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    func_8002A33C_573C(rdram, ctx);
        goto after_1;
    // 0x8022D6A4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    after_1:
L_8022D6A8:
    // 0x8022D6A8: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022D6AC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D6B0: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022D6B4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D6B8: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022D6BC: bgez        $v1, L_8022D6D8
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8022D6C0: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022D6D8;
    }
    // 0x8022D6C0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022D6C4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8022D6C8: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x8022D6CC: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x8022D6D0: j           L_8022D794
    // 0x8022D6D4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
        goto L_8022D794;
    // 0x8022D6D4: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8022D6D8:
    // 0x8022D6D8: bne         $v1, $v0, L_8022D7E8
    if (ctx->r3 != ctx->r2) {
        // 0x8022D6DC: addu        $s3, $zero, $zero
        ctx->r19 = ADD32(0, 0);
            goto L_8022D7E8;
    }
    // 0x8022D6DC: addu        $s3, $zero, $zero
    ctx->r19 = ADD32(0, 0);
    // 0x8022D6E0: addiu       $s7, $zero, 0x5
    ctx->r23 = ADD32(0, 0X5);
    // 0x8022D6E4: addiu       $s6, $zero, 0x80
    ctx->r22 = ADD32(0, 0X80);
    // 0x8022D6E8: addiu       $s5, $zero, 0x42
    ctx->r21 = ADD32(0, 0X42);
    // 0x8022D6EC: addiu       $s4, $s1, 0x14
    ctx->r20 = ADD32(ctx->r17, 0X14);
    // 0x8022D6F0: lui         $s2, 0x8024
    ctx->r18 = S32(0X8024 << 16);
    // 0x8022D6F4: addiu       $s2, $s2, -0x14AC
    ctx->r18 = ADD32(ctx->r18, -0X14AC);
L_8022D6F8:
    // 0x8022D6F8: jal         0x8004F144
    // 0x8022D6FC: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_2;
    // 0x8022D6FC: nop

    after_2:
    // 0x8022D700: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8022D704: beq         $s0, $zero, L_8022D758
    if (ctx->r16 == 0) {
        // 0x8022D708: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022D758;
    }
    // 0x8022D708: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022D70C: sb          $s7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r23;
    // 0x8022D710: sb          $s6, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r22;
    // 0x8022D714: sb          $s5, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r21;
    // 0x8022D718: lh          $a1, 0x0($s2)
    ctx->r5 = MEM_H(ctx->r18, 0X0);
    // 0x8022D71C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022D720: jal         0x8004DA90
    // 0x8022D724: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_3;
    // 0x8022D724: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x8022D728: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    // 0x8022D72C: addu        $a1, $s4, $zero
    ctx->r5 = ADD32(ctx->r20, 0);
    // 0x8022D730: jal         0x8009A3B4
    // 0x8022D734: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_4;
    // 0x8022D734: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_4:
    // 0x8022D738: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8022D73C: addiu       $a1, $s1, 0x2C
    ctx->r5 = ADD32(ctx->r17, 0X2C);
    // 0x8022D740: jal         0x8009A3B4
    // 0x8022D744: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_5;
    // 0x8022D744: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_5:
    // 0x8022D748: addiu       $a0, $s1, 0x1C
    ctx->r4 = ADD32(ctx->r17, 0X1C);
    // 0x8022D74C: addiu       $a1, $s1, 0x34
    ctx->r5 = ADD32(ctx->r17, 0X34);
    // 0x8022D750: jal         0x8009A3B4
    // 0x8022D754: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_6;
    // 0x8022D754: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_6:
L_8022D758:
    // 0x8022D758: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x8022D75C: slti        $v0, $s3, 0x3
    ctx->r2 = SIGNED(ctx->r19) < 0X3 ? 1 : 0;
    // 0x8022D760: bne         $v0, $zero, L_8022D6F8
    if (ctx->r2 != 0) {
        // 0x8022D764: addiu       $s2, $s2, 0x2
        ctx->r18 = ADD32(ctx->r18, 0X2);
            goto L_8022D6F8;
    }
    // 0x8022D764: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x8022D768: addiu       $a0, $zero, 0x1E
    ctx->r4 = ADD32(0, 0X1E);
    // 0x8022D76C: addiu       $a1, $zero, 0x7D0
    ctx->r5 = ADD32(0, 0X7D0);
    // 0x8022D770: addiu       $a2, $zero, 0x1388
    ctx->r6 = ADD32(0, 0X1388);
    // 0x8022D774: addiu       $s0, $s1, 0x14
    ctx->r16 = ADD32(ctx->r17, 0X14);
    // 0x8022D778: jal         0x8003491C
    // 0x8022D77C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    func_8003491C_FD1C(rdram, ctx);
        goto after_7;
    // 0x8022D77C: addu        $a3, $s0, $zero
    ctx->r7 = ADD32(ctx->r16, 0);
    after_7:
    // 0x8022D780: addiu       $a0, $zero, 0xC1
    ctx->r4 = ADD32(0, 0XC1);
    // 0x8022D784: jal         0x8002A33C
    // 0x8022D788: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_8;
    // 0x8022D788: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_8:
    // 0x8022D78C: j           L_8022D7E8
    // 0x8022D790: nop

        goto L_8022D7E8;
    // 0x8022D790: nop

L_8022D794:
    // 0x8022D794: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022D798: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D79C: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022D7A0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D7A4: bgez        $v0, L_8022D7E8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D7A8: addiu       $v1, $zero, 0x5
        ctx->r3 = ADD32(0, 0X5);
            goto L_8022D7E8;
    }
    // 0x8022D7A8: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x8022D7AC: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022D7B0: sb          $v1, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r3;
    // 0x8022D7B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022D7B8: sb          $v0, 0xAC($s1)
    MEM_B(0XAC, ctx->r17) = ctx->r2;
    // 0x8022D7BC: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x8022D7C0: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
L_8022D7C4:
    // 0x8022D7C4: lhu         $v0, 0x4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X4);
    // 0x8022D7C8: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022D7CC: sh          $v0, 0x4($s0)
    MEM_H(0X4, ctx->r16) = ctx->r2;
    // 0x8022D7D0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022D7D4: bgez        $v0, L_8022D7E8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8022D7D8: nop
    
            goto L_8022D7E8;
    }
    // 0x8022D7D8: nop

    // 0x8022D7DC: lhu         $v0, 0x0($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X0);
    // 0x8022D7E0: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022D7E4: sh          $v0, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r2;
L_8022D7E8:
    // 0x8022D7E8: lw          $ra, 0x30($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X30);
    // 0x8022D7EC: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x8022D7F0: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x8022D7F4: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x8022D7F8: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x8022D7FC: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x8022D800: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022D804: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022D808: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022D80C: jr          $ra
    // 0x8022D810: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022D810: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80236310_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236314: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236318: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x8023631C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80236320: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236324: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236328: lw          $v0, -0xB58($at)
    ctx->r2 = MEM_W(ctx->r1, -0XB58);
    // 0x8023632C: jalr        $v0
    // 0x80236330: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236330: nop

    after_0:
    // 0x80236334: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236338: jr          $ra
    // 0x8023633C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x8023633C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80239E34_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239E34: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80239E38: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80239E3C: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x80239E40: sw          $ra, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r31;
    // 0x80239E44: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80239E48: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80239E4C: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80239E50: lw          $s0, 0x28($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X28);
    // 0x80239E54: lhu         $v0, 0x2C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2C);
    // 0x80239E58: lhu         $s3, 0x56($s0)
    ctx->r19 = MEM_HU(ctx->r16, 0X56);
    // 0x80239E5C: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x80239E60: lhu         $v0, 0x2E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2E);
    // 0x80239E64: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x80239E68: lhu         $v0, 0x30($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X30);
    // 0x80239E6C: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80239E70: jal         0x8002C654
    // 0x80239E74: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x80239E74: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    after_0:
    // 0x80239E78: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x80239E7C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80239E80: jal         0x800319B4
    // 0x80239E84: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x80239E84: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x80239E88: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x80239E8C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80239E90: jal         0x80031270
    // 0x80239E94: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_80031270_C670(rdram, ctx);
        goto after_2;
    // 0x80239E94: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_2:
    // 0x80239E98: lh          $v1, 0x1C($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X1C);
    // 0x80239E9C: lhu         $v0, 0x38($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X38);
    // 0x80239EA0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80239EA4: sh          $v0, 0x1C($s2)
    MEM_H(0X1C, ctx->r18) = ctx->r2;
    // 0x80239EA8: lh          $a0, 0x20($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X20);
    // 0x80239EAC: lhu         $v0, 0x3A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3A);
    // 0x80239EB0: lw          $a1, 0x34($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X34);
    // 0x80239EB4: lui         $v1, 0x8F
    ctx->r3 = S32(0X8F << 16);
    // 0x80239EB8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80239EBC: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
    // 0x80239EC0: lh          $a0, 0x24($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X24);
    // 0x80239EC4: lhu         $v0, 0x3C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3C);
    // 0x80239EC8: ori         $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 | 0XFFFF;
    // 0x80239ECC: slt         $v1, $v1, $a1
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80239ED0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x80239ED4: bne         $v1, $zero, L_80239F08
    if (ctx->r3 != 0) {
        // 0x80239ED8: sh          $v0, 0x20($s2)
        MEM_H(0X20, ctx->r18) = ctx->r2;
            goto L_80239F08;
    }
    // 0x80239ED8: sh          $v0, 0x20($s2)
    MEM_H(0X20, ctx->r18) = ctx->r2;
    // 0x80239EDC: lui         $v0, 0x1
    ctx->r2 = S32(0X1 << 16);
    // 0x80239EE0: ori         $v0, $v0, 0x70A3
    ctx->r2 = ctx->r2 | 0X70A3;
    // 0x80239EE4: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x80239EE8: sw          $v0, 0x34($s2)
    MEM_W(0X34, ctx->r18) = ctx->r2;
    // 0x80239EEC: lw          $v0, 0x38($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X38);
    // 0x80239EF0: lw          $a0, 0x3C($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X3C);
    // 0x80239EF4: ori         $v1, $zero, 0x8000
    ctx->r3 = 0 | 0X8000;
    // 0x80239EF8: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80239EFC: addiu       $a0, $a0, -0x147A
    ctx->r4 = ADD32(ctx->r4, -0X147A);
    // 0x80239F00: sw          $v0, 0x38($s2)
    MEM_W(0X38, ctx->r18) = ctx->r2;
    // 0x80239F04: sw          $a0, 0x3C($s2)
    MEM_W(0X3C, ctx->r18) = ctx->r4;
L_80239F08:
    // 0x80239F08: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x80239F0C: lh          $v1, 0x34($s2)
    ctx->r3 = MEM_H(ctx->r18, 0X34);
    // 0x80239F10: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239F14: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80239F18: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
    // 0x80239F1C: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x80239F20: sh          $v1, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r3;
    // 0x80239F24: lhu         $v1, 0x26($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X26);
    // 0x80239F28: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239F2C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239F30: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239F34: lbu         $v0, -0x770($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X770);
    // 0x80239F38: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80239F3C: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x80239F40: lbu         $v0, 0xE($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0XE);
    // 0x80239F44: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239F48: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80239F4C: lbu         $v1, -0x76F($at)
    ctx->r3 = MEM_BU(ctx->r1, -0X76F);
    // 0x80239F50: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239F54: sb          $v0, 0xE($s2)
    MEM_B(0XE, ctx->r18) = ctx->r2;
    // 0x80239F58: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80239F5C: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80239F60: sb          $v1, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r3;
    // 0x80239F64: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x80239F68: bne         $v0, $v1, L_8023A004
    if (ctx->r2 != ctx->r3) {
        // 0x80239F6C: nop
    
            goto L_8023A004;
    }
    // 0x80239F6C: nop

    // 0x80239F70: jal         0x8004F144
    // 0x80239F74: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_3;
    // 0x80239F74: nop

    after_3:
    // 0x80239F78: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x80239F7C: beq         $s1, $zero, L_8023A000
    if (ctx->r17 == 0) {
        // 0x80239F80: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8023A000;
    }
    // 0x80239F80: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80239F84: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80239F88: sb          $v1, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r3;
    // 0x80239F8C: sb          $v0, 0x2($s1)
    MEM_B(0X2, ctx->r17) = ctx->r2;
    // 0x80239F90: sb          $zero, 0x3($s1)
    MEM_B(0X3, ctx->r17) = 0;
    // 0x80239F94: sb          $v0, 0xC($s1)
    MEM_B(0XC, ctx->r17) = ctx->r2;
    // 0x80239F98: jal         0x800A3450
    // 0x80239F9C: sb          $v1, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r3;
    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80239F9C: sb          $v1, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r3;
    after_4:
    // 0x80239FA0: jal         0x800A3450
    // 0x80239FA4: andi        $s0, $v0, 0xFFF
    ctx->r16 = ctx->r2 & 0XFFF;
    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80239FA4: andi        $s0, $v0, 0xFFF
    ctx->r16 = ctx->r2 & 0XFFF;
    after_5:
    // 0x80239FA8: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80239FAC: addiu       $v0, $v0, 0x64
    ctx->r2 = ADD32(ctx->r2, 0X64);
    // 0x80239FB0: lui         $v1, 0x3C48
    ctx->r3 = S32(0X3C48 << 16);
    // 0x80239FB4: ori         $v1, $v1, 0x2E
    ctx->r3 = ctx->r3 | 0X2E;
    // 0x80239FB8: lui         $a0, 0x2E20
    ctx->r4 = S32(0X2E20 << 16);
    // 0x80239FBC: ori         $a0, $a0, 0x2020
    ctx->r4 = ctx->r4 | 0X2020;
    // 0x80239FC0: sw          $v1, 0x14($s1)
    MEM_W(0X14, ctx->r17) = ctx->r3;
    // 0x80239FC4: addiu       $v1, $zero, 0x12
    ctx->r3 = ADD32(0, 0X12);
    // 0x80239FC8: sh          $v1, 0x24($s1)
    MEM_H(0X24, ctx->r17) = ctx->r3;
    // 0x80239FCC: addiu       $v1, $zero, 0x80
    ctx->r3 = ADD32(0, 0X80);
    // 0x80239FD0: sb          $v1, 0x22($s1)
    MEM_B(0X22, ctx->r17) = ctx->r3;
    // 0x80239FD4: addiu       $v1, $zero, 0xA0
    ctx->r3 = ADD32(0, 0XA0);
    // 0x80239FD8: sw          $a0, 0x18($s1)
    MEM_W(0X18, ctx->r17) = ctx->r4;
    // 0x80239FDC: sb          $v1, 0x23($s1)
    MEM_B(0X23, ctx->r17) = ctx->r3;
    // 0x80239FE0: sw          $s2, 0x28($s1)
    MEM_W(0X28, ctx->r17) = ctx->r18;
    // 0x80239FE4: sh          $s0, 0x2C($s1)
    MEM_H(0X2C, ctx->r17) = ctx->r16;
    // 0x80239FE8: sh          $v0, 0x2E($s1)
    MEM_H(0X2E, ctx->r17) = ctx->r2;
    // 0x80239FEC: sh          $s3, 0x30($s1)
    MEM_H(0X30, ctx->r17) = ctx->r19;
    // 0x80239FF0: lw          $v0, 0x38($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X38);
    // 0x80239FF4: sw          $v0, 0x34($s1)
    MEM_W(0X34, ctx->r17) = ctx->r2;
    // 0x80239FF8: lw          $v0, 0x3C($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X3C);
    // 0x80239FFC: sw          $v0, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->r2;
L_8023A000:
    // 0x8023A000: sb          $zero, 0xE($s2)
    MEM_B(0XE, ctx->r18) = 0;
L_8023A004:
    // 0x8023A004: lw          $ra, 0x50($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X50);
    // 0x8023A008: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x8023A00C: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8023A010: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8023A014: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8023A018: jr          $ra
    // 0x8023A01C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    TRACE_RETURN()
    return;
    // 0x8023A01C: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_8022B358_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B358: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022B35C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022B360: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022B364: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8022B368: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022B36C: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B370: lui         $s1, 0x8020
    ctx->r17 = S32(0X8020 << 16);
    // 0x8022B374: addiu       $s1, $s1, 0x49B0
    ctx->r17 = ADD32(ctx->r17, 0X49B0);
    // 0x8022B378: sltiu       $v0, $v1, 0x6
    ctx->r2 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x8022B37C: beq         $v0, $zero, L_8022B484
    if (ctx->r2 == 0) {
        // 0x8022B380: addiu       $a0, $s0, 0x308
        ctx->r4 = ADD32(ctx->r16, 0X308);
            goto L_8022B484;
    }
    // 0x8022B380: addiu       $a0, $s0, 0x308
    ctx->r4 = ADD32(ctx->r16, 0X308);
    // 0x8022B384: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8022B388: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022B38C: addu        $at, $at, $v0
    gpr jr_addend_8022B394 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022B390: lw          $v0, -0x1D0($at)
    ctx->r2 = ADD32(ctx->r1, -0X1D0);
    // 0x8022B394: jr          $v0
    // 0x8022B398: nop

    switch (jr_addend_8022B394 >> 2) {
        case 0: goto L_8022B39C; break;
        case 1: goto L_8022B3C0; break;
        case 2: goto L_8022B3EC; break;
        case 3: goto L_8022B3F8; break;
        case 4: goto L_8022B434; break;
        case 5: goto L_8022B450; break;
        default: switch_error(__func__, 0x8022B394, 0x8023FE30);
    }
    // 0x8022B398: nop

L_8022B39C:
    // 0x8022B39C: jal         0x8022ACDC
    // 0x8022B3A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022ACDC_ovl2(rdram, ctx);
        goto after_0;
    // 0x8022B3A0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_0:
    // 0x8022B3A4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B3A8: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022B3AC: jal         0x80050294
    // 0x8022B3B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_1;
    // 0x8022B3B0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_1:
    // 0x8022B3B4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B3B8: j           L_8022B448
    // 0x8022B3BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B448;
    // 0x8022B3BC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B3C0:
    // 0x8022B3C0: lw          $v0, 0x184($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X184);
    // 0x8022B3C4: bne         $v0, $s0, L_8022B484
    if (ctx->r2 != ctx->r16) {
        // 0x8022B3C8: nop
    
            goto L_8022B484;
    }
    // 0x8022B3C8: nop

    // 0x8022B3CC: jal         0x8022B688
    // 0x8022B3D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8022B688_ovl2(rdram, ctx);
        goto after_2;
    // 0x8022B3D0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8022B3D4: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B3D8: beql        $v0, $zero, L_8022B484
    if (ctx->r2 == 0) {
        // 0x8022B3DC: sw          $zero, 0x184($s1)
        MEM_W(0X184, ctx->r17) = 0;
            goto L_8022B484;
    }
    goto skip_0;
    // 0x8022B3DC: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    skip_0:
    // 0x8022B3E0: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B3E4: j           L_8022B448
    // 0x8022B3E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B448;
    // 0x8022B3E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B3EC:
    // 0x8022B3EC: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B3F0: j           L_8022B448
    // 0x8022B3F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
        goto L_8022B448;
    // 0x8022B3F4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B3F8:
    // 0x8022B3F8: lui         $a1, 0x800B
    ctx->r5 = S32(0X800B << 16);
    // 0x8022B3FC: lw          $a1, 0x2B94($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2B94);
    // 0x8022B400: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8022B404: jal         0x80061510
    // 0x8022B408: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    func_80061510_3C910(rdram, ctx);
        goto after_3;
    // 0x8022B408: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    after_3:
    // 0x8022B40C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022B410: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8022B414: jal         0x80050294
    // 0x8022B418: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_4;
    // 0x8022B418: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_4:
    // 0x8022B41C: addiu       $a0, $zero, 0x103
    ctx->r4 = ADD32(0, 0X103);
    // 0x8022B420: jal         0x8002A33C
    // 0x8022B424: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_5;
    // 0x8022B424: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_5:
    // 0x8022B428: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B42C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8022B430: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022B434:
    // 0x8022B434: sw          $zero, 0x184($s1)
    MEM_W(0X184, ctx->r17) = 0;
    // 0x8022B438: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x8022B43C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022B440: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022B444: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
L_8022B448:
    // 0x8022B448: j           L_8022B484
    // 0x8022B44C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_8022B484;
    // 0x8022B44C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_8022B450:
    // 0x8022B450: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8022B454: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022B458: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022B45C: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8022B460: bne         $v0, $zero, L_8022B484
    if (ctx->r2 != 0) {
        // 0x8022B464: lui         $v0, 0x48C
        ctx->r2 = S32(0X48C << 16);
            goto L_8022B484;
    }
    // 0x8022B464: lui         $v0, 0x48C
    ctx->r2 = S32(0X48C << 16);
    // 0x8022B468: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022B46C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x8022B470: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8022B474: addiu       $v1, $zero, 0x2D
    ctx->r3 = ADD32(0, 0X2D);
    // 0x8022B478: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8022B47C: sb          $v1, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r3;
    // 0x8022B480: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
L_8022B484:
    // 0x8022B484: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8022B488: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022B48C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022B490: jr          $ra
    // 0x8022B494: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022B494: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023582C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023582C: lbu         $v0, 0xC($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XC);
    // 0x80235830: jr          $ra
    // 0x80235834: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80235834: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80236648_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236648: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x8023664C: addiu       $a1, $a1, 0x9E4
    ctx->r5 = ADD32(ctx->r5, 0X9E4);
    // 0x80236650: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80236654: lui         $v1, 0xFFF0
    ctx->r3 = S32(0XFFF0 << 16);
    // 0x80236658: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023665C: sw          $v0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r2;
    // 0x80236660: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80236664: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236668: jr          $ra
    // 0x8023666C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x8023666C: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
;}
