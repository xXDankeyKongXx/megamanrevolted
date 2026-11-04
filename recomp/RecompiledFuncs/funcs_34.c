#include "recomp.h"
#include "mm64_hooks.h"
#include "trace.h"
#include "funcs.h"

RECOMP_FUNC void func_80226B90_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B90: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226B94: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
    // 0x80226B98: bne         $v1, $v0, L_80226BA8
    if (ctx->r3 != ctx->r2) {
        // 0x80226B9C: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_80226BA8;
    }
    // 0x80226B9C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80226BA0: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x80226BA4: sb          $v0, 0x128($v1)
    MEM_B(0X128, ctx->r3) = ctx->r2;
L_80226BA8:
    // 0x80226BA8: jr          $ra
    // 0x80226BAC: nop

    TRACE_RETURN()
    return;
    // 0x80226BAC: nop

;}
RECOMP_FUNC void func_8022B930_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022B930: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022B934: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022B938: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022B93C: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8022B940: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022B944: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022B948: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022B94C: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022B950: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022B954: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022B958: jal         0x8009A3B4
    // 0x8022B95C: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022B95C: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022B960: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8022B964: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022B968: jal         0x8009A3B4
    // 0x8022B96C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022B96C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022B970: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x8022B974: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x8022B978: jal         0x8009A3B4
    // 0x8022B97C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022B97C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022B980: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022B984: jal         0x800A3450
    // 0x8022B988: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022B988: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022B98C: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022B990: sh          $v0, 0x4E2($s1)
    MEM_H(0X4E2, ctx->r17) = ctx->r2;
    // 0x8022B994: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022B998: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022B99C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022B9A0: lw          $v0, -0x15C0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X15C0);
    // 0x8022B9A4: jalr        $v0
    // 0x8022B9A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8022B9A8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022B9AC: lhu         $v0, 0x4E0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4E0);
    // 0x8022B9B0: andi        $v0, $v0, 0x10
    ctx->r2 = ctx->r2 & 0X10;
    // 0x8022B9B4: beq         $v0, $zero, L_8022B9EC
    if (ctx->r2 == 0) {
        // 0x8022B9B8: addiu       $s2, $s1, 0x4E0
        ctx->r18 = ADD32(ctx->r17, 0X4E0);
            goto L_8022B9EC;
    }
    // 0x8022B9B8: addiu       $s2, $s1, 0x4E0
    ctx->r18 = ADD32(ctx->r17, 0X4E0);
    // 0x8022B9BC: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x8022B9C0: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022B9C4: beq         $v0, $a1, L_8022B9DC
    if (ctx->r2 == ctx->r5) {
        // 0x8022B9C8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022B9DC;
    }
    // 0x8022B9C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022B9CC: jal         0x80050294
    // 0x8022B9D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022B9D0: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022B9D4: j           L_8022B9FC
    // 0x8022B9D8: nop

        goto L_8022B9FC;
    // 0x8022B9D8: nop

L_8022B9DC:
    // 0x8022B9DC: jal         0x8005044C
    // 0x8022B9E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x8022B9E0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x8022B9E4: j           L_8022B9FC
    // 0x8022B9E8: nop

        goto L_8022B9FC;
    // 0x8022B9E8: nop

L_8022B9EC:
    // 0x8022B9EC: jal         0x80051770
    // 0x8022B9F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80051770_2CB70(rdram, ctx);
        goto after_7;
    // 0x8022B9F0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x8022B9F4: jal         0x80051248
    // 0x8022B9F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_8;
    // 0x8022B9F8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_8:
L_8022B9FC:
    // 0x8022B9FC: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022BA00: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022BA04: beq         $v0, $zero, L_8022BA1C
    if (ctx->r2 == 0) {
        // 0x8022BA08: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022BA1C;
    }
    // 0x8022BA08: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022BA0C: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    // 0x8022BA10: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022BA14: jal         0x8003B564
    // 0x8022BA18: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_9;
    // 0x8022BA18: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_9:
L_8022BA1C:
    // 0x8022BA1C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022BA20: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022BA24: beql        $v0, $zero, L_8022BA94
    if (ctx->r2 == 0) {
        // 0x8022BA28: sw          $zero, 0x14($s2)
        MEM_W(0X14, ctx->r18) = 0;
            goto L_8022BA94;
    }
    goto skip_0;
    // 0x8022BA28: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    skip_0:
    // 0x8022BA2C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022BA30: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022BA34: beq         $v0, $zero, L_8022BA90
    if (ctx->r2 == 0) {
        // 0x8022BA38: addiu       $s0, $s2, 0xC
        ctx->r16 = ADD32(ctx->r18, 0XC);
            goto L_8022BA90;
    }
    // 0x8022BA38: addiu       $s0, $s2, 0xC
    ctx->r16 = ADD32(ctx->r18, 0XC);
    // 0x8022BA3C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BA40: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x8022BA44: jal         0x8009A3B4
    // 0x8022BA48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_10;
    // 0x8022BA48: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_10:
    // 0x8022BA4C: lui         $t0, 0x488
    ctx->r8 = S32(0X488 << 16);
    // 0x8022BA50: ori         $t0, $t0, 0x8
    ctx->r8 = ctx->r8 | 0X8;
    // 0x8022BA54: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022BA58: addiu       $a1, $zero, 0xD0
    ctx->r5 = ADD32(0, 0XD0);
    // 0x8022BA5C: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022BA60: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022BA64: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x8022BA68: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022BA6C: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022BA70: lhu         $v1, 0x8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8);
    // 0x8022BA74: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022BA78: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022BA7C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022BA80: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022BA84: or          $v1, $v1, $t0
    ctx->r3 = ctx->r3 | ctx->r8;
    // 0x8022BA88: jal         0x80051E18
    // 0x8022BA8C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_11;
    // 0x8022BA8C: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_11:
L_8022BA90:
    // 0x8022BA90: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
L_8022BA94:
    // 0x8022BA94: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022BA98: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022BA9C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022BAA0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022BAA4: jr          $ra
    // 0x8022BAA8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022BAA8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80230CE8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230CE8: addu        $a1, $a0, $zero
    ctx->r5 = ADD32(ctx->r4, 0);
    // 0x80230CEC: lui         $v1, 0xFFF8
    ctx->r3 = S32(0XFFF8 << 16);
    // 0x80230CF0: lw          $v0, 0x24($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X24);
    // 0x80230CF4: lw          $a0, 0x98($a1)
    ctx->r4 = MEM_W(ctx->r5, 0X98);
    // 0x80230CF8: ori         $v1, $v1, 0xDB6E
    ctx->r3 = ctx->r3 | 0XDB6E;
    // 0x80230CFC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80230D00: sw          $v0, 0x24($a1)
    MEM_W(0X24, ctx->r5) = ctx->r2;
    // 0x80230D04: lbu         $v1, 0x0($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X0);
    // 0x80230D08: addiu       $v0, $zero, 0x15
    ctx->r2 = ADD32(0, 0X15);
    // 0x80230D0C: bne         $v1, $v0, L_80230D20
    if (ctx->r3 != ctx->r2) {
        // 0x80230D10: nop
    
            goto L_80230D20;
    }
    // 0x80230D10: nop

    // 0x80230D14: lbu         $v0, 0xA($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0XA);
    // 0x80230D18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230D1C: sb          $v0, 0xA($a1)
    MEM_B(0XA, ctx->r5) = ctx->r2;
L_80230D20:
    // 0x80230D20: jr          $ra
    // 0x80230D24: nop

    TRACE_RETURN()
    return;
    // 0x80230D24: nop

;}
RECOMP_FUNC void func_8023AC30_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023AC30: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8023AC34: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8023AC38: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023AC3C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8023AC40: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8023AC44: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8023AC48: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8023AC4C: lbu         $v1, 0x3($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X3);
    // 0x8023AC50: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8023AC54: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8023AC58: sltiu       $v0, $v1, 0x5
    ctx->r2 = ctx->r3 < 0X5 ? 1 : 0;
    // 0x8023AC5C: beq         $v0, $zero, L_8023AEAC
    if (ctx->r2 == 0) {
        // 0x8023AC60: sll         $v0, $v1, 2
        ctx->r2 = S32(ctx->r3 << 2);
            goto L_8023AEAC;
    }
    // 0x8023AC60: sll         $v0, $v1, 2
    ctx->r2 = S32(ctx->r3 << 2);
    // 0x8023AC64: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023AC68: addu        $at, $at, $v0
    gpr jr_addend_8023AC70 = ctx->r2;
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023AC6C: lw          $v0, 0x48($at)
    ctx->r2 = ADD32(ctx->r1, 0X48);
    // 0x8023AC70: jr          $v0
    // 0x8023AC74: nop

    switch (jr_addend_8023AC70 >> 2) {
        case 0: goto L_8023AC78; break;
        case 1: goto L_8023ACBC; break;
        case 2: goto L_8023AD6C; break;
        case 3: goto L_8023ADBC; break;
        case 4: goto L_8023AE5C; break;
        default: switch_error(__func__, 0x8023AC70, 0x80240048);
    }
    // 0x8023AC74: nop

L_8023AC78:
    // 0x8023AC78: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x8023AC7C: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x8023AC80: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x8023AC84: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8023AC88: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8023AC8C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023AC90: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8023AC94: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023AC98: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x8023AC9C: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x8023ACA0: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x8023ACA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023ACA8: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8023ACAC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023ACB0: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x8023ACB4: j           L_8023AEAC
    // 0x8023ACB8: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
        goto L_8023AEAC;
    // 0x8023ACB8: sb          $v0, 0xB($s2)
    MEM_B(0XB, ctx->r18) = ctx->r2;
L_8023ACBC:
    // 0x8023ACBC: lui         $v1, 0x3D48
    ctx->r3 = S32(0X3D48 << 16);
    // 0x8023ACC0: lb          $a0, 0xC($s2)
    ctx->r4 = MEM_B(ctx->r18, 0XC);
    // 0x8023ACC4: ori         $v1, $v1, 0xE
    ctx->r3 = ctx->r3 | 0XE;
    // 0x8023ACC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023ACCC: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x8023ACD0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023ACD4: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8023ACD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023ACDC: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8023ACE0: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023ACE4: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8023ACE8: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023ACEC: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x8023ACF0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023ACF4: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x8023ACF8: beq         $a0, $v0, L_8023AD40
    if (ctx->r4 == ctx->r2) {
        // 0x8023ACFC: sw          $v1, 0x14($s2)
        MEM_W(0X14, ctx->r18) = ctx->r3;
            goto L_8023AD40;
    }
    // 0x8023ACFC: sw          $v1, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r3;
    // 0x8023AD00: slti        $v0, $a0, 0x2
    ctx->r2 = SIGNED(ctx->r4) < 0X2 ? 1 : 0;
    // 0x8023AD04: beql        $v0, $zero, L_8023AD1C
    if (ctx->r2 == 0) {
        // 0x8023AD08: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023AD1C;
    }
    goto skip_0;
    // 0x8023AD08: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023AD0C: beq         $a0, $zero, L_8023AD2C
    if (ctx->r4 == 0) {
        // 0x8023AD10: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_8023AD2C;
    }
    // 0x8023AD10: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8023AD14: j           L_8023AEAC
    // 0x8023AD18: nop

        goto L_8023AEAC;
    // 0x8023AD18: nop

L_8023AD1C:
    // 0x8023AD1C: beq         $a0, $v0, L_8023AD58
    if (ctx->r4 == ctx->r2) {
        // 0x8023AD20: lui         $v0, 0x2E00
        ctx->r2 = S32(0X2E00 << 16);
            goto L_8023AD58;
    }
    // 0x8023AD20: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8023AD24: j           L_8023AEAC
    // 0x8023AD28: nop

        goto L_8023AEAC;
    // 0x8023AD28: nop

L_8023AD2C:
    // 0x8023AD2C: ori         $v0, $v0, 0x80
    ctx->r2 = ctx->r2 | 0X80;
    // 0x8023AD30: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8023AD34: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x8023AD38: j           L_8023AEAC
    // 0x8023AD3C: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_8023AEAC;
    // 0x8023AD3C: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_8023AD40:
    // 0x8023AD40: lui         $v0, 0x2E00
    ctx->r2 = S32(0X2E00 << 16);
    // 0x8023AD44: ori         $v0, $v0, 0x8000
    ctx->r2 = ctx->r2 | 0X8000;
    // 0x8023AD48: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8023AD4C: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x8023AD50: j           L_8023AEAC
    // 0x8023AD54: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_8023AEAC;
    // 0x8023AD54: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_8023AD58:
    // 0x8023AD58: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x8023AD5C: sw          $v0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r2;
    // 0x8023AD60: addiu       $v0, $zero, 0x808
    ctx->r2 = ADD32(0, 0X808);
    // 0x8023AD64: j           L_8023AEAC
    // 0x8023AD68: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
        goto L_8023AEAC;
    // 0x8023AD68: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
L_8023AD6C:
    // 0x8023AD6C: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x8023AD70: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x8023AD74: lbu         $a0, 0x3($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X3);
    // 0x8023AD78: lui         $v1, 0x2E00
    ctx->r3 = S32(0X2E00 << 16);
    // 0x8023AD7C: ori         $v1, $v1, 0x80
    ctx->r3 = ctx->r3 | 0X80;
    // 0x8023AD80: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8023AD84: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x8023AD88: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8023AD8C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023AD90: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x8023AD94: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023AD98: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8023AD9C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8023ADA0: sh          $v0, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r2;
    // 0x8023ADA4: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8023ADA8: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x8023ADAC: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x8023ADB0: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x8023ADB4: j           L_8023AEAC
    // 0x8023ADB8: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
        goto L_8023AEAC;
    // 0x8023ADB8: sb          $a0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r4;
L_8023ADBC:
    // 0x8023ADBC: lui         $v0, 0x3D48
    ctx->r2 = S32(0X3D48 << 16);
    // 0x8023ADC0: ori         $v0, $v0, 0x2E
    ctx->r2 = ctx->r2 | 0X2E;
    // 0x8023ADC4: lui         $v1, 0x2E80
    ctx->r3 = S32(0X2E80 << 16);
    // 0x8023ADC8: ori         $v1, $v1, 0x8080
    ctx->r3 = ctx->r3 | 0X8080;
    // 0x8023ADCC: addiu       $s1, $sp, 0x10
    ctx->r17 = ADD32(ctx->r29, 0X10);
    // 0x8023ADD0: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023ADD4: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023ADD8: addiu       $a1, $a1, 0x40
    ctx->r5 = ADD32(ctx->r5, 0X40);
    // 0x8023ADDC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8023ADE0: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8023ADE4: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8023ADE8: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8023ADEC: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x8023ADF0: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x8023ADF4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023ADF8: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8023ADFC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x8023AE00: sb          $v0, 0x9($s2)
    MEM_B(0X9, ctx->r18) = ctx->r2;
    // 0x8023AE04: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x8023AE08: sw          $v1, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r3;
    // 0x8023AE0C: jal         0x8009A3B4
    // 0x8023AE10: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8023AE10: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    after_0:
    // 0x8023AE14: addiu       $s0, $sp, 0x18
    ctx->r16 = ADD32(ctx->r29, 0X18);
    // 0x8023AE18: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8023AE1C: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x8023AE20: addiu       $a1, $a1, 0x44
    ctx->r5 = ADD32(ctx->r5, 0X44);
    // 0x8023AE24: jal         0x8009A3B4
    // 0x8023AE28: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8023AE28: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x8023AE2C: lb          $v0, 0xC($s2)
    ctx->r2 = MEM_B(ctx->r18, 0XC);
    // 0x8023AE30: lb          $v1, 0xC($s2)
    ctx->r3 = MEM_B(ctx->r18, 0XC);
    // 0x8023AE34: addu        $s1, $s1, $v0
    ctx->r17 = ADD32(ctx->r17, ctx->r2);
    // 0x8023AE38: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8023AE3C: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x8023AE40: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x8023AE44: lbu         $v0, 0x0($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X0);
    // 0x8023AE48: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x8023AE4C: ori         $v0, $v0, 0x20
    ctx->r2 = ctx->r2 | 0X20;
    // 0x8023AE50: sb          $v0, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r2;
    // 0x8023AE54: j           L_8023AEAC
    // 0x8023AE58: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
        goto L_8023AEAC;
    // 0x8023AE58: sb          $v1, 0xC($s2)
    MEM_B(0XC, ctx->r18) = ctx->r3;
L_8023AE5C:
    // 0x8023AE5C: lui         $v0, 0x3D08
    ctx->r2 = S32(0X3D08 << 16);
    // 0x8023AE60: ori         $v0, $v0, 0xE
    ctx->r2 = ctx->r2 | 0XE;
    // 0x8023AE64: lbu         $v1, 0x0($s2)
    ctx->r3 = MEM_BU(ctx->r18, 0X0);
    // 0x8023AE68: lui         $a0, 0x2E00
    ctx->r4 = S32(0X2E00 << 16);
    // 0x8023AE6C: ori         $a0, $a0, 0x80
    ctx->r4 = ctx->r4 | 0X80;
    // 0x8023AE70: sw          $v0, 0x14($s2)
    MEM_W(0X14, ctx->r18) = ctx->r2;
    // 0x8023AE74: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x8023AE78: sb          $v0, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r2;
    // 0x8023AE7C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x8023AE80: sb          $v0, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r2;
    // 0x8023AE84: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8023AE88: sb          $v0, 0x8($s2)
    MEM_B(0X8, ctx->r18) = ctx->r2;
    // 0x8023AE8C: addiu       $v0, $zero, 0x28
    ctx->r2 = ADD32(0, 0X28);
    // 0x8023AE90: sb          $zero, 0x9($s2)
    MEM_B(0X9, ctx->r18) = 0;
    // 0x8023AE94: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
    // 0x8023AE98: sw          $a0, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r4;
    // 0x8023AE9C: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    // 0x8023AEA0: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x8023AEA4: ori         $v1, $v1, 0x20
    ctx->r3 = ctx->r3 | 0X20;
    // 0x8023AEA8: sb          $v1, 0x0($s2)
    MEM_B(0X0, ctx->r18) = ctx->r3;
L_8023AEAC:
    // 0x8023AEAC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8023AEB0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8023AEB4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8023AEB8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8023AEBC: jr          $ra
    // 0x8023AEC0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x8023AEC0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80230DA8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230DA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230DAC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230DB0: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80230DB4: addiu       $v0, $zero, 0x1C
    ctx->r2 = ADD32(0, 0X1C);
    // 0x80230DB8: addiu       $a1, $zero, 0x1C
    ctx->r5 = ADD32(0, 0X1C);
    // 0x80230DBC: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230DC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230DC4: jal         0x80050294
    // 0x80230DC8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80230DC8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80230DCC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80230DD0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230DD4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80230DD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80230DDC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80230DE0: jr          $ra
    // 0x80230DE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80230DE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230EC8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230EC8: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x80230ECC: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80230ED0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80230ED4: bne         $v1, $v0, L_80230EE8
    if (ctx->r3 != ctx->r2) {
        // 0x80230ED8: nop
    
            goto L_80230EE8;
    }
    // 0x80230ED8: nop

    // 0x80230EDC: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80230EE0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80230EE4: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_80230EE8:
    // 0x80230EE8: jr          $ra
    // 0x80230EEC: nop

    TRACE_RETURN()
    return;
    // 0x80230EEC: nop

;}
RECOMP_FUNC void func_80226544_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226544: jr          $ra
    // 0x80226548: nop

    TRACE_RETURN()
    return;
    // 0x80226548: nop

;}
RECOMP_FUNC void func_802264B4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802264B4: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802264B8: bne         $v0, $zero, L_802264D4
    if (ctx->r2 != 0) {
        // 0x802264BC: addiu       $v0, $zero, 0x800
        ctx->r2 = ADD32(0, 0X800);
            goto L_802264D4;
    }
    // 0x802264BC: addiu       $v0, $zero, 0x800
    ctx->r2 = ADD32(0, 0X800);
    // 0x802264C0: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x802264C4: sh          $v0, 0x56($v1)
    MEM_H(0X56, ctx->r3) = ctx->r2;
    // 0x802264C8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x802264CC: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802264D0: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_802264D4:
    // 0x802264D4: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x802264D8: addiu       $v0, $zero, 0x2D
    ctx->r2 = ADD32(0, 0X2D);
    // 0x802264DC: bne         $v1, $v0, L_802264F0
    if (ctx->r3 != ctx->r2) {
        // 0x802264E0: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802264F0;
    }
    // 0x802264E0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802264E4: lw          $v1, 0x28($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X28);
    // 0x802264E8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x802264EC: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
L_802264F0:
    // 0x802264F0: jr          $ra
    // 0x802264F4: nop

    TRACE_RETURN()
    return;
    // 0x802264F4: nop

;}
RECOMP_FUNC void func_80232700_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80232700: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80232704: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x80232708: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023270C: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80232710: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80232714: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80232718: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023271C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80232720: lw          $v0, -0xD90($at)
    ctx->r2 = MEM_W(ctx->r1, -0XD90);
    // 0x80232724: jalr        $v0
    // 0x80232728: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80232728: nop

    after_0:
    // 0x8023272C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80232730: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80232734: bne         $v0, $zero, L_80232748
    if (ctx->r2 != 0) {
        // 0x80232738: nop
    
            goto L_80232748;
    }
    // 0x80232738: nop

    // 0x8023273C: lbu         $v0, 0xF($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XF);
    // 0x80232740: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232744: sb          $v0, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r2;
L_80232748:
    // 0x80232748: lb          $v1, 0xF($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XF);
    // 0x8023274C: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80232750: beql        $v1, $v0, L_80232758
    if (ctx->r3 == ctx->r2) {
        // 0x80232754: sb          $zero, 0xF($s0)
        MEM_B(0XF, ctx->r16) = 0;
            goto L_80232758;
    }
    goto skip_0;
    // 0x80232754: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    skip_0:
L_80232758:
    // 0x80232758: lhu         $v0, 0x90($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X90);
    // 0x8023275C: sh          $v0, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r2;
    // 0x80232760: lhu         $v0, 0x92($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X92);
    // 0x80232764: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80232768: lhu         $v0, 0x94($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X94);
    // 0x8023276C: sh          $v0, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r2;
    // 0x80232770: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80232774: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80232778: bne         $v0, $zero, L_802327E0
    if (ctx->r2 != 0) {
        // 0x8023277C: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802327E0;
    }
    // 0x8023277C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80232780: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80232784: beq         $v0, $zero, L_802327A0
    if (ctx->r2 == 0) {
        // 0x80232788: addiu       $a1, $zero, 0x20
        ctx->r5 = ADD32(0, 0X20);
            goto L_802327A0;
    }
    // 0x80232788: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    // 0x8023278C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80232790: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80232794: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x80232798: j           L_802327B0
    // 0x8023279C: addiu       $a3, $zero, 0x4000
    ctx->r7 = ADD32(0, 0X4000);
        goto L_802327B0;
    // 0x8023279C: addiu       $a3, $zero, 0x4000
    ctx->r7 = ADD32(0, 0X4000);
L_802327A0:
    // 0x802327A0: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x802327A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802327A8: lbu         $v1, 0x1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1);
    // 0x802327AC: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
L_802327B0:
    // 0x802327B0: addiu       $v0, $s0, 0x9C
    ctx->r2 = ADD32(ctx->r16, 0X9C);
    // 0x802327B4: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802327B8: lui         $v0, 0x800
    ctx->r2 = S32(0X800 << 16);
    // 0x802327BC: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x802327C0: addiu       $v0, $zero, 0x80
    ctx->r2 = ADD32(0, 0X80);
    // 0x802327C4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x802327C8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x802327CC: jal         0x80051E18
    // 0x802327D0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_1;
    // 0x802327D0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    after_1:
    // 0x802327D4: jal         0x800472C0
    // 0x802327D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_800472C0_226C0(rdram, ctx);
        goto after_2;
    // 0x802327D8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x802327DC: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802327E0:
    // 0x802327E0: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    // 0x802327E4: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x802327E8: jal         0x8003B564
    // 0x802327EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_3;
    // 0x802327EC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_3:
    // 0x802327F0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x802327F4: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x802327F8: jr          $ra
    // 0x802327FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x802327FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023626C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023626C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80236270: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80236274: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x80236278: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023627C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80236280: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80236284: lw          $v0, -0xB78($at)
    ctx->r2 = MEM_W(ctx->r1, -0XB78);
    // 0x80236288: jalr        $v0
    // 0x8023628C: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x8023628C: nop

    after_0:
    // 0x80236290: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x80236294: jr          $ra
    // 0x80236298: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236298: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8022A1B8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022A1B8: lhu         $v0, 0x34A($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X34A);
    // 0x8022A1BC: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022A1C0: addu        $v1, $zero, $zero
    ctx->r3 = ADD32(0, 0);
    // 0x8022A1C4: andi        $a2, $v0, 0xF
    ctx->r6 = ctx->r2 & 0XF;
    // 0x8022A1C8: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_8022A1CC:
    // 0x8022A1CC: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A1D0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8022A1D4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8022A1D8: lbu         $v0, -0x16D0($at)
    ctx->r2 = MEM_BU(ctx->r1, -0X16D0);
    // 0x8022A1DC: addu        $v0, $a1, $v0
    ctx->r2 = ADD32(ctx->r5, ctx->r2);
    // 0x8022A1E0: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8022A1E4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A1E8: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A1EC: slt         $v0, $a2, $v0
    ctx->r2 = SIGNED(ctx->r6) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8022A1F0: bne         $v0, $zero, L_8022A210
    if (ctx->r2 != 0) {
        // 0x8022A1F4: addiu       $v0, $v1, 0x1
        ctx->r2 = ADD32(ctx->r3, 0X1);
            goto L_8022A210;
    }
    // 0x8022A1F4: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8022A1F8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8022A1FC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022A200: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A204: slti        $v0, $v0, 0x4
    ctx->r2 = SIGNED(ctx->r2) < 0X4 ? 1 : 0;
    // 0x8022A208: bne         $v0, $zero, L_8022A1CC
    if (ctx->r2 != 0) {
        // 0x8022A20C: sll         $v0, $v1, 16
        ctx->r2 = S32(ctx->r3 << 16);
            goto L_8022A1CC;
    }
    // 0x8022A20C: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
L_8022A210:
    // 0x8022A210: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A214: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
    // 0x8022A218: sll         $v0, $v1, 16
    ctx->r2 = S32(ctx->r3 << 16);
    // 0x8022A21C: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022A220: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022A224: beql        $v1, $v0, L_8022A26C
    if (ctx->r3 == ctx->r2) {
        // 0x8022A228: sh          $zero, 0x66($a0)
        MEM_H(0X66, ctx->r4) = 0;
            goto L_8022A26C;
    }
    goto skip_0;
    // 0x8022A228: sh          $zero, 0x66($a0)
    MEM_H(0X66, ctx->r4) = 0;
    skip_0:
    // 0x8022A22C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x8022A230: beql        $v0, $zero, L_8022A248
    if (ctx->r2 == 0) {
        // 0x8022A234: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8022A248;
    }
    goto skip_1;
    // 0x8022A234: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_1:
    // 0x8022A238: beql        $v1, $zero, L_8022A264
    if (ctx->r3 == 0) {
        // 0x8022A23C: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_8022A264;
    }
    goto skip_2;
    // 0x8022A23C: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    skip_2:
    // 0x8022A240: j           L_8022A274
    // 0x8022A244: nop

        goto L_8022A274;
    // 0x8022A244: nop

L_8022A248:
    // 0x8022A248: beq         $v1, $v0, L_8022A270
    if (ctx->r3 == ctx->r2) {
        // 0x8022A24C: addiu       $v0, $zero, 0x10
        ctx->r2 = ADD32(0, 0X10);
            goto L_8022A270;
    }
    // 0x8022A24C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x8022A250: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022A254: beql        $v1, $v0, L_8022A270
    if (ctx->r3 == ctx->r2) {
        // 0x8022A258: addiu       $v0, $zero, -0x10
        ctx->r2 = ADD32(0, -0X10);
            goto L_8022A270;
    }
    goto skip_3;
    // 0x8022A258: addiu       $v0, $zero, -0x10
    ctx->r2 = ADD32(0, -0X10);
    skip_3:
    // 0x8022A25C: j           L_8022A274
    // 0x8022A260: nop

        goto L_8022A274;
    // 0x8022A260: nop

L_8022A264:
    // 0x8022A264: j           L_8022A274
    // 0x8022A268: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
        goto L_8022A274;
    // 0x8022A268: sb          $v0, 0x9($a0)
    MEM_B(0X9, ctx->r4) = ctx->r2;
L_8022A26C:
    // 0x8022A26C: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
L_8022A270:
    // 0x8022A270: sh          $v0, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r2;
L_8022A274:
    // 0x8022A274: jr          $ra
    // 0x8022A278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    TRACE_RETURN()
    return;
    // 0x8022A278: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80237D40_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237D40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237D44: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80237D48: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80237D4C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237D50: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80237D54: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80237D58: jal         0x8006033C
    // 0x80237D5C: addiu       $a0, $zero, 0x621
    ctx->r4 = ADD32(0, 0X621);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80237D5C: addiu       $a0, $zero, 0x621
    ctx->r4 = ADD32(0, 0X621);
    after_0:
    // 0x80237D60: bne         $v0, $zero, L_80237E88
    if (ctx->r2 != 0) {
        // 0x80237D64: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237E88;
    }
    // 0x80237D64: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237D68: lb          $v1, 0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X8);
    // 0x80237D6C: beq         $v1, $v0, L_80237E04
    if (ctx->r3 == ctx->r2) {
        // 0x80237D70: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_80237E04;
    }
    // 0x80237D70: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80237D74: beql        $v0, $zero, L_80237D8C
    if (ctx->r2 == 0) {
        // 0x80237D78: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80237D8C;
    }
    goto skip_0;
    // 0x80237D78: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80237D7C: beq         $v1, $zero, L_80237D9C
    if (ctx->r3 == 0) {
        // 0x80237D80: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80237D9C;
    }
    // 0x80237D80: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237D84: j           L_80237E88
    // 0x80237D88: nop

        goto L_80237E88;
    // 0x80237D88: nop

L_80237D8C:
    // 0x80237D8C: beq         $v1, $v0, L_80237E40
    if (ctx->r3 == ctx->r2) {
        // 0x80237D90: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_80237E40;
    }
    // 0x80237D90: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80237D94: j           L_80237E88
    // 0x80237D98: nop

        goto L_80237E88;
    // 0x80237D98: nop

L_80237D9C:
    // 0x80237D9C: jal         0x80238028
    // 0x80237DA0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80238028_ovl2(rdram, ctx);
        goto after_1;
    // 0x80237DA0: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237DA4: beq         $v0, $zero, L_80237DF4
    if (ctx->r2 == 0) {
        // 0x80237DA8: nop
    
            goto L_80237DF4;
    }
    // 0x80237DA8: nop

    // 0x80237DAC: jal         0x8006033C
    // 0x80237DB0: addiu       $a0, $zero, 0x620
    ctx->r4 = ADD32(0, 0X620);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80237DB0: addiu       $a0, $zero, 0x620
    ctx->r4 = ADD32(0, 0X620);
    after_2:
    // 0x80237DB4: beq         $v0, $zero, L_80237DF4
    if (ctx->r2 == 0) {
        // 0x80237DB8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80237DF4;
    }
    // 0x80237DB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237DBC: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80237DC0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237DC4: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80237DC8: addiu       $a0, $zero, 0x256
    ctx->r4 = ADD32(0, 0X256);
    // 0x80237DCC: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80237DD0: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80237DD4: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x80237DD8: jal         0x8004CB2C
    // 0x80237DDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_3;
    // 0x80237DDC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80237DE0: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80237DE4: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80237DE8: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
    // 0x80237DEC: addiu       $v0, $zero, 0x3C
    ctx->r2 = ADD32(0, 0X3C);
    // 0x80237DF0: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
L_80237DF4:
    // 0x80237DF4: jal         0x80060590
    // 0x80237DF8: addiu       $a0, $zero, 0x620
    ctx->r4 = ADD32(0, 0X620);
    func_80060590_3B990(rdram, ctx);
        goto after_4;
    // 0x80237DF8: addiu       $a0, $zero, 0x620
    ctx->r4 = ADD32(0, 0X620);
    after_4:
    // 0x80237DFC: j           L_80237E88
    // 0x80237E00: nop

        goto L_80237E88;
    // 0x80237E00: nop

L_80237E04:
    // 0x80237E04: lhu         $v0, 0xC($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0XC);
    // 0x80237E08: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80237E0C: sh          $v0, 0xC($s0)
    MEM_H(0XC, ctx->r16) = ctx->r2;
    // 0x80237E10: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80237E14: bgez        $v0, L_80237E88
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80237E18: addiu       $a0, $zero, 0x20
        ctx->r4 = ADD32(0, 0X20);
            goto L_80237E88;
    }
    // 0x80237E18: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    // 0x80237E1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80237E20: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80237E24: jal         0x8004CB2C
    // 0x80237E28: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_5;
    // 0x80237E28: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    after_5:
    // 0x80237E2C: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x80237E30: jal         0x800616FC
    // 0x80237E34: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_6;
    // 0x80237E34: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_6:
    // 0x80237E38: j           L_80237E88
    // 0x80237E3C: nop

        goto L_80237E88;
    // 0x80237E3C: nop

L_80237E40:
    // 0x80237E40: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237E44: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x80237E48: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80237E4C: bne         $v0, $zero, L_80237E88
    if (ctx->r2 != 0) {
        // 0x80237E50: nop
    
            goto L_80237E88;
    }
    // 0x80237E50: nop

    // 0x80237E54: jal         0x8006036C
    // 0x80237E58: addiu       $a0, $zero, 0x621
    ctx->r4 = ADD32(0, 0X621);
    func_8006036C_3B76C(rdram, ctx);
        goto after_7;
    // 0x80237E58: addiu       $a0, $zero, 0x621
    ctx->r4 = ADD32(0, 0X621);
    after_7:
    // 0x80237E5C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80237E60: lbu         $v0, 0x4A6D($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X4A6D);
    // 0x80237E64: addiu       $a0, $zero, 0x276
    ctx->r4 = ADD32(0, 0X276);
    // 0x80237E68: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80237E6C: lui         $at, 0x8020
    ctx->r1 = S32(0X8020 << 16);
    // 0x80237E70: sb          $v0, 0x4A6D($at)
    MEM_B(0X4A6D, ctx->r1) = ctx->r2;
    // 0x80237E74: jal         0x8004CB2C
    // 0x80237E78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8004CB2C_27F2C(rdram, ctx);
        goto after_8;
    // 0x80237E78: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x80237E7C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x80237E80: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x80237E84: sb          $v0, 0x0($s1)
    MEM_B(0X0, ctx->r17) = ctx->r2;
L_80237E88:
    // 0x80237E88: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80237E8C: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80237E90: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80237E94: jr          $ra
    // 0x80237E98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80237E98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8023942C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023942C: addu        $a2, $a0, $zero
    ctx->r6 = ADD32(ctx->r4, 0);
    // 0x80239430: lbu         $v1, 0x3($a2)
    ctx->r3 = MEM_BU(ctx->r6, 0X3);
    // 0x80239434: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239438: beq         $v1, $v0, L_802394B0
    if (ctx->r3 == ctx->r2) {
        // 0x8023943C: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802394B0;
    }
    // 0x8023943C: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80239440: beq         $v0, $zero, L_802394FC
    if (ctx->r2 == 0) {
        // 0x80239444: nop
    
            goto L_802394FC;
    }
    // 0x80239444: nop

    // 0x80239448: bne         $v1, $zero, L_802394FC
    if (ctx->r3 != 0) {
        // 0x8023944C: nop
    
            goto L_802394FC;
    }
    // 0x8023944C: nop

    // 0x80239450: lbu         $v0, 0xB($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XB);
    // 0x80239454: sltiu       $v0, $v0, 0x9
    ctx->r2 = ctx->r2 < 0X9 ? 1 : 0;
    // 0x80239458: bne         $v0, $zero, L_80239488
    if (ctx->r2 != 0) {
        // 0x8023945C: nop
    
            goto L_80239488;
    }
    // 0x8023945C: nop

    // 0x80239460: lb          $v0, 0xE($a2)
    ctx->r2 = MEM_B(ctx->r6, 0XE);
    // 0x80239464: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239468: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023946C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239470: lw          $v0, -0x81C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X81C);
    // 0x80239474: lw          $v1, 0x18($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X18);
    // 0x80239478: sll         $v0, $v0, 3
    ctx->r2 = S32(ctx->r2 << 3);
    // 0x8023947C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80239480: j           L_802394FC
    // 0x80239484: sw          $v1, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r3;
        goto L_802394FC;
    // 0x80239484: sw          $v1, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r3;
L_80239488:
    // 0x80239488: lb          $v0, 0xE($a2)
    ctx->r2 = MEM_B(ctx->r6, 0XE);
    // 0x8023948C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239490: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239494: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239498: lw          $v0, -0x81C($at)
    ctx->r2 = MEM_W(ctx->r1, -0X81C);
    // 0x8023949C: lw          $v1, 0x18($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X18);
    // 0x802394A0: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802394A4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x802394A8: j           L_802394FC
    // 0x802394AC: sw          $v1, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r3;
        goto L_802394FC;
    // 0x802394AC: sw          $v1, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r3;
L_802394B0:
    // 0x802394B0: lb          $v0, 0xE($a2)
    ctx->r2 = MEM_B(ctx->r6, 0XE);
    // 0x802394B4: lw          $a0, 0x28($a2)
    ctx->r4 = MEM_W(ctx->r6, 0X28);
    // 0x802394B8: lw          $v1, 0x28($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X28);
    // 0x802394BC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802394C0: lui         $a1, 0x8024
    ctx->r5 = S32(0X8024 << 16);
    // 0x802394C4: addu        $a1, $a1, $v0
    ctx->r5 = ADD32(ctx->r5, ctx->r2);
    // 0x802394C8: lw          $a1, -0x81C($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X81C);
    // 0x802394CC: lw          $v0, 0x2C($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X2C);
    // 0x802394D0: addiu       $v1, $v1, -0x8
    ctx->r3 = ADD32(ctx->r3, -0X8);
    // 0x802394D4: sw          $v1, 0x28($a2)
    MEM_W(0X28, ctx->r6) = ctx->r3;
    // 0x802394D8: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x802394DC: sw          $v0, 0x2C($a2)
    MEM_W(0X2C, ctx->r6) = ctx->r2;
    // 0x802394E0: lw          $v0, 0x18($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X18);
    // 0x802394E4: lw          $v1, 0x2C($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X2C);
    // 0x802394E8: sll         $a1, $a1, 2
    ctx->r5 = S32(ctx->r5 << 2);
    // 0x802394EC: subu        $v0, $v0, $a1
    ctx->r2 = SUB32(ctx->r2, ctx->r5);
    // 0x802394F0: srl         $v1, $v1, 8
    ctx->r3 = S32(U32(ctx->r3) >> 8);
    // 0x802394F4: sw          $v0, 0x18($a2)
    MEM_W(0X18, ctx->r6) = ctx->r2;
    // 0x802394F8: sh          $v1, 0x24($a2)
    MEM_H(0X24, ctx->r6) = ctx->r3;
L_802394FC:
    // 0x802394FC: lbu         $v0, 0xB($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0XB);
    // 0x80239500: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80239504: sb          $v0, 0xB($a2)
    MEM_B(0XB, ctx->r6) = ctx->r2;
    // 0x80239508: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x8023950C: bne         $v0, $zero, L_80239520
    if (ctx->r2 != 0) {
        // 0x80239510: nop
    
            goto L_80239520;
    }
    // 0x80239510: nop

    // 0x80239514: lbu         $v0, 0x8($a2)
    ctx->r2 = MEM_BU(ctx->r6, 0X8);
    // 0x80239518: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023951C: sb          $v0, 0x8($a2)
    MEM_B(0X8, ctx->r6) = ctx->r2;
L_80239520:
    // 0x80239520: jr          $ra
    // 0x80239524: nop

    TRACE_RETURN()
    return;
    // 0x80239524: nop

;}
RECOMP_FUNC void func_8022E450_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022E450: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8022E454: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8022E458: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8022E45C: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x8022E460: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8022E464: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8022E468: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8022E46C: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022E470: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x8022E474: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x8022E478: jal         0x8009A3B4
    // 0x8022E47C: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x8022E47C: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    after_0:
    // 0x8022E480: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x8022E484: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x8022E488: jal         0x8009A3B4
    // 0x8022E48C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x8022E48C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x8022E490: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x8022E494: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x8022E498: jal         0x8009A3B4
    // 0x8022E49C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022E49C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x8022E4A0: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x8022E4A4: jal         0x800A3450
    // 0x8022E4A8: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x8022E4A8: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022E4AC: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x8022E4B0: sh          $v0, 0x4E2($s1)
    MEM_H(0X4E2, ctx->r17) = ctx->r2;
    // 0x8022E4B4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022E4B8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022E4BC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8022E4C0: lw          $v0, -0x1490($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1490);
    // 0x8022E4C4: jalr        $v0
    // 0x8022E4C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x8022E4C8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022E4CC: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x8022E4D0: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x8022E4D4: beq         $v0, $a1, L_8022E4F0
    if (ctx->r2 == ctx->r5) {
        // 0x8022E4D8: addiu       $s2, $s1, 0x4E0
        ctx->r18 = ADD32(ctx->r17, 0X4E0);
            goto L_8022E4F0;
    }
    // 0x8022E4D8: addiu       $s2, $s1, 0x4E0
    ctx->r18 = ADD32(ctx->r17, 0X4E0);
    // 0x8022E4DC: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E4E0: jal         0x800502EC
    // 0x8022E4E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_800502EC_2B6EC(rdram, ctx);
        goto after_5;
    // 0x8022E4E4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x8022E4E8: j           L_8022E4F8
    // 0x8022E4EC: nop

        goto L_8022E4F8;
    // 0x8022E4EC: nop

L_8022E4F0:
    // 0x8022E4F0: jal         0x800504EC
    // 0x8022E4F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_800504EC_2B8EC(rdram, ctx);
        goto after_6;
    // 0x8022E4F4: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_8022E4F8:
    // 0x8022E4F8: lhu         $v0, 0x38($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X38);
    // 0x8022E4FC: lui         $at, 0x801C
    ctx->r1 = S32(0X801C << 16);
    // 0x8022E500: sh          $v0, -0x3D7C($at)
    MEM_H(-0X3D7C, ctx->r1) = ctx->r2;
    // 0x8022E504: jal         0x80051248
    // 0x8022E508: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_80051248_2C648(rdram, ctx);
        goto after_7;
    // 0x8022E508: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_7:
    // 0x8022E50C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022E510: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x8022E514: beq         $v0, $zero, L_8022E52C
    if (ctx->r2 == 0) {
        // 0x8022E518: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8022E52C;
    }
    // 0x8022E518: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022E51C: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x8022E520: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x8022E524: jal         0x8003B564
    // 0x8022E528: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_8;
    // 0x8022E528: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_8:
L_8022E52C:
    // 0x8022E52C: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022E530: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x8022E534: beql        $v0, $zero, L_8022E5A0
    if (ctx->r2 == 0) {
        // 0x8022E538: sw          $zero, 0x14($s2)
        MEM_W(0X14, ctx->r18) = 0;
            goto L_8022E5A0;
    }
    goto skip_0;
    // 0x8022E538: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    skip_0:
    // 0x8022E53C: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022E540: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x8022E544: beq         $v0, $zero, L_8022E59C
    if (ctx->r2 == 0) {
        // 0x8022E548: addiu       $s0, $s2, 0xC
        ctx->r16 = ADD32(ctx->r18, 0XC);
            goto L_8022E59C;
    }
    // 0x8022E548: addiu       $s0, $s2, 0xC
    ctx->r16 = ADD32(ctx->r18, 0XC);
    // 0x8022E54C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E550: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x8022E554: jal         0x8009A3B4
    // 0x8022E558: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_9;
    // 0x8022E558: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_9:
    // 0x8022E55C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022E560: addiu       $a1, $zero, 0x50
    ctx->r5 = ADD32(0, 0X50);
    // 0x8022E564: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x8022E568: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8022E56C: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x8022E570: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x8022E574: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x8022E578: lhu         $v1, 0x8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8);
    // 0x8022E57C: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x8022E580: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x8022E584: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8022E588: lui         $v0, 0x588
    ctx->r2 = S32(0X588 << 16);
    // 0x8022E58C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8022E590: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x8022E594: jal         0x80051E18
    // 0x8022E598: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_10;
    // 0x8022E598: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_10:
L_8022E59C:
    // 0x8022E59C: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
L_8022E5A0:
    // 0x8022E5A0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8022E5A4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8022E5A8: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8022E5AC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022E5B0: jr          $ra
    // 0x8022E5B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x8022E5B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023B5A8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B5A8: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8023B5AC: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8023B5B0: addu        $s3, $a0, $zero
    ctx->r19 = ADD32(ctx->r4, 0);
    // 0x8023B5B4: sw          $ra, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r31;
    // 0x8023B5B8: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x8023B5BC: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x8023B5C0: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8023B5C4: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8023B5C8: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8023B5CC: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8023B5D0: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8023B5D4: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x8023B5D8: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023B5DC: addiu       $v1, $v1, 0x35C0
    ctx->r3 = ADD32(ctx->r3, 0X35C0);
    // 0x8023B5E0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B5E4: lui         $s4, 0x8024
    ctx->r20 = S32(0X8024 << 16);
    // 0x8023B5E8: addu        $s4, $s4, $v0
    ctx->r20 = ADD32(ctx->r20, ctx->r2);
    // 0x8023B5EC: lhu         $s4, -0x630($s4)
    ctx->r20 = MEM_HU(ctx->r20, -0X630);
    // 0x8023B5F0: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023B5F4: lw          $s5, 0x0($v0)
    ctx->r21 = MEM_W(ctx->r2, 0X0);
    // 0x8023B5F8: addiu       $s6, $zero, 0x10
    ctx->r22 = ADD32(0, 0X10);
    // 0x8023B5FC: beq         $s5, $zero, L_8023B628
    if (ctx->r21 == 0) {
        // 0x8023B600: sw          $zero, 0x0($v0)
        MEM_W(0X0, ctx->r2) = 0;
            goto L_8023B628;
    }
    // 0x8023B600: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8023B604: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8023B608: addu        $a1, $s5, $zero
    ctx->r5 = ADD32(ctx->r21, 0);
    // 0x8023B60C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x8023B610: jal         0x8007FBC0
    // 0x8023B614: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    func_8007FBC0_5AFC0(rdram, ctx);
        goto after_0;
    // 0x8023B614: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x8023B618: lhu         $v1, 0x18($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X18);
    // 0x8023B61C: addu        $s7, $v0, $zero
    ctx->r23 = ADD32(ctx->r2, 0);
    // 0x8023B620: j           L_8023B658
    // 0x8023B624: sll         $s6, $v1, 4
    ctx->r22 = S32(ctx->r3 << 4);
        goto L_8023B658;
    // 0x8023B624: sll         $s6, $v1, 4
    ctx->r22 = S32(ctx->r3 << 4);
L_8023B628:
    // 0x8023B628: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8023B62C: addiu       $a1, $sp, 0x1A
    ctx->r5 = ADD32(ctx->r29, 0X1A);
    // 0x8023B630: jal         0x800874D0
    // 0x8023B634: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_800874D0_628D0(rdram, ctx);
        goto after_1;
    // 0x8023B634: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_1:
    // 0x8023B638: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023B63C: addiu       $a0, $a0, 0x5C0
    ctx->r4 = ADD32(ctx->r4, 0X5C0);
    // 0x8023B640: lh          $a1, 0x1A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1A);
    // 0x8023B644: lh          $a2, 0x1C($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1C);
    // 0x8023B648: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x8023B64C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B650: jal         0x80086F94
    // 0x8023B654: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_80086F94_62394(rdram, ctx);
        goto after_2;
    // 0x8023B654: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_2:
L_8023B658:
    // 0x8023B658: lbu         $v0, 0x3($s3)
    ctx->r2 = MEM_BU(ctx->r19, 0X3);
    // 0x8023B65C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023B660: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023B664: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023B668: lhu         $v0, -0x62E($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X62E);
    // 0x8023B66C: beq         $v0, $zero, L_8023B88C
    if (ctx->r2 == 0) {
        // 0x8023B670: addu        $s2, $zero, $zero
        ctx->r18 = ADD32(0, 0);
            goto L_8023B88C;
    }
    // 0x8023B670: addu        $s2, $zero, $zero
    ctx->r18 = ADD32(0, 0);
L_8023B674:
    // 0x8023B674: addu        $v0, $s6, $zero
    ctx->r2 = ADD32(ctx->r22, 0);
    // 0x8023B678: bltzl       $v0, L_8023B680
    if (SIGNED(ctx->r2) < 0) {
        // 0x8023B67C: addiu       $v0, $v0, 0xF
        ctx->r2 = ADD32(ctx->r2, 0XF);
            goto L_8023B680;
    }
    goto skip_0;
    // 0x8023B67C: addiu       $v0, $v0, 0xF
    ctx->r2 = ADD32(ctx->r2, 0XF);
    skip_0:
L_8023B680:
    // 0x8023B680: sra         $v0, $v0, 4
    ctx->r2 = S32(SIGNED(ctx->r2) >> 4);
    // 0x8023B684: slt         $v0, $s2, $v0
    ctx->r2 = SIGNED(ctx->r18) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023B688: beq         $v0, $zero, L_8023B930
    if (ctx->r2 == 0) {
        // 0x8023B68C: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_8023B930;
    }
    // 0x8023B68C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023B690: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x8023B694: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x8023B698: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8023B69C: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8023B6A0: jal         0x800874D0
    // 0x8023B6A4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_3;
    // 0x8023B6A4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_3:
    // 0x8023B6A8: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8023B6AC: jal         0x80087248
    // 0x8023B6B0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_4;
    // 0x8023B6B0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_4:
    // 0x8023B6B4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023B6B8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023B6BC: lh          $a0, 0x1A($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X1A);
    // 0x8023B6C0: lh          $v0, 0x18($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X18);
    // 0x8023B6C4: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8023B6C8: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8023B6CC: jal         0x800874D0
    // 0x8023B6D0: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_5;
    // 0x8023B6D0: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_5:
    // 0x8023B6D4: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8023B6D8: jal         0x80087248
    // 0x8023B6DC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_6;
    // 0x8023B6DC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_6:
    // 0x8023B6E0: beq         $s5, $zero, L_8023B6F4
    if (ctx->r21 == 0) {
        // 0x8023B6E4: addu        $s0, $v0, $zero
        ctx->r16 = ADD32(ctx->r2, 0);
            goto L_8023B6F4;
    }
    // 0x8023B6E4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x8023B6E8: sll         $v0, $s2, 5
    ctx->r2 = S32(ctx->r18 << 5);
    // 0x8023B6EC: j           L_8023B720
    // 0x8023B6F0: addu        $a1, $s7, $v0
    ctx->r5 = ADD32(ctx->r23, ctx->r2);
        goto L_8023B720;
    // 0x8023B6F0: addu        $a1, $s7, $v0
    ctx->r5 = ADD32(ctx->r23, ctx->r2);
L_8023B6F4:
    // 0x8023B6F4: bgez        $s4, L_8023B700
    if (SIGNED(ctx->r20) >= 0) {
        // 0x8023B6F8: addu        $v0, $s4, $zero
        ctx->r2 = ADD32(ctx->r20, 0);
            goto L_8023B700;
    }
    // 0x8023B6F8: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x8023B6FC: addiu       $v0, $s4, 0xFF
    ctx->r2 = ADD32(ctx->r20, 0XFF);
L_8023B700:
    // 0x8023B700: addu        $a0, $s4, $zero
    ctx->r4 = ADD32(ctx->r20, 0);
    // 0x8023B704: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023B708: jal         0x800874D0
    // 0x8023B70C: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_7;
    // 0x8023B70C: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_7:
    // 0x8023B710: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8023B714: jal         0x80087248
    // 0x8023B718: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_8;
    // 0x8023B718: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_8:
    // 0x8023B71C: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
L_8023B720:
    // 0x8023B720: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x8023B724: sltiu       $v1, $s0, 0x1
    ctx->r3 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x8023B728: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8023B72C: bnel        $v0, $zero, L_8023B674
    if (ctx->r2 != 0) {
        // 0x8023B730: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8023B674;
    }
    goto skip_1;
    // 0x8023B730: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x8023B734: beq         $a1, $zero, L_8023B884
    if (ctx->r5 == 0) {
        // 0x8023B738: addu        $t7, $zero, $zero
        ctx->r15 = ADD32(0, 0);
            goto L_8023B884;
    }
    // 0x8023B738: addu        $t7, $zero, $zero
    ctx->r15 = ADD32(0, 0);
    // 0x8023B73C: addu        $t6, $a1, $zero
    ctx->r14 = ADD32(ctx->r5, 0);
    // 0x8023B740: addu        $t5, $s0, $zero
    ctx->r13 = ADD32(ctx->r16, 0);
    // 0x8023B744: addu        $t4, $s1, $zero
    ctx->r12 = ADD32(ctx->r17, 0);
L_8023B748:
    // 0x8023B748: lhu         $t1, 0x0($t4)
    ctx->r9 = MEM_HU(ctx->r12, 0X0);
    // 0x8023B74C: lhu         $v1, 0x0($t5)
    ctx->r3 = MEM_HU(ctx->r13, 0X0);
    // 0x8023B750: lb          $t3, 0xD($s3)
    ctx->r11 = MEM_B(ctx->r19, 0XD);
    // 0x8023B754: andi        $a2, $t1, 0xFFFF
    ctx->r6 = ctx->r9 & 0XFFFF;
    // 0x8023B758: srl         $t2, $a2, 11
    ctx->r10 = S32(U32(ctx->r6) >> 11);
    // 0x8023B75C: srl         $a3, $v1, 11
    ctx->r7 = S32(U32(ctx->r3) >> 11);
    // 0x8023B760: subu        $a3, $a3, $t2
    ctx->r7 = SUB32(ctx->r7, ctx->r10);
    // 0x8023B764: mult        $a3, $t3
    result = S64(S32(ctx->r7)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B768: mflo        $a3
    ctx->r7 = lo;
    // 0x8023B76C: lb          $a1, 0xC($s3)
    ctx->r5 = MEM_B(ctx->r19, 0XC);
    // 0x8023B770: nop

    // 0x8023B774: div         $zero, $a3, $a1
    lo = S32(S64(S32(ctx->r7)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r7)) % S64(S32(ctx->r5)));
    // 0x8023B778: bne         $a1, $zero, L_8023B784
    if (ctx->r5 != 0) {
        // 0x8023B77C: nop
    
            goto L_8023B784;
    }
    // 0x8023B77C: nop

    // 0x8023B780: break       7
    do_break(2149824384);
L_8023B784:
    // 0x8023B784: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023B788: bne         $a1, $at, L_8023B79C
    if (ctx->r5 != ctx->r1) {
        // 0x8023B78C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023B79C;
    }
    // 0x8023B78C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023B790: bne         $a3, $at, L_8023B79C
    if (ctx->r7 != ctx->r1) {
        // 0x8023B794: nop
    
            goto L_8023B79C;
    }
    // 0x8023B794: nop

    // 0x8023B798: break       6
    do_break(2149824408);
L_8023B79C:
    // 0x8023B79C: mflo        $a3
    ctx->r7 = lo;
    // 0x8023B7A0: sra         $t0, $a2, 6
    ctx->r8 = S32(SIGNED(ctx->r6) >> 6);
    // 0x8023B7A4: andi        $t0, $t0, 0x1F
    ctx->r8 = ctx->r8 & 0X1F;
    // 0x8023B7A8: sra         $v0, $v1, 6
    ctx->r2 = S32(SIGNED(ctx->r3) >> 6);
    // 0x8023B7AC: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x8023B7B0: subu        $v0, $v0, $t0
    ctx->r2 = SUB32(ctx->r2, ctx->r8);
    // 0x8023B7B4: mult        $v0, $t3
    result = S64(S32(ctx->r2)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B7B8: mflo        $v0
    ctx->r2 = lo;
    // 0x8023B7BC: nop

    // 0x8023B7C0: nop

    // 0x8023B7C4: div         $zero, $v0, $a1
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r5)));
    // 0x8023B7C8: bne         $a1, $zero, L_8023B7D4
    if (ctx->r5 != 0) {
        // 0x8023B7CC: nop
    
            goto L_8023B7D4;
    }
    // 0x8023B7CC: nop

    // 0x8023B7D0: break       7
    do_break(2149824464);
L_8023B7D4:
    // 0x8023B7D4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023B7D8: bne         $a1, $at, L_8023B7EC
    if (ctx->r5 != ctx->r1) {
        // 0x8023B7DC: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023B7EC;
    }
    // 0x8023B7DC: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023B7E0: bne         $v0, $at, L_8023B7EC
    if (ctx->r2 != ctx->r1) {
        // 0x8023B7E4: nop
    
            goto L_8023B7EC;
    }
    // 0x8023B7E4: nop

    // 0x8023B7E8: break       6
    do_break(2149824488);
L_8023B7EC:
    // 0x8023B7EC: mflo        $v0
    ctx->r2 = lo;
    // 0x8023B7F0: sra         $a2, $a2, 1
    ctx->r6 = S32(SIGNED(ctx->r6) >> 1);
    // 0x8023B7F4: andi        $a2, $a2, 0x1F
    ctx->r6 = ctx->r6 & 0X1F;
    // 0x8023B7F8: sra         $v1, $v1, 1
    ctx->r3 = S32(SIGNED(ctx->r3) >> 1);
    // 0x8023B7FC: andi        $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 & 0X1F;
    // 0x8023B800: subu        $v1, $v1, $a2
    ctx->r3 = SUB32(ctx->r3, ctx->r6);
    // 0x8023B804: mult        $v1, $t3
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r11)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8023B808: mflo        $v1
    ctx->r3 = lo;
    // 0x8023B80C: nop

    // 0x8023B810: nop

    // 0x8023B814: div         $zero, $v1, $a1
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r5))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r5)));
    // 0x8023B818: bne         $a1, $zero, L_8023B824
    if (ctx->r5 != 0) {
        // 0x8023B81C: nop
    
            goto L_8023B824;
    }
    // 0x8023B81C: nop

    // 0x8023B820: break       7
    do_break(2149824544);
L_8023B824:
    // 0x8023B824: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8023B828: bne         $a1, $at, L_8023B83C
    if (ctx->r5 != ctx->r1) {
        // 0x8023B82C: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_8023B83C;
    }
    // 0x8023B82C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8023B830: bne         $v1, $at, L_8023B83C
    if (ctx->r3 != ctx->r1) {
        // 0x8023B834: nop
    
            goto L_8023B83C;
    }
    // 0x8023B834: nop

    // 0x8023B838: break       6
    do_break(2149824568);
L_8023B83C:
    // 0x8023B83C: mflo        $v1
    ctx->r3 = lo;
    // 0x8023B840: addiu       $t5, $t5, 0x2
    ctx->r13 = ADD32(ctx->r13, 0X2);
    // 0x8023B844: addiu       $t4, $t4, 0x2
    ctx->r12 = ADD32(ctx->r12, 0X2);
    // 0x8023B848: addiu       $t7, $t7, 0x1
    ctx->r15 = ADD32(ctx->r15, 0X1);
    // 0x8023B84C: andi        $t1, $t1, 0x1
    ctx->r9 = ctx->r9 & 0X1;
    // 0x8023B850: addu        $t2, $t2, $a3
    ctx->r10 = ADD32(ctx->r10, ctx->r7);
    // 0x8023B854: sll         $t2, $t2, 11
    ctx->r10 = S32(ctx->r10 << 11);
    // 0x8023B858: or          $t1, $t1, $t2
    ctx->r9 = ctx->r9 | ctx->r10;
    // 0x8023B85C: addu        $t0, $t0, $v0
    ctx->r8 = ADD32(ctx->r8, ctx->r2);
    // 0x8023B860: sll         $t0, $t0, 6
    ctx->r8 = S32(ctx->r8 << 6);
    // 0x8023B864: or          $t1, $t1, $t0
    ctx->r9 = ctx->r9 | ctx->r8;
    // 0x8023B868: slti        $v0, $t7, 0x10
    ctx->r2 = SIGNED(ctx->r15) < 0X10 ? 1 : 0;
    // 0x8023B86C: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8023B870: sll         $a2, $a2, 1
    ctx->r6 = S32(ctx->r6 << 1);
    // 0x8023B874: or          $t1, $t1, $a2
    ctx->r9 = ctx->r9 | ctx->r6;
    // 0x8023B878: sh          $t1, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r9;
    // 0x8023B87C: bne         $v0, $zero, L_8023B748
    if (ctx->r2 != 0) {
        // 0x8023B880: addiu       $t6, $t6, 0x2
        ctx->r14 = ADD32(ctx->r14, 0X2);
            goto L_8023B748;
    }
    // 0x8023B880: addiu       $t6, $t6, 0x2
    ctx->r14 = ADD32(ctx->r14, 0X2);
L_8023B884:
    // 0x8023B884: j           L_8023B674
    // 0x8023B888: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8023B674;
    // 0x8023B888: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8023B88C:
    // 0x8023B88C: lb          $v0, 0xD($s3)
    ctx->r2 = MEM_B(ctx->r19, 0XD);
    // 0x8023B890: bne         $v0, $zero, L_8023B930
    if (ctx->r2 != 0) {
        // 0x8023B894: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_8023B930;
    }
    // 0x8023B894: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
L_8023B898:
    // 0x8023B898: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    // 0x8023B89C: lh          $v0, 0x14($s3)
    ctx->r2 = MEM_H(ctx->r19, 0X14);
    // 0x8023B8A0: lh          $a0, 0x16($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X16);
    // 0x8023B8A4: sll         $s0, $s2, 4
    ctx->r16 = S32(ctx->r18 << 4);
    // 0x8023B8A8: addu        $v0, $s0, $v0
    ctx->r2 = ADD32(ctx->r16, ctx->r2);
    // 0x8023B8AC: sll         $a0, $a0, 8
    ctx->r4 = S32(ctx->r4 << 8);
    // 0x8023B8B0: jal         0x800874D0
    // 0x8023B8B4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    func_800874D0_628D0(rdram, ctx);
        goto after_9;
    // 0x8023B8B4: addu        $a0, $v0, $a0
    ctx->r4 = ADD32(ctx->r2, ctx->r4);
    after_9:
    // 0x8023B8B8: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8023B8BC: jal         0x80087248
    // 0x8023B8C0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_10;
    // 0x8023B8C0: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_10:
    // 0x8023B8C4: addu        $s1, $v0, $zero
    ctx->r17 = ADD32(ctx->r2, 0);
    // 0x8023B8C8: bgez        $s4, L_8023B8D4
    if (SIGNED(ctx->r20) >= 0) {
        // 0x8023B8CC: addu        $v0, $s4, $zero
        ctx->r2 = ADD32(ctx->r20, 0);
            goto L_8023B8D4;
    }
    // 0x8023B8CC: addu        $v0, $s4, $zero
    ctx->r2 = ADD32(ctx->r20, 0);
    // 0x8023B8D0: addiu       $v0, $s4, 0xFF
    ctx->r2 = ADD32(ctx->r20, 0XFF);
L_8023B8D4:
    // 0x8023B8D4: sra         $v0, $v0, 8
    ctx->r2 = S32(SIGNED(ctx->r2) >> 8);
    // 0x8023B8D8: sll         $v0, $v0, 8
    ctx->r2 = S32(ctx->r2 << 8);
    // 0x8023B8DC: subu        $v1, $s4, $v0
    ctx->r3 = SUB32(ctx->r20, ctx->r2);
    // 0x8023B8E0: addu        $a0, $s0, $v1
    ctx->r4 = ADD32(ctx->r16, ctx->r3);
    // 0x8023B8E4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8023B8E8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8023B8EC: jal         0x800874D0
    // 0x8023B8F0: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    func_800874D0_628D0(rdram, ctx);
        goto after_11;
    // 0x8023B8F0: addiu       $a2, $sp, 0x22
    ctx->r6 = ADD32(ctx->r29, 0X22);
    after_11:
    // 0x8023B8F4: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8023B8F8: jal         0x80087248
    // 0x8023B8FC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_80087248_62648(rdram, ctx);
        goto after_12;
    // 0x8023B8FC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_12:
    // 0x8023B900: addu        $a1, $v0, $zero
    ctx->r5 = ADD32(ctx->r2, 0);
    // 0x8023B904: sltiu       $v0, $s1, 0x1
    ctx->r2 = ctx->r17 < 0X1 ? 1 : 0;
    // 0x8023B908: sltiu       $v1, $a1, 0x1
    ctx->r3 = ctx->r5 < 0X1 ? 1 : 0;
    // 0x8023B90C: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x8023B910: bnel        $v0, $zero, L_8023B928
    if (ctx->r2 != 0) {
        // 0x8023B914: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_8023B928;
    }
    goto skip_2;
    // 0x8023B914: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_2:
    // 0x8023B918: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8023B91C: jal         0x80099F90
    // 0x8023B920: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    bcopy_recomp(rdram, ctx);
        goto after_13;
    // 0x8023B920: addiu       $a2, $zero, 0x20
    ctx->r6 = ADD32(0, 0X20);
    after_13:
    // 0x8023B924: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8023B928:
    // 0x8023B928: blez        $s2, L_8023B898
    if (SIGNED(ctx->r18) <= 0) {
        // 0x8023B92C: addiu       $a1, $sp, 0x20
        ctx->r5 = ADD32(ctx->r29, 0X20);
            goto L_8023B898;
    }
    // 0x8023B92C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
L_8023B930:
    // 0x8023B930: lw          $ra, 0x58($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X58);
    // 0x8023B934: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x8023B938: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x8023B93C: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8023B940: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8023B944: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8023B948: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8023B94C: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8023B950: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8023B954: jr          $ra
    // 0x8023B958: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    TRACE_RETURN()
    return;
    // 0x8023B958: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80226534_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226534: jr          $ra
    // 0x80226538: nop

    TRACE_RETURN()
    return;
    // 0x80226538: nop

;}
RECOMP_FUNC void func_80230E50_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230E50: jr          $ra
    // 0x80230E54: nop

    TRACE_RETURN()
    return;
    // 0x80230E54: nop

;}
RECOMP_FUNC void func_802366E4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802366E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802366E8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802366EC: lbu         $v0, 0x9($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X9);
    // 0x802366F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802366F4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802366F8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802366FC: lw          $v0, -0xB08($at)
    ctx->r2 = MEM_W(ctx->r1, -0XB08);
    // 0x80236700: jalr        $v0
    // 0x80236704: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80236704: nop

    after_0:
    // 0x80236708: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023670C: jr          $ra
    // 0x80236710: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80236710: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80230850_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230850: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80230854: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80230858: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023085C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80230860: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x80230864: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80230868: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8023086C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80230870: bne         $v0, $zero, L_802308AC
    if (ctx->r2 != 0) {
        // 0x80230874: addiu       $a1, $zero, 0x13
        ctx->r5 = ADD32(0, 0X13);
            goto L_802308AC;
    }
    // 0x80230874: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x80230878: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x8023087C: lw          $v0, -0x3A20($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A20);
    // 0x80230880: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x80230884: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80230888: lw          $v0, -0x3A20($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A20);
    // 0x8023088C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80230890: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
    // 0x80230894: addiu       $v0, $zero, 0x13
    ctx->r2 = ADD32(0, 0X13);
    // 0x80230898: jal         0x80050294
    // 0x8023089C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x8023089C: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x802308A0: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x802308A4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802308A8: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_802308AC:
    // 0x802308AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802308B0: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802308B4: jr          $ra
    // 0x802308B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802308B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023B4A4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023B4A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8023B4A8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023B4AC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023B4B0: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x8023B4B4: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023B4B8: lbu         $v0, 0xD($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XD);
    // 0x8023B4BC: lw          $s1, 0x20($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X20);
    // 0x8023B4C0: lb          $v1, 0xC($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XC);
    // 0x8023B4C4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8023B4C8: sb          $v0, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r2;
    // 0x8023B4CC: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x8023B4D0: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x8023B4D4: slt         $v1, $v1, $v0
    ctx->r3 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8023B4D8: beq         $v1, $zero, L_8023B4F8
    if (ctx->r3 == 0) {
        // 0x8023B4DC: nop
    
            goto L_8023B4F8;
    }
    // 0x8023B4DC: nop

    // 0x8023B4E0: jal         0x8023B95C
    // 0x8023B4E4: nop

    func_8023B95C_ovl2(rdram, ctx);
        goto after_0;
    // 0x8023B4E4: nop

    after_0:
    // 0x8023B4E8: beq         $v0, $zero, L_8023B4F8
    if (ctx->r2 == 0) {
        // 0x8023B4EC: nop
    
            goto L_8023B4F8;
    }
    // 0x8023B4EC: nop

    // 0x8023B4F0: jal         0x8004F5C4
    // 0x8023B4F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F5C4_2A9C4(rdram, ctx);
        goto after_1;
    // 0x8023B4F4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_1:
L_8023B4F8:
    // 0x8023B4F8: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023B4FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8023B500: bne         $v1, $v0, L_8023B528
    if (ctx->r3 != ctx->r2) {
        // 0x8023B504: addiu       $v0, $zero, 0x70
        ctx->r2 = ADD32(0, 0X70);
            goto L_8023B528;
    }
    // 0x8023B504: addiu       $v0, $zero, 0x70
    ctx->r2 = ADD32(0, 0X70);
    // 0x8023B508: lbu         $v1, 0x0($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X0);
    // 0x8023B50C: bne         $v1, $v0, L_8023B528
    if (ctx->r3 != ctx->r2) {
        // 0x8023B510: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023B528;
    }
    // 0x8023B510: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x8023B514: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023B518: lw          $v1, -0x63C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X63C);
    // 0x8023B51C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023B520: sw          $v1, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r3;
    // 0x8023B524: sw          $v1, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->r3;
L_8023B528:
    // 0x8023B528: jal         0x8023B5A8
    // 0x8023B52C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8023B5A8_ovl2(rdram, ctx);
        goto after_2;
    // 0x8023B52C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x8023B530: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x8023B534: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023B538: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023B53C: jr          $ra
    // 0x8023B540: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8023B540: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80239C74_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239C74: lbu         $v1, 0x3($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X3);
    // 0x80239C78: beq         $v1, $zero, L_80239C90
    if (ctx->r3 == 0) {
        // 0x80239C7C: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80239C90;
    }
    // 0x80239C7C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80239C80: beq         $v1, $v0, L_80239CB4
    if (ctx->r3 == ctx->r2) {
        // 0x80239C84: nop
    
            goto L_80239CB4;
    }
    // 0x80239C84: nop

    // 0x80239C88: j           L_80239CD0
    // 0x80239C8C: nop

        goto L_80239CD0;
    // 0x80239C8C: nop

L_80239C90:
    // 0x80239C90: lbu         $v1, 0xB($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0XB);
    // 0x80239C94: sltiu       $v0, $v1, 0x3F
    ctx->r2 = ctx->r3 < 0X3F ? 1 : 0;
    // 0x80239C98: beq         $v0, $zero, L_80239CC4
    if (ctx->r2 == 0) {
        // 0x80239C9C: sltiu       $v0, $v1, 0x21
        ctx->r2 = ctx->r3 < 0X21 ? 1 : 0;
            goto L_80239CC4;
    }
    // 0x80239C9C: sltiu       $v0, $v1, 0x21
    ctx->r2 = ctx->r3 < 0X21 ? 1 : 0;
    // 0x80239CA0: beq         $v0, $zero, L_80239CD0
    if (ctx->r2 == 0) {
        // 0x80239CA4: nop
    
            goto L_80239CD0;
    }
    // 0x80239CA4: nop

    // 0x80239CA8: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80239CAC: j           L_80239CCC
    // 0x80239CB0: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
        goto L_80239CCC;
    // 0x80239CB0: addiu       $v0, $v0, -0x4
    ctx->r2 = ADD32(ctx->r2, -0X4);
L_80239CB4:
    // 0x80239CB4: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x80239CB8: sltiu       $v0, $v0, 0xE1
    ctx->r2 = ctx->r2 < 0XE1 ? 1 : 0;
    // 0x80239CBC: bne         $v0, $zero, L_80239CD0
    if (ctx->r2 != 0) {
        // 0x80239CC0: nop
    
            goto L_80239CD0;
    }
    // 0x80239CC0: nop

L_80239CC4:
    // 0x80239CC4: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80239CC8: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_80239CCC:
    // 0x80239CCC: sw          $v0, 0x28($a0)
    MEM_W(0X28, ctx->r4) = ctx->r2;
L_80239CD0:
    // 0x80239CD0: lbu         $v0, 0xB($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XB);
    // 0x80239CD4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80239CD8: sb          $v0, 0xB($a0)
    MEM_B(0XB, ctx->r4) = ctx->r2;
    // 0x80239CDC: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80239CE0: bne         $v0, $zero, L_80239CF4
    if (ctx->r2 != 0) {
        // 0x80239CE4: nop
    
            goto L_80239CF4;
    }
    // 0x80239CE4: nop

    // 0x80239CE8: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80239CEC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80239CF0: sb          $v0, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r2;
L_80239CF4:
    // 0x80239CF4: jr          $ra
    // 0x80239CF8: nop

    TRACE_RETURN()
    return;
    // 0x80239CF8: nop

;}
RECOMP_FUNC void func_80238080_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238080: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80238084: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80238088: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023808C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238090: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80238094: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80238098: lw          $v0, -0x8C0($at)
    ctx->r2 = MEM_W(ctx->r1, -0X8C0);
    // 0x8023809C: jalr        $v0
    // 0x802380A0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802380A0: nop

    after_0:
    // 0x802380A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802380A8: jr          $ra
    // 0x802380AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802380AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8023230C_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023230C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80232310: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80232314: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80232318: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x8023231C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232320: jal         0x80050294
    // 0x80232324: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80232324: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80232328: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023232C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232330: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80232334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232338: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023233C: jr          $ra
    // 0x80232340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80238470_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238470: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80238474: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80238478: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8023847C: sw          $ra, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r31;
    // 0x80238480: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80238484: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80238488: lbu         $v1, 0x3($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X3);
    // 0x8023848C: ori         $v0, $v0, 0x6
    ctx->r2 = ctx->r2 | 0X6;
    // 0x80238490: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80238494: andi        $v0, $v1, 0xFF
    ctx->r2 = ctx->r3 & 0XFF;
    // 0x80238498: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x8023849C: bne         $v0, $zero, L_802384F0
    if (ctx->r2 != 0) {
        // 0x802384A0: andi        $v0, $v1, 0x1F
        ctx->r2 = ctx->r3 & 0X1F;
            goto L_802384F0;
    }
    // 0x802384A0: andi        $v0, $v1, 0x1F
    ctx->r2 = ctx->r3 & 0X1F;
    // 0x802384A4: jal         0x8006033C
    // 0x802384A8: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x802384A8: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_0:
    // 0x802384AC: beq         $v0, $zero, L_802384C4
    if (ctx->r2 == 0) {
        // 0x802384B0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_802384C4;
    }
    // 0x802384B0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802384B4: jal         0x8006033C
    // 0x802384B8: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x802384B8: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_1:
    // 0x802384BC: bne         $v0, $zero, L_8023850C
    if (ctx->r2 != 0) {
        // 0x802384C0: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023850C;
    }
    // 0x802384C0: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_802384C4:
    // 0x802384C4: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x802384C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802384CC: jal         0x8004D5D4
    // 0x802384D0: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_2;
    // 0x802384D0: sb          $v0, 0x10($sp)
    MEM_B(0X10, ctx->r29) = ctx->r2;
    after_2:
    // 0x802384D4: lui         $v0, 0x280
    ctx->r2 = S32(0X280 << 16);
    // 0x802384D8: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x802384DC: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x802384E0: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802384E4: addiu       $v0, $v0, -0x87C
    ctx->r2 = ADD32(ctx->r2, -0X87C);
    // 0x802384E8: j           L_80238544
    // 0x802384EC: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
        goto L_80238544;
    // 0x802384EC: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
L_802384F0:
    // 0x802384F0: beq         $v0, $zero, L_802384FC
    if (ctx->r2 == 0) {
        // 0x802384F4: addiu       $a0, $zero, 0x608
        ctx->r4 = ADD32(0, 0X608);
            goto L_802384FC;
    }
    // 0x802384F4: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    // 0x802384F8: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
L_802384FC:
    // 0x802384FC: jal         0x8006033C
    // 0x80238500: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80238500: nop

    after_3:
    // 0x80238504: beq         $v0, $zero, L_8023851C
    if (ctx->r2 == 0) {
        // 0x80238508: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_8023851C;
    }
    // 0x80238508: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
L_8023850C:
    // 0x8023850C: jal         0x8004F684
    // 0x80238510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8004F684_2AA84(rdram, ctx);
        goto after_4;
    // 0x80238510: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_4:
    // 0x80238514: j           L_80238690
    // 0x80238518: nop

        goto L_80238690;
    // 0x80238518: nop

L_8023851C:
    // 0x8023851C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    // 0x80238520: sb          $zero, 0x10($sp)
    MEM_B(0X10, ctx->r29) = 0;
    // 0x80238524: jal         0x8004D5D4
    // 0x80238528: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_5;
    // 0x80238528: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    after_5:
    // 0x8023852C: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x80238530: ori         $v0, $v0, 0x8080
    ctx->r2 = ctx->r2 | 0X8080;
    // 0x80238534: sw          $v0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r2;
    // 0x80238538: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8023853C: addiu       $v0, $v0, -0x888
    ctx->r2 = ADD32(ctx->r2, -0X888);
    // 0x80238540: sw          $v0, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r2;
L_80238544:
    // 0x80238544: addiu       $s1, $s0, 0x18
    ctx->r17 = ADD32(ctx->r16, 0X18);
    // 0x80238548: jal         0x8002C678
    // 0x8023854C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8002C678_7A78(rdram, ctx);
        goto after_6;
    // 0x8023854C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
    // 0x80238550: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80238554: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x80238558: beq         $v0, $zero, L_80238578
    if (ctx->r2 == 0) {
        // 0x8023855C: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_80238578;
    }
    // 0x8023855C: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80238560: lhu         $v1, 0x3A($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X3A);
    // 0x80238564: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x80238568: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
    // 0x8023856C: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80238570: addiu       $v1, $v1, -0x20
    ctx->r3 = ADD32(ctx->r3, -0X20);
    // 0x80238574: sh          $v1, 0x3A($s0)
    MEM_H(0X3A, ctx->r16) = ctx->r3;
L_80238578:
    // 0x80238578: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x8023857C: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    // 0x80238580: andi        $a0, $a0, 0x60
    ctx->r4 = ctx->r4 & 0X60;
    // 0x80238584: jal         0x800319B4
    // 0x80238588: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    func_800319B4_CDB4(rdram, ctx);
        goto after_7;
    // 0x80238588: sll         $a0, $a0, 5
    ctx->r4 = S32(ctx->r4 << 5);
    after_7:
    // 0x8023858C: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80238590: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80238594: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80238598: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023859C: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802385A0: sw          $zero, 0x298($at)
    MEM_W(0X298, ctx->r1) = 0;
    // 0x802385A4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802385A8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802385AC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802385B0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802385B4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802385B8: sw          $zero, 0x29C($at)
    MEM_W(0X29C, ctx->r1) = 0;
    // 0x802385BC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802385C0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802385C4: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802385C8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802385CC: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802385D0: sw          $zero, 0x2A0($at)
    MEM_W(0X2A0, ctx->r1) = 0;
    // 0x802385D4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802385D8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802385DC: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802385E0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802385E4: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802385E8: sw          $zero, 0x2A4($at)
    MEM_W(0X2A4, ctx->r1) = 0;
    // 0x802385EC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x802385F0: sltiu       $v0, $v0, 0x80
    ctx->r2 = ctx->r2 < 0X80 ? 1 : 0;
    // 0x802385F4: bne         $v0, $zero, L_8023866C
    if (ctx->r2 != 0) {
        // 0x802385F8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8023866C;
    }
    // 0x802385F8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802385FC: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80238600: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x80238604: addiu       $v1, $zero, 0x5
    ctx->r3 = ADD32(0, 0X5);
    // 0x80238608: sb          $v1, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r3;
    // 0x8023860C: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    // 0x80238610: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80238614: andi        $a0, $a0, 0x4F
    ctx->r4 = ctx->r4 & 0X4F;
    // 0x80238618: beq         $a0, $zero, L_80238678
    if (ctx->r4 == 0) {
        // 0x8023861C: sb          $v0, 0x0($s0)
        MEM_B(0X0, ctx->r16) = ctx->r2;
            goto L_80238678;
    }
    // 0x8023861C: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80238620: jal         0x8003E6BC
    // 0x80238624: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    func_8003E6BC_19ABC(rdram, ctx);
        goto after_8;
    // 0x80238624: addiu       $a0, $s0, 0x38
    ctx->r4 = ADD32(ctx->r16, 0X38);
    after_8:
    // 0x80238628: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x8023862C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238630: sw          $v0, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->r2;
    // 0x80238634: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80238638: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8023863C: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80238640: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80238644: lw          $v1, 0x5088($at)
    ctx->r3 = MEM_W(ctx->r1, 0X5088);
    // 0x80238648: andi        $v0, $v0, 0xF
    ctx->r2 = ctx->r2 & 0XF;
    // 0x8023864C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80238650: sw          $v1, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->r3;
    // 0x80238654: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80238658: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x8023865C: jal         0x80071A70
    // 0x80238660: lw          $a0, -0x890($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X890);
    func_80071A70_4CE70(rdram, ctx);
        goto after_9;
    // 0x80238660: lw          $a0, -0x890($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X890);
    after_9:
    // 0x80238664: j           L_80238678
    // 0x80238668: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
        goto L_80238678;
    // 0x80238668: sw          $v0, 0x2C($s0)
    MEM_W(0X2C, ctx->r16) = ctx->r2;
L_8023866C:
    // 0x8023866C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80238670: addiu       $v0, $zero, 0x64
    ctx->r2 = ADD32(0, 0X64);
    // 0x80238674: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
L_80238678:
    // 0x80238678: jal         0x800A3450
    // 0x8023867C: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_10;
    // 0x8023867C: nop

    after_10:
    // 0x80238680: andi        $v0, $v0, 0x7
    ctx->r2 = ctx->r2 & 0X7;
    // 0x80238684: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80238688: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023868C: sw          $v1, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r3;
L_80238690:
    // 0x80238690: lw          $ra, 0x20($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X20);
    // 0x80238694: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80238698: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8023869C: jr          $ra
    // 0x802386A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    TRACE_RETURN()
    return;
    // 0x802386A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80230670_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230670: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x80230674: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80230678: addiu       $v0, $zero, 0x32
    ctx->r2 = ADD32(0, 0X32);
    // 0x8023067C: bne         $v1, $v0, L_8023069C
    if (ctx->r3 != ctx->r2) {
        // 0x80230680: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_8023069C;
    }
    // 0x80230680: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80230684: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80230688: lw          $v0, -0x3A20($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A20);
    // 0x8023068C: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80230690: lui         $v0, 0x801C
    ctx->r2 = S32(0X801C << 16);
    // 0x80230694: lw          $v0, -0x3A20($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X3A20);
    // 0x80230698: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_8023069C:
    // 0x8023069C: lw          $v0, 0x98($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X98);
    // 0x802306A0: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x802306A4: addiu       $v0, $zero, 0x3D
    ctx->r2 = ADD32(0, 0X3D);
    // 0x802306A8: bne         $v1, $v0, L_802306BC
    if (ctx->r3 != ctx->r2) {
        // 0x802306AC: nop
    
            goto L_802306BC;
    }
    // 0x802306AC: nop

    // 0x802306B0: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802306B4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x802306B8: sb          $v0, 0xA($a0)
    MEM_B(0XA, ctx->r4) = ctx->r2;
L_802306BC:
    // 0x802306BC: jr          $ra
    // 0x802306C0: nop

    TRACE_RETURN()
    return;
    // 0x802306C0: nop

;}
RECOMP_FUNC void func_80237210_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80237210: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80237214: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80237218: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x8023721C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80237220: addu        $s0, $a1, $zero
    ctx->r16 = ADD32(ctx->r5, 0);
    // 0x80237224: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80237228: jal         0x8006033C
    // 0x8023722C: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x8023722C: addiu       $a0, $zero, 0x60A
    ctx->r4 = ADD32(0, 0X60A);
    after_0:
    // 0x80237230: bne         $v0, $zero, L_802373C4
    if (ctx->r2 != 0) {
        // 0x80237234: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_802373C4;
    }
    // 0x80237234: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237238: lb          $v1, 0x8($s0)
    ctx->r3 = MEM_B(ctx->r16, 0X8);
    // 0x8023723C: beq         $v1, $v0, L_802372C0
    if (ctx->r3 == ctx->r2) {
        // 0x80237240: slti        $v0, $v1, 0x2
        ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
            goto L_802372C0;
    }
    // 0x80237240: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80237244: beql        $v0, $zero, L_8023725C
    if (ctx->r2 == 0) {
        // 0x80237248: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_8023725C;
    }
    goto skip_0;
    // 0x80237248: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x8023724C: beq         $v1, $zero, L_8023726C
    if (ctx->r3 == 0) {
        // 0x80237250: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_8023726C;
    }
    // 0x80237250: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80237254: j           L_802373C4
    // 0x80237258: nop

        goto L_802373C4;
    // 0x80237258: nop

L_8023725C:
    // 0x8023725C: beq         $v1, $v0, L_8023739C
    if (ctx->r3 == ctx->r2) {
        // 0x80237260: lui         $v1, 0x800
        ctx->r3 = S32(0X800 << 16);
            goto L_8023739C;
    }
    // 0x80237260: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x80237264: j           L_802373C4
    // 0x80237268: nop

        goto L_802373C4;
    // 0x80237268: nop

L_8023726C:
    // 0x8023726C: jal         0x80238028
    // 0x80237270: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    func_80238028_ovl2(rdram, ctx);
        goto after_1;
    // 0x80237270: addu        $a1, $s0, $zero
    ctx->r5 = ADD32(ctx->r16, 0);
    after_1:
    // 0x80237274: beq         $v0, $zero, L_802373C4
    if (ctx->r2 == 0) {
        // 0x80237278: nop
    
            goto L_802373C4;
    }
    // 0x80237278: nop

    // 0x8023727C: jal         0x8006033C
    // 0x80237280: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80237280: addiu       $a0, $zero, 0x607
    ctx->r4 = ADD32(0, 0X607);
    after_2:
    // 0x80237284: beq         $v0, $zero, L_802373C4
    if (ctx->r2 == 0) {
        // 0x80237288: addiu       $a0, $zero, 0x615
        ctx->r4 = ADD32(0, 0X615);
            goto L_802373C4;
    }
    // 0x80237288: addiu       $a0, $zero, 0x615
    ctx->r4 = ADD32(0, 0X615);
    // 0x8023728C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80237290: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80237294: jal         0x8006036C
    // 0x80237298: sh          $zero, 0xC($s0)
    MEM_H(0XC, ctx->r16) = 0;
    func_8006036C_3B76C(rdram, ctx);
        goto after_3;
    // 0x80237298: sh          $zero, 0xC($s0)
    MEM_H(0XC, ctx->r16) = 0;
    after_3:
    // 0x8023729C: jal         0x8006033C
    // 0x802372A0: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x802372A0: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    after_4:
    // 0x802372A4: bne         $v0, $zero, L_802373C4
    if (ctx->r2 != 0) {
        // 0x802372A8: nop
    
            goto L_802373C4;
    }
    // 0x802372A8: nop

    // 0x802372AC: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x802372B0: jal         0x800616FC
    // 0x802372B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    func_800616FC_3CAFC(rdram, ctx);
        goto after_5;
    // 0x802372B4: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    after_5:
    // 0x802372B8: j           L_802373C4
    // 0x802372BC: nop

        goto L_802373C4;
    // 0x802372BC: nop

L_802372C0:
    // 0x802372C0: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802372C4: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802372C8: lui         $v1, 0x800
    ctx->r3 = S32(0X800 << 16);
    // 0x802372CC: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802372D0: beq         $v0, $zero, L_802372E8
    if (ctx->r2 == 0) {
        // 0x802372D4: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_802372E8;
    }
    // 0x802372D4: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
    // 0x802372D8: jal         0x8006033C
    // 0x802372DC: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    func_8006033C_3B73C(rdram, ctx);
        goto after_6;
    // 0x802372DC: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    after_6:
    // 0x802372E0: beq         $v0, $zero, L_802373C4
    if (ctx->r2 == 0) {
        // 0x802372E4: addu        $t0, $zero, $zero
        ctx->r8 = ADD32(0, 0);
            goto L_802373C4;
    }
    // 0x802372E4: addu        $t0, $zero, $zero
    ctx->r8 = ADD32(0, 0);
L_802372E8:
    // 0x802372E8: lui         $a3, 0x8020
    ctx->r7 = S32(0X8020 << 16);
    // 0x802372EC: addiu       $a3, $a3, -0x420
    ctx->r7 = ADD32(ctx->r7, -0X420);
    // 0x802372F0: addiu       $a2, $a3, 0x18
    ctx->r6 = ADD32(ctx->r7, 0X18);
L_802372F4:
    // 0x802372F4: lbu         $v0, 0x0($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X0);
    // 0x802372F8: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x802372FC: beql        $v0, $zero, L_8023734C
    if (ctx->r2 == 0) {
        // 0x80237300: addiu       $a2, $a2, 0x3C8
        ctx->r6 = ADD32(ctx->r6, 0X3C8);
            goto L_8023734C;
    }
    goto skip_1;
    // 0x80237300: addiu       $a2, $a2, 0x3C8
    ctx->r6 = ADD32(ctx->r6, 0X3C8);
    skip_1:
    // 0x80237304: lhu         $v0, -0x4($a2)
    ctx->r2 = MEM_HU(ctx->r6, -0X4);
    // 0x80237308: lb          $a0, 0x2($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X2);
    // 0x8023730C: lhu         $v1, 0x0($a2)
    ctx->r3 = MEM_HU(ctx->r6, 0X0);
    // 0x80237310: lhu         $a1, 0x4($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X4);
    // 0x80237314: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80237318: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x8023731C: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x80237320: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80237324: lb          $a0, 0x3($s0)
    ctx->r4 = MEM_B(ctx->r16, 0X3);
    // 0x80237328: sra         $v1, $v1, 25
    ctx->r3 = S32(SIGNED(ctx->r3) >> 25);
    // 0x8023732C: sltu        $v0, $v0, $a1
    ctx->r2 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x80237330: beq         $v0, $zero, L_80237348
    if (ctx->r2 == 0) {
        // 0x80237334: subu        $v1, $v1, $a0
        ctx->r3 = SUB32(ctx->r3, ctx->r4);
            goto L_80237348;
    }
    // 0x80237334: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80237338: lhu         $v0, 0x6($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6);
    // 0x8023733C: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80237340: bne         $v0, $zero, L_80237360
    if (ctx->r2 != 0) {
        // 0x80237344: addiu       $v0, $zero, 0x12
        ctx->r2 = ADD32(0, 0X12);
            goto L_80237360;
    }
    // 0x80237344: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
L_80237348:
    // 0x80237348: addiu       $a2, $a2, 0x3C8
    ctx->r6 = ADD32(ctx->r6, 0X3C8);
L_8023734C:
    // 0x8023734C: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80237350: slti        $v0, $t0, 0x12
    ctx->r2 = SIGNED(ctx->r8) < 0X12 ? 1 : 0;
    // 0x80237354: bne         $v0, $zero, L_802372F4
    if (ctx->r2 != 0) {
        // 0x80237358: addiu       $a3, $a3, 0x3C8
        ctx->r7 = ADD32(ctx->r7, 0X3C8);
            goto L_802372F4;
    }
    // 0x80237358: addiu       $a3, $a3, 0x3C8
    ctx->r7 = ADD32(ctx->r7, 0X3C8);
    // 0x8023735C: addiu       $v0, $zero, 0x12
    ctx->r2 = ADD32(0, 0X12);
L_80237360:
    // 0x80237360: bne         $t0, $v0, L_802373C4
    if (ctx->r8 != ctx->r2) {
        // 0x80237364: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_802373C4;
    }
    // 0x80237364: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80237368: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x8023736C: jal         0x8006033C
    // 0x80237370: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    func_8006033C_3B73C(rdram, ctx);
        goto after_7;
    // 0x80237370: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    after_7:
    // 0x80237374: bne         $v0, $zero, L_8023738C
    if (ctx->r2 != 0) {
        // 0x80237378: addu        $a0, $zero, $zero
        ctx->r4 = ADD32(0, 0);
            goto L_8023738C;
    }
    // 0x80237378: addu        $a0, $zero, $zero
    ctx->r4 = ADD32(0, 0);
    // 0x8023737C: lbu         $a1, 0x1($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1);
    // 0x80237380: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80237384: jal         0x800616FC
    // 0x80237388: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    func_800616FC_3CAFC(rdram, ctx);
        goto after_8;
    // 0x80237388: andi        $a1, $a1, 0xFF
    ctx->r5 = ctx->r5 & 0XFF;
    after_8:
L_8023738C:
    // 0x8023738C: jal         0x8006036C
    // 0x80237390: addiu       $a0, $zero, 0x61F
    ctx->r4 = ADD32(0, 0X61F);
    func_8006036C_3B76C(rdram, ctx);
        goto after_9;
    // 0x80237390: addiu       $a0, $zero, 0x61F
    ctx->r4 = ADD32(0, 0X61F);
    after_9:
    // 0x80237394: j           L_802373C4
    // 0x80237398: nop

        goto L_802373C4;
    // 0x80237398: nop

L_8023739C:
    // 0x8023739C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x802373A0: lw          $v0, 0x3FF0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X3FF0);
    // 0x802373A4: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x802373A8: beq         $v0, $zero, L_802373C0
    if (ctx->r2 == 0) {
        // 0x802373AC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802373C0;
    }
    // 0x802373AC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802373B0: jal         0x8006033C
    // 0x802373B4: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    func_8006033C_3B73C(rdram, ctx);
        goto after_10;
    // 0x802373B4: addiu       $a0, $zero, 0x622
    ctx->r4 = ADD32(0, 0X622);
    after_10:
    // 0x802373B8: beq         $v0, $zero, L_802373C4
    if (ctx->r2 == 0) {
        // 0x802373BC: addiu       $v0, $zero, 0x3
        ctx->r2 = ADD32(0, 0X3);
            goto L_802373C4;
    }
    // 0x802373BC: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
L_802373C0:
    // 0x802373C0: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_802373C4:
    // 0x802373C4: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x802373C8: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x802373CC: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802373D0: jr          $ra
    // 0x802373D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x802373D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80234580_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80234580: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80234584: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80234588: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x8023458C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80234590: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234594: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80234598: lw          $v0, -0xCC0($at)
    ctx->r2 = MEM_W(ctx->r1, -0XCC0);
    // 0x8023459C: jalr        $v0
    // 0x802345A0: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802345A0: nop

    after_0:
    // 0x802345A4: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802345A8: jr          $ra
    // 0x802345AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802345AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802265B0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802265B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802265B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802265B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x802265BC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x802265C0: bne         $v0, $zero, L_80226610
    if (ctx->r2 != 0) {
        // 0x802265C4: addiu       $a0, $sp, 0x10
        ctx->r4 = ADD32(ctx->r29, 0X10);
            goto L_80226610;
    }
    // 0x802265C4: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802265C8: addiu       $a1, $zero, 0x250
    ctx->r5 = ADD32(0, 0X250);
    // 0x802265CC: addiu       $a2, $zero, 0x50
    ctx->r6 = ADD32(0, 0X50);
    // 0x802265D0: addiu       $v0, $zero, 0x260
    ctx->r2 = ADD32(0, 0X260);
    // 0x802265D4: addiu       $s0, $zero, -0x1D70
    ctx->r16 = ADD32(0, -0X1D70);
    // 0x802265D8: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x802265DC: addiu       $v0, $zero, -0xF0
    ctx->r2 = ADD32(0, -0XF0);
    // 0x802265E0: sh          $s0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r16;
    // 0x802265E4: jal         0x8023A6A0
    // 0x802265E8: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_8023A6A0_ovl2(rdram, ctx);
        goto after_0;
    // 0x802265E8: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_0:
    // 0x802265EC: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x802265F0: addiu       $a1, $zero, 0x250
    ctx->r5 = ADD32(0, 0X250);
    // 0x802265F4: addiu       $a2, $zero, 0x8E0
    ctx->r6 = ADD32(0, 0X8E0);
    // 0x802265F8: addiu       $v0, $zero, 0x1D0
    ctx->r2 = ADD32(0, 0X1D0);
    // 0x802265FC: sh          $v0, 0x10($sp)
    MEM_H(0X10, ctx->r29) = ctx->r2;
    // 0x80226600: addiu       $v0, $zero, -0xB0
    ctx->r2 = ADD32(0, -0XB0);
    // 0x80226604: sh          $s0, 0x12($sp)
    MEM_H(0X12, ctx->r29) = ctx->r16;
    // 0x80226608: jal         0x8023A6A0
    // 0x8022660C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    func_8023A6A0_ovl2(rdram, ctx);
        goto after_1;
    // 0x8022660C: sh          $v0, 0x14($sp)
    MEM_H(0X14, ctx->r29) = ctx->r2;
    after_1:
L_80226610:
    // 0x80226610: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80226614: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80226618: jr          $ra
    // 0x8022661C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022661C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80235838_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235838: lb          $v1, 0xD($a0)
    ctx->r3 = MEM_B(ctx->r4, 0XD);
    // 0x8023583C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80235840: addiu       $v0, $zero, 0xA
    ctx->r2 = ADD32(0, 0XA);
    // 0x80235844: beq         $v1, $v0, L_80235858
    if (ctx->r3 == ctx->r2) {
        // 0x80235848: addu        $a1, $v1, $zero
        ctx->r5 = ADD32(ctx->r3, 0);
            goto L_80235858;
    }
    // 0x80235848: addu        $a1, $v1, $zero
    ctx->r5 = ADD32(ctx->r3, 0);
    // 0x8023584C: addiu       $v0, $a1, -0x1
    ctx->r2 = ADD32(ctx->r5, -0X1);
    // 0x80235850: j           L_80235860
    // 0x80235854: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
        goto L_80235860;
    // 0x80235854: sb          $v0, 0xD($a0)
    MEM_B(0XD, ctx->r4) = ctx->r2;
L_80235858:
    // 0x80235858: sb          $zero, 0x9($a0)
    MEM_B(0X9, ctx->r4) = 0;
    // 0x8023585C: sb          $zero, 0xC($a0)
    MEM_B(0XC, ctx->r4) = 0;
L_80235860:
    // 0x80235860: jr          $ra
    // 0x80235864: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    TRACE_RETURN()
    return;
    // 0x80235864: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8022CC60_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8022CC60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8022CC64: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022CC68: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022CC6C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8022CC70: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x8022CC74: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8022CC78: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x8022CC7C: lui         $s2, 0x8020
    ctx->r18 = S32(0X8020 << 16);
    // 0x8022CC80: addiu       $s2, $s2, 0x49B0
    ctx->r18 = ADD32(ctx->r18, 0X49B0);
    // 0x8022CC84: beq         $v1, $zero, L_8022CCA0
    if (ctx->r3 == 0) {
        // 0x8022CC88: addiu       $s1, $s0, 0x4E0
        ctx->r17 = ADD32(ctx->r16, 0X4E0);
            goto L_8022CCA0;
    }
    // 0x8022CC88: addiu       $s1, $s0, 0x4E0
    ctx->r17 = ADD32(ctx->r16, 0X4E0);
    // 0x8022CC8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CC90: beq         $v1, $v0, L_8022CD08
    if (ctx->r3 == ctx->r2) {
        // 0x8022CC94: nop
    
            goto L_8022CD08;
    }
    // 0x8022CC94: nop

    // 0x8022CC98: j           L_8022CD6C
    // 0x8022CC9C: nop

        goto L_8022CD6C;
    // 0x8022CC9C: nop

L_8022CCA0:
    // 0x8022CCA0: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    // 0x8022CCA4: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    // 0x8022CCA8: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022CCAC: addiu       $a3, $zero, 0x800
    ctx->r7 = ADD32(0, 0X800);
    // 0x8022CCB0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022CCB4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x8022CCB8: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x8022CCBC: jal         0x8004F820
    // 0x8022CCC0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_8004F820_2AC20(rdram, ctx);
        goto after_0;
    // 0x8022CCC0: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x8022CCC4: lui         $a0, 0x2AAA
    ctx->r4 = S32(0X2AAA << 16);
    // 0x8022CCC8: ori         $a0, $a0, 0xAAAB
    ctx->r4 = ctx->r4 | 0XAAAB;
    // 0x8022CCCC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CCD0: sra         $v1, $v0, 16
    ctx->r3 = S32(SIGNED(ctx->r2) >> 16);
    // 0x8022CCD4: mult        $v1, $a0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8022CCD8: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x8022CCDC: sra         $v0, $v0, 31
    ctx->r2 = S32(SIGNED(ctx->r2) >> 31);
    // 0x8022CCE0: sh          $v1, 0x4E4($s0)
    MEM_H(0X4E4, ctx->r16) = ctx->r3;
    // 0x8022CCE4: sh          $zero, 0x4E8($s0)
    MEM_H(0X4E8, ctx->r16) = 0;
    // 0x8022CCE8: mfhi        $t0
    ctx->r8 = hi;
    // 0x8022CCEC: sra         $v1, $t0, 1
    ctx->r3 = S32(SIGNED(ctx->r8) >> 1);
    // 0x8022CCF0: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x8022CCF4: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x8022CCF8: sra         $v1, $v1, 16
    ctx->r3 = S32(SIGNED(ctx->r3) >> 16);
    // 0x8022CCFC: bltzl       $v1, L_8022CD04
    if (SIGNED(ctx->r3) < 0) {
        // 0x8022CD00: negu        $v1, $v1
        ctx->r3 = SUB32(0, ctx->r3);
            goto L_8022CD04;
    }
    goto skip_0;
    // 0x8022CD00: negu        $v1, $v1
    ctx->r3 = SUB32(0, ctx->r3);
    skip_0:
L_8022CD04:
    // 0x8022CD04: sh          $v1, 0x66($s0)
    MEM_H(0X66, ctx->r16) = ctx->r3;
L_8022CD08:
    // 0x8022CD08: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x8022CD0C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8022CD10: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x8022CD14: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x8022CD18: bgtz        $v0, L_8022CD2C
    if (SIGNED(ctx->r2) > 0) {
        // 0x8022CD1C: nop
    
            goto L_8022CD2C;
    }
    // 0x8022CD1C: nop

    // 0x8022CD20: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x8022CD24: ori         $v0, $v0, 0x1
    ctx->r2 = ctx->r2 | 0X1;
    // 0x8022CD28: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_8022CD2C:
    // 0x8022CD2C: lh          $a2, 0x56($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X56);
    // 0x8022CD30: lh          $a3, 0x66($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X66);
    // 0x8022CD34: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x8022CD38: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x8022CD3C: jal         0x8004F820
    // 0x8022CD40: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    func_8004F820_2AC20(rdram, ctx);
        goto after_1;
    // 0x8022CD40: addiu       $a1, $s2, 0x14
    ctx->r5 = ADD32(ctx->r18, 0X14);
    after_1:
    // 0x8022CD44: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x8022CD48: lbu         $a0, 0xA4($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0XA4);
    // 0x8022CD4C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8022CD50: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x8022CD54: andi        $a0, $a0, 0x1
    ctx->r4 = ctx->r4 & 0X1;
    // 0x8022CD58: beq         $a0, $zero, L_8022CD6C
    if (ctx->r4 == 0) {
        // 0x8022CD5C: sh          $v1, 0x56($s0)
        MEM_H(0X56, ctx->r16) = ctx->r3;
            goto L_8022CD6C;
    }
    // 0x8022CD5C: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
    // 0x8022CD60: addiu       $a0, $zero, 0xC8
    ctx->r4 = ADD32(0, 0XC8);
    // 0x8022CD64: jal         0x8002A33C
    // 0x8022CD68: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_2;
    // 0x8022CD68: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_2:
L_8022CD6C:
    // 0x8022CD6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8022CD70: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x8022CD74: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8022CD78: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8022CD7C: jr          $ra
    // 0x8022CD80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x8022CD80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80229114_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229114: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80229118: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8022911C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229120: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80229124: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80229128: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022912C: sh          $zero, 0x54($s0)
    MEM_H(0X54, ctx->r16) = 0;
    // 0x80229130: sh          $zero, 0x58($s0)
    MEM_H(0X58, ctx->r16) = 0;
    // 0x80229134: sw          $zero, 0x64($s0)
    MEM_W(0X64, ctx->r16) = 0;
    // 0x80229138: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x8022913C: jal         0x8004D5D4
    // 0x80229140: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    func_8004D5D4_289D4(rdram, ctx);
        goto after_0;
    // 0x80229140: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    after_0:
    // 0x80229144: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x80229148: sw          $zero, 0x34C($s0)
    MEM_W(0X34C, ctx->r16) = 0;
    // 0x8022914C: sw          $zero, 0x350($s0)
    MEM_W(0X350, ctx->r16) = 0;
    // 0x80229150: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80229154: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x80229158: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x8022915C: sh          $v0, 0x15C($s0)
    MEM_H(0X15C, ctx->r16) = ctx->r2;
    // 0x80229160: sh          $v0, 0x15A($s0)
    MEM_H(0X15A, ctx->r16) = ctx->r2;
    // 0x80229164: sh          $v0, 0x158($s0)
    MEM_H(0X158, ctx->r16) = ctx->r2;
    // 0x80229168: addiu       $v0, $zero, 0xE
    ctx->r2 = ADD32(0, 0XE);
    // 0x8022916C: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
    // 0x80229170: sw          $zero, 0x35C($s0)
    MEM_W(0X35C, ctx->r16) = 0;
    // 0x80229174: sw          $zero, 0x360($s0)
    MEM_W(0X360, ctx->r16) = 0;
    // 0x80229178: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x8022917C: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80229180: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x80229184: lbu         $a1, 0xF($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0XF);
    // 0x80229188: addiu       $a2, $zero, -0x60
    ctx->r6 = ADD32(0, -0X60);
    // 0x8022918C: jal         0x800540BC
    // 0x80229190: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    func_800540BC_2F4BC(rdram, ctx);
        goto after_1;
    // 0x80229190: addiu       $a0, $s0, 0x36C
    ctx->r4 = ADD32(ctx->r16, 0X36C);
    after_1:
    // 0x80229194: lhu         $a0, 0x1A($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X1A);
    // 0x80229198: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x8022919C: lui         $a1, 0x8021
    ctx->r5 = S32(0X8021 << 16);
    // 0x802291A0: lw          $a1, 0x298($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X298);
    // 0x802291A4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x802291A8: sh          $zero, 0x1A($s0)
    MEM_H(0X1A, ctx->r16) = 0;
    // 0x802291AC: sh          $v0, 0x37E($s0)
    MEM_H(0X37E, ctx->r16) = ctx->r2;
    // 0x802291B0: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802291B4: addu        $v1, $v1, $a1
    ctx->r3 = ADD32(ctx->r3, ctx->r5);
    // 0x802291B8: sh          $a0, 0x37C($s0)
    MEM_H(0X37C, ctx->r16) = ctx->r4;
    // 0x802291BC: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x802291C0: lbu         $a0, 0x3($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X3);
    // 0x802291C4: lbu         $v1, 0x8($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X8);
    // 0x802291C8: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802291CC: addiu       $v0, $v0, -0x16DC
    ctx->r2 = ADD32(ctx->r2, -0X16DC);
    // 0x802291D0: sw          $v0, 0x78($s0)
    MEM_W(0X78, ctx->r16) = ctx->r2;
    // 0x802291D4: sw          $zero, 0x10($s0)
    MEM_W(0X10, ctx->r16) = 0;
    // 0x802291D8: sh          $v1, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r3;
    // 0x802291DC: sh          $v1, 0xB0($s0)
    MEM_H(0XB0, ctx->r16) = ctx->r3;
    // 0x802291E0: beq         $a0, $zero, L_802291FC
    if (ctx->r4 == 0) {
        // 0x802291E4: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_802291FC;
    }
    // 0x802291E4: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x802291E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802291EC: beq         $a0, $v0, L_80229238
    if (ctx->r4 == ctx->r2) {
        // 0x802291F0: nop
    
            goto L_80229238;
    }
    // 0x802291F0: nop

    // 0x802291F4: j           L_80229294
    // 0x802291F8: nop

        goto L_80229294;
    // 0x802291F8: nop

L_802291FC:
    // 0x802291FC: jal         0x8003E934
    // 0x80229200: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_2;
    // 0x80229200: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_2:
    // 0x80229204: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229208: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x8022920C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229210: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x80229214: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229218: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x8022921C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229220: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80229224: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x80229228: jal         0x80050294
    // 0x8022922C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_3;
    // 0x8022922C: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_3:
    // 0x80229230: j           L_802292D0
    // 0x80229234: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
        goto L_802292D0;
    // 0x80229234: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
L_80229238:
    // 0x80229238: lhu         $a0, 0x37C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X37C);
    // 0x8022923C: jal         0x8006033C
    // 0x80229240: nop

    func_8006033C_3B73C(rdram, ctx);
        goto after_4;
    // 0x80229240: nop

    after_4:
    // 0x80229244: bne         $v0, $zero, L_80229294
    if (ctx->r2 != 0) {
        // 0x80229248: addu        $a0, $s0, $zero
        ctx->r4 = ADD32(ctx->r16, 0);
            goto L_80229294;
    }
    // 0x80229248: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x8022924C: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x80229250: lbu         $v1, 0x0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X0);
    // 0x80229254: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80229258: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8022925C: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x80229260: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229264: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80229268: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x8022926C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229270: sb          $zero, 0xB($s0)
    MEM_B(0XB, ctx->r16) = 0;
    // 0x80229274: andi        $v1, $v1, 0xFD
    ctx->r3 = ctx->r3 & 0XFD;
    // 0x80229278: jal         0x80050294
    // 0x8022927C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x8022927C: sb          $v1, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r3;
    after_5:
    // 0x80229280: lhu         $v0, 0x348($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X348);
    // 0x80229284: ori         $v0, $v0, 0x40
    ctx->r2 = ctx->r2 | 0X40;
    // 0x80229288: andi        $v0, $v0, 0xFFF9
    ctx->r2 = ctx->r2 & 0XFFF9;
    // 0x8022928C: j           L_802292CC
    // 0x80229290: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
        goto L_802292CC;
    // 0x80229290: sh          $v0, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r2;
L_80229294:
    // 0x80229294: jal         0x8003E934
    // 0x80229298: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    func_8003E934_19D34(rdram, ctx);
        goto after_6;
    // 0x80229298: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    after_6:
    // 0x8022929C: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802292A0: addu        $a1, $zero, $zero
    ctx->r5 = ADD32(0, 0);
    // 0x802292A4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802292A8: sh          $v0, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r2;
    // 0x802292AC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802292B0: sw          $v0, 0x20($s0)
    MEM_W(0X20, ctx->r16) = ctx->r2;
    // 0x802292B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802292B8: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
    // 0x802292BC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x802292C0: jal         0x80050294
    // 0x802292C4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    func_80050294_2B694(rdram, ctx);
        goto after_7;
    // 0x802292C4: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    after_7:
    // 0x802292C8: sh          $zero, 0x66($s0)
    MEM_H(0X66, ctx->r16) = 0;
L_802292CC:
    // 0x802292CC: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
L_802292D0:
    // 0x802292D0: sh          $v0, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r2;
    // 0x802292D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802292D8: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x802292DC: jr          $ra
    // 0x802292E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802292E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80226B60_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80226B60: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80226B64: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
    // 0x80226B68: bne         $v1, $v0, L_80226B80
    if (ctx->r3 != ctx->r2) {
        // 0x80226B6C: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80226B80;
    }
    // 0x80226B6C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80226B70: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80226B74: sb          $v1, 0x9($v0)
    MEM_B(0X9, ctx->r2) = ctx->r3;
    // 0x80226B78: lw          $v0, 0x28($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X28);
    // 0x80226B7C: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80226B80:
    // 0x80226B80: jr          $ra
    // 0x80226B84: nop

    TRACE_RETURN()
    return;
    // 0x80226B84: nop

;}
RECOMP_FUNC void func_80235EF8_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80235EF8: lw          $v0, 0x44($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X44);
    // 0x80235EFC: lui         $v1, 0x1
    ctx->r3 = S32(0X1 << 16);
    // 0x80235F00: ori         $v1, $v1, 0x999A
    ctx->r3 = ctx->r3 | 0X999A;
    // 0x80235F04: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80235F08: jr          $ra
    // 0x80235F0C: sw          $v0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r2;
    TRACE_RETURN()
    return;
    // 0x80235F0C: sw          $v0, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_80238BAC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80238BAC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80238BB0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80238BB4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80238BB8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80238BBC: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80238BC0: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80238BC4: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80238BC8: andi        $v0, $v0, 0xFF
    ctx->r2 = ctx->r2 & 0XFF;
    // 0x80238BCC: sltiu       $v0, $v0, 0x40
    ctx->r2 = ctx->r2 < 0X40 ? 1 : 0;
    // 0x80238BD0: beql        $v0, $zero, L_80238BD8
    if (ctx->r2 == 0) {
        // 0x80238BD4: sb          $zero, 0xA($s0)
        MEM_B(0XA, ctx->r16) = 0;
            goto L_80238BD8;
    }
    goto skip_0;
    // 0x80238BD4: sb          $zero, 0xA($s0)
    MEM_B(0XA, ctx->r16) = 0;
    skip_0:
L_80238BD8:
    // 0x80238BD8: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80238BDC: lw          $v0, 0x4C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4C);
    // 0x80238BE0: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    // 0x80238BE4: sb          $zero, 0x49($s0)
    MEM_B(0X49, ctx->r16) = 0;
    // 0x80238BE8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238BEC: sb          $v1, 0x48($s0)
    MEM_B(0X48, ctx->r16) = ctx->r3;
    // 0x80238BF0: jal         0x8006033C
    // 0x80238BF4: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80238BF4: sw          $v0, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->r2;
    after_0:
    // 0x80238BF8: bne         $v0, $zero, L_80238C10
    if (ctx->r2 != 0) {
        // 0x80238BFC: nop
    
            goto L_80238C10;
    }
    // 0x80238BFC: nop

    // 0x80238C00: jal         0x8006033C
    // 0x80238C04: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006033C_3B73C(rdram, ctx);
        goto after_1;
    // 0x80238C04: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_1:
    // 0x80238C08: beq         $v0, $zero, L_80238CC4
    if (ctx->r2 == 0) {
        // 0x80238C0C: nop
    
            goto L_80238CC4;
    }
    // 0x80238C0C: nop

L_80238C10:
    // 0x80238C10: jal         0x8006033C
    // 0x80238C14: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    func_8006033C_3B73C(rdram, ctx);
        goto after_2;
    // 0x80238C14: addiu       $a0, $zero, 0x608
    ctx->r4 = ADD32(0, 0X608);
    after_2:
    // 0x80238C18: beq         $v0, $zero, L_80238C74
    if (ctx->r2 == 0) {
        // 0x80238C1C: nop
    
            goto L_80238C74;
    }
    // 0x80238C1C: nop

    // 0x80238C20: jal         0x8006033C
    // 0x80238C24: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    func_8006033C_3B73C(rdram, ctx);
        goto after_3;
    // 0x80238C24: addiu       $a0, $zero, 0x609
    ctx->r4 = ADD32(0, 0X609);
    after_3:
    // 0x80238C28: beq         $v0, $zero, L_80238C74
    if (ctx->r2 == 0) {
        // 0x80238C2C: nop
    
            goto L_80238C74;
    }
    // 0x80238C2C: nop

    // 0x80238C30: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80238C34: andi        $v0, $v0, 0x4F
    ctx->r2 = ctx->r2 & 0X4F;
    // 0x80238C38: beq         $v0, $zero, L_80238C60
    if (ctx->r2 == 0) {
        // 0x80238C3C: nop
    
            goto L_80238C60;
    }
    // 0x80238C3C: nop

    // 0x80238C40: lw          $v0, 0x44($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X44);
    // 0x80238C44: lw          $a0, 0x2C($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X2C);
    // 0x80238C48: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80238C4C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80238C50: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80238C54: lui         $at, 0x801B
    ctx->r1 = S32(0X801B << 16);
    // 0x80238C58: addu        $at, $at, $v1
    ctx->r1 = ADD32(ctx->r1, ctx->r3);
    // 0x80238C5C: sw          $a0, 0x5088($at)
    MEM_W(0X5088, ctx->r1) = ctx->r4;
L_80238C60:
    // 0x80238C60: lbu         $v0, 0x8($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X8);
    // 0x80238C64: addiu       $v1, $zero, 0x8
    ctx->r3 = ADD32(0, 0X8);
    // 0x80238C68: sb          $v1, 0xB($s0)
    MEM_B(0XB, ctx->r16) = ctx->r3;
    // 0x80238C6C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80238C70: sb          $v0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r2;
L_80238C74:
    // 0x80238C74: jal         0x800A3450
    // 0x80238C78: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_4;
    // 0x80238C78: nop

    after_4:
    // 0x80238C7C: andi        $v0, $v0, 0x1F
    ctx->r2 = ctx->r2 & 0X1F;
    // 0x80238C80: addiu       $a1, $v0, 0x10
    ctx->r5 = ADD32(ctx->r2, 0X10);
    // 0x80238C84: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x80238C88: sll         $v0, $a1, 8
    ctx->r2 = S32(ctx->r5 << 8);
    // 0x80238C8C: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80238C90: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80238C94: lw          $v1, 0x4C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4C);
    // 0x80238C98: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80238C9C: or          $a0, $a0, $a1
    ctx->r4 = ctx->r4 | ctx->r5;
    // 0x80238CA0: sltiu       $v1, $v1, 0x1F
    ctx->r3 = ctx->r3 < 0X1F ? 1 : 0;
    // 0x80238CA4: bne         $v1, $zero, L_80238D18
    if (ctx->r3 != 0) {
        // 0x80238CA8: sw          $a0, 0x40($s0)
        MEM_W(0X40, ctx->r16) = ctx->r4;
            goto L_80238D18;
    }
    // 0x80238CA8: sw          $a0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r4;
    // 0x80238CAC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80238CB0: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80238CB4: beq         $v0, $zero, L_80238D18
    if (ctx->r2 == 0) {
        // 0x80238CB8: addiu       $a0, $zero, 0x11B
        ctx->r4 = ADD32(0, 0X11B);
            goto L_80238D18;
    }
    // 0x80238CB8: addiu       $a0, $zero, 0x11B
    ctx->r4 = ADD32(0, 0X11B);
    // 0x80238CBC: j           L_80238D0C
    // 0x80238CC0: nop

        goto L_80238D0C;
    // 0x80238CC0: nop

L_80238CC4:
    // 0x80238CC4: jal         0x800A3450
    // 0x80238CC8: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_5;
    // 0x80238CC8: nop

    after_5:
    // 0x80238CCC: andi        $v0, $v0, 0x3F
    ctx->r2 = ctx->r2 & 0X3F;
    // 0x80238CD0: addiu       $a1, $v0, 0x40
    ctx->r5 = ADD32(ctx->r2, 0X40);
    // 0x80238CD4: sll         $a0, $a1, 16
    ctx->r4 = S32(ctx->r5 << 16);
    // 0x80238CD8: sll         $v0, $a1, 8
    ctx->r2 = S32(ctx->r5 << 8);
    // 0x80238CDC: lui         $v1, 0x200
    ctx->r3 = S32(0X200 << 16);
    // 0x80238CE0: or          $v0, $v0, $v1
    ctx->r2 = ctx->r2 | ctx->r3;
    // 0x80238CE4: lw          $v1, 0x4C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X4C);
    // 0x80238CE8: or          $a0, $a0, $v0
    ctx->r4 = ctx->r4 | ctx->r2;
    // 0x80238CEC: or          $a0, $a0, $a1
    ctx->r4 = ctx->r4 | ctx->r5;
    // 0x80238CF0: sltiu       $v1, $v1, 0x19
    ctx->r3 = ctx->r3 < 0X19 ? 1 : 0;
    // 0x80238CF4: bne         $v1, $zero, L_80238D18
    if (ctx->r3 != 0) {
        // 0x80238CF8: sw          $a0, 0x40($s0)
        MEM_W(0X40, ctx->r16) = ctx->r4;
            goto L_80238D18;
    }
    // 0x80238CF8: sw          $a0, 0x40($s0)
    MEM_W(0X40, ctx->r16) = ctx->r4;
    // 0x80238CFC: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80238D00: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80238D04: beq         $v0, $zero, L_80238D18
    if (ctx->r2 == 0) {
        // 0x80238D08: addiu       $a0, $zero, 0x11A
        ctx->r4 = ADD32(0, 0X11A);
            goto L_80238D18;
    }
    // 0x80238D08: addiu       $a0, $zero, 0x11A
    ctx->r4 = ADD32(0, 0X11A);
L_80238D0C:
    // 0x80238D0C: jal         0x8002A33C
    // 0x80238D10: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    func_8002A33C_573C(rdram, ctx);
        goto after_6;
    // 0x80238D10: addiu       $a1, $s0, 0x38
    ctx->r5 = ADD32(ctx->r16, 0X38);
    after_6:
    // 0x80238D14: sw          $zero, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = 0;
L_80238D18:
    // 0x80238D18: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80238D1C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80238D20: jr          $ra
    // 0x80238D24: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    TRACE_RETURN()
    return;
    // 0x80238D24: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_802366B4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802366B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802366B8: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x802366BC: lbu         $v0, 0xA($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0XA);
    // 0x802366C0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802366C4: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802366C8: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802366CC: lw          $v0, -0xB20($at)
    ctx->r2 = MEM_W(ctx->r1, -0XB20);
    // 0x802366D0: jalr        $v0
    // 0x802366D4: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802366D4: nop

    after_0:
    // 0x802366D8: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x802366DC: jr          $ra
    // 0x802366E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802366E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_802357C4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802357C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802357C8: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802357CC: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x802357D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802357D4: lbu         $v0, 0x9($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X9);
    // 0x802357D8: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x802357DC: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x802357E0: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x802357E4: lw          $v0, -0xC74($at)
    ctx->r2 = MEM_W(ctx->r1, -0XC74);
    // 0x802357E8: jalr        $v0
    // 0x802357EC: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x802357EC: nop

    after_0:
    // 0x802357F0: lb          $v1, 0xD($s0)
    ctx->r3 = MEM_B(ctx->r16, 0XD);
    // 0x802357F4: lui         $v0, 0x51EB
    ctx->r2 = S32(0X51EB << 16);
    // 0x802357F8: ori         $v0, $v0, 0x851F
    ctx->r2 = ctx->r2 | 0X851F;
    // 0x802357FC: sll         $v1, $v1, 12
    ctx->r3 = S32(ctx->r3 << 12);
    // 0x80235800: mult        $v1, $v0
    result = S64(S32(ctx->r3)) * S64(S32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80235804: sra         $v1, $v1, 31
    ctx->r3 = S32(SIGNED(ctx->r3) >> 31);
    // 0x80235808: mfhi        $a1
    ctx->r5 = hi;
    // 0x8023580C: sra         $v0, $a1, 5
    ctx->r2 = S32(SIGNED(ctx->r5) >> 5);
    // 0x80235810: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80235814: sh          $v0, 0x18($s0)
    MEM_H(0X18, ctx->r16) = ctx->r2;
    // 0x80235818: sh          $v0, 0x28($s0)
    MEM_H(0X28, ctx->r16) = ctx->r2;
    // 0x8023581C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80235820: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80235824: jr          $ra
    // 0x80235828: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80235828: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231A68_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231A68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231A6C: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231A70: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231A74: addiu       $v0, $zero, 0x1A
    ctx->r2 = ADD32(0, 0X1A);
    // 0x80231A78: addiu       $a1, $zero, 0x1A
    ctx->r5 = ADD32(0, 0X1A);
    // 0x80231A7C: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x80231A80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80231A84: jal         0x80050294
    // 0x80231A88: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80231A88: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    after_0:
    // 0x80231A8C: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x80231A90: addiu       $v1, $zero, 0x2C
    ctx->r3 = ADD32(0, 0X2C);
    // 0x80231A94: sb          $v1, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r3;
    // 0x80231A98: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80231A9C: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80231AA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80231AA4: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80231AA8: jr          $ra
    // 0x80231AAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80231AAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229488_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229488: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8022948C: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80229490: jal         0x8004F418
    // 0x80229494: nop

    func_8004F418_2A818(rdram, ctx);
        goto after_0;
    // 0x80229494: nop

    after_0:
    // 0x80229498: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8022949C: jr          $ra
    // 0x802294A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x802294A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80231FEC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80231FEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80231FF0: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80231FF4: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80231FF8: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80231FFC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80232000: jal         0x80050294
    // 0x80232004: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_0;
    // 0x80232004: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_0:
    // 0x80232008: lbu         $v0, 0xA($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0XA);
    // 0x8023200C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80232010: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80232014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80232018: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x8023201C: jr          $ra
    // 0x80232020: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80232020: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80229C74_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80229C74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80229C78: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80229C7C: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x80229C80: sw          $ra, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r31;
    // 0x80229C84: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80229C88: lbu         $v1, 0xA($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0XA);
    // 0x80229C8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229C90: beq         $v1, $v0, L_80229DCC
    if (ctx->r3 == ctx->r2) {
        // 0x80229C94: addiu       $s1, $s0, 0x348
        ctx->r17 = ADD32(ctx->r16, 0X348);
            goto L_80229DCC;
    }
    // 0x80229C94: addiu       $s1, $s0, 0x348
    ctx->r17 = ADD32(ctx->r16, 0X348);
    // 0x80229C98: slti        $v0, $v1, 0x2
    ctx->r2 = SIGNED(ctx->r3) < 0X2 ? 1 : 0;
    // 0x80229C9C: beql        $v0, $zero, L_80229CB4
    if (ctx->r2 == 0) {
        // 0x80229CA0: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229CB4;
    }
    goto skip_0;
    // 0x80229CA0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    skip_0:
    // 0x80229CA4: beq         $v1, $zero, L_80229CF0
    if (ctx->r3 == 0) {
        // 0x80229CA8: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229CF0;
    }
    // 0x80229CA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229CAC: j           L_80229E64
    // 0x80229CB0: nop

        goto L_80229E64;
    // 0x80229CB0: nop

L_80229CB4:
    // 0x80229CB4: beq         $v1, $v0, L_80229D98
    if (ctx->r3 == ctx->r2) {
        // 0x80229CB8: addiu       $v0, $zero, 0xFF
        ctx->r2 = ADD32(0, 0XFF);
            goto L_80229D98;
    }
    // 0x80229CB8: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x80229CBC: bne         $v1, $v0, L_80229E64
    if (ctx->r3 != ctx->r2) {
        // 0x80229CC0: nop
    
            goto L_80229E64;
    }
    // 0x80229CC0: nop

    // 0x80229CC4: jal         0x8006033C
    // 0x80229CC8: lhu         $a0, 0x37C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X37C);
    func_8006033C_3B73C(rdram, ctx);
        goto after_0;
    // 0x80229CC8: lhu         $a0, 0x37C($s0)
    ctx->r4 = MEM_HU(ctx->r16, 0X37C);
    after_0:
    // 0x80229CCC: beq         $v0, $zero, L_80229E64
    if (ctx->r2 == 0) {
        // 0x80229CD0: nop
    
            goto L_80229E64;
    }
    // 0x80229CD0: nop

    // 0x80229CD4: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80229CD8: lhu         $v1, 0x348($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X348);
    // 0x80229CDC: ori         $v0, $v0, 0x2
    ctx->r2 = ctx->r2 | 0X2;
    // 0x80229CE0: ori         $v1, $v1, 0x6
    ctx->r3 = ctx->r3 | 0X6;
    // 0x80229CE4: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x80229CE8: sh          $v1, 0x348($s0)
    MEM_H(0X348, ctx->r16) = ctx->r3;
    // 0x80229CEC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80229CF0:
    // 0x80229CF0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229CF4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x80229CF8: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229CFC: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229D00: andi        $v0, $v0, 0x40
    ctx->r2 = ctx->r2 & 0X40;
    // 0x80229D04: beq         $v0, $zero, L_80229D5C
    if (ctx->r2 == 0) {
        // 0x80229D08: addiu       $v0, $zero, 0x200
        ctx->r2 = ADD32(0, 0X200);
            goto L_80229D5C;
    }
    // 0x80229D08: addiu       $v0, $zero, 0x200
    ctx->r2 = ADD32(0, 0X200);
    // 0x80229D0C: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x80229D10: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x80229D14: sll         $v0, $v0, 7
    ctx->r2 = S32(ctx->r2 << 7);
    // 0x80229D18: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80229D1C: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x80229D20: andi        $v0, $v0, 0x30
    ctx->r2 = ctx->r2 & 0X30;
    // 0x80229D24: negu        $v0, $v0
    ctx->r2 = SUB32(0, ctx->r2);
    // 0x80229D28: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229D2C: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80229D30: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80229D34: lhu         $v0, 0x2($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X2);
    // 0x80229D38: srl         $v0, $v0, 3
    ctx->r2 = S32(U32(ctx->r2) >> 3);
    // 0x80229D3C: andi        $v0, $v0, 0x6
    ctx->r2 = ctx->r2 & 0X6;
    // 0x80229D40: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229D44: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x80229D48: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x80229D4C: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229D50: andi        $v0, $v0, 0xFFBF
    ctx->r2 = ctx->r2 & 0XFFBF;
    // 0x80229D54: j           L_80229D7C
    // 0x80229D58: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
        goto L_80229D7C;
    // 0x80229D58: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80229D5C:
    // 0x80229D5C: lhu         $v1, 0x56($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X56);
    // 0x80229D60: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80229D64: addiu       $v0, $zero, -0x100
    ctx->r2 = ADD32(0, -0X100);
    // 0x80229D68: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80229D6C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80229D70: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
    // 0x80229D74: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80229D78: sh          $v1, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r3;
L_80229D7C:
    // 0x80229D7C: lhu         $v1, 0x0($s1)
    ctx->r3 = MEM_HU(ctx->r17, 0X0);
    // 0x80229D80: addiu       $v0, $zero, 0x10
    ctx->r2 = ADD32(0, 0X10);
    // 0x80229D84: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80229D88: sh          $zero, 0x6($s1)
    MEM_H(0X6, ctx->r17) = 0;
    // 0x80229D8C: sh          $zero, 0x8($s1)
    MEM_H(0X8, ctx->r17) = 0;
    // 0x80229D90: andi        $v1, $v1, 0xFFD7
    ctx->r3 = ctx->r3 & 0XFFD7;
    // 0x80229D94: sh          $v1, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r3;
L_80229D98:
    // 0x80229D98: lhu         $v0, 0x4($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X4);
    // 0x80229D9C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x80229DA0: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
    // 0x80229DA4: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229DA8: bgez        $v0, L_80229DCC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80229DAC: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_80229DCC;
    }
    // 0x80229DAC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80229DB0: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229DB4: addiu       $v0, $zero, 0x88
    ctx->r2 = ADD32(0, 0X88);
    // 0x80229DB8: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80229DBC: addiu       $v0, $zero, -0xF0
    ctx->r2 = ADD32(0, -0XF0);
    // 0x80229DC0: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    // 0x80229DC4: addiu       $v0, $zero, 0x30
    ctx->r2 = ADD32(0, 0X30);
    // 0x80229DC8: sh          $v0, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = ctx->r2;
L_80229DCC:
    // 0x80229DCC: lh          $a1, 0x44($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X44);
    // 0x80229DD0: lh          $a2, 0x46($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X46);
    // 0x80229DD4: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229DD8: jal         0x8004DA90
    // 0x80229DDC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8004DA90_28E90(rdram, ctx);
        goto after_1;
    // 0x80229DDC: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_1:
    // 0x80229DE0: lhu         $v0, 0x46($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X46);
    // 0x80229DE4: lhu         $v1, 0x4E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X4E);
    // 0x80229DE8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x80229DEC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229DF0: jal         0x80040F30
    // 0x80229DF4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    func_80040F30_1C330(rdram, ctx);
        goto after_2;
    // 0x80229DF4: sh          $v0, 0x46($s0)
    MEM_H(0X46, ctx->r16) = ctx->r2;
    after_2:
    // 0x80229DF8: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x80229DFC: andi        $v0, $v1, 0xF00
    ctx->r2 = ctx->r3 & 0XF00;
    // 0x80229E00: bnel        $v0, $zero, L_80229E08
    if (ctx->r2 != 0) {
        // 0x80229E04: sh          $zero, 0x44($s0)
        MEM_H(0X44, ctx->r16) = 0;
            goto L_80229E08;
    }
    goto skip_1;
    // 0x80229E04: sh          $zero, 0x44($s0)
    MEM_H(0X44, ctx->r16) = 0;
    skip_1:
L_80229E08:
    // 0x80229E08: andi        $v0, $v1, 0x1000
    ctx->r2 = ctx->r3 & 0X1000;
    // 0x80229E0C: beq         $v0, $zero, L_80229E64
    if (ctx->r2 == 0) {
        // 0x80229E10: addiu       $v1, $zero, 0x1
        ctx->r3 = ADD32(0, 0X1);
            goto L_80229E64;
    }
    // 0x80229E10: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
    // 0x80229E14: lhu         $v0, 0x6($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X6);
    // 0x80229E18: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80229E1C: sh          $v0, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r2;
    // 0x80229E20: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80229E24: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80229E28: bne         $v0, $v1, L_80229E58
    if (ctx->r2 != ctx->r3) {
        // 0x80229E2C: addiu       $v0, $zero, 0x2
        ctx->r2 = ADD32(0, 0X2);
            goto L_80229E58;
    }
    // 0x80229E2C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229E30: sb          $v0, 0xA($s0)
    MEM_B(0XA, ctx->r16) = ctx->r2;
    // 0x80229E34: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80229E38: sb          $v0, 0xAC($s0)
    MEM_B(0XAC, ctx->r16) = ctx->r2;
    // 0x80229E3C: addiu       $v0, $zero, 0xF0
    ctx->r2 = ADD32(0, 0XF0);
    // 0x80229E40: sh          $v0, 0x44($s0)
    MEM_H(0X44, ctx->r16) = ctx->r2;
    // 0x80229E44: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x80229E48: sh          $zero, 0x46($s0)
    MEM_H(0X46, ctx->r16) = 0;
    // 0x80229E4C: sh          $zero, 0x4E($s0)
    MEM_H(0X4E, ctx->r16) = 0;
    // 0x80229E50: j           L_80229E64
    // 0x80229E54: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
        goto L_80229E64;
    // 0x80229E54: sh          $v0, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r2;
L_80229E58:
    // 0x80229E58: lhu         $v0, 0x0($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X0);
    // 0x80229E5C: ori         $v0, $v0, 0x9
    ctx->r2 = ctx->r2 | 0X9;
    // 0x80229E60: sh          $v0, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r2;
L_80229E64:
    // 0x80229E64: lw          $ra, 0x18($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X18);
    // 0x80229E68: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80229E6C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80229E70: jr          $ra
    // 0x80229E74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80229E74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80225BBC_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225BBC: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225BC0: bne         $v0, $zero, L_80225BD8
    if (ctx->r2 != 0) {
        // 0x80225BC4: nop
    
            goto L_80225BD8;
    }
    // 0x80225BC4: nop

    // 0x80225BC8: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80225BCC: sb          $zero, 0x9($v0)
    MEM_B(0X9, ctx->r2) = 0;
    // 0x80225BD0: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
    // 0x80225BD4: sb          $zero, 0xA($v0)
    MEM_B(0XA, ctx->r2) = 0;
L_80225BD8:
    // 0x80225BD8: jr          $ra
    // 0x80225BDC: nop

    TRACE_RETURN()
    return;
    // 0x80225BDC: nop

;}
RECOMP_FUNC void func_80228970_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228970: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80228974: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x80228978: addu        $s0, $a0, $zero
    ctx->r16 = ADD32(ctx->r4, 0);
    // 0x8022897C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80228980: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80228984: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x80228988: lw          $v1, 0x33C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X33C);
    // 0x8022898C: lui         $v0, 0xFF
    ctx->r2 = S32(0XFF << 16);
    // 0x80228990: ori         $v0, $v0, 0xFFFF
    ctx->r2 = ctx->r2 | 0XFFFF;
    // 0x80228994: and         $a0, $v1, $v0
    ctx->r4 = ctx->r3 & ctx->r2;
    // 0x80228998: beq         $a0, $zero, L_80228BF4
    if (ctx->r4 == 0) {
        // 0x8022899C: addiu       $s2, $s0, 0x328
        ctx->r18 = ADD32(ctx->r16, 0X328);
            goto L_80228BF4;
    }
    // 0x8022899C: addiu       $s2, $s0, 0x328
    ctx->r18 = ADD32(ctx->r16, 0X328);
    // 0x802289A0: lui         $v0, 0x3800
    ctx->r2 = S32(0X3800 << 16);
    // 0x802289A4: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802289A8: beql        $v0, $zero, L_80228BEC
    if (ctx->r2 == 0) {
        // 0x802289AC: addiu       $a0, $zero, 0xA3
        ctx->r4 = ADD32(0, 0XA3);
            goto L_80228BEC;
    }
    goto skip_0;
    // 0x802289AC: addiu       $a0, $zero, 0xA3
    ctx->r4 = ADD32(0, 0XA3);
    skip_0:
    // 0x802289B0: lhu         $v0, 0x6E($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X6E);
    // 0x802289B4: lhu         $v1, 0x6E($s0)
    ctx->r3 = MEM_HU(ctx->r16, 0X6E);
    // 0x802289B8: subu        $v0, $v0, $a0
    ctx->r2 = SUB32(ctx->r2, ctx->r4);
    // 0x802289BC: sh          $v0, 0x6E($s0)
    MEM_H(0X6E, ctx->r16) = ctx->r2;
    // 0x802289C0: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x802289C4: bgtz        $v0, L_80228A04
    if (SIGNED(ctx->r2) > 0) {
        // 0x802289C8: sh          $v1, 0xB2($s0)
        MEM_H(0XB2, ctx->r16) = ctx->r3;
            goto L_80228A04;
    }
    // 0x802289C8: sh          $v1, 0xB2($s0)
    MEM_H(0XB2, ctx->r16) = ctx->r3;
    // 0x802289CC: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x802289D0: lbu         $v1, 0x2($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X2);
    // 0x802289D4: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x802289D8: lw          $a0, 0x298($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X298);
    // 0x802289DC: andi        $v0, $v0, 0xFFFD
    ctx->r2 = ctx->r2 & 0XFFFD;
    // 0x802289E0: ori         $v0, $v0, 0x48
    ctx->r2 = ctx->r2 | 0X48;
    // 0x802289E4: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x802289E8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x802289EC: sh          $v0, 0x328($s0)
    MEM_H(0X328, ctx->r16) = ctx->r2;
    // 0x802289F0: lh          $v0, 0x32E($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X32E);
    // 0x802289F4: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x802289F8: sll         $v0, $v0, 4
    ctx->r2 = S32(ctx->r2 << 4);
    // 0x802289FC: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228A00: lbu         $a0, 0x9($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X9);
L_80228A04:
    // 0x80228A04: lhu         $v0, 0x328($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X328);
    // 0x80228A08: andi        $v0, $v0, 0x8
    ctx->r2 = ctx->r2 & 0X8;
    // 0x80228A0C: beq         $v0, $zero, L_80228B70
    if (ctx->r2 == 0) {
        // 0x80228A10: lui         $v1, 0x2000
        ctx->r3 = S32(0X2000 << 16);
            goto L_80228B70;
    }
    // 0x80228A10: lui         $v1, 0x2000
    ctx->r3 = S32(0X2000 << 16);
    // 0x80228A14: lhu         $v0, 0x332($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X332);
    // 0x80228A18: lw          $v1, 0x33C($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X33C);
    // 0x80228A1C: addu        $a1, $v0, $a0
    ctx->r5 = ADD32(ctx->r2, ctx->r4);
    // 0x80228A20: lui         $v0, 0x2000
    ctx->r2 = S32(0X2000 << 16);
    // 0x80228A24: and         $v1, $v1, $v0
    ctx->r3 = ctx->r3 & ctx->r2;
    // 0x80228A28: bne         $v1, $zero, L_80228A90
    if (ctx->r3 != 0) {
        // 0x80228A2C: sh          $a1, 0x332($s0)
        MEM_H(0X332, ctx->r16) = ctx->r5;
            goto L_80228A90;
    }
    // 0x80228A2C: sh          $a1, 0x332($s0)
    MEM_H(0X332, ctx->r16) = ctx->r5;
    // 0x80228A30: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80228A34: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80228A38: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80228A3C: lh          $a0, 0x32E($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X32E);
    // 0x80228A40: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228A44: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228A48: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80228A4C: sll         $v0, $a0, 4
    ctx->r2 = S32(ctx->r4 << 4);
    // 0x80228A50: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228A54: lbu         $v1, 0x9($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X9);
    // 0x80228A58: sll         $v0, $a1, 16
    ctx->r2 = S32(ctx->r5 << 16);
    // 0x80228A5C: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228A60: slt         $v0, $v0, $v1
    ctx->r2 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80228A64: beq         $v0, $zero, L_80228A90
    if (ctx->r2 == 0) {
        // 0x80228A68: nop
    
            goto L_80228A90;
    }
    // 0x80228A68: nop

    // 0x80228A6C: bnel        $a0, $zero, L_80228BCC
    if (ctx->r4 != 0) {
        // 0x80228A70: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80228BCC;
    }
    goto skip_1;
    // 0x80228A70: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
    skip_1:
    // 0x80228A74: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80228A78: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228A7C: bnel        $v1, $v0, L_80228A84
    if (ctx->r3 != ctx->r2) {
        // 0x80228A80: sh          $zero, 0xA($s0)
        MEM_H(0XA, ctx->r16) = 0;
            goto L_80228A84;
    }
    goto skip_2;
    // 0x80228A80: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    skip_2:
L_80228A84:
    // 0x80228A84: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
    // 0x80228A88: j           L_80228BC8
    // 0x80228A8C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
        goto L_80228BC8;
    // 0x80228A8C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
L_80228A90:
    // 0x80228A90: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80228A94: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228A98: beq         $v1, $v0, L_80228BC8
    if (ctx->r3 == ctx->r2) {
        // 0x80228A9C: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_80228BC8;
    }
    // 0x80228A9C: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
    // 0x80228AA0: addiu       $s1, $s0, 0x14
    ctx->r17 = ADD32(ctx->r16, 0X14);
    // 0x80228AA4: jal         0x8002A33C
    // 0x80228AA8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    func_8002A33C_573C(rdram, ctx);
        goto after_0;
    // 0x80228AA8: addu        $a1, $s1, $zero
    ctx->r5 = ADD32(ctx->r17, 0);
    after_0:
    // 0x80228AAC: lhu         $v0, 0x22($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X22);
    // 0x80228AB0: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80228AB4: beq         $v0, $zero, L_80228B04
    if (ctx->r2 == 0) {
        // 0x80228AB8: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80228B04;
    }
    // 0x80228AB8: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80228ABC: jal         0x8004EC38
    // 0x80228AC0: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    func_8004EC38_2A038(rdram, ctx);
        goto after_1;
    // 0x80228AC0: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    after_1:
    // 0x80228AC4: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x80228AC8: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x80228ACC: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228AD0: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228AD4: subu        $v1, $v1, $v0
    ctx->r3 = SUB32(ctx->r3, ctx->r2);
    // 0x80228AD8: addiu       $v1, $v1, 0x400
    ctx->r3 = ADD32(ctx->r3, 0X400);
    // 0x80228ADC: andi        $v1, $v1, 0xFFF
    ctx->r3 = ctx->r3 & 0XFFF;
    // 0x80228AE0: slti        $v1, $v1, 0x800
    ctx->r3 = SIGNED(ctx->r3) < 0X800 ? 1 : 0;
    // 0x80228AE4: beq         $v1, $zero, L_80228AFC
    if (ctx->r3 == 0) {
        // 0x80228AE8: addiu       $v0, $zero, 0x7
        ctx->r2 = ADD32(0, 0X7);
            goto L_80228AFC;
    }
    // 0x80228AE8: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80228AEC: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80228AF0: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x80228AF4: j           L_80228B64
    // 0x80228AF8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_80228B64;
    // 0x80228AF8: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80228AFC:
    // 0x80228AFC: j           L_80228B50
    // 0x80228B00: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_80228B50;
    // 0x80228B00: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_80228B04:
    // 0x80228B04: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x80228B08: addiu       $a0, $a0, -0x1734
    ctx->r4 = ADD32(ctx->r4, -0X1734);
    // 0x80228B0C: jal         0x8004EC38
    // 0x80228B10: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    func_8004EC38_2A038(rdram, ctx);
        goto after_2;
    // 0x80228B10: addiu       $a1, $s2, 0x1C
    ctx->r5 = ADD32(ctx->r18, 0X1C);
    after_2:
    // 0x80228B14: sh          $v0, 0x44($s2)
    MEM_H(0X44, ctx->r18) = ctx->r2;
    // 0x80228B18: lh          $v1, 0x56($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X56);
    // 0x80228B1C: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80228B20: sra         $v0, $v0, 16
    ctx->r2 = S32(SIGNED(ctx->r2) >> 16);
    // 0x80228B24: subu        $v0, $v0, $v1
    ctx->r2 = SUB32(ctx->r2, ctx->r3);
    // 0x80228B28: addiu       $v0, $v0, 0x400
    ctx->r2 = ADD32(ctx->r2, 0X400);
    // 0x80228B2C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228B30: slti        $v0, $v0, 0x800
    ctx->r2 = SIGNED(ctx->r2) < 0X800 ? 1 : 0;
    // 0x80228B34: beq         $v0, $zero, L_80228B4C
    if (ctx->r2 == 0) {
        // 0x80228B38: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_80228B4C;
    }
    // 0x80228B38: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    // 0x80228B3C: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80228B40: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x80228B44: j           L_80228B64
    // 0x80228B48: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
        goto L_80228B64;
    // 0x80228B48: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80228B4C:
    // 0x80228B4C: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
L_80228B50:
    // 0x80228B50: sb          $v0, 0x9($s0)
    MEM_B(0X9, ctx->r16) = ctx->r2;
    // 0x80228B54: lhu         $v0, 0x44($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X44);
    // 0x80228B58: addiu       $v0, $v0, 0x800
    ctx->r2 = ADD32(ctx->r2, 0X800);
    // 0x80228B5C: andi        $v0, $v0, 0xFFF
    ctx->r2 = ctx->r2 & 0XFFF;
    // 0x80228B60: sh          $v0, 0x56($s0)
    MEM_H(0X56, ctx->r16) = ctx->r2;
L_80228B64:
    // 0x80228B64: sh          $zero, 0xA($s0)
    MEM_H(0XA, ctx->r16) = 0;
    // 0x80228B68: j           L_80228BD4
    // 0x80228B6C: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
        goto L_80228BD4;
    // 0x80228B6C: sh          $zero, 0xA($s2)
    MEM_H(0XA, ctx->r18) = 0;
L_80228B70:
    // 0x80228B70: lw          $v0, 0x33C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X33C);
    // 0x80228B74: and         $v0, $v0, $v1
    ctx->r2 = ctx->r2 & ctx->r3;
    // 0x80228B78: bne         $v0, $zero, L_80228BB8
    if (ctx->r2 != 0) {
        // 0x80228B7C: nop
    
            goto L_80228BB8;
    }
    // 0x80228B7C: nop

    // 0x80228B80: lbu         $v0, 0x2($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X2);
    // 0x80228B84: lui         $v1, 0x8021
    ctx->r3 = S32(0X8021 << 16);
    // 0x80228B88: lw          $v1, 0x298($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X298);
    // 0x80228B8C: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80228B90: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80228B94: lh          $v1, 0x32E($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X32E);
    // 0x80228B98: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x80228B9C: lh          $a0, 0x332($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X332);
    // 0x80228BA0: sll         $v1, $v1, 4
    ctx->r3 = S32(ctx->r3 << 4);
    // 0x80228BA4: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80228BA8: lbu         $v0, 0x9($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X9);
    // 0x80228BAC: slt         $a0, $a0, $v0
    ctx->r4 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80228BB0: bne         $a0, $zero, L_80228BCC
    if (ctx->r4 != 0) {
        // 0x80228BB4: addiu       $a0, $zero, 0xA0
        ctx->r4 = ADD32(0, 0XA0);
            goto L_80228BCC;
    }
    // 0x80228BB4: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_80228BB8:
    // 0x80228BB8: lbu         $v1, 0x9($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X9);
    // 0x80228BBC: addiu       $v0, $zero, 0x5
    ctx->r2 = ADD32(0, 0X5);
    // 0x80228BC0: bne         $v1, $v0, L_80228BCC
    if (ctx->r3 != ctx->r2) {
        // 0x80228BC4: addiu       $a0, $zero, 0xA2
        ctx->r4 = ADD32(0, 0XA2);
            goto L_80228BCC;
    }
    // 0x80228BC4: addiu       $a0, $zero, 0xA2
    ctx->r4 = ADD32(0, 0XA2);
L_80228BC8:
    // 0x80228BC8: addiu       $a0, $zero, 0xA0
    ctx->r4 = ADD32(0, 0XA0);
L_80228BCC:
    // 0x80228BCC: jal         0x8002A33C
    // 0x80228BD0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_3;
    // 0x80228BD0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_3:
L_80228BD4:
    // 0x80228BD4: lbu         $v0, 0x3($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X3);
    // 0x80228BD8: addiu       $v1, $zero, 0x7FFF
    ctx->r3 = ADD32(0, 0X7FFF);
    // 0x80228BDC: sh          $v1, 0x15E($s0)
    MEM_H(0X15E, ctx->r16) = ctx->r3;
    // 0x80228BE0: andi        $v0, $v0, 0xBF
    ctx->r2 = ctx->r2 & 0XBF;
    // 0x80228BE4: j           L_80228BF4
    // 0x80228BE8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
        goto L_80228BF4;
    // 0x80228BE8: sb          $v0, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r2;
L_80228BEC:
    // 0x80228BEC: jal         0x8002A33C
    // 0x80228BF0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    func_8002A33C_573C(rdram, ctx);
        goto after_4;
    // 0x80228BF0: addiu       $a1, $s0, 0x14
    ctx->r5 = ADD32(ctx->r16, 0X14);
    after_4:
L_80228BF4:
    // 0x80228BF4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80228BF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80228BFC: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80228C00: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80228C04: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80228C08: jr          $ra
    // 0x80228C0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80228C0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80236544_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80236544: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80236548: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x8023654C: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80236550: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80236554: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x80236558: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x8023655C: lbu         $v0, 0xD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XD);
    // 0x80236560: addiu       $v1, $zero, 0x7
    ctx->r3 = ADD32(0, 0X7);
    // 0x80236564: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236568: sb          $v0, 0xD($s1)
    MEM_B(0XD, ctx->r17) = ctx->r2;
    // 0x8023656C: sll         $v0, $v0, 24
    ctx->r2 = S32(ctx->r2 << 24);
    // 0x80236570: sra         $v0, $v0, 24
    ctx->r2 = S32(SIGNED(ctx->r2) >> 24);
    // 0x80236574: bne         $v0, $v1, L_802365A0
    if (ctx->r2 != ctx->r3) {
        // 0x80236578: lui         $v1, 0x10
        ctx->r3 = S32(0X10 << 16);
            goto L_802365A0;
    }
    // 0x80236578: lui         $v1, 0x10
    ctx->r3 = S32(0X10 << 16);
    // 0x8023657C: lbu         $v0, 0xA($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XA);
    // 0x80236580: lui         $a0, 0x8021
    ctx->r4 = S32(0X8021 << 16);
    // 0x80236584: addiu       $a0, $a0, 0x9E4
    ctx->r4 = ADD32(ctx->r4, 0X9E4);
    // 0x80236588: sb          $zero, 0xD($s1)
    MEM_B(0XD, ctx->r17) = 0;
    // 0x8023658C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80236590: sb          $v0, 0xA($s1)
    MEM_B(0XA, ctx->r17) = ctx->r2;
    // 0x80236594: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80236598: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023659C: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
L_802365A0:
    // 0x802365A0: lhu         $v0, 0x3C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C);
    // 0x802365A4: addiu       $v0, $v0, -0x49
    ctx->r2 = ADD32(ctx->r2, -0X49);
    // 0x802365A8: jal         0x800A3450
    // 0x802365AC: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_0;
    // 0x802365AC: sh          $v0, 0x3C($s1)
    MEM_H(0X3C, ctx->r17) = ctx->r2;
    after_0:
    // 0x802365B0: andi        $v0, $v0, 0x3
    ctx->r2 = ctx->r2 & 0X3;
    // 0x802365B4: bne         $v0, $zero, L_80236630
    if (ctx->r2 != 0) {
        // 0x802365B8: nop
    
            goto L_80236630;
    }
    // 0x802365B8: nop

    // 0x802365BC: jal         0x8004F144
    // 0x802365C0: nop

    func_8004F144_2A544(rdram, ctx);
        goto after_1;
    // 0x802365C0: nop

    after_1:
    // 0x802365C4: addu        $s0, $v0, $zero
    ctx->r16 = ADD32(ctx->r2, 0);
    // 0x802365C8: beq         $s0, $zero, L_80236630
    if (ctx->r16 == 0) {
        // 0x802365CC: nop
    
            goto L_80236630;
    }
    // 0x802365CC: nop

    // 0x802365D0: jal         0x800A3450
    // 0x802365D4: nop

    func_800A3450_7E850(rdram, ctx);
        goto after_2;
    // 0x802365D4: nop

    after_2:
    // 0x802365D8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x802365DC: sb          $v0, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r2;
    // 0x802365E0: addiu       $v0, $zero, 0x3
    ctx->r2 = ADD32(0, 0X3);
    // 0x802365E4: sb          $v0, 0x2($s0)
    MEM_B(0X2, ctx->r16) = ctx->r2;
    // 0x802365E8: sb          $zero, 0x3($s0)
    MEM_B(0X3, ctx->r16) = 0;
    // 0x802365EC: sb          $v0, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r2;
    // 0x802365F0: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
    // 0x802365F4: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x802365F8: jal         0x800A3450
    // 0x802365FC: lh          $s2, 0x38($s1)
    ctx->r18 = MEM_H(ctx->r17, 0X38);
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x802365FC: lh          $s2, 0x38($s1)
    ctx->r18 = MEM_H(ctx->r17, 0X38);
    after_3:
    // 0x80236600: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80236604: bne         $v0, $zero, L_80236610
    if (ctx->r2 != 0) {
        // 0x80236608: addiu       $v0, $s2, -0x80
        ctx->r2 = ADD32(ctx->r18, -0X80);
            goto L_80236610;
    }
    // 0x80236608: addiu       $v0, $s2, -0x80
    ctx->r2 = ADD32(ctx->r18, -0X80);
    // 0x8023660C: addiu       $v0, $s2, 0x80
    ctx->r2 = ADD32(ctx->r18, 0X80);
L_80236610:
    // 0x80236610: sh          $v0, 0x1C($s0)
    MEM_H(0X1C, ctx->r16) = ctx->r2;
    // 0x80236614: lhu         $v0, 0x3A($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3A);
    // 0x80236618: addiu       $v0, $v0, -0x20
    ctx->r2 = ADD32(ctx->r2, -0X20);
    // 0x8023661C: sh          $v0, 0x1E($s0)
    MEM_H(0X1E, ctx->r16) = ctx->r2;
    // 0x80236620: lhu         $v0, 0x3C($s1)
    ctx->r2 = MEM_HU(ctx->r17, 0X3C);
    // 0x80236624: sb          $zero, 0x8($s0)
    MEM_B(0X8, ctx->r16) = 0;
    // 0x80236628: sb          $zero, 0x9($s0)
    MEM_B(0X9, ctx->r16) = 0;
    // 0x8023662C: sh          $v0, 0x20($s0)
    MEM_H(0X20, ctx->r16) = ctx->r2;
L_80236630:
    // 0x80236630: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80236634: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80236638: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x8023663C: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80236640: jr          $ra
    // 0x80236644: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    TRACE_RETURN()
    return;
    // 0x80236644: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_802346A0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x802346A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x802346A4: sw          $fp, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r30;
    // 0x802346A8: addu        $fp, $a0, $zero
    ctx->r30 = ADD32(ctx->r4, 0);
    // 0x802346AC: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x802346B0: sw          $s7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r23;
    // 0x802346B4: sw          $s6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r22;
    // 0x802346B8: sw          $s5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r21;
    // 0x802346BC: sw          $s4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r20;
    // 0x802346C0: sw          $s3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r19;
    // 0x802346C4: sw          $s2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r18;
    // 0x802346C8: sw          $s1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r17;
    // 0x802346CC: sw          $s0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r16;
    // 0x802346D0: lw          $s4, 0x14($fp)
    ctx->r20 = MEM_W(ctx->r30, 0X14);
    // 0x802346D4: lh          $v1, 0x0($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X0);
    // 0x802346D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x802346DC: beq         $v1, $v0, L_80234AB0
    if (ctx->r3 == ctx->r2) {
        // 0x802346E0: addiu       $s7, $fp, 0x14
        ctx->r23 = ADD32(ctx->r30, 0X14);
            goto L_80234AB0;
    }
    // 0x802346E0: addiu       $s7, $fp, 0x14
    ctx->r23 = ADD32(ctx->r30, 0X14);
    // 0x802346E4: addiu       $s6, $zero, 0xFF
    ctx->r22 = ADD32(0, 0XFF);
    // 0x802346E8: lui         $s3, 0x8000
    ctx->r19 = S32(0X8000 << 16);
    // 0x802346EC: addiu       $s5, $zero, 0x2
    ctx->r21 = ADD32(0, 0X2);
    // 0x802346F0: addiu       $s2, $s4, 0x8
    ctx->r18 = ADD32(ctx->r20, 0X8);
L_802346F4:
    // 0x802346F4: lbu         $v0, 0x8($s7)
    ctx->r2 = MEM_BU(ctx->r23, 0X8);
    // 0x802346F8: lh          $v1, -0x6($s2)
    ctx->r3 = MEM_H(ctx->r18, -0X6);
    // 0x802346FC: sll         $a2, $v0, 24
    ctx->r6 = S32(ctx->r2 << 24);
    // 0x80234700: sra         $v0, $a2, 24
    ctx->r2 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80234704: beq         $v1, $v0, L_8023499C
    if (ctx->r3 == ctx->r2) {
        // 0x80234708: nop
    
            goto L_8023499C;
    }
    // 0x80234708: nop

    // 0x8023470C: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80234710: lhu         $v0, 0x49C4($v0)
    ctx->r2 = MEM_HU(ctx->r2, 0X49C4);
    // 0x80234714: lb          $a0, -0x4($s2)
    ctx->r4 = MEM_B(ctx->r18, -0X4);
    // 0x80234718: lui         $v1, 0x8020
    ctx->r3 = S32(0X8020 << 16);
    // 0x8023471C: lhu         $v1, 0x49C8($v1)
    ctx->r3 = MEM_HU(ctx->r3, 0X49C8);
    // 0x80234720: sll         $v0, $v0, 16
    ctx->r2 = S32(ctx->r2 << 16);
    // 0x80234724: sra         $v0, $v0, 25
    ctx->r2 = S32(SIGNED(ctx->r2) >> 25);
    // 0x80234728: subu        $a1, $v0, $a0
    ctx->r5 = SUB32(ctx->r2, ctx->r4);
    // 0x8023472C: sll         $v1, $v1, 16
    ctx->r3 = S32(ctx->r3 << 16);
    // 0x80234730: lb          $a0, -0x3($s2)
    ctx->r4 = MEM_B(ctx->r18, -0X3);
    // 0x80234734: lbu         $v0, -0x2($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X2);
    // 0x80234738: sra         $v1, $v1, 25
    ctx->r3 = S32(SIGNED(ctx->r3) >> 25);
    // 0x8023473C: sltu        $v0, $a1, $v0
    ctx->r2 = ctx->r5 < ctx->r2 ? 1 : 0;
    // 0x80234740: beq         $v0, $zero, L_80234A9C
    if (ctx->r2 == 0) {
        // 0x80234744: subu        $v1, $v1, $a0
        ctx->r3 = SUB32(ctx->r3, ctx->r4);
            goto L_80234A9C;
    }
    // 0x80234744: subu        $v1, $v1, $a0
    ctx->r3 = SUB32(ctx->r3, ctx->r4);
    // 0x80234748: lbu         $v0, -0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, -0X1);
    // 0x8023474C: sltu        $v0, $v1, $v0
    ctx->r2 = ctx->r3 < ctx->r2 ? 1 : 0;
    // 0x80234750: beq         $v0, $zero, L_80234A9C
    if (ctx->r2 == 0) {
        // 0x80234754: sra         $v1, $a2, 24
        ctx->r3 = S32(SIGNED(ctx->r6) >> 24);
            goto L_80234A9C;
    }
    // 0x80234754: sra         $v1, $a2, 24
    ctx->r3 = S32(SIGNED(ctx->r6) >> 24);
    // 0x80234758: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8023475C: beql        $v1, $v0, L_80234994
    if (ctx->r3 == ctx->r2) {
        // 0x80234760: sw          $s4, 0x4($s7)
        MEM_W(0X4, ctx->r23) = ctx->r20;
            goto L_80234994;
    }
    goto skip_0;
    // 0x80234760: sw          $s4, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r20;
    skip_0:
    // 0x80234764: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x80234768: lbu         $v0, 0x161($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X161);
    // 0x8023476C: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x80234770: addiu       $s1, $s1, 0x160
    ctx->r17 = ADD32(ctx->r17, 0X160);
    // 0x80234774: beql        $v0, $s6, L_80234994
    if (ctx->r2 == ctx->r22) {
        // 0x80234778: sw          $s4, 0x4($s7)
        MEM_W(0X4, ctx->r23) = ctx->r20;
            goto L_80234994;
    }
    goto skip_1;
    // 0x80234778: sw          $s4, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r20;
    skip_1:
    // 0x8023477C: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
L_80234780:
    // 0x80234780: jal         0x8004DA68
    // 0x80234784: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    func_8004DA68_28E68(rdram, ctx);
        goto after_0;
    // 0x80234784: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    after_0:
    // 0x80234788: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x8023478C: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x80234790: beq         $v1, $v0, L_80234834
    if (ctx->r3 == ctx->r2) {
        // 0x80234794: sltiu       $v0, $v1, 0x41
        ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
            goto L_80234834;
    }
    // 0x80234794: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x80234798: beq         $v0, $zero, L_802347B0
    if (ctx->r2 == 0) {
        // 0x8023479C: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_802347B0;
    }
    // 0x8023479C: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802347A0: beq         $v1, $v0, L_802347CC
    if (ctx->r3 == ctx->r2) {
        // 0x802347A4: nop
    
            goto L_802347CC;
    }
    // 0x802347A4: nop

    // 0x802347A8: j           L_80234984
    // 0x802347AC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_80234984;
    // 0x802347AC: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_802347B0:
    // 0x802347B0: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x802347B4: beq         $v1, $v0, L_8023489C
    if (ctx->r3 == ctx->r2) {
        // 0x802347B8: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_8023489C;
    }
    // 0x802347B8: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x802347BC: beq         $v1, $v0, L_802348F4
    if (ctx->r3 == ctx->r2) {
        // 0x802347C0: nop
    
            goto L_802348F4;
    }
    // 0x802347C0: nop

    // 0x802347C4: j           L_80234984
    // 0x802347C8: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_80234984;
    // 0x802347C8: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_802347CC:
    // 0x802347CC: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x802347D0: jal         0x80053ED8
    // 0x802347D4: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_1;
    // 0x802347D4: nop

    after_1:
    // 0x802347D8: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x802347DC: lw          $v1, -0x714C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X714C);
    // 0x802347E0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802347E4: lw          $a0, 0x154($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X154);
    // 0x802347E8: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x802347EC: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x802347F0: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x802347F4: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x802347F8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802347FC: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x80234800: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80234804: bne         $v0, $zero, L_80234934
    if (ctx->r2 != 0) {
        // 0x80234808: nop
    
            goto L_80234934;
    }
    // 0x80234808: nop

    // 0x8023480C: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x80234810: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x80234814: lui         $v0, 0x8020
    ctx->r2 = S32(0X8020 << 16);
    // 0x80234818: lw          $v0, 0x4020($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X4020);
    // 0x8023481C: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80234820: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234824: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80234828: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x8023482C: j           L_80234974
    // 0x80234830: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_80234974;
    // 0x80234830: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80234834:
    // 0x80234834: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x80234838: jal         0x80053ED8
    // 0x8023483C: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_2;
    // 0x8023483C: nop

    after_2:
    // 0x80234840: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80234844: lw          $v1, -0x7798($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7798);
    // 0x80234848: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023484C: lw          $a0, 0x150($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X150);
    // 0x80234850: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x80234854: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x80234858: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x8023485C: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x80234860: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80234864: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x80234868: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023486C: bne         $v0, $zero, L_80234934
    if (ctx->r2 != 0) {
        // 0x80234870: nop
    
            goto L_80234934;
    }
    // 0x80234870: nop

    // 0x80234874: lbu         $v1, 0x2($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X2);
    // 0x80234878: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x8023487C: lui         $v0, 0x801B
    ctx->r2 = S32(0X801B << 16);
    // 0x80234880: lw          $v0, -0x22A0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X22A0);
    // 0x80234884: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80234888: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023488C: lbu         $v0, 0x4($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X4);
    // 0x80234890: lw          $v1, 0x0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X0);
    // 0x80234894: j           L_80234974
    // 0x80234898: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_80234974;
    // 0x80234898: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_8023489C:
    // 0x8023489C: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x802348A0: jal         0x80053ED8
    // 0x802348A4: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_3;
    // 0x802348A4: nop

    after_3:
    // 0x802348A8: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x802348AC: lw          $v1, -0x781C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X781C);
    // 0x802348B0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x802348B4: lw          $a0, 0x158($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X158);
    // 0x802348B8: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x802348BC: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x802348C0: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x802348C4: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x802348C8: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x802348CC: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x802348D0: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x802348D4: bne         $v0, $zero, L_80234934
    if (ctx->r2 != 0) {
        // 0x802348D8: nop
    
            goto L_80234934;
    }
    // 0x802348D8: nop

    // 0x802348DC: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x802348E0: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x802348E4: lui         $v1, 0x8022
    ctx->r3 = S32(0X8022 << 16);
    // 0x802348E8: lw          $v1, -0x26A8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X26A8);
    // 0x802348EC: j           L_80234974
    // 0x802348F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
        goto L_80234974;
    // 0x802348F0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_802348F4:
    // 0x802348F4: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x802348F8: jal         0x80053ED8
    // 0x802348FC: nop

    func_80053ED8_2F2D8(rdram, ctx);
        goto after_4;
    // 0x802348FC: nop

    after_4:
    // 0x80234900: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80234904: lw          $v1, -0x72C8($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X72C8);
    // 0x80234908: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x8023490C: lw          $a0, 0x15C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X15C);
    // 0x80234910: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    // 0x80234914: xor         $v1, $v1, $a0
    ctx->r3 = ctx->r3 ^ ctx->r4;
    // 0x80234918: and         $v1, $v1, $a0
    ctx->r3 = ctx->r3 & ctx->r4;
    // 0x8023491C: andi        $a1, $a1, 0x1F
    ctx->r5 = ctx->r5 & 0X1F;
    // 0x80234920: addu        $a0, $v0, $zero
    ctx->r4 = ADD32(ctx->r2, 0);
    // 0x80234924: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x80234928: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x8023492C: beq         $v0, $zero, L_80234960
    if (ctx->r2 == 0) {
        // 0x80234930: nop
    
            goto L_80234960;
    }
    // 0x80234930: nop

L_80234934:
    // 0x80234934: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x80234938: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8023493C: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80234940: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234944: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80234948: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x8023494C: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    // 0x80234950: jal         0x8006036C
    // 0x80234954: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    func_8006036C_3B76C(rdram, ctx);
        goto after_5;
    // 0x80234954: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    after_5:
    // 0x80234958: j           L_80234984
    // 0x8023495C: nop

        goto L_80234984;
    // 0x8023495C: nop

L_80234960:
    // 0x80234960: lbu         $v0, 0x2($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X2);
    // 0x80234964: sb          $s5, 0x8($a0)
    MEM_B(0X8, ctx->r4) = ctx->r21;
    // 0x80234968: lui         $v1, 0x801B
    ctx->r3 = S32(0X801B << 16);
    // 0x8023496C: lw          $v1, -0x2344($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2344);
    // 0x80234970: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
L_80234974:
    // 0x80234974: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80234978: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
    // 0x8023497C: jalr        $v0
    // 0x80234980: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_6;
    // 0x80234980: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    after_6:
L_80234984:
    // 0x80234984: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80234988: bne         $v0, $s6, L_80234780
    if (ctx->r2 != ctx->r22) {
        // 0x8023498C: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_80234780;
    }
    // 0x8023498C: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
    // 0x80234990: sw          $s4, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r20;
L_80234994:
    // 0x80234994: j           L_80234A9C
    // 0x80234998: sb          $s5, 0x8($fp)
    MEM_B(0X8, ctx->r30) = ctx->r21;
        goto L_80234A9C;
    // 0x80234998: sb          $s5, 0x8($fp)
    MEM_B(0X8, ctx->r30) = ctx->r21;
L_8023499C:
    // 0x8023499C: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x802349A0: lbu         $v0, 0x161($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X161);
    // 0x802349A4: lui         $s1, 0x8024
    ctx->r17 = S32(0X8024 << 16);
    // 0x802349A8: addiu       $s1, $s1, 0x160
    ctx->r17 = ADD32(ctx->r17, 0X160);
    // 0x802349AC: beql        $v0, $s6, L_80234AA0
    if (ctx->r2 == ctx->r22) {
        // 0x802349B0: addiu       $s4, $s4, 0xC
        ctx->r20 = ADD32(ctx->r20, 0XC);
            goto L_80234AA0;
    }
    goto skip_2;
    // 0x802349B0: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
    skip_2:
    // 0x802349B4: addiu       $s0, $s1, 0x1
    ctx->r16 = ADD32(ctx->r17, 0X1);
L_802349B8:
    // 0x802349B8: jal         0x8004DA68
    // 0x802349BC: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    func_8004DA68_28E68(rdram, ctx);
        goto after_7;
    // 0x802349BC: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    after_7:
    // 0x802349C0: addu        $v1, $v0, $zero
    ctx->r3 = ADD32(ctx->r2, 0);
    // 0x802349C4: addiu       $v0, $zero, 0x40
    ctx->r2 = ADD32(0, 0X40);
    // 0x802349C8: beq         $v1, $v0, L_80234A18
    if (ctx->r3 == ctx->r2) {
        // 0x802349CC: sltiu       $v0, $v1, 0x41
        ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
            goto L_80234A18;
    }
    // 0x802349CC: sltiu       $v0, $v1, 0x41
    ctx->r2 = ctx->r3 < 0X41 ? 1 : 0;
    // 0x802349D0: beq         $v0, $zero, L_802349E8
    if (ctx->r2 == 0) {
        // 0x802349D4: addiu       $v0, $zero, 0x20
        ctx->r2 = ADD32(0, 0X20);
            goto L_802349E8;
    }
    // 0x802349D4: addiu       $v0, $zero, 0x20
    ctx->r2 = ADD32(0, 0X20);
    // 0x802349D8: beq         $v1, $v0, L_80234A04
    if (ctx->r3 == ctx->r2) {
        // 0x802349DC: nop
    
            goto L_80234A04;
    }
    // 0x802349DC: nop

    // 0x802349E0: j           L_80234A90
    // 0x802349E4: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_80234A90;
    // 0x802349E4: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_802349E8:
    // 0x802349E8: addiu       $v0, $zero, 0x60
    ctx->r2 = ADD32(0, 0X60);
    // 0x802349EC: beq         $v1, $v0, L_80234A2C
    if (ctx->r3 == ctx->r2) {
        // 0x802349F0: addiu       $v0, $zero, 0xE0
        ctx->r2 = ADD32(0, 0XE0);
            goto L_80234A2C;
    }
    // 0x802349F0: addiu       $v0, $zero, 0xE0
    ctx->r2 = ADD32(0, 0XE0);
    // 0x802349F4: beq         $v1, $v0, L_80234A40
    if (ctx->r3 == ctx->r2) {
        // 0x802349F8: nop
    
            goto L_80234A40;
    }
    // 0x802349F8: nop

    // 0x802349FC: j           L_80234A90
    // 0x80234A00: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
        goto L_80234A90;
    // 0x80234A00: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
L_80234A04:
    // 0x80234A04: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80234A08: lw          $v0, -0x714C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X714C);
    // 0x80234A0C: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234A10: j           L_80234A50
    // 0x80234A14: lw          $v1, 0x154($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X154);
        goto L_80234A50;
    // 0x80234A14: lw          $v1, 0x154($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X154);
L_80234A18:
    // 0x80234A18: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80234A1C: lw          $v0, -0x7798($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X7798);
    // 0x80234A20: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234A24: j           L_80234A50
    // 0x80234A28: lw          $v1, 0x150($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X150);
        goto L_80234A50;
    // 0x80234A28: lw          $v1, 0x150($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X150);
L_80234A2C:
    // 0x80234A2C: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80234A30: lw          $v0, -0x781C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X781C);
    // 0x80234A34: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234A38: j           L_80234A50
    // 0x80234A3C: lw          $v1, 0x158($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X158);
        goto L_80234A50;
    // 0x80234A3C: lw          $v1, 0x158($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X158);
L_80234A40:
    // 0x80234A40: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80234A44: lw          $v0, -0x72C8($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X72C8);
    // 0x80234A48: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x80234A4C: lw          $v1, 0x15C($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X15C);
L_80234A50:
    // 0x80234A50: lbu         $a0, 0x0($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X0);
    // 0x80234A54: xor         $v0, $v0, $v1
    ctx->r2 = ctx->r2 ^ ctx->r3;
    // 0x80234A58: and         $v1, $v0, $v1
    ctx->r3 = ctx->r2 & ctx->r3;
    // 0x80234A5C: andi        $a1, $a0, 0x1F
    ctx->r5 = ctx->r4 & 0X1F;
    // 0x80234A60: srlv        $v0, $s3, $a1
    ctx->r2 = S32(U32(ctx->r19) >> (ctx->r5 & 31));
    // 0x80234A64: and         $v0, $v1, $v0
    ctx->r2 = ctx->r3 & ctx->r2;
    // 0x80234A68: beq         $v0, $zero, L_80234A90
    if (ctx->r2 == 0) {
        // 0x80234A6C: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_80234A90;
    }
    // 0x80234A6C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x80234A70: lb          $v0, 0x0($s1)
    ctx->r2 = MEM_B(ctx->r17, 0X0);
    // 0x80234A74: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80234A78: sll         $v1, $v0, 1
    ctx->r3 = S32(ctx->r2 << 1);
    // 0x80234A7C: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x80234A80: sll         $v1, $v1, 3
    ctx->r3 = S32(ctx->r3 << 3);
    // 0x80234A84: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80234A88: jal         0x8006036C
    // 0x80234A8C: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    func_8006036C_3B76C(rdram, ctx);
        goto after_8;
    // 0x80234A8C: lw          $a0, 0x14($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X14);
    after_8:
L_80234A90:
    // 0x80234A90: lbu         $v0, 0x0($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X0);
    // 0x80234A94: bne         $v0, $s6, L_802349B8
    if (ctx->r2 != ctx->r22) {
        // 0x80234A98: addiu       $s1, $s1, 0x2
        ctx->r17 = ADD32(ctx->r17, 0X2);
            goto L_802349B8;
    }
    // 0x80234A98: addiu       $s1, $s1, 0x2
    ctx->r17 = ADD32(ctx->r17, 0X2);
L_80234A9C:
    // 0x80234A9C: addiu       $s4, $s4, 0xC
    ctx->r20 = ADD32(ctx->r20, 0XC);
L_80234AA0:
    // 0x80234AA0: lh          $v1, 0x0($s4)
    ctx->r3 = MEM_H(ctx->r20, 0X0);
    // 0x80234AA4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80234AA8: bne         $v1, $v0, L_802346F4
    if (ctx->r3 != ctx->r2) {
        // 0x80234AAC: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_802346F4;
    }
    // 0x80234AAC: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
L_80234AB0:
    // 0x80234AB0: lui         $v0, 0x801E
    ctx->r2 = S32(0X801E << 16);
    // 0x80234AB4: lw          $v0, -0x714C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X714C);
    // 0x80234AB8: lui         $v1, 0x801E
    ctx->r3 = S32(0X801E << 16);
    // 0x80234ABC: lw          $v1, -0x7798($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X7798);
    // 0x80234AC0: lui         $a0, 0x801E
    ctx->r4 = S32(0X801E << 16);
    // 0x80234AC4: lw          $a0, -0x781C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X781C);
    // 0x80234AC8: lui         $a1, 0x801E
    ctx->r5 = S32(0X801E << 16);
    // 0x80234ACC: lw          $a1, -0x72C8($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X72C8);
    // 0x80234AD0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234AD4: sw          $v0, 0x154($at)
    MEM_W(0X154, ctx->r1) = ctx->r2;
    // 0x80234AD8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234ADC: sw          $v1, 0x150($at)
    MEM_W(0X150, ctx->r1) = ctx->r3;
    // 0x80234AE0: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234AE4: sw          $a0, 0x158($at)
    MEM_W(0X158, ctx->r1) = ctx->r4;
    // 0x80234AE8: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80234AEC: sw          $a1, 0x15C($at)
    MEM_W(0X15C, ctx->r1) = ctx->r5;
    // 0x80234AF0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80234AF4: lw          $fp, 0x30($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X30);
    // 0x80234AF8: lw          $s7, 0x2C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X2C);
    // 0x80234AFC: lw          $s6, 0x28($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X28);
    // 0x80234B00: lw          $s5, 0x24($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X24);
    // 0x80234B04: lw          $s4, 0x20($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X20);
    // 0x80234B08: lw          $s3, 0x1C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X1C);
    // 0x80234B0C: lw          $s2, 0x18($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X18);
    // 0x80234B10: lw          $s1, 0x14($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X14);
    // 0x80234B14: lw          $s0, 0x10($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X10);
    // 0x80234B18: jr          $ra
    // 0x80234B1C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80234B1C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8023A020_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x8023A020: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8023A024: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x8023A028: addu        $s2, $a0, $zero
    ctx->r18 = ADD32(ctx->r4, 0);
    // 0x8023A02C: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x8023A030: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x8023A034: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x8023A038: lw          $s1, 0x28($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X28);
    // 0x8023A03C: lhu         $v0, 0x2C($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2C);
    // 0x8023A040: lhu         $s0, 0x56($s1)
    ctx->r16 = MEM_HU(ctx->r17, 0X56);
    // 0x8023A044: sh          $v0, 0x30($sp)
    MEM_H(0X30, ctx->r29) = ctx->r2;
    // 0x8023A048: lhu         $v0, 0x2E($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X2E);
    // 0x8023A04C: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x8023A050: lhu         $v0, 0x30($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X30);
    // 0x8023A054: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023A058: jal         0x8002C654
    // 0x8023A05C: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    func_8002C654_7A54(rdram, ctx);
        goto after_0;
    // 0x8023A05C: sh          $v0, 0x34($sp)
    MEM_H(0X34, ctx->r29) = ctx->r2;
    after_0:
    // 0x8023A060: sll         $s0, $s0, 16
    ctx->r16 = S32(ctx->r16 << 16);
    // 0x8023A064: sra         $a0, $s0, 16
    ctx->r4 = S32(SIGNED(ctx->r16) >> 16);
    // 0x8023A068: jal         0x800319B4
    // 0x8023A06C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    func_800319B4_CDB4(rdram, ctx);
        goto after_1;
    // 0x8023A06C: addiu       $a1, $sp, 0x10
    ctx->r5 = ADD32(ctx->r29, 0X10);
    after_1:
    // 0x8023A070: addiu       $a0, $sp, 0x10
    ctx->r4 = ADD32(ctx->r29, 0X10);
    // 0x8023A074: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x8023A078: jal         0x80031270
    // 0x8023A07C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_80031270_C670(rdram, ctx);
        goto after_2;
    // 0x8023A07C: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_2:
    // 0x8023A080: lh          $v1, 0x1C($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X1C);
    // 0x8023A084: lhu         $v0, 0x38($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X38);
    // 0x8023A088: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023A08C: sh          $v0, 0x1C($s2)
    MEM_H(0X1C, ctx->r18) = ctx->r2;
    // 0x8023A090: lh          $v1, 0x20($s1)
    ctx->r3 = MEM_H(ctx->r17, 0X20);
    // 0x8023A094: lhu         $v0, 0x3A($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3A);
    // 0x8023A098: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x8023A09C: sh          $v0, 0x1E($s2)
    MEM_H(0X1E, ctx->r18) = ctx->r2;
    // 0x8023A0A0: lh          $a0, 0x24($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X24);
    // 0x8023A0A4: lhu         $v1, 0x26($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X26);
    // 0x8023A0A8: lhu         $v0, 0x3C($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X3C);
    // 0x8023A0AC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8023A0B0: addu        $v0, $v0, $a0
    ctx->r2 = ADD32(ctx->r2, ctx->r4);
    // 0x8023A0B4: sh          $v1, 0x26($s2)
    MEM_H(0X26, ctx->r18) = ctx->r3;
    // 0x8023A0B8: andi        $v1, $v1, 0xFFFF
    ctx->r3 = ctx->r3 & 0XFFFF;
    // 0x8023A0BC: sh          $v0, 0x20($s2)
    MEM_H(0X20, ctx->r18) = ctx->r2;
    // 0x8023A0C0: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    // 0x8023A0C4: beql        $v1, $v0, L_8023A0CC
    if (ctx->r3 == ctx->r2) {
        // 0x8023A0C8: sh          $zero, 0x26($s2)
        MEM_H(0X26, ctx->r18) = 0;
            goto L_8023A0CC;
    }
    goto skip_0;
    // 0x8023A0C8: sh          $zero, 0x26($s2)
    MEM_H(0X26, ctx->r18) = 0;
    skip_0:
L_8023A0CC:
    // 0x8023A0CC: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x8023A0D0: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023A0D4: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023A0D8: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023A0DC: lbu         $v1, -0x760($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X760);
    // 0x8023A0E0: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x8023A0E4: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023A0E8: sb          $v1, 0x22($s2)
    MEM_B(0X22, ctx->r18) = ctx->r3;
    // 0x8023A0EC: lui         $v1, 0x8024
    ctx->r3 = S32(0X8024 << 16);
    // 0x8023A0F0: addu        $v1, $v1, $v0
    ctx->r3 = ADD32(ctx->r3, ctx->r2);
    // 0x8023A0F4: lbu         $v1, -0x75F($v1)
    ctx->r3 = MEM_BU(ctx->r3, -0X75F);
    // 0x8023A0F8: lhu         $v0, 0x26($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X26);
    // 0x8023A0FC: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023A100: sb          $v1, 0x23($s2)
    MEM_B(0X23, ctx->r18) = ctx->r3;
    // 0x8023A104: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x8023A108: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023A10C: lhu         $v0, -0x75E($at)
    ctx->r2 = MEM_HU(ctx->r1, -0X75E);
    // 0x8023A110: sh          $v0, 0x24($s2)
    MEM_H(0X24, ctx->r18) = ctx->r2;
    // 0x8023A114: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x8023A118: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8023A11C: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x8023A120: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x8023A124: jr          $ra
    // 0x8023A128: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    TRACE_RETURN()
    return;
    // 0x8023A128: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80230D28_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230D28: jr          $ra
    // 0x80230D2C: nop

    TRACE_RETURN()
    return;
    // 0x80230D2C: nop

;}
RECOMP_FUNC void func_80225FB4_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80225FB4: lw          $v0, 0x10($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X10);
    // 0x80225FB8: bne         $v0, $zero, L_80225FDC
    if (ctx->r2 != 0) {
        // 0x80225FBC: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_80225FDC;
    }
    // 0x80225FBC: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80225FC0: lw          $v1, 0x24($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X24);
    // 0x80225FC4: lw          $a0, 0x24($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X24);
    // 0x80225FC8: sb          $v0, 0x9($v1)
    MEM_B(0X9, ctx->r3) = ctx->r2;
    // 0x80225FCC: lui         $v0, 0xC8
    ctx->r2 = S32(0XC8 << 16);
    // 0x80225FD0: sb          $zero, 0xA($v1)
    MEM_B(0XA, ctx->r3) = 0;
    // 0x80225FD4: addu        $a0, $a0, $v0
    ctx->r4 = ADD32(ctx->r4, ctx->r2);
    // 0x80225FD8: sw          $a0, 0x24($v1)
    MEM_W(0X24, ctx->r3) = ctx->r4;
L_80225FDC:
    // 0x80225FDC: jr          $ra
    // 0x80225FE0: nop

    TRACE_RETURN()
    return;
    // 0x80225FE0: nop

;}
RECOMP_FUNC void func_80230948_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80230948: jr          $ra
    // 0x8023094C: nop

    TRACE_RETURN()
    return;
    // 0x8023094C: nop

;}
RECOMP_FUNC void func_80239110_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80239110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80239114: sw          $ra, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r31;
    // 0x80239118: lb          $v0, 0xD($a0)
    ctx->r2 = MEM_B(ctx->r4, 0XD);
    // 0x8023911C: bne         $v0, $zero, L_8023913C
    if (ctx->r2 != 0) {
        // 0x80239120: nop
    
            goto L_8023913C;
    }
    // 0x80239120: nop

    // 0x80239124: lbu         $v0, 0x3($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X3);
    // 0x80239128: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x8023912C: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239130: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x80239134: j           L_80239150
    // 0x80239138: lw          $v0, -0x828($at)
    ctx->r2 = MEM_W(ctx->r1, -0X828);
        goto L_80239150;
    // 0x80239138: lw          $v0, -0x828($at)
    ctx->r2 = MEM_W(ctx->r1, -0X828);
L_8023913C:
    // 0x8023913C: lbu         $v0, 0x8($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X8);
    // 0x80239140: sll         $v0, $v0, 2
    ctx->r2 = S32(ctx->r2 << 2);
    // 0x80239144: lui         $at, 0x8024
    ctx->r1 = S32(0X8024 << 16);
    // 0x80239148: addu        $at, $at, $v0
    ctx->r1 = ADD32(ctx->r1, ctx->r2);
    // 0x8023914C: lw          $v0, -0x830($at)
    ctx->r2 = MEM_W(ctx->r1, -0X830);
L_80239150:
    // 0x80239150: jalr        $v0
    // 0x80239154: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80239154: nop

    after_0:
    // 0x80239158: lw          $ra, 0x10($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X10);
    // 0x8023915C: jr          $ra
    // 0x80239160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    TRACE_RETURN()
    return;
    // 0x80239160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80228FC0_ovl2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    TRACE_ENTRY()
    // 0x80228FC0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80228FC4: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80228FC8: addu        $s1, $a0, $zero
    ctx->r17 = ADD32(ctx->r4, 0);
    // 0x80228FCC: addiu       $a0, $s1, 0x2C
    ctx->r4 = ADD32(ctx->r17, 0X2C);
    // 0x80228FD0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80228FD4: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80228FD8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80228FDC: lbu         $v0, 0xAC($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAC);
    // 0x80228FE0: addiu       $a1, $s1, 0x14
    ctx->r5 = ADD32(ctx->r17, 0X14);
    // 0x80228FE4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80228FE8: jal         0x8009A3B4
    // 0x80228FEC: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    memcpy_recomp(rdram, ctx);
        goto after_0;
    // 0x80228FEC: sb          $v0, 0xAD($s1)
    MEM_B(0XAD, ctx->r17) = ctx->r2;
    after_0:
    // 0x80228FF0: addiu       $a0, $s1, 0x34
    ctx->r4 = ADD32(ctx->r17, 0X34);
    // 0x80228FF4: addiu       $a1, $s1, 0x1C
    ctx->r5 = ADD32(ctx->r17, 0X1C);
    // 0x80228FF8: jal         0x8009A3B4
    // 0x80228FFC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    memcpy_recomp(rdram, ctx);
        goto after_1;
    // 0x80228FFC: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_1:
    // 0x80229000: addiu       $a0, $s1, 0x5C
    ctx->r4 = ADD32(ctx->r17, 0X5C);
    // 0x80229004: addiu       $a1, $s1, 0x54
    ctx->r5 = ADD32(ctx->r17, 0X54);
    // 0x80229008: jal         0x8009A3B4
    // 0x8022900C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_2;
    // 0x8022900C: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_2:
    // 0x80229010: addiu       $v0, $zero, 0x4210
    ctx->r2 = ADD32(0, 0X4210);
    // 0x80229014: jal         0x800A3450
    // 0x80229018: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    func_800A3450_7E850(rdram, ctx);
        goto after_3;
    // 0x80229018: sh          $v0, 0x15E($s1)
    MEM_H(0X15E, ctx->r17) = ctx->r2;
    after_3:
    // 0x8022901C: lbu         $v1, 0x8($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X8);
    // 0x80229020: sh          $v0, 0x34A($s1)
    MEM_H(0X34A, ctx->r17) = ctx->r2;
    // 0x80229024: sll         $v1, $v1, 2
    ctx->r3 = S32(ctx->r3 << 2);
    // 0x80229028: lui         $v0, 0x8024
    ctx->r2 = S32(0X8024 << 16);
    // 0x8022902C: addu        $v0, $v0, $v1
    ctx->r2 = ADD32(ctx->r2, ctx->r3);
    // 0x80229030: lw          $v0, -0x1700($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1700);
    // 0x80229034: jalr        $v0
    // 0x80229038: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_4;
    // 0x80229038: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_4:
    // 0x8022903C: lbu         $v0, 0xAD($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0XAD);
    // 0x80229040: lbu         $a1, 0xAC($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0XAC);
    // 0x80229044: beq         $v0, $a1, L_80229060
    if (ctx->r2 == ctx->r5) {
        // 0x80229048: addiu       $s2, $s1, 0x348
        ctx->r18 = ADD32(ctx->r17, 0X348);
            goto L_80229060;
    }
    // 0x80229048: addiu       $s2, $s1, 0x348
    ctx->r18 = ADD32(ctx->r17, 0X348);
    // 0x8022904C: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229050: jal         0x80050294
    // 0x80229054: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    func_80050294_2B694(rdram, ctx);
        goto after_5;
    // 0x80229054: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    after_5:
    // 0x80229058: j           L_80229068
    // 0x8022905C: nop

        goto L_80229068;
    // 0x8022905C: nop

L_80229060:
    // 0x80229060: jal         0x8005044C
    // 0x80229064: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    func_8005044C_2B84C(rdram, ctx);
        goto after_6;
    // 0x80229064: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    after_6:
L_80229068:
    // 0x80229068: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022906C: andi        $v0, $v0, 0x2
    ctx->r2 = ctx->r2 & 0X2;
    // 0x80229070: beq         $v0, $zero, L_80229088
    if (ctx->r2 == 0) {
        // 0x80229074: addu        $a0, $s1, $zero
        ctx->r4 = ADD32(ctx->r17, 0);
            goto L_80229088;
    }
    // 0x80229074: addu        $a0, $s1, $zero
    ctx->r4 = ADD32(ctx->r17, 0);
    // 0x80229078: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x8022907C: addiu       $a2, $zero, 0x200
    ctx->r6 = ADD32(0, 0X200);
    // 0x80229080: jal         0x8003B564
    // 0x80229084: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    func_8003B564_16964(rdram, ctx);
        goto after_7;
    // 0x80229084: addu        $a3, $zero, $zero
    ctx->r7 = ADD32(0, 0);
    after_7:
L_80229088:
    // 0x80229088: lbu         $v0, 0x0($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X0);
    // 0x8022908C: andi        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 & 0X1;
    // 0x80229090: beql        $v0, $zero, L_802290FC
    if (ctx->r2 == 0) {
        // 0x80229094: sw          $zero, 0x14($s2)
        MEM_W(0X14, ctx->r18) = 0;
            goto L_802290FC;
    }
    goto skip_0;
    // 0x80229094: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
    skip_0:
    // 0x80229098: lhu         $v0, 0x0($s2)
    ctx->r2 = MEM_HU(ctx->r18, 0X0);
    // 0x8022909C: andi        $v0, $v0, 0x4
    ctx->r2 = ctx->r2 & 0X4;
    // 0x802290A0: beq         $v0, $zero, L_802290F8
    if (ctx->r2 == 0) {
        // 0x802290A4: addiu       $s0, $s2, 0xC
        ctx->r16 = ADD32(ctx->r18, 0XC);
            goto L_802290F8;
    }
    // 0x802290A4: addiu       $s0, $s2, 0xC
    ctx->r16 = ADD32(ctx->r18, 0XC);
    // 0x802290A8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802290AC: addiu       $a1, $s1, 0x180
    ctx->r5 = ADD32(ctx->r17, 0X180);
    // 0x802290B0: jal         0x8009A3B4
    // 0x802290B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    memcpy_recomp(rdram, ctx);
        goto after_8;
    // 0x802290B4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_8:
    // 0x802290B8: addu        $a0, $s0, $zero
    ctx->r4 = ADD32(ctx->r16, 0);
    // 0x802290BC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    // 0x802290C0: lbu         $v1, 0x1($s1)
    ctx->r3 = MEM_BU(ctx->r17, 0X1);
    // 0x802290C4: addu        $a2, $zero, $zero
    ctx->r6 = ADD32(0, 0);
    // 0x802290C8: addiu       $v0, $s2, 0x14
    ctx->r2 = ADD32(ctx->r18, 0X14);
    // 0x802290CC: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x802290D0: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x802290D4: lhu         $v1, 0x8($s2)
    ctx->r3 = MEM_HU(ctx->r18, 0X8);
    // 0x802290D8: ori         $a3, $zero, 0x8000
    ctx->r7 = 0 | 0X8000;
    // 0x802290DC: lui         $v0, 0x80
    ctx->r2 = S32(0X80 << 16);
    // 0x802290E0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x802290E4: lui         $v0, 0x488
    ctx->r2 = S32(0X488 << 16);
    // 0x802290E8: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x802290EC: or          $v1, $v1, $v0
    ctx->r3 = ctx->r3 | ctx->r2;
    // 0x802290F0: jal         0x80051E18
    // 0x802290F4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    func_80051E18_2D218(rdram, ctx);
        goto after_9;
    // 0x802290F4: sw          $v1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r3;
    after_9:
L_802290F8:
    // 0x802290F8: sw          $zero, 0x14($s2)
    MEM_W(0X14, ctx->r18) = 0;
L_802290FC:
    // 0x802290FC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80229100: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80229104: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80229108: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8022910C: jr          $ra
    // 0x80229110: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    TRACE_RETURN()
    return;
    // 0x80229110: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
